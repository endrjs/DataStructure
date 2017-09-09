//
//  ArrayStack.cpp
//  
//
//  Created by 박건 on 2017. 9. 9..
//
//

#include "ArrayStack.hpp"

void main(){
    ArrayStack stack;
    for(int i; i<10; i++){
        stack.push(i);
        stack.pop();
        stack.pop();
        stack.pop();
        stack.display();
    }
}
