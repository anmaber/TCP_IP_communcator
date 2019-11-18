#include <gmock/gmock.h>

using testing::Eq;

class SimpleTests : public testing::Test
{};

TEST_F(SimpleTests, add_two_to_two_equals_four)
{
    ASSERT_THAT(2+2, Eq(4));
}

