#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Soldier
{

protected:
    uint player_number;
    int healthPoints;
    int damage;

public:
    Soldier (uint num, int hp, int damage) : player_number(num), healthPoints(hp), damage(damage) {}

    int getPlayer_number() { return player_number; }
    int getHp() { return healthPoints; }
    void setHp(int hp) { healthPoints = hp; }
    int getDamage() { return damage; }
    bool isAlive() { if (healthPoints>0) return true; else return false; }

    virtual void attack(vector<vector<Soldier*>> &b, pair<int,int> location) = 0; 
};