#ifndef DOUBLELIST_H
#define DOUBLELIST_H

#include "doublenode.h"
#include <stdio.h>
#include <stdlib.h>


//(^< ............ ............ ............
typedef struct DoubleList
{
    //SP
    int ListSize;
    DoubleNode * Fist;
    DoubleNode * Last;

}DoubleList;

//(^< ............ ............ ............
DoubleList * NewDoubleList(){
    DoubleList * TempDL = (DoubleList *)malloc(sizeof(DoubleList));
    TempDL->ListSize = 0;
    TempDL->Fist = NULL;
    TempDL->Last = NULL;

    return TempDL;
}

//(^< ............ ............ ............
int add_to_beginning(DoubleList * TempDL,Student * TempAlu){
    DoubleNode * TempDN = (DoubleNode *)malloc(sizeof(DoubleNode));
    TempDN->Alumno = TempAlu;

    if(TempDL->ListSize == 0){
        TempDL->Fist = TempDN;
        TempDL->Last = TempDN;
    }
    else{
        TempDL->Fist->Previous = TempDN;
        TempDN->Next = TempDL->Fist;
        TempDL->Fist = TempDN;
    }

    TempDL->ListSize++;
    return 0;
}

//(^< ............ ............ ............
int add_to_ending(DoubleList * TempDL,Student * TempAlu){
    DoubleNode * TempDN = (DoubleNode *)malloc(sizeof(DoubleNode));
    TempDN->Alumno = TempAlu;

    if(TempDL->ListSize == 0){
        TempDL->Fist = TempDN;
        TempDL->Last = TempDN;
    }
    else{
        TempDL->Last->Next = TempDN;
        TempDN->Previous = TempDL->Last;
        TempDL->Last = TempDN;
    }

    TempDL->ListSize++;
    return 0;
}

//(^< ............ ............ ............
int add_at_specific_index(DoubleList * TempDL,Student * TempAlu, int index){
    DoubleNode * NewNode = NewDoubleNode();
    NewNode->Alumno = TempAlu;

    if(index == 0){
        add_to_beginning(TempDL,TempAlu);
        return 1;
    }

    if(index == (TempDL->ListSize-1)){
        add_to_ending(TempDL,TempAlu);
        return 1;
    }

    if(index<TempDL->ListSize && index >= 0){
        DoubleNode * TempDN = get_specific_node(TempDL,index);
        //NewNode->Previous = TempDN;
       // NewNode->Next = TempDN->Next;

       // TempDN->Next = NewNode;
       // TempDN->Next->Previous = NewNode;
        return 1;

    }
    else{
        return -1;
    }
}

//(^< ............ ............ ............
DoubleNode * get_specific_node(DoubleList * TempDL,int index){
    DoubleNode * TempDN = TempDL->Fist;
    if(index<TempDL->ListSize && index >= 0){
        while (index > 0) {
            index--;
            TempDN = TempDN->Next;
        }
        return TempDN;
    }
    else{
        return NULL;
    }
}



//(^< ............ ............ ............
/*
DoubleNode * get_specific_node(DoubleNode * TempDN,int index){

    if(index >= 0 && TempDN->Next != NULL){
        index--;
        return get_specific_node(TempDN->Next,index);
    }
    else{
        return TempDN;
    }
}
*/

//(^< ............ ............ ............
//(^< ............ ............ ............
//(^< ............ ............ ............

#endif // DOUBLELIST_H
