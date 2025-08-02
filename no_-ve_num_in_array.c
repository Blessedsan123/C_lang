#include <stdio.h>

int main() {
    int arr[5] ={1,-6,3,30,5};
    int n_count = 0;
    
    for(int i = 0 ; i<5; i++){
        if(arr[i]<0){
            n_count++;
        }
    }
    printf("n_count = %d",n_count);

    return 0;
}
