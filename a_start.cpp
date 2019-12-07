#include<bits/stdc++.h>

#define MX 11

using namespace std;

struct node
{
    int orientation[MX];
    int g_cost, h_cost, f_cost;
    node *parent;
};

vector<node*> already_explored;
vector<node*> about_to_be_explored;
int goal[] = {1,2,3,4,5,6,7,8,0};

vector<node*> get_successor(node *scc)
{
    vector<node*> successor_list;
    if(scc->orientation[0] != 0 || scc->orientation[3] != 0 || scc->orientation[6] != 0)
    {
        node *new1 = new node;
        int blank;
        for(int i=0; i<9; i++)
        {
            if(scc->orientation[i] == 0){
                blank = i;
            }
           new1->orientation[i] = scc->orientation[i];
        }
        new1->orientation[blank] = new1->orientation[blank-1];
        new1->orientation[blank-1] = 0;

        successor_list.push_back(new1);

    }
    if(scc->orientation[2] != 0 || scc->orientation[5] != 0 || scc->orientation[8] != 0)
    {
        node *new2 = new node;
        int blank;
        for(int i=0; i<9; i++)
        {
            if(scc->orientation[i] == 0){
                blank = i;
            }
           new2->orientation[i] = scc->orientation[i];
        }
        new2->orientation[blank] = new2->orientation[blank+1];
        new2->orientation[blank+1] = 0;

        successor_list.push_back(new2);

    }
    if(scc->orientation[0] != 0 || scc->orientation[1] != 0 || scc->orientation[2] != 0)
    {
        node *new3 = new node;
        int blank;
        for(int i=0; i<9; i++)
        {
            if(scc->orientation[i] == 0){
                blank = i;
            }
           new3->orientation[i] = scc->orientation[i];
        }
        new3->orientation[blank] = new3->orientation[blank-3];
        new3->orientation[blank-3] = 0;

        successor_list.push_back(new3);
    }
    if(scc->orientation[6] != 0 || scc->orientation[7] != 0 || scc->orientation[8] != 0)
    {
        node *new4 = new node;
        int blank;
        for(int i=0; i<9; i++)
        {
            if(scc->orientation[i] == 0){
                blank = i;
            }
           new4->orientation[i] = scc->orientation[i];
        }
        new4->orientation[blank] = new4->orientation[blank+3];
        new4->orientation[blank+3] = 0;

        successor_list.push_back(new4);
    }









    return successor_list;
}
int calculate_misplaced_tiles(int match[])
{
    int h_costs= 0;
    for(int i=0; i<9; i++)
    {
        if(goal[i]==match[i])
        {

        }
        else
        {
            h_costs++;
        }
    }
    return h_costs;
}
void reconstruct_path_from_root_to_goal(node *m)
{
    node *temp = m;


}


int main()
{
    node *n = new node;

    int value;
    for(int i=0; i<9; i++)
    {
        cin>>value;
        n->orientation[i]=value;
    }
    int h_costs = calculate_misplaced_tiles(n->orientation);
    n->g_cost = 0;
    n->h_cost = h_costs;
    n->f_cost = n->g_cost+n->h_cost;
    //printf("%d", h_costs);
    //printf("%d\n", n->g_cost);
    //printf("%d\n", n->h_cost);
    //printf("%d\n", n->f_cost);

    about_to_be_explored.push_back(n);

    while(!about_to_be_explored.empty())
    {
        node *check=new node;
        int check_number=0;
        for(int i= 0; i<=about_to_be_explored.size(); i++){

            check = about_to_be_explored[i];
            if(check->f_cost > about_to_be_explored[i]->f_cost){
                check = about_to_be_explored[i];
                check_number = i;
            }
        }
        //about_to_be_explored.erase(about_to_be_explored[check_number]);
        node *current = check;
        already_explored.push_back(current);

        int is_itnot_goal = 0;
        for(int i=0; i<9; i++){

            if(current->orientation[i] != goal[i]){
                is_itnot_goal = 1;
            }
        }
        if(is_itnot_goal == 0){
           // return reconstruct_path_from_root_to_goal(current);
        }

        //current_successors = get_successor(current);

    }

}

