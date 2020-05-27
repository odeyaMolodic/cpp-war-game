#include <iostream>
#include <vector>
#include "Soldier.hpp"

using namespace std;


class ParamedicCommander: public Soldier
{
public:
    ParamedicCommander(uint num, int hp=200, int damage=50) : Soldier(num, hp, damage) {} //full
    void attack(vector<vector<Soldier*>> &b, pair<int,int> location);
};