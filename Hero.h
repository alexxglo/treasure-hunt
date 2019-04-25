//
// Created by Alex on 23.04.2019.
//

#ifndef POO2_HERO_H
#define POO2_HERO_H


class Hero {
public:

    virtual void move (int &number_of_heroes,int Map,int map_size)=0;
    int gettix(int **Map,int map_size,int type)const;
    int gettiy(int **Map,int map_size,int type)const;
};


#endif //POO2_HERO_H
