#include <iostream>
#include<fstream>
using namespace std;
ofstream ofs;
ifstream ifs;
char **ReadStudentsListFromFile(){
    int size = 45;
    char **StudentsList = new char*[size];
    ifs.open("StudentsList.txt");
    if(ifs){
        cout<<"Successfully Opened"<<endl;
    }
    else{
        cout<<"Unsuccessful To Open File"<<endl;
    }
     return StudentsList;
}
void PrintAllNames(char** StudentsList, int &size){
    ofs.open("StudentsList.txt");
    string name;
    while(getline(ifs,name)){
        ofs<<name<<endl;
        ofs<<StudentsList;
    }
    ifs.close();
}
int main(){
    char** StudentsList = ReadStudentsListFromFile();
    int size = 45;
 PrintAllNames(StudentsList,size);
 for(int i = 0; i < size; i++){
delete[] StudentsList[i];
}
delete[] StudentsList;
return 0;
}
//EXERCISE 3 AND EXERCISE 4
