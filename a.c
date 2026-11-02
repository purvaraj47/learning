#include<stdio.h>

int main(){
    int arr[10];
    for (int i=0;i<10;i++){
        printf("Enter the value of element at %dth index\n", i);
        scanf("%d", &arr[i]);
    }
for(int j=0;j<10;j++){
for(int i=0;i<9-j;i++){
    if(arr[i]>arr[i+1]){
       int temp=arr[i+1];
       arr[i+1]=arr[i];
       arr[i]=temp;
    }
}}
 printf("Sorted Array: {");
for(int i=0;i<9;i++){
    printf("%d, ", arr[i]);
}
printf("%d}",arr[9]);
return 0;
}
