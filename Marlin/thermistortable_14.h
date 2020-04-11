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
// Vector 3 100k thermistor Calculated using with a 10kohm pullup, voltage divider
// derived from temptable_5 and extrapalated from the table supplied by Eaglemoss in the 2017 June firmware update.
// beta = 4092
// Calculated using 10kohm pullup, voltage divider math, and manufacturer provided temp/resistance
const short temptable_14[][2] PROGMEM = {
  {    1 * OVERSAMPLENR, 713 },
  {   12 * OVERSAMPLENR, 300 }, // top rating 300C
  {   14 * OVERSAMPLENR, 290 },
  {   16 * OVERSAMPLENR, 280 },
  {   19 * OVERSAMPLENR, 270 },
  {   22 * OVERSAMPLENR, 260 },
  {   25 * OVERSAMPLENR, 250 },
  {   27 * OVERSAMPLENR, 240 },
  {   32 * OVERSAMPLENR, 230 },
  {   40 * OVERSAMPLENR, 220 },
  {   49 * OVERSAMPLENR, 210 },
  {   58 * OVERSAMPLENR, 200 },
  {   69 * OVERSAMPLENR, 190 },
  {   84 * OVERSAMPLENR, 180 },
  {  102 * OVERSAMPLENR, 170 },
  {  124 * OVERSAMPLENR, 160 },
  {  150 * OVERSAMPLENR, 150 },
  {  185 * OVERSAMPLENR, 140 },
  {  228 * OVERSAMPLENR, 130 },
  {  278 * OVERSAMPLENR, 120 },
  {  338 * OVERSAMPLENR, 110 },
  {  409 * OVERSAMPLENR, 100 },
  {  482 * OVERSAMPLENR,  90 },
  {  568 * OVERSAMPLENR,  80 },
  {  651 * OVERSAMPLENR,  70 },
  {  729 * OVERSAMPLENR,  60 },
  {  800 * OVERSAMPLENR,  50 },
  {  862 * OVERSAMPLENR,  40 },
  {  909 * OVERSAMPLENR,  30 },
  {  948 * OVERSAMPLENR,  20 },
  {  976 * OVERSAMPLENR,  10 },
  {  995 * OVERSAMPLENR,   0 }
};
