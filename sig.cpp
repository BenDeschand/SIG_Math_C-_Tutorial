#include "sig.h"

sig::sig(string name)
{
    this->name = name;
}

int sig::add(int fir, int sec)
{
    return fir + sec;
};

int sig::sub(int fir, int sec)
{
    return fir - sec;
};

int sig::mult(int fir, int sec)
{
    return fir * sec;
};

int sig::div(int fir, int sec)
{
    return fir / sec;
};

int sig::mod(int fir, int sec)
{
    return fir % sec;
};