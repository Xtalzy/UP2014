// 3 zada4a
#include <iostream>
using namespace std;
int main()
{
	float mul;
	const int max_n=20 , max_m =20;
	int a[max_n][max_m];

	int n,m;
	cout << "vuvedi n: "  ;
	cin >>n;
	cout << "vuvedi m: " ;
	cin>>m;
	cout<< "vuvedi mul: " ;
	cin>> mul;
	
for (int i=0; i<n; i++) // obhojda redove !	
{
	 for (int j=0; j<m;  j++)  //obhojda kolonite!
	 {
		cin >> a[i][j];
	 }
}
//ot tyk zapochva novata zada4a :D Допишете задачата, така че след въвеждането на матрицата А, програмата даизвежда въведената матрица
		for (int i=0; i<n ; i++)
		{
			for (int j=0; j<m; j++)
			{
			cout <<a[i][j]*mul;
			}
			cout <<endl;

		}

}