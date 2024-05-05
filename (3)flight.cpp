#include <iostream>
using namespace std;

class Flight
{
public:
    int f[4][4];
    Flight()
    {
        int temp[4][4] =
            {
                {0, 3, 0, 13},
                {3, 0, 5, 11},
                {0, 5, 0, 0},
                {13, 11, 0, 0}};
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                f[i][j] = temp[i][j];
            }
        }
    }

    void aval(int a, int b)
    {
        if (f[a][b] != 0)
        {
            cout << "Flight is available-->" << f[a][b];
        }
        else
        {
            cout << "Not avail";
        }
    }
};

int main()
{
    Flight fl;
    fl.aval(0, 0);
}
