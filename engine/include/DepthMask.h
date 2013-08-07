#ifndef DEPTH_MASK_H
#define DEPTH_MASK_H

#include "RenderStateAttrib.h"

class DepthMask : public RenderStateAttrib {
public:
	virtual void apply() const {}
	virtual RenderStateMask getMask() const { return RENDER_STATE_DEPTH_MASK; }
};

#endif // DEPTH_MASK_H
