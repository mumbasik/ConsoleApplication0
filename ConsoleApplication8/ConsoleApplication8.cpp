

#include <iostream>
using namespace std;
void changing(char* arr) {
	char* strr;
	for (strr = arr; *strr; strr++) {
		if (*strr == '.') {
			*strr = '!';
		}
	}
	
}

void cheak(char* arr, int coun) {
	
	int count = 0;
	char* str;
	for (str = arr; *str; str++) {
		if (*str == *arr) {
			count++;
		}
		
	}
	cout << "amount of same symbols"<< " " << count;
}
int main()
{
	char ar[20] = "..ar.ar..";

	changing(ar);
	cout << ar << "\n";
	char arr[] = "!,@,#,!,%";
	
	int count = 0 ;
	cheak(arr, count);
	
	
	
	
	
}

