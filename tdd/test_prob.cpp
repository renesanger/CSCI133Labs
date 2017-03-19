#include "catch.hpp"
#include "basicmath.h"
#include "prob.h"

TEST_CASE("prob tests"){
  // REQUIRE(divide(10,2) == 5); // like CHECK but stops after the first failure
  SECTION("Test for factorial function"){
  
  	CHECK(fact(5) == 120);
  	CHECK(fact(6) == 720);
	INFO("n cannot be negative number");
  	CHECK(fact(-1) == 0);
	CHECK(fact(0) == 1);
 	CHECK(fact(1) == 1);

  }

  SECTION("Tests for combination function"){
    
    	CHECK(combo(5,2) == 10);
  	CHECK(combo(4,2) == 6);
  	CHECK(combo(5,3) == 10);
	INFO("n cannot be less than k");
	CHECK(combo(0,3) == 1);
 	CHECK(combo(5,0) == 1);
 	CHECK(combo(5,1) == 5);
//CHECK(combo(9,2) == combo(9,7);
    }  
    

  
}
