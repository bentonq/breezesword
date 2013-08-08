#ifndef RENDER_STATE_STACK_H
#define RENDER_STATE_STACK_H

#include <stack>
#include <vector>
#include "RenderStateMask.h"

class RenderState;

class RenderStateStack {
public:
	void setInitialRenderState(const RenderState& renderState);
	void push(const RenderState& renderState);
	void pop();

	void clearDirtyRenderState();
	RenderState* getDirtyRenderState() const;

private:
	RenderStateMask mDirtyStateMask;
	std::stack<const RenderState&> mStateStack;
};

#endif // RENDER_STATE_STACK_H
