#include <iostream>
#include <vector>
#include "Soldier.hpp"

using namespace std;

class FootCommander: public Soldier
{
public:

    FootCommander(uint num, int hp=150, int damage=20) : Soldier(num, hp, damage) {}
    void attack(vector<vector<Soldier*>> &b, pair<int,int> location);
};