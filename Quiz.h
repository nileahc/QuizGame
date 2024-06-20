#pragma once
#include<iostream>
#include<string>
#include<Windows.h>
#include"Coin.h"
#include"User.h"
#include<vector>

using namespace std;

class Quiz {
private:
    Coin coin;
    User user;
    int q_index = 0;

    vector<int> quiz_num;     //문제 번호
    vector<string> quiz_title; //문제 이름
    vector<string> quiz_txt;   //텍스트
    vector<string> quiz_ans;   //정답
    vector<string> quiz_hint;   //힌트
    vector<string> quiz_plus;   //해설

public:
    int q_point = 0;
    void add_Question(int number, const string& title, const string& text, const string& answer, const string& hint, const string& plus);

    void start_Quiz(int index);

    void enter_Ans(int index);

};