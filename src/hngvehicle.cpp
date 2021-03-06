/*
    The code should not be re-ditributed without the permission of lulzmodder
    Copyright (C) 2015  lulzmodder
    
    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.
    
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    
    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
    */
    
#include "hngvehicle.h"

DWORD GET_VEHICLE_HASH(std::string model_name)
{
	for (int i = 0; i < 323; i++)
		if (vehicle_array[i].compare(model_name) == 0)
			return vehicle_hashes[i];
	return -1;
}

void GET_VEHICLE_NAME(DWORD Hash, std::string& name)
{
	for (int i = 0; i < 323; i++)
	{
		if (vehicle_hashes[i] == Hash)
		{
			name = vehicle_array[i];
			return;
		}
	}
	name = "";
}
