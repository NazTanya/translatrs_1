#pragma once
#include<stdlib.h>
#include<vector>
#include<string>
#include<fstream>
#include<algorithm>
#define N 62
using namespace std;

struct tocin {
	string name;
	bool type;
	bool vision;
};


class Dyn_table {
public:
	//добавление элемена в таблицу
	bool Add_element(string a);
	//проверка на наличие в таблице
	bool Is_in_table(string a);
	//загрузка программы из файла
	void Load_programm(ifstream &prog);
	//извлечение типа токина
	int Get_tocin_type(string a);
	//устанавление типа токина
	bool Set_tocin_type(string a);
	//извлечение видимости токина
	int Get_tocin_vision(string a);
	//установление видимости токина
	bool Set_tocin_vision(string a);
	//извлечение  токина по имени
	bool Get_tocin(string a, tocin &b);
	//извлечение токина по адресу
	bool Get_tocin(int n1, int n2, tocin &b);
	//установление токина
	bool Set_tocin(tocin a);
	//извлечение адреса токиина по токину
	bool Get_tocin_address(tocin a,int &n1, int &n2);
	//извлечение адреса токина по имени
	bool Get_tocin_address(string a, int &n1, int &n2);
private:
	vector<tocin> element[N];
	//хэш-функция (Сначала числа -> строчные буквы -> заглавные буквы)
	int Hash_function(string a);
};