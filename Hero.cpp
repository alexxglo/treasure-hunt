//
// Created by Alex on 23.04.2019.
//
#include <iostream>
#include "Hero.h"
using namespace std;

int Hero::gettix(int** Map,int map_size,int type) const {
    for(int i=1;i<=map_size;i++)
        for(int j=1;j<=map_size;j++)
        {if(Map[i][j]==type)return i;
            else if(i==map_size&&j==map_size&&Map[i][j]!=type)return -1;}

}
int Hero::gettiy(int** Map,int map_size,int type) const {
    for(int i=1;i<=map_size;i++)
        for(int j=1;j<=map_size;j++)
        {if(Map[i][j]==type)return j;
            else if(i==map_size&&j==map_size&&Map[i][j]!=type)return -1;
        }
}