#include<iostream>
using namespace std;

int fibo(int n){
    int a=0;
    int b=1;
    int c;

if (n==1 || n==2)
{
    return n-1;
}
else {
    for (int i = 0; i < n-2; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
    
    
}

}
    
    

int main()
{
    int n;
    cout<<"enter the value you want the fibonacci term of"<<endl;
    cin>>n;
    cout<<"The value at the place is "<<fibo(n)<<endl;

    return 0;
}
