#include <iostream>
#include <vector>
#include "Soldier.hpp"
#include "Sniper.hpp"

using namespace std;

class SniperCommander: public Sniper
{

public:
    SniperCommander(uint num, int hp=120, int max=120, int damage=100, string type="SniperCommander") : Sniper(num, hp, max, damage, type) { }
    void attack(vector<vector<Soldier*>> &b, pair<int,int> location);

};