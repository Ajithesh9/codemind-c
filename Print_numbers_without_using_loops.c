#include<stdio.h>
int main()
{ 
    int n,i=1;
    scanf("%d",&n); 
    if(n>=1&&n<=10000)
    {
        number:{ printf("%d ",i);
        i++;
        if(i<=n)
        { 
            goto number;
            }
            } 
        
    } else 
    { 
        printf("The Number Series is Not Possible Print"); 
    
}
    
}