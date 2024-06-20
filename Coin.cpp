#include"Coin.h"


int Coin:: show_Coin()
{
    return num_coin; //코인 개수
}

int Coin:: get_Coin()
{
    return num_coin = num_coin + 1; //코인 획득 후 개수 출력
}

int Coin:: use_Coin()
{
    return num_coin = num_coin - 1; //코인 사용 후 개수 출력
}