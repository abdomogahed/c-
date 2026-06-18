
#include <iostream>
using namespace std;
int main()
{
	int n,n2;
	char x;
	cin >> n>>n2;
	cin >> x;
	if (x == '*')
		cout << (n * n2);
	else if (x == '/')
		cout << (n / n2);
	else if (x == '+')
		cout << (n + n2);
	else if (x == '-')
		cout << (n - n2);



	return 0;
}
   
