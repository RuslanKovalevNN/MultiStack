#include "MultiStack.h"
#include <gtest.h>

TEST(multistack, can_create_multistack)
{
	ASSERT_NO_THROW(TMultiStack<int> A);
}

TEST(multistack, can_create_multistack)
{
	ASSERT_NO_THROW(TMultiStack<int> A(5, 3));
}

TEST(multistack, can_push_and_pop)
{
	TMultiStack<int> B(9, 3);
	B.Push(3, 0);
	B.Push(33, 1);
	B.Push(333, 2);
	EXPECT_EQ(3, B.Pop(0));
	EXPECT_EQ(33, B.Pop(1));
	EXPECT_EQ(333, B.Pop(2));
}

TEST(multistack, can_push_and_pop_out_of_size)
{
	TMultiStack<int> B(4, 2);
	B.Push(1, 0);
	B.Push(2, 0);
	B.Push(5, 1);
	B.Push(5, 1);
	EXPECT_EQ(4, B.Pop(0));
	EXPECT_EQ(3, B.Pop(0));
	EXPECT_EQ(5, B.Pop(1));
	EXPECT_EQ(5, B.Pop(1));
}

TEST(multistack, can_create_multistack)
{
	ASSERT_NO_THROW(TMultiStack<int> A);
}

TEST(multistack, can_create_multistack)
{
	ASSERT_NO_THROW(TMultiStack<int> A(5, 3));
}

TEST(multistack, is_full)
{
	MultiStack<int>MS(1,1);
	MS.Push(1,0);
	EXPECT_EQ(MS.IsFull(), 1);
}

TEST(multistack, is_empty)
{
	MultiStackk<int> MltStck(1,1);
	MltStck.Push(1, 0);
	MltStck.Pop(0);
	EXPECT_EQ(MltStck.IsEmpty(), 1);
}
