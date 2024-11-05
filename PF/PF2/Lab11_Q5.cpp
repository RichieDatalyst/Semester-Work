#include<iostream>
#include <cctype>
using namespace std;
string toCamelCase(string s){
    int n = s.length();
    int str=0;
    for (int i=0;i<n;i++){
        if(s[i]==' '){
            s[i + 1]=toupper(s[i + 1]);
            continue;
        }
 
            else
            s[str++]=s[i];        
    }
    return s.substr(0,str);
}
string toSnakeCase(string s){
    int n = s.length();
    int str=0;
    for (int i=0;i<n;i++){
        if(s[i]==' '){
            s[i]='_';
            continue;
        }
 
            else
            s[i]=tolower(s[i]);        
    }
    cout<<str;
}
int main(){
	string s;
	cout<<"Enter a String : ";
	getline(cin,s);
	cin.ignore();
	cout<<toCamelCase(s);
	cout<<toSnakeCase(s);
}
