#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>

void print_array(char walk[][10]);
void generate_random_walk(char walk[][10]);

int main()
{

    char walk[10][10];
    generate_random_walk(walk);
    return 0;
}

void generate_random_walk(char walk[][10])
{
    srand((unsigned)time(NULL));
    int move,ci=0,cj=0;
    bool invalid[4]= {false};
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            walk[i][j]='.';
        }
    }
    walk[ci][cj]='A';
    for(char i='B'; i<='Z';)
    {
        move=rand()%4;
        if(invalid[0]==true && invalid[1]==true && invalid[2]==true && invalid[3]==true)
        {
            break;
        }
        if((move==0))
        {
            if(ci==0||walk[ci-1][cj]!='.')
            {
                invalid[0]=true;
                continue;
            }
            else
            {
                ci--;
                walk[ci][cj]=i;
                invalid[0]=false;
                invalid[1]=false;
                invalid[2]=false;
                invalid[3]=false;
                i++;
            }
        }

        else if((move==1))
        {
            if(ci==9||walk[ci+1][cj]!='.')
            {
                invalid[1]=true;
                continue;
            }
            else
            {
                ci++;
                walk[ci][cj]=i;
                invalid[0]=false;
                invalid[1]=false;
                invalid[2]=false;
                invalid[3]=false;
                i++;
            }

        }
        else if((move==2))
        {
            if(cj==9||walk[ci][cj+1]!='.')
            {
                invalid[2]=true;
                continue;
            }
            else
            {
                cj++;
                walk[ci][cj]=i;
                invalid[0]=false;
                invalid[1]=false;
                invalid[2]=false;
                invalid[3]=false;
                i++;
            }


        }
        else if((move==3))
        {
            if(cj==0||walk[ci][cj-1]!='.')
            {
                invalid[3]=true;
                continue;
            }
            else
            {
                cj--;
                walk[ci][cj]=i;
                invalid[0]=false;
                invalid[1]=false;
                invalid[2]=false;
                invalid[3]=false;
                i++;
            }

        }
    }
    print_array(walk);
}

void print_array(char walk[][10])
{
    printf("\n");
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            printf("%c ",walk[i][j]);
        }
        printf("\n");
    }
}
