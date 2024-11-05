#include <iostream>
using namespace std;
int main() {
	int oldSize;
	cout << "Enter Size : ";
	cin >> oldSize;
	int* arr = new int[oldSize];
	int c = 0;
	while (1) {
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
	int k = 0;
	int count = c - 1;
	for (int i = 0; i < count; i++) {
		if (*(arr + i) == *(arr + i + 1)) {
			k++;
		}
	}
	int newSize = oldSize - k;
	int* newarr = new int[newSize];
	for (int i = 0, l = 0; i < newSize; i++) {
		if (*(arr + i) != *(arr + i + 1)) {
			*(newarr + l) = *(arr + i);
			l++;
		}
	}
	delete[]arr;
	arr = NULL;
	arr = newarr;
	newarr = NULL;
	for (int i = 0; i < k + 1; i++) {
		cout << *(arr + i) << " ";
	}
	return 0;
}

