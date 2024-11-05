#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int reverseWords(char array[]){
    string str;
    int r=strlen(array)-1;
  while(r>=0){
         str.push_back(array[r]);
        r--;
  }
  cout<<"REVERSED WORDS ARE ";
  cout<<str<<endl;
  return 0;
}
int main(){
    char str[150];
    cin>>str;
    reverseWords(str);
    return 0;
}