#include<conio.h>
#include<stdio.h>
void main()
 {
    int n[10],num,target,i,j,flag=0;
    printf("enter the number of elements=");
    scanf("%d",&num);
    printf("enter the target=");
    scanf("%d",&target);
    printf("enter elements=");
    for ( i = 0; i < num; i++)
    {
        scanf("%d",&n[i]);
    }
    for ( i = 0; i < num; i++)
    {
       for ( j = 0; j < num;j++)
       {
         if(n[i]+n[j]==target)
           {
            if(i==j)
             {

             }
            else if(i>j)
             {

             } 
            else
            {
                printf("[%d,",i);
                printf("%d]",j);
                flag=1;
                
            } 
           }
          
       }
       
    }
    
if(flag==0)
{
    printf("no pair of elements meets target ");
}
else
{
    printf("this is result");
}
    
 }