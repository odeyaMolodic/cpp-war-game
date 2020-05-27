#include <iostream>
#include <vector>
#include "Soldier.hpp"

using namespace std;

class FootSoldier: public Soldier
{
public:
    FootSoldier(uint num, int hp=100, int damage=10) : Soldier(num, hp, damage) {}
    void attack(vector<vector<Soldier*>> &b, pair<int,int> location);
};