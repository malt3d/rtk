//
// Created by Mehmet Fatih BAKIR on 31/03/2017.
//

#pragma once

#include <glm/glm.hpp>
#include <vector>
#include <rtk/rtk_fwd.hpp>

namespace RTK_NAMESPACE
{
namespace geometry
{
    RTK_PUBLIC std::vector<glm::vec3> generate_normals(const mesh&);
    RTK_PUBLIC void transform(mesh&, const glm::mat4&);
}
}


