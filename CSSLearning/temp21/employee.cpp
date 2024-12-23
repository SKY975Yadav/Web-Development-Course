#include<iostream>
using namespace std;
class employee{
    public :
    int eno;
    float salary;
    employee(int e,int sal){
        this->eno=e;
        this->salary= sal;
    }
    void display(){
        cout<<"employee number : "<<eno;
        cout<<endl;
        cout<<"employee salary : "<<salary;
        cout<<endl;
    }
};
int main(){
        employee e1(10,200000);
        employee e2(11,250000);
        e1.display();
        e2.display();
        return 0;
}