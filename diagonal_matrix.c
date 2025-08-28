#include<stdio.h>

int main(){
    int row,col;
    printf("Enter the row of matrix : ");
    scanf("%d",&row);
    printf("Enter the col of matrix : ");
    scanf("%d",&col);
    int arr[row][col];
    if(row == col){
    printf("Enter the digonal values : \n");
    for(int i = 0; i<row ; i = i+1){
        for(int j = 0 ; j<col; j = j+1){
            if(i==j){
                printf("Enter the %d val : ",j+1);
                scanf("%d",&arr[i][j]);
            }
            else{
                arr[i][j] = 0;
            }
        }
    }
    for(int i = 0 ; i < row; i = i+1){
        printf("\n\n");
        for(int j = 0 ; j<col; j = j+1){
            printf("%d\t",arr[i][j]);
        }
    }
    printf("\n");
}
else{
    printf("Matrix must be a square matrix");
}

    return 0;
}
