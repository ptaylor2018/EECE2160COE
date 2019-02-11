#include <iostream>

struct Person{
	//informaation of the person
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

void ListInitialize(List *list){
	list->head = nullptr;
	list->current = nullptr;
	list->previous = nullptr;
}

void ListNext(List *list){
	if(list->current){
		list->previous = list->current;
		list->current = list->current->next;
	}
}

void ListHead(List *list){
	list->current = list->head;
	list->previous = nullptr;
}

//set the current position to the person with the given name
//if no person exists with that name, the current person is set to past-the-end
void ListFind(List *list, std::string name){
	ListHead(list);
	while(list->current && list->current->name != name){
		ListNext(list);
	}
}

//insert a person before the element at the current position in the list
//if the current position is past-the-end, the person is inserted at the
//end of the list. The new person is made the new current element of the list
void ListInsert(List *list, Person *person){
	// set the 'next' pointer of the new element
	person->next = list->current;

	// set 'next' pointer of the previous element. Treat the special case
	// where the current element is the head of the list.
	if(list->current == list->head){
		list->head = person;
	}else{
		list->previous->next = person;
	}
	//set the current element to the new person
	list->current = person;
}
// remove the current element in the list. if the current element is past-the-end,
// this call is ignored. the next element will be the element that appeared right after
// the removed element
void ListRemove(List *list){
	//ignore if current element is past-the-end
	if(!list->current){
		return;
	}
	//remove. consider special case where current element is head of the list
	if(list->current == list->head){
		list->head = list->current->next;
	} else { 
		list->previous->next = list->current->next;
	}
	// save pointer to the 'next' element
	Person *next = list->current->next;
	//free memory
	delete list->current;
	// update current element
	list->current = next;
}

void PrintPerson(Person *person){
	std::cout << "Name: " << person->name << '\n';
	std::cout << "Age: " << person->age << '\n';
}

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
