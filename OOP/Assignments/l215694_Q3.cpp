#include<iostream>
using namespace std;
int main(){
    int c;
    int size;
	char *str=new char[size];
	cout<<"Enter Number Of Size : ";
	cin>>size;
	cin.ignore();
    cout<<"Enter Array U : ";
    cin.getline(str,size);
    cout<<str<<endl;
    int n;
	char *ptr=new char[n];
	cout<<"Enter Number Of Size : ";
	cin>>n;
	cin.ignore();
    cout<<"Enter Array A : ";
    cin.getline(ptr,n);
    cout<<ptr<<endl;
    int s;
	char *btr=new char[s];
	cout<<"Enter Number Of Size : ";
	cin>>s;
	cin.ignore();
    cout<<"Enter Array B : ";
    cin.getline(btr,s);
    cout<<btr<<endl;
     int q=0,w=0;
    cout<<"Intersection Is (AnB) : ";
    for(q=0;ptr[q]!='\0';q++){
        int flag=0;
        for(w=0;btr[w]!='\0';w++){
            if(ptr[q]==btr[w]){
                flag++;
            }
        }
        if(flag>0){
            cout<<ptr[q]<<" ";
        }
    }
 cout<<endl;
 int y=0,z=0,flag;
    cout<<"Union Is (AuB) : ";
     for(y=0;ptr[y]!='\0';y++){
    cout<<ptr[y]<<" ";
  }
  for(z=0;btr[z]!='\0';z++){
    flag=0;
    for(y=0;ptr[y]!='\0';y++){
      if(ptr[y]==btr[z]){
        flag=1;
        break;
      }
    }
    if(flag!=1){
      cout<<btr[z]<<" ";
    }
  }
  cout<<endl;
  cout<<"U-(AuB) : ";
  for(int k=0;str[k]!='\0';k++){
    for(int l=0;ptr[l]!='\0';l++){
        if(str[k]==ptr[l]||str[k]==ptr[l]-32){
            str[k]=' ';
        }
    }
    for(int v=0;btr[v]!='\0';v++){
        if(str[k]==btr[v]||str[k]==btr[v]-32){
                str[k]=' ';
      }
    }
  }
   for(int i=0;str[i]!='\0';i++){
    cout<<str[i]<<" ";
   }
   cout<<endl;
    cout<<"A' : ";
  for(int u=0;str[u]!='\0';u++){
    for(int e=0;ptr[e]!='\0';e++){
        if(str[u]==ptr[e]||str[u]==ptr[e]-32){
            str[u]=' ';
        }
    }
  }
   for(int d=0;str[d]!='\0';d++){
    cout<<str[d]<<" ";
   }
   cout<<endl;
   cout<<"B' : ";
  for(int r=0;str[r]!='\0';r++){
    for(int t=0;btr[t]!='\0';t++){
        if(str[r]==btr[t]||str[r]==btr[t]-32){
            str[r]=' ';
        }
    }
  }
   for(int h=0;str[h]!='\0';h++){
    cout<<str[h]<<" ";
   }
   cout<<endl;
return 0;
}
