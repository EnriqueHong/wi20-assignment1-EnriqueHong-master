//
//  TextStreamLineReader.hpp
//  Assignment2
//
//  Created by rick gessner on 1/9/19.
//  Copyright © 2019 rick gessner. All rights reserved.
//

#ifndef TextStreamLineReader_hpp
#define TextStreamLineReader_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>

namespace ECE141 {
  class TextStreamLineReader {
  public:
        TextStreamLineReader(const char* aPath, const char* aFilename);
    int run(std::ostream& anOutput);
    
  protected:
    //STUDENT add input stream  here
    std::ifstream input;
  };
}

#endif /* TextStreamLineReader_hpp */
