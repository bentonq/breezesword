#ifndef SCISSOR_TEST_H
#define SCISSOR_TEST_H

#include "RenderStateAttrib.h"

class ScissorTest : public RenderStateAttrib {
public:
	virtual void apply() const {}
	virtual RenderStateMask getMask() const { return RENDER_STATE_SCISSOR_TEST; }
};

#endif // SCISSOR_TEST_H
