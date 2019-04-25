//
// Created by Alex on 23.04.2019.
//

#ifndef POO2_SNAKE_H
#define POO2_SNAKE_H
#include <iostream>
#include "Hero.h"
using namespace std;
class snake: public Hero {
    /// this unit can only move up, down, left, right!
    /// asigned unit number = 11
public:
    void move(int &number_of_heroes,int** Map,int map_size);
};


#endif //POO2_SNAKE_H
