#include<iostream>

using namespace std;
class demo
{


    public:

    int x;
    int y;

demo(int a=10,int b=20)
{
x=a;
y=b;

}


void fun(int no)
{

    cout<<"inside fun"<<"\n";
    cout<<this<<"no\n"<<"\n";
}
};

int main(){

demo obj(11,21);
obj.fun(51);
    return 0;
}