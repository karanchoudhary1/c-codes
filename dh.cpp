#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"whose number you want the multiplication of"<<endl;
    cin>>n;
    int i=1;
   do
   {
       cout<<n<<" * "<<i<<" ="<<n*i<<endl;
       i++;
   } while (i<=10);
    return 0;
}
