#include<stdio.h>
int main()
{
    int r;
    float a;
    printf("enter radius of a circle");
    scanf("%d",&r);
    a=3.14*r*r;
    printf("Area of circle is %f having the radius %d",a,r);
    return 0;
}