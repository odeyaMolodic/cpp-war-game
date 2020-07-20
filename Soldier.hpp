#pragma once

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Soldier
{

protected:
    uint player_number;
    int healthPoints;
    int maxHP;
    int damage;
    string type;

public:
    Soldier (uint num, int hp, int max, int damage, string type) : player_number(num), healthPoints(hp), maxHP(max), damage(damage), type(type) {}
    virtual ~Soldier() {}
    
    int getPlayer_number() { return player_number; }
    int getHp() { return healthPoints; }
    void setHp(int hp) { healthPoints = hp; }
    int getMaxHp() { return maxHP; }
    int getDamage() { return damage; }
    string getType() { return type; }
    bool isAlive() { if (healthPoints>0) return true; else return false; }

    virtual void attack(vector<vector<Soldier*>> &b, pair<int,int> location) = 0; // change ()
};