#ifndef RENDER_STATE_STACK_H
#define RENDER_STATE_STACK_H

#include <stack>
#include <vector>

class RenderState;

class RenderStateStack {
public:
	void setInitialRenderState(const RenderState& renderState);
	void push(const RenderState& renderState);
	void pop();

	RenderState* getDirtyRenderState() const;

private:
	std::stack<const RenderState&> mStateStack;
	unsigned int mDirtyFlags;
};

#endif // RENDER_STATE_STACK_H
