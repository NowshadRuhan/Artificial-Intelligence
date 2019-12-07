#include<bits/stdc++.h>
#include <cstdlib>
#include <ctime>



using namespace std;
int ans[8];

int cal_attacking_pair(int temp[])
{

    int count_num =0;

    for(int i=0; i<8; i++)
    {
        for(int j=i+1; j<8; j++)
        {
            if(temp[i]==temp[j])
                count_num++;
            else if(abs(temp[i]-temp[j])==abs(i-j))
                count_num++;
        }
    }
    return count_num;
}


void for_copy(int array1[],int  array2[])
{
    for(int i=0; i<8; i++)
    {
        array2[i]=array1[i];
    }
}

void successor_56(int current[])
{
    int mn=64, temp[8];
    for_copy(current, temp);

    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            if(current[i]!=j)
            {
                temp[i]=j;
                int check=cal_attacking_pair(temp);
                if(check<mn)
                {
                    mn=check;
                    for_copy(temp,ans);
                }
            }
        }
        temp[i]=current[i];
    }
}

int main()
{
    srand(time(0));

    //int gobal_optioma = 0;


        int current[8];
        for(int i=0; i<8; i++)
        {

            int num = (rand() % 8 );
            current[i] = num;
        }



        printf("Random Values Attacking Pair : %d\n", cal_attacking_pair(current));

        for(int i=0; i<8; i++){
                        for(int j=0; j<8; j++){
                             if(current[j] == i){
                                printf("1 ");
                             }else{
                                printf("0 ");
                             }
                        }
                    printf("\n");
                }

        printf("\n");

        while(true)
        {
            successor_56(current);
            if(cal_attacking_pair(current)<=cal_attacking_pair(ans))
            {
                printf("\n");
                printf("\n");
                printf("Attacking Pair : %d\n", cal_attacking_pair(ans));
                for(int i=0; i<8; i++){
                        for(int j=0; j<8; j++){
                             if(current[j] == i){
                                printf("1 ");
                             }else{
                                printf("0 ");
                             }
                        }
                    printf("\n");
                }
                printf("\n");
                printf("\n");
                printf("Local or Golobal Maixma Attacking Pair : %d \n", cal_attacking_pair(current));
                /*if(cal_attacking_pair(current) == 0){
                    gobal_optioma++;
                }*/
                printf("\n");
                printf("\n");
                /*for(int i=0; i<8; i++){
                    printf("%d ", current[i]);
                }*/
                printf("\n");
                break;
            }
            for_copy(ans, current);
        }

   // printf("Global Optima : %d \n", gobal_optioma);

    return 0;
}


