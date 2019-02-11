#include <iostream>
void Mirror(int v[], int n);

int main(){
	//declare array
	int v[] = {5, 6, 7, 8, 2, 1};

	//mirror it
	Mirror(v,6);

	//Print it
	for(int i = 0; i < 6; i++){
		std::cout << v[i] << '\n';
	}
	//end
	return 0;
}
void Mirror(int v[], int n){
	//traverse array
	for (int i = 0; i < n/2; i++){
		//exchange v[i] with v[n-1-i]
		int tmp = v[i];
		v[i] = v[n-1-i];
		v[n-1-i] = tmp;
	}	
}

