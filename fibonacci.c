//fibonacci series = sum of previous two number 
#include<stdio.h>    
int main()    
{   

 int num;    
 printf("Enter the number :");    
 scanf("%d",&num);  
 int a= fi(num );
 printf("%d",a);
 
}  
int fi(int n )
{
    if(n<=2){
 return n;
}
else
{
    return fi(n-1) +fi(n-2); 
}
    }
   