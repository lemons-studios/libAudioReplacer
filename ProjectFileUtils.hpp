#ifndef LIBAUDIOREPLACER_LIBRARY_H
#define LIBAUDIOREPLACER_LIBRARY_H
#include <string>
#include <vector>
using namespace std;

extern "C" int CountFiles(string dir);
extern "C" string TruncateDirectory(string dir, char delimiter);
extern "C" vector<string> SortFiles(string &dir);

#endif //LIBAUDIOREPLACER_LIBRARY_H