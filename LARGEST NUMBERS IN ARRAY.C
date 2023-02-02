#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int max = 0;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Largest element in the array: %d\n", max);
    return 0;
}
