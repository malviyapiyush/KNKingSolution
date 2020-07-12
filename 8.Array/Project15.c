#include<stdio.h>
#include<ctype.h>

int main()
{
    char message[80];
    int shift;
    printf("Enter message to be encrypted: ");
    for(int i=0; i<80&&message[i-1]!='\n'; i++)
    {
        scanf("%c",&message[i]);
    }

    printf("Enter shift amount (1-25):");
    scanf("%d",&shift);
    for(int i=0; i<80&&message[i]!='\n'; i++)
    {
        if(message[i]>='A'&& message[i]<='Z')
        {
            message[i]=((message[i]-'A')+shift)%26 + 'A';
                       printf("%c",message[i]);
        }
        else if(message[i]>='a'&& message[i]<='z')
        {
            message[i]=((message[i]-'a')+shift)%26 + 'a';
                       printf("%c",message[i]);
        }
        else
        {
            printf("%c",message[i]);
        }
    }
    return 0;
}
