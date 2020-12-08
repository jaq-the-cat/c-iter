#include "iter.h"

int x = 0;

int map_fn(int i, int v) {
    return v*2 + i;
}

int filter_fn(int i, int v) {
    return v <= 5;
}

FMR fmap_fn(int i, int v) {
    return (FMR) {v * 2, v <= 5};
}

void for_each_fn(int i, int v) {
    x++;
}

int main() {
    int map_arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    map(map_arr, 10, &map_fn);
    for (int i=0; i<10; i++)
        printf("%d ", map_arr[i]);

    printf("\n");

    int filter_arr_0[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    const int nl0 = filter(filter_arr_0, 10, &filter_fn);
    int filter_arr_1[nl0];
    for (int i=0; i<nl0; i++) {
        filter_arr_1[i] = filter_arr_0[i];
        printf("%d ", filter_arr_1[i]);
    }

    printf("\n");

    int fm_arr_0[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    const int nl1 = filter_map(fm_arr_0, 10, &fmap_fn);
    int fm_arr_1[nl1];
    for (int i=0; i<nl1; i++) {
        fm_arr_1[i] = fm_arr_0[i];
        printf("%d ", fm_arr_1[i]);
    }

    printf("\n");

    int fe_arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    for_each(fe_arr, 10, &for_each_fn);
    printf("%d\n", x);
    return 0;
}
