#pragma once
#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;

class Coin {
public:
    int num_coin = 1;

    int show_Coin();
    int get_Coin();
    int use_Coin();
};
