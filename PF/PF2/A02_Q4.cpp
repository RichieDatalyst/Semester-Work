#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	int Number,Guess,Num=0;
	srand(time(0));       //INITIALISE RANDOM NUMBER GENERATORS
	Number=rand()%100;   //GENERATE RANDOM NUMBERS IN THE RANGE
	while(Guess!=Number){
		cout << "TRY ANY GUESS BETWEEN 0 AND 100 : ";
		cin>>Guess;
		 Num++;
		if(Guess>Number){
			cout<<"YOUR GUESS IS HIGHER THAN THE NUMBER"<<endl;
		}
		else if(Guess<Number){
			cout<<"YOUR GUESS IS LOWER THAN THE NUMBER"<<endl;
		}
		else{
			cout<<"YOU GUESSED THE CORRECT NUMBER IN "<<Num<<" TURNS";
		}
	}
	return 0;
}
