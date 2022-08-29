#include <iostream>
#include <fstream>
#include <random>

int main() {


    for (int cont = 1; cont < 7; cont++){
        std::ofstream outfile ("Archivo"+std::to_string(cont)+".txt");
        for(int cantidad = 0; cantidad < 256*cont; cantidad++){
            int valor;
            std::random_device rd;
            std::mt19937 eng(rd());
            std::uniform_int_distribution<int> dist(100, 500);
             valor = dist(eng);
            outfile << valor << std::endl;
        }
        outfile.close();

    }

}
