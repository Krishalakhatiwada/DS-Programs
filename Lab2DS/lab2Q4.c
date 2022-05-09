#include<stdio.h>
void primeFcatorization(int n,int i){
    if ((n%i)==0){
        printf("%d",i);
        (n!=i)?printf("x"):printf(" ");
        n/=i;
        primeFcatorization(n,1);

    }else if(i<n){
        primeFcatorization(n,(i+1));


    }
}
int main (){
    int num;
    printf("Enter a number:");
    sanf("%d",&num);
    if (num>0){
        printf("Prime factorization:");
        primeFcatorization(num,2);

    }else{
        printf("Invalid input!");

    }
    return 0;
}