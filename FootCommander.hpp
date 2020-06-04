#include <iostream>
#include <vector>
#include "Soldier.hpp"
#include "FootSoldier.hpp"

using namespace std;

class FootCommander: public FootSoldier
{
public:

    FootCommander(uint num, int hp=150, int max=150, int damage=20, string type="FootCommander") : FootSoldier(num, hp, max, damage, type) {}
    void attack(vector<vector<Soldier*>> &b, pair<int,int> location);
};