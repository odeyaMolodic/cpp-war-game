#include <iostream>
#include <vector>
#include "Soldier.hpp"

using namespace std;

class SniperCommander: public Soldier
{

public:

    SniperCommander(uint num, int hp=120, int damage=100) : Soldier(num, hp, damage) { }
    void attack(vector<vector<Soldier*>> &b, pair<int,int> location);

};