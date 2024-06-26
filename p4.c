#include <stdio.h>
#include <limits.h>

void printSecondLargest(int arr[], int arr_size) {
    int i, first, second;

    if (arr_size < 2) {
        printf("Invalid Input\n");
        return;
    }

    first = second = INT_MIN;
    for (i = 0; i < arr_size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i]!= first)
            second = arr[i];
    }
    if (second == INT_MIN)
        printf("There is no second largest element\n");
    else
        printf("The second largest element is %d\n", second);
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printSecondLargest(arr, n);
    return 0;
}
