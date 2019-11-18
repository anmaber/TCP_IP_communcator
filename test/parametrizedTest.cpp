#include <gmock/gmock.h>

using testing::Eq;

struct TestArgs
{
    int firstVal;
    int secVal;
    int expectedVal;
};

class BaseFixture : public testing::Test
{};

class ParametrizedTests : public BaseFixture,
                    public ::testing::WithParamInterface<TestArgs>
{};

TEST_P(ParametrizedTests, add_two_to_two_equals_four)
{
    ASSERT_THAT(GetParam().firstVal+GetParam().secVal, GetParam().expectedVal);
}

INSTANTIATE_TEST_CASE_P(BaseFixture, ParametrizedTests,
    ::testing::Values(
        TestArgs{2, 2, 4},
        TestArgs{2, 2, 5}));
