/***********************************************
* File: stlToObjAllFile.cpp
* Auther: Jhen-Hong Huang
* Date: 2018/11/14
************************************************/
#include <iostream>
#include <sstream>
#include <fstream>

#include "vectornd.h"
#include "geometry.h"
#include "importstl.h"
#include "exportobj.h"
#include "getFile.h"

using namespace std;

int main(){
    vector<string> fileName;
    GetFile getFile("*.STL");
    getFile.show();
    fileName = getFile.getFileName();

    //cout << fileName.at(0).length();
    for(int i = 0; i < fileName.size(); i++){
        Geometry tessel;
        tessel.visit(ImportSTL(fileName.at(i).c_str()));
        string objFileName = fileName.at(i).substr(0, fileName.at(i).length() - 3) + "obj";
        tessel.visit(ExportOBJ(objFileName.c_str()));
    }
    

    
    //Geometry tessel;
    
}
