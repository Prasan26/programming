#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a Number: "<<endl;
    cin>>n;

    int i;
    for(i=2; i<n; i++) {
        if(n%i==0) {         //found a factor of n

        cout<<"Non-Prime "<<endl;
        break;
        }
    }
    if(i==n) {               //loop has completed all the iterations
        cout<<"Prime Number \n";
    }

    return 0;
}