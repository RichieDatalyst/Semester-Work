#include <iostream>
using namespace std;
int main(){
  double S1,S2,S3,S4,S5,Percentage,Result;
  cout<<"Enter Subject1 Marks : ";
  cin>>S1;
  cout<<"Enter Subject2 Marks : ";
  cin>>S2;
  cout<<"Enter Subject3 Marks : ";
  cin>>S3;
  cout<<"Enter Subject4 Marks : ";
  cin>>S4;
  cout<<"Enter Subject5 Marks : ";
  cin>>S5;
  Result=S1+S2+S3+S4+S5;
  Percentage=(Result*100)/500;
  cout<<"The Perecentage Is : "<<Percentage;
    return 0;
}
