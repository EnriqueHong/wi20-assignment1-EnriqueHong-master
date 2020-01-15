//
//  TextStreamLineReader.cpp
//  Assignment2
//
//  Created by rick gessner on 1/9/19.
//  Copyright © 2019 rick gessner. All rights reserved.
//

#include "TextStreamLineReader.hpp"
#include <string>

namespace ECE141 {
  
  TextStreamLineReader::TextStreamLineReader(const char* aPath, const char* aFilename) {
    char thePath[512];
    sprintf(thePath, "%s/%s", aPath, aFilename);
    //STUDENT construct your input stream here...
    input.open(thePath);
  }
  
  int TextStreamLineReader::run(std::ostream& anOutput) {
    
    //STUDENT: read each line in your input stream, parse the int's, write result to anOutput...
    int theFirst, theSecond, cntLines=0;
    std::string theLine;
    while (std::getline(input, theLine)) {
      std::istringstream theStrStrm(theLine);
      if (theStrStrm >> theFirst >> theSecond) {
        anOutput << theFirst << "+" << theSecond << "=" << theFirst + theSecond << std::endl;
        cntLines++;
      }
    }
    return cntLines;
  }
}
