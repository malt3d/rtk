//
// Created by fatih on 23.03.2017.
//

#ifndef RENDERER_PROGRAM_HPP
#define RENDERER_PROGRAM_HPP

#include <glad/glad.h>
#include <rtk/rtk_fwd.hpp>
#include <string>
#include <glm/vec3.hpp>
#include <glm/mat4x4.hpp>
#include <gsl/span>

namespace RTK_NAMESPACE
{
namespace gl
{
class RTK_PUBLIC program {
    GLuint id;

public:
    program();
    program(const program&) = delete;
    program(program&& rhs)
    {
        id = std::exchange(rhs.id, 0);
    }
    ~program();

    void attach(const vertex_shader &);
    void attach(const fragment_shader &);
    void attach(const geometry_shader &);

    void set_variable(const std::string& name, const glm::vec3&);
    void set_variable(const std::string& name, int);
    void set_variable(const std::string& name, float);
    void set_variable(const std::string& name, const glm::mat4&);

    void set_array(const std::string& name, gsl::span<const glm::mat4>);

    void link();

    program& operator=(const program&) = delete;
    program& operator=(program&& rhs)
    {
        id = std::exchange(rhs.id, 0);
	    return *this;
    }

    void use() const;
};
}
}


#endif //RENDERER_PROGRAM_HPP
