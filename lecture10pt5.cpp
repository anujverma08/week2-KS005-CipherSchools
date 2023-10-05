#include<iostream>
using namespace std;

void PrintHi() {
    cout << "Hi there!" << endl;
}
int sum(int a,int b){
    int c=a+b;
    return c;
    a=500;
}

int main() {
    PrintHi();
    int a,b,c;

    a=4;
    b=6;
    int d;
    d= sum(a,b);
    c=75;
    cout << "the value of c" << d;
    cout << endl <<"the value of c "<<c;
}