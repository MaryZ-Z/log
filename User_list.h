#pragma once
#include "stdafx.h"
#include <string>
class User_list
{
public:
	User* Start = NULL; // ��������� ������ ������
	User_list();
	~User_list();
	void Add(User* tmp); // ������� ���������� � ������ ������
	bool find(string str); // ������� ������
	void ShowList(); // ������� ��������� ������
};

