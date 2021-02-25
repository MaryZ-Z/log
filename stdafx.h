// stdafx.h: включаемый файл дл€ стандартных системных включаемых файлов
// или включаемых файлов дл€ конкретного проекта, которые часто используютс€, но
// не часто измен€ютс€
//

#pragma once

#include "targetver.h"
#include <iostream>
#include <stdio.h>
#include <tchar.h>
#include <string>
using namespace std;
struct User { // структура пользовател€
	string name;
	int colvo;
	User* next; // указатель на следующего пользовател€ в списке
};


// TODO: ”становите здесь ссылки на дополнительные заголовки, требующиес€ дл€ программы
