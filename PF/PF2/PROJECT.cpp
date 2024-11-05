#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
using namespace std;
bool getpersons(int &num1,int &num2,int N);
int main(){
	int num_p,fr_relations;
    ifstream newfile("friends.txt");//friends file 
    newfile >>num_p;// taking Number of persons
    newfile>>fr_relations;//taking Num relation
    cout<<num_p<<endl;
	cout<<fr_relations<<endl;
	int arr1[100],arr2[100];
	char temp;
	for(int i=0;i<fr_relations;i++)//taking each relation between friends into two arrayes
	{
		newfile>>arr1[i];
		newfile>>temp;
		newfile>>arr2[i];
	}
   // for(int i=0;i<fr_relations;i++)
   // {
   // 	cout<<arr1[i]<<" "<<arr2[i]<<endl;
	//}
	int relation[100][100]={0};
	for(int i=0;i<fr_relations;i++)//making friendships in 2D array
	{
		relation[arr1[i]][arr2[i]]=1;		
		relation[arr2[i]][arr1[i]]=1;
	}
	string names[num_p];
	ifstream newName("names.txt");//getting names of the friends
	for(int i=0;i<num_p;i++)
	{
		getline(newName,names[i]);
	}
	string names2[num_p];
	newName.close();
	ifstream openfile("names.txt");//getting names of the friends in 2 string
	for(int i=0;i<num_p;i++)
	{
		getline(openfile,names2[i]);
	}
	//printing
	for(int f=0;f<10;f++)//spacing
	{
		cout<<" ";
	}
	for(int i=0;i<num_p;i++)//upper name heading
	{
		cout<<" "<<i;
	}
	cout<<endl;
	for(int i=0;i<num_p;i++)
	{
		for(int f=0;f<10;f++)//spacing
		{
		cout<<" ";
		}
		for(int k=0;k<2*num_p;k++)
		{
			cout<<"_";
		}
		cout<<endl;
		cout<<names[i];
		for(int f=0;f+names[i].size()<10;f++)//spacing berfore names and tables
		{
			cout<<" ";			
		}
		for(int j=0;j<num_p;j++)
		{
			cout<<"|"<<relation[i][j];
		}
		cout<<"|"<<endl;
		for(int f=0;f<10;f++)//spacing
		{
		cout<<" ";
		}
		for(int z=0;z<2*num_p;z++)
		{
			cout<<"_";
		}
		cout<<endl;
	}
	
		openfile.close();
	for(int i=0;i<num_p;i++)//making friendships in 2D array
	{
		for(int j=0;j<num_p;j++)
		{
			if(relation[i][j]==1)
			{
				names2[i].append(" ");
				names2[i].append(names[j]);
				names2[i].append(" ");
			}
			
		}
	}	
		for(int i=0;i<num_p;i++)
		{
			cout<<names2[i]<<endl;
		}
		
		ofstream changefile("names.txt");
		for(int i=0;i<num_p;i++)
		{
			changefile<<names2[i]<<endl;
		}
		changefile.close();
		char get=' ';
		while(get!=27)
		{
		
		int person1,person2;
		bool check=getpersons(person1,person2,num_p);
		while(!check)
		{
			cout<<"Invalid input"<<endl;
			check=getpersons(person1,person2,num_p);
		}
		
		ofstream Mutual_f("MutualFriends.txt");
			
    	for(int i=0;i<num_p;i++)
    	{
    		if( relation[person1][i]==1 && relation[person2][i]==1 )
    		{
				Mutual_f<<names[i]<<endl;
			}
		}
		Mutual_f.close();
		cout<<"Friends sujections for "<<person1<<" : ";
		int sug_fr[100]={0};
		int j=0;
		for(int i=0;i<num_p;i++)
    	{
    		if( relation[person1][i]==0 && relation[person2][i]==1 )
    		{
				sug_fr[j] = i;
				j++;
			}
		}
		int hop=j;
		for(int i=0;i<hop;i++)
		{
			for(int k=0;k<num_p;k++)
			{
				if( relation[sug_fr[i]][k]==1 && relation[person1][k]==0 )
				{
					bool flag = true;
					for(int m=0;m<j;m++)
					{
						if( sug_fr[m]==k )
						{
							flag=false;
						}
					}
					if(flag)
					{
					sug_fr[j] = k;
					j++;
					}
				}	
			
			}		
		}
	for(int i=0;i<j;i++)
	{
		cout<<sug_fr[i]<<" ";
	}
	char var;
	cout<<endl;
	cout<<"IF the "<<person1<<" wants to make any of them friend(press y for yes) : ";
	cin>>var;
	if( var == 'y' || var == 'Y' )
	{
		int New_fr;
		cout<<"Enter the index for the friend : ";
		cin>>New_fr;
		while(New_fr<0 || New_fr>num_p)
		{
			cout<<"Invalid input enter again : ";
			cin>>New_fr;	
		}
		relation[person1][New_fr] = 1;		
		relation[New_fr][person1] = 1;
		names2[person1].append(names[New_fr]);
		names2[New_fr].append(names[person1]);
		//printing
		for(int f=0;f<10;f++)//spacig//printing
		{

			cout<<" ";
		}
		for(int i=0;i<num_p;i++)//upper name heading
		{
			cout<<" "<<i;
		}
		cout<<endl;
		for(int i=0;i<num_p;i++)
		{
			for(int f=0;f<10;f++)//spacing
			{
				cout<<" ";
			}
			for(int k=0;k<2*num_p;k++)
			{
				cout<<"_";
			}
			cout<<endl;
			cout<<names[i];
			for(int f=0;f+names[i].size()<10;f++)//spacing berfore names and tables
			{
				cout<<" ";			
			}
			for(int j=0;j<num_p;j++)
			{
				cout<<"|"<<relation[i][j];
			}
			cout<<"|"<<endl;
			for(int f=0;f<10;f++)//spacing
			{
				cout<<" ";
			}
			for(int z=0;z<2*num_p;z++)
			{
				cout<<"_";
			}
			cout<<endl;
		
		}
		//printing updated friend list names
		for(int i=0;i<num_p;i++)
		{
			cout<<names2[i]<<endl;
		}
		ofstream changefile1("names.txt");
		for(int i=0;i<num_p;i++)
		{
			changefile1<<names2[i]<<endl;
		}
		changefile1.close();
}
	else
	{
		cout<<"Exited from friend suggestion panel";
	}
	
	//now for 2 person
			cout<<"Friends sujections for "<<person2<<" : ";
		 sug_fr[100]={0};
		 j=0;
		for(int i=0;i<num_p;i++)
    	{
    		if( relation[person2][i]==0 && relation[person1][i]==1 )
    		{
				sug_fr[j] = i;
				j++;
			}
		}
		 hop=j;
		for(int i=0;i<hop;i++)
		{
			for(int k=0;k<num_p;k++)
			{
				if( relation[sug_fr[i]][k]==1 && relation[person2][k]==0 )
				{
					bool flag = true;
					for(int m=0;m<j;m++)
					{
						if( sug_fr[m]==k )
						{
							flag=false;
						}
					}
					if(flag)
					{
					sug_fr[j] = k;
					j++;
					}
				}	
			
			}		
		}
	for(int i=0;i<j;i++)
	{
		cout<<sug_fr[i]<<" ";
	}
	 
	cout<<endl;
	cout<<"IF the "<<person2<<" wants to make any of them friend(press y for yes) : ";
	cin>>var;
	if( var == 'y' || var == 'Y' )
	{
		int New_fr;
		cout<<"Enter the Index for the friend : ";
		cin>>New_fr;
		while(New_fr<0 || New_fr>num_p)
		{
			cout<<"Invalid Input Enter again : ";
			cin>>New_fr;	
		}
		relation[person2][New_fr] = 1;		
		relation[New_fr][person2] = 1;
		names2[person2].append(names[New_fr]);
		names2[New_fr].append(names[person2]);
		//printing
		for(int f=0;f<10;f++)//spacig//printing
		{

			cout<<" ";
		}
		for(int i=0;i<num_p;i++)//upper name heading
		{
			cout<<" "<<i;
		}
		cout<<endl;
		for(int i=0;i<num_p;i++)
		{
			for(int f=0;f<10;f++)//spacing
			{
				cout<<" ";
			}
			for(int k=0;k<2*num_p;k++)
			{
				cout<<"_";
			}
			cout<<endl;
			cout<<names[i];
			for(int f=0;f+names[i].size()<10;f++)//spacing berfore names and tables
			{
				cout<<" ";			
			}
			for(int j=0;j<num_p;j++)
			{
				cout<<"|"<<relation[i][j];
			}
			cout<<"|"<<endl;
			for(int f=0;f<10;f++)//spacing
			{
				cout<<" ";
			}
			for(int z=0;z<2*num_p;z++)
			{
				cout<<"_";
			}
			cout<<endl;
		
		}
		//printing updated friend list names
		for(int i=0;i<num_p;i++)
		{
			cout<<names2[i]<<endl;
		}
			ofstream changefile2("names.txt");
		for(int i=0;i<num_p;i++)
		{
			changefile2<<names2[i]<<endl;
		}
		changefile2.close();
}
	else
	{
		cout<<"Exited from friend suggestion panel";
	}	
	cout<<"If you want to leave the programme press ESC";
	get=getch();
	}
	return 0;
}
bool getpersons(int &num1,int &num2,int N)
{
	bool flag=true;
	cout<<"Enter person 1 : ";
	cin>>num1;
	cout<<"Enter person 2 : ";
	cin>>num2;		
	if( num1<0 || num1>N )
	{
		flag=false;
	}
	if( num2<0 || num2>N )
	{
		flag=false;
	}
	return flag ;
}
