#ifndef PRIMITIVE_NODE_H
#define PRIMITIVE_NODE_H

#include "RenderNode.h"

class Primitive;

class PrimitiveNode : public RenderNode {
public:
	PrimitiveNode();
	PrimitiveNode(Primitive& primitive);

	virtual void onRenderTraversal(RenderContext& renderContext);

	void setPrimitive(Primitive& primitive);
	Primitive* getPrimitive();
	const Primitive* getPrimitive() const;

primitive:
	Primitive* mPrimitive;
};

#endif // PRIMITIVE_NODE_H
