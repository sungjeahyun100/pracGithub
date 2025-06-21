#include <iostream>
#include <vector>

class test{
    private:
       int a;
    public:
       int b;
};

int main(){
    std::vector<test> h;
    h.at(0).b = 1;
    return 0;
}

