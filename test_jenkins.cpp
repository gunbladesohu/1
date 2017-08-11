// test jenkins.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int inarray[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i : inarray)
	{	
		
		cout << "hello" << i << endl;
	}
    return 0;
}

