#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>

#include "gtest/gtest.h"

TEST(sample_test_case, sample_test)
{
    EXPECT_EQ(1, 1);
}

int main(int argc, char** argv) 
{ 
    testing::InitGoogleTest(&argc, argv); 
    RUN_ALL_TESTS();
    
    system("pause");

    return 0;
}
