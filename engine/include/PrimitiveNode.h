#ifndef PRIMITIVE_NODE_H
#define PRIMITIVE_NODE_H

#include "RenderNode.h"

class PrimitiveNode : public RenderNode {
public:
	virtual void onRenderTraversal(RenderContext* renderContext);
};

#endif // PRIMITIVE_NODE_H
