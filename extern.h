/*	$OpenBSD: extern.h,v 1.16 2024/07/17 20:57:16 millert Exp $ */
/*-
 * Copyright (c) 1992 Diomidis Spinellis.
 * Copyright (c) 1992, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Diomidis Spinellis of Imperial College, University of London.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	from: @(#)extern.h	8.1 (Berkeley) 6/6/93
 */

extern struct s_command *prog;
extern struct s_appends *appends;
extern regmatch_t *match;
extern size_t maxnsub;
extern u_long linenum;
extern size_t appendnum;
extern int Eflag, aflag, eflag, nflag;
extern int pledge_wpath, pledge_rpath;
extern const char *fname, *outfname;
extern FILE *infile, *outfile;

void	 cfclose(struct s_command *, struct s_command *);
void	 compile(void);
void	 cspace(SPACE *, const char *, size_t, enum e_spflag);
char	*cu_getline(char **, size_t *);
__attribute__((noreturn)) void error(const char *, ...) __attribute__((__format__ (printf, 1, 2)));
void	warning(const char *, ...) __attribute__((__format__ (printf, 1, 2)));
int	 mf_getline(SPACE *, enum e_spflag);
int	 lastline(void);
void	 finish_file(void);
void	 process(void);
void	 resetstate(void);
char	*strregerror(int, regex_t *);
void	*xmalloc(size_t);
void	*xreallocarray(void *, size_t, size_t);
void	*xrealloc(void *, size_t);
