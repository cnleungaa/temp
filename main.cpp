#include <iostream>


template <typename T>
void swap(T& x, T& y){
    T temp = x;
    x = y;
    y = temp;
}

int main(){
    std::cout << "Hello World!" << std::endl;

    int x = 2; int y = 10;
    std::cout << "currently x = " << x << ", y = " << y << std::endl;

    swap(x, y);

    std::cout << "but now x = " << x << ", y = " << y << std::endl;

    return 0;
}
