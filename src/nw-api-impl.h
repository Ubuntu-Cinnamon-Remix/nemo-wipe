/*
 *  nemo-wipe - a nemo extension to wipe file(s)
 *
 *  Copyright (C) 2016 Colomban Wendling <ban@herbesfolles.org>
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public
 *  License as published by the Free Software Foundation; either
 *  version 3 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public
 *  License along with this library; if not, write to the Free
 *  Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

/* Selects the Nemo API implementation */

#ifndef NW_API_IMPL_H
#define NW_API_IMPL_H

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <libnemo-extension/nemo-menu-provider.h>
#include <libnemo-extension/nemo-file-info.h>
# define NW_NEMO_DESKTOP_URI "x-nemo-desktop:///"

G_END_DECLS

#endif /* guard */
