/*
 * Copyright (C) 2003 Robert Kooima
 *
 * NEVERBALL is  free software; you can redistribute  it and/or modify
 * it under the  terms of the GNU General  Public License as published
 * by the Free  Software Foundation; either version 2  of the License,
 * or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT  ANY  WARRANTY;  without   even  the  implied  warranty  of
 * MERCHANTABILITY or  FITNESS FOR A PARTICULAR PURPOSE.   See the GNU
 * General Public License for more details.
 */

#include "glext.h"

/*---------------------------------------------------------------------------*/

#ifdef _WIN32

PFNGLACTIVETEXTUREPROC   glActiveTextureARB   = NULL;
PFNGLMULTITEXCOORD2DPROC glMultiTexCoord2dARB = NULL;

void glext_init(void)
{
    glActiveTextureARB   = (PFNGLACTIVETEXTUREPROC)
        wglGetProcAddress("glActiveTextureARB");
    glMultiTexCoord2dARB = (PFNGLMULTITEXCOORD2DPROC)
        wglGetProcAddress("glMultiTexCoord2dARB");
}

#else

void glext_init(void)
{
    /* Nothing to do! */
}

#endif /* _WIN32 */

/*---------------------------------------------------------------------------*/
