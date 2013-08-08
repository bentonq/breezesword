#ifndef TEXTURE_BINDING_H
#define TEXTURE_BINDING_H

#include "RenderStateAttrib.h"

class TextureBinding : public RenderStateAttrib {
public:
	virtual void apply() const {}
	virtual RenderStateMask getMask() const { return RENDER_STATE_TEXTURE_BINDING; }

	TextureBindingMask getBindingMask() const { return mBindingMask; }

private:
	TextureBindingMask mBindingMask;
};

#endif // TEXTURE_BINDING_H
