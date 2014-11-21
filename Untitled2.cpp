#include <iostream>
using namespace std;
int main()
{
	const int max_n=20,max_m=20;
	int m;
	int n;
	int a[max_m][max_n];
	cout << "Input how many rows";
	cin >> n;
	cout << "Input how many colums";
	cin >> m;

	for (int i = 0; i < n; i++) // Първият цикъл обхожда редовете

for (int j = 0; j < m; j++) // Вторият цикъл обхожда колоните
    {
        cin >>a[i][j];
    }
	return 0;
}
