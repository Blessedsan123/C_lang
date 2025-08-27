#include <stdio.h>

int main() {
    int n;
    printf("Enter the array length : ");
    scanf("%d",&n);
    int arr[n];
    int arr_even[n];
    int arr_odd[n];
    
    int j = 0;
    int l = 0 ;
    printf("Enter array values : \n");
    for(int i = 0 ; i<n ; i++){
        printf("Enter %d val : ",i+1);
        scanf("%d",&arr[i]);
    }
    
    for(int i= 0;i<n; i++){
        if(arr[i]%2 == 0){
            arr_even[j] = arr[i];
            j++;
        }
        else{
            arr_odd[l] = arr[i];
            l++;
        }
    }
    printf("The even array values : \n");
    for(int i = 0 ; i<j ; i++){
        printf("%d val is : %d\n",i+1,arr_even[i]);
    }
    printf("The odd array values : \n");
    for(int i = 0 ; i<l ; i++){
        printf("%d val is : %d\n",i+1,arr_odd[i]);
    }

    return 0;
}
