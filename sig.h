#include <iostream>
#include <string>

using namespace std;

class sig
{
    private:
        string name;

    public:
        sig(string name);
        int add(int fir,  int sec);
        int sub(int fir, int sec);
        int mult(int fir, int sec);
        int div(int fir, int sec);
        int mod(int fir, int sec);
};