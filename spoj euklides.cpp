//SPOJ submission 24106246 (CPP14)plaintext list.Status: AC, problem EUCGAME, contest SPOJPL.By ravruc(ravruc), 2019 - 07 - 19 20 : 31 : 13.
#include <iostream>

using namespace std;
void sprawdz(int& a, int& b)
{
    if (a > b) { a -= b; sprawdz(a, b); }
    if (a < b) { b -= a; sprawdz(a, b); }
}


int main()
{
    int a, b, ile;
    cin >> ile;
    for (int i = 1; i <= ile;i++)
    {
        cin >> a >> b;
        sprawdz(a, b);
        cout << a + b << endl;

    }
    return 0;
}
