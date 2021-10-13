#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<=100 && n>=90) printf("A+");
    if(n<=89 && n>=90) printf("A");
    if(n<=79 && n>=90) printf("B");
    if(n<=69 && n>=90) printf("C");
    if(n<=59) printf("D");

}
