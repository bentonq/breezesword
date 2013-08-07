#ifndef STENCIL_TEST_H
#define STENCIL_TEST_H

#include "RenderStateAttrib.h"

class StencilTest : public RenderStateAttrib {
public:
	virtual void apply() const {}
	virtual RenderStateMask getMask() const { return RENDER_STATE_STENCIL_TEST; }
};

#endif // STENCIL_TEST_H
