#include <iostream>
#include <vector>
#include "FootSoldier.hpp"

using namespace std;

void FootSoldier::attack(vector<vector<Soldier*>> &b, pair<int,int> location)
{
    int x = location.first;
    int y = location.second;
    double min = 0;
    double dis = 0;
    Soldier* s;
    Soldier* enemy;
    Soldier* me = b[x][y];
    for(int i = 0; i < b.size(); ++i)
    {
		for(int j = 0; j < b[i].size(); ++j)
        {
		    s = b[i][j];
			if (s != nullptr && s->getPlayer_number() != me->getPlayer_number())
				dis = distance(x, y, i, j);
                if (dis < min)
                {
                    min = dis;
                    enemy = b[i][j];
                }
		}
	}
    int damage = me->getDamage();
    int health = enemy->getHp();
    enemy->setHp(health-damage);
    if(!enemy->isAlive())
    {
        delete enemy;
    }
}