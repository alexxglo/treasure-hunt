//
// Created by Alex on 18.04.2019.
//

#ifndef POO2_TREASURE_H
#define POO2_TREASURE_H

#include <iostream>
#include <time.h>
#include <cstdlib>
#include "Hero.h"
#include "snake.h"
#include "Diagonal.h"
#include "Hero.h"
#include "snake.h"
#include "Diagonal.h"
#include "madman.h"
#include "searcher.h"
using namespace std;
class Treasure {
    int **Map;
    int map_size;
    int number_of_heroes;

public:
    int p=0;
    int game_type;
    Treasure(int x); /// constructor
    ~Treasure(); /// destructor
    void show_map();

    void chest_spawn();
    void start();
    void play_by_rounds(int rounds);
    int game_over();
    friend std::ostream &operator<<(std::ostream &os, const Treasure &gametable)  /// supraincarcarea operatorului <<
    {
        for(int i=0; i<=gametable.map_size+1; i++)
        {
            for(int j=0; j<=gametable.map_size+1; j++)
            {if (i==0||i==gametable.map_size+1)os<<"-";
                else if (j==0||j==gametable.map_size+1)os<<"|";
                else if (gametable.Map[i][j] == 2)os << "#";
                else if (gametable.Map[i][j] == 11)os << "S";
                else if (gametable.Map[i][j] == 12)os << "D";
                else if (gametable.Map[i][j] == 13)os << "M";
                else if (gametable.Map[i][j] == 14)os << "H";
                else if(gametable.Map[i][j]==4)os<<"!";
                else os << "."; }os<<endl;}
        os << "\n";
        return os;
    }

};
#endif //POO2_TREASURE_H
