#include "gtest/gtest.h"
#include "fixtures.h"
#include "time.h"

class TimeTest : public testing::Test
{
public:
    virtual void SetUp(){
        tiempo = time(NULL);
    }
    virtual void TearDown(){
        EXPECT_TRUE((time(NULL) - tiempo) <= 1) << "Time Exceeded";
    }
private:
    time_t tiempo;
};

class AlmacenTest : public TimeTest{
public:

    static Almacen* ptr;
    void SetUp(){
        TimeTest::SetUp();
        ptr->pushBack(1);
    }
    void TearDown(){
        TimeTest::TearDown();
    }
    static void SetUpTestCase(){
       ptr =  new Almacen(10);
    }
    static void TearDownTestCase(){
        delete ptr;
    }

};

Almacen* AlmacenTest::ptr = nullptr;

TEST_F(AlmacenTest, Constructor){
    sleep(3);
    ASSERT_EQ(24, sizeof(*ptr));
}

TEST_F(AlmacenTest, Add){
    sleep(3);
    ptr->pushBack(1);
    ASSERT_EQ(3, ptr->getSize());
}


TEST_F(AlmacenTest, erase){
    sleep(3);
    ptr->pushBack(1);
    ptr->deleteAt(0);
    ASSERT_EQ(4, ptr->getSize());
}
