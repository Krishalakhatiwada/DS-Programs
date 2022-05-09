#include<stdio.h>
#include<conio.h>
int main(){
    int x0,x1;
    int o,c,m;
    int i,n;
    int array[20];
    printf("Enter the read value x0:");
    scanf("%d",&x0);
    printf("\n");
    printf("Enter the constant multiplier a:");
    scanf("%d",&m);

    printf("\nHow many random number you want to generate?");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        x1=(o*x0+c)%m;
        array[i]=x1;
        x0=x1;


    }
    printf("\n The generated random no. are:");
    for ( i=0;i<n;i++){
        printf("%d ",array[i]);
        printf("\t");
        getch();
        return 0;
        
    }

}