#include <iostream>
using namespace std;
int main(){

    cout<<"Select 1 to Print ASCII Value of a Character: "<<endl;
    cout<<"Select 2 to Print ASCII Value of a Number: "<<endl;

    int option;
    cin>>option;
    if(option==1){
        cout<<"Enter a Character: "<<endl;
        char ch;
        cin>>ch;
        cout<<"ASCII value of "<<ch<<" is "<<int(ch)<<endl;
    }else if(option==2){
        cout<<"Enter a Number: "<<endl;
        int num;
        cin>>num;
        cout<<"ASCII value of "<<num<<" is "<<int(num)<<endl;
    }

    return 0;
    
}