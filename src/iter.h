#ifndef ITER_H
#define ITER_H

#include <stdlib.h>
#include <stdio.h>

#define true 1
#define false 0

void map(int*, int, int (*)(int, int));
int filter(int*, int, int (*)(int, int));
void for_each(int*, int, void (*)(int, int));

#endif
