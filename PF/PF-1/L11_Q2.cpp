#include <iostream>
#include <string>
using namespace std;
void countAllLetters(char Text[], int Length){
    int i=0;
    while(i<Length){
            i++;
        int n=0;
        for(int l=0; l<Length; l++){
            if(Text[l]==Text[i]){
                n++;
            }
        }
        cout <<"Frequency Of "<< Text[i]<< " Has Occured "<< n << " Times.";
        cout << endl;
    }
}
int main(){
    char Text[100];
    int Length;
    cout << "Length Of Text : ";
    cin >> Length;
    cout << "Enter Your Text: ";
    for(int i=0;i<Length;i++){
        cin >> Text[i];
    }
   countAllLetters(Text,Length);
    return 0;
}