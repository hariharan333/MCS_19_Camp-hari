/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int arr[3][5]={{13,4,8,14,1},{9,6,3,7,21},{5,12,17,9,3}};
    for(int j=0;j<5;j++)//outer loop
    {
      for(int i=0;i<3;i++)//inner loop
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    return 0;
}

