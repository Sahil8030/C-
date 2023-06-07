#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter 2 numbers";
    cin>>num1>>num2;

    char op;
    cout<<"Enter the operator";
    cin>>op;

    switch(op){
        case '+':
        cout<<num1+num2;
        break;
        case '-':
        cout<<num1-num2;
        break;
        case '*':
        cout<<num1*num2;
        break;
        case '/':
        cout<<num1/num2;
        break;

        default:
        cout<<"Enter correct operator";
    }


    
}