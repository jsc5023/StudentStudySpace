#include <stdio.h>

class Parent { ; };

class Child : public Parent { ; };

int main() {
	Parent P, * pP;
	Child C, * pC;
	int i = 1234;

	pP = static_cast<Parent*>(&C);
	pC = static_cast<Child*>(&P); // 허용은 하지만 위험하다. //(Child *)&P;
	pP = (Parent*)&i;	// static_cast<Parent*>(&i); 로 쓰면 에러 

	return 0;
}