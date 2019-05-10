#include <iostream>

using namespace std;

int main()
{
    int arr[100],n,i;
    cout<<"enter the n element";
    cin>>n;
    cout<<"enter the "<<n<<" element:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"reverse order\n";
    for(i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;
}

