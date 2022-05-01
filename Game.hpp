#include <iostream>
#include <vector>
#pragma once

using namespace std;

namespace coup
{

    class Game
    {
    private:
        vector<string> playersNames;
        int number;

    public:
        vector<string> players();
        string winner();
        string turn();
         void next_turn();
    };

}