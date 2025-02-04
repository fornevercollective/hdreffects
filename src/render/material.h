#ifndef MATERIAL_H
#define MATERIAL_H

#include "shader.h"
#include <vector>
#include <algorithm>

class Material {
	public:
		Material(Shader* shader_);
        Material();
		virtual ~Material();

		virtual Shader* Bind();
		virtual void UnBind();
        void AddTexture(Texture* texture);
        void ClearTextures();
        void SetColour(glm::vec4& colour);
        void SetShader(Shader* shader);
	protected:
		Shader* shader;	
        glm::vec4 materialColour;
    private:
        vector<Texture*> textures;
};

#endif
