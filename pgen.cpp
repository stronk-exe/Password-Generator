#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;


int ft_check(string s, char c)
{
	for (int i=0; s[i]; i++)
	{
		if (s[i] == c)
			return (0);
	}
	return (1);
}
int main()
{
	int	n,l;
	string s = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM012345678 9";
	string password;
	ofstream	passFile;

	passFile.open("password.txt");
	cout << "Number of digits in the password" << endl;
	cin >> l;
	if (l <=0)
	{
		cout << "MAT7MA9CH 3LYA" << endl;
		return (0);
	}
	srand(time(NULL));
	for (int i=0; i < l; i++)
	{
		n = rand() % 63;
		while (ft_check(s, s[n]))
		{
			n = rand() % 63;
		}
		passFile << s[n];
	}
	cout << "DONE!" << endl;
}
