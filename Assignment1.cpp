#include<stdio.h>
int main(){
    int power=1,k,n;
    scanf("%d%d",&k,&n);
    for(i=1 to n)
    {
        newpower=0;
        for(j=1 to k)
        {
            for(q=1 to power) newpower++;
        }
        power=newpower;
    }
    printf("%d",power)
return 0;
}