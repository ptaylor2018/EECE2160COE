#include <iostream>
int minFind(int values[],int length);
int main(){
	//initialize array of 6 integers
	int array[] = {5,6,7,8,2,1};

	//obtain minimum value
	int minimum = minFind(array,6);

	//print result
	std::cout <<"The minimum value is " <<  minimum <<'\n';

	//end
	return 0;
}
int minFind(int values[],int length){
	//initialize minimum valule to the first element
	int min = values[0];

	//traverse the rest of the array
	for(int i = 1; i < length; i ++){
		if(values[i] < min){
			min = values[i];
		}
	}
	//return the found minimum value
	return min;	
}
