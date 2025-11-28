/*
The ceil of x in a sorted array =
the smallest element in the array which is ≥ x.
So:
If x exists in the array = return the first occurrence index.
If not = return index of next greater element.
If no greater element = return -1.
Array: [1, 2, 8, 10, 11, 12, 19]
x = 5 Ceil = 8 (smallest ≥ 5)
x = 10 Ceil = 10 (exact match)
x = 20 Ceil = does not exist → return -1
*/
#include <stdio.h>
int findCeil(int arr[], int n, int x) {
    int low = 0, high = n - 1; /* low and high define the part of the array we are searching.
result = -1 → if no element ≥ x is found.
    */
    int result = -1;  // default if no ceil exists
    while (low <= high) {  //Keep searching until low crosses high.
        int mid = (low + high) / 2;
        if (arr[mid] >= x) {
            // arr[mid] is a possible ceil
            result = mid;      // save
            high = mid - 1;    // check if there is a smaller ceil on the left
        } else {
            // arr[mid] < x = search right side
            low = mid + 1;
        }
    }
    return result;
}
int main() {
    int arr[] = {1, 1, 2, 8, 10, 11, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    printf("Enter x: ");
    scanf("%d", &x);

    int index = findCeil(arr, n, x);

    if (index != -1)
        printf("Ceil index: %d\n", index);
    else
        printf("-1\n");  // no ceil exists

    return 0;
}
