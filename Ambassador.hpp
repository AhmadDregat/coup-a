#include <iostream>
#include "Player.hpp"
using namespace std;

namespace coup
{

    class Ambassador : public Player
    {
    public:
        // constractor

        Ambassador(Game game, string n);
        void block(Player player);
        void transfer(Player p1, Player p2);
    };
}