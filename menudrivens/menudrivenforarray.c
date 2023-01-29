#include<stdio.h>
#include<stdlib.h>
//menudriven for array
int main(){
    int array[20],temp;
    int i,j,n,option,k,new,pos,delete,c=0;
    printf("enter number of elements in array\n");
    scanf("%d",&n);
    printf("enter the elements in array\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    while(1){
        printf(" enter your choice\n 1.sorting\n 2.remove duplicates\n 3.insertion\n 4.deletion\n 5.exit\n");
        scanf("%d",&option);
        switch(option){
            case 1:for(i=0;i<n;i++){
                       for(j=i+1;j<n;j++){
                               if(array[i]>array[j]){
                                temp=array[i];
                                array[i]=array[j];
                                array[j]=temp;
                               }
                       }

                   }
                   printf("resulting array after sorting is\n");
                   for(i=0;i<n;i++){
                    printf("%d\n",array[i]);
                   }
                   break;
            case 2:for(i=0;i<n;i++){
                      for(j=i+1;j<n;j++){
                          if(array[i]==array[j]){
                            for(k=j;k<n;k++){
                                array[k]=array[k+1];
                            }
                            n--;
                            j--;

                          }
                       
                      }
                   }
                   printf("after removing duplicates new array is\n");
                   for(i=0;i<n;i++){
                    printf("%d\n",array[i]);
                   }
                   break;
            case 3:printf("enter the position of element and enter new element to  insert\n");
                   scanf("%d%d",&pos,&new); 
                     if(pos<n&&pos>=0){
                          n++;
                          for(i=n;i>=pos-1;i--){
                                    array[i]=array[i-1];
                                    c++;   
                               }
                        array[pos-1]=new;
                         if(c=0){
                            printf("not found\n");
                         }
                         else{
                              printf("after inserting new element array look like\n");
                            for(i=0;i<n;i++){
                            printf("%d\n",array[i]);
                                 }
                         }
                        
                    }  
                    else{
                        printf("give valid position\n");
                    }      
                    break;
            case 4:printf("enter the element to delete\n");
                   scanf("%d",&delete);
                   for(i=0;i<n;i++){
                      if(array[i]==delete){
                                n--;
                            while(i<n-1){   
                             array[i]=array[i+1];
                             i++;                          
                            }
                            c++;
                      }
                   } 
                   if(c==0){
                    printf("not found\n");
                   }
                   else{
                   printf("after deleting a element array look like\n");
                   for(i=0;i<n;i++){
                     printf("%d\n",array[i]);
                   }
                   }
                   break;
            case 5:exit(0);
                   break;
            default:printf("invalid\n");              
        }
    }
}