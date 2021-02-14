#include "include/cicuta_log.h"
#include <stdlib.h>
#include <stdarg.h>
FILE *f = fopen("log.txt","w");
void cicuta_log(const char* format, ...)
{
    char *msg = NULL;
    va_list ap;
    va_start(ap, format);
    vasprintf(&msg, format, ap);
    printf("%s\n", msg);
    fprintf(f, "%s\n", msg);
    va_end(ap);
    free(msg);
    fclose(f);
}
