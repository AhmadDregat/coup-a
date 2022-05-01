#include <iostream>
#include "Player.hpp"
#include "Contessa.hpp"
using namespace std;

namespace coup
{
    Contessa::Contessa(Game game, string n)
    {
        this->game = game;
        this->name = n;
    }
    void Contessa::block(Player player) {}

}