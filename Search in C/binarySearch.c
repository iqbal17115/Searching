#include<stdio.h>
int main(){
int sizeOfArray,i;
printf("Enter the size of array :");
scanf("%d",&sizeOfArray);
int array[sizeOfArray];
printf("Enter %d elements for the array :",sizeOfArray);
for(i=0;i<sizeOfArray;i++){
    scanf("%d",&array[i]);
}
int key,p=0;
printf("Enter the key for search :");
scanf("%d",&key);
int start=0,end=sizeOfArray-1,mid;
do{
    mid=(start+end)/2;
    printf("Start :%d\tMid :%d\tEnd :%d\tMidValue :%d\tKey :%d\n",start,mid,end,array[mid],key);
    if(array[mid]==key){
        printf("Found at position :%d\n",(mid+1));
        p=1;
        break;
    }
    else if(array[mid]>key){
        end=mid-1;
    }
    else if(array[mid]<key){
    start=mid+1;
    }
}while(start>=end);
if(p==0){
    printf("%d is not found in the array.\n",key);
}
}
