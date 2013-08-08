#ifndef RENDER_STATE_MASK_H
#define RENDER_STATE_MASK_H

#include <cstdint>

typedef int32_t UniformBindingMask;
typedef int32_t TextureBindingMask;
typedef int32_t VertexAttribBindingMask;

typedef int32_t RenderStateMask;

enum {
	RENDER_STATE_DEPTH_RANGE           = 1 << 0,
	RENDER_STATE_VIEWPORT              = 1 << 1,
	RENDER_STATE_LINE_WIDTH            = 1 << 2,
	RENDER_STATE_FRONT_FACE            = 1 << 3,
	RENDER_STATE_CULL_FACE             = 1 << 4,
	RENDER_STATE_POLYGON_OFFSET        = 1 << 5,
	RENDER_STATE_SCISSOR_TEST          = 1 << 6,
	RENDER_STATE_STENCIL_TEST          = 1 << 7,
	RENDER_STATE_DEPTH_BUFFER_TEST     = 1 << 8,
	RENDER_STATE_BLENDING              = 1 << 9,
	RENDER_STATE_DEPTH_MASK            = 1 << 10,
	RENDER_STATE_COLOR_MASK            = 1 << 11,
	RENDER_STATE_STENCIL_MASK          = 1 << 12,
	RENDER_STATE_SHADER_PROGRAM        = 1 << 13,
	RENDER_STATE_UNIFORM_BINDING       = 1 << 14,
	RENDER_STATE_TEXTURE_BINDING       = 1 << 15,
	RENDER_STATE_VERTEX_ATTRIB_BINDING = 1 << 16
};

#endif // RENDER_STATE_MASK_H
