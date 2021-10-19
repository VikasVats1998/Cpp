#include<iostream>
using namespace std;
int main(){
    cout<<"Print Even Numbers only "<<endl;
    int i,x;
    cout<<"Enter the value of range "<<endl;
    cin>>i>>x;
    for(i;i<=x;i++){
        if(i%2==0){
            
            if(i%10==4){
                continue;
            }
            else if(i==100){
                break;
            }
            else{
                cout<<i<<"\t";
            }
        }
    }
}