#include<bits/stdc++.h>
#include <cstdlib>
#include <ctime>



using namespace std;
int ans[8];



void mutation(int array1[],int  array2[])
{
    int mutationIndex = (rand() % 8 );
    int mutationvalueForArray1 = (rand() % 8 );
    int mutationProbability = (rand() % 2 );
    printf("Mutation mutationIndex %d \n Mutation mutationvalueForArray %d \n " , mutationIndex, mutationvalueForArray1);
    if(mutationProbability==1){
        for(int i=0; i<8; i++){
            if(i==mutationIndex) {
                array1[i] = mutationvalueForArray1;
                printf("%d " , array1[i]);
            }else{
                printf("%d " , array1[i]);
            }

        }
    }
    printf("\n\n\n");

    int mutationIndex2 = (rand() % 8 );
    int mutationvalueForArray2 = (rand() % 8 );
    int mutationProbability2 = (rand() % 2 );
     printf("Mutation mutationIndex2 %d \n Mutation mutationvalueForArray2 %d \n " , mutationIndex2, mutationvalueForArray2);
    if(mutationProbability2==1){
        for(int i=0; i<8; i++){
            if(i==mutationIndex2) {
                array2[i] = mutationvalueForArray2;
                printf("%d " , array2[i]);
            }else{
                 printf("%d " , array2[i]);
            }

        }
    }




}

void crossover(int array1[], int array2[], int ranndomnumber){

    int forchange[8];

    for(int i=ranndomnumber; i<8; i++){

        forchange[i] = array1[i];
        array1[i] = array2[i];
        array2[i] = forchange[i];
    }

    /*for(int i=ranndomnumber; i<8; i++){

        swap(array1[i],array2[i]);

    }*/


    printf("First Random Array With Change : \n");
    /*for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                if(array1[j] == i){
                    printf("1 ");
                }else{
                    printf("0 ");
                }
            }
        printf("\n");
    }*/
    for(int i=0; i<8; i++){
        printf("%d " , array1[i]);
    }
    printf("\n");
    printf("\n");
    printf("2nd Random Array With Change : \n");
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

    mutation(array1, array2);

}


int main()
{

    int array1[8];
    int array2[8];

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
    }*/
    for(int i=0; i<8; i++){
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


    int randomNumber = (rand() % 8 );
    printf("Crossover value : %d\n\n", randomNumber);

    crossover(array1, array2, randomNumber);
    return 0;
}


