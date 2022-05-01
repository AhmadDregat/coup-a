#include <iostream>
#include "Player.hpp"
using namespace std;

namespace coup{

    class Contessa:public Player{
        public:              
            Contessa(Game game, string n);
            void block(Player player);
    };
}