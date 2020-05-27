#pragma once

#include <string>
#include <vector>
#include <stdexcept>
#include "Soldier.hpp"


namespace WarGame {

class Board {
  
  private:
    std::vector<std::vector<Soldier*>> board;

  public:
    enum MoveDIR { Up, Down, Right, Left };
    
    Board(uint numRows, uint numCols) : 
      board(numRows, std::vector<Soldier*>(numCols, nullptr)) {}

    Soldier*& operator[](std::pair<int,int> location);
    
    Soldier* operator[](std::pair<int,int> location) const;
    
    void move(uint player_number, std::pair<int,int> source, MoveDIR direction);

    bool has_soldiers(uint player_number) const;
};

}