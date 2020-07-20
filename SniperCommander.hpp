#include <iostream>
#include <vector>
#include "Soldier.hpp"

using namespace std;

class SniperCommander: public Soldier
{

public:
    SniperCommander(uint num, int hp=120, int max=120, int damage=100, string type="SniperCommander") : Soldier(num, hp, max, damage, type) { }
    void attack(vector<vector<Soldier*>> &b, pair<int,int> location);
};