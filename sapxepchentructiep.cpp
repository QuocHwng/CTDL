#include <iostream>
using namespace std;
int Insertion_Sort(int a[], int i, int n)
{
	int pos, x;
	for(int i=1; i<n; i++)
	{
		x=a[i]; pos=i-1;
		while(pos>=0&&a[pos]>x)
		a[pos+1]=a[pos-1];
		a[pos+1]=x;
	}
}
int main()
{
	int a[6] = {41, 23, 4, 14, 56, 1};
	Insertion_Sort(a, 6);
	cout<<"Mang sau khi sap xep:"<<endl;
	for(int i=0;i<6;i++){
		cout<<a[i]<<" ";
	}
	system("pause");
}
