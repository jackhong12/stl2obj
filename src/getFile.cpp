/*************************************************
 * File: getFile.cpp
 * Auther: Jhen-Hong Huang
 * Date: 2018/11/04
 * 
 *************************************************/
#include "getFile.h"

GetFile::GetFile(string externName, string pathName){
    this->extenName = externName;
    this->pathName = pathName;

    char buffer[1024];
    _chdir(pathName.c_str());
    unsigned long long hFile;
    struct _finddata_t currentFile;
    hFile = _findfirst(externName.c_str(), &currentFile);

    do{
        string bufferExchange = currentFile.name;
        fileName.push_back(bufferExchange);
    }while(hFile != -1 && _findnext(hFile, &currentFile) == 0);
}

void GetFile::show(){
    for(int i = 0; i < fileName.size(); i++){
        cout << fileName.at(i) << endl;
    }
}

vector<string> GetFile::getFileName(){
    return fileName;
}

// int main(){
//     GetFile getfile("*.STL");
//     getfile.show();
// }

