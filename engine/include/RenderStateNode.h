#ifndef RENDER_STATE_NODE_H
#define RENDER_STATE_NODE_H

#include "RenderNode.h"
#include "RenderNodeParent.h"

class RenderStateNode : public RenderNode, public RenderNodeParent {
public:
	virtual void onRenderTraversal(RenderContext* renderContext);
};

#endif // RENDER_STATE_NODE_H
