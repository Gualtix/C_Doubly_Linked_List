#include <stdio.h>
#include "doublelist.h"

int main()
{
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
}
