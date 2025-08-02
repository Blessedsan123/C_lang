#include <stdio.h>

int main() {
    int arr[5] ={1,6,3,30,5};
    int max = arr[0];
    int s_max;
    for(int i = 0 ; i < 5 ; i++){
        if(max<arr[i]){
            s_max = max;
            max = arr[i];
        }
        else if(arr[i] > s_max && arr[i] != max) {
            s_max = arr[i];
        }
    }
    printf("s_max = %d",s_max);

    return 0;
}
