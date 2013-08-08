#ifndef VERTEX_ATTRIB_BINDING_H
#define VERTEX_ATTRIB_BINDING_H

#include "RenderStateAttrib.h"

class VertexAttribBinding : public RenderStateAttrib {
public:
	virtual void apply() const {}
	virtual RenderStateMask getMask() const { return RENDER_STATE_VERTEX_ATTRIB_BINDING; }

	VertexAttribBindingMask getBindingMask() const { return mBindingMask; }

private:
	VertexAttribBindingMask mBindingMask;
};

#endif // VERTEX_ATTRIB_BINDING_H
