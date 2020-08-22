#include<stdio.h>

void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int n, int magic_square[n][n]);

int main()
{
    int size;
    printf("This program creates a magic square of a specified size.");
    printf("\nThe size must be an odd number between 1 and 99");
    printf("\nEnter size of magic square:");
    scanf("%d",&size);
    int magic_square[size][size];
    create_magic_square(size,magic_square);
    print_magic_square(size,magic_square);
    return 0;
}

void create_magic_square(int size, int magic[size][size])
{
    int ci,cj;
    if(size%2==0)
        printf("Invalid entry");
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            magic[i][j]=0;
        }
    }
    ci=0;
    cj=size/2;
    magic[ci][cj]=1;

    for(int n=2; n<=size*size; n++)
    {
        if(ci==0)
            ci=size-1;
        else
            ci=(ci-1)%size;
        cj=(cj+1)%size;
        if(magic[ci][cj]!=0)
        {
            ci=(ci+2)%size;
            cj=(cj-1)%size;
            magic[ci][cj]=n;
        }

        else
            magic[ci][cj]=n;
    }
}
void print_magic_square(int size, int magic[size][size])
{
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            printf("%2d\t",magic[i][j]);
        }
        printf("\n");
    }
}
