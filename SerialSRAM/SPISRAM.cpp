/*
 Copyright (c) 2010 by arms22 (arms22 at gmail.com)
 Microchip 23x256 SPI SRAM library for Arduino

 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

#include <Arduino.h>
#include <SPI.h>

#include "SPISRAM.h"

SPISRAM::SPISRAM(const byte csPin, const byte addr_width) :
		_csPin(csPin), _addrbus(addr_width), _writept(0), _readpt(0) {
}

void SPISRAM::init() {
	pinMode(_csPin, OUTPUT);
	csHigh();
	//
	select();
	writeStatusRegister(SEQ_MODE);
	deselect();
	_writept = 0;
	_readpt = 0;
}

byte SPISRAM::read(const long & address) {
	byte data;
	_readpt = address;
	select();
	set_access(READ, _readpt);
	data = SPI.transfer(0);
	deselect();
	_readpt++;
	return data;
}

void SPISRAM::read(const long & address, byte *buffer, const long & size) {
	select();
//	SPI.transfer(WRSR);
//	SPI.transfer(SEQ_MODE);
	//
	byte * p = buffer;
	_readpt = address;
	set_access(READ, _readpt);
	for (unsigned int i = 0; i < size; i++)
		*p++ = SPI.transfer(0);
	deselect();
	_readpt += size;
}

void SPISRAM::write(const long & address, byte data) {
	_writept = address;
	select();
	set_access(WRITE, _writept);
	SPI.transfer(data);
	deselect();
	_writept++;
}

void SPISRAM::write(const long & address, byte *buffer, const long & size) {
	_writept = address;
	select();
//	SPI.transfer(WRSR);
//	SPI.transfer(SEQ_MODE);
	//
	set_access(WRITE, _writept);
	for (unsigned int i = 0; i < size; i++)
		SPI.transfer(*buffer++);
	deselect();
	_writept += size;
}

int SPISRAM::available(void) {
	if (_addrbus == 16 ) {
		_writept &= 0xffff;
		_readpt &= 0xffff;
		return _writept - _readpt;
	} else if (_addrbus == 24 ) {
		_writept &= 0xffffffL;
		_readpt &= 0xffffffL;
		return _writept - _readpt;
	}
}


void SPISRAM::setSPIMode(void) {
	SPI.setBitOrder(MSBFIRST);
	SPI.setClockDivider(SPI_CLOCK_DIV4);
	SPI.setDataMode(SPI_MODE0);
}

void SPISRAM::csLow() {
	digitalWrite(_csPin, LOW);
}

void SPISRAM::csHigh() {
	digitalWrite(_csPin, HIGH);
}

void SPISRAM::select(void) {
	setSPIMode();
	csLow();
}

void SPISRAM::deselect(void) {
	csHigh();
}
