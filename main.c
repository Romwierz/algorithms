#include <stdio.h>

void print_arr(int* arr, size_t len) {
    printf("{");
    for (size_t i = 0; i < len; i++) {
        if (len - i == 1) {
            printf("%d", arr[i]);
            break;
        }
        printf("%d, ", arr[i]);
    }
    printf("}\n");
}

void selection_sort(int* arr, size_t len) {
    printf("Unsorted array: ");
    print_arr(arr, len);

    for (size_t i = 0; i < len; i++) {
        size_t min_index = i;
        for (size_t j = i + 1; j < len; j++) {
            if (arr[j] < arr[min_index])
                min_index = j;
        }
        int tmp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = tmp;
    }

    printf("Sorted array: ");
    print_arr(arr, len);
}

int main(void) {
    int arr[] = {33, 12, -45, -23, 2, 4, 44, 88, -346709};
    size_t len = sizeof(arr) / sizeof(arr[0]);

    selection_sort(arr, len);

    return 0;
}
