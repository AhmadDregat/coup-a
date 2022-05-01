#include <iostream>
#include <stdexcept>
#include "Player.hpp"
using namespace std;

namespace coup
{

    class Captain : public Player
    {
    public:
        /*
        constractor
        */
        Captain(Game game, string n);
        void steal(Player player);
        void block(Player player);
    };
}