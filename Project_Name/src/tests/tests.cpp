#include "sortingLib.hpp"
#include "filesLib.hpp"
#include "gtest/gtest.h"

/*	Case 1:	Sorted sequence	*/
TEST(SortingTest, sortedInput) {

	EXPECT_TRUE(TestFile("docs/testCase1.txt"));
}

/*	Case 2:	Reversed sequence	*/
TEST(SortingTest, reversedInput) {

	EXPECT_TRUE(TestFile("docs/testCase2.txt"));
}

/*	Case 3:	Identical sequence	*/
TEST(SortingTest, identicalInput) {

	EXPECT_TRUE(TestFile("docs/testCase3.txt"));
}

/*	Case 4: Sequence with negative numbers	*/
TEST(SortingTest, negativeInput) {

	EXPECT_TRUE(TestFile("docs/testCase4.txt"));
}

/*	Case 0:	Random sequence	*/

TEST(SortingTest, RandomInput) {

	CreatDataFile("docs/testCase5.txt");

	EXPECT_TRUE(TestFile("docs/testCase5.txt"));
}


int main(int argc, char* argv[])

{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();

}