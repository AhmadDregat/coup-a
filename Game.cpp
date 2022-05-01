#include <iostream>
#include <vector>
#include "Player.hpp"
#include "Game.hpp"

using namespace std;

namespace coup{

    string Game::turn(){
        return "";
    }

    vector<string> Game::players(){
        return this->playersNames;
    }

    string Game::winner(){
        return "";
    }
    void next_turn(){}

}