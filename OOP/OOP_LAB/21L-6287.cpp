//Q1
/*a)137.5
b)Negative number of items : -55.
Number of items must be non-negative.
c)Negative unit cost : -4.5 .
Unit cost must be non-negative.
d)Negative number of items : -10.
Number of items must be non-negative.
Negative unit cost : -2.5.
Unit cost must be non-negative.*/

//Q2

#include <iostream>

using namespace std;
  
class divisionbyzero{
    double dividend;
    double divisor;
    string runtime_error;
    public:
 divisionbyzero(float dividend, float divisor){
   this->dividend=dividend;
    this->divisor=divisor;
}
divisionbyzero(){
    runtime_error="Unable to divide by Zero";
}
 
    divisionbyzero(string runtime_error){
        this->runtime_error=runtime_error;
}
  string what(){
      return this->runtime_error;
  }

  
};  
int main()
{
    float dividend, divisor, result;
    cout<<"Enter Dividend : ";
    cin>>dividend;
       cout<<"Enter Divisor : ";
    cin>>divisor;
  
    try {
        result = dividend/divisor;
    if (divisor == 0) {
        throw runtime_error( "Unable to divide by Zero\n");
    }
        cout << "The quotient is "
             << result << endl;
    }
  
    catch (runtime_error& e) {
 
        cout << "Exception occurred" << endl
             << e.what();
    }
  
} 