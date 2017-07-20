/* Allocator selection.
 *
 * This file is used in order to change the triemap allocator.
 * You can define the following to your custom allocator, or leave as is for the libc default. */

#ifndef __TRIEMAP_ALLOC_H__
#define __TRIEMAP_ALLOC_H__

#define triemap_malloc malloc
#define triemap_realloc realloc
#define triemap_calloc calloc
#define triemap_free free

#endif