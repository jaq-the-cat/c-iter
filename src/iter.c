#include "iter.h"

#define CALL(f, ...) (*f)(__VA_ARGS__)

void map(int* arr, int len, int (*fun)(int, int)) {
    for (int i=0; i<len; i++)
        arr[i] = CALL(fun, i, arr[i]);
}

int filter(int* arr, int len, int (*fun)(int, int)) {
    int i=0;
    for (int j=0; j<len; j++)
        if (CALL(fun, i, arr[i])) {
            arr[i] = arr[j];
            i++;
        }
    return i+1; // len
}

void for_each(int* arr, int len, void (*fun)(int, int)) {
    for (int i=0; i<len; i++)
        CALL(fun, i, arr[i]);
}
