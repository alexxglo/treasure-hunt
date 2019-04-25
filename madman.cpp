//
// Created by Alex on 23.04.2019.
//

#include "madman.h"
#include "Treasure.h"
void madman:: move(int &number_of_heroes,int **Map,int map_size)
{
    int i,j;bool flag=0;
    int type_madman=13;
    int coord_crt_x=-1,coord_crt_y=-1;
    /*for(i=0;i<=map_size;i++)
        for(j=0;j<=map_size;j++){if(Map[i][j]==13){coord_crt_x=i;coord_crt_y=j;break;}}*/
    coord_crt_x=gettix(Map,map_size,type_madman);
    coord_crt_y=gettiy(Map,map_size,type_madman);
    if(coord_crt_x==-1&&coord_crt_y==-1);
    else{if(Map[coord_crt_x][coord_crt_y+1]==4||
            Map[coord_crt_x+1][coord_crt_y]==4||
            Map[coord_crt_x][coord_crt_y-1]==4||
            Map[coord_crt_x-1][coord_crt_y]==4||
            Map[coord_crt_x+1][coord_crt_y-1]==4||
            Map[coord_crt_x+1][coord_crt_y+1]==4||
            Map[coord_crt_x-1][coord_crt_y-1]==4||
            Map[coord_crt_x-1][coord_crt_y+1]==4)
        {cout<<"Madman has found a treasure!"<<endl;
            if(Map[coord_crt_x][coord_crt_y+1]==4)Map[coord_crt_x][coord_crt_y+1]=2;
            else if(Map[coord_crt_x+1][coord_crt_y]==4)Map[coord_crt_x+1][coord_crt_y]=2;
            else if(Map[coord_crt_x][coord_crt_y-1]==4)Map[coord_crt_x][coord_crt_y-1]=2;
            else if(Map[coord_crt_x-1][coord_crt_y]==4)Map[coord_crt_x-1][coord_crt_y]=2;
            else if(Map[coord_crt_x+1][coord_crt_y-1]==4)Map[coord_crt_x+1][coord_crt_y-1]=2;
            else if(Map[coord_crt_x+1][coord_crt_y+1]==4)Map[coord_crt_x+1][coord_crt_y+1]=2;
            else if(Map[coord_crt_x-1][coord_crt_y-1]==4)Map[coord_crt_x-1][coord_crt_y-1]=2;
            else if(Map[coord_crt_x-1][coord_crt_y+1]==4)Map[coord_crt_x-1][coord_crt_y+1]=2;
            Map[coord_crt_x][coord_crt_y]=2;
            number_of_heroes--;flag=1;
            cout<<"Madman says:<Time to go!>"<<endl;}

        if(flag==0&&Map[coord_crt_x][coord_crt_y+1]==0)
        {Map[coord_crt_x][coord_crt_y]=2;
            Map[coord_crt_x][coord_crt_y+1]=13;flag=1;}

        if(flag==0&&Map[coord_crt_x+1][coord_crt_y]==0)
        {Map[coord_crt_x][coord_crt_y]=2;
            Map[coord_crt_x+1][coord_crt_y]=13;flag=1;}

        if(flag==0&&Map[coord_crt_x][coord_crt_y-1]==0)
        {Map[coord_crt_x][coord_crt_y]=2;
            Map[coord_crt_x][coord_crt_y-1]=13;flag=1;}

        if(flag==0&&Map[coord_crt_x-1][coord_crt_y]==0)
        {Map[coord_crt_x][coord_crt_y]=2;
            Map[coord_crt_x-1][coord_crt_y]=13;flag=1;}

        if(flag==0&&Map[coord_crt_x+1][coord_crt_y-1]==0)
        {Map[coord_crt_x][coord_crt_y]=2;
            Map[coord_crt_x+1][coord_crt_y-1]=13;flag=1;}

        if(flag==0&&Map[coord_crt_x+1][coord_crt_y+1]==0)
        {Map[coord_crt_x][coord_crt_y]=2;
            Map[coord_crt_x+1][coord_crt_y+1]=13;flag=1;}

        if(flag==0&&Map[coord_crt_x-1][coord_crt_y-1]==0)
        {Map[coord_crt_x][coord_crt_y]=2;
            Map[coord_crt_x-1][coord_crt_y-1]=13;flag=1;}

        if(flag==0&&Map[coord_crt_x-1][coord_crt_y+1]==0)
        {Map[coord_crt_x][coord_crt_y]=2;
            Map[coord_crt_x-1][coord_crt_y+1]=13;flag=1;}

        if(flag==0) {cout<<"Madman is in trouble!"<<endl;cout<<"Madman has died!"<<endl;
            Map[coord_crt_x][coord_crt_y]=2;number_of_heroes--;
        };flag=0;}}