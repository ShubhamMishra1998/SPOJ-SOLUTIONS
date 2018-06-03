#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d%d%d",&a,&b,&c);
    while(a!=0||b!=0||c!=0)
    {
        if(b-a==c-b){
           d=b-a;
           e=c+d;
           printf("AP %d\n",e);}
        else if(a/b==b/c){
            f=c/b;
            g=c*f;
            printf("GP %d\n",g);}
        scanf("%d%d%d",&a,&b,&c);
    }
    return 0;
} 
