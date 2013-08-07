#ifndef VIEWPORT_H
#define VIEWPORT_H

#include "RenderStateAttrib.h"

class Viewport : public RenderStateAttrib {
public:
	virtual void apply() const {}
	virtual RenderStateMask getMask() const { return RENDER_STATE_VIEWPORT; }
};

#endif // VIEWPORT_H
