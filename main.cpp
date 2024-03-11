#include <iostream>
#include <string>

void MULTIPLICATION(){
    std::string x,y;
        while(true){
            int wynik;

            std::cout<<"<e - Konczy progeram> Podaj 2 liczby: \n";
            std::cin>>x>>y;

            if(x=="e"||y=="e"){
                std::cout<<"Koniec programu";
                break;
            }

            wynik=stoi(x)*stoi(y);
            std::cout<<"Wynik mnozenia "<<x<<" i "<<y<<" to "<<wynik<<"\n";
            }
    }

int main() {
   MULTIPLICATION();
    return 0;
}
