/*
 * drivers/video/sun4i/disp/OSAL/OSAL_Parser.c
 *
 * (C) Copyright 2007-2012
 * Allwinner Technology Co., Ltd. <www.allwinnertech.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#include "OSAL_Parser.h"

int OSAL_Script_FetchParser_Data(char *main_name, char *sub_name, int value[], int count)
{
	return script_parser_fetch(main_name, sub_name, value, count);
}

int OSAL_sw_get_ic_ver(void)
{
    enum sw_ic_ver ic_ver;
    int ret = 0xA;

    ic_ver = sw_get_ic_ver();
    if(ic_ver == MAGIC_VER_A)
    {
        ret = 0xA;
    }
    else if(ic_ver == MAGIC_VER_B)
    {
        ret = 0xB;
    }
    if(ic_ver == MAGIC_VER_C)
    {
        ret = 0xC;
    }

    return ret;
}
