#include"Game.h"
#include"Coin.h"
#include"User.h"
#include"Quiz.h"

int main() {
//	Game game;
 //   string name1;
 //   string name2;
 //   string name3;
 //   string name4;

 //   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

 //   cout << "< 늑대와 양 >" << endl << endl;
 //   cout << "늑대와 양 각 3마리를 모두 강 건너편으로 옮기고 싶다.\n그런데 뗏목을 쓰려면 다음과 같은 조건이 있다.\n\n - 뗏목에는 최대 2마리까지 탈 수 있다.\n - 뗏목은 1마리 이상 타고 있어야 움직인다.\n - 양쪽 기슭 모두 늑대가 양보다 많아지면 양은 잡아먹히고 만다.\n\n횟수에 제한은 없으나 최단 횟수는 11회이다.\n" << endl;
 //   cout << "늑대(w):■ 양(s):□" << endl << endl;

 //   game.display_State();

 //   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);

 //   cout << "예시: w w" << endl;
 //   cout << "실행 결과: 늑대 2마리가 이동됨" << endl << endl;

 //   cout << "예시: w s" << endl;
 //   cout << "실행 결과: 늑대 1마리, 양 1마리가 이동됨" << endl << endl;

 //   cout << "예시: w ." << endl;
 //   cout << "실행 결과: 늑대 1마리가 이동됨" << endl << endl;


 //   for (int i = 0; i < 50; i++)
 //   {
 //       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); //노랑

 //       cout << "→ 옮길 동물 입력: ";
 //       cin >> name1;
 //       cin >> name2;

 //       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

 //       game.move_L2R(name1, name2);
 //       game.display_State();

 //       if (game.Ending()) {
 //           break;
 //       }

 //       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); //하늘

 //       cout << "← 옮길 동물 입력: ";
 //       cin >> name3;
 //       cin >> name4;

 //       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

 //       game.move_R2L(name3, name4);
 //       game.display_State();

 //       if (game.Ending()) {
 //           break;
 //       }
 //   }
 //   return 0;


    Quiz quiz;
	User user;
	Coin coin;
	string final_point="";
	
	user.set_Name();
	
	quiz.add_Question(0,
	    "1. 이상한 계산",
	    "칠판에 다음과 같은 낙서가 되어 있었다.\n언뜻 보면 틀린 계산처럼 보이나 일정 조건 하에서는 이 식이 맞다고 한다.\n\n8-6=2\n8+6=2\n11+4=?\n\n?에 들어갈 숫자는?",
	    "3",
	    "당신은 매일같이 이런 계산을 하고 있을 것이다.\n8에 6을 더해서 2가 되는 것을 잘 생각해 볼 것\n주변에 있는 어떤 물건을 잘 생각해 보자.",
	    "이것은 시간의 계산인 것이다.\n11시의 4시간 후는 3시이다.");
	
	quiz.add_Question(1,
	    "2. 늘어난 생쥐는?",
	    "생쥐의 번식력은 무서울 정도로 왕성하다.\n생쥐는 한달에 한번씩 새끼를 낳으며 한번에 12마리의 새끼 쥐를 낳는다고 한다.\n또 태어난 새끼는 생후 2개월부터 새끼를 낳는다.\n지금 막 태어난 생쥐를 1마리 키우기 시작했다면, 10개월 뒤에는 도대체 몇 마리가 되어있을까?\n",
	    "1",
	    "사실은 아주 간단한 수수께끼이다.\n처음에 키우기 시작한 생쥐의 수에 주목하자.",
	    "한 마리만으로는 새끼가 생기지 않겠지.");
	
	quiz.add_Question(2,
	    "3. 남아있는 것은?",
	    "불이 켜진 양초가 10개 있었다.\n그런데 바람이 불어서 2개가 꺼지고 말았다.\n그리고 잠시 후에 보니 또 1개가 꺼져 있었다.\n그로부터 바람이 닿지 않도록 하고 그 후 1개도 꺼지지 않았다면 끝까지 남아 있었던 양초는 몇 개 인가?\n",
	    "3",
	    "여기에는 함정이 있다. 답해야 할 것은 [마지막까지 남아있는] 양초의 수이다.\n양초에 불을 붙여둔 채로 계속 두면 어떻게 될까?",
	    "타고있던 7개는 다 타면 없어지고 만다.\n남아있는 것은 도중에 불이 꺼진 3개의 양초일 것이다.");
	
	quiz.add_Question(3,
	    "4. 알약 나누기",
	    "7개의 알약이 있다.\n오늘부터 1일 1개씩 매일 복용해야 하는데 각 알약은 내용물의 양이 다르며 복용 날짜도 정해져 있다고 한다.\n그러나 모든 알약의 모양과 색이 똑같으므로 잘못 복용하지 않도록 1부터 순서대로 번호를 써 두려면\n최소 몇개의 번호를 써야할까?\n",
	    "5",
	    "[최소]에 집중하자.\n표시가 있는 것과 없는 것.\n이 둘로 충분히 구분은 할 수 있다.\n오늘부터 복용을 시작한다는 점에도 주목할 것.",
	    "오늘부터 복용해야 하므로 일단 오늘 분은 복용하도록 하자.\n그리고 2일째 약부터 6일째 약까지 숫자를 표시하는 것이다.\n그렇게 하면 아무 것도 쓰여있지 않은 약은 7일째 약임을 알 수 있다.\n그러므로 반드시 써야하는 알약은 5개.");
	
	quiz.add_Question(4,
	    "5. 5명의 용의자",
	    "다음은 용의자 5명의 증언이다.\n\nA: 5명 중 1명이 거짓말을 하고 있어\nB: 5명 중 2명이 거짓말을 하고 있어\nC: 5명 중 3명이 거짓말을 하고 있어\nD: 5명 중 4명이 거짓말을 하고 있어\nE: 5명 전부 다 거짓말을 하고 있어\n\n이 중에서 진실을 말하고 있는 사람을 석방하려면 몇 명을 석방해야 할까?\n",
	    "1",
	    "전원이 거짓말을 하고있다는 E의 말이 사실이라면 자신도 거짓말을 하고 있다는 것이 되므로 모순.\nA의 말이 사실이라면 5명 중 남은 3명은 A와 같은 내용을 말해야 하나 그렇지 않으므로 A의 말은 거짓말이다.\n이렇게 접근해보자.",
	    "전원이 한 가지 사실에 대해 서로 다른 내용을 말하고 있으므로\n진실을 말하고 있는 용의자가 있다면 1명일 것이다.\n이는 바로 D가 말하고 있는 내용.");
	
	
	 
	int question = 5;
	for (int i = 0; i < question; ++i)
	{
	    quiz.start_Quiz(i);
	    quiz.enter_Ans(i);
	
	    cout << "\n>> [enter]";
	    cin.ignore();
	    cin.get();
	
	    cout << "\x1B[2J\x1B[H"; //콘솔 지우기
	}
	
	cout << "이름: " << user.show_Name() << endl << endl;
	cout << "반짝 지수: " << quiz.q_point << endl << endl;
	    
	if (quiz.q_point >= 95)
	{
	    final_point = "A";
	}
	else if (quiz.q_point >= 85) 
	{
	    final_point = "B";
	}
	else if (quiz.q_point >= 75)
	{
	    final_point = "C";
	}
	else if (quiz.q_point >= 65)
	{
	    final_point = "D";
	}
	else 
	{
	    final_point = "E";
	}
	
	cout << "최종 등급: " << final_point << endl;
	    
	return 0;

}