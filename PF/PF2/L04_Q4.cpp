#include <iostream>
using namespace std;
int main(){
    int Month,Day;
    char Horoscope;
      do{
        cout<<"Please Enter the Month of your Birthday : ";
        cin>>Month;
        cout<<"Please Enter the Day of your Birthday : ";
        cin>>Day;
        if((Month==1&&Day>=20)||(Month==2&&Day<=18)){
              cout<<"You Are an Aquarius!"<<endl;
           }
        else if((Month==2&&Day>=19)||(Month==3&&Day<=20)){
              cout<<"You Are a Pisces!"<<endl;
           }
        else if((Month==3&&Day>=21)||(Month==4&&Day<=19)){
              cout<<"You Are an Aries!"<<endl;
           }
        else if((Month==4&&Day>=20)||(Month==4&&Day<=20)){
              cout<<"You Are a Taurus!"<<endl;
           }
        else if((Month==5&&Day>=21)||(Month==6&&Day<=21)){
              cout<<"You Are a Gemini!"<<endl;
           }
        else if((Month==6&&Day>=22)||(Month==7&&Day<=22)){
              cout<<"You Are a Cancer!"<<endl;
           }
        else if((Month==7&&Day>=23)||(Month==8&&Day<=22)){
              cout<<"You Are a Leo!"<<endl;
           }
        else if((Month==8&&Day>=23)||(Month==9&&Day<=22)){
              cout<<"You Are a Virgo!"<<endl;
           }
        else if((Month==9&&Day>=23)||(Month==10&&Day<=22)){
              cout<<"You Are a Libra!"<<endl;
           }
        else if((Month==10&&Day>=23)||(Month==11&&Day<=21)){
              cout<<"You Are a Scorpio!"<<endl;
           }
        else if((Month==11&&Day>=22)||(Month==12&&Day<=21)){
              cout<<"You Are a Saggitarius!"<<endl;
           }
        else if((Month==12&&Day>=22)||(Month==1&&Day<=19)){
              cout<<"You Are a Capricorn!"<<endl;
           }
        cout<<"Would You like To Continue?(Please Type y or Y)"<<endl;
        cin>>Horoscope;
      }
      while(Horoscope=='y'||Horoscope=='Y');
     cout<<"Done";
    return 0;
}
