#include <stdio.h>
    int main() {
    int arr[3] = {0, 1, 2};
    int *ptr = arr;
    *ptr++ += ++*ptr;
    printf("%d %d %d\n", arr[0], arr[1], arr[2]);
    return 0;
}