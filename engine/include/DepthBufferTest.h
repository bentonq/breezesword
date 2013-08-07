#ifndef DEPTH_BUFFER_TEST_H
#define DEPTH_BUFFER_TEST_H

#include "RenderStateAttrib.h"

class DepthBufferTest : public RenderStateAttrib {
public:
	virtual void apply() const {}
	virtual RenderStateMask getMask() const { return RENDER_STATE_DEPTH_BUFFER_TEST; }
};

#endif // DEPTH_BUFFER_TEST_H
