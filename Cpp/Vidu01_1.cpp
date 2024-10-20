#include <iostream>
#include <cstring>
using namespace std;

int main() {
	std::string a = "Hello World";
	int len = a.length();

	for(int i = 0; i<len; i++) {
		int cnt = 0;
		bool isAlreadyChecked = false;

//		if(a[i] == ' ') continue; // Bo dau cach

		for(int k = 0; k<i; k++) {
			if(a[i] == a[k]) {
				isAlreadyChecked = true;
			}
		}

		if(isAlreadyChecked) continue;

		for(int j = 0; j<len; j++) {
			if(a[i] == a[j]) {
				cnt++;
			}
		}


//		if(cnt>=2) continue; // Bo qua gia tri trung lap

		std::cout << a[i] << " xuat hien so lan la: " << cnt << std::endl;

	}



	return 0;
}