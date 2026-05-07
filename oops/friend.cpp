#include <iostream>
using namespace std;

class Test{
private:
    int age = 20;
public:
    friend void display(Test t);
};

void display(Test t){
    cout << t.age << endl;
}

int main(){
    Test t1;
    display(t1);
}