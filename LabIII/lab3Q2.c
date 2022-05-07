#include <stdio.h>
#include<stdbool.h>
 bool modusToollens (bool arr[4],bool arr2[4]){

 }
 int main(){
     int i,j;
     int result[4];
     bool q[4]={true,false,true,false};
     bool p[4]={true,true,false,false};
     for (i=0;i<4;i++){
         if (p[i]== true && q[i]==false){
             result[i]=0;

         }
         else{
             result[i]=1;

         }

     }
      for(i=0;i<4;i++){
         printf ("%d\n",result[i]);

     }

     for(i=0;i<4;i++){
         printf ("%d\n",!q[i]);

     }
     return 0;
 }

    
