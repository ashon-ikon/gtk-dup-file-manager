# -----------------------------------------------------
#	Autoconf File
#	Written By Ashon Yinka 
#	01 Nov 2015
# -----------------------------------------------------
AC_INIT([dup-file-manager], [0.0.1], [gigalimit20 at yahoo dot com])

#
# We'll be storing our m4 files in 'm4' dir
AC_CONFIG_MACRO_DIR([m4])

AM_INIT_AUTOMAKE([-Wall -Werror foreign])

AC_PREREQ([2.66])

AC_PROG_CXX

AC_CONFIG_HEADERS([config.h])

# ===================
# Dependencies
PKG_CHECK_MODULES([DUPMANAGER], [gtkmm-3.0 >= 3.8.0])

# ===================
# Makefiles
AC_CONFIG_FILES([
	Makefile
	src/Makefile
])
AC_OUTPUT


echo ""
echo "All should be set to use dup-file-manager."
echo ""
echo ""
echo "Thanks for compiling"
echo ""
