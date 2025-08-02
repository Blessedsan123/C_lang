#include <stdio.h>

int main() {
    int arr[5] = {1,-2,4,-5,6};
    int sum =0 ;
    for(int i = 0 ; i<5 ; i++){
       sum = sum+arr[i];
           }
    printf("sum of all array elements : %d",sum);
    return 0;
}
