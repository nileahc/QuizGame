#include "Game.h"

void Game::move_L2R(string name1, string name2) {
    bool isCorrect = false;
    while (!isCorrect)
    {
        if (name1 == "w") //wolf
        {
            if (name2 == "w") //sheep
            {
                //1
                if (wolf_L_num >= 2)
                {
                    wolf_L_num = wolf_L_num - 2;
                    wolf_R_num = wolf_R_num + 2;
                    cout << count << " ";
                    cout << "늑대 2마리 이동" << endl << endl;

                    isCorrect = true;
                }
                else
                {
                    cout << "늑대의 수가 부족함" << endl;
                    cout << "다시 선택" << endl << endl;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); //노랑
                    cout << "→ 동물 입력: ";
                    cin >> name1;
                    cin >> name2;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                }
            }
            else if (name2 == "s")
            {
                if (wolf_L_num >= 1 && sheep_L_num >= 1)
                {
                    //2=3
                    wolf_L_num = wolf_L_num - 1;
                    wolf_R_num = wolf_R_num + 1;
                    sheep_L_num = sheep_L_num - 1;
                    sheep_R_num = sheep_R_num + 1;

                    cout << count << " ";

                    cout << "늑대 1마리, 양 1마리 이동" << endl << endl;

                    isCorrect = true;
                }
                else
                {
                    cout << "수가 부족함" << endl;
                    cout << "다시 선택" << endl << endl;

                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                    cout << "→ 동물 입력: ";
                    cin >> name1;
                    cin >> name2;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                }
            }
            else if (name2 == ".")
            {
                if (wolf_L_num >= 1)
                {
                    wolf_L_num = wolf_L_num - 1;
                    wolf_R_num = wolf_R_num + 1;
                    cout << count << " ";

                    cout << "늑대 1마리 이동" << endl << endl;

                    isCorrect = true;
                }
                else
                {
                    cout << "늑대의 수가 부족함" << endl;
                    cout << "다시 선택" << endl << endl;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                    cout << "→ 동물 입력: ";
                    cin >> name1;
                    cin >> name2;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                }
            }
        }
        else if (name1 == "s")
        {
            if (name2 == "w")
            {
                if (wolf_L_num >= 1 && sheep_L_num >= 1)
                {
                    //3=2
                    wolf_L_num = wolf_L_num - 1;
                    wolf_R_num = wolf_R_num + 1;
                    sheep_L_num = sheep_L_num - 1;
                    sheep_R_num = sheep_R_num + 1;
                    cout << count << " ";

                    cout << "늑대 1마리, 양 1마리 이동" << endl << endl;

                    isCorrect = true;
                }
                else
                {
                    cout << "수가 부족함" << endl;
                    cout << "다시 선택" << endl << endl;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                    cout << "→ 동물 입력: ";
                    cin >> name1;
                    cin >> name2;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                }
            }
            else if (name2 == "s")
            {
                if (sheep_L_num >= 2)
                {

                    //4
                    sheep_L_num = sheep_L_num - 2;
                    sheep_R_num = sheep_R_num + 2;
                    cout << count << " ";

                    cout << "양 2마리 이동" << endl << endl;

                    isCorrect = true;
                }
                else
                {
                    cout << "양의 수가 부족함" << endl;
                    cout << "다시 선택" << endl << endl;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                    cout << "→ 동물 입력: ";
                    cin >> name1;
                    cin >> name2;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                }
            }
            else if (name2 == ".")
            {
                if (sheep_L_num >= 1)
                {
                    sheep_L_num = sheep_L_num - 1;
                    sheep_R_num = sheep_R_num + 1;
                    cout << count << " ";

                    cout << "양 1마리 이동" << endl << endl;

                    isCorrect = true;
                }
                else
                {
                    cout << "양의 수가 부족함" << endl;
                    cout << "다시 선택" << endl << endl;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                    cout << "→ 동물 입력: ";
                    cin >> name1;
                    cin >> name2;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                }
            }
        }
        else if (name1 == "s")
        {
            if (name2 == "w")
            {
                if (wolf_L_num >= 1 && sheep_L_num >= 1)
                {
                    //3=2
                    wolf_L_num = wolf_L_num - 1;
                    wolf_R_num = wolf_R_num + 1;
                    sheep_L_num = sheep_L_num - 1;
                    sheep_R_num = sheep_R_num + 1;
                    cout << count << " ";

                    cout << "늑대 1마리, 양 1마리 이동" << endl << endl;

                    isCorrect = true;
                }
                else
                {
                    cout << "수가 부족함" << endl;
                    cout << "다시 선택" << endl << endl;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                    cout << "→ 동물 입력: ";
                    cin >> name1;
                    cin >> name2;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                }
            }
            else if (name2 == "s")
            {
                if (sheep_L_num >= 2)
                {

                    //4
                    sheep_L_num = sheep_L_num - 2;
                    sheep_R_num = sheep_R_num + 2;
                    cout << count << " ";

                    cout << "양 2마리 이동" << endl << endl;

                    isCorrect = true;
                }
                else
                {
                    cout << "양의 수가 부족함" << endl;
                    cout << "다시 선택" << endl << endl;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                    cout << "→ 동물 입력: ";
                    cin >> name1;
                    cin >> name2;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                }
            }
            else if (name2 == ".")
            {
                if (sheep_L_num >= 1)
                {
                    sheep_L_num = sheep_L_num - 1;
                    sheep_R_num = sheep_R_num + 1;
                    cout << count << " ";

                    cout << "양 1마리 이동" << endl << endl;

                    isCorrect = true;
                }
                else
                {
                    cout << "양의 수가 부족함" << endl;
                    cout << "다시 선택" << endl << endl;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                    cout << "→ 동물 입력: ";
                    cin >> name1;
                    cin >> name2;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                }
            }
        }
        else if (name1 == ".")
        {
            if (name2 == "w")
            {
                if (wolf_L_num >= 1)
                {

                    wolf_L_num = wolf_L_num - 1;
                    wolf_R_num = wolf_R_num + 1;

                    cout << count << " ";

                    cout << "늑대 1마리 이동" << endl << endl;

                    isCorrect = true;
                }
                else
                {
                    cout << "수가 부족함" << endl;
                    cout << "다시 선택" << endl << endl;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                    cout << "→ 동물 입력: ";
                    cin >> name1;
                    cin >> name2;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                }
            }
            else if (name2 == "s")
            {
                if (sheep_L_num >= 1)
                {


                    sheep_L_num = sheep_L_num - 1;

                    cout << count << " ";

                    cout << "양 1마리 이동" << endl << endl;

                    isCorrect = true;
                }
                else
                {
                    cout << "양의 수가 부족함" << endl;
                    cout << "다시 선택" << endl << endl;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                    cout << "→ 동물 입력: ";
                    cin >> name1;
                    cin >> name2;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                }
            }
            else if (name2 == ".")
            {

                cout << "뗏목은 1마리 이상 타고 있어야 움직일 수 있음" << endl;
                cout << "다시 선택" << endl << endl;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                cout << "→ 동물 입력: ";
                cin >> name1;
                cin >> name2;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

            }

        }


    }

    count++;
}

void Game::move_R2L(string name3, string name4)
{
    bool isCorrect = false;
    while (!isCorrect)
    {
        if (name3 == "w") //wolf
        {
            if (name4 == "w") //sheep
            {
                //1
                if (wolf_R_num >= 2)
                {
                    wolf_L_num = wolf_L_num + 2;
                    wolf_R_num = wolf_R_num - 2;
                    cout << count << " ";

                    cout << "늑대 2마리 이동" << endl << endl;

                    isCorrect = true;
                }
                else
                {
                    cout << "늑대의 수가 부족함" << endl;
                    cout << "다시 선택" << endl << endl;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); //하늘
                    cout << "← 동물 입력: ";
                    cin >> name3;
                    cin >> name4;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                }
            }
            else if (name4 == "s")
            {
                if (wolf_R_num >= 1 && sheep_R_num >= 1)
                {
                    //2=3
                    wolf_L_num = wolf_L_num + 1;
                    wolf_R_num = wolf_R_num - 1;
                    sheep_L_num = sheep_L_num + 1;
                    sheep_R_num = sheep_R_num - 1;
                    cout << count << " ";

                    cout << "늑대 1마리, 양 1마리 이동" << endl << endl;

                    isCorrect = true;
                }
                else
                {
                    cout << "수가 부족함" << endl;
                    cout << "다시 선택" << endl << endl;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                    cout << "← 동물 입력: ";
                    cin >> name3;
                    cin >> name4;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                }
            }
            else if (name4 == ".")
            {
                if (wolf_R_num >= 1)
                {
                    wolf_L_num = wolf_L_num + 1;
                    wolf_R_num = wolf_R_num - 1;
                    cout << count << " ";

                    cout << "늑대 1마리 이동" << endl << endl;

                    isCorrect = true;
                }
                else
                {
                    cout << "늑대의 수가 부족함" << endl;
                    cout << "다시 선택" << endl << endl;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                    cout << "← 동물 입력: ";
                    cin >> name3;
                    cin >> name4;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                }
            }

        }
        else if (name3 == "s")
        {
            if (name4 == "w")
            {
                if (wolf_R_num >= 1 && sheep_R_num >= 1)
                {
                    //3=2
                    wolf_L_num = wolf_L_num + 1;
                    wolf_R_num = wolf_R_num - 1;
                    sheep_L_num = sheep_L_num + 1;
                    sheep_R_num = sheep_R_num - 1;
                    cout << count << " ";

                    cout << "늑대 1마리, 양 1마리 이동" << endl << endl;

                    isCorrect = true;
                }
                else
                {
                    cout << "수가 부족함" << endl;
                    cout << "다시 선택" << endl << endl;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                    cout << "← 동물 입력: ";
                    cin >> name3;
                    cin >> name4;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                }
            }
            else if (name4 == "s")
            {
                if (sheep_R_num >= 2)
                {

                    //4
                    sheep_L_num = sheep_L_num + 2;
                    sheep_R_num = sheep_R_num - 2;
                    cout << count << " ";

                    cout << "양 2마리 이동" << endl << endl;

                    isCorrect = true;
                }
                else
                {
                    cout << "양의 수가 부족함" << endl;
                    cout << "다시 선택" << endl << endl;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                    cout << "← 동물 입력: ";
                    cin >> name3;
                    cin >> name4;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                }
            }
            else if (name4 == ".")
            {
                if (sheep_R_num >= 1)
                {
                    sheep_L_num = sheep_L_num + 1;
                    sheep_R_num = sheep_R_num - 1;
                    cout << count << " ";

                    cout << "양 1마리 이동" << endl << endl;

                    isCorrect = true;
                }
                else
                {
                    cout << "양의 수가 부족함" << endl;
                    cout << "다시 선택" << endl << endl;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                    cout << "← 동물 입력: ";
                    cin >> name3;
                    cin >> name4;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                }
            }
        }
        else if (name3 == ".")
        {
            if (name4 == "w")
            {
                if (wolf_R_num >= 1)
                {

                    wolf_L_num = wolf_L_num + 1;
                    wolf_R_num = wolf_R_num - 1;

                    cout << count << " ";

                    cout << "늑대 1마리 이동" << endl << endl;

                    isCorrect = true;
                }
                else
                {
                    cout << "수가 부족함" << endl;
                    cout << "다시 선택" << endl << endl;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                    cout << "← 동물 입력: ";
                    cin >> name3;
                    cin >> name4;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                }
            }
            else if (name4 == "s")
            {
                if (sheep_R_num >= 1)
                {


                    sheep_L_num = sheep_L_num + 1;

                    cout << count << " ";

                    cout << "양 1마리 이동" << endl << endl;

                    isCorrect = true;
                }
                else
                {
                    cout << "양의 수가 부족함" << endl;
                    cout << "다시 선택" << endl << endl;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                    cout << "← 동물 입력: ";
                    cin >> name3;
                    cin >> name4;
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                }
            }
            else if (name4 == ".")
            {

                cout << "뗏목은 1마리 이상 타고 있어야 움직일 수 있음" << endl;
                cout << "다시 선택" << endl << endl;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                cout << "← 동물 입력: ";
                cin >> name3;
                cin >> name4;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

            }

        }


    }
    count++;
}

int Game::move_Count() const {
    return count;
}

void Game::display_State() {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);

    // 현재 상태를 사용자에게 보여주는 함수
    cout << "왼쪽: ";
    for (int i = 0; i < wolf_L_num; ++i) // 늑대
    {
        cout << "■";
    }
    for (int j = 0; j < sheep_L_num; ++j) // 양
    {
        cout << "□";
    }

    cout << endl;

    cout << "오른쪽: ";
    for (int i = 0; i < wolf_R_num; i++) // 늑대
    {
        cout << "■";
    }
    for (int j = 0; j < sheep_R_num; j++) // 양
    {
        cout << "□";
    }
    cout << endl << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

}

bool Game::Ending()
{
    if (((wolf_L_num > sheep_L_num && sheep_L_num > 0) || (wolf_R_num > sheep_R_num && sheep_R_num > 0)))
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); //빨강
        cout << "양이 잡아먹혔습니다.\n게임 종료\n";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //빨강

        return true;
    }
    if (wolf_R_num + sheep_R_num == 6) {

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); //빨강
        cout << "늑대와 양 옮기기 성공!\n";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //빨강

        return true;
    }
    return false;
}