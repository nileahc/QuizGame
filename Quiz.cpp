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

    q_point += 20; //문제마다 20점씩
    cout << "반짝 지수: " << q_point << endl << endl;

    cout << "[ h: 힌트, q: 포기 ]" << endl << endl;
}

void Quiz:: enter_Ans(int index)
{
    q_index = index;
    bool isCorrect = false;
    while (!isCorrect)
    {
        cout << ">> 정답 입력: ";

        string user_ans;
        cin >> user_ans;
        cout << endl << endl;

        if (user_ans == quiz_ans[q_index])
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); //노랑
            cout << "정답!" << endl << endl;
            cout << quiz_plus[index] << endl << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

            cout << "힌트 코인 획득!" << endl;
            cout << "보유 힌트 코인: " << coin.get_Coin() << endl;

            isCorrect = true;
        }

        else if (user_ans == "h")
        {
            if (coin.num_coin >= 1)
            {
                cout << "힌트 코인 사용!" << endl;
                cout << "잔여 힌트 코인: " << coin.use_Coin() << "개" << endl << endl;

                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); //초록
                cout << quiz_hint[index] << endl << endl;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            }
            else
            {
                cout << "힌트 코인이 부족합니다." << endl << endl;
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
            cout << "문제 포기!" << endl;
            cout << "(반짝 지수 -10)" << endl << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

            break;
        }

        else
        {
            q_point -= 5;

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); //빨강
            cout << "오답! 다시 풀어보자." << endl;
            cout << "(반짝 지수 -5)" << endl << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        }
    }
}
