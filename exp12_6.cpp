#include<iostream>
using namespace std;

int count=0;
class temp{
    public:
    temp(){
        count++;
        cout<<"Count: "<<count<<endl;
    }
    ~temp(){
        count--;
        cout<<"Count: "<<count<<endl;
    }
};

int main(){
    temp t1, t2, t3;
    temp t4;
}