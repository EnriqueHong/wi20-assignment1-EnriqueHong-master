//
//  TextStreamWriter.cpp
//  Assignment2
//
//  Created by rick gessner on 1/9/19.
//  Copyright © 2019 rick gessner. All rights reserved.
//

#include "TextStreamWriter.hpp"

namespace ECE141 {

  TextStreamWriter::TextStreamWriter(const char* aPath, const char* aFilename) {
    char thePath[512];
    sprintf(thePath, "%s/%s", aPath, aFilename);  //this is the full path+filename
    
    //STUDENT: add logic to open your output stream here...
    output.open(thePath);
  }
  
  int TextStreamWriter::run(int aLineCount) {
    
    //STUDENT: implement your output logic here... 2 ints (separated by a space) per line...
    for (int i = 0; i < aLineCount; ++i) {
      output << rand() % 10000 << ' ' << rand() % 10000 << '\n';
    }
    output.close();
    return aLineCount; //return the number of lines written...
  }

}
