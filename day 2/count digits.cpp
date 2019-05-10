#include <iostream>

using namespace std;

int main()
{
    int arr[50],n,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0;
    cout<<"enter the number:";
    cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   for(int i=0;i<n;i++)
   {
            
        if(arr[i]==0)
            a++;
            
        if(arr[i]==1)
            b++;
    
        if(arr[i]==2)
            c++;
            
         if(arr[i]==3)
            d++;
            
         if(arr[i]==4)
            e++;
            
         if(arr[i]==5)
            f++;
            
         if(arr[i]==6)
            g++;
            
         if(arr[i]==7)
            h++;
            
         if(arr[i]==8)
            i++;
            
         if(arr[i]==9)
            j++;
       
   }
      cout<<"0"<<" "<<a<<"\n";
      cout<<"1"<<" "<<b<<"\n";
      cout<<"2"<<" "<<c<<"\n";
      cout<<"3"<<" "<<d<<"\n";
      cout<<"4"<<" "<<e<<"\n";
      cout<<"5"<<" "<<f<<"\n";
      cout<<"6"<<" "<<g<<"\n";
      cout<<"7"<<" "<<h<<"\n";
      cout<<"8"<<" "<<i<<"\n";
      cout<<"9"<<" "<<j<<"\n";
   
    return 0;
}

