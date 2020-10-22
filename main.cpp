#include "laboratorio.cpp"
main(){
    
    computadora cp1;
    std::string aux;
    aux= "Windowos 10";
    cp1.setSO(aux);
    aux = "Salvador'PC";
    cp1.setNombre(aux);
    aux = "Intel i9 10900k";
    cp1.setCPU(aux);
    cp1.setRAM(128);
    
    computadora cp2("Uwuntu", "Jorge", 64, "Ryzen 4");
    
    computadora pc3;
    std::cin >> pc3;
    std::cout << std::endl;
    std::cout << pc3 << std::endl;
    std::cout << std::endl;
    
    laboratorio l1;
    
    //l1.agregarCP(cp2);
    //l1.agregarCP(cp1);

    l1 << pc3 << cp2 << cp1;
    
    l1.mostrar();

    //std::cout << cp2;
    return 0;

}
