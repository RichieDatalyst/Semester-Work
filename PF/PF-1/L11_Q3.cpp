#include <iostream>
#include <cstring>
using namespace std;
int countCharacter(char txt[],int Lenght){
    int c=0;
    char ch[100]="hd";
    int a=0;
    int i=0;
    while(txt[i]!='\0'){
            i++;
        if (isalpha(txt[i])&&txt[i]!=' '){
            ch[a]=txt[i];
            a++;
        }
    }
    cout<<ch;
    return 0;
}
int main(){
    char line[100];
    int Lenght;
    cin.getline(line,100);
    Lenght=strlen(line);
    cout<<countCharacter(line,Lenght);
    return 0;
}
