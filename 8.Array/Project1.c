#include <stdio.h>
#include <stdbool.h>

int main ()
{
    printf("Enter a number: ");
    bool digit_seen[10]= {false};

    long int num;
    scanf("%ld",&num);

    for (; num!=0;)
    {
		if(digit_seen[num%10]==true)
		{
			printf("%ld ",num%10);
		}
		else
		{
			digit_seen[num%10]=true;
		}
		num/=10;
		
    }

    return 0;
}
