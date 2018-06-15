#include <stdio.h>
#include <stdlib.h>

#include "doublygenericlist.h"

typedef struct Info
{
    int ID;
    char const* Name;
}Info;

//(^< ............ ............ ............ ............ ............ P R I N T   S P E C I F I C
void PrintSpecific(void *Dt)
{
    Info *inf = (Info*) Dt;
    
    printf( "\n" );
    printf( "\n\t--------------------------" );
    printf( "\n\tID:\t%d", inf->ID );
    printf( "\n\tName:\t%s", inf->Name );
    printf( "\n\t--------------------------" );
    printf( "\n" );
}

int main(int argc, char const *argv[])
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
    //(^< ............ ............ ............ ............ ............ P R I N T   S P E C I F I C

    EndInsert(DList,Inf_0);
    EndInsert(DList,Inf_1);
    EndInsert(DList,Inf_2);
    EndInsert(DList,Inf_3);
    EndInsert(DList,Inf_4);
    
    PrintGeneric(DList,PrintSpecific);
    
    /*
    GeNode *TmpNode = FrontRemove(DList);

    Info *res = (Info *)TmpNode->Dt;
    printf( "\nID: %d", res->ID);
    printf( "\nName: %s",res->Name);
    */
    
    printf( "\n");
    printf( "\n");
    
    return 0;
}
