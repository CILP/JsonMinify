#include <iostream>
#include "../headers/minify.h"
using namespace std;

int main(int argc, char* argv[])
{

  string sourceFile = "",
         destinationFile = "";
  JsonMinify json;


  if (argc > 1)
  {

    for (int i = 1; i < argc; i+=2)
    {
      
      if (string(argv[i]) == "-i")
      {
        sourceFile = argv[i+1];
        cout << argv[i+1] << endl;
      }
      else if (string(argv[i]) == "-o")
      {
        destinationFile = argv[i+1];
        cout << argv[i+1] << endl;
      }
    }

    if (sourceFile != "" && destinationFile != "")
    {
      string content = json.getJSONFromFile(sourceFile);
      string minified = json.removeSpaces(content);

      if (json.saveJSONToFile(destinationFile, minified))
      {
        cout << "Archivo: " << destinationFile << " guardado correctamente" << endl; 
      } 
      else 
      {
        cout << "No se pudo crear el archivo minificado" << endl;
      }
    }
  }
  else
  {
    cout << "Es necesario ingresar la ruta del archivo a minificar" << endl;
    cout << "Es necesario ingresar la ruta y nombre en donde guardar" << endl;
  }
  
  return 0;
}