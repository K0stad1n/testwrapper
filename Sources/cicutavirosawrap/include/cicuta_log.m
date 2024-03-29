#import <Foundation/Foundation.h>
#include "cicuta_log.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "File.h"
void cicuta_log(const char* format, ...)
{
    char *msg = NULL;
    va_list ap;
    va_start(ap, format);
    vasprintf(&msg, format, ap);
    printf("%s\n", msg);
    NSString *message = [NSString stringWithFormat:@"%s", msg];
    va_end(ap);
    free(msg);
}
