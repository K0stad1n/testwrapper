#include "include/cicuta_log.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
void cicuta_log(const char* format, ...)
{
    FILE *f = fopen("log.txt", "at");
    if (!f) f = fopen("log.txt", "wt");
    if (!f) {
        printf("can not open logfile.txt for writing.\n");
        return;
    }
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
