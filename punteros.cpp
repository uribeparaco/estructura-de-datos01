#include <iostream>

struct ListNode {
    int data;
    ListNode* next;

    ListNode(int val) : data(val), next(NULL) {}
};

//  esta es la funcion para imprimir la lista...
void printList(ListNode* head) {
    ListNode* current = head;
    while (current != NULL) {
        std::cout << current->data << " , ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {

    ListNode* head = new ListNode(1);
    ListNode* segundo = new ListNode(2);
    ListNode* tercero = new ListNode(3);
    ListNode* cuarto = new ListNode(4);
    ListNode* quinto = new ListNode(5);
    ListNode* sexto = new ListNode(6);
    ListNode* septimo = new ListNode(7);
    ListNode* octavo = new ListNode(8);
    ListNode* noveno = new ListNode(9);
    ListNode* decimo = new ListNode(10);


    head->next = segundo;
    segundo->next = tercero;
     tercero->next = cuarto;
     cuarto->next = quinto;
     quinto->next = sexto;
     sexto->next = septimo;
     septimo->next = octavo;
     octavo->next = noveno;
     noveno->next = decimo;

    printList(head);

    delete head;
    delete segundo;
    delete tercero;
    delete cuarto;
    delete quinto;
    delete sexto;
    delete septimo;
    delete octavo;
    delete noveno;
    delete decimo;



  
    return 0;
}

