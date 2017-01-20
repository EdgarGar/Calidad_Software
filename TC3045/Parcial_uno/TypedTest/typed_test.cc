#include "gtest/gtest.h"
#include "Hierarchie.h"

template <class instanceType>
class FixTyped : public testing::Test
{
public:
  FixTyped()
  {
    instace2Test = new instanceType;
  }
  ~FixTypedConst()
  {
    delete instace2Test;
    instace2Test = NULL;
  }

protected:
  Base* instace2Test;

};

typedef testing::Types<Child1, Child2, Child3> implemetations;

TYPED_TEST_CASE(FixTyped, implemetations);

TYPED_TEST(FixTyped, testName)
{
  EXPECT_EQ(1, this -> instace2Test -> doSomething());
}
