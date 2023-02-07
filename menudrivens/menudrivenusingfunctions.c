#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int read(int n,char a[10][10]);
int display(int n,char a[10][10]);
int insert(int n,char a[10][10]);
int delete(int n,char a[10][10]);
int duplicates(int n,char a[10][10]);
int sorting(int n,char a[10][10]);
int i,j,k;
int main(){
       int n,option;
       char a[10][10];
          while(1){
        printf("enter your choicen\n1.read\n2.display\n3.insert\n4.deletion\n5.removedupplicates\n6.sorting\n7.exit\n");
        scanf("%d",&option);
        switch(option){
            case 1:n=read(n,a);
                   break;
            case 2:n=display(n,a);
                   break;
            case 3:n=insert(n,a);
                    break;
            case 4:n=delete(n,a);
                    break;  
            case 5:n=duplicates(n,a);
                    break;
            case 6:sorting(n,a);
                    break;
            case 7:exit(0);
                    break;                
            default:printf("fuck off\n");                                                  
        }
     }

}
int read(int n, char a[10][10]){
      printf("enter number of names\n");
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%s",a[i]);
        }
        return n;
     }
     
int display(int n,char a[10][10]){
        printf("the names are\n");
        for(i=0;i<n;i++){
            printf("%s\n",a[i]);
        }
      return n;

   }
int insert(int n,char a[10][10]){
    int pos;
    char new[10];
    printf("enter postion and name to insert\n");
    scanf("%d%s",&pos,new);
    if(pos<=n&&pos>1){
           n++;
           for(i=n-1;i>=pos;i--){
           strcpy(a[i],a[i-1]);          
           }
           strcpy(a[pos-1],new);
           display(n,a);
       
    }
    else{
        printf("invalid\n");
    }
    
}
int delete(int n,char a[10][10]){
    char del[10];
    printf("enter the element to delete\n");
    scanf("%s",del);
    for(i=0;i<n;i++){
        if((strcmp(a[i],del)==0)){
            n--;
            while(i<n){
                strcpy(a[i],a[i+1]);
                i++;
            }
        }
    }
    display(n,a);
    
}
int duplicates(int n,char a[10][10])
{
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((strcmp(a[i],a[j])==0))
            for(k=j;k<n;k++)
            {
                strcpy(a[k],a[k+1]);
            
            }
            n--;
            j--;
        }
    }
    printf("after removing duplicates\n");
    display(n,a);
    return n;


}
int sorting(int n,char a[10][10]){
      char temp[10];
       for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if((strcmp(a[i],a[j])>0)){
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
       }
       printf("the after sorting elments\n");
       display(n,a);
}

