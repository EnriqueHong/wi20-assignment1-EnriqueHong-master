//
//  JSONStreamWriter.cpp
//  Assignment2
//
//  Created by rick gessner on 1/9/19.
//  Copyright © 2019 rick gessner. All rights reserved.
//

#include "JSONStreamWriter.hpp"
#include "Student.hpp"

namespace ECE141 {
    
  JSONStreamWriter::JSONStreamWriter(const char* aPath, const char* aFilename) {
    char thePath[512];
    sprintf(thePath, "%s/%s", aPath, aFilename);
    //STUDENT: open your output stream here...
    output.open(thePath);
  }
  
  int JSONStreamWriter::run() {
    
    ECE141::Student theStudent;
    
    //STUDENT: Initialize the fields of your Student object here...
    theStudent.setEmail("xuhong@ucsd.edu");
    theStudent.setMobile("8583463986");
    theStudent.setName("Xuezhu Hong");
    theStudent.setStudentId("A53283056");
    //STUDENT: finish implementation in the Student class (see operator<<)
    
    output << theStudent;
    output.close();

    return 0;
  }
}
