#ifndef RENDER_PIPELINE_H
#define RENDER_PIPELINE_H

class Blending;
class ColorMask;
class CullFace;
class DepthBufferTest;
class DepthMask;
class DepthRange;
class FrontFace;
class LineWidth;
class PolygonOffset;
class ScissorTest;
class ShaderProgram;
class StencilMask;
class StencilTest;
class TextureBinding;
class UniformBinding;
class VertexAttribBinding;
class Viewport;
class Primitive;

class RenderPipeline {
public:
	static void SetBlending(const Blending& blending);
	static void SetColorMask(const ColorMask& colorMask);
	static void SetCullFace(const CullFace& cullFace);
	static void SetDepthBufferTest(const DepthBufferTest& depthBufferTest);
	static void SetDepthMask(const DepthMask& depthMask);
	static void SetDepthRange(const DepthRange& depthRange);
	static void SetFrontFace(const FrontFace& frontFace);
	static void SetLineWidth(const LineWidth& lineWidth);
	static void SetPolygonOffset(const PolygonOffset& polygonOffset);
	static void SetScissorTest(const ScissorTest& scissorTest);
	static void SetShaderProgram(const ShaderProgram& shaderProgram);
	static void SetStencilMask(const StencilMask& stencilMask);
	static void SetStencilTest(const StencilTest& stencilTest);
	static void SetTextureBinding(const TextureBinding& textureBinding);
	static void SetUniformBinding(const UniformBinding& uniformBinding);
	static void SetVertexAttribBinding(const VertexAttribBinding& vertexAttribBinding);
	static void SetViewport(const Viewport& viewport);

	static void DrawPrimitive(const Primitive& primitive);
};

#endif // RENDER_PIPELINE_H
