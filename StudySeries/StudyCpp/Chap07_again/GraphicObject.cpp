#include <stdio.h>

class Shape {
public:
	virtual void draw() = 0; //{ puts("���� ������Ʈ�Դϴ�."); }
};

class Line : public Shape {
public:
	virtual void draw() { puts("���� �߽��ϴ�."); }
};

class Circle : public Shape {
public:
	virtual void draw() { puts("���� �׸��ϴ�."); }
};

class Rect : public Shape {
public:
	virtual void draw() { puts("����� �簢���Դϴ�."); }
};

class Triangle : public Shape {
public:
	virtual void draw() { puts("�ﰢ���� �׸��ϴ�."); }
};

int main() {
	Shape* ar[] = { new Rect(), new Circle(), new Rect(), new Line(), new Triangle() };

	for (int i = 0; i < sizeof(ar)/sizeof(ar[0]); i++)
	{
		ar[i]->draw();
	}

	for (int i = 0; i < sizeof(ar)/sizeof(ar[0]); i++)
	{
		delete ar[i];
	}
}