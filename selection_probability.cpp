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

void selection_of_probability(double attack_pairFor1,double attack_pairFor2,double  attack_pairFor3,double attack_pairFor4){

    double total = (attack_pairFor1+ attack_pairFor2+ attack_pairFor3+ attack_pairFor4);

    attack_pairFor1 = (attack_pairFor1/(total))*100;

    attack_pairFor2 = (attack_pairFor2/(total))*100;
    attack_pairFor3 = (attack_pairFor3/(total))*100;
    attack_pairFor4 = (attack_pairFor4/(total))*100;

    printf("Selection Probability for attack_pairFor1 = %.2f\%\n", attack_pairFor1);
    printf("Selection Probability for attack_pairFor2 = %.2f\%\n", attack_pairFor2);
    printf("Selection Probability for attack_pairFor3 = %.2f\%\n", attack_pairFor3);
    printf("Selection Probability for attack_pairFor4 = %.2f\%\n", attack_pairFor4);

}



int main()
{

    int array1[8];
    int array2[8];
    int array3[8];
    int array4[8];

    srand(time(0));

        for(int i=0; i<8; i++)
        {

            int num = (rand() % 8 );
            array1[i] = num;
        }




        for(int i=0; i<8; i++)
        {

            int num = (rand() % 8 );
            array2[i] = num;
        }
        for(int i=0; i<8; i++)
        {

            int num = (rand() % 8 );
            array3[i] = num;
        }
        for(int i=0; i<8; i++)
        {

            int num = (rand() % 8 );
            array4[i] = num;
        }

    printf("First Random Array : \n");
    /*for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                if(array1[j] == i){
                    printf("1 ");
                }else{
                    printf("0 ");
                }
            }
        printf("\n");
    }*/for(int i=0; i<8; i++){
        printf("%d " , array1[i]);
    }


    printf("\n");
    printf("\n");
    printf("2nd Random Array : \n");
    /*for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                if(array2[j] == i){
                    printf("1 ");
                }else{
                    printf("0 ");
                }
            }
        printf("\n");
    }*/
    for(int i=0; i<8; i++){
        printf("%d " , array2[i]);
    }
    printf("\n");
    printf("\n");
    printf("3rd Random Array : \n");
    for(int i=0; i<8; i++){
        printf("%d " , array3[i]);
    }
    printf("\n");
    printf("\n");
    printf("4th Random Array : \n");
    for(int i=0; i<8; i++){
        printf("%d " , array4[i]);
    }
    printf("\n");
    printf("\n");
    double attack_pairFor1 = cal_attacking_pair(array1);
    double attack_pairFor2 = cal_attacking_pair(array2);
    double attack_pairFor3 = cal_attacking_pair(array3);
    double attack_pairFor4 = cal_attacking_pair(array4);

    printf("attack_pairFor1  = %.2f\n" , attack_pairFor1);
    printf("attack_pairFor2  = %.2f\n" , attack_pairFor2);
    printf("attack_pairFor3  = %.2f\n" , attack_pairFor3);
    printf("attack_pairFor4  = %.2f\n" , attack_pairFor4);

    selection_of_probability(attack_pairFor1, attack_pairFor2, attack_pairFor3, attack_pairFor4);
    return 0;
}


