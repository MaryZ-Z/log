#pragma once
#include "stdafx.h"
#include <string>
class User_list
{
public:
	User* Start = NULL; // Указатель начала списка
	User_list();
	~User_list();
	void Add(User* tmp); // функция добавления в начало списка
	bool find(string str); // функция поиска
	void ShowList(); // функция просмотра списка
};

