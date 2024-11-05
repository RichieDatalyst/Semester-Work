#include<iostream>
using namespace std;
char ch;
int five_thou=0,thou=0,five_hund=0,hund=0,fifty=0,twenty=0,ten=0; 
int Withdrawal_Amount;
double deposit_amount=0;
int initial_balance=0;
int Remaining_Balance;
int ID[10]={1,2,3,4,5,6,7,8,9,10};
int Id[10]={1,2,3,4,5,6,7,8,9,10};
int User_Name[10]={1,2,3,4,5,6,7,8,9,10};
          void F_Login(){
          for(int i=0;i<=10;i++){
		  cout<<"Enter User ID : ";
	      cin>>ID[i];
	       cout<<"********Account Does Not Exist!!!********"<<endl<<endl<<"Please First Create An Account"<<endl<<endl;
	      break;
	  } 
  }
       void Create_Account(){
       		 for(int i=0;i<=10;i++){
       	  cout<<"Enter User Name : ";
		  cin>>User_Name[i];
		  cout<<"Thank You! Your Account Has Been Created!"<<endl;
		  break;
   }
	   }
	   void Access_Login(){
	   	    for(int i=0;i<=10;i++){
		  cout<<"Enter User ID For Creation Of Account : ";
	      cin>>Id[i];
	      if(Id[i]==User_Name[i]){
	    cout<<"Access Granted!"<<endl;
	    break;
	   }
	   else{
	   	cout<<"********Account Does Not Exist!!!********"<<endl;
	   	break;
	   }
      }
	   }
       void Deposit(){
        cout<<"Enter Deposited Balance : ";
        cin>>deposit_amount;
        cout<<"Amount Credited Successfully"<<endl;
     }
          void Request_Balance(){
          initial_balance=deposit_amount;
          cout<<"Balance Before Withdrawal : "<<initial_balance<<endl;
          cout<<"Balance After Withdrawal : "<<Remaining_Balance<<endl;
    }
          void Withdraw(){
          	cout<<"Enter Amount Of Withdrawal : ";
          	cin>>Withdrawal_Amount;
          	if(Withdrawal_Amount%10!=0){
          		cout<<"Re-enter The Amount : ";
          		cin>>Withdrawal_Amount;
          	}
          	initial_balance=deposit_amount;
          	if(Withdrawal_Amount>initial_balance){
          		cout<<"Sorry!!! Withdrawal amount can't be greater than original amount"<<endl;
			  }
			  else{
			  	initial_balance=initial_balance-Withdrawal_Amount;
			  	 Remaining_Balance=initial_balance;
			  }
          		int Amount=initial_balance;
          		 while(Amount>=5000){ 
               five_thou=Amount/5000; 
               Amount=Amount%5000;
               cout<<"Total Number Of 5000 Rupees Notes : "<<five_thou<<endl;
               break ; 
          }
           while(Amount>=1000){ 
               thou=Amount/1000; 
               Amount=Amount%1000;
               cout<<"Total Number Of 1000 Rupees Notes : "<<thou<<endl;
               break ; 
          }
           while(Amount>=500){ 
               five_hund=Amount/500; 
               Amount=Amount%500;
               cout<<"Total Number Of 500 Rupees Notes : "<<five_hund<<endl;
               break ; 
          }
           while(Amount>=100){ 
               hund=Amount/100; 
               Amount=Amount%100;
               cout<<"Total Number Of 100 Rupees Notes : "<<hund<<endl;
               break ; 
          }
           while(Amount>=50){ 
               fifty=Amount/50; 
               Amount=Amount%50;
               cout<<"Total Number Of 50 Rupees Notes : "<<fifty<<endl;
               break ; 
          }
           while(Amount>=20){ 
               twenty=Amount/20; 
               Amount=Amount%20;
               cout<<"Total Number Of 20 Rupees Notes : "<<twenty<<endl;
               break ; 
          }
           while(Amount>=10){ 
               ten=Amount/10; 
               Amount=Amount%10;
               cout<<"Total Number Of 10 Rupees Notes : "<<ten<<endl;
               break ; 
          }
			  }
int main(){
	int choice;
	while(choice<5){
	cout<<"HI! Welcome To Mr.Richie's ATM Machine!"<<endl<<endl<<"Options For Generating The Account Menu"
	<<endl<<"1------First Login"<<endl<<"2------Create New Account"<<endl<<"3------Access Login"<<endl<<"4------Quit The Program"<<endl;
	cout<<"Please Select Options For Creation Of Account : ";
	cin>>choice;
	switch(choice){
        case (1):
            F_Login();
            break;   
        case (2):
        	Create_Account();
        	break; 
          case (3):
       Access_Login(); 
	   break;
	   case (4):
        cout<<"Thanks For Stopping By User! BYE"<<endl;
        break;
        default:
            cout<<"Invalid Options"<<endl;
        }
    }
        char ch;
        while(1){
	cout<<"Operations Menu"<<endl;
	cout<<"W------Withdraw Money"<<endl;
	cout<<"D------Deposit Money"<<endl;
    cout<<"R------Request Balance"<<endl;
    cout<<"N------Go Back To Main Menu"<<endl;
	cout<<"Please Select Options For Operations Menu : ";
	cin>>ch;
		switch(ch){	     
        case ('W'):
            Withdraw();
            break;
        case ('D'):
            Deposit();
            break;
        case ('R'):
            Request_Balance();
            break;
        case ('N'):
            break;
        default:
            cout<<"Invalid Options"<<endl;
}
}
}


