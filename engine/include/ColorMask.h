#ifndef COLOR_MASK_H
#define COLOR_MASK_H

#include "RenderStateAttrib.h"

class ColorMask : public RenderStateAttrib {
public:
	virtual void apply() const {}
	virtual RenderStateMask getMask() const { return RENDER_STATE_COLOR_MASK; }
};

#endif // COLOR_MASK_H
