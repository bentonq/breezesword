#ifndef UNIFORM_BINDING_H
#define UNIFORM_BINDING_H

#include "RenderStateAttrib.h"

class UniformBinding : public RenderStateAttrib {
public:
	virtual void apply() const {}
	virtual RenderStateMask getMask() const { return RENDER_STATE_UNIFORM_BINDING; }
};

#endif // UNIFORM_BINDING_H
