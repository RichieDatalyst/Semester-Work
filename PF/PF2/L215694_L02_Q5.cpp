#include <iostream>
using namespace std;
int main(){
char Alphabet;
cout<<"Enter Alphabet : ";
cin>>Alphabet;
if(Alphabet=='a'||Alphabet=='A'||Alphabet=='e'||Alphabet=='E'||Alphabet=='i'||Alphabet=='I'||Alphabet=='o'||Alphabet=='O'||Alphabet=='u'||Alphabet=='U'){
    cout<<"It Is Vowel";
}
else{
    cout<<"It Is consonant";
}
    return 0;
}
