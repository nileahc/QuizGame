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

    vector<int> quiz_num;     //���� ��ȣ
    vector<string> quiz_title; //���� �̸�
    vector<string> quiz_txt;   //�ؽ�Ʈ
    vector<string> quiz_ans;   //����
    vector<string> quiz_hint;   //��Ʈ
    vector<string> quiz_plus;   //�ؼ�

public:
    int q_point = 0;
    void add_Question(int number, const string& title, const string& text, const string& answer, const string& hint, const string& plus);

    void start_Quiz(int index);

    void enter_Ans(int index);

};