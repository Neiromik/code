#include "list.h"
void addlist()
{
	pos = new list;
	pos = first;
	while(pos!=NULL)
	{
		last = pos;
		pos = pos->next;
	}
	cout << "������� ��� ���������(������)\n";
	cin >> pos->name;
	cout << "������� ��� ���������\n";
	cin >> pos->spec;
	cout << "������� ������� ���������\n";
	cin >> pos->age;
	last->next = pos;
	pos->next=NULL;
	last = pos;
}
void firstlist()
{
	first = new list;
	cout << "������� ��� ���������(������)\n";
	cin >> first->name;
	cout << "������� ��� ���������\n";
	cin >> first->spec;
	cout << "������� ������� ���������";
	cin >> first->age;	
	first->next=NULL;
	last = first;
}
