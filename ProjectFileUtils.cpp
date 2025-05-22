#include "ProjectFileUtils.h"
#include <string>
#include <boost/filesystem.hpp>
#include <boost/lambda/bind.hpp>

class ProjectFileUtils {

public:
    static int count_files(const std::string& dir) {
        using namespace boost::filesystem;
        return static_cast<int>(std::count_if(directory_iterator(dir), directory_iterator(), static_cast<bool(*)(const path &)>(is_regular_file)));
    }
};
