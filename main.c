/*
 * test2.c
 *
 *  Created on: Apr 12, 2025
 *      Author: PC
 */
#include <stdio.h>
#include "math.h"

int main() {
    int a = 20, b = 10;

    printf("Add: %d + %d = %d\n", a, b, add(a, b));
    printf("Subtract: %d - %d = %d\n", a, b, subtract(a, b));
    printf("Multiply: %d * %d = %d\n", a, b, multiply(a, b));
    printf("Divide: %d / %d = %d\n", a, b, divide(a, b));

    getchar ();
    getchar();
    return 0;
}
