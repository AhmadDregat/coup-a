#include <iostream>
#include "Duke.hpp"
#include "Player.hpp"
using namespace std;

namespace coup
{

    // constractor

    Duke::Duke(Game game, string n)
    {
        this->game = game;
        this->name = n;
    }
    void Duke::tax() {}
    void Duke::block(Player palyer) {}
   
}
