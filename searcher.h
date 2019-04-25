//
// Created by Alex on 23.04.2019.
//

#ifndef POO2_SEARCHER_H
#define POO2_SEARCHER_H

#include <iostream>
#include "Hero.h"
using namespace std;
class searcher: public Hero {
///this dude checks left, right, then up then down
/// assigned unit number = 14
public:
    void move(int &number_of_heroes,int** Map,int map_size);
};


#endif //POO2_SEARCHER_H
