#include<bits/stdc++.h>

using namespace std;
int ans[8][8];

int cal_attacking_pair(int current[][8])
{

    int count_num =0;
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            if(current[j][i] == 1)
            {
                for(int k=i+1; k<8; k++)
                {
                    for(int l=0; l<8; l++)
                    {
                        if(current[l][k]==1)
                        {
                            if(j==l)
                            {
                                count_num++;
                            }
                            else if(abs(j-l)== abs(i-k))
                            {
                                count_num++;
                            }
                        }
                    }
                }
            }
        }
    }
    return count_num;
}

void for_copy(int array1[][8],int  array2[][8])
{
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            array1[i][j] = array2[i][j];
        }
    }
}

void successor_56(int current[][8])
{
    int neighbor[8][8];
    int mn=100;
    int cnt=0;
    // std::copy(current,   ,neighbor);
    for_copy(neighbor, current);

    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
            neighbor[j][i]=0;
        for(int j=0; j<8; j++)
        {
            if(current[j][i]!=1)
            {
                neighbor[j][i]=1;
                int temp = cal_attacking_pair(neighbor);
                if(temp<mn)
                {
                    mn=temp;
                    for_copy(neighbor, ans);
                }
                neighbor[j][i]=0;
                //cnt++;
            }
        }
        for(int j=0; j<8; j++)
            neighbor[j][i]=current[j][i];
    }
    //cout << cnt << endl;
}
int main()
{
    int current[8][8];

    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            current[i][j]=0;
        }
    }
    for(int i=0; i<8; i++)
    {
        int num = rand()%8;
        current[num][i] = 1;
    }

    /*current[4][0]=1;
    current[5][1]=1;
    current[6][2]=1;
    current[3][3]=1;
    current[4][4]=1;
    current[5][5]=1;
    current[6][6]=1;
    current[5][7]=1;*/
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            printf("%d ", current[i][j]);
        }
        printf("\n");
    }
    //printf("%d", cal_attacking_pair(current));
    printf("\n");


    while(true)
    {
        successor_56(current);
        if(cal_attacking_pair(current)<cal_attacking_pair(ans))
        {

            for(int i=0; i<8; i++)
            {
                for(int j=0; j<8; j++)
                {
                    printf("%d ", current[i][j]);
                }
                printf("\n");
            }

            break;
        }
        for_copy(ans, current);
    }

    return 0;
}

