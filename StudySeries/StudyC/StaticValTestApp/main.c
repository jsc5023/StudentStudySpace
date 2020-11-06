/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, �������� �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.05.
  writer - Jung Seong Cheol
*/

#include <stdio.h>
#include <stdlib.h>

void auto_func(void);
void static_func(void);
// �����Լ�
int main(void) 
{
    int i;

    printf("�Ϲ� ���� ����(auto)�� ����� �Լ�...\n");
    for (i = 0; i < 3; i++)
    {
        auto_func();
    }

    printf("���� ���� ����(static)�� ����� �Լ�...\n");
    for (i = 0; i < 3; i++)
    {
        static_func();
    }

	system("pause");
	return EXIT_SUCCESS;
}

void auto_func(void)
{
    auto int a = 0;

    a++;
    printf("%d\n", a);
}

void static_func(void)
{
    static int a;

    a++;
    printf("%d\n", a);
}