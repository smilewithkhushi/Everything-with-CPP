#include <iostream>
using namespace std;

class Fraction{
    private :
    int numerator;
    int denominator;
    public:
    Fraction();
    Fraction(int numer);
    Fraction(int numer, int denom);
    //three constructors above
    void store(int numer, int denom);
    
    void print() const;
}

void Fraction::store(int num, int deno){
}

class Funny{
    private:
    int num;
    public:
    Funny(int x); //constructor : same name as class, not defined inside  class and takes argument
}
Funny::Funny(int x){
    num=x;
}

int main(){
    Funny funny1(10);
    Funny funny2(20);

    return 0;
}