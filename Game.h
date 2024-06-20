#pragma once
#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;

class Game
{
public:

    int wolf_L_num = 3;
    int sheep_L_num = 3;
    int wolf_R_num = 0;
    int sheep_R_num = 0;

    int count = 1;
    void move_L2R(string name1, string name2);
    void move_R2L(string name3, string name4);
    int move_Count() const;
    void display_State();
    bool Ending();
};