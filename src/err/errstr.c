/*
 * Copyright (c) 2023 Marc Pervaz Boocha
 *
 * SPDX-License-Identifier: MIT
 */

#include <err.h>

char* calt_errstr(enum calt_err err){
	switch (err) {
		case CALT_OK:
			return "No Error";
		case CALT_ERR_NULL:
			return "Null Pointer";
		case CALT_ERR_OOM:
			return "Unable to Allocate Memmory(Out of Memmory)";
		case CALT_ERR_OP_NOT_IMPLEMENTED:
			return "Operation has not been implemented";
		case CALT_ERR_INVALID_ARGUEMENT:
			return "Invalid Arguement";
		case CALT_ERR_UNKNOWN:
		default:
			return "Unknown Error";
	}
}
