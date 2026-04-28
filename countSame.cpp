#include<bits/stdc++.h>
using namespace std;
int main(){
    int ArrSize;
    cout<<"Enter your array size: ";
    cin>>ArrSize;
    int arr[ArrSize];
    cout<<"enter you Array element: ";
    for(int i=0;i<ArrSize;i++){
        cin>>arr[i];
    }
    //precalculate
    int hash[12]={0};
    for(int i=0;i<ArrSize;i++){
        hash[arr[i]]+=1;
    }
    cout<<hash[1];
}