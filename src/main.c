#include "iter.h"

int map_fn(int i, int v) {
    return v*2 + i;
}

int filter_fn(int i, int v) {
    return v <= 5;
}

int main() {
    int map_arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    map(map_arr, 10, &map_fn);
    for (int i=0; i<10; i++)
        printf("%d ", map_arr[i]);

    printf("\n");

    int filter_arr_0[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    const int new_len = filter(filter_arr_0, 10, &filter_fn);
    int filter_arr_1[new_len];
    for (int i=0; i<new_len; i++) {
        filter_arr_1[i] = filter_arr_0[i];
        printf("%d ", filter_arr_1[i]);
    }
    return 0;
}
