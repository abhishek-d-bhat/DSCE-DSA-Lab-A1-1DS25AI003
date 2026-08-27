#include <stdio.h>

void insert(int pos, int val, int arr[], int n) {
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
}

void delete_at(int pos, int arr[], int n) {
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
}
void search(int val, int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == val) {
            printf(" Found at %d\n", i);
            break;
        }
    }
}
int main() {
    int i;
    int arr[6] = {
        1,
        2,
        3,
        4
    };
    insert(3, 5, arr, 6);
    int n = sizeof(arr) / sizeof(arr[0]);
    delete_at(4, arr, 6);
    search(3, arr, 6);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;

}
