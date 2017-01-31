
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_tty_vty_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_tty_vty_cfg {

Vty::VtyPools::VtyPool::VtyPool()
    :
    	pool_name{YType::str, "pool-name"},
	 first_vty{YType::int32, "first-vty"},
	 last_vty{YType::int32, "last-vty"},
	 line_template{YType::str, "line-template"},
	 none{YType::str, "none"}
{
    yang_name = "vty-pool"; yang_parent_name = "vty-pools";
}

Vty::VtyPools::VtyPool::~VtyPool()
{
}

bool Vty::VtyPools::VtyPool::has_data() const
{
    return pool_name.is_set
	|| first_vty.is_set
	|| last_vty.is_set
	|| line_template.is_set
	|| none.is_set;
}

bool Vty::VtyPools::VtyPool::has_operation() const
{
    return is_set(operation)
	|| is_set(pool_name.operation)
	|| is_set(first_vty.operation)
	|| is_set(last_vty.operation)
	|| is_set(line_template.operation)
	|| is_set(none.operation);
}

std::string Vty::VtyPools::VtyPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vty-pool" <<"[pool-name='" <<pool_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Vty::VtyPools::VtyPool::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tty-vty-cfg:vty/vty-pools/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_name.is_set || is_set(pool_name.operation)) leaf_name_data.push_back(pool_name.get_name_leafdata());
    if (first_vty.is_set || is_set(first_vty.operation)) leaf_name_data.push_back(first_vty.get_name_leafdata());
    if (last_vty.is_set || is_set(last_vty.operation)) leaf_name_data.push_back(last_vty.get_name_leafdata());
    if (line_template.is_set || is_set(line_template.operation)) leaf_name_data.push_back(line_template.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vty::VtyPools::VtyPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vty::VtyPools::VtyPool::get_children()
{
    return children;
}

void Vty::VtyPools::VtyPool::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pool-name")
    {
        pool_name = value;
    }
    if(value_path == "first-vty")
    {
        first_vty = value;
    }
    if(value_path == "last-vty")
    {
        last_vty = value;
    }
    if(value_path == "line-template")
    {
        line_template = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Vty::VtyPools::VtyPools()
{
    yang_name = "vty-pools"; yang_parent_name = "vty";
}

Vty::VtyPools::~VtyPools()
{
}

bool Vty::VtyPools::has_data() const
{
    for (std::size_t index=0; index<vty_pool.size(); index++)
    {
        if(vty_pool[index]->has_data())
            return true;
    }
    return false;
}

bool Vty::VtyPools::has_operation() const
{
    for (std::size_t index=0; index<vty_pool.size(); index++)
    {
        if(vty_pool[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vty::VtyPools::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vty-pools";

    return path_buffer.str();

}

EntityPath Vty::VtyPools::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tty-vty-cfg:vty/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vty::VtyPools::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vty-pool")
    {
        for(auto const & c : vty_pool)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vty::VtyPools::VtyPool>();
        c->parent = this;
        vty_pool.push_back(std::move(c));
        children[segment_path] = vty_pool.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vty::VtyPools::get_children()
{
    for (auto const & c : vty_pool)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Vty::VtyPools::set_value(const std::string & value_path, std::string value)
{
}

Vty::Vty()
    :
    vty_pools(std::make_unique<Vty::VtyPools>())
{
    vty_pools->parent = this;
    children["vty-pools"] = vty_pools.get();

    yang_name = "vty"; yang_parent_name = "Cisco-IOS-XR-tty-vty-cfg";
}

Vty::~Vty()
{
}

bool Vty::has_data() const
{
    return (vty_pools !=  nullptr && vty_pools->has_data());
}

bool Vty::has_operation() const
{
    return is_set(operation)
	|| (vty_pools !=  nullptr && vty_pools->has_operation());
}

std::string Vty::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tty-vty-cfg:vty";

    return path_buffer.str();

}

EntityPath Vty::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vty::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vty-pools")
    {
        if(vty_pools != nullptr)
        {
            children["vty-pools"] = vty_pools.get();
        }
        else
        {
            vty_pools = std::make_unique<Vty::VtyPools>();
            vty_pools->parent = this;
            children["vty-pools"] = vty_pools.get();
        }
        return children.at("vty-pools");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vty::get_children()
{
    if(children.find("vty-pools") == children.end())
    {
        if(vty_pools != nullptr)
        {
            children["vty-pools"] = vty_pools.get();
        }
    }

    return children;
}

void Vty::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Vty::clone_ptr()
{
    return std::make_unique<Vty>();
}


}
}

