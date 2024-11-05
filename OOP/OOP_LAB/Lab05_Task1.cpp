#include<iostream>
#include<cstring>
using namespace std;
class Bank{
   private:
    char name[50];
    int acno;
    char actype[50];
    int bal;
   public:
   	Bank(const char nam[]='\0',int acn=0,const char account[]='\0',int balance=0){
  		strcpy(name,nam);
   		acno=acn;
   		strcpy(actype,account);
   		bal=balance;
	   }
	   void Deposit(){
	   	long int deposit_amt;
	   	cout<<"Enter deposited Balance : ";
	   	cin>>deposit_amt;
	   	cout<<"Balance After Deposit : ";
	   	bal=bal+deposit_amt;
	   	cout<<bal<<endl;
	   }
	   void Withdraw(){
	   	long int withdraw_amt;
	   	long int Remaining_bal;
	   	long int deposit_amt;
	   	cout<<"Balance Before Withdrawal : "<<bal<<endl;
	   	cout<<"Enter Amount Of Withdrawal : ";
		cin>>withdraw_amt;
		if(withdraw_amt%10!=0){
			cout<<"Re-enter The Amount : ";
			cin>>withdraw_amt;
		}
		if(withdraw_amt>bal){
			cout<<"Sorry!!Withdrawal amount can't be greater than original amount"<<endl;
		}	   	
		else{
			bal=bal-withdraw_amt;
			Remaining_bal=bal;
			cout<<"Balance After Withdrawal : "<<Remaining_bal<<endl;
		}
	   }
	   void Input(){
	   cout<<"***Enter Details***"<<endl;
       cout<<"-------------"<<endl;
       cout<<"Enter The Name : ";
       cin>>name;
	   cout<<"Enter Account Number : ";
       cin>>acno;
       cout<<"Enter Account Type : ";
       cin>>actype;
       cout<<"Enter Account Balance : ";
       cin>>bal;
	   }
	   void Display(){
	   	cout<<"Account Name : "<<name<<endl;
	   	cout<<"Account Number : "<<acno<<endl;
	   	cout<<"Account Type : "<<actype<<endl;
	   	cout<<"Account Balance : "<<bal<<endl;
	   }
};
int main(){
	char name[50];
    int acno;
    char actype[50];
    int bal;
       Bank account(name,acno,actype,bal);
       Bank updateAC(name,acno,actype,bal);
       account.Input();
       updateAC.Input();
	   char ch;
       while(1){
       	cout<<"*****MENU*****"<<endl;
       	cout<<"D---------Deposit"<<endl<<"W---------Withdraw"<<endl<<"F---------Display All Details"<<endl<<"E---------Exit"<<endl;
       	cout<<"*****Enter Following Information*****"<<endl;
       	cout<<"D-----Deposit"<<endl;
       	cout<<"W-----Withdraw"<<endl;
       	cout<<"F-----Display All Details"<<endl;
       	cout<<"E-----Exit"<<endl;
       	cin>>ch;
       	switch(ch){
       		case('D'):
       			cout<<"Enter Amount To Deposit"<<endl;
       			updateAC.Deposit();
				break;
			   case('W'):
			   	cout<<"Enter Amount To Withdraw"<<endl;
			   	updateAC.Withdraw();
				break;
				case('F'):
					cout<<"Initial Details"<<endl;
					account.Display();
					cout<<"Updated Details"<<endl;
					updateAC.Display();
					break;
				case('E'):
					goto end;
					break;
					default:
						cout<<"Invalid Options"<<endl;
			}
		}
		end:
			return 0;
}
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
