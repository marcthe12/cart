/*
 * Copyright (c) 2023 Marc Pervaz Boocha
 *
 * SPDX-License-Identifier: MIT
 */
#ifndef CALT_ERR_H
#define CALT_ERR_H

enum calt_err {
	CALT_OK = 0,
	CALT_ERR_UNKNOWN = 1,
	CALT_ERR_NULL = 2,
	CALT_ERR_OP_NOT_IMPLEMENTED = 3,
	CALT_ERR_OOM = 4,
	CALT_ERR_INVALID_ARGUEMENT = 5,
};


extern void calt_set_err(enum calt_err *err, enum calt_err code);
extern char* calt_errstr(enum calt_err err);

#endif
