#include "laboratorio.h"
laboratorio::laboratorio(){
    ultimo = 0;
}
void laboratorio::agregarCP(const computadora &cp){
    if (ultimo < 5)
    {
        Lab[ultimo] = cp;
        ultimo ++;
    } 
    else
    {
        std::cout << "El arreglo esta lleno" << std::endl; 
    }
    
}
    
void laboratorio::mostrar(){
    std::cout << std::left;
    std::cout << std::setw(19) << "Sistema Operativo";
    std::cout << std::setw(16) << "Nombre Equipo";
    std::cout << std::setw(6) << "RAM";
    std::cout << std::setw(15) << "CPU";
    std::cout << std::endl;
    for (int  i = 0; i < ultimo; i++)
    {
        computadora &pc = Lab[i];
        std::cout << pc;
        /* std::cout << "     Computadora " << i+1 << std::endl;
        std::cout << "Sistema Operativo: " << Lab[i].getSO() << std::endl;
        std::cout << "Nombre Equipo: " << Lab[i].getNombre() << std::endl;
        std::cout << "RAM:  " << Lab[i].getRAM() << std::endl;
        std::cout << "CPU:  " << Lab[i].getCPU() << std::endl; */
        std::cout << std::endl;
    }
    
}