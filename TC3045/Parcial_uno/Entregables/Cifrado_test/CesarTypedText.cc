#include "gtest/gtest.h"
#include "Cesar.h"
#include <vector>

template<class instanceType>
class FixTyped : public testing::Test
{
public:
  FixTyped()
  {
    instance2Test = new instanceType;
  }
  virtual ~FixTyped()
  {
    delete instance2Test;
    instance2Test = NULL;
  }
protected:
  desCesar* instance2Test;
};

typedef testing::Types<Cesar> implementations;

TYPED_TEST_CASE(FixTyped, implementations);


TYPED_TEST(FixTyped, testName)
{
  std::vector<std::string> x;
  x.push_back("CLEAR");
  EXPECT_EQ(true,this -> instance2Test -> descypher("RLCOPY",x));
}
