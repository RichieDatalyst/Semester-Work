#include<iostream>
using namespace std;
int n;
void Asc(int arr[],char ch){
		for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
            int T=arr[i];
            arr[i]=arr[j];
            arr[j]=T;
            }
          }
        }
        cout<<"Sorted Array In Ascending Order"<<endl;
}
void Des(int arr[],char ch){
		for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
            int T=arr[i];
            arr[i]=arr[j];
            arr[j]=T;
            }
          }
         }  
        cout<<"Sorted Array In Descending Order"<<endl;
    }
    void None(int arr[],char ch){
		 for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
            int T=arr[i];
            arr[i]=arr[j];
            arr[j]=T;
            }
          }
        }
        cout<<"Sorted Array Remains Same"<<endl;  
	}
int main(){
	 int n;
	 char ch;
	   cout<<"Enter The Size Of The Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter The Elements Of The Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Elements Of The Array Are"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
	 while(1){
	cout<<"******Welcome To The Menu******"<<endl;
	cout<<"Q------Exit The Program"<<endl;
	cout<<"A------Ascending Order"<<endl;
    cout<<"D------Descending Order"<<endl;
    cout<<"N------No Change"<<endl;
     cout<<"Enter Character To Sort An Array : ";
    	 cin>>ch;
	switch(ch){
        case ('Q'):
         exit(0);
		 break;  
        case ('A'):
        		for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
            int T=arr[i];
            arr[i]=arr[j];
            arr[j]=T;
            }
          }
        }
        	  for(int i=0;i<n;i++){
            cout<<arr[i]<<" "<<endl;
    }
        	Asc(arr,ch);
   break;       
        case ('D'):
        		for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
            int T=arr[i];
            arr[i]=arr[j];
            arr[j]=T;
            }
          }
         }  
        	for(int i=0;i<n;i++){
            cout<<arr[i]<<" "<<endl;
        } 
        	Des(arr,ch);
            break;
        case ('N'):
        	for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
            int T=arr[i];
            arr[i]=arr[j];
            arr[j]=T;
            }
          }
        }
        	for(int i=0;i<n;i++){
            cout<<arr[i]<<" "<<endl;
        } 
        	None(arr,ch);
            break;
        default:
            cout<<"Invalid Options"<<endl;
}
}
return 0;
    }
  
