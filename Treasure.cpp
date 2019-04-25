//
// Created by Alex on 18.04.2019.
//
#include <iostream>
#include "Treasure.h"
using namespace std;
Treasure::Treasure(int x) {
    /// adauga delete pt matricea anterioara
    number_of_heroes=4;
    map_size=x;
    delete []Map;
    Map=new int*[map_size+2];
    for(int i=0; i<=map_size+2; i++)
        Map[i]=new int[map_size+2];

    for(int i=1;i<=map_size;i++)               /// Legenda
        for(int j=1;j<=map_size;j++)Map[i][j]=0;  /// 0 - zona neexplorata
    /// 2  - zona ocupata de un erou
    /// 2  - zona vizitata de un erou
    /// -1 - zona din afara hartii
    /// 4- zona treasure

    for(int j=0;j<=map_size+1;j++){Map[0][j]=-1;Map[map_size+1][j]=-1;}
    for(int i=0;i<=map_size+1;i++){Map[i][0]=-1;Map[i][map_size+1]=-1;}
    Map[1][1]=11; // zona incepere snake
    Map[map_size][1]=12; // zona incepere diagonal
    Map[1][map_size]=13; // zona incepere madman
    Map[map_size][map_size]=14; // zona incepere searcher
    cout<<"Am construit harta"<<endl;

}
Treasure::~Treasure(){
    cout<<"Am distrus harta de joc "<<endl;

    for(int i=0;i<=map_size+2;i++)
        delete []Map;
    delete Map;


}
void Treasure::show_map()
{
    for (int i = 0; i <=map_size+1; i++){
        for (int j = 0; j <=map_size+1; j++) {
            if (i==0||i==map_size+1)cout<<"-";
            else if (j==0||j==map_size+1)cout<<"|";
            else if (Map[i][j] == 2)cout << "#";
            else if (Map[i][j] == 11)cout << "S";
            else if (Map[i][j] == 12)cout << "D";
            else if (Map[i][j] == 13)cout << "M";
            else if (Map[i][j] == 14)cout << "H";
            else if(Map[i][j]==4)cout<<"!";
            else cout << "."; }cout<<endl;}
    cout << endl;
}
void Treasure::chest_spawn() {
    int zar1, zar2, i;
    srand(time(nullptr));
    for (i = 0; i < 3; i++) {
        zar1 = rand() % map_size+1;
        zar2 = rand() % map_size+1;
        while((zar1==1&&zar2==1)||(zar1==map_size&&zar2==1)||(zar1==1&&zar2==map_size)||(zar1==map_size&&zar2==map_size)||Map[zar1][zar2]==4)
        {  zar1 = rand() % map_size+1;
            zar2 = rand() % map_size+1;
        }
        Map[zar1][zar2] = 4;
    }
}
int Treasure::game_over()
{
    if(number_of_heroes<=1)return 0;
    return 1;
}
void Treasure::start()
{
    int sum_flag=0;
    cout<<"The search has begun"<<endl;
    cout<<"Initial map:"<<endl;
    chest_spawn();
    show_map();

    snake *agent1;
    Diagonal *agent2;
    madman *agent3;
    searcher *agent4;
    int k=1;
    while(game_over()==1)
    {
        agent1->move(number_of_heroes, Map, map_size);
        agent2->move(number_of_heroes, Map, map_size);
        agent3->move(number_of_heroes, Map, map_size);
        agent4->move(number_of_heroes, Map, map_size);
        cout<<"Number of heroes left= "<<number_of_heroes<<endl;
        show_map();}
}

void Treasure::play_by_rounds(int rounds)
{   int substitute=rounds;

    cout << "Harta initiala este" << endl;
    show_map();
    snake *agent1;
    Diagonal *agent2;
    madman *agent3;
    searcher *agent4;
    while (rounds >= 1) {
        agent1->move(number_of_heroes, Map, map_size);
        agent2->move(number_of_heroes, Map, map_size);
        agent3->move(number_of_heroes, Map, map_size);
        agent4->move(number_of_heroes, Map, map_size);
        rounds--;;
        if(number_of_heroes<=1) {
            cout << "Nu se mai poate simula. Jocul s-a terminat." << endl;
            rounds=0;}
    }
    cout << "Harta afisata dupa simularea a " << substitute << " runde este" << endl;
    show_map();
}
