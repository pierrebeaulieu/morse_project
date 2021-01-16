#include <iostream>
#include "./include/decode.h"
#include "./include/encode.h"
#include <string>









int main(int agrc, char* arg[3]){
    char* algo = arg[0];
    char* path_entree = arg[1];
    char* path_sortie = arg[2];

    if (algo == "encode"){
        std::string text = path_entree;
        encode(path_sortie, path_entree);
    }
    else if (algo == "decode"){
        decode(path_entree, path_sortie);
    }
    else {std::cout << "mauvais arguments"<< std::endl;}
    return 1;
}
