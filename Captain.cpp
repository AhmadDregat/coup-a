#include <iostream>
#include "Captain.hpp"
#include "Game.hpp"
using namespace std;

namespace coup
{
    /*
    constractor
    */
    Captain::Captain(Game game, string n)
    {
        this->game = game;
        this->name = n;
    }
    void Captain::steal(Player player) {}
    void Captain::block(Player player) {}

}