#ifndef FRONT_FACE_H
#define FRONT_FACE_H

#include "RenderStateAttrib.h"

class FrontFace : public RenderStateAttrib {
public:
	virtual void apply() const {}
	virtual RenderStateMask getMask() const { return RENDER_STATE_FRONT_FACE; }
};

#endif // FRONT_FACE_H
