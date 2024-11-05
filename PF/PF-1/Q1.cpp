#include<iostream>
using namespace std;
int main(){
int Minutes,Time;
char Day;
double Length;
      while(Time<0||Time>=2400){
      cout<<"Enter The Time In 24-Hour Notation : ";
      cin>>Time;
}
      cout<<"Enter The Length Of The Call In Minutes : ";
      cin>>Minutes;
      cout<<"Enter The Day Of The Week : ";
      cin>>Day;
        if(Day=='Mon'||Day=='Tues'||Day=='Wed'||Day=='Thurs'||Day=='Fri'){
         if (Time>=800&&Time<=1800){
        Length=Minutes*0.40;
        cout<<"Your Total Cost : "<<"$"<<Length;
}
        if (Time<=800&&Time>=1800){
        Length=Minutes*0.25;
        cout<<"Your Total Cost : "<<"$"<<Length;
}
}
          else if(Day=='Sat'||Day=='Sun'){
          Length= Minutes*0.15;
          cout<<"Your Total Cost : " <<"$"<<Length;
}
return 0;
}
