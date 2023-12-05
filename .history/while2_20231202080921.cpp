#include <iostream>
int main(){
    int count = 1, sum = 0;
    while (count <= 10){
        sum = sum + count;
        count = count + 1;
    }
    std::cout << "Sum of numbers from 1 to 10 is: " << sum << "" << std::endl;
    return 0;
}
