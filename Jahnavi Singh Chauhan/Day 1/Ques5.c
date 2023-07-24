//Program to find the array type (even, odd or mixed array)

#include <stdio.h>

int getArrayType(int arr[], int size) {
    int hasEven = 0;
    int hasOdd = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            hasEven = 1;
        } else {
            hasOdd = 1;
        }
    }

    if (hasEven && hasOdd) {
        return 3; 
    } else if (hasEven) {
        return 1; 
    } else {
        return 2; 
    }
}

int main() {
    int arr[MAX_SIZE];
    int size;

    printf("Enter the size of the array (up to %d): ", MAX_SIZE);
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid size. Please enter a valid size up to %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int arrayType = getArrayType(arr, size);

    switch (arrayType) {
        case 1:
            printf("The array is an even array.\n");
            break;
        case 2:
            printf("The array is an odd array.\n");
            break;
        case 3:
            printf("The array is a mixed array.\n");
            break;
        default:
            printf("Invalid array type.\n");
            break;
    }

    return 0;
}