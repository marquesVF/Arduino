/*
  ESP8266LoWPAN.h - A 6LowPAN implementation based on RFC 4944, RFC 6282 and RFC 7400.
  Supports only one simultaneous client, knows how to handle GET and POST.

  Copyright (c) 2017 Vinicius de F. Marques. All rights reserved.

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
  Modified 8 May 2015 by Hristo Gochkov (proper post and file upload handling)
*/

#ifndef ESP8266LOWPAN_H
#define ESP8266LOWPAN_H

class ESP8266LOWPAN{
public:
  int test();
};


#endif //ESP8266LOWPAN_H
