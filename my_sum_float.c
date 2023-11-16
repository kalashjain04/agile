#include <stdint.h>
#include <stdarg.h>

float my_sum_float(int32_t num_args, ...) {
    va_list ap;
    va_start(ap, num_args);
    
    float total = 0.0;

    for (int i = 0; i < num_args; i++) {
        total += va_arg(ap, double);
    }

    va_end(ap);

    return total;
}
