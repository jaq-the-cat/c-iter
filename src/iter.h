#ifndef ITER_H
#define ITER_H

#include <stdlib.h>
#include <stdio.h>

typedef struct {
    int v;
    int b;
} FMR;

void map(int*, int, int (*)(int, int));
int filter(int*, int, int (*)(int, int));
int filter_map(int*, int, FMR (*)(int, int));
void for_each(int*, int, void (*)(int, int));

#endif
