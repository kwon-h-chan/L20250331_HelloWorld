#include <iostream>

using namespace std;


// 0 ~ 255, 8bit -> 7bit  -127 ~ 126
// int�� cpu, �����Ϸ� ���� ũ�Ⱑ �ٸ�
// 8bit -> byte

int main()
{
	int Number1 = 65;
	int Number2 = 200;

	float F = 5.5f;

	int B = (int)F;

	cout << B << endl;
	
	return 0;
}