//
//  StudentTest.cpp
//  
//
//  Created by 박건 on 2017. 9. 9..
//
//

#include "StudentTest.hpp"
//
//  StudentTest.cpp
//
//
//  Created by 박건 on 2017. 9. 9..
//
//

#include <stdio.h>
#include "Student.h"


void main(){
    
    StudentStack stack;
    stack.push(Student(2015, "홍길동1", "컴공"));
    stack.push(Student(2016, "홍길동2", "컴공"));
    stack.push(Student(2017, "홍길동3", "컴공"));
    stack.display();
    stack.pop();
    stack.display();
};
