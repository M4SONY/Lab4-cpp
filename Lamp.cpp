#include "pch.h"
#include "Lamp.h"

void Lamp::setname(string name) {
	this->name = name;
}

Lamp::~Lamp()
{
	cout << endl << "detructor";
}