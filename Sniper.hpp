#pragma once

#include <iostream>
#include <vector>
#include "Soldier.hpp"

using namespace std;

class Sniper: public Soldier
{
public:

    Sniper(uint num, int hp=100, int max=100, int damage=50, string type="Sniper") : Soldier(num, hp, max, damage, type) {}
    Sniper(Soldier* s): Soldier(s) {}
    Sniper() {}
    void attack(vector<vector<Soldier*>> &b, pair<int,int> location);
};
