#include "vector.hpp"

vector::vector(int s) : sz{s}, elem{new double[s]}
{
    for (int i = 0; i < s; i++)
    {
        elem[i] = 0.0;
    }
}

void vector::set(int index, double value)
{
    elem[index] = value;
}

void vector::erase()
{
    for (int i = 0; i < sz; i++)
    {
        elem[i] = 0.0;
    }
}
