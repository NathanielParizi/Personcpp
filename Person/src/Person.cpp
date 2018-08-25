//============================================================================
// Name        : Person.cpp
// Author      : Nathaniel-Joel Parizi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Person.h"

Person::Person() {
	int age = 0;
	string name = "";
}

Person::Person(string name, int age) {

	this->name = name;
	this->age = age;
}



void Person::setName(string name) {
	this->name = name;

}

string Person::getName() {

	return this->name;
}

void Person::setAge(int age){
	this->age = age;
}

int Person::getAge(){
	return this->age;
}

string Person::toString() {

	stringstream ss;

	ss << "\n\n STRING STREAM\n***************Character:\n  Name: ";
	ss << name << endl;
	ss << " Age: ";
	ss << age << endl;
	return ss.str();

}

