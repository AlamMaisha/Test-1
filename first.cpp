#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = 0;
    int b = 1;

    cout << a << " " << b << " ";

    for (int i = 1; i <= n-2; i++)
    {
        int x = a + b;
        cout << x << " ";
        a = b;
        b = x;
    }
    return 0;    
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     for(int i = 1; i <=10; i++)
//     cout << i << " ";
// }