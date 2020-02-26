#include <gmock/gmock.h>

struct DummyTest : public ::testing::Test
{};


TEST_F(DummyTest, test1)
{
    ASSERT_TRUE(false);
}
