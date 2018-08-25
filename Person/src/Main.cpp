/*
 * Main.cpp
 *
 *  Created on: Aug 24, 2018
 *      Author: justi
 */

#include <iostream>
using namespace std;
#include "Person.h"

Person *createPerson() {

	Person *pnPerson = new Person();
	pnPerson->setName("Cloud");
	return pnPerson;
}

int main() {
	cout << "Hello" << endl; // prints Hello

	Person p1;

	cout << "What's the characters name?" << endl;
	string myName;
	cin >> myName;

	p1.setName(myName);
	p1.getName();

	cout << "Name of person with get method " << p1.getName() << endl;

	cout << " How old is he/she " << endl;
	int myAge;
	cin >> myAge;
	p1.setAge(myAge);

	cout << p1.getName() << " is age: " << p1.getAge() << endl;

	cout << p1.toString() << endl;

	Person p2("Jean", 33);

	cout << p2.toString() << endl;

	Person p3("Justin");

	cout << p3.toString() << endl;

	Person p4;

	cout << p4.toString() << endl;

	Person p5 = p1;
	cout << p5.toString() << endl;

	Person p6(p1);

	cout << "ok" << p6.toString() << endl;

	// new operator must be followed by the delete operator to free object from memory

	Person *pPerson = new Person();
	pPerson->setName("Lance");
	pPerson->setAge(22);
	pPerson->toString();


	//create a new object from a function

	Person *pnCloud = new Person();
	pnCloud->setName("cloud");

	cout << pnCloud->toString() << endl;

	delete pnCloud;

	return 0;

}
