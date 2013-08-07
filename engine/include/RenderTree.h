#ifndef RENDER_TREE_H
#define RENDER_TREE_H

#include "RenderNodeParent.h"

class RenderContext;

class RenderTree : public RenderNodeParent {
public:
	void renderTraversal(RenderContext& renderContext);
};

#endif // RENDER_TREE_H
