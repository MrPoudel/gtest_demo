#include <gtest/gtest.h>
#include "friends_lib.h"
 
TEST(AddCentsTest, CoversPositiveResults) 
{ 
    Cents cents1(6);
    Cents cents2(2);
    Cents centsSum = cents1 + cents2;
    
    ASSERT_EQ(8, centsSum.getCents());    
} 

TEST(AddCentsTest, CoversNegativeResults) 
{ 
   /*TODO:*/
	ASSERT_EQ(1, 1);  
} 


TEST(SubtractionCentsTest, CoversPositiveResults) 
{ 
    Cents cents1(6);
    Cents cents2(2);
    Cents centsSub = cents1 - cents2;  
    ASSERT_EQ(4, centsSub.getCents());
} 

TEST(SubtractionCentsTest, CoversNegativeResults) 
{ 
   /*TODO:*/
	ASSERT_EQ(1, 1); 
} 

int main(int argc, char **argv) 
{

    std::cout << "Execution of tests started using gtest framework." << std::endl;
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}