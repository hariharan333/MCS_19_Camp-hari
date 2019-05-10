#include <iostream>

using namespace std;

int main()
{
    int N;
    string S;
    cout<<"enter the number:";
    cin>>N;
    cout<<"enter the string:";
    cin>>S;
    if(N>=0 && N<=10)
    {
    cout<<"\n"<<N*2<<"\n";
    }
    if(S.size()<=15)
    {
    cout<<S;
    }
    return 0;
}

