#include<iostream>
using namespace std;
void cout_Array( const int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i];
    }
}

void Digit_Frequency( int Numbers[],int N,int F[])
{
    int i=0,x=0,y=0;
    for(i=0;i<N;i++)
    {
        if(Numbers[i]>=-10||Numbers[i]<=10){
            for(x=0;x<N;x++)
            {
                if(Numbers[i]==Numbers[x])
                {
                    y++;
                }
            }
            F[i]=y;
            y=0;
        }
        else
            cout<<"INVALID RESPONSE"<<endl;
    }
}

int main()
{
    int i,y=0,t;
    int m[20],n[10];
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>m[i];
    }
    Digit_Frequency(m,t,n);
    
    cout_Array(m,t);
    cout<<endl;
    cout_Array(n,t);
    return 0;
}
