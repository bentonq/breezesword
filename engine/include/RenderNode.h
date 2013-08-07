#ifndef RENDER_NODE_H
#define RENDER_NODE_H

class RenderContext;
class RenderNodeParent;

class RenderNode {
public:
	virtual ~RenderNode() {}

	virtual void onRenderTraversal(RenderContext& renderContext) = 0;

	RenderNodeParent* getParent();
	const RenderNodeParent* getParent() const;

private:
	void setParent(RenderNodeParent& renderNodeParent);
	void clearParent();

private:
	friend class RenderNodeParent;

	RenderNodeParent* mParent;
};

#endif // RENDER_NODE_H
