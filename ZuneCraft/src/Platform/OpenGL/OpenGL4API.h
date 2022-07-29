#pragma once
#include "Graphics/RenderAPI.h"
#include "Platform/OpenGL/OpenGLCommon.h"
#include <vector>

namespace ZuneCraft {
	class OpenGL4API : public RenderAPI {
	public:
		OpenGL4API();
		~OpenGL4API();

		Capabilities GetCapabilities() override;

		HShader CreateShader(const std::string& vertex, const std::string& fragment) override;
		HShader CreateShaderFromBinary(Binary& vertexBinary, Binary& fragmentBinary, const std::vector<std::string>& attributes) override;
		void BindShader(HShader hShader) override;
		void SetShaderUniform(HShader hShader, const std::string& name, const glm::vec3& value) override;
		void SetShaderUniform(HShader hShader, const std::string& name, const glm::mat4& value) override;
		void SetShaderUniform(HShader hShader, const std::string& name, int value) override;

		HBuffer CreateBuffer(uint32_t size, BufferType type, BufferUsage usage) override;
		void BindBuffer(HBuffer hBuffer) override;
		void SetBufferLayout(HBuffer hBuffer, HBuffer hParentBuffer, const std::vector<BufferElement>& elements) override;
		void BufferData(HBuffer hBuffer, uint32_t sizeInBytes, uint32_t offset, void* data) override;

		HTexture CreateTexture(uint32_t width, uint32_t height, TextureFormat format, DataType dataType, ClampMode clampMode, FilterMode filterMode) override;
		void BindTexture(HTexture hTexture) override;
		void UploadTextureData(HTexture hTexture, void* data) override;

		void Clear() override;
		void SetClearColor(float r, float g, float b, float a) override;
		void SetViewport(uint32_t x, uint32_t y, uint32_t width, uint32_t height) override;

		void DrawArrays(DrawMode mode, uint32_t offset, uint32_t count) override;
		void DrawArraysInstanced(DrawMode mode, uint32_t offset, uint32_t count, uint32_t instanceCount) override;
		void MultiDrawArraysIndirect(DrawMode mode, uint32_t nRenderCommands) override;

	private:
		std::vector<GLBuffer> m_Buffers;
		std::vector<GLShader> m_Shaders;
		std::vector<GLTexture> m_Textures;
	};
}