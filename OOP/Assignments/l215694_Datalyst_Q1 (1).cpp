#include <iostream>
using namespace std;
int main() {
		int oldSize = 5;
		int* arr = new int[oldSize];
		int c = 0;
		while(1) {
			if (c == oldSize) {
				cout << "Increasing Size " << oldSize * 2 << endl;
				int* tmp = new int[oldSize * 2];
				for (int i = 0; i < oldSize; i++) {
					*(tmp + i) = *(arr + i);
				}
				delete[]arr;
				arr = NULL;
				arr = tmp;
				tmp = NULL;
				oldSize = oldSize * 2;
			}
			cin >> *(arr + c);
			if (*(arr + c) == -1) {
				break;
			}
			c++;
		}
		cout << "OUTPUT" << endl;
		for (int i = c - 1; i >= 0; i--) {
			cout << *(arr + i) << " ";
		}
		delete[]arr;
		arr = NULL;
		return 0;
	}

