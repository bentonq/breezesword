#ifndef RENDER_STATE_H
#define RENDER_STATE_H

#include <cstdint>
#include <vector>
#include "RenderStateAttrib.h"

class RenderState {
public:
	void addAttrib(const RenderStateAttrib& attrib);
	void removeAttrib(const RenderStateAttrib& attrib);

	RenderStateMask getMask() const;

private:
	RenderStateMask mStateMask;
	std::vector<const RenderStateAttrib&> mAttribs;
};

#endif // RENDER_STATE_H
