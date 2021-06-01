#include <iostream> 
using namespace std;

int main()
{
    setlocale(0, "rus");
    const int m = 10;
    const int n = 10;
    int k, l;
    int A[m][n];
    cout << "Enter k,l: ";
    cin >> k >> l;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            int dist = (int)sqrt(double(k - i) * (k - i) + (j - l) * (j - l));
            A[i][j] = dist + 1;
        }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << A[i][j] << '\t';
        cout << endl;
    }
    system("pause");
    return 0;
}