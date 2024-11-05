#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;
int TotalStudents;
int MagicNo=5050;
int ID[100];
double Marks[101][11];
double Statistics[10][11];
double Weightage;
int TotalEvaluations;
void Students(){
ofstream StudentData;
StudentData.open("Student.Dat");
StudentData<<"Magic No : "<<MagicNo<<endl<<"NUMBER OF STUDENTS : "<<TotalStudents<<endl<<ID<<" "<<endl;
StudentData.close();
}
void MarksData(){
ofstream MarksData;
MarksData.open("Marks.Dat");
      for(int i=0;i<=TotalStudents;i++){
      cout<<"Enter Total Weightage Of The Components : ";
      cin>>Weightage;
}
MarksData.close();
}
void LoadData(){
ofstream MarksData;
MarksData.open("MARKS.DAT");
      for(int i=0;i<TotalStudents;i++){
       for(int j=0;j<11;j++){
      MarksData<<Marks[i][j]<<endl;
}
MarksData<<endl;
}
MarksData.close();
}
void SaveData(){
ofstream MarksData;
MarksData.open("Marks.Dat");
MarksData<<MagicNo<<endl<<Weightage<<endl<<TotalEvaluations<<endl;
       for(int i=0;i<TotalStudents;i++){
        for(int t=0;t<TotalEvaluations;t++){
       MarksData<<Marks[i][t]<<" "<<endl;
}
}
MarksData.close();
}
void AddEvaluation(){
double Maximum;
do{
cout<<"Enter Maximum Marks For Each Evaluation : ";
cin>>Maximum;
}
while(Maximum<0);
cout<<"Enter Valid Marks";
Marks[0][TotalEvaluations]=Maximum;
      for(int i=0;i<TotalStudents;i++){
      cout<<"Enter New Marks of Student ID : "<<ID[i]<<" ";
      cin>>Marks[i+1][TotalEvaluations];
}
TotalEvaluations++;
cout<<"Successfully Evaluated"<<endl;
return;
}
void DeleteRecords(){
ofstream MarksData;
MarksData.open("Marks.Dat");
    cout<<"Enter the Evaluation To Be Deleted : ";
    cin>>TotalEvaluations;
      for(int i=0;i<TotalStudents;i++){
      Marks[i][TotalEvaluations-1]=0;
}
MarksData.close();
}
void SortData(){
int T,x;
int arr[100];
      for(int i=0;i<TotalStudents;i++){
       for(int x=0;x<(TotalStudents-i);x++){
         if(arr[i]<arr[x-1]){
         T=arr[i];
         arr[i]=arr[x-1];
         arr[x-1]=T;
}
}
}
cout<<" "<<arr[x];
return;
}
void ViewAllData(){
string line;
ifstream MarksData("Marks.Dat");
 while ( getline(MarksData,line) ){
 cout<<line;
}
 MarksData.close();
}
void SearchStudentRecord(){
ofstream MarksData;
MarksData.open("Marks.Dat");
cout<<"Enter the ID of the Student : ";
cin>>ID[100];
MarksData<<MagicNo<<endl<<Weightage<<endl<<TotalEvaluations<<endl;
       for(int i=0;i<TotalStudents;i++){
        for(int a=0;a<TotalEvaluations;a++){
MarksData<<Marks[i][a]<<" "<<endl;
}
}
MarksData.close();
}
int presentMenu(){
    int Choice=0;
    do{
        cout<<"\t Marks Manager"<<endl<<endl
            <<"1. Load Data"<<endl
            <<"2. Save Data"<<endl
            <<"3. Add Evaluation"<<endl
            <<"4. Delete Records"<<endl
            <<"5. Sort Data"<<endl
            <<"6. View All Data"<<endl
            <<"7. Search Student Record"<<endl
            <<"8. Exit"<<endl
            <<endl<<"Enter Your Choice (1-8) : ";
        if(Choice<0||Choice>=8)
            cout<<endl<<"Please enter a valid choice between 1 and 4 "<<endl;
            cin >> Choice;
    }
    while(Choice<1||Choice>=8);
    return Choice;
}
int main(){
    int Selection=0;
    do{
        Selection = presentMenu();
        if(Selection==1){
            cout<<"Loading Data"<<endl;
            LoadData();
        }
        else if(Selection==2){
            cout<<"Save"<<endl;
            SaveData();
        }
        else if(Selection==3){
            cout<<"Add New Evaluation"<<endl;
            AddEvaluation();
        }
        else if(Selection==4){
            cout<<"Delete"<<endl;
            DeleteRecords();
        }
        else if(Selection==5){
            cout<<"Sort"<<endl;
            SortData();
        }
        else if(Selection==6){
            cout<<"View All"<<endl;
            ViewAllData();
        }
         else if(Selection==7){
            cout<<"Search"<<endl;
            SearchStudentRecord();
        }
    }
    while(Selection!=0&&Selection!=8);
    cout<<"THANKS FOR CO-OPERATING WITH US"<<endl;
    return 0;
}

