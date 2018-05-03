//implementation of virtual functions in C++
///By MUHINDO MUBARAKA IUT-CSE-160040009
#include<iostream>
using namespace std;

class base{
public:
    int x;
};

class d1:virtual public base{
public:

};

class d2:virtual public base{
public:

};

class d:public d1,d2{
public:

};
int main(){
    d test;
    test.x = 20;
    cout<<test.x;

    return 0;
}










