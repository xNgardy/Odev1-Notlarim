#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i=0;
    float avg;
    printf("Enter 10 numbers: \n");

    for(int count = 1;count<=10;count++)
    {
        printf("Num %d ",count);
        scanf("%d",&num);
        i+=num;
    }
    avg=i/10.0;
    printf("Sum is %d avg is %.2f",i,avg);
    return 0;
}

