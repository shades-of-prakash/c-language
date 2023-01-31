#include<stdio.h>
#include<math.h>
int main(){
       int a,b,c;
       float root1,root2,real,imaginary,det;
       printf("enter a,b and c of your equation\n");
       scanf("%d%d%d",&a,&b,&c);
       root1=(-b+sqrt(b*b-(4*a*c)))/(2*a);
       root2=(-b-sqrt(b*b-(4*a*c)));
       det=(b*b)-(4*a*c);
       if(det==0){
        printf("equation has equal roots\n");
        printf("%n.2f\n",root1);
         printf("%n.2f\n",root2);
       }
       else if(det<0){
          real=-b/2*a;
          imaginary=(4*a*c)-(b*b); 
          printf("the roots are imaginary\n");
          printf("%0.2f+i%0.2f\n",real,imaginary);
          printf("%0.2f-i%0.2f\n",real,imaginary);

       }
       else{
        printf("roots are real and distinct\n");
        printf("%0.2f",root1);
        printf("%0.2f",root2);
       }


}