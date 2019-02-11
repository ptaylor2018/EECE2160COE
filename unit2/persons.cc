#include <iostream>

struct Person{
	std::string name;
	int age;
};

void PrintPerson(Person *pp){
	std::cout << "Name: " << pp->name << '\n';
	std::cout << "Age: " << pp->age << '\n';
}

void ReadPerson(Person *p){
	//Read name
	std::cout << "Enter name: ";
	std::cin >> p->name;

	//Read age
	std::cout << "Enter age: ";
	std::cin >> p->age;
}

int main(){
	//request n
	int n;
	std::cout << "Enter number of persons: ";
	std::cin >> n;

	//allocate array of persons
	Person **v = new Person *[n];

	//request information for persons
	for(int i = 0; i < n; i++){
		std::cout << "Person " << i << '\n';
		v[i] = new Person;
		ReadPerson(v[i]); 
	}

	//print persons
	for(int i = 0; i < n; i++){
		std::cout << "Person " << i << '\n';
		PrintPerson(v[i]);
		std::cout << '\n';

		//free memory
		delete v[i];
	}
	delete[] v;
	return 0;
}
