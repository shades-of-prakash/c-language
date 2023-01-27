#include<stdio.h>
#include<stdlib.h>//if we use this header file,we can use exit in menudriven
#include<math.h>
//menudriven for numbers 
int main(){
     int a,n,y,fact,sum=0,c=0,i,m,r=0;
     /* a is given number
        n is choice 
        fact used to get factorial
        c is count 
        m is temporary variable
        r is reverse of number
     */
     printf("enter a number\n");
     scanf("%d",&a);
     while(1){
         printf(" ENTER YOUR CHOICE:\n 1.STRONG NUMBER\n 2.ARMSTRONG NUMBER \n 3.PERFECT NUMBER\n 4.PALINDROME NUMBER\n 5.PRIME NUMBER\n 6.EXIT\n");
         scanf("%d",&n);
         switch(n){
             case 1://strong number
                    /*Strong number is a special number whose sum of the factorial of digits is equal to the original number*/
                   m=a;  
                   while(a>0){
                         y=a%10;
                         fact=1;
                         for(i=1;i<=y;i++){
                               fact=fact*i;
                         }
                         sum=sum+fact;
                         a=a/10;

                   }
                   if(sum==m){
                   printf("%d is strong number\n",m);
                   }
                   else{
                    printf("%d is not strong number\n",m);
                   } 
                   break;

         case 2://armstrong number
                /*armstrong number is a number that is equal to the sum of cubes of its digits*/ 
                 m=a;
                  while(a>0){
                     a=a/10;
                     c++;
                  } 
                  a=m;
                  while(a>0){
                      y=a%10;
                      sum=sum+pow(y,3);
                      a=a/10;

                  }
                  if(sum==m){
                  printf("%d is armstrong number\n",m);
                  }
                  else{
                    printf("%d is not armstorng number\n",m);
                  }
                  break;
           
          case 3://perfect number
                 /* a perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself.*/
                 for(i=1;i<a;i++){
                            if(a%i==0){
                                sum=sum+i;
                            }
                  }
                  if(sum==a){
                    printf("%d is perfect number\n",a);
                  }
                  else{
                    printf("%d is not perfect number\n",a);
                  }    
                  break;
          case 4://palindrome number
                 /* A palindrome number is a number that is same after reverse*/
                 m=a;
                 while(a>0){
                     y=a%10;
                     r=(r*10)+y;
                     a=a/10;
                
                 }   
                 if(r==m){
                    printf("%d is palindrome number\n",m);
                 }
                 else{
                    printf("% d is not palindrome number\n",m);
                 }
                 break;

         case 5://prime number
                /*A prime number is a whole number greater than 1 whose only factors are 1 and itself*/
                i=1;
                while(i<=a){
                       if(a%i==0){
                            c++;
                       }
                       i++;
                    } 
                    if(c==2){
                        printf("%d is prime number\n",a);
                    } 
                    else{
                        printf("%d is not prime number\n",a);
                    }  
                    break;    
          case 6:exit(0);        


        }

      
       }



}