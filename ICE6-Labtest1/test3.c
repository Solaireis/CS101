#include <stdio.h>
int *f(){
    int arr[3]={8,0,5};
    return arr;
} // This function has a error , you must use the array within the fn until it ends, it cannot be used anymore

void g(int arr[],int len){
    //print all the numbers in the array on line line seperated by one space
    for (int i=0; i<len; i++){
        printf("%d ",arr[i]);
    }
}
int main(void){
    int arr[3] = { 8,0,5};
    int arr[] = f();
    g(arr, 3);

    printf("\n%d\n",arr[0]);
    return 0;
}