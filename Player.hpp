#include <iostream>
#include "Game.hpp"
#pragma once
using namespace std;

namespace coup
{

    class Player
    {
    protected:
        Game game;
        string playerRole;
        int playerCoins;
        string name;

    public:
        void income();
        void coup(Player);
        void foreign_aid();
        int coins();
        string role();
        void check_turn();

    };
}