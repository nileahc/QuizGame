#include"User.h"


void User:: set_Name()
{
    cout << "당신의 이름을 입력해주세요: ";
    cin >> name;
    cout << endl;
    cout << show_Name() << "님 환영합니다" << endl << endl;
}

string User:: show_Name()
{
    return name;
}