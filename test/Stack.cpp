#include "gtest/gtest.h"
#include "../src/Stack.h"

TEST(StackTest, Push) {
  Stack* s = new Stack();
  s->push(6);

  EXPECT_EQ(6, s->peek());
 	delete s;
}
TEST(StackTest, Resize) {
	Stack* t = new Stack();
	for (int i = 1; i<11; ++i) {
		t->push(i);	
	}
	t->push(11);
	EXPECT_EQ(11, t->peek());

	delete t;
}


