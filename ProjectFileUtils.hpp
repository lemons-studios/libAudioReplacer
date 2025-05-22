#ifndef LIBAUDIOREPLACER_LIBRARY_H
#define LIBAUDIOREPLACER_LIBRARY_H
#include <string>

extern "C" int CountFiles(std::string dir);
extern "C" std::string TruncateDirectory(std::string dir, char delimiter);

#endif //LIBAUDIOREPLACER_LIBRARY_H