#include"User.h"


void User:: set_Name()
{
    cout << "����� �̸��� �Է����ּ���: ";
    cin >> name;
    cout << endl;
    cout << show_Name() << "�� ȯ���մϴ�" << endl << endl;
}

string User:: show_Name()
{
    return name;
}