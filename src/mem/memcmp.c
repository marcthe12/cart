/*
 * Copyright (c) 2023 Marc Pervaz Boocha
 *
 * SPDX-License-Identifier: MIT
 */

/*
 * Copyright (c) 2023 Marc Pervaz Boocha
 *
 * SPDX-License-Identifier: MIT
 */
#include <mem.h>

int calt_memcmp(const void *ptr1, const void *ptr2, size_t count) {
	if(ptr1 == ptr2){
		return 0;
	}

	const unsigned char *p1 = ptr1;
	const unsigned char *p2 = ptr2;

	while (count-- > 0) {
		if (*p1 != *p2) {
			return (*p1 < *p2) ? -1 : 1;
		}
		p1++;
		p2++;
	}

	return 0;
}

