/*
 * include/linux/input/alternativewake.h
 *
 * Copyright (c) 2016, Haruka Yusa <haruka.yusa@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef _LINUX_ALTERNATIVEWAKE_H
#define _LINUX_ALTERNATIVEWAKE_H

#include <linux/input/doubletap2wake.h>
#include <linux/input/sweep2wake.h>

extern bool scr_suspended;
extern bool altwake_chk;

#endif	/* _LINUX_ALTERNATIVEWAKE_H */
