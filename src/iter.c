#include "iter.h"

#define CALL(f, ...) (*f)(__VA_ARGS__)

void map(int* arr, int len, int (*fun)(int, int)) {
    for (int i=0; i<len; i++)
        arr[i] = CALL(fun, i, arr[i]);
}

int filter(int* arr, int len, int (*fun)(int, int)) {
    int i=0;
    for (int j=0; j<len; j++)
        if (CALL(fun, j, arr[j])) {
            arr[i] = arr[j];
            i++;
        }
    return i; // len
}

int filter_map(int* arr, int len, FMR (*fun)(int, int)) {
    int i=0;
    FMR r;
    for (int j=0; j<len; j++)
        if ((r = CALL(fun, j, arr[j])).b) {
            arr[i] = r.v;
            i++;
        }
    return i; // len
}

void for_each(int* arr, int len, void (*fun)(int, int)) {
    for (int i=0; i<len; i++)
        CALL(fun, i, arr[i]);
}
