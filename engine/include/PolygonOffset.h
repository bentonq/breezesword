#ifndef POLYGON_OFFSET_H
#define POLYGON_OFFSET_H

#include "RenderStateAttrib.h"

class PolygonOffset : public RenderStateAttrib {
public:
	virtual void apply() const {}
	virtual RenderStateMask getMask() const { return RENDER_STATE_POLYGON_OFFSET; }
};

#endif // POLYGON_OFFSET_H
