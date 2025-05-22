#include "ProjectFileUtils.hpp"
#include <string>
#include <boost/filesystem.hpp>
#include "CommonUtils.hpp"


class ProjectFileUtils {
public:
    ProjectFileUtils() = default;

    static char directorySeparator()
    {
#ifdef _WIN32
        return '\\';
#else
        return '/';
#endif
    }

    static int CountFiles(const std::string& dir) {
        using namespace boost::filesystem;
        using namespace std;
        return static_cast<int>(count_if(directory_iterator(dir), directory_iterator(), static_cast<bool(*)(const path &)>(is_regular_file)));
    }

    static std::string TruncateDirectory(std::string &dir, const int &dirLevels) {
        using namespace std;
        if (dir.empty() || dirLevels <= 0) return dir;

        vector<string> splitDir = SplitString(dir, directorySeparator());
        int startIndex = static_cast<int>(splitDir.size() - dirLevels);
        if (startIndex < 0 ) startIndex = 0;
        const vector tail(splitDir.begin() + startIndex, splitDir.end());

        return JoinString(tail, directorySeparator());
    }

    static float CalculateCompletion(const std::string &input, const std::string &output) {
        const auto inFiles = static_cast<float>(CountFiles(input));
        const auto outFiles = static_cast<float>(CountFiles(output));

        return (outFiles / (inFiles + outFiles)) * 100;
    }

    static std::vector<std::string> SortFiles(std::string &dir) {

    }


private:
    static std::vector<std::string> GetAllFiles(std::string &dir) {

    }
};
