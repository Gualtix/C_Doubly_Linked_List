#ifndef DOUBLENODE_H
#define DOUBLENODE_H

#include <stdio.h>
#include <stdlib.h>

//(^< ............ ............ ............
typedef struct Student
{
    int Age;
    char * FirstName;
    char * LastName;

}Student;

//(^< ............ ............ ............
typedef struct DoubleNode
{
    Student * Alumno;
    struct DoubleNode * Next;
    struct DoubleNode * Previous;
}DoubleNode;

//(^< ............ ............ ............
Student * NewStudent(){
    Student * TempStudent = (Student *)malloc(sizeof(Student));
    TempStudent->Age = 0;
    TempStudent->FirstName = NULL;
    TempStudent->LastName  = NULL;
    return TempStudent;
}

//(^< ............ ............ ............
Student * FreeStudent(Student * Alumno){
    free(Alumno->FirstName);
    free(Alumno->LastName);
    free(Alumno);
    Alumno = NULL;

    return Alumno;
}

//(^< ............ ............ ............
DoubleNode * NewDoubleNode(){
    DoubleNode * TempDN = (DoubleNode *)malloc(sizeof(DoubleNode));
    TempDN->Alumno = NewStudent();

    TempDN->Next = NULL;
    TempDN->Previous = NULL;

    return TempDN;
}

//(^< ............ ............ ............
DoubleNode * FreeDoubleNode(DoubleNode * Node){
    Node->Alumno = FreeStudent(Node->Alumno);
    free(Node);
    Node = NULL;

    return Node;
}
#endif // DOUBLENODE_H
