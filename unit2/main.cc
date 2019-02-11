#include "List.h"
//include <iostream>
int main(){
	List list;
	ListInitialize(&list);
	// create person 1
	Person *p1 = new Person;
	p1->name = "John";
	p1->age = 25;
	ListInsert(&list, p1);
	
	//move ahead 1 position
	ListNext(&list);

	// create person 2
	Person *p2 = new Person;
	p2->name = "Mary";
	p2->age = 35;
	ListInsert(&list, p2);
	

	// traverse list, print persons
	ListHead(&list);
	PrintPerson(list.current);
	ListNext(&list);
	PrintPerson(list.current);

	//end
	return 0;
}