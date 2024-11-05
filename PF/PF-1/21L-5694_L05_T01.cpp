#include <iostream>
using namespace std;
int main(){
      char Package;
      double Amounts,Minutes,T;
      cout << "ENTER THE PACKAGE THE CUSTOMER HAS PURCHASED : ";
      cin>>Package;
      cout<<"ENTER THE NUMBER OF MINUTES : ";
      cin>>Minutes;
         if(Package=='A'){
         if(Minutes>450){
         Minutes=(Minutes-450)*0.45;
}
         T=Minutes+39.99;
         cout<<"TOTAL AMOUNT DUE IS : $"<<T;
}
         if(Package=='B'){
         if(Minutes>900){
         Minutes=(Minutes-900)*0.40;
}
         T=Minutes+59.99;
         cout<<"TOTAL AMOUNT DUE IS : $"<<T;
}
         if(Package=='C'){
         cout<<"TOTAL AMOUNT DUE IS : $"<<69.99;
  }
    return 0;
}

