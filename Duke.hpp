#include <iostream>
#include <stdexcept>
#include "Player.hpp"
using namespace std;

namespace coup
{

    class Duke : public Player
    {
    public:
        // constractor

        Duke(Game game, string n);
        void tax();
        void block(Player palyer);
    };

}
