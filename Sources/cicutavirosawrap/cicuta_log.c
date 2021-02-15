#include "include/cicuta_log.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "include/File.h"
void cicuta_log(const char* format, ...)
{

    char *msg = NULL;
    va_list ap;
    va_start(ap, format);
    vasprintf(&msg, format, ap);
    printf("%s\n", msg);
    writetofile(msg);
    va_end(ap);
    free(msg);
}
