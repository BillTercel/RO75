/* Copyright 2021 JasonRen(biu)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once


/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
#define DYNAMIC_KEYMAP_LAYER_COUNT 4   //层定义
#define TAP_CODE_DELAY 15

#define MATRIX_ROWS 6
#define MATRIX_COLS 15

/* RGB settings PWM_CHANNEL A6  A7  B0 B1 */
#define WS2812_PWM_DRIVER PWMD3
#define WS2812_PWM_CHANNEL  1
#define WS2812_PWM_PAL_MODE 1
#define WS2812_PWM_DMA_STREAM STM32_DMA1_STREAM3
#define WS2812_PWM_DMA_CHANNEL 3

#define HOLD_ON_OTHER_KEY_PRESS
#define TAP_HOLD_CAPS_DELAY 150

#define RGB_POWER_SW_PIN B0                     //rgb power switch


