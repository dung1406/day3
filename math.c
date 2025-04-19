/*
 * math.c
 *
 *  Created on: Apr 12, 2025
 *      Author: PC
 */


// math.c
#include "math.h"

// Hàm cộng
int add(int a, int b) {
    return a + b;
}

// Hàm trừ
int subtract(int a, int b) {
    return a - b;
}

// Hàm nhân
int multiply(int a, int b) {
    return a * b;
}

// Hàm chia
int divide(int a, int b) {
    if (b != 0)
        return a / b;
    else
        return 0; // hoặc xử lý lỗi chia cho 0
}
