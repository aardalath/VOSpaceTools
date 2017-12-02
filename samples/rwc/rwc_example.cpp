/* Compile & Run:
   clang++ -std=c++11 -fsanitize=address  -o libcurl_test libcurl_test.cpp -lcurl   && ASAN_OPTIONS="detect_leaks=1" ./libcurl_test
*/

#include "rwc.h"

#include <iostream>

int main()
{
    RWC rwc;

    std::string url("http://www.google.com/");
    std::string testString("LoL");
    std::string content;
    std::string result;

    //std::string srcFile("./rwc.cpp");
    //rwc.storeFileIntoString(srcFile, result);
    //std::cerr << result << '\n';

    rwc.getContent(url, content, result);
    std::cerr << content << '\n' << result << '\n';

    rwc.postContent(url, testString, result);
    std::cerr << result << '\n';

    return 0;
}
