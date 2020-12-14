#include "vector.hpp"

vector::vector(int s) : sz{s}, elem{new double[s]}
{
    for (int i = 0; i < s; i++)
    {
        elem[i] = 0.0;
    }
}

double &vector::operator[](int index)
{
    return elem[index];
}

double vector::operator[](int index) const
{
    return elem[index];
}

vector &vector::operator=(const vector v)
{
    double p[v.size()];
    for (int i = 0; i < v.size(); i++)
    {
        p[i] = v[i];
    }
    delete[] elem;
    elem = p;
    sz = v.size();
}
void vector::erase()
{
    for (int i = 0; i < sz; i++)
    {
        elem[i] = 0.0;
    }
}
