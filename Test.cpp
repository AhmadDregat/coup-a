#include "doctest.h"
#include "Player.hpp"
#include "Game.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Assassin.hpp"
#include "Duke.hpp"
#include "Contessa.hpp"

using namespace std;
using namespace coup;

Game game;

TEST_CASE("Player")
{
    Duke duke{game, "Moshe"};
    Assassin assassin{game, "Yossi"};
    Ambassador ambassador{game, "Meirav"};
    Captain captain{game, "Reut"};
    Contessa contessa{game, "Gilad"};
    CHECK(duke.coins() == 0);
    duke.income();
    CHECK(duke.coins() == 1);
    duke.income();
    CHECK(duke.coins() == 2);
    duke.foreign_aid();
    CHECK(duke.coins() == 4);
    CHECK(duke.role().compare("Duke"));
    duke.tax();

    CHECK(duke.coins() == 7);

    duke.income();
    assassin.income();
    ambassador.income();
    captain.income();
    contessa.income();

    CHECK_EQ(duke.coins(), 8);
    assassin.income();
    CHECK_EQ(assassin.coins(), 2);
    ambassador.income();
    ambassador.income();
    CHECK_EQ(ambassador.coins(), 3);
    captain.income();
    captain.income();
    captain.income();
    CHECK_EQ(captain.coins(), 4);
    contessa.income();
    contessa.income();
    contessa.income();
    contessa.income();
    contessa.income();

    CHECK_EQ(contessa.coins(), 6);
}
TEST_CASE("Captain")
{
    Captain captain1{game, "Moshi"};
    Captain captain2{game, "Omer"};
    Captain captain3{game, "yossi"};
    captain1.income();
    captain1.foreign_aid();
    CHECK(captain1.coins() == 3);
    CHECK_NOTHROW(captain3.steal(captain1));
    CHECK_NOTHROW(captain2.steal(captain1));
    CHECK(captain3.coins() == 2);
    captain1.block(captain2);
    CHECK_THROWS(captain2.steal(captain1));
}

TEST_CASE("Contessa")
{
    Contessa contessa{game, "Moshi"};
    Assassin assassin{game, "yossi"};
    contessa.block(assassin);
    assassin.foreign_aid();
    assassin.income();

    CHECK(game.players().size() == 2);
}

TEST_CASE("Ambassador")
{
    Ambassador amb{game, "Moshe"};
    Assassin assassin{game, "yossi"};
    Duke duke{game, "Omer"};
    // ambassador blocks non captain players
    CHECK_THROWS(amb.block(assassin));
    CHECK_THROWS(amb.block(duke));
    // assassin and duke both have 0 coins
    // no player can have negative coins
    CHECK_THROWS(amb.transfer(assassin, duke));
}
