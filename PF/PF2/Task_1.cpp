#include<iostream>
using namespace std;
int main(){
double Length,Width,Area,cardboard,cardboard_price,glass,glass_price,crown,crown_price,color_price,Inch_size,Frame_type,Frame_price,Total_price;
char color;
cout<<"Enter Length : ";
cin>>Length;
cout<<"Enter Width : ";
cin>>Width;
Area=Length*Width;
Inch_size=2*(Length+Width);
cout<<"Enter the Frame Color : ";
cin>>color;
color_price=Inch_size*0.1;
cout<<"Which Frame Type You Want?"<<endl<<"1=Regular Frame"<<" OR "<<"0=Fancy Frame"<<endl;
cin>>Frame_type;
    if(Frame_type==1){
    Frame_price=Inch_size*0.15;
}
      else if(Frame_type==0){
      Frame_price=Inch_size*0.25;
}
else{
    cout<<"Error"<<endl;
    return 0;
}
cout<<"Do you want to put cardboard on the picture?"<<endl<<"1=Yes"<<" OR "<<"0=No"<<endl;
cin>>cardboard;
        if(cardboard==1){
        cardboard_price=Area*0.02;
}
        else if(cardboard==0){
        cardboard_price=Area*0.00;
}
else{
    cout<<"Error"<<endl;
    return 0;
}
cout<<"Do you want to put glass on top of the picture?"<<endl<<"1=Yes"<<" OR "<<"0=No"<<endl;
cin>>glass;
          if(glass==1){
          glass_price=Area*0.07;
}
          else if(glass==0){
          glass_price=Area*0.00;
}
else{
    cout<<"Error"<<endl;
    return 0;
}
cout<<"Enter number of crowns to put on the corners : ";
cin>>crown;
           if(crown>=0){
           crown_price=crown*0.35;
}
else{
    cout<<"Error"<<endl;
    return 0;
}
Total_price=color_price+Frame_price+cardboard_price+glass_price+crown_price;
cout<<"Cost of Framing the Picture is : $"<<Total_price;
return 0;
}
