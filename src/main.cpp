#include <iostream>
#include "../include/Key.h"
#include "../include/AB.h"
#include "../include/ABE.h"

typedef Key<int> keyType;

void Menu(AB<keyType> &tree);

int main() {
  AB<keyType> *tree = new ABE<keyType>();
  while(true) {
    Menu(*tree);
  }
  return 0;
}
void Menu(AB<keyType> &tree) {
  std::cout << "1. Salir" << std::endl;
  std::cout << "2. Insertar" << std::endl;
  std::cout << "3. Buscar clave" << std::endl;
  std::cout << "4. Mostrar arbol inorden" << std::endl;
  std::cout << "Ingrese una opcion: ";
  int option;
  std::cin >> option;
  int clave;
  switch (option) {
    case 1:
      exit(0);
    case 2:
      std::cout << "Ingrese la clave: ";
      std::cin >> clave;
      tree.insert(clave);
      break;
    case 3:
      std::cout << "Ingrese la clave: ";
      std::cin >> clave;
      tree.search(clave);
      break;
    case 4:
      tree.inorden();
      break;
    default:
      std::cout << "Opcion invalida" << std::endl;
      break;
  }
}
