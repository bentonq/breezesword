#ifndef DEPTH_RANGE_H
#define DEPTH_RANGE_H

#include "RenderStateAttrib.h"

class DepthRange : public RenderStateAttrib {
public:
	virtual void apply() const {}
	virtual RenderStateMask getMask() const { return RENDER_STATE_DEPTH_RANGE; }
};

#endif // DEPTH_RANGE_H
