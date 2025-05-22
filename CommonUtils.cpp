#include <string>
#include <vector>
#include <boost/algorithm/string/join.hpp>
#include <boost/algorithm/string.hpp>

class CommonUtils {
public:
    static std::vector<std::string> SplitString(std::string& input, const char delimiter) {
        std::vector<std::string> res;
        boost::algorithm::split(res, input, boost::algorithm::is_any_of(std::string(1, delimiter)));
        return res;
    }

    static std::string JoinString(const std::vector<std::string>& strArray, const char delimiter) {
        using namespace boost::algorithm;
        return join(strArray, std::string(1, delimiter));
    }
};
