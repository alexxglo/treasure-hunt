//
// Created by Alex on 23.04.2019.
//

#ifndef POO2_DIAGONAL_H
#define POO2_DIAGONAL_H
#include <iostream>
#include "Hero.h"
using namespace std;
class Diagonal:public Hero {
public:
    void move(int &number_of_heroes,int** Map,int map_size);

};




#endif //POO2_DIAGONAL_H
