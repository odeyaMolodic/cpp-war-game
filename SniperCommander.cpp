#include <iostream>
#include <vector>
#include "SniperCommander.hpp"

using namespace std;

void SniperCommander::attack(vector<vector<Soldier*>> &b, pair<int,int> location)
{
    int x = location.first;
    int y = location.second;
    Sniper s;
    Sniper me = Sniper(b[x][y]);
    me.attack(b, location);
    for(int i = 0; i < b.size(); ++i)
    {
		for(int j = 0; j < b[i].size(); ++j)
        {
            if(b[i][j] != nullptr) {
                s = Sniper(b[i][j]);
                if(s.getType() == "Sniper" && s.getPlayer_number() == me.getPlayer_number())
                {
                    pair<int,int> index = make_pair(i ,j);
                    s.attack(b, index);
                }
            }
        }
    }
}