#include<iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"Enter 2 Numbers: ";
    cin>>a>>b;

    for(int num=a; num<=b; num++) {
        int i;
        for(i=2; i<num; i++) {
            if (num%i==0){             //it is not a prime
                break;
            }
        }
        if(i==num) {                  //loop has completed all of its iletrations
        cout<<num<<endl;
    

        }
    }
    return 0;
}