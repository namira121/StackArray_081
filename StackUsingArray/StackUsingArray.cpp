#include <iostream>
#include <string>
using namespace std;

class stackArray {
private:
	int stack_array[5];
	int top;
	
public:
	//constructor
	stackArray() {
		top = -1;
	}

	int push(int element) {
		if (top == 4) {
			cout << "Number of data exceed the limit" << endl;
			return 0;
		}

		top++; //step2
		stack_array[top] = element; //step 3
		cout << endl;
		cout << element << "ditambahkan(pushed)" 
	}
};