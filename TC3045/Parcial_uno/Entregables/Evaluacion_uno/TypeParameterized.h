#include "gtest/gtest.h"
#include "Hierarchie.h"
#include "Ordenamiento.h"

template<class instanceType>
class TypeParameterized : public testing::Test
{
public:
    TypeParameterized()
    {
        instance2Test = new instanceType;
    }
    ~TypeParameterized()
    {
        delete instance2Test;
        instance2Test = NULL;
    }
protected:
    Ordenamiento<int>* instance2Test;
};

TYPED_TEST_CASE_P(TypeParameterized);

TYPED_TEST_P(TypeParameterized, bubbleASC){

    int vec[] = {5, 3, 2, 1, 5, 9;
    this -> instance2Test -> bubbleSort(vec, 6, Ordenamiento<int>::asc);
    for(int i = 0; i < 5; i++){
        EXPECT_LE(vec[i], vec[i+1]);
    }
}

TYPED_TEST_P(TypeParameterized, insertASC){

    int vec[] = {5, 3, 2, 1, 5, 9};
    this -> instance2Test -> insercionSort(vec, 6, Ordenamiento<int>::asc);
    for(int i = 0; i < 5; i++){
        EXPECT_LE(vec[i], vec[i+1]);
    }
}
