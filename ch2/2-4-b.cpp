#include <iostream>

int main(int argc, char* argv[]){

    unsigned short b1 = (unsigned short) atoi(argv[1]), b2 = (unsigned short) atoi(argv[2]);

    unsigned short mask = 1;
    unsigned short carry = 0;
    unsigned short op1, op2;
    unsigned short sum = 0;

    for(int i = 0; i <= 8;i++){
        
        op1 = b1 & mask;
        op2 = b2 & mask;
        
        //std::cout << "---------------" << std::endl;
        //std::cout << "mask is: " << mask << std::endl;
        //std::cout << "op1 is: " << op1 << std::endl;
        //std::cout << "op2 is: " << op2 << std::endl;
        

        sum |= (op1 ^ op2 ) ^ carry;
        //std::cout << "sum is: " << sum << std::endl;
        carry = ( (op1 & op2) | (op1 & carry) | (op2 & carry)) << 1 ;  
        //std::cout << "carry is: " << carry << std::endl;

        mask <<= 1;
    }
    
    std::cout << b1 << " + " << b2 << " is actually equal to: " << b1 + b2 << std::endl;
    std::cout << b1 << " + " << b2 << " is equal to: " << sum << std::endl;

    return 0;
}