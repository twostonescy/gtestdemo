//
// Created by wrightchen on 2021/10/3.
//
#include "../math/add.h"
#include "gmock/gmock.h"
//#include "gtest/gtest.h"
class OrgClassMock : public OrgClass {
 public:
  OrgClassMock() : OrgClass() {}
  MOCK_METHOD(int, add, (int t1, int t2), (override));
};

TEST(NullTest, NullTest) { EXPECT_TRUE(true); }

TEST(as, App01) {
  OrgClassMock org_mock;
  EXPECT_CALL(org_mock, add).WillOnce(testing::Return(5));
  App a;
  a.o_ = &org_mock;

  int s = a.addx2(1, 2);

  EXPECT_TRUE(s == 10);
}