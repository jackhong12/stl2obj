#ifndef GETFILE_H
#define GETFILE_H

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <io.h>
#include <direct.h>
#include <vector>

using namespace std;

class GetFile{
public:
    GetFile(string externName = "*.*", string pathName = "./");  //read file (讀取檔案類型, 哪個資料夾)
    void show(); //output all file name
    vector<string> getFileName();

private:
    vector<string> fileName;
    string extenName;
    string  pathName;
};

#endif