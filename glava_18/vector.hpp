#include <initializer_list>

class vector
{
private:
    int sz;
    double *elem;

public:
    vector(int s);
    vector(std::initializer_list<double> ilt)
        : sz{ilt.size()}, elem{new double[sz]}
    {
        int i = 0;
        auto inter = ilt.begin();
        while (inter != ilt.end())
        {
            elem[i] = *inter;
            inter++;
            i++;
        }   
    }
    vector(vector &&v);

    ~vector() { delete[] elem; };
    int size() const { return sz; }

    void erase();

    double &operator[](int index);
    double operator[](int index) const;
    vector &operator=(const vector v);
    vector &operator=(vector &&v);
};
