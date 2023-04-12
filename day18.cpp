#include<iostream>
#include<string>

using namespace std;

bool isStrongPassword(string pass);

int main()
{
    string password;
    cout<<"Enter the password: ";
    getline(cin,password);
    if(isStrongPassword(password))
    {
        cout<<"Strong password";
    }
    else
    {
        cout<<"Not a strong password";
    }
    return 0;
}

bool isStrongPassword(string pass)
{
    bool upper=false, specialChar=false, number=false;

    for(auto c:pass)
    {
        if(isupper(c))
            upper=true;
        if(ispunct(c))
            specialChar=true;
        if(isdigit(c))
            number=true;
    }
    if(upper&&specialChar&&number&&pass.size()>=8)
        return true;

    else
        return false;
}

