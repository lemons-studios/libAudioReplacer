#include "ProjectFileUtils.hpp"
#include <string>
#include <boost/filesystem.hpp>

class ProjectFileUtils {
public:
    static int count_files(const std::string& dir) {
        using namespace boost::filesystem;
        return static_cast<int>(std::count_if(directory_iterator(dir), directory_iterator(), static_cast<bool(*)(const path &)>(is_regular_file)));
    }
};
