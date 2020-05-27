#include <string>
#include <iostream>
#include "Board.hpp"
#include "doctest.h"
#include "Soldier.hpp"
#include "FootCommander.hpp"
#include "ParamedicCommander.hpp"

#include "FootSoldier.hpp"
#include "Sniper.hpp"
using namespace std;
using namespace WarGame;

TEST_CASE("Test_1") {

    Board board=Board(4, 4);   
        CHECK(!board.has_soldiers(1));
        board[{0,0}] = new Sniper(1);
        CHECK(board.has_soldiers(1));

        CHECK(!board.has_soldiers(2));
        board[{3,2}] = new Sniper(2);
        CHECK(board.has_soldiers(2));

        int win=0;
        board.move(1, {0,0}, Board::MoveDIR::Up);
        if (!board.has_soldiers(2)){
            win=1;
        }

        board.move(2, {3,2}, Board::MoveDIR::Down);
        if (!board.has_soldiers(1)){
            win=2;
        }

        board.move(1, {1,0}, Board::MoveDIR::Right);
        if (!board.has_soldiers(2)){
             win=1;
        }
        CHECK(win==1);
        CHECK(!board.has_soldiers(2));
        CHECK(board.has_soldiers(1));


}

TEST_CASE("Test_2") {

    Board board = Board(4, 4);  
    CHECK(!board.has_soldiers(1));
    board[{0, 2}] = new FootSoldier(1);
    board[{1, 1}] = new Sniper(1);
          CHECK(board.has_soldiers(1));
          CHECK(!board.has_soldiers(2));
    board[{3, 0}] = new FootSoldier(2);
    board[{3, 3}] = new Sniper(2);
          CHECK(board.has_soldiers(2));

    board.move(2, {3, 0}, Board::MoveDIR::Down);
    board.move(1, {0, 2}, Board::MoveDIR::Right);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(2, {3, 3}, Board::MoveDIR::Down);
    board.move(1, {1, 1}, Board::MoveDIR::Up);
           CHECK(board.has_soldiers(1));
           CHECK(board.has_soldiers(2));
    board.move(2, {2, 3}, Board::MoveDIR::Down);
    board.move(1, {2, 1}, Board::MoveDIR::Right);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(2, {1, 3}, Board::MoveDIR::Left);
    board.move(1, {2, 2}, Board::MoveDIR::Left);
    board.move(2, {1, 2}, Board::MoveDIR::Up);

           CHECK(board.has_soldiers(2));
           CHECK(!board.has_soldiers(1));

}



TEST_CASE("Test_3") {
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

}

TEST_CASE("Test_4") {

    Board board = Board(4, 4);
            CHECK(!board.has_soldiers(1));
            CHECK(!board.has_soldiers(2));
    board[{0, 0}] = new Sniper(1);
    board[{0, 1}] = new Sniper(1);
    board[{2, 1}] = new Sniper(2);
    board[{2, 2}] = new Sniper(2);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));

    CHECK_THROWS(board.move(1, {0, 0}, Board::MoveDIR::Right));
    CHECK_THROWS(board.move(1, {0, 1}, Board::MoveDIR::Left));

    CHECK_THROWS(board.move(2, {2, 1}, Board::MoveDIR::Right)); 
    CHECK_THROWS(board.move(2, {2, 2}, Board::MoveDIR::Left));

            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    CHECK_THROWS(board.move(2, {1, 0}, Board::MoveDIR::Left)); 
    CHECK_THROWS(board.move(1, {2, 0}, Board::MoveDIR::Left)); 
    CHECK_THROWS(board.move(2, {0, 3}, Board::MoveDIR::Left)); 
    CHECK_THROWS(board.move(1, {3, 0}, Board::MoveDIR::Left)); 
    CHECK_THROWS(board.move(1, {3, 1}, Board::MoveDIR::Left));
    CHECK_THROWS(board.move(1, {3, 2}, Board::MoveDIR::Left)); 


    CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));

    CHECK_THROWS(board.move(1, {2, 1}, Board::MoveDIR::Down)); 
    CHECK_THROWS(board.move(1, {2, 2}, Board::MoveDIR::Down)); 
    CHECK_THROWS(board.move(2, {0, 0}, Board::MoveDIR::Up)); 
    CHECK_THROWS(board.move(2, {0, 1}, Board::MoveDIR::Up)); 
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));


}


TEST_CASE("Test_5"){
    Board board = Board(5, 5);
            CHECK(!board.has_soldiers(1));
            CHECK(!board.has_soldiers(2));
    board[{0, 0}] = new Sniper(1);
    board[{1, 1}] = new FootCommander(2);
    board[{3, 3}] = new FootCommander(1);
    board[{4, 2}] = new Sniper(2);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(2, {1, 1}, Board::MoveDIR::Left);
    board.move(1, {0, 0}, Board::MoveDIR::Right);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(2, {1, 0}, Board::MoveDIR::Right);
    CHECK_THROWS(board.move(1, {1, 0}, Board::MoveDIR::Up)); 
    board.move(2, {1, 1}, Board::MoveDIR::Left);
    board.move(1, {3, 3}, Board::MoveDIR::Left);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(2, {1, 0}, Board::MoveDIR::Right);
    board.move(1, {0, 1}, Board::MoveDIR::Left);
    board.move(2, {1, 1}, Board::MoveDIR::Left);
    CHECK_THROWS(board.move(1, {0, 0}, Board::MoveDIR::Up)); 
    board.move(2, {4, 2}, Board::MoveDIR::Left);
    board.move(1, {3, 3}, Board::MoveDIR::Left);
            CHECK(board.has_soldiers(1));
            CHECK(board.has_soldiers(2));
    board.move(2, {4, 1}, Board::MoveDIR::Right);
    board.move(1, {3, 1}, Board::MoveDIR::Right);
    board.move(2, {3, 3}, Board::MoveDIR::Left);
    CHECK_THROWS(board.move(1, {3, 2}, Board::MoveDIR::Up)); 

            CHECK(!board.has_soldiers(1));
            CHECK(board.has_soldiers(2));


    CHECK_THROWS(board.move(2, {0, 0}, Board::MoveDIR::Left)); 
    CHECK_THROWS(board.move(1, {0, 1}, Board::MoveDIR::Left));
    CHECK_THROWS(board.move(2, {0, 2}, Board::MoveDIR::Left)); 
    CHECK_THROWS(board.move(1, {1, 3}, Board::MoveDIR::Left)); 
    CHECK_THROWS(board.move(1, {2, 2}, Board::MoveDIR::Left)); 
    CHECK_THROWS(board.move(1, {2, 3}, Board::MoveDIR::Left)); 



}

