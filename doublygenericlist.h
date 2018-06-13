#ifndef DOUBLYGENERICLIST_H
#define DOUBLYGENERICLIST_H

#include <genode.h>

typedef struct DoublyGenericList
{
    int Length;
    GeNode *First;
    GeNode *Last;

    //Last Inserted

    //Last Removed

}DoublyGenericList;

//(^< ............ ............ ............
DoublyGenericList *new_DoublyGenericList(){

    DoublyGenericList *TmpGeList = (DoublyGenericList *)malloc(sizeof(DoublyGenericList));

    TmpGeList->Length = 0;
    TmpGeList->First = NULL;
    TmpGeList->Last = NULL;

    return TmpGeList;
}


//(^< ............ ............ ............ i s   E m p t y
int isEmpty(int Length){
    return (Length == 0);
}

//(^< ............ ............ ............ i s   V a l i d I n d e x
int isValidIndex(int Length,int index){
    return (index >= 0 && index < Length);
}

//(^< ............ ............ ............ E M P T Y   I N S E R T
int EmptyInsert(DoublyGenericList * TmpGeList,void *newData){
    if(isEmpty(TmpGeList->Length)){

        GeNode *TmpNode = new_GeNode(newData);

        TmpGeList->First = TmpNode;
        TmpGeList->Last = TmpNode;

        TmpGeList->Length++;

        return 1;
    }
    else{
        return 0;
    }
}

//(^< ............ ............ ............ F R O N T   I N S E R T
void FrontInsert(DoublyGenericList *TmpGeList,void *newData){

    if(EmptyInsert(TmpGeList,newData)){
        return;
    }
    else{

        GeNode *TmpNode = new_GeNode(newData);

        TmpNode->Next = TmpGeList->First;
        TmpGeList->First->Previous = TmpNode;
        TmpGeList->First = TmpNode;

        TmpGeList->Length++;
    }
}

//(^< ............ ............ ............ E N D   I N S E R T
void EndInsert(DoublyGenericList *TmpGeList,void *newData){

    if(EmptyInsert(TmpGeList,newData)){
        return;
    }
    else{

        GeNode *TmpNode = new_GeNode(newData);

        TmpNode->Previous = TmpGeList->Last;
        TmpGeList->Last->Next = TmpNode;
        TmpGeList->Last = TmpNode;

        TmpGeList->Length++;
    }
}

//(^< ............ ............ ............ g e t   N O D E   b y   I N D E X
GeNode *getNodebyIndex(DoublyGenericList *TmpGeList,int index){
    if(isValidIndex(TmpGeList->Length,index)){
        return getNodebyIndext_Recusively(TmpGeList->First,index);

    }
    else{
        return NULL;
    }
}

//(^< ............ ............ ............ g e t   N O D E   b y   I N D E X
GeNode *getNodebyIndext_Recusively(GeNode *TmpNode ,int index){

    if(index == 0){
        return TmpNode;
    }
    else{
        TmpNode = TmpNode->Next;
        index--;
        return getNodebyIndex(TmpNode,index);
    }

}


#endif // DOUBLYGENERICLIST_H
