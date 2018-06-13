#ifndef GENODE_H
#define GENODE_H

typedef struct GeNode
{
    void *Dt;
    struct GeNode *Next;
    struct GeNode *Previous;

}GeNode;

GeNode *new_GeNode(void *newData){

    GeNode *TmpNode = (GeNode *)malloc(sizeof(GeNode));

    TmpNode->Dt = newData;
    TmpNode->Next = NULL;
    TmpNode->Previous = NULL;

    return TmpNode;
}

GeNode *new_Empty_GeNode(){

    GeNode *TmpNode = (GeNode *)malloc(sizeof(GeNode));

    TmpNode->Dt = NULL;
    TmpNode->Next = NULL;
    TmpNode->Previous = NULL;

    return TmpNode;
}

void freeGeNode(GeNode **Node){

    (*Node)->Previous = NULL;
    (*Node)->Next = NULL;
    free((*Node)->Dt);
    free(*Node);

}

#endif // GENODE_H
