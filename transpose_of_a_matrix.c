#include<stdio.h>

int main(){
    int row,col;
    printf("Enter the row of matrix : ");
    scanf("%d",&row);
    printf("Enter the col of matrix : ");
    scanf("%d",&col);
    int arr[row][col];
    int arr_trans[row][col];

    printf("Enter the values of matrix\n");
    for(int  i = 0 ; i<row; i = i+1){
        printf("Enter %d row data : \n",i+1);
        for(int j = 0 ; j<col; j = j+1){
            printf("Enter %d val : ",j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int  i = 0 ; i<row; i = i+1){
        for(int j = 0 ; j<col; j = j+1){
            arr_trans[j][i] = arr[i][j];
        }
    }
    printf("Original matrix\n");
    for(int  i = 0 ; i<row; i = i+1){
        printf("\n\n");
        for(int j = 0 ; j<col; j = j+1){
            printf("%d\t",arr[i][j]);
        }
    }
    printf("\nTranspose matrix\n");
    for(int  i = 0 ; i<col; i = i+1){
        printf("\n\n");
        for(int j = 0 ; j<row; j = j+1){
            printf("%d\t",arr_trans[i][j]);
        }
    }
    printf("\n");
    return 0;
}
