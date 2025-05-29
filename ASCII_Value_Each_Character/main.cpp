#include <iostream>
using namespace std;
int main(){

    char ch, str[200] = "Shahbaz Ali";

    for(int i=0; str[i]!='\0'; i++){
        ch = str[i];
        cout<<"ASCII value of "<<ch<<" is "<<int(ch)<<endl;
    }



    return 0;

}