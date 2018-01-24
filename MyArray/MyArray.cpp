// MyArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	char abet[26];

	for (int i=0; i<26; i++)
		abet[i] = 'A'+i;
	
	cout << abet[21] << abet[8] << abet[19] << abet[0] << abet[11] << abet[8] << abet[24] << endl;
		
	
	return 0;
}
