#include<iostream>
using namespace std;
int findminx(int num[],int k){
    int x=1;
    while(true){
        int j;
        for(j=0;j<k;j++){
            if(x%num[j]!=num[j]){
                break;

            }
        }
        if(j==k){
            return k;

        }else{
            return x;

        }
    }
}
int main(){
    int num[]={3,4,5};
    int num[]={2,3,1};
    int k=sizeof(num)/sizeof(num[0]);
    cout<<"x is :"<<findminx(num,k);
}