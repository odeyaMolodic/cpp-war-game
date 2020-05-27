#include <iostream>
#include <vector>
#include "Soldier.hpp"

using namespace std;


class Paramedic: public Soldier
{
public:
    Paramedic(uint num, int hp=100, int damage=50) : Soldier(num, hp, damage) {} 
    void attack(vector<vector<Soldier*>> &b, pair<int,int> location);
};