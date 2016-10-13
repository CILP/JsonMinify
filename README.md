# JsonMinify
JsonMinify tool

## Prerequisites
Have the [g++ compiler](https://gcc.gnu.org/)

## Build the project
Run the next commands on a terminal
``` 
sudo ./build.sh 
```
If the previous command doesn't work, run the next
``` 
sudo bash ./build.sh 
```

## Run the tool
For minify a json file you need to pass the source file with -i flag
and the target path(with name and extension .json) with the flag -o
``` 
sudo ./json-minify -i source/source.json -o source.min.json 
```

## Thats all, you have your new minified .json file :) 
