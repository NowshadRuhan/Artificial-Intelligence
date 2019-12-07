#include<bits/stdc++.h>
using namespace std;
#define N 8

int knights[N][N];
int attaking_pair(int knights[N][N])
{
    int pair1 = 0;
    for(int j = 0; j < N; j++)
    {
        for(int i = j+1; i < N; i++)
        {
            if(knights[i][j]==1 && i>=0 && i<=7 && j>=0 &&)
            {
                x = knights[i+2][j+1];

                if(knights[i][j] == x && x>=0 && x<=1){
                    pair1++;
                }
                if(knights[i][j] == knights[i+2][j-1]){
                    pair1++;
                }
                if(knights[i][j] == knights[i-2][j+1]){
                    pair1++;
                }
                if(knights[i][j] == knights[i-2][j-1]){
                    pair1++;
                }


                if(knights[i][j] == knights[j+2][i+1]){
                    pair1++;
                }
                if(knights[i][j] == knights[j+2][i-1]){
                    pair1++;
                }
                if(knights[i][j] == knights[j-2][i+1]){
                    pair1++;
                }
                if(knights[i][j] == knights[j-2][i-1]){
                    pair1++;
                }

            }
        knights[i][j]=0;
        }

    }
    return pair1;

}
int main()
{
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            cin >> knights[i][j];

    printf("\n\n\n");
    printf("Result of Attacking pair : %d", attaking_pair(knights));
    return 0;
}

/*

0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0
1 0 1 0 1 0 0 0
0 0 0 0 0 1 0 0
0 0 0 0 0 0 0 1
0 0 0 1 0 1 0 0
0 0 0 0 0 0 0 0
0 0 0 0 0 0 1 0
*/



