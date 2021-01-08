#include<iostream>
using namespace std;

int main(){
    int number;

    int sum = 0;

    cout<<"enter number: ";
    cin>>number;
    
    while (number>=0)
    {
        sum += number;
        cout<<"Enter a number: ";
        cin>>number;
    }
    cout<<"\n The sum is"<<sum<<endl;

    return 0;
}

