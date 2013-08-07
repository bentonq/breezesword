#include "RenderStateStack.h"
#include "gtest/gtest.h"

TEST(TestRenderStateStack, InitialState) {
	RenderStateStack rss;
	RenderState* rs = rss.getDirtyRenderState();
	EXPECT_EQ(0, rs->getRenderStateMask());
}
