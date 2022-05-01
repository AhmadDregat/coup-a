#include <iostream>
#include "Assassin.hpp"
#include "Player.hpp"
using namespace std;

namespace coup{

    Assassin::Assassin(Game game, string n){
        this->game = game;
        this->name = n;
    }

    void Assassin::coup(Player player){}

}

