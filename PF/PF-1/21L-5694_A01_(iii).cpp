#include <iostream>
using namespace std;

int main(){
    
        int Total,five_thou,one_thou,five_hund,f,o,fo;
 
            cout<<"INPUT 5000 RUPEE NOTES" <<endl;
            cin>>five_thou;
            cout<<"INPUT 1000 RUPEE NOTES" <<endl;
            cin>>one_thou;
            cout<<"INPUT 500 RUPEE NOTES" <<endl;
            cin>>five_hund;
                       f=five_thou*5000;
                        o=one_thou*1000;
                        fo=five_hund*500;
                        Total=f+o+fo;
            cout<<"TOTAL AMOUNT IS"<<  ":"<<Total<<endl;
            cout<<"THE END"<<endl;
    return 0;
}