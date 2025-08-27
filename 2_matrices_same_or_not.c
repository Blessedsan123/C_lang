#include<stdio.h>

int main(){
    int n;
    int count;
    printf("Enter the length of array : ");
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
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
    for(int i = 0 ; i<n;i++){
        if(arr1[i] == arr2[i]){
            count++;
        }
    }
    if(count == n){
        printf("Matries are equal\n");
    }
    else{
        printf("Matries are not equal\n");
    }
    return 0;
}
