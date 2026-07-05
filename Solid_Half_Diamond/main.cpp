#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number: ";
    cin >> n;

    for(int i=0; i<2*n-1; i++){

        int condition;
        if(i<n){
            condition = i;
        }else{
            condition = 2*n-2-i;
        }

        int c = 1;
        for (int j=0; j<=condition; j++){
                cout << c;
                c++;
        }



        cout << endl;
    }
}