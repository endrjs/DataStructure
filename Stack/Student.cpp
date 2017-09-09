//
//  Student.cpp
//  
//
//  Created by 박건 on 2017. 9. 9..
//
//

#include "Student.hpp"
const int MAX_STACK_SIZE = 100;

inline void error(char* message){
    printf("%s\n,message");
    exit(1);
}

class StudentStack{
    int top;
    Student stack[MAX_STACK_SIZE];
    
    
public:
    StudentStack(){ top = -1 }
    bool isEmpty(){ return top == -1; }
    bool isFull(){ return top == MAX_STACK_SIZE -1;}
    
    void push(student e){
        if(isFull()){
            error("스택이 꽉 찼습니다");
        }StudentStack[++top] = e;
    }
    
    student pop(){
        if(isEmpty){
            error("스택이 비었습니다");
        }stack[top--];
    }
    
    student peek(){
        if(isEmpty){
            error("스택이 비었습니다");
        }return stack[top];
    }
    
    student display(){
        printf("[전체 학생의 수 = %2d]\n,", top + 1) ;
        for(int i =0; i<=top; i++){
            student[i].display();
            printf("\n")
        }
    };

}
