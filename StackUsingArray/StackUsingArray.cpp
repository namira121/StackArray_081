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
		cout << element << "ditambahkan(pushed)" << endl;

		return element;
	}

	void pop() {
		if (empty()) { //step 1
			cout << "\nStack is empty. Cannot pop." << endl; //1.a
			return; //1.b
		}

		cout << "\nThe popped element is : " << stack_array[top] << endl; //step 2
		top--; //step 3 decrement
	}

	//method for check if data is empty
	bool empty() {
		return(top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = top; tmp >= 0; tmp--) {
				cout << stack_array[tmp] << endl;
				cout << "\n" << endl;
			}
		}
	}
};

int main() {
	stackArray obj;
	while (true) {
		try {
			cout << "===Stack Array===" << endl;
			cout << "1. PUSH" << endl;
			cout << "2. POP" << endl;
			cout << "3. DISPLAY" << endl;
			cout << "4. EXIT" << endl;
			cout << "Masukkan pilihan : " << endl;
			char ch;
			cin >> ch; 

			switch (ch) {
			case'1':
				int element;
				cout << "Masukkan data : " << endl; 
				cin >> element;  
				obj.push(element); 
				break;
			case'2':
				obj.pop();
				break;
			case'3':
				obj.display();
				break;
			case'4':
				return 0;
			default:
				cout << "Invalid option" << endl;
				break; 
			}
 		}
		catch (exception& e) {
			cout << "check for the values entered" << endl; 
		}
	}
}