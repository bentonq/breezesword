#ifndef RENDER_CONTEXT_H
#define RENDER_CONTEXT_H

class RenderTarget;
class RenderState;
class RenderStateStack;

class RenderContext {
public:
	void begin(const RenderState& renderState);
	void end();

	void draw(const Primitive& primitive);
};

#endif // RENDER_CONTEXT_H
