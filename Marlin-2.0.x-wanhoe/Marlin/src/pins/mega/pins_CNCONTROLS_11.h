/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
#pragma once

/**
 * CartesioV11 pin assignments
 */

#if !defined(__AVR_ATmega1280__) && !defined(__AVR_ATmega2560__)
  #error "Oops! Select 'Arduino/Genuino Mega or Mega 2560' in 'Tools > Board.'"
#endif

#define BOARD_INFO_NAME "CN Controls V11"

//
// Limit Switches
//
#define X_STOP_PIN         43
#define Y_STOP_PIN         45
#define Z_STOP_PIN         42

//
// Steppers
//
#define X_STEP_PIN         34
#define X_DIR_PIN          36
#define X_ENABLE_PIN       35

#define Y_STEP_PIN         37
#define Y_DIR_PIN          39
#define Y_ENABLE_PIN       38

#define Z_STEP_PIN         40
#define Z_DIR_PIN          48
#define Z_ENABLE_PIN       41

#define E0_STEP_PIN        29
#define E0_DIR_PIN         28
#define E0_ENABLE_PIN       3

#define E1_STEP_PIN        61
#define E1_DIR_PIN         62
#define E1_ENABLE_PIN      60

#define E2_STEP_PIN        15
#define E2_DIR_PIN         14
#define E2_ENABLE_PIN      16

#define E3_STEP_PIN        44
#define E3_DIR_PIN         49
#define E3_ENABLE_PIN      47

//
// Temperature Sensors
//
#define TEMP_0_PIN          0   // Analog Input
#define TEMP_1_PIN          3   // Analog Input.  3 for tool2 -> 2 for chambertemp
#define TEMP_2_PIN          2   // Analog Input.  9 for tool3 -> 2 for chambertemp
#define TEMP_3_PIN         11   // Analog Input. 11 for tool4 -> 2 for chambertemp
#define TEMP_BED_PIN        1   // Analog Input

#ifndef TEMP_CHAMBER_PIN
  //#define TEMP_CHAMBER_PIN 2  // Analog Input
#endif

//
// Heaters / Fans
//
#define HEATER_0_PIN        5
#define HEATER_1_PIN       58
#define HEATER_2_PIN       64
#define HEATER_3_PIN       46
#define HEATER_BED_PIN      2

#ifndef FAN_PIN
  //#define FAN_PIN         7   // common PWM pin for all tools
#endif

#define ORIG_E0_AUTO_FAN_PIN 7
#define ORIG_E1_AUTO_FAN_PIN 7
#define ORIG_E2_AUTO_FAN_PIN 7
#define ORIG_E3_AUTO_FAN_PIN 7

//
// Misc. Functions
//
#define SDSS               53
#define SD_DETECT_PIN      13

// Tools

//#define TOOL_0_PIN           4
//#define TOOL_1_PIN          59
//#define TOOL_2_PIN           8
//#define TOOL_3_PIN          30
//#define TOOL_PWM_PIN         7   // common PWM pin for all tools

// Common I/O

//#define FIL_RUNOUT_PIN      -1
//#define PWM_1_PIN           11
//#define PWM_2_PIN           10
//#define SPARE_IO            12

//
// LCD / Controller
//
#define BEEPER_PIN          6

// Pins for DOGM SPI LCD Support
#define DOGLCD_A0          26
#define DOGLCD_CS          24
#define DOGLCD_MOSI        -1
#define DOGLCD_SCK         -1

#define BTN_EN1            23
#define BTN_EN2            25
#define BTN_ENC            27

// Hardware buttons for manual movement of XYZ
#define SHIFT_OUT          19
#define SHIFT_LD           18
#define SHIFT_CLK          17

//#define UI1                31
//#define UI2                22

#define STAT_LED_BLUE_PIN  -1
#define STAT_LED_RED_PIN   31
