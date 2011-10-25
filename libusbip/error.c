/**
 * libusbip - error.c
 * Copyright (C) 2011 Manuel Gebele
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
 **/

#include "error.h"
#include <stdio.h>

void error_illegal_libusbip_rpc_info_struct(const char *func) {
    fprintf(stderr, "[Error] %s - Illegal libusbip_rpc_info struct\n", func);
}

void error_illegal_libusbip_connection_info_struct(const char *func) {
    fprintf(stderr, "[Error] %s - Illegal libusbip_connection_info struct\n", func);
}