#include<stdio.h>

int main(){
    int m,n;
    int sum = 0;
    printf("Enter the row of array : ");
    scanf("%d",&m);
    printf("Enter the col of array : ");
    scanf("%d",&n);
    int arr1[m][n];

    printf("Enter values in array 1 \n");
    for(int i = 0 ;i<m; i++){
        printf("Enter %d row val : \n",i+1);
        for(int j = 0 ; j < n; j++){
        printf("Enter %d val : ",j+1);
        scanf("%d",&arr1[i][j]);
        }
    }
    for(int i = 0 ; i< m ; i++){
        for(int j = 0 ; j< n ; j++){
        if(i == j){
            sum = sum + arr1[i][j];
        }
    }
    }
    printf("Sum is : %d\n",sum);
    return 0;
}
