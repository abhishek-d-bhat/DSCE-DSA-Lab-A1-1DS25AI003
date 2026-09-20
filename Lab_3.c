#include <stdio.h>
 //5.print upper triangular
void Upper(int m, int n, int a[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j) {
                printf("%d ", a[i][j]);
            }
        }
    }
}
//6.sum of every rows
void SumOfRows(int rows, int cols, int a[3][3]) {
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += a[i][j];
        }
        printf(" sum of %d row is %d\n", i + 1, sum);
    }
}




//1.linearSearch in 2D array
void linearSearch(int a[3][3], int key) {
    int found = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] == key) {
                printf("Element found at [%d][%d]\n", i, j);
                found = 1;
            }
        }

    }
    if (found == 0) {
        printf("Element is not found in the matrix!");
    }
}
//2.Mini-Max in 2D array
void miniMaxSum(int arr_count, int * arr) {
    int min = arr[0];
    int max = arr[0];
    int sum = 0;
    for (int i = 0; i < arr_count; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (max < arr[i]) {
            max = arr[i];
        }
        sum += arr[i];
    }
    printf("%d %d", sum - max, sum - min);
}
//3.Sum of elementas
int sumArray(int a[3][3])
{
    int i, j, sum = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum = sum + a[i][j];
        }
    }
    return sum;
}





//9.print lower triangular
void lower(int m, int n, int a[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (j <= i) {
                printf("%d ", a[i][j]);
            }
        }
    }
}
//10.sum of every columns
void SumOfCols(int rows, int cols, int a[3][3]) {
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += a[j][i];
        }
        printf(" sum of %d column is %d\n", i + 1, sum);
    }
}

int main()     
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("Linear Search\n");
    linearSearch(a,4);
    printf("Mini-Max-Sum\n");
    miniMaxSum(3,a);
    printf("\nSum of all elements\n%d", sumArray(a));
    printf("\nUpper Triangular elements:\n");
    Upper(3,3,a);
    printf("\nSum of every Rows:\n");
    SumOfRows(3,3,a);
    printf("Lower Triangular elements are:\n");
    lower(3,3,a);
    printf("\nSum of every columns:\n");
    SumOfCols(3,3,a);
    
    return 0;
}