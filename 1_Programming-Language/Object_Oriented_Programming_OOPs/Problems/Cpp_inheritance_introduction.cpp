#include <bits/stdc++.h>
using namespace std;

class Cuboid
{
    // Add your code here.
public:
    int length, width, height;
    void display()
    {
        cout << length << " " << width << " " << height << endl;
    }
};

class CuboidVol : public Cuboid
{
    // Add your code here.
public:
    void read_input(int l, int w, int h)
    {
        length = l;
        width = w;
        height = h;
    }

    void display()
    {
        cout << length * width * height << endl;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, w, h;
        cin >> l >> w >> h;
        CuboidVol c_vol;
        c_vol.read_input(l, w, h);
        c_vol.Cuboid::display();
        c_vol.display();
    }
    return 0;
}