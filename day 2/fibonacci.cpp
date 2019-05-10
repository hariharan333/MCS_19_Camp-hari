#include<iostream>
 
using namespace std;
 
main()
{
   int n, c, first = 0, second = 1, next,sum=0;
   cout << "Enter the n numbers" << endl;
   cin >> n;
   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      cout << next << endl;
      if(next%2 ==0 )
      {
          sum+=next;
      }
   }
   if(sum <= 4000000)
   {
       cout<<"total"<<sum;
   }
 
   return 0;
}
