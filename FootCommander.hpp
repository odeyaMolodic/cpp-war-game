#include <iostream>
#include <vector>
#include "Soldier.hpp"

using namespace std;

class FootCommander: public Soldier
{
public:

    FootCommander(uint num, int hp=150, int max=150, int damage=20, string type="FootCommander") : Soldier(num, hp, max, damage, type) {}
    void attack(vector<vector<Soldier*>> &b, pair<int,int> location);
};