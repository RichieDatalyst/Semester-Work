#include <iostream>
#include <cstring>
using namespace std;
int countCharacter(char Text[],int Lenght,char Character){
    int t=0;
    for (int i=0;i<Lenght;i++){
        if (Character==Text[i]){
            t++;
        }
    }
    return t;
}
int main(){
    char tx[100];
    int Lenght;
    char ch;
    cin>>tx;
    cout << "Input The Characters : ";
    cin >>ch;
    Lenght=strlen(tx);
    cout<<countCharacter(tx,Lenght,ch);
    return 0;
}

