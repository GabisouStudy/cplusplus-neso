#include <iostream>
int main(){
	int count = 1, sum = 0, val;
	std::cout << "Enter the number till which the sum has to be calculated: ";
	std::cin >> val;
	while(count <= val){
		sum = sum + count;
		count = count + 1;
	}
	std::cout << "The sum of 1 to " << val << " is: " << sum;
	return 0;
}
