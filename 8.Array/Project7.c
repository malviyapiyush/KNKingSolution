#include<stdio.h>

int main()
{
    int a[5],colsum[5]= {0},rowsum[5]= {0};

    for (int i=0; i<5; i++)
    {
        printf("\nEnter row %d: ",i+1);
        for(int j=0; j<5; j++)
        {

            scanf("%d",&a[j]);
            colsum[j]+=a[j];
            rowsum[i]+=a[j];
        }
    }

    printf("\nRow totals: ");
    for(int i=0; i<5; i++)
    {
        printf("%d ", rowsum[i]);
    }

    printf("\nColumn totals: ");
    for(int i=0; i<5; i++)
    {
        printf("%d ", colsum[i]);
    }
    return 0;
}

