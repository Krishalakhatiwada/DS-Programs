#include<stdio.h>
void display(int arr[],int n)
{
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);

    }
    printf("\n");

}
void insertionSort(int arr[],int n){
    for (int i=0;i<n;i++){
        int tmp=arr[i];
        int j=i-1;
        while(tmp<arr[i]&& j>=0){
            arr[j+1]=arr[j];
            --j;
        }
        arr[j+1]=tmp;

    }
    
}

int main(){
    int arr[]={3,5,4,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Elements before sorting:\n");
    display(arr,n);
    insertionSort(arr,n);
    display(arr,n);
}