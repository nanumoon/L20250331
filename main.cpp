#include<iostream>

using namespace std;

//�ڷ��� �޸� ���� ���� ũ�� ����Ѵ�.
//���ڸ� �����ϰ� ����� �� �뵵�� �ٲ�
//BIOS
//int cpu, �����Ϸ� ���� ũ�Ⱑ �ٸ�
//0~255, 8bit -> 7bit -128 ~ 0 ~ 127
//bi5 -> 8bit == byte
//UE5 �ڵ� ǥ��(������ �˾��̴�)
//jenkins, sobarQube
//����ȯ, Casting
//float A = 5.5f;
//int Beta = A;

int main()
{

	int Number1 = 5;
	int Number2 = 4;

	int Number3 = Number1 + Number2;
	cout << Number3 << endl;

	int Number4 = Number1 - Number2;
	cout << Number4 << endl;

	int Number5 = Number1 * Number2;
	cout << Number5 << endl;

	int Number6 = Number1 / Number2;
	cout << Number6 << endl;

	int Number7 = Number1 % Number2;
	cout << Number7 << endl;

	float Count1 = 5.0f;
	float Count2 = 2.5f;

	float Count3 = Count1 + Count2;
	cout << Count3 << endl;

	float Count4 = Count1 - Count2;
	cout << Count4 << endl;
	
	float Count5 = Count1 * Count2;
	cout << Count5 << endl;
	
	float Count6 = Count1 / Count2;
	cout << Count6 << endl;

	return 0;
}