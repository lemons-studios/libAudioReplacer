//
// Created by shob3r on 5/23/25.
//

#ifndef INTERNALUTILS_H
#define INTERNALUTILS_H
#include <string>
#include <vector>
#include <boost/algorithm/string/join.hpp>
#include <boost/algorithm/string.hpp>

static std::vector<std::string> SplitString(std::string& input, const char delimiter) {
    using namespace boost::algorithm;
    using namespace std;

    vector<string> res;
    split(res, input, is_any_of(std::string(1, delimiter)));
    return res;
}

static std::string JoinString(const std::vector<std::string>& strArray, const char delimiter) {
    using namespace boost::algorithm;
    using namespace std;
    return join(strArray, string(1, delimiter));
}

#endif //INTERNALUTILS_H
