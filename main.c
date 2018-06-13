#include <stdio.h>
#include "doublelist.h"

int main()
{
    
    DoublyGenericList *DList = new_DoublyGenericList();

    Info *Inf_0 = (Info*) malloc(sizeof(Info));
    Inf_0->ID = 10;
    Inf_0->Name = "Walter";

    Info *Inf_1 = (Info*) malloc(sizeof(Info));
    Inf_1->ID = 10;
    Inf_1->Name = "Armando";

    Info *Inf_2 = (Info*) malloc(sizeof(Info));
    Inf_2->ID = 10;
    Inf_2->Name = "Alejandro";

    Info *Inf_3 = (Info*) malloc(sizeof(Info));
    Inf_3->ID = 10;
    Inf_3->Name = "Pamela";

    Info *Inf_4 = (Info*) malloc(sizeof(Info));
    Inf_4->ID = 10;
    Inf_4->Name = "Raul";

    FrontInsert(DList,Inf_0);
    FrontInsert(DList,Inf_1);
    FrontInsert(DList,Inf_2);
    FrontInsert(DList,Inf_3);
    FrontInsert(DList,Inf_4);

    GeNode *TmpNode = getNodebyIndex(DList,0);
    int k = 0;
    
    
    /*
    DoubleList * ML = NewDoubleList();
    Student * Perito = NewStudent();

    Perito->Age = 10;
    Perito->FirstName = "Armando";
    Perito->LastName  = "Sonora";

    Student * Perito2 = NewStudent();

    Perito2->Age = 15;
    Perito2->FirstName = "Walter";
    Perito2->LastName  = "Morales";

    Student * Perito3 = NewStudent();

    Perito3->Age = 20;
    Perito3->FirstName = "Samuel";
    Perito3->LastName  = "Villate";

    Student * To = NewStudent();

    Perito3->Age = 20;
    Perito3->FirstName = "Samuel";
    Perito3->LastName  = "Villate";

    Student * Sal = NewStudent();

    Perito3->Age = 20;
    Perito3->FirstName = "Samuel";
    Perito3->LastName  = "Villate";

    add_to_ending(ML,Perito);
    add_to_ending(ML,Perito2);
    add_to_ending(ML,Perito3);

    //aqui ya inserte armando,walter,samuel
      //      y me tiene que dar samuel
    //prova vs donde esta ese metodo?

    DoubleNode * Holis = get_specific_node(ML,3);
//Te Juro por mi gato que estava malo!!! ahahahaha
    //mira ahora...dale clean

    add_at_specific_index(Holis,To,1);

    printf("Hello World!\n");
    return 0;
    */
}
