/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Custom Bitmap for splashscreen
 *
 * You may use one of the following tools to generate the C++ bitmap array from
 * a black and white image:
 *
 *  - http://www.marlinfw.org/tools/u8glib/converter.html
 *  - http://www.digole.com/tools/PicturetoC_Hex_converter.php
 */
//custom screen can be up to 112 wide and 64 high

//#include <avr/pgmspace.h>

#define CUSTOM_BOOTSCREEN_TIMEOUT   4000
#define CUSTOM_BOOTSCREEN_BMPWIDTH  128
#define CUSTOM_BOOTSCREEN_BMPHEIGHT 64
/**
 * Made with Marlin Bitmap Converter
 * http://marlinfw.org/tools/u8glib/converter.html
 *
 */
const unsigned char custom_start_bmp[1024] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x07, 0x80, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x07, 0x80, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x10, 0x3F, 0xC0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x07, 0x80, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x70, 0xFF, 0xE0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0x80, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x73, 0xE0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0x9C, 0xE0, 0xF8, 0x00, 0x00, 0x03, 0xE0, 0x20, 0xE0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0x9C, 0xE3, 0xFE, 0x00, 0x00, 0x07, 0xC0, 0x00, 0xE0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0x9C, 0xE7, 0xFE, 0x00, 0x00, 0x1F, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0xBD, 0xC7, 0x0F, 0x00, 0x00, 0x1C, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0xBD, 0xC7, 0x07, 0x00, 0x00, 0x1C, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0xBF, 0xCF, 0xFF, 0x00, 0x00, 0x1F, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0xB7, 0xCF, 0xFF, 0x00, 0x00, 0x07, 0xC0, 0x00, 0xE0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0xB7, 0xC7, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0xF0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0xF7, 0xC7, 0x80, 0x00, 0x00, 0x00, 0xF0, 0x60, 0xF0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0xE7, 0xC7, 0xEE, 0x00, 0x00, 0x00, 0x70, 0xFF, 0xE0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0xE7, 0xC3, 0xFF, 0x00, 0x00, 0x00, 0x10, 0x7F, 0xE0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0xE3, 0x80, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x0F, 0x01, 0xC3, 0xC0, 0x78, 0x00, 0x80, 0x01, 0x00, 0x02, 0x00, 0x10, 0x00, 0x00,
0x00, 0x00, 0x0F, 0x81, 0xC3, 0xC1, 0xFE, 0x07, 0xF0, 0x0F, 0xC0, 0x1F, 0x80, 0xFE, 0x00, 0x00,
0x00, 0x00, 0x1F, 0x81, 0xC3, 0xC3, 0xFF, 0x1F, 0xF8, 0x1F, 0xE0, 0x3F, 0xC3, 0xFF, 0x00, 0x00,
0x00, 0x00, 0x1F, 0x81, 0xC3, 0xC7, 0xC6, 0x0E, 0x7C, 0x3C, 0xF0, 0x79, 0xE1, 0xCF, 0x80, 0x00,
0x00, 0x00, 0x1D, 0xC1, 0xC3, 0xC7, 0x80, 0x04, 0x3C, 0x38, 0x70, 0x70, 0xE0, 0x87, 0x80, 0x00,
0x00, 0x00, 0x39, 0xC1, 0xC3, 0xCF, 0x00, 0x00, 0x1C, 0x38, 0x38, 0x70, 0x70, 0x03, 0x80, 0x00,
0x00, 0x00, 0x39, 0xC1, 0xFF, 0xCF, 0x00, 0x00, 0x3C, 0x39, 0x38, 0x72, 0x70, 0x07, 0x80, 0x00,
0x00, 0x00, 0x39, 0xE1, 0xFF, 0xCF, 0x1F, 0x00, 0x38, 0x7B, 0xB8, 0xF7, 0x70, 0x07, 0x00, 0x00,
0x00, 0x00, 0x38, 0xE1, 0xFF, 0xCF, 0x1F, 0x00, 0x78, 0x7F, 0xB8, 0xFF, 0x70, 0x0F, 0x00, 0x00,
0x00, 0x00, 0x70, 0xE1, 0xC3, 0xCF, 0x1F, 0x00, 0xF0, 0x7B, 0xB8, 0xF7, 0x70, 0x1E, 0x00, 0x00,
0x00, 0x00, 0x7F, 0xE1, 0xC3, 0xCF, 0x07, 0x01, 0xE0, 0x38, 0x38, 0x70, 0x70, 0x3C, 0x00, 0x00,
0x00, 0x00, 0x7F, 0xF1, 0xC3, 0xC7, 0x07, 0x03, 0xC0, 0x38, 0x78, 0x70, 0xF0, 0x78, 0x00, 0x00,
0x00, 0x00, 0xF0, 0x71, 0xC3, 0xC7, 0x87, 0x07, 0x80, 0x38, 0x70, 0x70, 0xE0, 0xF0, 0x00, 0x00,
0x00, 0x00, 0xE0, 0x71, 0xC3, 0xC3, 0xFF, 0x0F, 0xFE, 0x1F, 0xF0, 0x3F, 0xE1, 0xFF, 0xC0, 0x00,
0x00, 0x00, 0xE0, 0x79, 0xC3, 0xC3, 0xFF, 0x1F, 0xFE, 0x1F, 0xE0, 0x3F, 0xC3, 0xFF, 0xC0, 0x00,
0x00, 0x01, 0xE0, 0x79, 0xC3, 0xC0, 0xFC, 0x1F, 0xFE, 0x0F, 0xC0, 0x1F, 0x83, 0xFF, 0xC0, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
