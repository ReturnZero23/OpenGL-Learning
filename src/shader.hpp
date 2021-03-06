#ifndef SHADER_H
#define SHADER_H
#include <string>
#include "glm/glm.hpp"

class Shader{
public:
    unsigned int ID;

    Shader(const char* vertexShaderPath, const char* fragmentShaderPath);

    void use();

    void setBool(const std::string& name,const bool value);
    void setInt(const std::string& name,const int value);
    void setFloat(const std::string& name, const float value);
    void setMatrix4fv(const std::string& name, const glm::mat4 &mat);
};

#endif //END SHADER_H