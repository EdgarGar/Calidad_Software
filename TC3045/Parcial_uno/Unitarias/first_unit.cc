#include "first.h"
#include "gtest/gtest.h"


TEST(factorial, positivos)
{
  ASSERT_EQ(1,1);
  ASSERT_EQ(120,factorial(5));
}

TEST(factorial, negativo)
{
  ASSERT_EQ(0, factorial(-4));
  ASSERT_EQ(0, factorial(-6));
}

TEST(factorial, grandes)
{
  ASSERT_EQ(362800, factorial(10));
}

TEST(factorial, cero)
{
  ASSERT_EQ(1, factorial(0));
}
