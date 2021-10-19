#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter your choice\n1. Java\n2. C++\n3. Python\n4. JavaScript"<<endl;
    cin>>x;
    switch (x)
    {
    case 1:
        cout<<"You chose Java as your 1st programing language";
        break;
    case 2:
        cout<<"You chose C++ as your 1st programing language";
        break;
    case 3:
        cout<<"You chose Python as your 1st programing language";
        break;
    case 4:
        cout<<"You chose JavaScript as your 1st programing language";
        break;
    
    default:
    cout<<"Please Enter a valid choice"<<endl;
        break;
    }
}