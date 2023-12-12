#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

/* C libraries */
#include <stdio.h>
#include <math.h>

/* Functions Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_arr(int *array, size_t l, size_t r);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif
