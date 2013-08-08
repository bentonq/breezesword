#include "RenderStateStack.h"
#include "gtest/gtest.h"

TEST(TestRenderStateStack, InitialState) {
	RenderStateStack rss;
	EXPECT_EQ(0, rss.getDirtyRenderState()->getRenderStateMask());
}

TEST(TestRenderStateStack, SetInit) {
	RenderStateStack rss;
	RenderState rs;
	DepthRange dr;
	Viewport vp;
	LineWidth lw;

	rs.addAttrib(dr);
	rs.addAttrib(vp);
	rs.addAttrib(lw);
	rss.setInitialRenderState(rs);
	EXPECT_EQ(0, rss.getDirtyRenderState()->getRenderStateMask());
}

TEST(TestRenderStateStack, Push) {
	RenderStateStack rss;
	RenderState rs;
	DepthRange dr;
	Viewport vp;
	LineWidth lw;

	rs.addAttrib(dr);
	rs.addAttrib(vp);
	rs.addAttrib(lw);
	rss.setInitialRenderState(rs);

	RenderState rs2;
	Viewport vp2;
	LineWidth lw2;
	FrontFace ff2;

	rs2.addAttrib(vp2);
	rs2.addAttrib(lw2);
	rs2.addAttrib(ff2);
	rss.push(rs2);
	RenderStateMask rsm = rs2.getRenderStateMask();
	EXPECT_EQ(rsm, rss.getDirtyRenderState()->getRenderStateMask());

	RenderState rs3;
	LineWidth lw3;
	FrontFace ff3;
	CullFace cf3;

	rs3.addAttrib(lw3);
	rs3.addAttrib(ff3);
	rs3.addAttrib(cf3);
	rss.push(rs3);
	RenderStateMask rsm = rs2.getRenderStateMask();
	rsm |= rs3.getRenderStateMask();
	EXPECT_EQ(rsm, rss.getDirtyRenderState()->getRenderStateMask());
}

TEST(TestRenderStateStack, Pop) {
	RenderStateStack rss;
	rss.pop();

	EXPECT_EQ(0, rss.getDirtyRenderState()->getRenderStateMask());

	RenderState rs;
	DepthRange dr;
	Viewport vp;
	LineWidth lw;

	rs.addAttrib(dr);
	rs.addAttrib(vp);
	rs.addAttrib(lw);
	rss.push(rs);

	RenderState rs2;
	Viewport vp2;
	LineWidth lw2;
	FrontFace ff2;

	rs2.addAttrib(vp2);
	rs2.addAttrib(lw2);
	rs2.addAttrib(ff2);
	rss.push(rs2);
	rss.pop();

	RenderStateMask rsm = rs.getRenderStateMask();
	EXPECT_EQ(rsm, rss.getDirtyRenderState()->getRenderStateMask());

	rss.push(rs2);
	rss.clearDirtyRenderState();
	EXPECT_EQ(0, rss.getDirtyRenderState()->getRenderStateMask());

	rss.pop();
	rsm = rs2.getRenderStateMask();
	EXPECT_EQ(rsm, rss.getDirtyRenderState()->getRenderStateMask());
}
