#include <iostream>
#include <vector>
#include "SniperCommander.hpp"
#include "Sniper.hpp"

using namespace std;

void sniperAttack(vector<vector<Soldier*>> &b, pair<int,int> location)
{
    int x = location.first;
    int y = location.second;
    double max = 0;
    int hp = 0;
    Soldier* s;
    Soldier* enemy;
    int enemyX = 0;
    int enemyY = 0;
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
                    enemyX = i;
                    enemyY = j;
                }
		}
	}
    int damage = me->getDamage();
    int health = enemy->getHp();
    enemy->setHp(health-damage);
    if(!enemy->isAlive())
    {
        b[enemyX][enemyY] = nullptr;
    }
}

void SniperCommander::attack(vector<vector<Soldier*>> &b, pair<int,int> location)
{
    int x = location.first;
    int y = location.second;
    Soldier* s;
    Soldier* me = b[x][y];
    sniperAttack(b, location);
    for(int i = 0; i < b.size(); ++i)
    {
		for(int j = 0; j < b[i].size(); ++j)
        {
            s = b[i][j];
            if(s != nullptr && s->getType() == "Sniper" && s->getPlayer_number() == me->getPlayer_number())
            {
                pair<int,int> index = make_pair(i ,j);
                s->attack(b, index);
            }
        }
    }
}