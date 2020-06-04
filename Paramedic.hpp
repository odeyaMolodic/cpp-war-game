#pragma once

#include <iostream>
#include <vector>
#include "Soldier.hpp"

using namespace std;


class Paramedic: public Soldier
{
public:
    Paramedic(uint num, int hp=100, int max=100, int damage=0, string type="Paramedic") : Soldier(num, hp, max, damage, type) {}
    Paramedic(Soldier* s): Soldier(s) {}
    void attack(vector<vector<Soldier*>> &b, pair<int,int> location);
};