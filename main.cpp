#include <iostream>

using namespace std;


// 0 ~ 255, 8bit -> 7bit  -127 ~ 126
// int는 cpu, 컴파일러 마다 크기가 다름
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