#include<iostream>
using namespace std;
int main(){
     double Calories=3.6;
       for(int Minutes=5;Minutes<=30;Minutes+=5){
       Calories=Minutes*3.6;
       cout<<"YOUR CALORIES BURNED AFTER "<<Minutes<<" MINUTES ARE : "<<Calories<<endl;
      }
return 0;
}
