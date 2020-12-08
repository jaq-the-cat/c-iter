#ifndef ITER_H
#define ITER_H

#include <stdlib.h>
#include <stdio.h>

#define true 1
#define false 0

void map(int*, int (*fun)(int, int));
void filter(int*, int (*fun)(int, int));
void for_each(int*, void (*fun)(int, int));

#endif
