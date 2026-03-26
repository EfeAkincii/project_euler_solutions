// ConsoleApplication1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;
int main()
{
	int dividerCounter = 0;
	long long number = 0;
	long long incrementerNumber = 1;
	while (dividerCounter <= 500)
	{
		number += incrementerNumber;
		incrementerNumber++;
		
		
		for (int i = 1; i <= (number / i); i++)
			{
				if (number % i == 0)
				{
					if (i * i == number)
					{
						dividerCounter++;
					}
					else
					{
						dividerCounter += 2;
					}
					
				}
			}
			if (dividerCounter <= 500)
			{
				dividerCounter = 0;
			}
		
	}
	cout << number;
	
	return 0;
}


