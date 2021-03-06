//
// Created by Mehmet Fatih BAKIR on 30/03/2017.
//

#pragma once

#include <rtk/rtk_fwd.hpp>
#include <glm/glm.hpp>
#include <gsl/span>
#include <boost/shared_array.hpp>

namespace rtk
{
namespace geometry
{
class RTK_PUBLIC path
{
    std::size_t size;
    boost::shared_array<glm::vec3> vertices;

public:
    path();

    void set_vertices(gsl::span<const glm::vec3>);
    gsl::span<const glm::vec3> get_vertices() const;
};
}
}

