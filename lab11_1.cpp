#include<iostream>
#include<string>
#include<cstdlib>
#include<time.h>
using namespace std;

int main()
{
    string b[9]={"A","B+","B","C+","C","D+","D","F","W"};
    cout<<"Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    cout<<"You will get "<<b[rand()%9]<<" in this 261102.";
    return 0;
}