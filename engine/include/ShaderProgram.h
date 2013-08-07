#ifndef SHADER_PROGRAM_H
#define SHADER_PROGRAM_H

#include "RenderStateAttrib.h"

class ShaderProgram : public RenderStateAttrib {
public:
	virtual void apply() const {}
	virtual RenderStateMask getMask() const { return RENDER_STATE_SHADER_PROGRAM; }
};

#endif // SHADER_PROGRAM_H
