#include<iostream>
using namespace std;

// void swap(int a,int b){
void swap(int &a,int &b){
    
    int c;
    c=a;
    a=b;
    b=c;
    cout <<"the values of a and b after swapping inside the fuction are: "<<a<<" "<<b<<endl;

}
void fun(int &a,int b){
    a=999999;
    b=999999;
}
int main(){
    int a,b;
    a=4;
    b=6;
    swap(a,b);
    cout <<"the values of a and b after swapping outside the fuction are: "<<a<<" "<<b<<endl;
    cout <<"the values of a and b before passing in fun fuction are: "<<a<<" "<<b<<endl;
    fun(a,b);
    cout <<"the values of a and b after  passing in fun fuction are: "<<a<<" "<<b<<endl;
    
}