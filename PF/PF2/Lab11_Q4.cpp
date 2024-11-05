#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char str[150];
    int arr[150];
    cin.get(str, 100);
    int f=strlen(str);
    int i=0;
    while(i<=f){
          i++;
        cin>>arr[i];
    }
        int t=0;
    while(t<=f){
        t++;
        if(arr[t]==1){
            str[t]++;
        }
        if(arr[t]==-1){
            str[t]--;
        }
        if(arr[t]==0){
            str[t]=arr[t];
        }
  }
    cout<<str;
    return 0;
}

