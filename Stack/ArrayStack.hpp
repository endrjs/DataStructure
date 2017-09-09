//
//  ArrayStack.hpp
//  
//
//  Created by 박건 on 2017. 9. 9..
//
//

#ifndef ArrayStack_hpp
#define ArrayStack_hpp

#include <stdio.h>
#include <cstdlib>

inline void error(char* message){
    printf("%s\n, message");
    exit(1);
}

const int MAX_STACK_SIZE = 10;

class ArrayStack{
   
    
    int top = -1;
    int stacks[MAX_STACK_SIZE];
    
    
        public:
    ArrayStack(){ top == -1};
    ~ArrayStack(){};
    
    bool isEmpty(){return top == -1}
    bool isFull(){return top == MAX_STACK_SIZE - 1}
    
    
    void push(int e){
        if(isFull()){
            error("스텍 포화 에러");
        }else stacks[++top] = e;
    }
    
    int pop(){
        if(isEmpty()){
            error("스텍이 비었습니다");
        }return stacks[top--];
    }
    
    
    int peek(){
        if(isEmpty()){
            error("%s\n, 스텍이 비었습니다");
        }return stacks[top];
        
    }
    
    void display(){
        printf("[스택 항목의 수 = <%2d>] ==> ", top +1);
        for(int i=0; i<=top, i++){
            printf("<2%d>", stacks[i]);
            printf("\n")
        }
    
    }
    
};

#endif /* ArrayStack_hpp */
