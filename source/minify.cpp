#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <regex>
using namespace std;

string removeSpaces(string content)
{
  regex exp("[\\t\\n\\s]");
  return regex_replace(content, exp, "");
}

bool saveAllText(string content, string path)
{
  ofstream file;

  file.open(path);

  if (file.is_open())
  {
    file << content;

    file.close();
    return true;
  }
  
  return false;
}

string readAllText(string path)
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
    cout << "readAllText(): Unable to open: " << path << endl;
  }

  return "";
}

int main()
{

  string fileContent = readAllText("source.json");
  string content = removeSpaces(fileContent);

  cout << content << endl;
  saveAllText(content, "source.min.json");

  return 0;
}