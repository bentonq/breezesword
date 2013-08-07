#ifndef RENDER_NODE_PARENT_H
#define RENDER_NODE_PARENT_H

#include <vector>

class RenderNode;

class RenderNodeParent {
public:
	virtual ~RenderNodeParent() {}

	void addRenderNode(RenderNode& renderNode);
	void addRenderNode(RenderNode& renderNode, int index);
	void removeRenderNode(const RenderNode& renderNode);
	void removeRenderNodeAt(int index);
	void removeRenderNodeRange(int start, int count);
	void removeAllRenderNodes();

	int indexOfChild(const RenderNode& renderNode) const;
	int getChildCount() const;
	RenderNode* getChildAt(int index);
	const RenderNode* getChildAt(int index) const;

private:
	std::vector<RenderNode*> mChildren;
};

#endif // RENDER_NODE_PARENT_H
