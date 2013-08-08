#ifndef RENDER_STATE_ATTRIB_H
#define RENDER_STATE_ATTRIB_H

#include "RenderStateMask.h"

class RenderStateAttrib {
public:
	virtual ~RenderStateAttrib() {}

	virtual void apply() const = 0;
	virtual RenderStateMask getMask() const = 0;
};

#endif // RENDER_STATE_ATTRIB_H
