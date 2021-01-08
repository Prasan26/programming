#include <iostream>

using namespace std;

int main()
{
    char c;
    
    int isLowerVowel, isUppercaseVowel;
    cout<<"Enter an Alphabet:";

    cin>> c;

    isLowerVowel = (c=='a' || c=='e'|| c=='i'|| c=='o'||c=='u');

    isUppercaseVowel = (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');

 if (isLowerVowel || isUppercaseVowel)
 cout<<c<<"is a vowel.";

 else 
 cout<<c<<"is a consonant.";

 return 0;   
}