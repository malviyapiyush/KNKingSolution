#include<stdio.h>

int main()
{
    char sentence[100],letter,final;
    int last;

    for(int i=0; i<100; i++)
    {
        letter=getchar();

        if(letter=='?'||letter=='.'||letter=='!')
        {
            final=letter;
            last=i-1 ;
            break;
        }
        sentence[i]=letter;
    }

    for(int i=last; i>=0; i--)
    {
        if(sentence[i]==' ')
        {
            for(int j=i+1; j!=last+1&&sentence[j]!=' '; j++)
            {
                printf("%c",sentence[j]);
            }
            printf(" ");
        }

        if(i==0)
        {
            for(int j=0; j!=last+1&&sentence[j]!=' '; j++)
            {
                printf("%c",sentence[j]);
            }
            printf("%c",final);
        }
    }

    return 0;
}
