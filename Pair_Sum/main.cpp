#include <iostream>
using namespace std;
int main(){
    vector<int> arr{12,14,16,18,20,20,22}

    for(int i; i<arr.size(); i++){
        int element = arr[i];

        for(j=i+1; j<arr.size(); j++){
            cout<<"("element","<<arr[j]<<")"<<endl;
        }
    }



}