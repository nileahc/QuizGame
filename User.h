#pragma once
#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;

class User {
private:
    string name;

public:
    void set_Name();

    string show_Name();
};