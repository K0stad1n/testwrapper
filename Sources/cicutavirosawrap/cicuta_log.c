#include "include/cicuta_log.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
void cicuta_log(const char* format, ...)
{
    FILE *f;
    f = fopen("scores.dat", "rb+");
    if(f == NULL)
    {
        f = fopen("scores.dat", "wb");
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
