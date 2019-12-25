/*input
4 5

818 136 713 59 946

*/
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, m;
	cin>>n>>m;
	int arr[m];
	for (int i = 0; i < m; ++i)
	{
		cin>>arr[i];

	}


	int size=sizeof(arr)/sizeof(arr[0]);

	sort(arr, arr+size);
	/*for (int i = 0; i < m; ++i)
	{
		cout<<arr[i];

	}*/

	unsigned int small=-1;

	for (int j = 0; j <= m-n; ++j)
	{
		if(arr[j+n-1]-arr[j]<small)
			small=arr[j+n-1]-arr[j];
	}

	cout<<small;
	return 0;
}