#include "RenderNode.h"
#include "RenderNodeParent.h"
#include "gtest/gtest.h"

class TestRenderNodeParent : public testing::Test {
public:
	class TestNode : public RenderNode {
	public:
		virtual void onRenderTraversal(RenderContext* renderContext) {}
	};

protected:
	virtual void SetUp() {
	}

protected:
	RenderNodeParent mParent;
	TestNode mChild0;
	TestNode mChild1;
	TestNode mChild2;
};


TEST_F(TestRenderNodeParent, InitialState) {
	EXPECT_EQ(0, mParent.getChildCount());
	EXPECT_EQ(NULL, mParent.getChildAt(0));
	EXPECT_EQ(-1, mParent.indexOfChild(mChild0));
	EXPECT_EQ(NULL, child0.getParent());
}

TEST_F(TestRenderNodeParent, Add) {
	mParent.addRenderNode(mChild0);
	EXPECT_EQ(1, mParent.getChildCount());
	EXPECT_EQ(&mChild0, mParent.getChildAt(0));
	EXPECT_EQ(0, mParent.indexOfChild(mChild0));
	EXPECT_EQ(&mParent, child0.getParent());
}

TEST_F(TestRenderNodeParent, Remove) {
	mParent.removeRenderNode(mChild0);
	EXPECT_EQ(0, mParent.getChildCount());
	EXPECT_EQ(NULL, mParent.getChildAt(0));
	EXPECT_EQ(-1, mParent.indexOfChild(mChild0));
	EXPECT_EQ(NULL, child0.getParent());

	mParent.addRenderNode(mChild0);
	mParent.removeRenderNode(mChild1);
	EXPECT_EQ(1, mParent.getChildCount());
	EXPECT_EQ(&mChild0, mParent.getChildAt(0));
	EXPECT_EQ(0, mParent.indexOfChild(mChild0));
	EXPECT_EQ(&mParent, child0.getParent());
	EXPECT_EQ(NULL, child1.getParent());

	mParent.removeRenderNode(mChild0);
	EXPECT_EQ(0, mParent.getChildCount());
	EXPECT_EQ(NULL, mParent.getChildAt(0));
	EXPECT_EQ(-1, mParent.indexOfChild(mChild0));
	EXPECT_EQ(NULL, child0.getParent());
}

TEST_F(TestRenderNodeParent, AddAt) {
	mParent.addRenderNode(mChild1);
	mParent.addRenderNode(mChild0, -1);
	mParent.addRenderNode(mChild0, 2);
	EXPECT_EQ(1, mParent.getChildCount());
	EXPECT_EQ(&mChild1, mParent.getChildAt(0));
	EXPECT_EQ(-1, mParent.indexOfChild(mChild0));
	EXPECT_EQ(0, mParent.indexOfChild(mChild1));
	EXPECT_EQ(NULL, child0.getParent());
	EXPECT_EQ(&mParent, child1.getParent());

	mParent.addRenderNode(mChild0, 0);
	EXPECT_EQ(2, mParent.getChildCount());
	EXPECT_EQ(&mChild0, mParent.getChildAt(0));
	EXPECT_EQ(&mChild1, mParent.getChildAt(1));
	EXPECT_EQ(0, mParent.indexOfChild(mChild0));
	EXPECT_EQ(1, mParent.indexOfChild(mChild1));
	EXPECT_EQ(&mParent, child0.getParent());
	EXPECT_EQ(&mParent, child1.getParent());

	mParent.addRenderNode(mChild2, 2);
	EXPECT_EQ(3, mParent.getChildCount());
	EXPECT_EQ(&mChild0, mParent.getChildAt(0));
	EXPECT_EQ(&mChild1, mParent.getChildAt(1));
	EXPECT_EQ(&mChild2, mParent.getChildAt(2));
	EXPECT_EQ(0, mParent.indexOfChild(mChild0));
	EXPECT_EQ(1, mParent.indexOfChild(mChild1));
	EXPECT_EQ(2, mParent.indexOfChild(mChild2));
	EXPECT_EQ(&mParent, child0.getParent());
	EXPECT_EQ(&mParent, child1.getParent());
	EXPECT_EQ(&mParent, child2.getParent());
}

TEST_F(TestRenderNodeParent, RemoveAt) {
	mParent.removeRenderNodeAt(0);
	EXPECT_EQ(0, mParent.getChildCount());
	EXPECT_EQ(NULL, mParent.getChildAt(0));

	mParent.addRenderNode(mChild0);
	mParent.addRenderNode(mChild1);
	mParent.addRenderNode(mChild2);
	mParent.removeRenderNodeAt(-1);
	mParent.removeRenderNodeAt(3);
	EXPECT_EQ(3, mParent.getChildCount());
	EXPECT_EQ(&mChild0, mParent.getChildAt(0));
	EXPECT_EQ(&mChild1, mParent.getChildAt(1));
	EXPECT_EQ(&mChild2, mParent.getChildAt(2));
	EXPECT_EQ(0, mParent.indexOfChild(mChild0));
	EXPECT_EQ(1, mParent.indexOfChild(mChild1));
	EXPECT_EQ(2, mParent.indexOfChild(mChild2));
	EXPECT_EQ(&mParent, child0.getParent());
	EXPECT_EQ(&mParent, child1.getParent());
	EXPECT_EQ(&mParent, child2.getParent());

	mParent.removeRenderNodeAt(0);
	EXPECT_EQ(2, mParent.getChildCount());
	EXPECT_EQ(&mChild1, mParent.getChildAt(0));
	EXPECT_EQ(&mChild2, mParent.getChildAt(1));
	EXPECT_EQ(NULL, mParent.getChildAt(2));
	EXPECT_EQ(-1, mParent.indexOfChild(mChild0));
	EXPECT_EQ(0, mParent.indexOfChild(mChild1));
	EXPECT_EQ(1, mParent.indexOfChild(mChild2));
	EXPECT_EQ(NULL, child0.getParent());
	EXPECT_EQ(&mParent, child1.getParent());
	EXPECT_EQ(&mParent, child2.getParent());
}

TEST_F(TestRenderNodeParent, RemoveRange) {
	mParent.removeRenderNodeRange(1, 1);
	EXPECT_EQ(0, mParent.getChildCount());
	EXPECT_EQ(NULL, mParent.getChildAt(0));

	mParent.addRenderNode(mChild0);
	mParent.addRenderNode(mChild1);
	mParent.addRenderNode(mChild2);
	mParent.removeRenderNodeRange(0, -1);
	mParent.removeRenderNodeRange(-2, 2);
	mParent.removeRenderNodeRange(3, 2);
	EXPECT_EQ(3, mParent.getChildCount());
	EXPECT_EQ(&mChild0, mParent.getChildAt(0));
	EXPECT_EQ(&mChild1, mParent.getChildAt(1));
	EXPECT_EQ(&mChild2, mParent.getChildAt(2));
	EXPECT_EQ(0, mParent.indexOfChild(mChild0));
	EXPECT_EQ(1, mParent.indexOfChild(mChild1));
	EXPECT_EQ(2, mParent.indexOfChild(mChild2));
	EXPECT_EQ(&mParent, child0.getParent());
	EXPECT_EQ(&mParent, child1.getParent());
	EXPECT_EQ(&mParent, child2.getParent());

	mParent.removeRenderNodeRange(1, 1);
	EXPECT_EQ(3, mParent.getChildCount());
	EXPECT_EQ(&mChild0, mParent.getChildAt(0));
	EXPECT_EQ(&mChild2, mParent.getChildAt(1));
	EXPECT_EQ(NULL, mParent.getChildAt(2));
	EXPECT_EQ(0, mParent.indexOfChild(mChild0));
	EXPECT_EQ(-1, mParent.indexOfChild(mChild1));
	EXPECT_EQ(1, mParent.indexOfChild(mChild2));
	EXPECT_EQ(&mParent, child0.getParent());
	EXPECT_EQ(NULL, child1.getParent());
	EXPECT_EQ(&mParent, child2.getParent());
}

TEST_F(TestRenderNodeParent, RemoveAll) {
	mParent.removeall();
	EXPECT_EQ(0, mParent.getChildCount());
	EXPECT_EQ(NULL, mParent.getChildAt(0));

	mParent.addRenderNode(mChild0);
	mParent.addRenderNode(mChild1);
	mParent.addRenderNode(mChild2);
	mParent.removeall();
	EXPECT_EQ(0, mParent.getChildCount());
	EXPECT_EQ(NULL, mParent.getChildAt(0));
	EXPECT_EQ(NULL, mParent.getChildAt(1));
	EXPECT_EQ(NULL, mParent.getChildAt(2));
	EXPECT_EQ(-1, mParent.indexOfChild(mChild0));
	EXPECT_EQ(-1, mParent.indexOfChild(mChild1));
	EXPECT_EQ(-1, mParent.indexOfChild(mChild2));
	EXPECT_EQ(NULL, child0.getParent());
	EXPECT_EQ(NULL, child1.getParent());
	EXPECT_EQ(NULL, child2.getParent());
}

