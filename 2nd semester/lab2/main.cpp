#include <iostream>
#include "WorkwFiles.h"
int main() {
    auto file = new WorkwFiles();
    try {
        file->open();
    } catch (exception &e) {
        cout << "opening file error" << e.what() << endl;
    }
    string nameoffile;
    cin >> nameoffile;
    file->open(nameoffile);
    cout << file->isOpen();
    string s = "Hello world!";
    int num = 5;
    float n = 1.45;
    file->writingstr(s);
    file->writingint(num);
    file->writingf(n);
}
