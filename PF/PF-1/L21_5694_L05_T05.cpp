#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	int Number,Guess;
	srand(time(0));
	Number=rand()%100;
	while(Guess!=Number){
		cout << "TRY ANY GUESS BETWEEN 0 AND 100 : ";
		cin>>Guess;
		if(Guess>Number){
			cout<<"YOUR GUESS IS HIGHER THAN THE NUMBER"<<endl;
		}
		else if(Guess<Number){
			cout<<"YOUR GUESS IS LOWER THAN THE NUMBER"<<endl;
		}
		else{
			cout<<"YOU GUESSED THE CORRECT NUMBER!!!";
		}
	}
	return 0;
}
