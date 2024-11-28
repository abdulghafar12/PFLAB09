#include <iostream>
using namespace std;
int main()
{
    int arr[3][4];
    for(int i=0; i<3; i++)
         {
             for(int j=0; j<4; j++)
             {
         cout<<"Enter the integer for 2D Array:"<<endl;
         cin>>arr[i][j];
             }
         }
         cout<<"Now the output is given beloew : "<<endl;
            for(int i=0; i<3;i++)
               {
                 for(int j=0;j<4; j++)
                 {
                   cout<<arr[i][j];
                   cout<<"\t";
                 }
                 cout<<endl;
                }
             return 0;
}
        