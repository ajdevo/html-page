#include<stdio.h>
int main()
{
int c=0,v,n=1,k=0;
printf("Enter no.");
scanf("%d",&v);
while(c<=v)
{for(int i=2;i<=n/2;i++)
 {
   if(n%i==0)
   {k=1;
    break;
   }
 }
   if(k==0)
   { printf("%d ",n);
     c++;
   }
n++;
}
return 0;
}
