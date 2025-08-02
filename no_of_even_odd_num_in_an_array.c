#include <stdio.h>

int main() {
    int arr[5] ={1,6,3,30,5};
    int e_count = 0 , o_count = 0 ;
    
    for(int i = 0 ; i<5; i++){
        if(arr[i]%2 == 0){
            e_count++;
        }
        else{
            o_count++;
        }
    }
    printf("e_count = %d\no_count = %d",e_count, o_count);

    return 0;
}
