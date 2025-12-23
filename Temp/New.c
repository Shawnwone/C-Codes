#include<stdio.h>
int main()
{
    int i=0,iContest[10];
    float fave=0;
    for(i=0;i<10;i++)
        scanf("%d",&iContest[i]);
    for(i=0;i<10;i++)
    fave=fave+iContest[i];
    fave=fave/10;
    printf("The average score is %f",fave);
    return 0;
}