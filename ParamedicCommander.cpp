#include <iostream>
#include <vector>
#include "ParamedicCommander.hpp"

using namespace std;


void ParamedicCommander::attack(vector<vector<Soldier*>> &b, pair<int,int> location)
{
    int x = location.first;
    int y = location.second;
    Paramedic* s;
    Paramedic me = Paramedic(b[x][y]);
    me.attack(b, location);
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