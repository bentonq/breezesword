#ifndef STENCIL_MASK_H
#define STENCIL_MASK_H

#include "RenderStateAttrib.h"

class StencilMask : public RenderStateAttrib {
public:
	virtual void apply() const {}
	virtual RenderStateMask getMask() const { return RENDER_STATE_STENCIL_MASK; }
};

#endif // STENCIL_MASK_H
