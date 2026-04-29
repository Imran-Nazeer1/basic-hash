#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter your String: ";
    cin>>s;
    

    // travesre string and save it on hash map

    int hash[255]={0};
    for(int i=0;i<s.length();i++){
        hash[(int)s[i]] +=1;
    }

    char q;
    cout<<"enter your character: ";
    cin>>q;

    cout<<hash[(int)q];

}