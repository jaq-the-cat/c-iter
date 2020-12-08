#include "iter.h"

int map_fn(int i, int v) {
    return v*2 + i;
}

int main() {
    int my_arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    map(my_arr, 10, &map_fn);
    for (int i=0; i<10; i++)
        printf("%d ", my_arr[i]);
    return 0;
}
