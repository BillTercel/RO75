/* Copyright 2021 QMK
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

#include_next <halconf.h>

#undef HAL_USE_ADC
# define HAL_USE_ADC TRUE

#undef HAL_USE_UART
# define HAL_USE_UART   TRUE

#undef HAL_USE_PAL           //Enables IRQ sources
# define HAL_USE_PAL    TRUE

#undef HAL_USE_PWM
#define HAL_USE_PWM TRUE





