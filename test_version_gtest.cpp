#include <gtest/gtest.h>

#include "lib.h"

TEST(test_valid_version, greater_than_zero) {
	ASSERT_TRUE(version() > 0);
}
