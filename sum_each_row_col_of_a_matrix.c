#include<stdio.h>

int main(){
    int row,col;
    printf("Enter the row value : ");
    scanf("%d",&row);
    printf("Enter the col value : ");
    scanf("%d",&col);
    int arr[row][col];
    int sum_row [row];
    int sum_col [col];

    //initialization of sum_row  array
    for(int  i = 0 ; i<row; i = i +1){
        sum_row[i] = 0;
    }
    //initialization of sum_col array
    for(int  i = 0 ; i<col; i = i +1){
        sum_col[i] = 0;
    }
    
    //summing of each row value
    for(int i = 0 ; i<row; i = i+1){
        printf("Enter the %d row value : \n",i+1);
        for(int j = 0 ; j<col; j = j+1){
            printf("Enter %d val : ",j+1);
            scanf("%d",&arr[i][j]);
            sum_row[i] = sum_row[i] + arr[i][j];
        }
    }
    //summing of each col value
    for(int i = 0 ; i<col; i = i+1){
        for(int j = 0 ; j<row; j = j+1){
            sum_col[i] = sum_col[i]+arr[j][i];
        }
    }
    
    //display each row sum
    printf("the sum of each row \n");
    for(int i= 0 ; i<row; i = i+1){
        printf("%d row sum  is  : %d\n",i+1,sum_row[i]);
    }

    //display each col sum
    printf("the sum of each col \n");
    for(int i= 0 ; i<col; i = i+1){
        printf("%d col sum  is  : %d\n",i+1,sum_col[i]);
    }

    return 0;
}
