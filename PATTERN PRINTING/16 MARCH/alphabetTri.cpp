#include<iostream>
using namespace std;

/*PRINT PATTERN
    A
    AB
    ABC
    ABCD
*/
int main()
{
    int n;
    cout<<"Enter number of rows :";
    cin>>n;
    for(int i=1;i<=n;i++)
    {      
       char ch='A';
       for(int j=1;j<=i;j++)
       {
        cout<<ch;
        ch++;
       }
       cout<<endl;
    }
}