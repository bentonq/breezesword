#ifndef LINE_WIDTH_H
#define LINE_WIDTH_H

#include "RenderStateAttrib.h"

class LineWidth : public RenderStateAttrib {
public:
	virtual void apply() const {}
	virtual RenderStateMask getMask() const { return RENDER_STATE_LINE_WIDTH; }
};

#endif // LINE_WIDTH_H
