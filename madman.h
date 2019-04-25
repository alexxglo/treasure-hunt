//
// Created by Alex on 23.04.2019.
//

#ifndef POO2_MADMAN_H
#define POO2_MADMAN_H
#include <iostream>
#include "Hero.h"
using  namespace std;
class madman: public Hero {
    /// this unit can move in any position
    /// assigned unit number = 13
public:
    void move(int &number_of_heroes,int **Map,int map_size);



};



#endif //POO2_MADMAN_H
