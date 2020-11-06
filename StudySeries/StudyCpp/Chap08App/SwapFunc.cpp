#include <stdio.h>

//class Utill
//{
//public:
//	template <typename T>
//	void Swap(T& a, T& b)
//	{
//		T t;
//		t = a; a = b; b = t;
//	}
//};

template <typename T>
void Swap(T& a, T& b)
{
	T t;
	t = a; a = b; b = t;
}

//template <typename T>
//T Add(T &a, T &b) {
//	return a + b;
//}
//
//template <typename T>
//T Minus(T& a, T& b) {
//	return a - b;
//}

//void swap(double& a, double& b)
//{
//	double t;
//	t = a; a = b; b = t;
//}

int main() {
	//Utill u;
	int a = 3, b = 4;
	double c = 1.2, d = 3.4;
	char e = 'e', f = 'f';

	Swap(a, b);
	Swap(c, d);
	Swap(e, f);

	//u.Swap(a, b);
	//u.Swap(c, d);
	//u.Swap(e, f);

	printf("a = %d, b = %d\n", a, b);
	printf("c = %f, d = %f\n", c, d);
	printf("e = %c, f = %c\n", e, f);

	//printf("a + b = %d\n", Add(a, b));
	//printf("c + d = %f\n", Add(c, d));
	//printf("f + g = %c\n", Add(e, f));
}