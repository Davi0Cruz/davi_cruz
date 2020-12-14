class vector
{
private:
    int sz;
    double *elem;

public:
    vector(int s);
    double get(int index) const { return elem[index]; };
    void set(int index, double value);
    void erase();
    ~vector() { delete[] elem; };
    int size() const { return sz; }
};
