#ifndef RENDER_CONTEXT_H
#define RENDER_CONTEXT_H

#include "RenderStateStack.h"

class RenderState;
class Primitive;

class RenderContext {
public:
	void init(const RenderState& renderState);
	void begin(const RenderState& renderState);
	void end();

	void draw(const Primitive& primitive);

private:
	RenderStateStack mStateStack;
};

#endif // RENDER_CONTEXT_H
