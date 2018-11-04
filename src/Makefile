CXX = g++ -std=c++11
RM = rm -f
CPPFLAGS = -O3

all: stl2obj

stl2obj : stlToObjAllFile.o importstl.o exportobj.o getFile.o
	$(CXX) -o stlToObjAllFile stlToObjAllFile.o importstl.o exportobj.o getFile.o

stl2obj.o : stlToObjAllFile.cpp importstl.cpp exportobj.cpp vectornd.h geometry.h getFile.h
	$(CXX) -c stlToObjAllFile.cpp

importstl.o : importstl.cpp importstl.h
	$(CXX) -c importstl.cpp

exportobj.o : exportobj.cpp exportobj.h
	$(CXX) -c exportobj.cpp

getFile.o : getFile.cpp getFile.h
	$(CXX) -c getFile.cpp


clean :
	$(RM) stl2obj stl2obj.o importstl.o exportobj.o *.o
