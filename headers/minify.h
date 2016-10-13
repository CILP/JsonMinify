#if !defined(_MINIFY_H_)
#define _MINIFY_H_

#include <string>
using namespace std;

class JsonMinify
{
  public:
    string getJSONFromFile(string path);
    bool saveJSONToFile(string path, string content);
    string removeSpaces(string content);
};

#endif