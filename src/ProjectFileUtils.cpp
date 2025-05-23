#include <string>
#include <boost/filesystem.hpp>
#include "../include/LibAudioReplacer.h"
#include "InternalUtils.h"

static char directorySeparator()
{
#ifdef _WIN32
    return '\\';
#else
    return '/';
#endif
}

int CountFiles(const std::string& dir) {
    using namespace boost::filesystem;
    using namespace std;
    return static_cast<int>(count_if(directory_iterator(dir), directory_iterator(), static_cast<bool(*)(const path &)>(is_regular_file)));
}

std::string TruncateDirectory(std::string &dir, const int &dirLevels) {
    using namespace std;
    if (dir.empty() || dirLevels <= 0) return dir;

    vector<string> splitDir = SplitString(dir, directorySeparator());
    int startIndex = static_cast<int>(splitDir.size() - dirLevels);
    if (startIndex < 0 ) startIndex = 0;
    const vector tail(splitDir.begin() + startIndex, splitDir.end());

    return JoinString(tail, directorySeparator());
}

float CalculateCompletion(const std::string &input, const std::string &output) {
    const auto inFiles = static_cast<float>(CountFiles(input));
    const auto outFiles = static_cast<float>(CountFiles(output));

    return (outFiles / (inFiles + outFiles)) * 100;
}

std::vector<std::string> SortFiles(std::string &dir) {
    // To Be Implemented
    return std::vector<std::string>();
}

std::vector<std::string> GetAllFiles(std::string &dir) {
    // To Be Implemented
    return std::vector<std::string>();
}
