#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

int main(){
    std::vector<int> vector = {1,1,1,1,2,3};
    std::vector<int> retorno;

     std::srand(std::time(0));
    int conteo = 1;
    for(int i = 0;i<10000000;++i){
        int randomIndex = std::rand() % vector.size();
        int eleccion = vector[randomIndex];
        if (eleccion == 1){
            conteo = conteo + 1;
        }
        else {
            retorno.push_back(conteo);
            conteo = 1;
        }
        
    }
    double promedio = 0;
    for (int elem : retorno){
        promedio = promedio + elem ;
    }
    
    float retpromedio = promedio / retorno.size() ;
    std::cout << "promedio: " << retpromedio<< "\n";
}