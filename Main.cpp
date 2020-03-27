#include <iostream>
#include <string>

using namespace std;

int main() 
{
	int num = 0;
	string (word) = "";
	int sum = 0;

	cout << "Insert a number\n";
	cin >> word;

	for (int x = 0; x < word.length(); x++) 
	{
		char y = word[x];
		int num = y - 48;
		sum += num;
	}

	cout << "the number of Digits is:" << word.length() << "\n";
	cout << "the sum of all digits is" << "\n" << " " << sum ;
	
	return 0;
}