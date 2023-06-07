#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"Enter a button for robot  ";
    cin>>button;

    switch(button){
        case 'a':
        cout<<"Hello"<<endl;
        break;
        case 'b':
        cout<<"namaste"<<endl;
        break;
        case 'c':
        cout<<"Ram Ram"<<endl;
        break;
        case 'd':
        cout<<"Radhe Radhe"<<endl;
        break;
        default:
        cout<<"Enter valid input"<<endl;
        break;
    }
}