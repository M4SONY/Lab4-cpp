#include "pch.h"
#include "Lamp.h"
#include <iostream>
#include <string>

int main()
{
	Lamp h;
	h.settype("halogen");
	h.setnumber(15);
	h.setpower(100);
	h.numb = 32;
	cout << h.gettype() << endl;
	cout << h.getcurrent() << endl;
	cout << h.numb << endl;
	cout << h.getpower() << endl;
	cout << h.getname() << endl;
	cout << h.gettape() << endl;
	cout << h.getnumber() << endl;
	cout << h.getofforon() << endl << endl;
	Lamp a;
	a.settype("halogen2");
	a.setnumber(45);
	a.setpower(200);
	a.numb = 30;
	cout << a.gettype() << endl << a.getcurrent() << endl << a.numb << endl << a.getpower() << endl << a.getname() << endl << a.gettape() << endl << a.getnumber() << endl << a.getofforon() << endl << endl;
	Lamp b;
	b.settype("halogen3");
    b.setnumber(55);
	b.setpower(300);
	b.numb = 60;
	cout << b.gettype() << endl << b.getcurrent() << endl << b.numb << endl << b.getpower() << endl << b.getname() << endl << b.gettape() << endl << b.getnumber() << endl << b.getofforon() << endl << endl;
}