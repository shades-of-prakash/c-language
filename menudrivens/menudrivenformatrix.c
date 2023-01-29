#include<stdio.h>
#include<stdlib.h>
//menudriven for matrix
int main(){
        int option,matrix_1[10][10],matrix_2[10][10],final[10][10],i,j;
        int m,n,p,q,k,trace=0;  //varible names for rows and columns for matices
        while(1){
          printf("tell me what to do with matrices\n 1.addition\n 2.multiplication\n 3.transpose\n 4.trace\n 5.exit\n");
          scanf("%d",&option);
           switch(option){
               case 1:printf("enter number of rows and columns in first matrix\n");
                      scanf("%d%d",&m,&n);
                      printf("enter number of rows and columns in second matrix\n");
                      scanf("%d%d",&p,&q);
                      if(m==p&&n==q){
                            printf("matrices are eligible for adding\n");
                            printf("enter elements in matrix 1 \n");
                            for(i=0;i<m;i++){
                                for(j=0;j<n;j++){
                                        scanf("%d",&matrix_1[i][j]);
                                }
                            }
                            printf("enetr elements in matrix 2 \n");
                            for(i=0;i<p;i++){
                                for(j=0;j<q;j++){
                                        scanf("%d",&matrix_2[i][j]);
                                }
                            }
                            for(i=0;i<m;i++){
                                for(j=0;j<n;j++){
                                        final[i][j]=matrix_1[i][j]+matrix_2[i][j];
                                }
                            }
                            printf("after adding two matrices the new matrix obtained is\n");
                            for(i=0;i<m;i++){
                                for(j=0;j<n;j++){
                                        printf("%d\t",final[i][j]);
                                }
                                printf("\n");
                            }

                         }
                         break;
                case 2:printf("enter number of rows and columns in first matrix\n");
                      scanf("%d%d",&m,&n);
                      printf("enter number of rows and columns in second matrix\n");
                      scanf("%d%d",&p,&q);
                      if(n==p){
                           printf("matrices are eligible for multiplication\n");
                            printf("enter elements in matrix 1 \n");
                            for(i=0;i<m;i++){
                                for(j=0;j<n;j++){
                                        scanf("%d",&matrix_1[i][j]);
                                }
                            }
                            printf("enetr elements in matrix 2 \n");
                            for(i=0;i<p;i++){
                                for(j=0;j<q;j++){
                                        scanf("%d",&matrix_2[i][j]);
                                }
                            }
                            for(i=0;i<m;i++){
                                for(j=0;j<n;j++){
                                  final[i][j]=0;
                                  for(k=0;k<n;k++){
                                        final[i][j]=final[i][j]+matrix_1[i][k]*matrix_2[k][j];
                                  }
                                }
                            }
                            printf("after multipying to matrices resuitng matrix is\n ");
                            for(i=0;i<m;i++){
                                for(j=0;j<q;j++){
                                        printf("%d",final[i][j]);
                                }
                                printf("\n");
                            }
                      }  
                case 3:printf("enter number of rows and columns in matrix\n");
                       scanf("%d%d",&m,&n);
                       printf("enter elements in matrix\n");
                       for(i=0;i<m;i++){
                        for(j=0;j<n;j++){
                                scanf("%d",&matrix_1[i][j]);
                        }
                       }
                       for(i=0;i<m;i++){
                        for(j=0;j<n;j++){
                                final[j][i]=matrix_1[i][j];
                        }
                       }
                       printf("after transpose the given matrix,matrix look like\n");
                       for(i=0;i<n;i++){
                        for(j=0;j<m;j++){
                                printf("%d\t",final[i][j]);
                        }
                        printf("\n");
                       }
                       break;
                case 4:printf("please make sure that m and n are equal,since we cam find trace for only square matrix\n");
                       printf("enter number of rows and columns in matrix\n");
                       scanf("%d%d",&m,&n);
                       printf("enter elements in matrix\n");
                       if(m==n){
                       for(i=0;i<m;i++){
                        for(j=0;j<n;j++){
                                scanf("%d",&matrix_1[i][j]);
                        }
                       }       
                       for(i=0;i<m;i++){
                         for(j=0;j<n;j++){
                                if(i==j){
                                        trace=trace+matrix_1[i][i];
                                }
                         }
                       }
                       }
                        printf("the trace of the matrix is %d\n",trace);
                        break;
                case 5:exit(0);
                       break;
                default:printf("INVALID\n");                 
                       
                               
           }
  

        }

}