#include <iostream>
#include "Estudiante.h"
#include "CampusVirtual2Impl.h"
#include <string>
#include <vector>
std::vector<std::string> split(const std::string& s, const std::string& delimiter) {
    std::vector<std::string> tokens;
    size_t pos = 0;
    std::string token;
    std::string str = s; 
    while ((pos = str.find(delimiter)) != std::string::npos) {
        token = str.substr(0, pos);
        tokens.push_back(token);
        str.erase(0, pos + delimiter.length());
    }
    tokens.push_back(str); 

    return tokens;
}

int print_menu(std::string opciones) {
    std::vector<std::string> vector_opciones = split(opciones,",");
    while (true) {
        std::cout << "Ingrese alguna opcion valida del 1 al " << std::to_string(vector_opciones.size()) << std::endl;
        for (int i = 0;i < vector_opciones.size();i++) {
            std::cout << (i + 1) << ".- " << vector_opciones[i] << std::endl;
        }
        std::cout << " Opcion: ";
        std::string respuesta;
        std::cin >> respuesta;
        try {
            int numero = std::stoi(respuesta);
            if (numero > 0 && numero <= vector_opciones.size()) {
                return numero;
            }
            std::cout << "La opcion seleccionada esta fuera del rango valido!" << std::endl;
        }
        catch (const std::invalid_argument& e) {
            std::cout << "Ingrese un numero valido!";
        }
        catch (const std::out_of_range& e) {
            std::cout << "Ingrese un numero valido!";
        }
    }
    return -1;

}

int main()
{
    CampusVirtual2Impl* campusVirtual = new  CampusVirtual2Impl();
    std::cout << "Cargando salas\n";
    if (campusVirtual->cargar_salas("salas.txt")){
        std::cout << "Salas cargadas correctamente";
    }else{
        std::cout << "Hubo un problema al cargar las salas";
    }
    std::cout << std::endl;
    int opcion_menu_principal = print_menu("Ver Salas,Agregar Sala,Salir");
    if (opcion_menu_principal==1) {
        IteratorSimple<std::string>* iterator = campusVirtual->obtener_salas();
        std::cout << "---Lista de Salas---" << std::endl;
        while (iterator->tiene_siguiente()) {
            std::string* sala = iterator->siguiente();
            std::cout << "Sala: " << *sala<<std::endl;
        }
    }
    if (opcion_menu_principal == 2) {

    }
    std::cout << opcion_menu_principal;

    
}
