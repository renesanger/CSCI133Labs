#include <iostream>
#include "catch.hpp"
#include "digits.h"


TEST_CASE("Digit Functions Tests ","[sumdigits, getDigit, numDigit]"){

  SECTION("This is section 1"){
  
  CHECK(sumdigits(123) == 6);
  CHECK(sumdigits(1234) == 1);
  CHECK(sumdigits(456789) == 3);
  INFO("test the negatives --> fail");
  for (int i=-10; i > -20; i--){
      CHECK(sumdigits(i) == 10);
    } 
  }

  SECTION("This is section 2"){

	CHECK(getDigit(123,0) == 1);
	CHECK(getDigit(123,2) == 3);
	INFO("test the negatives --> fail");
	for (int i=-10; i > -20; i--){
      		CHECK(getDigit(i,2) == 9);
    	}  
  }

	SECTION("This is section 3"){

	CHECK(numDigits(5) == 1);
	CHECK(numDigits(12345) == 5);
	INFO("test the negatives --> fail");
	for (int i=-10; i > -20; i--){
      		CHECK(numDigits(i) == 3);
    	}  
  }
  
}
