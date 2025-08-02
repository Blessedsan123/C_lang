#include <stdio.h>

int main() {
    int arr[5] = {1,-2,4,-5,6};
    int max = arr[0];
    int min = arr[0];
    for(int i = 0 ; i<5 ; i++){
       if(max<arr[i]){
           max = arr[i];
       }
       if(min>arr[i]){
           min = arr[i];
       }
    }
    printf("max array element : %d \nmin array element : %d",max,min);
   
    return 0;
}
