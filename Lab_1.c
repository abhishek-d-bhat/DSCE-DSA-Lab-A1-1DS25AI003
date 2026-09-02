#include <stdio.h>

void traversal(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
void LS(int arr[], int key, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("\nFound at position %d", i);
            break;
        }
    }
}
void insertion(int pos, int val, int arr[], int n) {
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
}
void deletion(int arr[], int n, int pos) {
    for (int i = pos; i < n; i++) {
        arr[i] = arr[i + 1];
    }
}
void sum(int arr[], int n) {
    int tot = 0;
    for (int i = 0; i < n; i++) {
        tot += arr[i];
    }
    printf("\nThe total sum is %d", tot);
}
int main() {
    int a[5];
    printf("Enter Array elements\n");
    for(int i=0; i<5; i++){
        scanf("%d", &a[i]);
    }
    int n = sizeof(a) / sizeof(a[0]);
    //Traversal
    traversal(a, n);
    //Linear search
    LS(a, 3, n);
    //Min_Max
    int min = a[0];
    int max = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
    }
    printf("\nThe Maximum and Minimum are %d and %d respectively.\n", max, min);
    //Insertion
    insertion(4, 5, a, n);
    traversal(a, n);
    //Deletion
    deletion(a, n, 4);
    printf("\n");
    traversal(a, n);
    sum(a, n);
    return 0;
}
