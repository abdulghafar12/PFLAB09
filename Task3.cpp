#include <iostream>
using namespace std;
int main()
{
    int arr[3][3],sum=0;
    for(int i=0; i<3; i++)
         {
             for(int j=0; j<3; j++)
             {
         cout<<"Enter the integer for 2D Array:"<<endl;
         cin>>arr[i][j];
             }
         }
         cout<<"The Sum of all elements in the 2D Array is: "<<endl;
            for(int i=0; i<3;i++)
               {
                 for(int j=0;j<3; j++)
                 {
                    sum=sum+arr[i][j];
                   
                 }
                 cout<<endl;
                }
                cout<<sum;
             return 0;
}
        