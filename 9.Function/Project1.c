#include <stdio.h>
#include <stdlib.h>

void selection_sort(int, int[]);

int main()
{
    int n;
    printf("Enter the number of elements in the list");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    selection_sort(n,a);

    printf("\n");

    for(int i=0; i<n; i++)
    {
        printf("%d, ",a[i]);
    }

    return 0;
}

void selection_sort(int n, int a[])
{
    if(n>0)
    {
        int maxv=a[0], maxi=0;

        for(int i=0; i<n; i++)
        {
            if(a[i]>maxv)
            {
                maxv=a[i];
                maxi=i;
            }
        }

        int temp;
        temp=a[n-1];
        a[n-1]=maxv;
        a[maxi]=temp;

        selection_sort(n-1,a);
    }
}
