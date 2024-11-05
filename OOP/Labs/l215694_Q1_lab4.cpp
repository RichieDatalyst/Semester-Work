#include <iostream>
using namespace std;
class BiggerInt {
    private:
    int* big_int_;
    int int_length_;
    public:
    BiggerInt () {
        big_int_ = nullptr;
        int_length_ = 0;
    }
    BiggerInt (const int * obj, int size) {
        int_length_ = size;
        big_int_ = new int[int_length_];
        for(int i = 0; i < int_length_; i++) {
            big_int_[i] = obj[i];
        }
    }
    void assign(const BiggerInt & obj) {
        int_length_ = obj.int_length_;
        big_int_ = new int[int_length_];
        for(int i = 0; i < int_length_; i++) {
            big_int_[i] = obj.big_int_[i];
        }
    }
    void assign(const int * big_int, int size) {
        int_length_ = size;
        big_int_ = new int[int_length_];
        for(int i = 0; i < int_length_; i++) {
            big_int_[i] = big_int[i];
        }
    }
    void append(const BiggerInt& obj) {
    int* new_big_int = new int[int_length_ + obj.int_length_];
    for (int i = 0; i < int_length_; i++) {
        new_big_int[i] = big_int_[i];
    }
    for (int i = 0; i < int_length_; i++) {
        new_big_int[int_length_ + i] = obj.big_int_[i];
    }
    big_int_ = new_big_int;
    int_length_ += obj.int_length_;
}
    void append(const int* big_int, int size) {
    int* new_big_int = new int[int_length_ + size];
    for (int i = 0; i < int_length_; i++) {
        new_big_int[i] = big_int_[i];
    }
    for (int i = 0; i < int_length_; i++) {
        new_big_int[int_length_ + i] = big_int[i];
    }
    big_int_ = new_big_int;
    int_length_ += size;
}   
    int compareTo(const BiggerInt & obj) {
        if(int_length_ < obj.int_length_) {
            return 1;
        }
        else if(int_length_ > obj.int_length_) {
            return 2;
        }
        else{
            for(int i = 0; i < int_length_; i++) {
                if(big_int_[i] < obj.big_int_[i]) {
                    return 1;
                }
                else if(big_int_[i] > obj.big_int_[i]) {
                    return 2;
                }
            }
            return 0;
        }
    }
        int compareTo(const int* big_int, int size) {
        if(int_length_ < size) {
            return 1;
        }
        else if(int_length_ > size) {
            return 2;
        }
        else{
            for(int i = 0; i < int_length_; i++) {
                if(big_int_[i] < big_int[i]) {
                    return 1;
                }
                else if(big_int_[i] > big_int[i]) {
                    return 2;
                }
            }
            return 0;
        }
    }
    void display() {
        if(big_int_ == nullptr) {
            cout << "NO VALUE ASSIGNED" << endl;
        }
        else{
            for(int i = 0; i < int_length_; i++) {
                cout << big_int_[i] << " ";
            }
            cout << endl;
        }
    }
    ~BiggerInt() {
        delete[]big_int_;
    }
};
int main() {
    int arr1[] = {1, 8, 5};
    int arr2[] = {9, 3, 1};
    BiggerInt obj1(arr1, 3);
    BiggerInt obj2(arr2, 3);
    BiggerInt obj3;
    obj3.assign(obj1);
    obj3.display();
    obj3.append(obj2);
    obj3.display();
    int arr3[] = {1, 6, 4};
    int arr4[] = {4, 9, 7};
    BiggerInt obj0(arr3, 3);
    BiggerInt obj4(arr4, 3);
    cout << obj0.compareTo(obj4) << endl; 
    cout << obj4.compareTo(obj0) << endl;
    cout << obj4.compareTo(obj4) << endl;
    return 0;
}
