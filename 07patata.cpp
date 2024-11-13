#include <iostream>
using namespace std;

int main() {
	
	int temp;
	cout << "what is the temperature";
	cin >> temp;
	if (temp < 32) {
		cout << "Tell user to bring a heavy jacket:\t";
	} else if (temp == 32 || temp <= 50){
		cout << "Tell user to bring a light jacket:\t";
	}else{
		cout << "Tell user not to bring any jacket:\t";
	}
	return 0;
}
