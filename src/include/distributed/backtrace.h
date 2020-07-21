/*
 * backtrace.h
 *
 * Backtrace utilities.
 *
 * Copyright (c) Citus Data, Inc.
 *
 *-------------------------------------------------------------------------
 */

#ifndef CITUS_BACKTRACE_H
#define CITUS_BACKTRACE_H

void Backtrace(int elevel);
void AssertBacktrace(void);
void SignalBacktrace(void);

#endif
