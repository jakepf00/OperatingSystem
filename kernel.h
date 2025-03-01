#pragma once

// Defined as a macro so __FILE__ and __LINE__ display the correct error location
// do-while ensures code in block is run once
// ##__VA_ARGS__ removes preceding , if variable arguments are empty
#define PANIC(fmt, ...) \
do { \
    printf("PANIC: %s:%d: " fmt "\n", __FILE__, __LINE__, ##__VA_ARGS__); \
    while (1) {} \
} while (0)

struct sbiret {
    long error;
    long value;
};
