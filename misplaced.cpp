#include<bits/stdc++.h>

using namespace std;

int main()
{
    int goal[3][3] = {{0,1,2},{3,4,5},{6,7,8}};
    int current[3][3];


    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            current[i][j] =0;
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &current[i][j]);
        }
    }
    int flag_row = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            int flag;

            if(current[i][j]!=0){
                flag=1;
                 for(int k=0; k<3; k++){
                    if(current[i][j]==goal[i][k]){

                        flag=0;

                    }


                }
                if(flag==1){
                        flag_row++;
                    }
            }



        }

    }
    int flag_col = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            int flag;

            if(current[i][j]!=0){
                flag=1;
                 for(int k=0; k<3; k++){
                    if(current[i][j]==goal[k][j]){

                        flag=0;

                    }


                }
                if(flag==1){
                        flag_col++;
                    }
            }



        }

    }

    printf("Number of misplaced rows-columns = %d\nNumber of misplaced rows = %d\nNumber of misplaced columns = %d\n", flag_row+flag_col,flag_row,flag_col);








    /*for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", goal[i][j]);
        }
        printf("\n");
    }*/

}
