#ifndef LIBAUDIOREPLACER_H
#define LIBAUDIOREPLACER_H

#ifdef _WIN32
  #ifdef AUDIOREPLACER_EXPORTS
    #define AUDIOREPLACER_API __declspec(dllexport)
  #else
    #define AUDIOREPLACER_API __declspec(dllimport)
  #endif
#else
  #define AUDIOREPLACER_API __attribute__((visibility("default")))
#endif

#ifdef __cplusplus
extern "C" {
#endif

// ProjectFileUtils
AUDIOREPLACER_API int CountFiles(const std::string& dir);
AUDIOREPLACER_API std::string TruncateDirectory(std::string &dir, const int &dirLevels);
AUDIOREPLACER_API float CalculateCompletion(const std::string &input, const std::string &output);
AUDIOREPLACER_API std::vector<std::string> SortFiles(std::string &dir);
AUDIOREPLACER_API std::vector<std::string> GetAllFiles(std::string &dir);

#ifdef __cplusplus
}
#endif

#endif //LIBAUDIOREPLACER_H
