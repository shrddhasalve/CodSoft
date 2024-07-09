#include<iostream>
using namespace std;

int main(){
    cout<<"\t\t\t-----------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t                         Simple Calculator                             "<<endl;
    cout<<"\t\t\t-----------------------------------------------------------------------"<<endl;

    char ch;cout<<"press c for calculate or any other keys to quit : ";
    cin>>ch;
    while (ch=='c')
    {
        int first_number,second_number;
        cout<<"enter first number : ";cin>>first_number;
        cout<<endl;
        cout<<"enter second number : ";cin>>second_number;
        cout<<endl;

        string operation;cout<<"enter operator : ";
        cin>>operation;

        if (operation=="+")
        {
            cout<<first_number+second_number<<endl;
        }
        else if (operation=="-")
        {
            cout<<first_number-second_number<<endl;
        }
        else if (operation=="*")
        {
            cout<<first_number*second_number<<endl;
        }
        else if (operation=="/")
        {
            cout<<float(first_number)/float(second_number)<<endl;
        }
        
        cout<<"press c for calculate again or any other keys to quit : ";
        cin>>ch;
        cout<<endl;
    }
    
    
    
}