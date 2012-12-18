/* 
  Author:  Oliver SPryn
  Course:  COMP 244, Database Management
  Date:    11 October 2012 
  Description:  This is a custom exception to the be thrown
                in the case of a database query failure.
*/ 

#include "BaseException.h"

class DatabaseQueryFailedException : public BaseException {
public:
	DatabaseQueryFailedException(string error);
};