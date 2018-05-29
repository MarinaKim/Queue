#include"Queue_arr.h"
#include"Queue_arr.cpp"
#include"Queue_List.h"
#include"Queue_List.cpp"

int main() {

	int n;
		cout << "enter task num:";
		cin >> n;
		switch (n) {
//array
		case 1: {			
			Queue_arr <int> s;
			s.push(3);
			s.push(5);
				while (!s.empty()) {
				cout << s.front() << endl;
				s.pop();
			}
				
		}break;
//linked list
		case 2: {
			Queue_list <int> s;
			s.push(3);
			s.push(5);
			while (!s.empty()) {
				cout << s.front() << endl;
				s.pop();
			}
		}break;
		}

	system("pause");
	return 0;
}