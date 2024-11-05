#include<iostream>
#include<string>
using namespace std;
class InstagramAcc{
	private:
		string name;
		int followersCount;
		int following;
		protected:
			string ownerName;
			int posts;
			public:
			InstagramAcc(string name,string ownerName){
				this->name=name;
				this->ownerName=ownerName;
				followersCount=0;
				posts=0;
			}
	void GetInformation(){
		cout<<"Account Name : "<<name<<endl;
		cout<<"Owner Name : "<<ownerName<<endl;
		cout<<"Followers Count : "<<followersCount<<endl;
	}
	int operator ++(int){
	++followersCount;
	return followersCount;
	}
	int operator --(int){
	--followersCount;
	if(followersCount<0){
		cout<<"Followers can't be less than 0"<<endl;
	}
	return followersCount;
	}
	void CheckActiveness(){
			if(posts<5){
				cout<<name<<": "<<"Not Active Enough"<<endl;
			}
			else{
				cout<<name<<": "<<"Has Good Content"<<endl;
			}
	}
};
class PersonalAcc:public InstagramAcc{
	public:
		PersonalAcc(string name,string ownerName):InstagramAcc(name,ownerName){
		}
			void Post(){
				cout<<"Owner Name : "<<ownerName<<endl;
				posts++;
		}
};
class BusinessAcc:public InstagramAcc{
	public:
		BusinessAcc(string name,string ownerName):InstagramAcc(name,ownerName){
		}
			void Post(){
				cout<<"Owner Name : "<<ownerName<<endl;
				posts++;
			}
};
class CreatorAcc:public InstagramAcc{
	public:
		CreatorAcc(string name,string ownerName):InstagramAcc(name,ownerName){
		}
			void Post(){
				cout<<"Owner Name : "<<ownerName<<endl;
				posts++;
			}
};
int main(){
	PersonalAcc Personal("Richie_Rich","Ameer Abdullah");
	BusinessAcc Business("richie__","Shahid");
	CreatorAcc  Creator("Richness","Sardar");
	cout<<"-------Info For Personal Account-------"<<endl;
	Personal.GetInformation();
	cout<<endl;
	cout<<"-------Info For Business Account-------"<<endl;
    Business.GetInformation();
	cout<<endl;
	cout<<"-------Info For Creator Account-------"<<endl;
	Creator.GetInformation();
	cout<<endl;
	InstagramAcc *insta1=&Personal;
	InstagramAcc *insta2=&Business;
	InstagramAcc *insta3=&Creator;
	insta1->CheckActiveness();
	insta2->CheckActiveness();
	insta3->CheckActiveness();
	return 0;
}
