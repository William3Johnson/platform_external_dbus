/* -*- mode: C; c-file-style: "gnu" -*- */
/* dbus-protocol.h  D-Bus protocol constants
 *
 * Copyright (C) 2002  CodeFactory AB
 *
 * Licensed under the Academic Free License version 1.2
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#ifndef DBUS_PROTOCOL_H
#define DBUS_PROTOCOL_H

/* Don't include anything in here from anywhere else. It's
 * intended for use by any random library.
 */

#ifdef  __cplusplus
extern "C" {
#endif

/* Message byte order */
#define DBUS_LITTLE_ENDIAN ('l')  /* LSB first */
#define DBUS_BIG_ENDIAN    ('B')  /* MSB first */    

/* Data types */
#define DBUS_TYPE_INVALID       0
#define DBUS_TYPE_INT32         1
#define DBUS_TYPE_UINT32        2
#define DBUS_TYPE_DOUBLE        3
#define DBUS_TYPE_INT32_ARRAY   4
#define DBUS_TYPE_UINT32_ARRAY  5
#define DBUS_TYPE_DOUBLE_ARRAY  6
#define DBUS_TYPE_BYTE_ARRAY    7
#define DBUS_TYPE_STRING        8
  
/* Header fields */
#define DBUS_HEADER_FIELD_NAME    "name"
#define DBUS_HEADER_FIELD_SERVICE "srvc"
#define DBUS_HEADER_FIELD_REPLY	  "rply"

#ifdef __cplusplus
}
#endif

#endif /* DBUS_PROTOCOL_H */
