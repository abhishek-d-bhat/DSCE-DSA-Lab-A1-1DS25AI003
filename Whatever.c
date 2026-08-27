#include <stdio.h>

void insert(int pos, int val, int arr[], int n){
    for(int i=n; i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=val;
}
int main() {
    int i;
    int arr[6] = {
        1,
        2,
        3,
        4
    };
    insert(3,5,arr,6);
    int n = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < n; i++) {
        printf("%d \n", arr[i]);
    }
    
    return 0;

}