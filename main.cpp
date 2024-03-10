#include <iostream>

int MULTIPLICATION(){
    int x,y;
    std::cout<<"Podaj 2 liczby: \n";
    std::cin>>x>>y;
    std::cout<<"Wynik mnozenia to: \t";
    return(x*y);
}

int main() {
    std::cout << MULTIPLICATION() << std::endl;
    return 0;
}
