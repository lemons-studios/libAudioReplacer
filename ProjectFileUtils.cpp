#include "ProjectFileUtils.hpp"
#include <string>
#include <boost/filesystem.hpp>
#include "CommonUtils.hpp"


class ProjectFileUtils {
public:
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
    static std::string TruncateDirectory(std::string &dir, int &dirLevels) {
        using namespace std;
        if (dir.empty() || dirLevels <= 0) return dir;
        vector<string> splitDir = SplitString(dir, directorySeparator());

    }
};
