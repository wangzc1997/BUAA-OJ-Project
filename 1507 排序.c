#include<stdio.h>

int main()
{
    double a,b,c,d,e,x,y,t;
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
    y=a/5+b/5+c/5+d/5+e/5;
    if(a<b)
    {
        t=a;
        a=b;
        b=t;
    }
    if(a<c)
    {
        t=a;
        a=c;
        c=t;
    }
    if(a<d)
    {
        t=a;
        a=d;
        d=t;
    }
    if(a<e)
    {
        t=a;
        a=e;
        e=t;
    }
    if(b<c)
    {
        t=b;
        b=c;
        c=t;
    }
    if(b<d)
    {
        t=b;
        b=d;
        d=t;
    }
    if(b<e)
    {
        t=b;
        b=e;
        e=t;
    }
    if(c<d)
    {
        t=c;
        c=d;
        d=t;
    }
    if(c<e)
    {
        t=c;
        c=e;
        e=t;
    }
    x=c;
    printf("%.lf\n%.2lf",x,y);
    return 0;
}
