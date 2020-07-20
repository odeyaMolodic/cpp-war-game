#include <iostream>
#include <vector>
#include "ParamedicCommander.hpp"
#include "Paramedic.hpp"

using namespace std;

void helpAttack(vector<vector<Soldier*>> &b, pair<int,int> location)
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
        s->setHp(s->getMaxHp());

    // Down
    s = b[x-1][y];
    if(x+1 < b.size() || x-1 < 0 || y-1 < 0 || y+1 > b[x].size())
    {
        throw invalid_argument("Outside of the board");
    }
	if (s != nullptr && s->getPlayer_number() == me->getPlayer_number())
        s->setHp(s->getMaxHp());
    
    // Left
    s = b[x][y-1];
    if(x+1 < b.size() || x-1 < 0 || y-1 < 0 || y+1 > b[x].size())
    {
        throw invalid_argument("Outside of the board");
    }
	if (s != nullptr && s->getPlayer_number() == me->getPlayer_number())
        s->setHp(s->getMaxHp());

    // Right
    s = b[x][y+1];
    if(x+1 < b.size() || x-1 < 0 || y-1 < 0 || y+1 > b[x].size())
    {
        throw invalid_argument("Outside of the board");
    }
	if (s != nullptr && s->getPlayer_number() == me->getPlayer_number())
        s->setHp(s->getMaxHp());

    // Up and Right
    s = b[x+1][y+1];
    if(x+1 < b.size() || x-1 < 0 || y-1 < 0 || y+1 > b[x].size())
    {
        throw invalid_argument("Outside of the board");
    }
	if (s != nullptr && s->getPlayer_number() == me->getPlayer_number())
        s->setHp(s->getMaxHp());

    // Up and Left
    s = b[x+1][y-1];
    if(x+1 < b.size() || x-1 < 0 || y-1 < 0 || y+1 > b[x].size())
    {
        throw invalid_argument("Outside of the board");
    }
	if (s != nullptr && s->getPlayer_number() == me->getPlayer_number())
        s->setHp(s->getMaxHp());

    // Down and Right
    s = b[x-1][y+1];
    if(x+1 < b.size() || x-1 < 0 || y-1 < 0 || y+1 > b[x].size())
    {
        throw invalid_argument("Outside of the board");
    }
	if (s != nullptr && s->getPlayer_number() == me->getPlayer_number())
        s->setHp(s->getMaxHp());

    // Down and Left
    s = b[x-1][y-1];
    if(x+1 < b.size() || x-1 < 0 || y-1 < 0 || y+1 > b[x].size())
    {
        throw invalid_argument("Outside of the board");
    }
	if (s != nullptr && s->getPlayer_number() == me->getPlayer_number())
        s->setHp(s->getMaxHp());
}

void ParamedicCommander::attack(vector<vector<Soldier*>> &b, pair<int,int> location)
{
    int x = location.first;
    int y = location.second;
    Soldier* s;
    Soldier* me = b[x][y];
    helpAttack(b, location);
    for(int i = 0; i < b.size(); ++i)
    {
		for(int j = 0; j < b[i].size(); ++j)
        {
            s = b[i][j];
            if(s != nullptr && s->getType() == "Paramedic" && s->getPlayer_number() == me->getPlayer_number())
            {
                pair<int,int> index = make_pair(i ,j);
                s->attack(b, index);
            }
        }
    }
}