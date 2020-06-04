#include <iostream>
#include <vector>
#include "Soldier.hpp"
#include "Paramedic.hpp"

using namespace std;


class ParamedicCommander: public Paramedic
{
public:
    ParamedicCommander(uint num, int hp=200, int max=200, int damage=0, string type="ParamedicCommander") : Paramedic(num, hp, max, damage, type) {}
    void attack(vector<vector<Soldier*>> &b, pair<int,int> location);
};