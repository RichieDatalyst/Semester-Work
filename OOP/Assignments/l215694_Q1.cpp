#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main(){
	int ccount=0,vcount=0;
	int size;
	char *str=new char[size];
	cout<<"Enter Number Of Size : ";
	cin>>size;
	cin.ignore();
    cout<<"Enter String : ";
    cin.getline(str,size);
    cout<<str<<endl;
      for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||(str[i])=='e'||(str[i])=='i'||(str[i])=='o'||(str[i])=='u'||(str[i])=='A'||(str[i])=='E'||(str[i])=='I'||(str[i])=='O'||(str[i])=='U'){
			vcount++;
    }
    else if((str[i]>='a'&&(str[i])<='z')||(str[i]>='A'&&(str[i])<='Z')){
        ccount++;
    }
}
cout<<"Number of consonants : "<<ccount<<endl;
cout<<"Number of vowels : "<<vcount<<endl;
 char *vowelarray=new char[vcount];
  int v=0;
  for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||(str[i])=='e'||(str[i])=='i'||(str[i])=='o'||(str[i])=='u'||(str[i])=='A'||(str[i])=='E'||(str[i])=='I'||(str[i])=='O'||(str[i])=='U'){
			vowelarray[v]=str[i];
			v++;
        }
  }
    for(int j=0;j<vcount;j++){
        for(int i=0;i<vcount;i++){
            if(vowelarray[i]<vowelarray[i+1]){
                char temp=vowelarray[i+1];
                vowelarray[i+1]=vowelarray[i];
                vowelarray[i]=temp;
            }
        }
    }
    int a,e,i,o,u;
    a=e=i=o=u=0;
    for(int i=0;i<vcount;i++){
            cout<<vowelarray[i]<<" "<<endl;
    }
    for(int m=0;m<vcount;m++){
            if(vowelarray[m]=='a'||vowelarray[m]=='A'){
                a++;
            }
            else if(vowelarray[m]=='e'||vowelarray[m]=='E'){
                e++;
            }
           else if(vowelarray[m]=='i'||vowelarray[m]=='I'){
                i++;
            }
           else if(vowelarray[m]=='o'||vowelarray[m]=='O'){
                o++;
            }
          else if(vowelarray[m]=='u'||vowelarray[m]=='U'){
                u++;
            }
    }
    cout<<"Total "<<"'a' : "<<a<<endl;
    cout<<"Total "<<"'e' : "<<e<<endl;
    cout<<"Total "<<"'i' : "<<i<<endl;
    cout<<"Total "<<"'o' : "<<o<<endl;
    cout<<"Total "<<"'u' : "<<u<<endl;
return 0;
}
