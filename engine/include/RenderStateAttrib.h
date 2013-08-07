#ifndef RENDER_STATE_ATTRIB_H
#define RENDER_STATE_ATTRIB_H

class RenderStateAttrib {
public:
	virtual ~RenderStateAttrib() {}

	virtual void apply() const = 0;
	virtual int getAttribId() const = 0;
};

#endif // RENDER_STATE_ATTRIB_H
