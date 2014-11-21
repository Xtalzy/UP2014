/*
// 1зад) програма, коятовъвежда две числа, съответноn–редовете на матрицатаиm–колоните на матрицата(n<= 20иm <= 20).И след това въвежда матрица А съответносn–реда иm–стълба
#include <iostream>
using namespace std;
int main ()
{
	const int max_n=20 , max_m =20;
	int a[max_n][max_m];

	int n,m;
	cout << "vuvedi n: "  ;
	cin >>n;
	cout << "vuvedi m: " ;
	cin>>m;

	
for (int i=0; i<n; i++) // obhojda redove !	
{
	 for (int j=0; j<m;  j++)  //obhojda kolonite!
	 {
		cin >> a[i][j];
	 }
}



return 0;
system("pause");
}
*/