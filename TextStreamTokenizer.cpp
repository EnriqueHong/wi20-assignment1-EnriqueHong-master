//
//  TextStreamTokenizer.cpp
//  Assignment2
//
//  Created by rick gessner on 1/9/19.
//  Copyright © 2019 rick gessner. All rights reserved.
//

#include "TextStreamTokenizer.hpp"

namespace ECE141 {
  
  TextStreamTokenizer::TextStreamTokenizer(const char* aPath, const char* aFilename) {
    char thePath[512];
    sprintf(thePath, "%s/%s", aPath, aFilename);
    //STUDENT: open your input stream (from thePath) here...
    input.open(thePath);
  }
  
  int TextStreamTokenizer::run(std::ostream& anOutput) {
    
    //STUDENT: implement this method. read numbers from each line, sum them, send result to output...
    int first, second, cntLines=0;
    while (input >> first >> second) {
      anOutput << first << "+" << second
        << "=" << first + second << std::endl;
      cntLines++;
    }
    std::cout << "Number of Lines: " << cntLines << std::endl;
    return cntLines;
  }
  
}
