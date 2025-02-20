#include <stdio.h>

#include "arithmetic/arithmetic.h"
#include "tempconverter/tempconverter.h"

int main() {
    double add_result = add(1, 2);
    printf("add_result: %lf\n", add_result);

    double fahrenheit = celsius_to_fahrenheit(100);
    printf("fahrenheit: %lf\n", fahrenheit);
}