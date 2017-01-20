#include "gtest/gtest.h"
#include "Hierarchie.h"

template <class T>
Base* factoryMethod()
{
  return new T;
}

template <>
Base* factoryMethod<Child3>()
{
  return new Child3(10);
}

template<class T>
class FixTypedConst : public testing::Test
{
protected:
  Base* instace2Test;
public:
  FixTypedConst() : instace2Test(factoryMethod<T>()){}
  virtual ~FixTypedConst()
  {
    delete instace2Test;
    instace2Test = NULL;
  }
};

typedef testing::Types<Child1, Child2, Child3> implemetations;

TYPED_TEST_CASE(FixTypedConst, implemetations);

TYPED_TEST(FixTypedConst, testName)
{
  EXPECT_EQ(1, this -> instace2Test -> doSomething());
}
