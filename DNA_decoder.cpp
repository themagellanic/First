#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cout << "Please enter string without space\n";

	cin >> s;

	for(int i = 0 ; i<s.size(); i=i+3)
	{
		if(s[i]=='A')
		{
			if(s[i+1]=='A')
			{
				if(s[i+2]=='A')
					cout << "a";
				if(s[i+2]=='C')
					cout << "b";
				if(s[i+2]=='G')
					cout << "c";
				if(s[i+2]=='T')
					cout << "d";

			}

			if(s[i+1]=='C')
			{
				if(s[i+2]=='A')
					cout << "e";
				if(s[i+2]=='C')
					cout << "f";
				if(s[i+2]=='G')
					cout << "g";
				if(s[i+2]=='T')
					cout << "h";
			}

			if(s[i+1]=='G')
			{
				if(s[i+2]=='A')
					cout << "i";
				if(s[i+2]=='C')
					cout << "j";
				if(s[i+2]=='G')
					cout << "k";
				if(s[i+2]=='T')
					cout << "l";
			}

			if(s[i+1]=='T')
			{
				if(s[i+2]=='A')
					cout << "m";
				if(s[i+2]=='C')
					cout << "n";
				if(s[i+2]=='G')
					cout << "o";
				if(s[i+2]=='T')
					cout << "p";
			}


		}

		if(s[i]=='C')
		{
			if(s[i+1]=='A')
			{
				if(s[i+2]=='A')
					cout << "q";
				if(s[i+2]=='C')
					cout << "r";
				if(s[i+2]=='G')
					cout << "s";
				if(s[i+2]=='T')
					cout << "t";

			}

			if(s[i+1]=='C')
			{
				if(s[i+2]=='A')
					cout << "u";
				if(s[i+2]=='C')
					cout << "v";
				if(s[i+2]=='G')
					cout << "w";
				if(s[i+2]=='T')
					cout << "x";
			}

			if(s[i+1]=='G')
			{
				if(s[i+2]=='A')
					cout << "y";
				if(s[i+2]=='C')
					cout << "z";
				if(s[i+2]=='G')
					cout << "A";
				if(s[i+2]=='T')
					cout << "B";
			}

			if(s[i+1]=='T')
			{
				if(s[i+2]=='A')
					cout << "C";
				if(s[i+2]=='C')
					cout << "D";
				if(s[i+2]=='G')
					cout << "E";
				if(s[i+2]=='T')
					cout << "F";
			}

		}

		if(s[i]=='G')
		{
			if(s[i+1]=='A')
			{
				if(s[i+2]=='A')
					cout << "G";
				if(s[i+2]=='C')
					cout << "H";
				if(s[i+2]=='G')
					cout << "I";
				if(s[i+2]=='T')
					cout << "J";

			}

			if(s[i+1]=='C')
			{
				if(s[i+2]=='A')
					cout << "K";
				if(s[i+2]=='C')
					cout << "L";
				if(s[i+2]=='G')
					cout << "M";
				if(s[i+2]=='T')
					cout << "N";
			}

			if(s[i+1]=='G')
			{
				if(s[i+2]=='A')
					cout << "O";
				if(s[i+2]=='C')
					cout << "P";
				if(s[i+2]=='G')
					cout << "Q";
				if(s[i+2]=='T')
					cout << "R";
			}

			if(s[i+1]=='T')
			{
				if(s[i+2]=='A')
					cout << "S";
				if(s[i+2]=='C')
					cout << "T";
				if(s[i+2]=='G')
					cout << "U";
				if(s[i+2]=='T')
					cout << "V";
			}


		}

		if(s[i]=='T')
		{
			if(s[i+1]=='A')
			{
				if(s[i+2]=='A')
					cout << "W";
				if(s[i+2]=='C')
					cout << "X";
				if(s[i+2]=='G')
					cout << "Y";
				if(s[i+2]=='T')
					cout << "Z";

			}

			if(s[i+1]=='C')
			{
				if(s[i+2]=='A')
					cout << "1";
				if(s[i+2]=='C')
					cout << "2";
				if(s[i+2]=='G')
					cout << "3";
				if(s[i+2]=='T')
					cout << "4";
			}

			if(s[i+1]=='G')
			{
				if(s[i+2]=='A')
					cout << "5";
				if(s[i+2]=='C')
					cout << "6";
				if(s[i+2]=='G')
					cout << "7";
				if(s[i+2]=='T')
					cout << "8";
			}

			if(s[i+1]=='T')
			{
				if(s[i+2]=='A')
					cout << "9";
				if(s[i+2]=='C')
					cout << "0";
				if(s[i+2]=='G')
					cout << " ";
				if(s[i+2]=='T')
					cout << ".";
			}


		}

	}

	cout << endl;

	return 0;

}
