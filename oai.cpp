#include <stdio.h>

int isprime(int num,int num2,int check)
{
    if(num%num2==0&&num%1==0)
    {
        check++;
    }
    else if(num2>=num)
    {
        return check;
    }
    isprime(num,num2+1,check);
    
}
int main() {
    int tc;
    
    scanf("%d",&tc);
    int num=0;
    for(int a=0;a<tc;a++)
    {
    scanf("%d",&num);
    int benar=isprime(num,1,0);
    if(benar==2)
    {
    printf(" Case #%d: it's is prime\n",a+1);
    }
   else
   {
       printf("Case #%d: it's not prime\n",a+1);
   }
        
    }
    
    return 0;
}
