#include "gtest/gtest.h"
#include "Hierarchie.h"
#include "Ordenamiento.h"

template<class instanceType>
class FixTyped : public testing::Test
{
public:
    FixTyped()
    {
        instance2Test = new instanceType;
    }
    ~FixTyped()
    {
        delete instance2Test;
        instance2Test = NULL;
    }
protected:
    Ordenamiento<int>* instance2Test;
};

typedef testing::Types<Ordenamiento <int> > implementations;

TYPED_TEST_CASE(FixTyped, implementations);
TYPED_TEST(FixTyped, bubbleASC){
    int vec[] = {5, 3, 2, 1, 5, 9};
    this -> instance2Test -> bubbleSort(vec, 6, Ordenamiento<int>::asc);
    for(int i = 0; i < 5; i++){
        EXPECT_LE(vec[i], vec[i+1]);
    }
}

TYPED_TEST(FixTyped, insertASC){

    int vec[] = {5, 3, 2, 1, 5, 9};
    this -> instance2Test -> insercionSort(vec, 6, Ordenamiento<int>::asc);
    for(int i = 0; i < 5; i++){
        EXPECT_LE(vec[i], vec[i+1]);
    }
}

TYPED_TEST(FixTyped, selectASC){

    int vec[] = {5, 3, 2, 1, 5, 9};
    this -> instance2Test -> seleccionSort(vec, 6, Ordenamiento<int>::asc);
    for(int i = 0; i < 5; i++){
        EXPECT_LE(vec[i], vec[i+1]);
    }
}
