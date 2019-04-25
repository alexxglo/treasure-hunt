#include <iostream>
#include "Treasure.h"
using namespace std;




int main() {
    int size;
    cout<<"Marimea hartii dorita= ";cin>>size;cout<<endl;
    Treasure gametable(size);
    cout<<"Harta actuala"<<endl;
    cout<<gametable;
    //gametable.show_map();
    cout<<"Alegeti cum se simuleaza jocul"<<endl;
    cout<<"Pentru simularea pas cu pas a jocului, apasati tasta 1"<<endl;
    cout<<"Pentru simularea a mai multor runde consecutive, apasati tasta 2"<<endl;
    cout<<"Tasta dvs.= "; cin>>gametable.game_type;
    if(gametable.game_type==1)gametable.start();
    else{ gametable.chest_spawn();
        cout<<"Numar de runde pe care doriti sa le simulati= ";
        cin>>gametable.p;cout<<endl;
        while(gametable.p!=0)
        {
            gametable.play_by_rounds(gametable.p);
            if(gametable.game_over()==0){cout<<"Am terminat simularea"<<endl;
                gametable.p=0;}
            else { cout<<"Daca doriti sa opriti simularea, apasati tasta 0"<<endl;
                cout<<"Numar de runde pe care doriti sa le simulati= ";
                cin>>gametable.p;cout<<endl;}
        }
    }
    return 0;
}