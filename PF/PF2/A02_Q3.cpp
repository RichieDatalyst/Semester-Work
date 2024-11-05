#include<iostream>
using namespace std;
int main(){
	int Si,EI,t,S,T;
	cout<<"Enter Starting Integer : ";
	cin>>Si;
	cout<<"Enter Ending Integer : ";
	cin>>EI;
	S=Si+EI;
	int j=Si;
	 T=Si+EI;
	 t=Si;
	 int c=1;
	for(int i=Si;i<S;i++){
           int m=Si;
           while(m<S){
                m++;
                if(t+j<=T){
                    cout<<"("<<j<<","<<t<<")"<<endl;
                    t++;
                }
                else{
                    return 0;
                }
           }
                t=c+1;
                j++;
	}
	return 0;
}
