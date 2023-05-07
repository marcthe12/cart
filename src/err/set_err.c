/*
 * Copyright (c) 2023 Marc Pervaz Boocha
 *
 * SPDX-License-Identifier: MIT
 */

#include <err.h>

void calt_set_err(enum calt_err *err, enum calt_err code) {
	if (err) {
		*err = code;
	}
}
