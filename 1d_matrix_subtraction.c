#include<stdio.h>

int main(){
    int n;
    printf("Enter the length of array : ");
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    int arr3[n];
    printf("Enter values in array 1 \n");
    for(int i = 0 ;i<n; i++){
        printf("Enter %d val : ",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("Enter values in array 2 \n");
    for(int i = 0 ;i<n; i++){
        printf("Enter %d val : ",i+1);
        scanf("%d",&arr2[i]);
    }
    printf("Substraction of two matrices is : \n");
    for(int i = 0 ; i < n ; i++){
        arr3[i] = arr1[i]-arr2[i];
        printf("%d val is : %d\n",i+1,arr3[i]);
    }
    return 0;
}
