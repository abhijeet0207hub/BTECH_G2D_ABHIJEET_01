#include<stdio.h>
int main ()
{
    float a,b,c,d,e;
    float sum, percentage;
    printf("enter the value of 5 subjects ");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    sum= a+b+c+d+e;
    percentage= sum/5;
    printf("percentage=%.2f%\n", percentage);
    if (percentage>=90 && percentage<100)
    {
        printf("A grade");
    }
    else if (percentage>=80 && percentage<90)
    {
        printf("B grade");
    }
    else if (percentage>= 60 && percentage<80)
    {
        printf("c grade");
    }
    else
    {
        printf("d grade");
    }
    return 0;
    }
    
    
    
    