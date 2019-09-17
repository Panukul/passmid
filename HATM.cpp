#include <iostream>
using namespace std;
int main()
{
	int a[2][3];
	for(int i=0;i<2;i++) {
		for(int j=0;j<3;j++) {
			cout<<"Input "<<i+1<<" "<<j+1<< " : ";
			cin>>a[i][j];
		}
	}
	cout << "********Display Array************" << endl;
	for(int i=0;i<2;i++) 
	{
		for(int j=0;j<3;j++){
			cout<<a[i][j]<< " ";
			
		}
		cout<<endl;
		
	}
	cout << "********Display Matrix************" << endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++){
			cout<<a[j][i]<< " ";
			
		}
		cout<<endl;
	}
	return 0;
}