#include "queue.h"
void main()
{
	int n;
	while(1)
	{
		system("cls");
		cout << "\t\t����\n1.����\n2.�����\n3.������� ���� ������\n4.�����";
		cin >> n;
		switch(n)
		{
		case 1: enqueue(); break;
		case 2: dequeue(); break;
		case 3: deqAll(); break;
		case 4: break;
		}
		if(n==4)break;
	}
}
