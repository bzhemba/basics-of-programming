#ifndef LAB2_WORKWFILES_H
#define LAB2_WORKWFILES_H
#include <iostream>
#include <fstream>
#include <string>
#include <exception>
using namespace std;
class WorkwFiles{
private:
    fstream file;
public:
    WorkwFiles(){};

    ~WorkwFiles() {
    }
    void open(string name) {
        file.open(name, std::ios::app);
        if(...)
        throw std::exception();
    }
    void close(){
        file.close();
    }
    bool isOpen(){
        return file.is_open();
    }
    void writing(char* p, int l) {
        file.write(p, l);
    }
    void writingstr(string p) {
        file << p << endl;
    }
    void writingint(int num){
        file << "\n" << num << "\n";
    }
    void writingf(float num){
        file << num;
    }

};


#endif //LAB2_WORKWFILES_H
