// -*- C++ -*-

#include "voshdl.h"

#include <iostream>
#include <fstream>

int main(int argc, char * argv[])
{
    if (argc < 3) {
        std::cerr << "Usage: " << argv[0] << " <user> <pwd> [ <file> ]\n";
        exit(1);
    }
    
    std::string user(argv[1]);
    std::string pwd(argv[2]);

    std::string oFile("testfile.txt");
    if (argc > 2) {
        oFile = std::string(argv[3]);
        std::cerr << "File to upload is " << oFile << '\n';
    } else {
        std::ofstream oFhdl(oFile);
        oFhdl << "Hola, mundo!\n";
        oFhdl.close();
    }
            
    VOSpaceHandler vos(std::string("https://vospace.esac.esa.int/vospace"));
    vos.setAuth(user, pwd);
    if (!vos.uploadFile("queries", oFile)) {
        std::cerr << "ERROR!\n";
    }
    if (!vos.uploadToFile("queries", "this-is-another-file.txt",
                          "This is another file\n")) {
        std::cerr << "ERROR!\n";
    }

    vos.downloadFile("queries", oFile, oFile + ".copy");

    std::string content;
    vos.downloadFromFile("queries", "this-is-another-file.txt", content);
    std::cerr << content << '\n';
    
    return 0;
}
