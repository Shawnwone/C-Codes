#include<stdio.h>

int main(){
    int *p;
    int a=0,b=1,c=2;
    printf("%d,%d,%d\n",a,b,c);
    p=&a;
    p=&b;
    p=&c;
    *p=*p+1;
    printf("%d,%d,%d,%d\n",a,b,c,*p);
    return 0;
}