#include<stdio.h>
int main(){
  int n,i;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int array[n],key;
    printf("Enter %d elements :",n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the for search  :");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(key == array[i]){
            printf("Key value %d is found at position %d \n",key,i+1);
            break;
        }
    }
}
