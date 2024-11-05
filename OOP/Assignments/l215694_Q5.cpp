#include<iostream>
#include<cstring>
using namespace std;
class STRING{
   private:
     char *string;
     int len;
   public:
    //default constructor
    STRING();
    //parameterized constructor
    STRING(const char *str);
    //copy constructor
    STRING(const STRING &str);
    //destructor
    ~STRING();
    //setters
    void setSTR(char str){
    *string=str;
    }
    void setLEN(int LEN){
    len=LEN;
    }
    char getSTR(){
    return *string;
    }
    int getLEN(){
    return len;
    }
};
int main(){
    int len;
	char *string=new char[len];
	cout<<"Enter Number Of Size : ";
	cin>>len;
	cin.ignore();
    cout<<"Enter String : ";
    cin.getline(string,len);
    cout<<"Your String : ";
    cout<<string<<endl;
    cout<<"Your String Length : "<<strlen(string);
    cout<<endl;
    int wcount=0;
	for(int i=0;string[i]!='\0';i++){
		if(string[i]==' '){
			wcount++;
		}
	}
	cout<<"Number Of Words in a String : "<<wcount+1<<endl;
    return 0;
}
