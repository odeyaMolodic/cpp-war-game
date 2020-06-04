#include <iostream>
# include <vector>
#include "Sniper.hpp"

using namespace std;

void Sniper::attack(vector<vector<Soldier*>> &b, pair<int,int> location)
{
    int x = location.first;
    int y = location.second;
    double max = 0;
    int hp = 0;
    Soldier* s;
    Soldier* enemy;
    Soldier* me = b[x][y];
    for(int i = 0; i < b.size(); ++i)
    {
		for(int j = 0; j < b[i].size(); ++j)
        {
		    s = b[i][j];
			if (s != nullptr && s->getPlayer_number() != me->getPlayer_number())
                hp = s->getHp();
                if (hp > max)
                {
                    max = hp;
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
