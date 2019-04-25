//
// Created by Alex on 23.04.2019.
//

#include "Diagonal.h"
#include "Treasure.h"
void Diagonal:: move(int &number_of_heroes,int** Map,int map_size)
{
    int i,j;bool flag=0;
    int type_diagonal=12;
    int coord_crt_x=-1,coord_crt_y=-1;
    /*  for(i=1;i<=map_size;i++)
      for(j=1;j<=map_size;j++){if(Map[i][j]==12){coord_crt_x=i;coord_crt_y=j;break;}}
  */
    coord_crt_x=gettix(Map,map_size,type_diagonal);
    coord_crt_y=gettiy(Map,map_size,type_diagonal);
    if(coord_crt_x==-1&&coord_crt_y==-1);
    else{if(Map[coord_crt_x-1][coord_crt_y+1]==4||
            Map[coord_crt_x-1][coord_crt_y-1]==4||
            Map[coord_crt_x+1][coord_crt_y-1]==4||
            Map[coord_crt_x+1][coord_crt_y+1]==4)
        {cout<<"Diagonal dude has found a treasure!"<<endl;
            if(Map[coord_crt_x-1][coord_crt_y+1]==4)Map[coord_crt_x-1][coord_crt_y+1]=2;
            else if(Map[coord_crt_x-1][coord_crt_y-1]==4)Map[coord_crt_x-1][coord_crt_y-1]=2;
            else if(Map[coord_crt_x+1][coord_crt_y-1]==4)Map[coord_crt_x+1][coord_crt_y-1]=2;
            else if(Map[coord_crt_x+1][coord_crt_y+1]==4)Map[coord_crt_x+1][coord_crt_y+1]=2;
            Map[coord_crt_x][coord_crt_y]=2;
            number_of_heroes--;flag=1;
            cout<<"Diagonal is getting out of this place!"<<endl;}

        if(flag==0&&Map[coord_crt_x-1][coord_crt_y+1]==0)
        {Map[coord_crt_x][coord_crt_y]=2;
            Map[coord_crt_x-1][coord_crt_y+1]=12;
            flag=1;}
        if(flag==0&&Map[coord_crt_x-1][coord_crt_y-1]==0)
        {Map[coord_crt_x][coord_crt_y]=2;
            Map[coord_crt_x-1][coord_crt_y-1]=12;
            flag=1;}
        if(flag==0&&Map[coord_crt_x+1][coord_crt_y-1]==0)
        {Map[coord_crt_x][coord_crt_y]=2;
            Map[coord_crt_x+1][coord_crt_y-1]=12;
            flag=1;}
        if(flag==0&&Map[coord_crt_x+1][coord_crt_y+1]==0)
        {Map[coord_crt_x][coord_crt_y]=2;
            Map[coord_crt_x-1][coord_crt_y]=12;
            flag=1;}
        if(flag==0) {cout<<"Diagonal-man can't go anywhere!"<<endl;
            cout<<"Diagonal has died!"<<endl;
            Map[coord_crt_x][coord_crt_y]=2;number_of_heroes--;}
        flag=0;}
}
/*int Diagonal::gettix(int** Map,int map_size) const {
    for(int i=1;i<=map_size;i++)
        for(int j=1;j<=map_size;j++)
        if(Map[i][j]==12){cout<<"Coord X = "<<i<<endl;return i;}
}
int Diagonal::gettiy(int** Map,int map_size) const {
    for(int i=1;i<=map_size;i++)
        for(int j=1;j<=map_size;j++)
            if(Map[i][j]==12){cout<<"Coord Y = "<<j<<endl;return j;}
}*/