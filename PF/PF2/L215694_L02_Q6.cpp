#include <iostream>
using namespace std;
int main(){
      char A,B;
      cout<<"TURN OF PLAYER 1 : ";
      cin>>A;
      cout<<"TURN OF PLAYER 2 : ";
      cin>>B;
        if(A=='P'&&B=='R'){
        cout<<"PLAYER 1 WINS BECAUSE PAPER DOMINATES ROCK "<<endl;
        }
        else if(A=='P'&&B=='S'){
        cout<<"PLAYER 2 WINS BECAUSE SCISSORS DOMINATES PAPER "<<endl;
        }
        else if(A=='R'&&B=='P'){
        cout<<"PLAYER 2 WINS BECAUSE PAPER DOMINATES ROCK "<<endl;
        }
        else if(A=='S'&&B=='P'){
        cout<<"PLAYER 1 WINS BECAUSE SCISSORS DOMINATES PAPER "<<endl;
        }
        else if(A=='R'&&B=='S'){
        cout<<"PLAYER 1 WINS BECAUSE ROCK DOMINATES SCISSORS "<<endl;
        }
        else if(A=='S'&&B=='R'){
        cout<<"PLAYER 2 WINS BECAUSE ROCK DOMINATES SCISSORS "<<endl;
        }
        else{
        cout<<"DRAW : TRY AGAIN"<<endl;
        }
    return 0;
}
