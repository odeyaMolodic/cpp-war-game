#pragma once

#include <iostream>
#include <vector>
#include "Soldier.hpp"

using namespace std;

class FootSoldier: public Soldier
{
    
public:
    FootSoldier(uint num, int hp=100, int max=100, int damage=10, string type="FootSoldier") : Soldier(num, hp, max, damage, type) {}
    FootSoldier(Soldier* s): Soldier(s) {}
    FootSoldier();
    void attack(vector<vector<Soldier*>> &b, pair<int,int> location);
    double distance(int x1, int y1, int x2, int y2) // d = sqrt((x1-x2)^2 + (y1-y2)^2)
    {
        double dis1 = pow(x1-x2, 2);
        double dis2 = pow(y1-y2, 2);
        double ans = sqrt(dis1+dis2);
        return ans;
    }
};