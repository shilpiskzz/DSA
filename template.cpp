template <typename T>
class pair
{
    T x;
    T y;

public:
    void setX(T x)
    {
        this->x = x;
    }
    T getX()
    {
        return x;
    }

    void set(T y)
    {
        this->y = y;
    }

    T getX()
    {
        return x;
    }
};