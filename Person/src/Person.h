/*
 * Person.h
 *
 *  Created on: Aug 24, 2018
 *      Author: justi
 */

#include <iostream>
#include <sstream>
using namespace std;

#ifndef PERSON_H_
#define PERSON_H_

class Person{

private:
	string name;
	int age;

public:

	Person();
	Person(const Person& other): name(other.name), age(other.age){ cout << "Person copied!" << endl;};   //
	Person(string name){this->name = name; age=0;}
	Person(string name, int age);
	string toString();
	~Person();


	void setName(string name);
	string getName();
	void setAge(int age);
	int getAge();

};



#endif /* PERSON_H_ */
