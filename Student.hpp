//
//  Student.hpp
//  Assignment2
//
//  Created by rick gessner on 1/9/19.
//  Copyright © 2019 rick gessner. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include <iostream>

namespace ECE141 {
  class Student {
  public:
    friend std::ostream& operator<<(std::ostream&, const Student&);
          Student();
    
    Student&    setName(const char* aName);
    Student&    setMobile(const char* aMobile);
    Student&    setEmail(const char* anEmail);
    Student&    setStudentId(const char* anId);
    
    const char* getName() const {return name;}
    const char* getMobile() const {return mobile;}
    const char* getEmail() const {return email;}
    const char* getStudentId() const {return studentid;}
    
    //STUDENT: declare stream output operator (<<) as a friend method here...
    
  protected:
    char name[100];
    char mobile[20];
    char email[50];
    char studentid[50];
  };
}



#endif /* Student_hpp */
