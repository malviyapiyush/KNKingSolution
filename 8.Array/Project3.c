#include <stdio.h>
#include <stdbool.h>

int main ()
{
    printf("Enter a number: ");
    int digit_seen[10]= {0};
    long int num,digit;
    scanf("%ld",&num);

    for (; num>0;)
    {
        digit=num;
        for (; digit!=0;)
        {
            digit_seen[digit%10]++;
            digit/=10;
        }
       scanf("%ld",&num);
    }

    printf("Digit:\t\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\nOccurences:\t");

    for (int i=0; i<10; i++)
    {
        printf("%d\t",digit_seen[i]);
    }
    return 0;
}
