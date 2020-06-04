/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: Shahar Engel 318511375
 * 
 * Date: 2020-05
 */

#include "doctest.h"
#include "Board.hpp"
#include "Soldier.hpp"
#include "Sniper.hpp"
#include <iostream>

using namespace WarGame;
using namespace std;

TEST_CASE("Sniper VS Sniper") {
    WarGame::Board board(8,8);
    if(!board.has_soldiers(1))
        board[{0,1}] = new Sniper(1);
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));
    CHECK(board.has_soldiers(1));

    if(!board.has_soldiers(2))
	    board[{7,1}] = new Sniper(2);
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
    CHECK(board.has_soldiers(2));
}