#include<iostream>
using namespace std;
int main()
{
    int n;

    cout<<"enter the numbe of n";
    cin>>n;


    for(int i=0;i<n;i++)
    {


        for(int j=1;j<=i+1;j++)
        {
            cout<<char('A'+i);

        }
        cout<<endl;
    }
}
