#include <iostream>

struct NLista {
    int dato;
    NLista* next;

    NLista(int val) : dato(val), next(NULL) {}
};

/////////////////////////////////////////////////////////////////////

void imprimirLista(NLista* c) {
    NLista* actual = c;
    while (actual != NULL) {
        std::cout << actual->dato << " , ";
        actual = actual->next;
    }
    std::cout << std::endl;
}
/////////////////////////////////////////////////////////////////////
void insertarDato(NLista* & c, int nuevoDato) {
    NLista* nuevoNodo = new NLista(nuevoDato);
    nuevoNodo->next = c;
    c = nuevoNodo;
}

////////////////////////////////////////////////////////////////////

void actualizarDato(NLista* c, int datoAnterior, int nuevoDato) {
    NLista* actual = c;
    while (actual != NULL) {
        if (actual->dato == datoAnterior) {
            actual->dato = nuevoDato;
            return;
        }
        actual = actual->next;
    }
    std::cout << "EL DATO NO SE ENCUENTRA EN LA LISTA." << std::endl;
}

/////////////////////////////////////////////////////////////////////7

void eliminarDato(NLista*& c, int datoAEliminar) {
    NLista* actual = c;
    NLista* previo = NULL;

    while (actual != NULL) {
        if (actual->dato == datoAEliminar) {
            if (previo == NULL) {
                c = actual->next;
            } else {
                previo->next = actual->next;
            }
            delete actual;
            return;
        }
        previo = actual;
        actual = actual->next;
    }
    std::cout << "EL DATO NO SE ENCUENTRA EN LA LISTA." << std::endl;
}
///////////////////////////////////////////////////////////////////////////////7
int main() {
    NLista* c = NULL;

    for (int i = 1; i <= 10; ++i) {
        insertarDato(c, i);
    }

    imprimirLista(c);

/////////////////////////////////////////////////////////////////////////////7
    int opcion;
    do {
        std::cout << "Opciones:" << std::endl;
        std::cout << "1. INSERTAR DATO" << std::endl;
        std::cout << "2. MOSTRAR LISTA" << std::endl;
        std::cout << "3. ACTUALIZAR DATO" << std::endl;
        std::cout << "4. ELIMINAR DATO" << std::endl;
        std::cout << "0. SALIR" << std::endl;
        std::cout << "INGRESE UNA OPCION: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                int nuevoDato; // Declarar nuevoDato aquí
                std::cout << "Ingrese el nuevo dato: ";
                std::cin >> nuevoDato;
                insertarDato(c, nuevoDato);
                break;
            case 2:
                imprimirLista(c);
                break;
            case 3:
                int datoAnterior;
                std::cout << "Ingrese el dato a actualizar: ";
                std::cin >> datoAnterior;
                std::cout << "Ingrese el nuevo valor: ";
                std::cin >> nuevoDato;
                actualizarDato(c, datoAnterior, nuevoDato);
                break;
            case 4:
                int datoAEliminar;
                std::cout << "Ingrese el dato a eliminar: ";
                std::cin >> datoAEliminar;
                eliminarDato(c, datoAEliminar);
                break;
            case 0:
                break;
            default:
                std::cout << "Opción no válida. Intente nuevamente." << std::endl;
        }
    } while (opcion != 0);

    // Liberar memoria
    while (c != NULL) {
        NLista* temp = c;
        c = c->next;
        delete temp;
    }

    return 0;
}
