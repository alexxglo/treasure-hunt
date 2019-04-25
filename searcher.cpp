//
// Created by Alex on 23.04.2019.
//

#include "searcher.h"
#include "Treasure.h"
void searcher:: move(int &number_of_heroes,int** Map,int map_size)
{

    int i,j;bool flag=0;
    int coord_crt_x=-1,coord_crt_y=-1;
    int type_searcher=14;
    /* for(i=0;i<=map_size;i++)
         for(j=0;j<=map_size;j++){if(Map[i][j]==14){coord_crt_x=i;coord_crt_y=j;break;}}
     */
    coord_crt_x=gettix(Map,map_size,type_searcher);
    coord_crt_y=gettiy(Map,map_size,type_searcher);
    if(coord_crt_x==-1&&coord_crt_y==-1);
    else{if(Map[coord_crt_x][coord_crt_y+1]==4||
            Map[coord_crt_x+1][coord_crt_y]==4||
            Map[coord_crt_x][coord_crt_y-1]==4||
            Map[coord_crt_x-1][coord_crt_y]==4)
        {cout<<"Searcher has found a treasure!"<<endl;
            Map[coord_crt_x][coord_crt_y]=2;
            if(Map[coord_crt_x][coord_crt_y+1]==4)Map[coord_crt_x][coord_crt_y+1]=2;
            else if(Map[coord_crt_x+1][coord_crt_y]==4)Map[coord_crt_x+1][coord_crt_y]=2;
            else if(Map[coord_crt_x][coord_crt_y-1]==4)Map[coord_crt_x][coord_crt_y-1]=2;
            else if(Map[coord_crt_x-1][coord_crt_y]==4)Map[coord_crt_x-1][coord_crt_y]=2;
            number_of_heroes--;flag=1;
            cout<<"Searcher has left the area"<<endl;}
        if(flag==0&&Map[coord_crt_x][coord_crt_y-1]==0)
        {Map[coord_crt_x][coord_crt_y]=2;Map[coord_crt_x][coord_crt_y-1]=14;flag=1;}
        if(flag==0&&Map[coord_crt_x][coord_crt_y+1]==0)
        {Map[coord_crt_x][coord_crt_y]=2;Map[coord_crt_x][coord_crt_y+1]=14;flag=1;}
        if(flag==0&&Map[coord_crt_x-1][coord_crt_y]==0)
        {Map[coord_crt_x][coord_crt_y]=2;Map[coord_crt_x-1][coord_crt_y]=14;flag=1;}
        if(flag==0&&Map[coord_crt_x+1][coord_crt_y]==0)
        {Map[coord_crt_x][coord_crt_y]=2;Map[coord_crt_x+1][coord_crt_y]=14;flag=1;}
        if(flag==0){cout<<"Searcher is stuck in an infinitum quantum!"<<endl;
            cout<<"Searcher has died!"<<endl;Map[coord_crt_x][coord_crt_y]=2;
            number_of_heroes--;}
        flag=1;
    }}
