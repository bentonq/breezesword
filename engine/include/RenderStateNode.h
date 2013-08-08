#ifndef RENDER_STATE_NODE_H
#define RENDER_STATE_NODE_H

#include "RenderNode.h"
#include "RenderNodeParent.h"

class RenderState;

class RenderStateNode : public RenderNode, public RenderNodeParent {
public:
	RenderStateNode();
	RenderStateNode(RenderState& renderState);

	virtual void onRenderTraversal(RenderContext& renderContext);

	void setRenderState(RenderState& renderState);
	RenderState* getRenderState();
	const RenderState* getRenderState() const;

private:
	RenderState* mRenderState;
};

#endif // RENDER_STATE_NODE_H
