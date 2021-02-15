#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void square(int n);
void triangle(int n);
void rectangle(int b, int h);
void biggestNum();
int main(int argc, char const *argv[])
{
    /*
    for (int i = 10; i >= -5; --i) {
        cout << i << endl;
    }
    for (int i = 1; i < 10; ++i)
    {
        cout << i << endl;
    }
    */
    biggestNum();
    return 0;
}
void biggestNum() {
    cout << "Enter two numbers, separated by a space: ";
    int first, second;
    cin >> first;
    cin >> second;
    if (first > second) cout << first << " is the biggest number." << endl;
    else cout << second << " is the biggest number." << endl;
}
void square(int n)
{
    rectangle(n, n);
}
void rectangle(int b, int h)
{
    string side(b, '*');
    for (int i = 0; i < h; ++i)
    {
        cout << side << endl;
    }
}
void triangle(int n)
{
    for (int i = 1; i <= n; i += 2)
    {
        string space((n - i) / 2, ' ');
        string stars(i, '*');
        cout << space << stars << space << endl;
    }
}
