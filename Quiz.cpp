#include"Quiz.h"

void Quiz:: add_Question(int number, const string& title, const string& text, const string& answer, const string& hint, const string& plus)
{
    quiz_num.push_back(number);
    quiz_title.push_back(title);
    quiz_txt.push_back(text);
    quiz_ans.push_back(answer);
    quiz_hint.push_back(hint);
    quiz_plus.push_back(plus);
}

void Quiz:: start_Quiz(int index)
{
    q_index = index;
    cout << "=======================================================================================================" << endl << endl;
    cout << "< " << quiz_title[index] << " >" << endl << endl;

    cout << quiz_txt[index] << endl << endl;
    cout << "=======================================================================================================" << endl << endl;

    q_point += 20; //�������� 20����
    cout << "��¦ ����: " << q_point << endl << endl;

    cout << "[ h: ��Ʈ, q: ���� ]" << endl << endl;
}

void Quiz:: enter_Ans(int index)
{
    q_index = index;
    bool isCorrect = false;
    while (!isCorrect)
    {
        cout << ">> ���� �Է�: ";

        string user_ans;
        cin >> user_ans;
        cout << endl << endl;

        if (user_ans == quiz_ans[q_index])
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); //���
            cout << "����!" << endl << endl;
            cout << quiz_plus[index] << endl << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

            cout << "��Ʈ ���� ȹ��!" << endl;
            cout << "���� ��Ʈ ����: " << coin.get_Coin() << endl;

            isCorrect = true;
        }

        else if (user_ans == "h")
        {
            if (coin.num_coin >= 1)
            {
                cout << "��Ʈ ���� ���!" << endl;
                cout << "�ܿ� ��Ʈ ����: " << coin.use_Coin() << "��" << endl << endl;

                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); //�ʷ�
                cout << quiz_hint[index] << endl << endl;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            }
            else
            {
                cout << "��Ʈ ������ �����մϴ�." << endl << endl;
            }
        }

        else if (user_ans == "q")
        {
            if (q_point >= 10)
            {
                q_point -= 10;
            }
            else
            {
                q_point = 0;
            }

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            cout << "���� ����!" << endl;
            cout << "(��¦ ���� -10)" << endl << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

            break;
        }

        else
        {
            q_point -= 5;

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); //����
            cout << "����! �ٽ� Ǯ���." << endl;
            cout << "(��¦ ���� -5)" << endl << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        }
    }
}
