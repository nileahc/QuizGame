#include"Coin.h"


int Coin:: show_Coin()
{
    return num_coin; //���� ����
}

int Coin:: get_Coin()
{
    return num_coin = num_coin + 1; //���� ȹ�� �� ���� ���
}

int Coin:: use_Coin()
{
    return num_coin = num_coin - 1; //���� ��� �� ���� ���
}