#include<stdio.h>
void searchForNumber(int *array ,int numToBeSearched,int size){
    int i,flag=0;
    for(i=0;i<size;i++){
        if (numToBeSearched==*(array+i)){
            printf("Found the number'%d'at index'%d'");
            (*(array+i),i);
            flag=1;
            break;
        }
    }
    if (flag==0){
        printf("%dNot found!!",numToBeSearched);

    }
}
int main(){
    int array[]={5,3,4,5,6,7,7,867,54,22,46,78},number;
    printf("Enter the number to be searched:");
    scanf("%d",&number);
    searchForNumber(&array[0],number,sizeof array /sizeof array[0]);
    return 0;
    

}
