#include <string>
#include <vector>
#include <stdexcept>
#include "Board.hpp"

namespace WarGame {

 
    Soldier*& Board::operator[](std::pair<int,int> location)
    {
        return board[location.first][location.second];
    }
    
    Soldier* Board::operator[](std::pair<int,int> location) const
    {
        return board[location.first][location.second];
    }
    
    void Board::move(uint player_number, std::pair<int,int> source, MoveDIR direction)
    {
        
    }

    bool Board::has_soldiers(uint player_number) const
    {
        for(int i = 0; i < board.size(); ++i)
        {
			for(int j = 0; j < board[i].size(); ++j)
            {
				Soldier* s = (*this)[{i, j}];
				if (s != nullptr && s->getPlayer_number() == player_number)
					return true;
			}
		}
		return false;
    }
}