#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;

    printf("Array elements:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]); 
        sum += arr[i];
    }
    printf("\nSum: %d\n", sum);

    int target = 3;
    int found = 0;
    for(int i = 0; i < 5; i++) {
        if(arr[i] == target) {
            found = 1;
            break;
        }
    }
    if(found)
        printf("%d is in the array\n", target);
    else
        printf("%d is not in the array\n", target);

    return 0;
}