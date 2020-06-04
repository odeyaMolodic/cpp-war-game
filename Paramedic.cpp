#include <iostream>
#include <vector>
#include "Paramedic.hpp"

using namespace std;

void Paramedic::attack(vector<vector<Soldier*>> &b, pair<int,int> location)
{
    int x = location.first;
    int y = location.second;
    Soldier* s;
    Soldier* me = b[x][y];

    // Up
    s = b[x+1][y];
    if(x+1 < b.size() || x-1 < 0 || y-1 < 0 || y+1 > b[x].size())
    {
        throw invalid_argument("Outside of the board");
    }
	if (s != nullptr && s->getPlayer_number() == me->getPlayer_number())
        s->setHp(getMaxHp());

    // Down
    s = b[x-1][y];
    if(x+1 < b.size() || x-1 < 0 || y-1 < 0 || y+1 > b[x].size())
    {
        throw invalid_argument("Outside of the board");
    }
	if (s != nullptr && s->getPlayer_number() == me->getPlayer_number())
        s->setHp(getMaxHp());
    
    // Left
    s = b[x][y-1];
    if(x+1 < b.size() || x-1 < 0 || y-1 < 0 || y+1 > b[x].size())
    {
        throw invalid_argument("Outside of the board");
    }
	if (s != nullptr && s->getPlayer_number() == me->getPlayer_number())
        s->setHp(getMaxHp());

    // Right
    s = b[x][y+1];
    if(x+1 < b.size() || x-1 < 0 || y-1 < 0 || y+1 > b[x].size())
    {
        throw invalid_argument("Outside of the board");
    }
	if (s != nullptr && s->getPlayer_number() == me->getPlayer_number())
        s->setHp(getMaxHp());

    // Up and Right
    s = b[x+1][y+1];
    if(x+1 < b.size() || x-1 < 0 || y-1 < 0 || y+1 > b[x].size())
    {
        throw invalid_argument("Outside of the board");
    }
	if (s != nullptr && s->getPlayer_number() == me->getPlayer_number())
        s->setHp(getMaxHp());

    // Up and Left
    s = b[x+1][y-1];
    if(x+1 < b.size() || x-1 < 0 || y-1 < 0 || y+1 > b[x].size())
    {
        throw invalid_argument("Outside of the board");
    }
	if (s != nullptr && s->getPlayer_number() == me->getPlayer_number())
        s->setHp(getMaxHp());

    // Down and Right
    s = b[x-1][y+1];
    if(x+1 < b.size() || x-1 < 0 || y-1 < 0 || y+1 > b[x].size())
    {
        throw invalid_argument("Outside of the board");
    }
	if (s != nullptr && s->getPlayer_number() == me->getPlayer_number())
        s->setHp(getMaxHp());

    // Down and Left
    s = b[x-1][y-1];
    if(x+1 < b.size() || x-1 < 0 || y-1 < 0 || y+1 > b[x].size())
    {
        throw invalid_argument("Outside of the board");
    }
	if (s != nullptr && s->getPlayer_number() == me->getPlayer_number())
        s->setHp(getMaxHp());
}