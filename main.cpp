#include"Constant_table.h"
#include"Dynamic_table.h"
#include <iostream>
using namespace std;


int main(){
	Const_table A;
	ifstream voc("vocabulary.txt");
	A.Load_from_file(voc);
	bool s = A.Is_in_table("into");
	cout << "into in vocabulary  " << s << endl;
	s = A.Is_in_table("bllbla");
	cout << "blabla in vocabulary  " << s << endl;
	s = A.Add_element("blabla");
	cout << "add blabla in vocabulary  " << s << endl;
	s = A.Is_in_table("blabla");
	cout << "blabla in vocabulary  " << s << endl;
	int u;
	string a;
	s = A.Get_element_number("do", u);
	cout << "this elemen(do) is table  " << s << "  it's number " << u << endl;
	u = NULL;
	s = A.Get_element_number("work", u);
	cout << "this elemen(work) is table  " << s << "  it's number " << u << endl;
	s = A.Get_element_value(3,a);
	cout << "this elemen(3) is table  " << s << "  it's value " << a << endl;
	a = "no";
	s = A.Get_element_value(8, a);
	cout << "this elemen(8) is table  " << s << "  it's value " << a << endl;
	cout << endl << endl << endl;
	Dyn_table B;
	ifstream in("some_text.txt");
	B.Load_programm(in);
	s = B.Is_in_table("kok");
	cout << "kok in table  " << s << endl;
	s = B.Is_in_table("gyg");
	cout << "gyg in table  " << s << endl;
	string d = "gyg";
	s = B.Add_element("gyg");
	cout << "gyg  Add in table  " << s << endl;
	s = B.Is_in_table("gyg");
	cout << "gyg in table  " << s << endl;
	u = B.Get_tocin_type("ji");
	cout << "the type of ji  " << u << endl;
	s = B.Set_tocin_type("ji");
	cout << "set ji type  " << s << endl;
	u = B.Get_tocin_type("ji");
	cout << "the type of ji  " << u << endl;
	u = B.Get_tocin_type("ji1212");
	cout << "the type of ji1212  " << u << endl;
	u = B.Get_tocin_vision("8");
	cout << "the vision of 8  " << u << endl;
	u = B.Get_tocin_type("1212");
	cout << "the vision of 1212  " << u << endl;
	s = B.Set_tocin_vision("8");
	cout << "add vision of 8  " << s << endl;
	tocin re;
	s = B.Get_tocin("56", re);
	cout << "the tocin whith name 56 get  " << s << "  type  " << re.type<<"  vision  "<< re.vision<< endl;
	tocin r;
	s = B.Get_tocin("koli4", re);
	cout << "the tocin whith name koli4 get  " << s << "  type  " << r.type << "  vision  " << r.vision << endl;
	r.name = "kok1";
	r.type = 1;
	r.vision = 0;
	s = B.Set_tocin(r);

	cout << "set new tocin kok1(type = 1; vision = 0)  " << s << endl;
	int n1, n2;
	s = B.Get_tocin_address("kok", n1, n2);
	cout << "get address of kok  " << s << endl;
	cout << "the address of kok : " << n1 << "," << n2 << endl;
	s = B.Get_tocin_address("kok1", n1, n2);
	cout << "get address of kok1  " << s << endl;
	cout << "the address of kok1 : " << n1 << "," << n2 << endl;
	n1 = n2 = -1;
	s = B.Get_tocin_address("fork", n1, n2);
	cout << "get address of fork  " << s << endl;
	cout << "the address of fork : " << n1 << "," << n2 << endl;

	system("pause");
	return 0;
}