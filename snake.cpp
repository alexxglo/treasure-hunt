//
// Created by Alex on 23.04.2019.
//

#include "snake.h"
#include "Treasure.h"
void snake::move(int &number_of_heroes,int** Map,int map_size) {

    int i, j;
    int type_snake=11;
    bool flag = 0;
    int coord_crt_x = -1, coord_crt_y = -1;
    /*for (i = 1; i <= map_size; i++)
        for (j = 1; j <= map_size; j++) {
            if (Map[i][j] == 11) {
                coord_crt_x = i;
                coord_crt_y = j;
                break;
            }
        }*/
    coord_crt_x=gettix(Map,map_size,type_snake);
    coord_crt_y=gettiy(Map,map_size,type_snake);
    if (coord_crt_x == -1 && coord_crt_y == -1);
    else {
        if (Map[coord_crt_x][coord_crt_y + 1] == 4 ||
            Map[coord_crt_x + 1][coord_crt_y] == 4 ||
            Map[coord_crt_x][coord_crt_y - 1] == 4 || /// IES DIN MATRICE AICI
            Map[coord_crt_x - 1][coord_crt_y] == 4) {
            flag = 1;
            Map[coord_crt_x][coord_crt_y] = 2;
            if (Map[coord_crt_x][coord_crt_y + 1] == 4)Map[coord_crt_x][coord_crt_y + 1] = 2;
            else if (Map[coord_crt_x + 1][coord_crt_y] == 4)Map[coord_crt_x + 1][coord_crt_y] = 2;
            else if (Map[coord_crt_x][coord_crt_y - 1] == 4)Map[coord_crt_x][coord_crt_y - 11] = 2;
            else if (Map[coord_crt_x - 1][coord_crt_y] == 4)Map[coord_crt_x - 1][coord_crt_y] = 2;
            number_of_heroes--;
            cout << "Heroes left: " << number_of_heroes << endl;
            cout << "Snake is going to sleep now" << endl;
        }


        if (flag == 0 && Map[coord_crt_x][coord_crt_y + 1] == 0) {
            Map[coord_crt_x][coord_crt_y] = 2;
            Map[coord_crt_x][coord_crt_y + 1] = 11;
            flag = 1;
        }
        if (flag == 0 && Map[coord_crt_x + 1][coord_crt_y] == 0) {
            Map[coord_crt_x][coord_crt_y] = 2;
            Map[coord_crt_x + 1][coord_crt_y] = 11;
            flag = 1;
        }
        if (flag == 0 && Map[coord_crt_x][coord_crt_y - 1] == 0) {
            Map[coord_crt_x][coord_crt_y] = 2;
            Map[coord_crt_x][coord_crt_y - 1] = 11;
            flag = 1;
        }
        if (flag == 0 && Map[coord_crt_x - 1][coord_crt_y] == 0) {
            Map[coord_crt_x][coord_crt_y] = 2;
            Map[coord_crt_x - 1][coord_crt_y] = 11;
            flag = 1;
        }
        if (flag == 0) {
            cout << "Snake is stuck!" << endl;
            cout << "Snake has fainted!" << endl;
            number_of_heroes--;
            Map[coord_crt_x][coord_crt_y] = 2;
        }
        flag = 0;
    }
}