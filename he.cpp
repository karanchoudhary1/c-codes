#include<iostream>
using namespace std;

int sum( int a,int b) {
    return a+b;
}

int main()
{
    int a, b;
    cout<<"enter first and second numbers"<<endl;
    cin>>a>>b;
    cout<<"The sum is"<<sum(a,b);
    return 0;
}
