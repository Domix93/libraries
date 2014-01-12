/*
  Print.h - Base class that provides print() and println()
  Copyright (c) 2008 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _TOOLS_H_
#define _TOOLS_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <inttypes.h>
#include <stdio.h> // for size_t
//#include <stdlib.h>
#include <string.h>

#ifdef __cplusplus
}
#endif

const static char endl = '\n';
const static char cr = '\r';

template<class T>
inline Print & operator <<(Print &out, T arg) {
	out.print(arg);
	return out;
}

size_t printBytes(Print & prn, const uint8_t * p, const uint8_t length, char sep = ' ') {
	size_t n = 0;
	int i = 0;
	while ( i < length ) {
		n += prn.print(*p>>4&0x0f, HEX);
		n += prn.print(*p&0x0f, HEX);
    p++;
		i++;
		if ( i < length)
			n += prn.print(sep);
	}
	return n;
}

#endif /* _TOOLS_H_ */