ACLOCAL_AMFLAGS = -I m4

bin_PROGRAMS = my-project
my_project_SOURCES = main.c strdup-printf.c
my_project_CFLAGS = -Wall
my_project_LDFLAGS =

TESTS = test-my-project test-strdup-printf

check_PROGRAMS = test-strdup-printf
test_strdup_printf_SOURCES = test-strdup-printf.c strdup-printf.c
test_strdup_printf_CFLAGS = -Wall @CHECK_CFLAGS@
test_strdup_printf_LDADD = @CHECK_LIBS@

