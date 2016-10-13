#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <regex>

#include "minify.h"

using namespace std;

string JsonMinify::getJSONFromFile(string path)
{
  ifstream file(path);
  stringstream stream;
  string line;

  if (file.is_open())
  {

    while(getline(file, line))
    {
      stream << line;
    }

    file.close();
    return stream.str();
  }
  else 
  {
    cout << "JsonMinify::getJSONFromFile(): Unable to open: " << path << endl;
  }

  return "";
}

bool JsonMinify::saveJSONToFile(string path, string content)
{
  ofstream file;

  file.open(path);

  if (file.is_open())
  {
    file << content;

    file.close();
    return true;
  }
  else 
  {
    cout << "JsonMinify::saveJSONToFile(): Unable to save: " << path << endl;
  }
  
  return false;
}

string JsonMinify::removeSpaces(string content)
{
  regex exp("[\\t\\n\\s]");
  return regex_replace(content, exp, "");
}