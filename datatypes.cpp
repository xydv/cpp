#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<sizeof(a)<<endl; // 4
    float b;
    cout<<sizeof(b)<<endl; // 4
    char c;
    cout<<sizeof(c)<<endl; // 1
    bool d;
    cout<<sizeof(d)<<endl; // 1
    short int e;
    cout<<sizeof(e)<<endl; // 2
    long int f;
    cout<<sizeof(f)<<endl; // 8
    return 0;
}