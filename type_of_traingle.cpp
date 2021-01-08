#include <iostream>

using namespace std;

int main()
{

    int sidea, sideb, sidec;
    cout<<"input three side s of traingle: \n";

    cin>>sidea>>sideb>>sidec;

    if(sidea==sideb==sidec)
    {
        cout<<"this is a equilateral trainlge. \n";

    }
else if (sidea==sideb || sidea==sidec || sideb==sidec)
{
    cout<<"this is a isosceles traingle. \n";

}
else
{
    cout<<"this is a scaler traingle. \n";
}
return 0;
}