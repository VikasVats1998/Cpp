#include<iostream>
using namespace std;
int main(){
    int Default=50,x;
    cout<<"Enter Your Number "<<endl;
    cin>>x;
    if(Default>x){
        cout<<"My Number is Big"<<endl;
    }
    else if(Default<x){
        cout<<"Your Number is Big"<<endl;
    }
    else{
        cout<<"We Have Equal Number"<<endl;
    }

}