#include <iostream>
#include <vector>
#include "FootCommander.hpp"

using namespace std;

double distance(int x1, int y1, int x2, int y2) // d = sqrt((x1-x2)^2 + (y1-y2)^2)
{
    double dis1 = pow(x1-x2, 2);
    double dis2 = pow(y1-y2, 2);
    double ans = sqrt(dis1+dis2);
    return ans;
}

void soldierAttack(vector<vector<Soldier*>> &b, pair<int,int> location)
{
    int x = location.first;
    int y = location.second;
    double min = 0;
    double dis = 0;
    Soldier* s;
    Soldier* enemy;
    int enemyX = 0;
    int  enemyY = 0;
    Soldier* me = b[x][y];
    cout << "before for" << endl;
    for(int i = 0; i < b.size(); ++i)
    {
		for(int j = 0; j < b[i].size(); ++j)
        {
		    s = b[i][j];
			if (s != nullptr && s->getPlayer_number() != me->getPlayer_number())
            {
				dis = distance(x, y, i, j);
                if (dis < min)
                {
                    min = dis;
                    enemy = b[i][j];
                    enemyX = i;
                    enemyY = j;
                }
            }
		}
	}
    cout << "after for" << endl;
    int damage = me->getDamage();
    int health = enemy->getHp();
    enemy->setHp(health-damage);
    cout << "after setHP: " << health-damage << endl;
    if(!enemy->isAlive())
    {
        b[enemyX][enemyY] = nullptr;
    }
    cout << "finish soldierAttack" << endl;
}

void FootCommander::attack(vector<vector<Soldier*>> &b, pair<int,int> location)
{
    int x = location.first;
    int y = location.second;
    Soldier* s;
    Soldier* me = b[x][y];
    cout << "before attack" << endl;
    soldierAttack(b, location);
    cout << "after attack" << endl;
    for(int i = 0; i < b.size(); ++i)
    {
		for(int j = 0; j < b[i].size(); ++j)
        {
            s = b[i][j];
            if(s != nullptr && s->getType() == "FootSoldier" && s->getPlayer_number() == me->getPlayer_number())
            {
                pair<int,int> index = make_pair(i ,j);
                s->attack(b, index);
            }
        }
    }
}