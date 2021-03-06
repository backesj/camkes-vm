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

#include <string.h>

#include <camkes.h>
#include <string_reverse.h>

static void reverse_dataport_string(volatile char *src, volatile char *dest, size_t n) {

    int len = strnlen((char*)src, n - 1);

    for (int i = 0; i < len; i++) {
        dest[i] = src[len - i - 1];
    }

    dest[len] = '\0';
}

int run(void) {

    set_putchar(putchar_putchar);

    while (1) {
        ready_wait();

        reverse_dataport_string(src_dp, dest_dp, STRING_REVERSE_BUFSIZE);

        done_emit();
    }

    return 0;
}
