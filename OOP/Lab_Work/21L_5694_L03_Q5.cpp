#include<iostream>
#include<cstring>
using namespace std;
int FirstIndexOfSubString(char* myStr, char* strToFind){
int len1 = strlen(myStr);
int len2 = strlen(strToFind);
myStr = new char[len1];
strToFind = new char[len2];
int j;
for (int i = 0; myStr[i] != '\0'; i++){
for (int j = 0; strToFind[j] != '\0'; j++)
if (myStr[i] != strToFind[j])
break;
if (j == len2)
return i;
}
return -1;
}
int main(){
char myStr[] = "I am a Pakistani so I support Pakistani Cricket team in Pak-India matches";
char strToFind[] = "Fox";
int index = FirstIndexOfSubString(myStr, strToFind);

if(index == -1){
    cout << "Substring not found!" << endl;
}
else{
    cout << "Substring found at index " << index << endl;
}
    
return 0;
}