#include <iostream>
#include <vector>
#include "Soldier.hpp"

using namespace std;


class ParamedicCommander: public Soldier
{
public:
    ParamedicCommander(uint num, int hp=200, int max=200, int damage=0, string type="ParamedicCommander") : Soldier(num, hp, max, damage, type) {}
    void attack(vector<vector<Soldier*>> &b, pair<int,int> location);
};