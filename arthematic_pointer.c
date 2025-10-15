#include <stdio.h>

int main() {
    int n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;
    printf("Value at ptr: %d\n", *ptr);

    printf("Enter the index to increment the pointer: ");
    int index;
    scanf("%d", &index);

    ptr += index;
    printf("Value at ptr after increment: %d\n", *ptr);

    printf("Enter the index to decrement the pointer: ");
    scanf("%d", &index);

    ptr -= index;
    printf("Value at ptr after decrement: %d\n", *ptr);

    return 0;
}

