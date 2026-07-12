#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{10, 20, 30, 40, 50, 60, 70, 80, 90};
    int sum = 80;


    for(int i=0; i<arr.size(); i++){
        int x = arr[i];
        for(int j=i+1; j<arr.size(); j++){
          int y = arr[j];
          for (int k = j+1; j<arr.size(); k++)
          {
            int z = arr[k];

            if(x+y+z == sum){
                cout<<x<<" "<<y<<" "<<z<<endl;
            }
          }
          
        }
    }

}