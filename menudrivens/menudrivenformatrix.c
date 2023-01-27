#include<stdio.h>
//menudriven for matrix
int main(){
        int option,matrix_1[10][10],matrix_2[10][10],final[10][10],i,j;
        while(1){
          printf("enter your choice\n 1.addition\n 2.multiplication\n 3.transpose\n 4.trace\n 5.exit\n");
          scanf("%d",&option);
           switch(option){
               case 1:int m,n,p,q;
                     printf("enter number of rows and columns in first matrix\n");
                     scanf("%d%d",&m,&n);
                     printf("enter number of rows and columns in second matrix\n");
                     scanf("%d%d",&p,&q);
                     for(i=0;i<m;i++){
                       for(j=0;j<n;j++){
                               scanf("%d",&matrix_1[i][j]);
                                 }

                            }
                      if(m==p&&n==q){
                        for(i=0;i<m;i++){
                            for(j=0;j<n;j++){
                                final[i][j]=matrix_1[i][j]+matrix_2[i][j];
                            }
                        }
                      }      

           }
  

        }

}