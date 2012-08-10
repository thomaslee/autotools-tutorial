#include <stdio.h>
#include <stdarg.h>
#include <malloc.h>

#include "strdup-printf.h"

char *
strdup_printf (const char *fmt, ...)
{
    char *temp;
    int len;
    va_list args;

    va_start (args, fmt);
    len = vsnprintf (NULL, 0, fmt, args);
    va_end (args);

    temp = malloc (len + 1);
    if (temp == NULL) return NULL;

    va_start (args, fmt);
    vsnprintf (temp, len+1, fmt, args);
    va_end (args);

    return temp;
}

