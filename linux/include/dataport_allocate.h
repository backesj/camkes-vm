/*
 * Copyright 2016, Data 61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(D61_GPL)
 */

#ifndef __DATAPORT_ALLOCATE_H_
#define __DATAPORT_ALLOCATE_H_

#include <stdlib.h>

int dataport_allocate(int fd, size_t size);

#endif
