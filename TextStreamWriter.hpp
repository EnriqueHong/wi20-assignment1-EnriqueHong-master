//
//  TextStreamWriter.hpp
//  Assignment2
//
//  Created by rick gessner on 1/9/19.
//  Copyright © 2019 rick gessner. All rights reserved.
//

#ifndef TextStreamWriter_hpp
#define TextStreamWriter_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>

namespace ECE141 {
  class TextStreamWriter {
  public:
    TextStreamWriter(const char* aPath, const char* aFilename);
    int run(int aLineCount);
    
  protected:
    std::ofstream output;
    //STUDENT add data output member here
  };
}

#endif /* TextStreamWriter_hpp */
