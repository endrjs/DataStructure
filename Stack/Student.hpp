//
//  Student.hpp
//  
//
//  Created by 박건 on 2017. 9. 9..
//
//

#ifndef Student_hpp
#define Student_hpp
#define MAX_STRING 100

#include <stdio.h>
#include <cstdlib>
#include <cstring>

class Student{
    int id;
    char name[MAX_STRING];
    char dept[MAX_STRING];

    
public:
    Student(int i=0, char* n="", d=""){ set(i, n, d);}
    void set(int i, char* n, char* d){
        id = i;
        strcpy(name, n);
        strcpy(dept, d);
    }
    
    void display(){
        printf("학번:%-15d 성명:%-10s 학과:%-20s \n", id, name, dept);
    }
};

#endif /* Student_hpp */
