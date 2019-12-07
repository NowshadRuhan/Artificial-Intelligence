#include<stdio.h>

int attaking_pair(int knights[][8])
{
    int pair1=0;

    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            if(knights[i][j]==1)
            {
                int x, y;
                x=i+2, y=j+1;
                if(x>=0 && x<8 && y>=0 && y<8)
                {
                    if(knights[x][y]==1)
                    {
                        pair1++;
                    }

                }

                x=i-1, y=j+2;
                if(x>=0 && x<8 && y>=0 && y<8)
                {
                    if(knights[x][y]==1)
                    {
                        pair1++;
                    }

                }

                x=i+1, y=j+2;
                if(x>=0 && x<8 && y>=0 && y<8)
                {
                    if(knights[x][y]==1)
                    {
                        pair1++;
                    }

                }

                x=i-2, y=j+1;
                if(x>=0 && x<8 && y>=0 && y<8)
                {
                    if(knights[x][y]==1)
                    {
                        pair1++;
                    }

                }
            }

        }
    }
    return pair1;
}

int main()
{
    int knights[8][8];
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            scanf("%d", &knights[i][j]);
        }
    }
    printf("\n");

    printf("Attacking pair : %d\n", attaking_pair(knights));
    return 0;
}


/*

0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0
1 0 1 0 1 0 0 0
0 0 0 0 0 1 0 0
0 0 0 0 0 0 0 0
0 0 0 1 0 1 0 0
0 0 0 0 0 0 0 0
0 0 0 0 0 0 1 0
*/

