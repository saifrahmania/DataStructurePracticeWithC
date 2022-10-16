// C++ program for Left Rotation and Right
// Rotation of a String
#include <bits/stdc++.h>
using namespace std;

// Rotating the string using extended string
string leftrotate(string str1, int n)
{

	// creating extended string and index for new rotated
	// string
	string temp = str1 + str1;
	int l1 = str1.size();

	string Lfirst = temp.substr(n, l1);

	//	 now returning string
	return Lfirst;
}
// Rotating the string using extended string
string rightrotate(string str1, int n)
{

	return leftrotate(str1, str1.size() - n);
}

// Driver code
int main()
{
	string str1 = leftrotate("GeeksforGeeks", 2);
	cout << str1 << endl;

	string str2 = rightrotate("GeeksforGeeks", 2);
	cout << str2 << endl;
	return 0;
}
