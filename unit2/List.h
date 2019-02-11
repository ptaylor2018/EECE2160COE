#ifndef LIST_H

#define LIST_H
#include <iostream>
struct Person{
	//information of the person
	std::string name;
	int age;
	
	//pointer to next person in list
	Person *next;
};

struct List{
	//first Person in hte list. nullptr indicates the list is empty
	Person *head;

	//current person in list. nullptr indicates 'past the end' position
	Person *current;

	//points to element before 'current.' Can be null if 
	//'current' is the first element in the list, or if the list is empty
	Person *previous;
};
void ListInitialize(List *list);
void ListNext(List *list);
void ListHead(List *list);
void ListFind(List *list, std::string name);
void ListInsert(List *list, Person *person);
void ListRemove(List *list);
void PrintPerson(Person *person);
#endif