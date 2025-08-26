#include <stdio.h>

int main() {
    int n1,n2,n3;
    printf("Enter the first arry length : ");
    scanf("%d",&n1);
    printf("Enter the second arry length : ");
    scanf("%d",&n2);
    n3 = n1+n2;
    int arr1[n1];
    int arr2[n2];
    int arr3[n3];
    printf("first array value : \n");
    for(int i = 0 ; i<n1; i++){
        printf("Enter %d val : ",i+1);
        scanf("%d",&arr1[i]);
        arr3[i] = arr1[i];
    }
    printf("Second array value : \n");
    for(int i = 0 ; i<n2; i++){
        printf("Enter %d val : ",i+1);
        scanf("%d",&arr2[i]);
        arr3[n1+i] = arr2[i];
    }
    printf("The Third Array is  : ");
    for(int i = 0 ; i<n3; i++){
       printf("%d  val is : %d\n",i+1,arr3[i]);
    }
    return 0;
}
