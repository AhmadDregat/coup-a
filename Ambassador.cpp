#include <iostream>
#include "Player.hpp"
#include "Ambassador.hpp"
using namespace std;

namespace coup
{

    // constractor
    Ambassador::Ambassador(Game game, string n)
    {
        this->game = game;
        this->name = n;
    }
    void Ambassador::block(Player player) {}
    void Ambassador::transfer(Player p1, Player p2) {}

}