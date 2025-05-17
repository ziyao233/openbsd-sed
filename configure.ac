#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.72])
AC_INIT([openbsd-sed], [0.1.0])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CC

safe_CFLAGS="$CFLAGS"
CFLAGS="-Wall"
AC_MSG_CHECKING([whether compiler accepts -Wall])
AC_COMPILE_IFELSE(
	[AC_LANG_PROGRAM([[ ]], [[ return 0; ]])],
	[
		safe_CFLAGS="$safe_CFLAGS -Wall"
		AC_MSG_RESULT([yes])
	],
	[	AC_MSG_RESULT([no])	])
CFLAGS="$safe_CFLAGS"

# Checks for libraries.

AC_SEARCH_LIBS(errc, bsd, [ ], [ AC_MSG_ERROR([libbsd not found]) ])

# Checks for header files.
AC_CHECK_HEADERS([fcntl.h sys/ioctl.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_C_INLINE
AC_TYPE_SIZE_T
AC_TYPE_SSIZE_T

# Checks for library functions.
AC_FUNC_ERROR_AT_LINE
AC_FUNC_MALLOC
AC_FUNC_REALLOC
AC_CHECK_FUNCS([isascii memchr memmove memset regcomp strchr strtol strtoul])

AC_CONFIG_FILES([Makefile])
AM_INIT_AUTOMAKE([1.8])

AC_OUTPUT
