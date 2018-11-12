#include <string>
#include <iostream>
#pragma once

using namespace std;

class Lamp
{
private:
	string type;
	int power;
	int number;
	string name;
protected:
	int current;
	string offoron;



public:
	string tape;
	int numb;
	Lamp() {
		settype("diode");
		setpower(50);
		setnumber(12);
		setname("electroniclamp");
		setcurrent(30);
		setofforon("off");
		settape("ok ");

	}
	~Lamp();
	void settype(string type) {
		this->type = type;
	}
	void setpower(int power) {
		this->power = power;
	}
	void setnumber(int number) {
		this->number = number;
	}
	void setname(string name);

	string gettype() const {
		return this->type;
	}
	int getpower() const {
		return this->power;
	}
	int getnumber() const {
		return this->number;
	}
	string getname() const {
		return this->name;
	}
	int getcurrent() const {
		return this->current;
	}
	void setcurrent(int current) {
		this->current = current;
	}
	void setofforon(string offoron) {
		this->offoron = offoron;
	}
	void settape(string tape) {
		this->tape = tape;
	}

	string gettape() const {
		return this->tape;
	}

		string getofforon() const {
			return this->offoron;
		}
		

};