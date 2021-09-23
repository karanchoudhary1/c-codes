#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int num;
    int guess;
    int i=1;
    srand(time(0));
    num = rand()%1000;
    cout<<"Guess a number"<<endl;
    

    do
    {
        cin>>guess;
       if (guess>num)
       {
           cout<<"Lower Number please"<<endl;
       }
        else if (guess<num)
        {
            cout<<"Higher Number please"<<endl;
        }
        else 
        {
            cout<<"Wow you guessed in "<<i<<" attempts"<<endl;
        }
        i++;
        
    } while (num!=guess);
    

    return 0;
}
