#include<iostream>
using namespace std;
int main(){
	int R,Rows;
	cout<<"Enter Total Number of Rows : ";
	cin>>Rows;
		R=Rows;
		int n=1;
    while(R%2==0||R<5){
    cout<<"Invalid Input"<<endl<<"Please Enter Valid Input : ";
    cin>>Rows;
    	R=Rows;
	}
	Rows = Rows - 1;
  int count = 0;
  int x = 7;
      for(int i=0;i<=Rows-1;i++){
        for(int j=1;j<=Rows-i;j++){
        cout<<" ";
        }
          for(int k=1;k<=2*i-1;k++){
         if(n<0)
	     n=1;
	  cout<<n;
	  n+=2;
	  if(n==9)
	    count++;
	  if(n>9&&count==1){
	      n=x;
	      for(k=1;k<=2*i-1&&n>0;k++){
		  cout<<n;
		  n-=2;
		}
	      count--;
	    }
	  if(n>9&&count==0)
	    n=1;
	}
      cout<<endl;
    }
    for(int i=Rows-2;i>0;i--){
      for(int j=1;j<=Rows-i;j++){
      cout<<" ";
    }
        for(int k=1;k<=2*i-1;k++){
       if(n<0){
        n=n*-1;
        n+=2;
        }
    	  cout<<n;
    	  n+=2;
    	  if(n==9)
    	    count++;
    	  if(n>9&&count==1)
    	    {
    	      n=x;
    	      for(k=1;k<=2*i-1&&n>0;k++)
    		{
    		  cout<<n;
    		  n-=2;
    		}
    	      count--;
    	    }
    	  if(n>9&&count==0)
    	    n=1;
    	}
          cout<<endl;
        }
	return 0;
}












