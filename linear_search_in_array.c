#include <stdio.h>

int main() {
    int n;
    printf("Enter the array length : ");
    scanf("%d",&n);
    int arr[n];
    int search;
    int val_got = 0 ;
    printf("Enter array values : \n");
    for(int i = 0 ; i<n ; i++){
        printf("Enter %d val : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the val search for : ");
    scanf("%d",&search);
    
    for(int i = 0 ; i<n; i++){
        if(search == arr[i]){
            val_got = arr[i];
        }
    }
    if(val_got){
        printf("searched val got : %d\n",val_got);
    }
    else{
        printf("Search failed !\n");
    }
    
    return 0;
}
