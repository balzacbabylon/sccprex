#include <iostream>
#include <string>

int main(int argc, char* argv[]){
  
    std::string name;

    if(argc < 2){
        std::cout << "Hello World!" << std::endl;
    }else{
        for(int i = 1; i < argc; i++){
            name += ( i == 1 ? argv[i] : " " + (std::string)argv[i]);
        }
        std::cout << "Hello World from " << name + "!\n";
    }
    
    return 0;

}