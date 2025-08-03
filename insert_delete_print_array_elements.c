#include <stdio.h>

void insert_element_array(int n, int arr[n]){
    int val,pos;
    printf("enter value to be insert : ");
    scanf("%d",&val);
    printf("enter position to be insert : ");
    scanf("%d",&pos);
    arr[pos] = val;
}
void delete_element_array(int n, int arr[n]){
    int pos;
    printf("enter position wants to delete the value : ");
    scanf("%d",&pos);
    arr[pos] = 0;
}

void print_array(int n, int arr[n]){
    for(int i = 0 ; i< n; i++){
        printf("pos %d value : %d\n",i+1,arr[i]);
    }
}

int main() {
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
        printf("enter %d num : ",i+1);
        scanf("%d",&arr[i]);
    }
    int choice;
    while(choice != 3){
        printf("enter 0 for insert any value\nenter 1 for delete any value\nenter 2 for print thae array\nenter 3 for exit\n");
        printf("enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 0 : insert_element_array(n,arr);
            break;
            case 1 : delete_element_array(n,arr);
            break;
            case 2 : print_array(n,arr);
            break;
            case 3 : printf("exit");
            break;
            default : printf("invalid choice !");
        }
    }

    return 0;
}
