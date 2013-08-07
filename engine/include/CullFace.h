#ifndef CULL_FACE_H
#define CULL_FACE_H

#include "RenderStateAttrib.h"

class CullFace : public RenderStateAttrib {
public:
	virtual void apply() const {}
	virtual RenderStateMask getMask() const { return RENDER_STATE_CULL_FACE; }
};

#endif // CULL_FACE_H
