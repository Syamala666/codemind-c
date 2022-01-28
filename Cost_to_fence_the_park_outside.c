#include<stdio.h>
int main()
{
    int l,b,w,c,a,tot;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    a=((l+2*w)*(b+2*w))-(l*b);
    tot=a*c;
    printf("%d",tot);
    return 0;
}