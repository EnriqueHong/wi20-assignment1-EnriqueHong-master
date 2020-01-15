//
//  Student.cpp
//  Assignment2
//
//  Created by rick gessner on 1/9/19.
//  Copyright © 2019 rick gessner. All rights reserved.
//

#include "Student.hpp"
#include <iostream>
#include <string>

namespace ECE141 {

  Student::Student(): name("\0"), email("\0"), mobile("\0"), studentid("\0") {
  }
  
  Student& Student::setName(const char* aName) {
    //STUDENT: set the name field here...
    strcpy(name, aName);
    return *this;
  }
  
  Student& Student::setMobile(const char* aMobile) {
    //STUDENT: set the mobile field here...
    strcpy(mobile, aMobile);
    return *this;
  }
  
  Student& Student::setEmail(const char* anEmail) {
    //STUDENT: set the email field here...
    strcpy(email, anEmail);
    return *this;
  }
  
  Student& Student::setStudentId(const char* anId) {
    strcpy(studentid, anId);
    //STUDENT: set the student field here...
    return *this;
  }
  
  //STUDENT: implement the stream output operator (<<) here...
  //         and write your student data to output

  std::ostream& operator<<(std::ostream& aStream, const Student& aStudent) {
    aStream << "\"name\"  : \"" << aStudent.name << "\",\n";
    aStream << "\"email\" : \"" << aStudent.email << "\",\n";
    aStream << "\"mobile\": \"" << aStudent.mobile << "\",\n";
    aStream << "\"pid\"   : \"" << aStudent.studentid << "\"\n";
    return aStream;
  }
}
