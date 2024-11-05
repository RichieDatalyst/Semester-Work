#include <iostream>
using namespace std;
class stat {
    private:
    int size;
    int* array;
    public:
    stat() {
        size = 0;
        array = NULL;
    }
    void setarray(int* array, int size) {
        this->array = new int[size];
        for (int i = 0; i < size; i++) {
            this->array[i] = array[i];
        }
    }
    int getSize() {
        return size;
    }
    int* getarray() {
        return this->array;
    }
    friend double median(const stat& obj);
};
double median(const stat& obj) {
    for (int i = 0; i < obj.size; i++) {
        for (int j = i + 1; j < obj.size; j++) {
        if(obj.array[i] > obj.array[j]) {
            int temp = obj.array[i];
            obj.array[i] = obj.array[j];
            obj.array[j] = temp;
            }
       }
    }
    double result;
    if(obj.size % 2 == 0) {
        result = (obj.array[obj.size / 2] + obj.array[(obj.size / 2) + 1]) / 2;
    }
    else {
        result = obj.array[obj.size / 2];
    }
    return result;
}
int main() {
 stat a1;
 int size = 6;
 int arr[] = {4, 6, 3, 2, 8, 9};
 a1.setarray(arr, size);
 cout << "Median : " << median(a1) << endl; 
    return 0;
}
