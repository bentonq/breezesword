#ifndef BLENDING_H
#define BLENDING_H

#include "RenderStateAttrib.h"

class Blending : public RenderStateAttrib {
public:
	virtual void apply() const {}
	virtual RenderStateMask getMask() const { return RENDER_STATE_BLENDING; }
};

#endif // BLENDING_H
