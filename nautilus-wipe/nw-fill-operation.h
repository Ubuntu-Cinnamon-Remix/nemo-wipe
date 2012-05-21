/*
 *  nautilus-wipe - a nautilus extension to wipe file(s)
 * 
 *  Copyright (C) 2009-2011 Colomban Wendling <ban@herbesfolles.org>
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

#ifndef NW_FILL_OPERATION_H
#define NW_FILL_OPERATION_H

#include <glib.h>
#include <glib-object.h>
#include <gsecuredelete/gsecuredelete.h>

G_BEGIN_DECLS


/**
 * NwFillOperationError:
 * @NW_FILL_OPERATION_ERROR_MISSING_MOUNT: A file have no mount
 * @NW_FILL_OPERATION_ERROR_REMOTE_MOUNT: A mount is not local
 * @NW_FILL_OPERATION_ERROR_FAILED: An error occurred
 * 
 * Possible errors from the %NW_FILL_OPERATION_ERROR domain.
 */
typedef enum
{
  NW_FILL_OPERATION_ERROR_MISSING_MOUNT,
  NW_FILL_OPERATION_ERROR_REMOTE_MOUNT,
  NW_FILL_OPERATION_ERROR_FAILED
} NwFillOperationError;

/**
 * NW_FILL_OPERATION_ERROR:
 * 
 * Domain for error coming from a NautilusWipe's fill operation.
 */
#define NW_FILL_OPERATION_ERROR (nw_fill_operation_error_quark ())

GQuark   nw_fill_operation_error_quark  (void) G_GNUC_CONST;
gboolean nw_fill_operation_filter_files (GList    *paths,
                                         GList   **work_paths_,
                                         GList   **work_mounts_,
                                         GError  **error);
GsdAsyncOperation  *nw_fill_operation   (GList                       *files,
                                         gboolean                     fast,
                                         GsdSecureDeleteOperationMode mode,
                                         gboolean                     zeroise,
                                         GCallback                    finished_handler,
                                         GCallback                    progress_handler,
                                         gpointer                     data,
                                         GError                     **error);


G_END_DECLS

#endif /* guard */
