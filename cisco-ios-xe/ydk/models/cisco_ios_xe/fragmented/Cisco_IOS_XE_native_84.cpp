
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_84.hpp"
#include "Cisco_IOS_XE_native_85.hpp"
#include "Cisco_IOS_XE_native_121.hpp"
#include "Cisco_IOS_XE_native_99.hpp"
#include "Cisco_IOS_XE_native_95.hpp"
#include "Cisco_IOS_XE_native_147.hpp"
#include "Cisco_IOS_XE_native_102.hpp"
#include "Cisco_IOS_XE_native_142.hpp"
#include "Cisco_IOS_XE_native_140.hpp"
#include "Cisco_IOS_XE_native_97.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::Srlg()
    :
    exclude(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::Exclude>())
{
    exclude->parent = this;

    yang_name = "srlg"; yang_parent_name = "backup";
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::~Srlg()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::has_data() const
{
    return (exclude !=  nullptr && exclude->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::has_operation() const
{
    return is_set(operation)
	|| (exclude !=  nullptr && exclude->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude")
    {
        if(exclude == nullptr)
        {
            exclude = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::Exclude>();
        }
        return exclude;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exclude != nullptr)
    {
        children["exclude"] = exclude;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::Exclude::Exclude()
    :
    force{YType::empty, "force"},
    preferred{YType::empty, "preferred"}
{
    yang_name = "exclude"; yang_parent_name = "srlg";
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::Exclude::~Exclude()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::Exclude::has_data() const
{
    return force.is_set
	|| preferred.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::Exclude::has_operation() const
{
    return is_set(operation)
	|| is_set(force.operation)
	|| is_set(preferred.operation);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::Exclude::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::Exclude::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/srlg/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (force.is_set || is_set(force.operation)) leaf_name_data.push_back(force.get_name_leafdata());
    if (preferred.is_set || is_set(preferred.operation)) leaf_name_data.push_back(preferred.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::Exclude::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::Exclude::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::Exclude::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "force")
    {
        force = value;
    }
    if(value_path == "preferred")
    {
        preferred = value;
    }
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Timers()
    :
    removal(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal>())
{
    removal->parent = this;

    yang_name = "timers"; yang_parent_name = "backup";
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::~Timers()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::has_data() const
{
    return (removal !=  nullptr && removal->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::has_operation() const
{
    return is_set(operation)
	|| (removal !=  nullptr && removal->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "removal")
    {
        if(removal == nullptr)
        {
            removal = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal>();
        }
        return removal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(removal != nullptr)
    {
        children["removal"] = removal;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Removal()
    :
    unused{YType::uint32, "unused"}
{
    yang_name = "removal"; yang_parent_name = "timers";
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::~Removal()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::has_data() const
{
    return unused.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::has_operation() const
{
    return is_set(operation)
	|| is_set(unused.operation);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removal";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/timers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unused.is_set || is_set(unused.operation)) leaf_name_data.push_back(unused.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unused")
    {
        unused = value;
    }
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::TunnelNum()
    :
    min(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min>())
{
    min->parent = this;

    yang_name = "tunnel-num"; yang_parent_name = "backup";
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::~TunnelNum()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::has_data() const
{
    return (min !=  nullptr && min->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::has_operation() const
{
    return is_set(operation)
	|| (min !=  nullptr && min->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-num";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min")
    {
        if(min == nullptr)
        {
            min = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min>();
        }
        return min;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(min != nullptr)
    {
        children["min"] = min;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min::Min()
{
    yang_name = "min"; yang_parent_name = "tunnel-num";
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min::~Min()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min::has_data() const
{
    for (std::size_t index=0; index<tnr_range.size(); index++)
    {
        if(tnr_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min::has_operation() const
{
    for (std::size_t index=0; index<tnr_range.size(); index++)
    {
        if(tnr_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/tunnel-num/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tnr-range")
    {
        for(auto const & c : tnr_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min::TnrRange>();
        c->parent = this;
        tnr_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tnr_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min::TnrRange::TnrRange()
    :
    tnr_range{YType::uint16, "tnr-range"},
    max{YType::empty, "max"}
{
    yang_name = "tnr-range"; yang_parent_name = "min";
}

Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min::TnrRange::~TnrRange()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min::TnrRange::has_data() const
{
    return tnr_range.is_set
	|| max.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min::TnrRange::has_operation() const
{
    return is_set(operation)
	|| is_set(tnr_range.operation)
	|| is_set(max.operation);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min::TnrRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tnr-range" <<"[tnr-range='" <<tnr_range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min::TnrRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/backup/tunnel-num/min/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tnr_range.is_set || is_set(tnr_range.operation)) leaf_name_data.push_back(tnr_range.get_name_leafdata());
    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min::TnrRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min::TnrRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::Min::TnrRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tnr-range")
    {
        tnr_range = value;
    }
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Mpls::TrafficEng::AutoTunnel::Mesh::Mesh()
    :
    tunnel_num(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum>())
{
    tunnel_num->parent = this;

    yang_name = "mesh"; yang_parent_name = "auto-tunnel";
}

Native::Mpls::TrafficEng::AutoTunnel::Mesh::~Mesh()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Mesh::has_data() const
{
    return (tunnel_num !=  nullptr && tunnel_num->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Mesh::has_operation() const
{
    return is_set(operation)
	|| (tunnel_num !=  nullptr && tunnel_num->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Mesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Mesh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Mesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-num")
    {
        if(tunnel_num == nullptr)
        {
            tunnel_num = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum>();
        }
        return tunnel_num;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Mesh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tunnel_num != nullptr)
    {
        children["tunnel-num"] = tunnel_num;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Mesh::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::TunnelNum()
    :
    min(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min>())
{
    min->parent = this;

    yang_name = "tunnel-num"; yang_parent_name = "mesh";
}

Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::~TunnelNum()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::has_data() const
{
    return (min !=  nullptr && min->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::has_operation() const
{
    return is_set(operation)
	|| (min !=  nullptr && min->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-num";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/mesh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min")
    {
        if(min == nullptr)
        {
            min = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min>();
        }
        return min;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(min != nullptr)
    {
        children["min"] = min;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min::Min()
{
    yang_name = "min"; yang_parent_name = "tunnel-num";
}

Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min::~Min()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min::has_data() const
{
    for (std::size_t index=0; index<mesh_range.size(); index++)
    {
        if(mesh_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min::has_operation() const
{
    for (std::size_t index=0; index<mesh_range.size(); index++)
    {
        if(mesh_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/mesh/tunnel-num/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mesh-range")
    {
        for(auto const & c : mesh_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min::MeshRange>();
        c->parent = this;
        mesh_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mesh_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min::MeshRange::MeshRange()
    :
    mesh_range{YType::uint16, "mesh-range"},
    max{YType::empty, "max"}
{
    yang_name = "mesh-range"; yang_parent_name = "min";
}

Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min::MeshRange::~MeshRange()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min::MeshRange::has_data() const
{
    return mesh_range.is_set
	|| max.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min::MeshRange::has_operation() const
{
    return is_set(operation)
	|| is_set(mesh_range.operation)
	|| is_set(max.operation);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min::MeshRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-range" <<"[mesh-range='" <<mesh_range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min::MeshRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/mesh/tunnel-num/min/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mesh_range.is_set || is_set(mesh_range.operation)) leaf_name_data.push_back(mesh_range.get_name_leafdata());
    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min::MeshRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min::MeshRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::Min::MeshRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mesh-range")
    {
        mesh_range = value;
    }
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Primary()
    :
    onehop{YType::empty, "onehop"}
    	,
    config(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config>())
	,timers(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers>())
	,tunnel_num(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum>())
{
    config->parent = this;

    timers->parent = this;

    tunnel_num->parent = this;

    yang_name = "primary"; yang_parent_name = "auto-tunnel";
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::~Primary()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::has_data() const
{
    return onehop.is_set
	|| (config !=  nullptr && config->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (tunnel_num !=  nullptr && tunnel_num->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::has_operation() const
{
    return is_set(operation)
	|| is_set(onehop.operation)
	|| (config !=  nullptr && config->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (tunnel_num !=  nullptr && tunnel_num->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Primary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (onehop.is_set || is_set(onehop.operation)) leaf_name_data.push_back(onehop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config>();
        }
        return config;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "tunnel-num")
    {
        if(tunnel_num == nullptr)
        {
            tunnel_num = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum>();
        }
        return tunnel_num;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(tunnel_num != nullptr)
    {
        children["tunnel-num"] = tunnel_num;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "onehop")
    {
        onehop = value;
    }
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Config()
    :
    mpls(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_>())
	,unnumbered_interface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface>())
{
    mpls->parent = this;

    unnumbered_interface->parent = this;

    yang_name = "config"; yang_parent_name = "primary";
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::~Config()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::has_data() const
{
    return (mpls !=  nullptr && mpls->has_data())
	|| (unnumbered_interface !=  nullptr && unnumbered_interface->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::has_operation() const
{
    return is_set(operation)
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (unnumbered_interface !=  nullptr && unnumbered_interface->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_>();
        }
        return mpls;
    }

    if(child_yang_name == "unnumbered-interface")
    {
        if(unnumbered_interface == nullptr)
        {
            unnumbered_interface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface>();
        }
        return unnumbered_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(unnumbered_interface != nullptr)
    {
        children["unnumbered-interface"] = unnumbered_interface;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::Mpls_()
    :
    ip{YType::empty, "ip"}
{
    yang_name = "mpls"; yang_parent_name = "config";
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::~Mpls_()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::has_data() const
{
    return ip.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::UnnumberedInterface()
    :
    controller{YType::str, "controller"},
    interface{YType::str, "interface"},
    tunnel{YType::uint32, "Tunnel"},
    tunnel_tp{YType::uint16, "Tunnel-tp"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtualportgroup{YType::uint8, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"},
    vpn{YType::uint32, "VPN"}
{
    yang_name = "unnumbered-interface"; yang_parent_name = "config";
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::~UnnumberedInterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::has_data() const
{
    return controller.is_set
	|| interface.is_set
	|| tunnel.is_set
	|| tunnel_tp.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| vpn.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(controller.operation)
	|| is_set(interface.operation)
	|| is_set(tunnel.operation)
	|| is_set(tunnel_tp.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| is_set(vpn.operation);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-interface";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller.is_set || is_set(controller.operation)) leaf_name_data.push_back(controller.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (tunnel_tp.is_set || is_set(tunnel_tp.operation)) leaf_name_data.push_back(tunnel_tp.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (vpn.is_set || is_set(vpn.operation)) leaf_name_data.push_back(vpn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "controller")
    {
        controller = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "Tunnel-tp")
    {
        tunnel_tp = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
    if(value_path == "VPN")
    {
        vpn = value;
    }
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Timers()
    :
    removal(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal>())
{
    removal->parent = this;

    yang_name = "timers"; yang_parent_name = "primary";
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::~Timers()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::has_data() const
{
    return (removal !=  nullptr && removal->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::has_operation() const
{
    return is_set(operation)
	|| (removal !=  nullptr && removal->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "removal")
    {
        if(removal == nullptr)
        {
            removal = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal>();
        }
        return removal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(removal != nullptr)
    {
        children["removal"] = removal;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::Removal()
    :
    rerouted{YType::uint32, "rerouted"}
{
    yang_name = "removal"; yang_parent_name = "timers";
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::~Removal()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::has_data() const
{
    return rerouted.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::has_operation() const
{
    return is_set(operation)
	|| is_set(rerouted.operation);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removal";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/timers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rerouted.is_set || is_set(rerouted.operation)) leaf_name_data.push_back(rerouted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rerouted")
    {
        rerouted = value;
    }
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::TunnelNum()
    :
    min(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min>())
{
    min->parent = this;

    yang_name = "tunnel-num"; yang_parent_name = "primary";
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::~TunnelNum()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::has_data() const
{
    return (min !=  nullptr && min->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::has_operation() const
{
    return is_set(operation)
	|| (min !=  nullptr && min->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-num";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min")
    {
        if(min == nullptr)
        {
            min = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min>();
        }
        return min;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(min != nullptr)
    {
        children["min"] = min;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min::Min()
{
    yang_name = "min"; yang_parent_name = "tunnel-num";
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min::~Min()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min::has_data() const
{
    for (std::size_t index=0; index<tnr_range.size(); index++)
    {
        if(tnr_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min::has_operation() const
{
    for (std::size_t index=0; index<tnr_range.size(); index++)
    {
        if(tnr_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/tunnel-num/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tnr-range")
    {
        for(auto const & c : tnr_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min::TnrRange>();
        c->parent = this;
        tnr_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tnr_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min::TnrRange::TnrRange()
    :
    tnr_range{YType::uint16, "tnr-range"},
    max{YType::empty, "max"}
{
    yang_name = "tnr-range"; yang_parent_name = "min";
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min::TnrRange::~TnrRange()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min::TnrRange::has_data() const
{
    return tnr_range.is_set
	|| max.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min::TnrRange::has_operation() const
{
    return is_set(operation)
	|| is_set(tnr_range.operation)
	|| is_set(max.operation);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min::TnrRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tnr-range" <<"[tnr-range='" <<tnr_range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min::TnrRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/tunnel-num/min/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tnr_range.is_set || is_set(tnr_range.operation)) leaf_name_data.push_back(tnr_range.get_name_leafdata());
    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min::TnrRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min::TnrRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::Min::TnrRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tnr-range")
    {
        tnr_range = value;
    }
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Mpls::TrafficEng::DsTe::DsTe()
    :
    bc_model(std::make_shared<Native::Mpls::TrafficEng::DsTe::BcModel>())
	,mode(std::make_shared<Native::Mpls::TrafficEng::DsTe::Mode>())
	,te_classes(nullptr) // presence node
{
    bc_model->parent = this;

    mode->parent = this;

    yang_name = "ds-te"; yang_parent_name = "traffic-eng";
}

Native::Mpls::TrafficEng::DsTe::~DsTe()
{
}

bool Native::Mpls::TrafficEng::DsTe::has_data() const
{
    return (bc_model !=  nullptr && bc_model->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (te_classes !=  nullptr && te_classes->has_data());
}

bool Native::Mpls::TrafficEng::DsTe::has_operation() const
{
    return is_set(operation)
	|| (bc_model !=  nullptr && bc_model->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (te_classes !=  nullptr && te_classes->has_operation());
}

std::string Native::Mpls::TrafficEng::DsTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ds-te";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::DsTe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::DsTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bc-model")
    {
        if(bc_model == nullptr)
        {
            bc_model = std::make_shared<Native::Mpls::TrafficEng::DsTe::BcModel>();
        }
        return bc_model;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Mpls::TrafficEng::DsTe::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "te-classes")
    {
        if(te_classes == nullptr)
        {
            te_classes = std::make_shared<Native::Mpls::TrafficEng::DsTe::TeClasses>();
        }
        return te_classes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::DsTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bc_model != nullptr)
    {
        children["bc-model"] = bc_model;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(te_classes != nullptr)
    {
        children["te-classes"] = te_classes;
    }

    return children;
}

void Native::Mpls::TrafficEng::DsTe::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::DsTe::BcModel::BcModel()
    :
    mam{YType::empty, "mam"}
{
    yang_name = "bc-model"; yang_parent_name = "ds-te";
}

Native::Mpls::TrafficEng::DsTe::BcModel::~BcModel()
{
}

bool Native::Mpls::TrafficEng::DsTe::BcModel::has_data() const
{
    return mam.is_set;
}

bool Native::Mpls::TrafficEng::DsTe::BcModel::has_operation() const
{
    return is_set(operation)
	|| is_set(mam.operation);
}

std::string Native::Mpls::TrafficEng::DsTe::BcModel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bc-model";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::DsTe::BcModel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/ds-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mam.is_set || is_set(mam.operation)) leaf_name_data.push_back(mam.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::DsTe::BcModel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::DsTe::BcModel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::DsTe::BcModel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mam")
    {
        mam = value;
    }
}

Native::Mpls::TrafficEng::DsTe::Mode::Mode()
    :
    ietf{YType::empty, "ietf"},
    migration{YType::empty, "migration"}
{
    yang_name = "mode"; yang_parent_name = "ds-te";
}

Native::Mpls::TrafficEng::DsTe::Mode::~Mode()
{
}

bool Native::Mpls::TrafficEng::DsTe::Mode::has_data() const
{
    return ietf.is_set
	|| migration.is_set;
}

bool Native::Mpls::TrafficEng::DsTe::Mode::has_operation() const
{
    return is_set(operation)
	|| is_set(ietf.operation)
	|| is_set(migration.operation);
}

std::string Native::Mpls::TrafficEng::DsTe::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::DsTe::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/ds-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ietf.is_set || is_set(ietf.operation)) leaf_name_data.push_back(ietf.get_name_leafdata());
    if (migration.is_set || is_set(migration.operation)) leaf_name_data.push_back(migration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::DsTe::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::DsTe::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::DsTe::Mode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ietf")
    {
        ietf = value;
    }
    if(value_path == "migration")
    {
        migration = value;
    }
}

Native::Mpls::TrafficEng::DsTe::TeClasses::TeClasses()
    :
    te_mode__config_te_class(std::make_shared<Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass>())
{
    te_mode__config_te_class->parent = this;

    yang_name = "te-classes"; yang_parent_name = "ds-te";
}

Native::Mpls::TrafficEng::DsTe::TeClasses::~TeClasses()
{
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::has_data() const
{
    return (te_mode__config_te_class !=  nullptr && te_mode__config_te_class->has_data());
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::has_operation() const
{
    return is_set(operation)
	|| (te_mode__config_te_class !=  nullptr && te_mode__config_te_class->has_operation());
}

std::string Native::Mpls::TrafficEng::DsTe::TeClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-classes";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::DsTe::TeClasses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/ds-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::DsTe::TeClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-Mode__config-te-class")
    {
        if(te_mode__config_te_class == nullptr)
        {
            te_mode__config_te_class = std::make_shared<Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass>();
        }
        return te_mode__config_te_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::DsTe::TeClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(te_mode__config_te_class != nullptr)
    {
        children["te-Mode__config-te-class"] = te_mode__config_te_class;
    }

    return children;
}

void Native::Mpls::TrafficEng::DsTe::TeClasses::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeMode__ConfigTeClass()
    :
    list{YType::empty, "list"}
    	,
    te_class(std::make_shared<Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass>())
{
    te_class->parent = this;

    yang_name = "te-Mode__config-te-class"; yang_parent_name = "te-classes";
}

Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::~TeMode__ConfigTeClass()
{
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::has_data() const
{
    return list.is_set
	|| (te_class !=  nullptr && te_class->has_data());
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::has_operation() const
{
    return is_set(operation)
	|| is_set(list.operation)
	|| (te_class !=  nullptr && te_class->has_operation());
}

std::string Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-Mode__config-te-class";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/ds-te/te-classes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.operation)) leaf_name_data.push_back(list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-class")
    {
        if(te_class == nullptr)
        {
            te_class = std::make_shared<Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass>();
        }
        return te_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(te_class != nullptr)
    {
        children["te-class"] = te_class;
    }

    return children;
}

void Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "list")
    {
        list = value;
    }
}

Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass::TeClass()
{
    yang_name = "te-class"; yang_parent_name = "te-Mode__config-te-class";
}

Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass::~TeClass()
{
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass::has_data() const
{
    for (std::size_t index=0; index<te_idx.size(); index++)
    {
        if(te_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass::has_operation() const
{
    for (std::size_t index=0; index<te_idx.size(); index++)
    {
        if(te_idx[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-class";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/ds-te/te-classes/te-Mode__config-te-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-idx")
    {
        for(auto const & c : te_idx)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass::TeIdx>();
        c->parent = this;
        te_idx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : te_idx)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass::TeIdx::TeIdx()
    :
    te_idx{YType::uint8, "te-idx"},
    class_type{YType::uint8, "class-type"},
    unused{YType::empty, "unused"}
{
    yang_name = "te-idx"; yang_parent_name = "te-class";
}

Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass::TeIdx::~TeIdx()
{
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass::TeIdx::has_data() const
{
    return te_idx.is_set
	|| class_type.is_set
	|| unused.is_set;
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass::TeIdx::has_operation() const
{
    return is_set(operation)
	|| is_set(te_idx.operation)
	|| is_set(class_type.operation)
	|| is_set(unused.operation);
}

std::string Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass::TeIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-idx" <<"[te-idx='" <<te_idx <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass::TeIdx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/ds-te/te-classes/te-Mode__config-te-class/te-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_idx.is_set || is_set(te_idx.operation)) leaf_name_data.push_back(te_idx.get_name_leafdata());
    if (class_type.is_set || is_set(class_type.operation)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (unused.is_set || is_set(unused.operation)) leaf_name_data.push_back(unused.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass::TeIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass::TeIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::DsTe::TeClasses::TeMode__ConfigTeClass::TeClass::TeIdx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "te-idx")
    {
        te_idx = value;
    }
    if(value_path == "class-type")
    {
        class_type = value;
    }
    if(value_path == "unused")
    {
        unused = value;
    }
}

Native::Mpls::TrafficEng::FastReroute::FastReroute()
    :
    backup_prot_preempt(std::make_shared<Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt>())
	,timers(std::make_shared<Native::Mpls::TrafficEng::FastReroute::Timers>())
{
    backup_prot_preempt->parent = this;

    timers->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "traffic-eng";
}

Native::Mpls::TrafficEng::FastReroute::~FastReroute()
{
}

bool Native::Mpls::TrafficEng::FastReroute::has_data() const
{
    return (backup_prot_preempt !=  nullptr && backup_prot_preempt->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Mpls::TrafficEng::FastReroute::has_operation() const
{
    return is_set(operation)
	|| (backup_prot_preempt !=  nullptr && backup_prot_preempt->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Mpls::TrafficEng::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-prot-preempt")
    {
        if(backup_prot_preempt == nullptr)
        {
            backup_prot_preempt = std::make_shared<Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt>();
        }
        return backup_prot_preempt;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Mpls::TrafficEng::FastReroute::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_prot_preempt != nullptr)
    {
        children["backup-prot-preempt"] = backup_prot_preempt;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Native::Mpls::TrafficEng::FastReroute::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::BackupProtPreempt()
    :
    optimize_bw{YType::empty, "optimize-bw"}
{
    yang_name = "backup-prot-preempt"; yang_parent_name = "fast-reroute";
}

Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::~BackupProtPreempt()
{
}

bool Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::has_data() const
{
    return optimize_bw.is_set;
}

bool Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::has_operation() const
{
    return is_set(operation)
	|| is_set(optimize_bw.operation);
}

std::string Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-prot-preempt";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/fast-reroute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optimize_bw.is_set || is_set(optimize_bw.operation)) leaf_name_data.push_back(optimize_bw.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "optimize-bw")
    {
        optimize_bw = value;
    }
}

Native::Mpls::TrafficEng::FastReroute::Timers::Timers()
    :
    promotion{YType::uint32, "promotion"}
{
    yang_name = "timers"; yang_parent_name = "fast-reroute";
}

Native::Mpls::TrafficEng::FastReroute::Timers::~Timers()
{
}

bool Native::Mpls::TrafficEng::FastReroute::Timers::has_data() const
{
    return promotion.is_set;
}

bool Native::Mpls::TrafficEng::FastReroute::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(promotion.operation);
}

std::string Native::Mpls::TrafficEng::FastReroute::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::FastReroute::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/fast-reroute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (promotion.is_set || is_set(promotion.operation)) leaf_name_data.push_back(promotion.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::FastReroute::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::FastReroute::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::FastReroute::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "promotion")
    {
        promotion = value;
    }
}

Native::Mpls::TrafficEng::LinkManagement::LinkManagement()
    :
    timers(std::make_shared<Native::Mpls::TrafficEng::LinkManagement::Timers>())
{
    timers->parent = this;

    yang_name = "link-management"; yang_parent_name = "traffic-eng";
}

Native::Mpls::TrafficEng::LinkManagement::~LinkManagement()
{
}

bool Native::Mpls::TrafficEng::LinkManagement::has_data() const
{
    return (timers !=  nullptr && timers->has_data());
}

bool Native::Mpls::TrafficEng::LinkManagement::has_operation() const
{
    return is_set(operation)
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Mpls::TrafficEng::LinkManagement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-management";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::LinkManagement::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::LinkManagement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Mpls::TrafficEng::LinkManagement::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::LinkManagement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Native::Mpls::TrafficEng::LinkManagement::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::LinkManagement::Timers::Timers()
    :
    bandwidth_hold{YType::uint16, "bandwidth-hold"},
    periodic_flooding{YType::uint16, "periodic-flooding"}
{
    yang_name = "timers"; yang_parent_name = "link-management";
}

Native::Mpls::TrafficEng::LinkManagement::Timers::~Timers()
{
}

bool Native::Mpls::TrafficEng::LinkManagement::Timers::has_data() const
{
    return bandwidth_hold.is_set
	|| periodic_flooding.is_set;
}

bool Native::Mpls::TrafficEng::LinkManagement::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth_hold.operation)
	|| is_set(periodic_flooding.operation);
}

std::string Native::Mpls::TrafficEng::LinkManagement::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::LinkManagement::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/link-management/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_hold.is_set || is_set(bandwidth_hold.operation)) leaf_name_data.push_back(bandwidth_hold.get_name_leafdata());
    if (periodic_flooding.is_set || is_set(periodic_flooding.operation)) leaf_name_data.push_back(periodic_flooding.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::LinkManagement::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::LinkManagement::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::LinkManagement::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-hold")
    {
        bandwidth_hold = value;
    }
    if(value_path == "periodic-flooding")
    {
        periodic_flooding = value;
    }
}

Native::Mpls::TrafficEng::Logging::Logging()
    :
    lsp(std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp>())
	,tunnel(std::make_shared<Native::Mpls::TrafficEng::Logging::Tunnel>())
{
    lsp->parent = this;

    tunnel->parent = this;

    yang_name = "logging"; yang_parent_name = "traffic-eng";
}

Native::Mpls::TrafficEng::Logging::~Logging()
{
}

bool Native::Mpls::TrafficEng::Logging::has_data() const
{
    return (lsp !=  nullptr && lsp->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool Native::Mpls::TrafficEng::Logging::has_operation() const
{
    return is_set(operation)
	|| (lsp !=  nullptr && lsp->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::Mpls::TrafficEng::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp")
    {
        if(lsp == nullptr)
        {
            lsp = std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp>();
        }
        return lsp;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::Mpls::TrafficEng::Logging::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp != nullptr)
    {
        children["lsp"] = lsp;
    }

    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    return children;
}

void Native::Mpls::TrafficEng::Logging::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::Logging::Lsp::Lsp()
    :
    path_errors(nullptr) // presence node
	,preemption(nullptr) // presence node
	,reservation_errors(nullptr) // presence node
	,setups(nullptr) // presence node
	,teardowns(nullptr) // presence node
{
    yang_name = "lsp"; yang_parent_name = "logging";
}

Native::Mpls::TrafficEng::Logging::Lsp::~Lsp()
{
}

bool Native::Mpls::TrafficEng::Logging::Lsp::has_data() const
{
    return (path_errors !=  nullptr && path_errors->has_data())
	|| (preemption !=  nullptr && preemption->has_data())
	|| (reservation_errors !=  nullptr && reservation_errors->has_data())
	|| (setups !=  nullptr && setups->has_data())
	|| (teardowns !=  nullptr && teardowns->has_data());
}

bool Native::Mpls::TrafficEng::Logging::Lsp::has_operation() const
{
    return is_set(operation)
	|| (path_errors !=  nullptr && path_errors->has_operation())
	|| (preemption !=  nullptr && preemption->has_operation())
	|| (reservation_errors !=  nullptr && reservation_errors->has_operation())
	|| (setups !=  nullptr && setups->has_operation())
	|| (teardowns !=  nullptr && teardowns->has_operation());
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Logging::Lsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-errors")
    {
        if(path_errors == nullptr)
        {
            path_errors = std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp::PathErrors>();
        }
        return path_errors;
    }

    if(child_yang_name == "preemption")
    {
        if(preemption == nullptr)
        {
            preemption = std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp::Preemption>();
        }
        return preemption;
    }

    if(child_yang_name == "reservation-errors")
    {
        if(reservation_errors == nullptr)
        {
            reservation_errors = std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors>();
        }
        return reservation_errors;
    }

    if(child_yang_name == "setups")
    {
        if(setups == nullptr)
        {
            setups = std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp::Setups>();
        }
        return setups;
    }

    if(child_yang_name == "teardowns")
    {
        if(teardowns == nullptr)
        {
            teardowns = std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp::Teardowns>();
        }
        return teardowns;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Lsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_errors != nullptr)
    {
        children["path-errors"] = path_errors;
    }

    if(preemption != nullptr)
    {
        children["preemption"] = preemption;
    }

    if(reservation_errors != nullptr)
    {
        children["reservation-errors"] = reservation_errors;
    }

    if(setups != nullptr)
    {
        children["setups"] = setups;
    }

    if(teardowns != nullptr)
    {
        children["teardowns"] = teardowns;
    }

    return children;
}

void Native::Mpls::TrafficEng::Logging::Lsp::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::PathErrors()
    :
    access_list{YType::str, "access-list"}
{
    yang_name = "path-errors"; yang_parent_name = "lsp";
}

Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::~PathErrors()
{
}

bool Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::has_data() const
{
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list.operation);
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-errors";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list")
    {
        access_list = value;
    }
}

Native::Mpls::TrafficEng::Logging::Lsp::Preemption::Preemption()
    :
    access_list{YType::str, "access-list"}
{
    yang_name = "preemption"; yang_parent_name = "lsp";
}

Native::Mpls::TrafficEng::Logging::Lsp::Preemption::~Preemption()
{
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Preemption::has_data() const
{
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Preemption::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list.operation);
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::Preemption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preemption";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Logging::Lsp::Preemption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Lsp::Preemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Lsp::Preemption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Logging::Lsp::Preemption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list")
    {
        access_list = value;
    }
}

Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::ReservationErrors()
    :
    access_list{YType::str, "access-list"}
{
    yang_name = "reservation-errors"; yang_parent_name = "lsp";
}

Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::~ReservationErrors()
{
}

bool Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::has_data() const
{
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list.operation);
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reservation-errors";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list")
    {
        access_list = value;
    }
}

Native::Mpls::TrafficEng::Logging::Lsp::Setups::Setups()
    :
    access_list{YType::str, "access-list"}
{
    yang_name = "setups"; yang_parent_name = "lsp";
}

Native::Mpls::TrafficEng::Logging::Lsp::Setups::~Setups()
{
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Setups::has_data() const
{
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Setups::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list.operation);
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::Setups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setups";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Logging::Lsp::Setups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Lsp::Setups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Lsp::Setups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Logging::Lsp::Setups::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list")
    {
        access_list = value;
    }
}

Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::Teardowns()
    :
    access_list{YType::str, "access-list"}
{
    yang_name = "teardowns"; yang_parent_name = "lsp";
}

Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::~Teardowns()
{
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::has_data() const
{
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list.operation);
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "teardowns";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list")
    {
        access_list = value;
    }
}

Native::Mpls::TrafficEng::Logging::Tunnel::Tunnel()
    :
    lsp_selection(nullptr) // presence node
	,path(std::make_shared<Native::Mpls::TrafficEng::Logging::Tunnel::Path>())
{
    path->parent = this;

    yang_name = "tunnel"; yang_parent_name = "logging";
}

Native::Mpls::TrafficEng::Logging::Tunnel::~Tunnel()
{
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::has_data() const
{
    return (lsp_selection !=  nullptr && lsp_selection->has_data())
	|| (path !=  nullptr && path->has_data());
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::has_operation() const
{
    return is_set(operation)
	|| (lsp_selection !=  nullptr && lsp_selection->has_operation())
	|| (path !=  nullptr && path->has_operation());
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Logging::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-selection")
    {
        if(lsp_selection == nullptr)
        {
            lsp_selection = std::make_shared<Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection>();
        }
        return lsp_selection;
    }

    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<Native::Mpls::TrafficEng::Logging::Tunnel::Path>();
        }
        return path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp_selection != nullptr)
    {
        children["lsp-selection"] = lsp_selection;
    }

    if(path != nullptr)
    {
        children["path"] = path;
    }

    return children;
}

void Native::Mpls::TrafficEng::Logging::Tunnel::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::LspSelection()
    :
    access_list{YType::str, "access-list"}
{
    yang_name = "lsp-selection"; yang_parent_name = "tunnel";
}

Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::~LspSelection()
{
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::has_data() const
{
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list.operation);
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-selection";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list")
    {
        access_list = value;
    }
}

Native::Mpls::TrafficEng::Logging::Tunnel::Path::Path()
    :
    change(nullptr) // presence node
{
    yang_name = "path"; yang_parent_name = "tunnel";
}

Native::Mpls::TrafficEng::Logging::Tunnel::Path::~Path()
{
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::Path::has_data() const
{
    return (change !=  nullptr && change->has_data());
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::Path::has_operation() const
{
    return is_set(operation)
	|| (change !=  nullptr && change->has_operation());
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Logging::Tunnel::Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Tunnel::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "change")
    {
        if(change == nullptr)
        {
            change = std::make_shared<Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change>();
        }
        return change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Tunnel::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(change != nullptr)
    {
        children["change"] = change;
    }

    return children;
}

void Native::Mpls::TrafficEng::Logging::Tunnel::Path::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::Change()
    :
    access_list{YType::str, "access-list"}
{
    yang_name = "change"; yang_parent_name = "path";
}

Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::~Change()
{
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::has_data() const
{
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list.operation);
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/tunnel/path/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list")
    {
        access_list = value;
    }
}

Native::Mpls::TrafficEng::Lsp::Lsp()
{
    yang_name = "lsp"; yang_parent_name = "traffic-eng";
}

Native::Mpls::TrafficEng::Lsp::~Lsp()
{
}

bool Native::Mpls::TrafficEng::Lsp::has_data() const
{
    for (std::size_t index=0; index<attributes.size(); index++)
    {
        if(attributes[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::TrafficEng::Lsp::has_operation() const
{
    for (std::size_t index=0; index<attributes.size(); index++)
    {
        if(attributes[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Mpls::TrafficEng::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        for(auto const & c : attributes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes>();
        c->parent = this;
        attributes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : attributes)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::TrafficEng::Lsp::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::Lsp::Attributes::Attributes()
    :
    lsp_att{YType::str, "lsp-att"}
    	,
    flag_mode__config_lsp_attr(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr>())
{
    flag_mode__config_lsp_attr->parent = this;

    yang_name = "attributes"; yang_parent_name = "lsp";
}

Native::Mpls::TrafficEng::Lsp::Attributes::~Attributes()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::has_data() const
{
    return lsp_att.is_set
	|| (flag_mode__config_lsp_attr !=  nullptr && flag_mode__config_lsp_attr->has_data());
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::has_operation() const
{
    return is_set(operation)
	|| is_set(lsp_att.operation)
	|| (flag_mode__config_lsp_attr !=  nullptr && flag_mode__config_lsp_attr->has_operation());
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes" <<"[lsp-att='" <<lsp_att <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_att.is_set || is_set(lsp_att.operation)) leaf_name_data.push_back(lsp_att.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flag-Mode__config-lsp-attr")
    {
        if(flag_mode__config_lsp_attr == nullptr)
        {
            flag_mode__config_lsp_attr = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr>();
        }
        return flag_mode__config_lsp_attr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flag_mode__config_lsp_attr != nullptr)
    {
        children["flag-Mode__config-lsp-attr"] = flag_mode__config_lsp_attr;
    }

    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsp-att")
    {
        lsp_att = value;
    }
}

Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::FlagMode__ConfigLspAttr()
    :
    list{YType::empty, "list"},
    lockdown{YType::empty, "lockdown"},
    record_route{YType::empty, "record-route"}
    	,
    affinity(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity>())
	,auto_bw(nullptr) // presence node
	,bandwidth(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Bandwidth>())
	,priority(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority>())
	,protection(nullptr) // presence node
{
    affinity->parent = this;

    bandwidth->parent = this;

    priority->parent = this;

    yang_name = "flag-Mode__config-lsp-attr"; yang_parent_name = "attributes";
}

Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::~FlagMode__ConfigLspAttr()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::has_data() const
{
    return list.is_set
	|| lockdown.is_set
	|| record_route.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (auto_bw !=  nullptr && auto_bw->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (protection !=  nullptr && protection->has_data());
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(list.operation)
	|| is_set(lockdown.operation)
	|| is_set(record_route.operation)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (auto_bw !=  nullptr && auto_bw->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (protection !=  nullptr && protection->has_operation());
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flag-Mode__config-lsp-attr";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlagMode__ConfigLspAttr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.operation)) leaf_name_data.push_back(list.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.operation)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.operation)) leaf_name_data.push_back(record_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "auto-bw")
    {
        if(auto_bw == nullptr)
        {
            auto_bw = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::AutoBw>();
        }
        return auto_bw;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection>();
        }
        return protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(auto_bw != nullptr)
    {
        children["auto-bw"] = auto_bw;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "list")
    {
        list = value;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
    }
    if(value_path == "record-route")
    {
        record_route = value;
    }
}

Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity::Affinity()
{
    yang_name = "affinity"; yang_parent_name = "flag-Mode__config-lsp-attr";
}

Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity::~Affinity()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity::has_data() const
{
    for (std::size_t index=0; index<fl_val.size(); index++)
    {
        if(fl_val[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity::has_operation() const
{
    for (std::size_t index=0; index<fl_val.size(); index++)
    {
        if(fl_val[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fl-val")
    {
        for(auto const & c : fl_val)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity::FlVal>();
        c->parent = this;
        fl_val.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fl_val)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity::FlVal::FlVal()
    :
    fl_val{YType::str, "fl-val"},
    mask{YType::empty, "mask"}
{
    yang_name = "fl-val"; yang_parent_name = "affinity";
}

Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity::FlVal::~FlVal()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity::FlVal::has_data() const
{
    return fl_val.is_set
	|| mask.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity::FlVal::has_operation() const
{
    return is_set(operation)
	|| is_set(fl_val.operation)
	|| is_set(mask.operation);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity::FlVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fl-val" <<"[fl-val='" <<fl_val <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity::FlVal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlVal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fl_val.is_set || is_set(fl_val.operation)) leaf_name_data.push_back(fl_val.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity::FlVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity::FlVal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Affinity::FlVal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fl-val")
    {
        fl_val = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::AutoBw::AutoBw()
    :
    adjustment_threshold{YType::uint8, "adjustment-threshold"},
    collect_bw{YType::empty, "collect-bw"},
    frequency{YType::uint32, "frequency"},
    max_bw{YType::uint32, "max-bw"},
    min_bw{YType::uint32, "min-bw"},
    overflow_limit{YType::uint8, "overflow-limit"}
{
    yang_name = "auto-bw"; yang_parent_name = "flag-Mode__config-lsp-attr";
}

Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::AutoBw::~AutoBw()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::AutoBw::has_data() const
{
    return adjustment_threshold.is_set
	|| collect_bw.is_set
	|| frequency.is_set
	|| max_bw.is_set
	|| min_bw.is_set
	|| overflow_limit.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::AutoBw::has_operation() const
{
    return is_set(operation)
	|| is_set(adjustment_threshold.operation)
	|| is_set(collect_bw.operation)
	|| is_set(frequency.operation)
	|| is_set(max_bw.operation)
	|| is_set(min_bw.operation)
	|| is_set(overflow_limit.operation);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::AutoBw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bw";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::AutoBw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoBw' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjustment_threshold.is_set || is_set(adjustment_threshold.operation)) leaf_name_data.push_back(adjustment_threshold.get_name_leafdata());
    if (collect_bw.is_set || is_set(collect_bw.operation)) leaf_name_data.push_back(collect_bw.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.operation)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (max_bw.is_set || is_set(max_bw.operation)) leaf_name_data.push_back(max_bw.get_name_leafdata());
    if (min_bw.is_set || is_set(min_bw.operation)) leaf_name_data.push_back(min_bw.get_name_leafdata());
    if (overflow_limit.is_set || is_set(overflow_limit.operation)) leaf_name_data.push_back(overflow_limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::AutoBw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::AutoBw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::AutoBw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjustment-threshold")
    {
        adjustment_threshold = value;
    }
    if(value_path == "collect-bw")
    {
        collect_bw = value;
    }
    if(value_path == "frequency")
    {
        frequency = value;
    }
    if(value_path == "max-bw")
    {
        max_bw = value;
    }
    if(value_path == "min-bw")
    {
        min_bw = value;
    }
    if(value_path == "overflow-limit")
    {
        overflow_limit = value;
    }
}

Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Bandwidth::Bandwidth()
    :
    bnd_kbp{YType::uint32, "bnd-kbp"},
    sub_pool{YType::uint32, "sub-pool"}
{
    yang_name = "bandwidth"; yang_parent_name = "flag-Mode__config-lsp-attr";
}

Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Bandwidth::~Bandwidth()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Bandwidth::has_data() const
{
    return bnd_kbp.is_set
	|| sub_pool.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(bnd_kbp.operation)
	|| is_set(sub_pool.operation);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Bandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bandwidth' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bnd_kbp.is_set || is_set(bnd_kbp.operation)) leaf_name_data.push_back(bnd_kbp.get_name_leafdata());
    if (sub_pool.is_set || is_set(sub_pool.operation)) leaf_name_data.push_back(sub_pool.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bnd-kbp")
    {
        bnd_kbp = value;
    }
    if(value_path == "sub-pool")
    {
        sub_pool = value;
    }
}

Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority::Priority()
{
    yang_name = "priority"; yang_parent_name = "flag-Mode__config-lsp-attr";
}

Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority::~Priority()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority::has_data() const
{
    for (std::size_t index=0; index<lss_pri.size(); index++)
    {
        if(lss_pri[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority::has_operation() const
{
    for (std::size_t index=0; index<lss_pri.size(); index++)
    {
        if(lss_pri[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lss-pri")
    {
        for(auto const & c : lss_pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority::LssPri>();
        c->parent = this;
        lss_pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lss_pri)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority::LssPri::LssPri()
    :
    lss_pri{YType::uint8, "lss-pri"},
    lss_pri0{YType::uint8, "lss-pri0"}
{
    yang_name = "lss-pri"; yang_parent_name = "priority";
}

Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority::LssPri::~LssPri()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority::LssPri::has_data() const
{
    return lss_pri.is_set
	|| lss_pri0.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority::LssPri::has_operation() const
{
    return is_set(operation)
	|| is_set(lss_pri.operation)
	|| is_set(lss_pri0.operation);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority::LssPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lss-pri" <<"[lss-pri='" <<lss_pri <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority::LssPri::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LssPri' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lss_pri.is_set || is_set(lss_pri.operation)) leaf_name_data.push_back(lss_pri.get_name_leafdata());
    if (lss_pri0.is_set || is_set(lss_pri0.operation)) leaf_name_data.push_back(lss_pri0.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority::LssPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority::LssPri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Priority::LssPri::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lss-pri")
    {
        lss_pri = value;
    }
    if(value_path == "lss-pri0")
    {
        lss_pri0 = value;
    }
}

Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection::Protection()
    :
    fast_reroute(nullptr) // presence node
{
    yang_name = "protection"; yang_parent_name = "flag-Mode__config-lsp-attr";
}

Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection::~Protection()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection::has_data() const
{
    return (fast_reroute !=  nullptr && fast_reroute->has_data());
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection::has_operation() const
{
    return is_set(operation)
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation());
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protection' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection::FastReroute>();
        }
        return fast_reroute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection::FastReroute::FastReroute()
    :
    bw_protect{YType::empty, "bw-protect"}
{
    yang_name = "fast-reroute"; yang_parent_name = "protection";
}

Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection::FastReroute::~FastReroute()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection::FastReroute::has_data() const
{
    return bw_protect.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection::FastReroute::has_operation() const
{
    return is_set(operation)
	|| is_set(bw_protect.operation);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw_protect.is_set || is_set(bw_protect.operation)) leaf_name_data.push_back(bw_protect.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::FlagMode__ConfigLspAttr::Protection::FastReroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bw-protect")
    {
        bw_protect = value;
    }
}

Native::Mpls::TrafficEng::PathOption::PathOption()
    :
    list(std::make_shared<Native::Mpls::TrafficEng::PathOption::List>())
{
    list->parent = this;

    yang_name = "path-option"; yang_parent_name = "traffic-eng";
}

Native::Mpls::TrafficEng::PathOption::~PathOption()
{
}

bool Native::Mpls::TrafficEng::PathOption::has_data() const
{
    return (list !=  nullptr && list->has_data());
}

bool Native::Mpls::TrafficEng::PathOption::has_operation() const
{
    return is_set(operation)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Mpls::TrafficEng::PathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::PathOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Mpls::TrafficEng::PathOption::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathOption::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::PathOption::List::List()
{
    yang_name = "list"; yang_parent_name = "path-option";
}

Native::Mpls::TrafficEng::PathOption::List::~List()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::has_data() const
{
    for (std::size_t index=0; index<identifier.size(); index++)
    {
        if(identifier[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::TrafficEng::PathOption::List::has_operation() const
{
    for (std::size_t index=0; index<identifier.size(); index++)
    {
        if(identifier[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Mpls::TrafficEng::PathOption::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::PathOption::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-option/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identifier")
    {
        for(auto const & c : identifier)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier>();
        c->parent = this;
        identifier.push_back(c);
        return c;
    }

    if(child_yang_name == "name")
    {
        for(auto const & c : name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name>();
        c->parent = this;
        name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : identifier)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::Identifier()
    :
    po_num{YType::uint16, "po-num"}
{
    yang_name = "identifier"; yang_parent_name = "list";
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::~Identifier()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::has_data() const
{
    return po_num.is_set;
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::has_operation() const
{
    return is_set(operation)
	|| is_set(po_num.operation);
}

std::string Native::Mpls::TrafficEng::PathOption::List::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier" <<"[po-num='" <<po_num <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::PathOption::List::Identifier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-option/list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (po_num.is_set || is_set(po_num.operation)) leaf_name_data.push_back(po_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "po-num")
    {
        po_num = value;
    }
}

Native::Mpls::TrafficEng::PathOption::List::Name::Name()
    :
    spo_name{YType::str, "spo-name"}
{
    yang_name = "name"; yang_parent_name = "list";
}

Native::Mpls::TrafficEng::PathOption::List::Name::~Name()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::has_data() const
{
    return spo_name.is_set;
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::has_operation() const
{
    return is_set(operation)
	|| is_set(spo_name.operation);
}

std::string Native::Mpls::TrafficEng::PathOption::List::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name" <<"[spo-name='" <<spo_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::PathOption::List::Name::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-option/list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spo_name.is_set || is_set(spo_name.operation)) leaf_name_data.push_back(spo_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Name::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "spo-name")
    {
        spo_name = value;
    }
}

Native::Mpls::TrafficEng::PathSelection::PathSelection()
    :
    metric{YType::enumeration, "metric"}
    	,
    invalidation(std::make_shared<Native::Mpls::TrafficEng::PathSelection::Invalidation>())
	,overload(std::make_shared<Native::Mpls::TrafficEng::PathSelection::Overload>())
{
    invalidation->parent = this;

    overload->parent = this;

    yang_name = "path-selection"; yang_parent_name = "traffic-eng";
}

Native::Mpls::TrafficEng::PathSelection::~PathSelection()
{
}

bool Native::Mpls::TrafficEng::PathSelection::has_data() const
{
    return metric.is_set
	|| (invalidation !=  nullptr && invalidation->has_data())
	|| (overload !=  nullptr && overload->has_data());
}

bool Native::Mpls::TrafficEng::PathSelection::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| (invalidation !=  nullptr && invalidation->has_operation())
	|| (overload !=  nullptr && overload->has_operation());
}

std::string Native::Mpls::TrafficEng::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::PathSelection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalidation")
    {
        if(invalidation == nullptr)
        {
            invalidation = std::make_shared<Native::Mpls::TrafficEng::PathSelection::Invalidation>();
        }
        return invalidation;
    }

    if(child_yang_name == "overload")
    {
        if(overload == nullptr)
        {
            overload = std::make_shared<Native::Mpls::TrafficEng::PathSelection::Overload>();
        }
        return overload;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(invalidation != nullptr)
    {
        children["invalidation"] = invalidation;
    }

    if(overload != nullptr)
    {
        children["overload"] = overload;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathSelection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
}

Native::Mpls::TrafficEng::PathSelection::Invalidation::Invalidation()
    :
    drop{YType::empty, "drop"},
    value_{YType::int32, "value"}
{
    yang_name = "invalidation"; yang_parent_name = "path-selection";
}

Native::Mpls::TrafficEng::PathSelection::Invalidation::~Invalidation()
{
}

bool Native::Mpls::TrafficEng::PathSelection::Invalidation::has_data() const
{
    return drop.is_set
	|| value_.is_set;
}

bool Native::Mpls::TrafficEng::PathSelection::Invalidation::has_operation() const
{
    return is_set(operation)
	|| is_set(drop.operation)
	|| is_set(value_.operation);
}

std::string Native::Mpls::TrafficEng::PathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::PathSelection::Invalidation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-selection/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.operation)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathSelection::Invalidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::PathSelection::Invalidation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop")
    {
        drop = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Mpls::TrafficEng::PathSelection::Overload::Overload()
    :
    allow(std::make_shared<Native::Mpls::TrafficEng::PathSelection::Overload::Allow>())
{
    allow->parent = this;

    yang_name = "overload"; yang_parent_name = "path-selection";
}

Native::Mpls::TrafficEng::PathSelection::Overload::~Overload()
{
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::has_data() const
{
    return (allow !=  nullptr && allow->has_data());
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::has_operation() const
{
    return is_set(operation)
	|| (allow !=  nullptr && allow->has_operation());
}

std::string Native::Mpls::TrafficEng::PathSelection::Overload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overload";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::PathSelection::Overload::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-selection/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathSelection::Overload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allow")
    {
        if(allow == nullptr)
        {
            allow = std::make_shared<Native::Mpls::TrafficEng::PathSelection::Overload::Allow>();
        }
        return allow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathSelection::Overload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allow != nullptr)
    {
        children["allow"] = allow;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathSelection::Overload::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::PathSelection::Overload::Allow::Allow()
    :
    head{YType::empty, "head"},
    middle{YType::empty, "middle"},
    tail{YType::empty, "tail"}
{
    yang_name = "allow"; yang_parent_name = "overload";
}

Native::Mpls::TrafficEng::PathSelection::Overload::Allow::~Allow()
{
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::Allow::has_data() const
{
    return head.is_set
	|| middle.is_set
	|| tail.is_set;
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::Allow::has_operation() const
{
    return is_set(operation)
	|| is_set(head.operation)
	|| is_set(middle.operation)
	|| is_set(tail.operation);
}

std::string Native::Mpls::TrafficEng::PathSelection::Overload::Allow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allow";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::PathSelection::Overload::Allow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-selection/overload/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (head.is_set || is_set(head.operation)) leaf_name_data.push_back(head.get_name_leafdata());
    if (middle.is_set || is_set(middle.operation)) leaf_name_data.push_back(middle.get_name_leafdata());
    if (tail.is_set || is_set(tail.operation)) leaf_name_data.push_back(tail.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathSelection::Overload::Allow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathSelection::Overload::Allow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::PathSelection::Overload::Allow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "head")
    {
        head = value;
    }
    if(value_path == "middle")
    {
        middle = value;
    }
    if(value_path == "tail")
    {
        tail = value;
    }
}

Native::Mpls::TrafficEng::Pcc::Pcc()
    :
    report_all{YType::empty, "report-all"}
    	,
    peer(std::make_shared<Native::Mpls::TrafficEng::Pcc::Peer>())
{
    peer->parent = this;

    yang_name = "pcc"; yang_parent_name = "traffic-eng";
}

Native::Mpls::TrafficEng::Pcc::~Pcc()
{
}

bool Native::Mpls::TrafficEng::Pcc::has_data() const
{
    return report_all.is_set
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Mpls::TrafficEng::Pcc::has_operation() const
{
    return is_set(operation)
	|| is_set(report_all.operation)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Mpls::TrafficEng::Pcc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcc";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Pcc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (report_all.is_set || is_set(report_all.operation)) leaf_name_data.push_back(report_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Pcc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Mpls::TrafficEng::Pcc::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Pcc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Mpls::TrafficEng::Pcc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "report-all")
    {
        report_all = value;
    }
}

Native::Mpls::TrafficEng::Pcc::Peer::Peer()
{
    yang_name = "peer"; yang_parent_name = "pcc";
}

Native::Mpls::TrafficEng::Pcc::Peer::~Peer()
{
}

bool Native::Mpls::TrafficEng::Pcc::Peer::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::TrafficEng::Pcc::Peer::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Mpls::TrafficEng::Pcc::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Pcc::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/pcc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Pcc::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::Pcc::Peer::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Pcc::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::TrafficEng::Pcc::Peer::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    keychain{YType::str, "keychain"},
    precedence{YType::uint8, "precedence"},
    source{YType::str, "source"}
    	,
    password(std::make_shared<Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password>())
{
    password->parent = this;

    yang_name = "ipv4"; yang_parent_name = "peer";
}

Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::~Ipv4()
{
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::has_data() const
{
    return ipv4.is_set
	|| keychain.is_set
	|| precedence.is_set
	|| source.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(keychain.operation)
	|| is_set(precedence.operation)
	|| is_set(source.operation)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/pcc/peer/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (keychain.is_set || is_set(keychain.operation)) leaf_name_data.push_back(keychain.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.operation)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "keychain")
    {
        keychain = value;
    }
    if(value_path == "precedence")
    {
        precedence = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}

Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::Password()
    :
    clear{YType::str, "clear"},
    encrypted{YType::str, "encrypted"}
{
    yang_name = "password"; yang_parent_name = "ipv4";
}

Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::~Password()
{
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::has_data() const
{
    return clear.is_set
	|| encrypted.is_set;
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(clear.operation)
	|| is_set(encrypted.operation);
}

std::string Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clear.is_set || is_set(clear.operation)) leaf_name_data.push_back(clear.get_name_leafdata());
    if (encrypted.is_set || is_set(encrypted.operation)) leaf_name_data.push_back(encrypted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clear")
    {
        clear = value;
    }
    if(value_path == "encrypted")
    {
        encrypted = value;
    }
}

Native::Mpls::TrafficEng::Reoptimize::Reoptimize()
    :
    events(std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Events>())
	,timers(std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Timers>())
{
    events->parent = this;

    timers->parent = this;

    yang_name = "reoptimize"; yang_parent_name = "traffic-eng";
}

Native::Mpls::TrafficEng::Reoptimize::~Reoptimize()
{
}

bool Native::Mpls::TrafficEng::Reoptimize::has_data() const
{
    return (events !=  nullptr && events->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Mpls::TrafficEng::Reoptimize::has_operation() const
{
    return is_set(operation)
	|| (events !=  nullptr && events->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Mpls::TrafficEng::Reoptimize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reoptimize";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Reoptimize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Reoptimize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events")
    {
        if(events == nullptr)
        {
            events = std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Events>();
        }
        return events;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Reoptimize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events != nullptr)
    {
        children["events"] = events;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Native::Mpls::TrafficEng::Reoptimize::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::Reoptimize::Events::Events()
    :
    link_up{YType::empty, "link-up"}
{
    yang_name = "events"; yang_parent_name = "reoptimize";
}

Native::Mpls::TrafficEng::Reoptimize::Events::~Events()
{
}

bool Native::Mpls::TrafficEng::Reoptimize::Events::has_data() const
{
    return link_up.is_set;
}

bool Native::Mpls::TrafficEng::Reoptimize::Events::has_operation() const
{
    return is_set(operation)
	|| is_set(link_up.operation);
}

std::string Native::Mpls::TrafficEng::Reoptimize::Events::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Reoptimize::Events::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/reoptimize/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_up.is_set || is_set(link_up.operation)) leaf_name_data.push_back(link_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Reoptimize::Events::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Reoptimize::Events::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Reoptimize::Events::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-up")
    {
        link_up = value;
    }
}

Native::Mpls::TrafficEng::Reoptimize::Timers::Timers()
    :
    frequency{YType::uint32, "frequency"}
    	,
    delay(std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Timers::Delay>())
{
    delay->parent = this;

    yang_name = "timers"; yang_parent_name = "reoptimize";
}

Native::Mpls::TrafficEng::Reoptimize::Timers::~Timers()
{
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::has_data() const
{
    return frequency.is_set
	|| (delay !=  nullptr && delay->has_data());
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(frequency.operation)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Mpls::TrafficEng::Reoptimize::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Reoptimize::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/reoptimize/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.operation)) leaf_name_data.push_back(frequency.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Reoptimize::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Timers::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Reoptimize::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Mpls::TrafficEng::Reoptimize::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frequency")
    {
        frequency = value;
    }
}

Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::Delay()
    :
    cleanup{YType::uint8, "cleanup"},
    installation{YType::uint16, "installation"}
{
    yang_name = "delay"; yang_parent_name = "timers";
}

Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::~Delay()
{
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::has_data() const
{
    return cleanup.is_set
	|| installation.is_set;
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(cleanup.operation)
	|| is_set(installation.operation);
}

std::string Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/reoptimize/timers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cleanup.is_set || is_set(cleanup.operation)) leaf_name_data.push_back(cleanup.get_name_leafdata());
    if (installation.is_set || is_set(installation.operation)) leaf_name_data.push_back(installation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cleanup")
    {
        cleanup = value;
    }
    if(value_path == "installation")
    {
        installation = value;
    }
}

Native::Mpls::TrafficEng::Signalling::Signalling()
    :
    advertise(std::make_shared<Native::Mpls::TrafficEng::Signalling::Advertise>())
	,forwarding(std::make_shared<Native::Mpls::TrafficEng::Signalling::Forwarding>())
	,restart(std::make_shared<Native::Mpls::TrafficEng::Signalling::Restart>())
{
    advertise->parent = this;

    forwarding->parent = this;

    restart->parent = this;

    yang_name = "signalling"; yang_parent_name = "traffic-eng";
}

Native::Mpls::TrafficEng::Signalling::~Signalling()
{
}

bool Native::Mpls::TrafficEng::Signalling::has_data() const
{
    return (advertise !=  nullptr && advertise->has_data())
	|| (forwarding !=  nullptr && forwarding->has_data())
	|| (restart !=  nullptr && restart->has_data());
}

bool Native::Mpls::TrafficEng::Signalling::has_operation() const
{
    return is_set(operation)
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (forwarding !=  nullptr && forwarding->has_operation())
	|| (restart !=  nullptr && restart->has_operation());
}

std::string Native::Mpls::TrafficEng::Signalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Signalling::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Signalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Mpls::TrafficEng::Signalling::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "forwarding")
    {
        if(forwarding == nullptr)
        {
            forwarding = std::make_shared<Native::Mpls::TrafficEng::Signalling::Forwarding>();
        }
        return forwarding;
    }

    if(child_yang_name == "restart")
    {
        if(restart == nullptr)
        {
            restart = std::make_shared<Native::Mpls::TrafficEng::Signalling::Restart>();
        }
        return restart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Signalling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertise != nullptr)
    {
        children["advertise"] = advertise;
    }

    if(forwarding != nullptr)
    {
        children["forwarding"] = forwarding;
    }

    if(restart != nullptr)
    {
        children["restart"] = restart;
    }

    return children;
}

void Native::Mpls::TrafficEng::Signalling::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::Signalling::Advertise::Advertise()
    :
    implicit_null(nullptr) // presence node
{
    yang_name = "advertise"; yang_parent_name = "signalling";
}

Native::Mpls::TrafficEng::Signalling::Advertise::~Advertise()
{
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::has_data() const
{
    return (implicit_null !=  nullptr && implicit_null->has_data());
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::has_operation() const
{
    return is_set(operation)
	|| (implicit_null !=  nullptr && implicit_null->has_operation());
}

std::string Native::Mpls::TrafficEng::Signalling::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Signalling::Advertise::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/signalling/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Signalling::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "implicit-null")
    {
        if(implicit_null == nullptr)
        {
            implicit_null = std::make_shared<Native::Mpls::TrafficEng::Signalling::Advertise::ImplicitNull>();
        }
        return implicit_null;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Signalling::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(implicit_null != nullptr)
    {
        children["implicit-null"] = implicit_null;
    }

    return children;
}

void Native::Mpls::TrafficEng::Signalling::Advertise::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::Signalling::Advertise::ImplicitNull::ImplicitNull()
    :
    nr{YType::uint8, "nr"}
{
    yang_name = "implicit-null"; yang_parent_name = "advertise";
}

Native::Mpls::TrafficEng::Signalling::Advertise::ImplicitNull::~ImplicitNull()
{
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::ImplicitNull::has_data() const
{
    return nr.is_set;
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::ImplicitNull::has_operation() const
{
    return is_set(operation)
	|| is_set(nr.operation);
}

std::string Native::Mpls::TrafficEng::Signalling::Advertise::ImplicitNull::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "implicit-null";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Signalling::Advertise::ImplicitNull::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/signalling/advertise/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nr.is_set || is_set(nr.operation)) leaf_name_data.push_back(nr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Signalling::Advertise::ImplicitNull::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Signalling::Advertise::ImplicitNull::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Signalling::Advertise::ImplicitNull::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nr")
    {
        nr = value;
    }
}

Native::Mpls::TrafficEng::Signalling::Forwarding::Forwarding()
    :
    sync{YType::empty, "sync"}
{
    yang_name = "forwarding"; yang_parent_name = "signalling";
}

Native::Mpls::TrafficEng::Signalling::Forwarding::~Forwarding()
{
}

bool Native::Mpls::TrafficEng::Signalling::Forwarding::has_data() const
{
    return sync.is_set;
}

bool Native::Mpls::TrafficEng::Signalling::Forwarding::has_operation() const
{
    return is_set(operation)
	|| is_set(sync.operation);
}

std::string Native::Mpls::TrafficEng::Signalling::Forwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Signalling::Forwarding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/signalling/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync.is_set || is_set(sync.operation)) leaf_name_data.push_back(sync.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Signalling::Forwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Signalling::Forwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Signalling::Forwarding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sync")
    {
        sync = value;
    }
}

Native::Mpls::TrafficEng::Signalling::Restart::Restart()
    :
    neighbors(nullptr) // presence node
{
    yang_name = "restart"; yang_parent_name = "signalling";
}

Native::Mpls::TrafficEng::Signalling::Restart::~Restart()
{
}

bool Native::Mpls::TrafficEng::Signalling::Restart::has_data() const
{
    return (neighbors !=  nullptr && neighbors->has_data());
}

bool Native::Mpls::TrafficEng::Signalling::Restart::has_operation() const
{
    return is_set(operation)
	|| (neighbors !=  nullptr && neighbors->has_operation());
}

std::string Native::Mpls::TrafficEng::Signalling::Restart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restart";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Signalling::Restart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/signalling/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Signalling::Restart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Native::Mpls::TrafficEng::Signalling::Restart::Neighbors>();
        }
        return neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Signalling::Restart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    return children;
}

void Native::Mpls::TrafficEng::Signalling::Restart::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::Signalling::Restart::Neighbors::Neighbors()
    :
    nr{YType::uint8, "nr"}
{
    yang_name = "neighbors"; yang_parent_name = "restart";
}

Native::Mpls::TrafficEng::Signalling::Restart::Neighbors::~Neighbors()
{
}

bool Native::Mpls::TrafficEng::Signalling::Restart::Neighbors::has_data() const
{
    return nr.is_set;
}

bool Native::Mpls::TrafficEng::Signalling::Restart::Neighbors::has_operation() const
{
    return is_set(operation)
	|| is_set(nr.operation);
}

std::string Native::Mpls::TrafficEng::Signalling::Restart::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Signalling::Restart::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/signalling/restart/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nr.is_set || is_set(nr.operation)) leaf_name_data.push_back(nr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Signalling::Restart::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Signalling::Restart::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Signalling::Restart::Neighbors::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nr")
    {
        nr = value;
    }
}

Native::Mpls::TrafficEng::Topology::Topology()
    :
    holddown(std::make_shared<Native::Mpls::TrafficEng::Topology::Holddown>())
{
    holddown->parent = this;

    yang_name = "topology"; yang_parent_name = "traffic-eng";
}

Native::Mpls::TrafficEng::Topology::~Topology()
{
}

bool Native::Mpls::TrafficEng::Topology::has_data() const
{
    return (holddown !=  nullptr && holddown->has_data());
}

bool Native::Mpls::TrafficEng::Topology::has_operation() const
{
    return is_set(operation)
	|| (holddown !=  nullptr && holddown->has_operation());
}

std::string Native::Mpls::TrafficEng::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "holddown")
    {
        if(holddown == nullptr)
        {
            holddown = std::make_shared<Native::Mpls::TrafficEng::Topology::Holddown>();
        }
        return holddown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(holddown != nullptr)
    {
        children["holddown"] = holddown;
    }

    return children;
}

void Native::Mpls::TrafficEng::Topology::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::Topology::Holddown::Holddown()
    :
    sigerr{YType::uint16, "sigerr"}
{
    yang_name = "holddown"; yang_parent_name = "topology";
}

Native::Mpls::TrafficEng::Topology::Holddown::~Holddown()
{
}

bool Native::Mpls::TrafficEng::Topology::Holddown::has_data() const
{
    return sigerr.is_set;
}

bool Native::Mpls::TrafficEng::Topology::Holddown::has_operation() const
{
    return is_set(operation)
	|| is_set(sigerr.operation);
}

std::string Native::Mpls::TrafficEng::Topology::Holddown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "holddown";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Topology::Holddown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sigerr.is_set || is_set(sigerr.operation)) leaf_name_data.push_back(sigerr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Topology::Holddown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Topology::Holddown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Topology::Holddown::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sigerr")
    {
        sigerr = value;
    }
}

Native::Mpls::TrafficEng::Trace::Trace()
    :
    buffer_size(std::make_shared<Native::Mpls::TrafficEng::Trace::BufferSize>())
{
    buffer_size->parent = this;

    yang_name = "trace"; yang_parent_name = "traffic-eng";
}

Native::Mpls::TrafficEng::Trace::~Trace()
{
}

bool Native::Mpls::TrafficEng::Trace::has_data() const
{
    return (buffer_size !=  nullptr && buffer_size->has_data());
}

bool Native::Mpls::TrafficEng::Trace::has_operation() const
{
    return is_set(operation)
	|| (buffer_size !=  nullptr && buffer_size->has_operation());
}

std::string Native::Mpls::TrafficEng::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Trace::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "buffer-size")
    {
        if(buffer_size == nullptr)
        {
            buffer_size = std::make_shared<Native::Mpls::TrafficEng::Trace::BufferSize>();
        }
        return buffer_size;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(buffer_size != nullptr)
    {
        children["buffer-size"] = buffer_size;
    }

    return children;
}

void Native::Mpls::TrafficEng::Trace::set_value(const std::string & value_path, std::string value)
{
}

Native::Mpls::TrafficEng::Trace::BufferSize::BufferSize()
    :
    error{YType::uint16, "error"},
    event{YType::uint16, "event"},
    warning{YType::uint8, "warning"}
{
    yang_name = "buffer-size"; yang_parent_name = "trace";
}

Native::Mpls::TrafficEng::Trace::BufferSize::~BufferSize()
{
}

bool Native::Mpls::TrafficEng::Trace::BufferSize::has_data() const
{
    return error.is_set
	|| event.is_set
	|| warning.is_set;
}

bool Native::Mpls::TrafficEng::Trace::BufferSize::has_operation() const
{
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(event.operation)
	|| is_set(warning.operation);
}

std::string Native::Mpls::TrafficEng::Trace::BufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffer-size";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Trace::BufferSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/trace/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (event.is_set || is_set(event.operation)) leaf_name_data.push_back(event.get_name_leafdata());
    if (warning.is_set || is_set(warning.operation)) leaf_name_data.push_back(warning.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Trace::BufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Trace::BufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Trace::BufferSize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "event")
    {
        event = value;
    }
    if(value_path == "warning")
    {
        warning = value;
    }
}

Native::Mpls::Tp::Tp()
{
    yang_name = "tp"; yang_parent_name = "mpls";
}

Native::Mpls::Tp::~Tp()
{
}

bool Native::Mpls::Tp::has_data() const
{
    return false;
}

bool Native::Mpls::Tp::has_operation() const
{
    return is_set(operation);
}

std::string Native::Mpls::Tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:tp";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Tp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Tp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Tp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Router()
    :
    isis(nullptr) // presence node
	,isis_container(std::make_shared<Native::Router::IsisContainer>())
	,lisp(nullptr) // presence node
	,rip(nullptr) // presence node
{
    isis_container->parent = this;

    yang_name = "router"; yang_parent_name = "native";
}

Native::Router::~Router()
{
}

bool Native::Router::has_data() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lisp_list.size(); index++)
    {
        if(lisp_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    return (isis !=  nullptr && isis->has_data())
	|| (isis_container !=  nullptr && isis_container->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (rip !=  nullptr && rip->has_data());
}

bool Native::Router::has_operation() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lisp_list.size(); index++)
    {
        if(lisp_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (isis !=  nullptr && isis->has_operation())
	|| (isis_container !=  nullptr && isis_container->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (rip !=  nullptr && rip->has_operation());
}

std::string Native::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";

    return path_buffer.str();

}

const EntityPath Native::Router::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "isis-container")
    {
        if(isis_container == nullptr)
        {
            isis_container = std::make_shared<Native::Router::IsisContainer>();
        }
        return isis_container;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "lisp-list")
    {
        for(auto const & c : lisp_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::LispList>();
        c->parent = this;
        lisp_list.push_back(c);
        return c;
    }

    if(child_yang_name == "ospf")
    {
        for(auto const & c : ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "ospfv3")
    {
        for(auto const & c : ospfv3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3>();
        c->parent = this;
        ospfv3.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Rip>();
        }
        return rip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(isis_container != nullptr)
    {
        children["isis-container"] = isis_container;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    for (auto const & c : lisp_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ospfv3)
    {
        children[c->get_segment_path()] = c;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    return children;
}

void Native::Router::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::Bgp()
    :
    id{YType::str, "id"},
    auto_summary{YType::boolean, "auto-summary"},
    default_metric{YType::uint32, "default-metric"},
    synchronization{YType::empty, "synchronization"}
    	,
    address_family(std::make_shared<Native::Router::Bgp::AddressFamily>())
	,bgp(std::make_shared<Native::Router::Bgp::Bgp_>())
	,default_information(std::make_shared<Native::Router::Bgp::DefaultInformation>())
	,distance(std::make_shared<Native::Router::Bgp::Distance>())
	,maximum_paths(std::make_shared<Native::Router::Bgp::MaximumPaths>())
	,redistribute(std::make_shared<Native::Router::Bgp::Redistribute>())
	,snmp(nullptr) // presence node
	,table_map(nullptr) // presence node
	,template_(std::make_shared<Native::Router::Bgp::Template_>())
	,timers(std::make_shared<Native::Router::Bgp::Timers>())
{
    address_family->parent = this;

    bgp->parent = this;

    default_information->parent = this;

    distance->parent = this;

    maximum_paths->parent = this;

    redistribute->parent = this;

    template_->parent = this;

    timers->parent = this;

    yang_name = "bgp"; yang_parent_name = "router";
}

Native::Router::Bgp::~Bgp()
{
}

bool Native::Router::Bgp::has_data() const
{
    for (std::size_t index=0; index<distribute_list.size(); index++)
    {
        if(distribute_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return id.is_set
	|| auto_summary.is_set
	|| default_metric.is_set
	|| synchronization.is_set
	|| (address_family !=  nullptr && address_family->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (maximum_paths !=  nullptr && maximum_paths->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (table_map !=  nullptr && table_map->has_data())
	|| (template_ !=  nullptr && template_->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Router::Bgp::has_operation() const
{
    for (std::size_t index=0; index<distribute_list.size(); index++)
    {
        if(distribute_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(auto_summary.operation)
	|| is_set(default_metric.operation)
	|| is_set(synchronization.operation)
	|| (address_family !=  nullptr && address_family->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (maximum_paths !=  nullptr && maximum_paths->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (table_map !=  nullptr && table_map->has_operation())
	|| (template_ !=  nullptr && template_->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Router::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp:bgp" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (auto_summary.is_set || is_set(auto_summary.operation)) leaf_name_data.push_back(auto_summary.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.operation)) leaf_name_data.push_back(synchronization.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::Router::Bgp::AddressFamily>();
        }
        return address_family;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Bgp::Bgp_>();
        }
        return bgp;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Bgp::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Bgp::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "distribute-list")
    {
        for(auto const & c : distribute_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::DistributeList>();
        c->parent = this;
        distribute_list.push_back(c);
        return c;
    }

    if(child_yang_name == "maximum-paths")
    {
        if(maximum_paths == nullptr)
        {
            maximum_paths = std::make_shared<Native::Router::Bgp::MaximumPaths>();
        }
        return maximum_paths;
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        for(auto const & c : network)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Bgp::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Router::Bgp::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "table-map")
    {
        if(table_map == nullptr)
        {
            table_map = std::make_shared<Native::Router::Bgp::TableMap>();
        }
        return table_map;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::Router::Bgp::Template_>();
        }
        return template_;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Bgp::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    for (auto const & c : distribute_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(maximum_paths != nullptr)
    {
        children["maximum-paths"] = maximum_paths;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : network)
    {
        children[c->get_segment_path()] = c;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(table_map != nullptr)
    {
        children["table-map"] = table_map;
    }

    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Native::Router::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "auto-summary")
    {
        auto_summary = value;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
    }
}

Native::Router::Bgp::Bgp_::Bgp_()
    :
    advertise_best_external{YType::empty, "advertise-best-external"},
    aggregate_timer{YType::uint8, "aggregate-timer"},
    always_compare_med{YType::empty, "always-compare-med"},
    cluster_id{YType::str, "cluster-id"},
    deterministic_med{YType::empty, "deterministic-med"},
    dmzlink_bw{YType::empty, "dmzlink-bw"},
    enforce_first_as{YType::empty, "enforce-first-as"},
    enhanced_error{YType::empty, "enhanced-error"},
    fast_external_fallover{YType::boolean, "fast-external-fallover"},
    log_neighbor_changes{YType::empty, "log-neighbor-changes"},
    maxas_limit{YType::uint16, "maxas-limit"},
    maxcommunity_limit{YType::uint16, "maxcommunity-limit"},
    redistribute_internal{YType::empty, "redistribute-internal"},
    router_id{YType::str, "router-id"},
    scan_time{YType::uint8, "scan-time"},
    soft_reconfig_backup{YType::empty, "soft-reconfig-backup"},
    suppress_inactive{YType::empty, "suppress-inactive"},
    update_delay{YType::uint16, "update-delay"}
    	,
    additional_paths(std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths>())
	,asnotation(std::make_shared<Native::Router::Bgp::Bgp_::Asnotation>())
	,bestpath(std::make_shared<Native::Router::Bgp::Bgp_::Bestpath>())
	,client_to_client(std::make_shared<Native::Router::Bgp::Bgp_::ClientToClient>())
	,confederation(std::make_shared<Native::Router::Bgp::Bgp_::Confederation>())
	,consistency_checker(std::make_shared<Native::Router::Bgp::Bgp_::ConsistencyChecker>())
	,dampening(nullptr) // presence node
	,default_(std::make_shared<Native::Router::Bgp::Bgp_::Default_>())
	,graceful_restart(nullptr) // presence node
	,ha_mode(std::make_shared<Native::Router::Bgp::Bgp_::HaMode>())
	,nexthop(std::make_shared<Native::Router::Bgp::Bgp_::Nexthop>())
	,nopeerup_delay(std::make_shared<Native::Router::Bgp::Bgp_::NopeerupDelay>())
	,recursion(std::make_shared<Native::Router::Bgp::Bgp_::Recursion>())
	,regexp(std::make_shared<Native::Router::Bgp::Bgp_::Regexp>())
	,route_map(std::make_shared<Native::Router::Bgp::Bgp_::RouteMap>())
	,slow_peer(std::make_shared<Native::Router::Bgp::Bgp_::SlowPeer>())
	,transport(std::make_shared<Native::Router::Bgp::Bgp_::Transport>())
	,update_group(std::make_shared<Native::Router::Bgp::Bgp_::UpdateGroup>())
{
    additional_paths->parent = this;

    asnotation->parent = this;

    bestpath->parent = this;

    client_to_client->parent = this;

    confederation->parent = this;

    consistency_checker->parent = this;

    default_->parent = this;

    ha_mode->parent = this;

    nexthop->parent = this;

    nopeerup_delay->parent = this;

    recursion->parent = this;

    regexp->parent = this;

    route_map->parent = this;

    slow_peer->parent = this;

    transport->parent = this;

    update_group->parent = this;

    yang_name = "bgp"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::~Bgp_()
{
}

bool Native::Router::Bgp::Bgp_::has_data() const
{
    for (std::size_t index=0; index<inject_map.size(); index++)
    {
        if(inject_map[index]->has_data())
            return true;
    }
    return advertise_best_external.is_set
	|| aggregate_timer.is_set
	|| always_compare_med.is_set
	|| cluster_id.is_set
	|| deterministic_med.is_set
	|| dmzlink_bw.is_set
	|| enforce_first_as.is_set
	|| enhanced_error.is_set
	|| fast_external_fallover.is_set
	|| log_neighbor_changes.is_set
	|| maxas_limit.is_set
	|| maxcommunity_limit.is_set
	|| redistribute_internal.is_set
	|| router_id.is_set
	|| scan_time.is_set
	|| soft_reconfig_backup.is_set
	|| suppress_inactive.is_set
	|| update_delay.is_set
	|| (additional_paths !=  nullptr && additional_paths->has_data())
	|| (asnotation !=  nullptr && asnotation->has_data())
	|| (bestpath !=  nullptr && bestpath->has_data())
	|| (client_to_client !=  nullptr && client_to_client->has_data())
	|| (confederation !=  nullptr && confederation->has_data())
	|| (consistency_checker !=  nullptr && consistency_checker->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (ha_mode !=  nullptr && ha_mode->has_data())
	|| (nexthop !=  nullptr && nexthop->has_data())
	|| (nopeerup_delay !=  nullptr && nopeerup_delay->has_data())
	|| (recursion !=  nullptr && recursion->has_data())
	|| (regexp !=  nullptr && regexp->has_data())
	|| (route_map !=  nullptr && route_map->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (update_group !=  nullptr && update_group->has_data());
}

bool Native::Router::Bgp::Bgp_::has_operation() const
{
    for (std::size_t index=0; index<inject_map.size(); index++)
    {
        if(inject_map[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(advertise_best_external.operation)
	|| is_set(aggregate_timer.operation)
	|| is_set(always_compare_med.operation)
	|| is_set(cluster_id.operation)
	|| is_set(deterministic_med.operation)
	|| is_set(dmzlink_bw.operation)
	|| is_set(enforce_first_as.operation)
	|| is_set(enhanced_error.operation)
	|| is_set(fast_external_fallover.operation)
	|| is_set(log_neighbor_changes.operation)
	|| is_set(maxas_limit.operation)
	|| is_set(maxcommunity_limit.operation)
	|| is_set(redistribute_internal.operation)
	|| is_set(router_id.operation)
	|| is_set(scan_time.operation)
	|| is_set(soft_reconfig_backup.operation)
	|| is_set(suppress_inactive.operation)
	|| is_set(update_delay.operation)
	|| (additional_paths !=  nullptr && additional_paths->has_operation())
	|| (asnotation !=  nullptr && asnotation->has_operation())
	|| (bestpath !=  nullptr && bestpath->has_operation())
	|| (client_to_client !=  nullptr && client_to_client->has_operation())
	|| (confederation !=  nullptr && confederation->has_operation())
	|| (consistency_checker !=  nullptr && consistency_checker->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (ha_mode !=  nullptr && ha_mode->has_operation())
	|| (nexthop !=  nullptr && nexthop->has_operation())
	|| (nopeerup_delay !=  nullptr && nopeerup_delay->has_operation())
	|| (recursion !=  nullptr && recursion->has_operation())
	|| (regexp !=  nullptr && regexp->has_operation())
	|| (route_map !=  nullptr && route_map->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (update_group !=  nullptr && update_group->has_operation());
}

std::string Native::Router::Bgp::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_best_external.is_set || is_set(advertise_best_external.operation)) leaf_name_data.push_back(advertise_best_external.get_name_leafdata());
    if (aggregate_timer.is_set || is_set(aggregate_timer.operation)) leaf_name_data.push_back(aggregate_timer.get_name_leafdata());
    if (always_compare_med.is_set || is_set(always_compare_med.operation)) leaf_name_data.push_back(always_compare_med.get_name_leafdata());
    if (cluster_id.is_set || is_set(cluster_id.operation)) leaf_name_data.push_back(cluster_id.get_name_leafdata());
    if (deterministic_med.is_set || is_set(deterministic_med.operation)) leaf_name_data.push_back(deterministic_med.get_name_leafdata());
    if (dmzlink_bw.is_set || is_set(dmzlink_bw.operation)) leaf_name_data.push_back(dmzlink_bw.get_name_leafdata());
    if (enforce_first_as.is_set || is_set(enforce_first_as.operation)) leaf_name_data.push_back(enforce_first_as.get_name_leafdata());
    if (enhanced_error.is_set || is_set(enhanced_error.operation)) leaf_name_data.push_back(enhanced_error.get_name_leafdata());
    if (fast_external_fallover.is_set || is_set(fast_external_fallover.operation)) leaf_name_data.push_back(fast_external_fallover.get_name_leafdata());
    if (log_neighbor_changes.is_set || is_set(log_neighbor_changes.operation)) leaf_name_data.push_back(log_neighbor_changes.get_name_leafdata());
    if (maxas_limit.is_set || is_set(maxas_limit.operation)) leaf_name_data.push_back(maxas_limit.get_name_leafdata());
    if (maxcommunity_limit.is_set || is_set(maxcommunity_limit.operation)) leaf_name_data.push_back(maxcommunity_limit.get_name_leafdata());
    if (redistribute_internal.is_set || is_set(redistribute_internal.operation)) leaf_name_data.push_back(redistribute_internal.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (scan_time.is_set || is_set(scan_time.operation)) leaf_name_data.push_back(scan_time.get_name_leafdata());
    if (soft_reconfig_backup.is_set || is_set(soft_reconfig_backup.operation)) leaf_name_data.push_back(soft_reconfig_backup.get_name_leafdata());
    if (suppress_inactive.is_set || is_set(suppress_inactive.operation)) leaf_name_data.push_back(suppress_inactive.get_name_leafdata());
    if (update_delay.is_set || is_set(update_delay.operation)) leaf_name_data.push_back(update_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "additional-paths")
    {
        if(additional_paths == nullptr)
        {
            additional_paths = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths>();
        }
        return additional_paths;
    }

    if(child_yang_name == "asnotation")
    {
        if(asnotation == nullptr)
        {
            asnotation = std::make_shared<Native::Router::Bgp::Bgp_::Asnotation>();
        }
        return asnotation;
    }

    if(child_yang_name == "bestpath")
    {
        if(bestpath == nullptr)
        {
            bestpath = std::make_shared<Native::Router::Bgp::Bgp_::Bestpath>();
        }
        return bestpath;
    }

    if(child_yang_name == "client-to-client")
    {
        if(client_to_client == nullptr)
        {
            client_to_client = std::make_shared<Native::Router::Bgp::Bgp_::ClientToClient>();
        }
        return client_to_client;
    }

    if(child_yang_name == "confederation")
    {
        if(confederation == nullptr)
        {
            confederation = std::make_shared<Native::Router::Bgp::Bgp_::Confederation>();
        }
        return confederation;
    }

    if(child_yang_name == "consistency-checker")
    {
        if(consistency_checker == nullptr)
        {
            consistency_checker = std::make_shared<Native::Router::Bgp::Bgp_::ConsistencyChecker>();
        }
        return consistency_checker;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::Router::Bgp::Bgp_::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Bgp::Bgp_::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Router::Bgp::Bgp_::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "ha-mode")
    {
        if(ha_mode == nullptr)
        {
            ha_mode = std::make_shared<Native::Router::Bgp::Bgp_::HaMode>();
        }
        return ha_mode;
    }

    if(child_yang_name == "inject-map")
    {
        for(auto const & c : inject_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Bgp_::InjectMap>();
        c->parent = this;
        inject_map.push_back(c);
        return c;
    }

    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<Native::Router::Bgp::Bgp_::Nexthop>();
        }
        return nexthop;
    }

    if(child_yang_name == "nopeerup-delay")
    {
        if(nopeerup_delay == nullptr)
        {
            nopeerup_delay = std::make_shared<Native::Router::Bgp::Bgp_::NopeerupDelay>();
        }
        return nopeerup_delay;
    }

    if(child_yang_name == "recursion")
    {
        if(recursion == nullptr)
        {
            recursion = std::make_shared<Native::Router::Bgp::Bgp_::Recursion>();
        }
        return recursion;
    }

    if(child_yang_name == "regexp")
    {
        if(regexp == nullptr)
        {
            regexp = std::make_shared<Native::Router::Bgp::Bgp_::Regexp>();
        }
        return regexp;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::Bgp::Bgp_::RouteMap>();
        }
        return route_map;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::Bgp_::SlowPeer>();
        }
        return slow_peer;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Router::Bgp::Bgp_::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "update-group")
    {
        if(update_group == nullptr)
        {
            update_group = std::make_shared<Native::Router::Bgp::Bgp_::UpdateGroup>();
        }
        return update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(additional_paths != nullptr)
    {
        children["additional-paths"] = additional_paths;
    }

    if(asnotation != nullptr)
    {
        children["asnotation"] = asnotation;
    }

    if(bestpath != nullptr)
    {
        children["bestpath"] = bestpath;
    }

    if(client_to_client != nullptr)
    {
        children["client-to-client"] = client_to_client;
    }

    if(confederation != nullptr)
    {
        children["confederation"] = confederation;
    }

    if(consistency_checker != nullptr)
    {
        children["consistency-checker"] = consistency_checker;
    }

    if(dampening != nullptr)
    {
        children["dampening"] = dampening;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(ha_mode != nullptr)
    {
        children["ha-mode"] = ha_mode;
    }

    for (auto const & c : inject_map)
    {
        children[c->get_segment_path()] = c;
    }

    if(nexthop != nullptr)
    {
        children["nexthop"] = nexthop;
    }

    if(nopeerup_delay != nullptr)
    {
        children["nopeerup-delay"] = nopeerup_delay;
    }

    if(recursion != nullptr)
    {
        children["recursion"] = recursion;
    }

    if(regexp != nullptr)
    {
        children["regexp"] = regexp;
    }

    if(route_map != nullptr)
    {
        children["route-map"] = route_map;
    }

    if(slow_peer != nullptr)
    {
        children["slow-peer"] = slow_peer;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(update_group != nullptr)
    {
        children["update-group"] = update_group;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertise-best-external")
    {
        advertise_best_external = value;
    }
    if(value_path == "aggregate-timer")
    {
        aggregate_timer = value;
    }
    if(value_path == "always-compare-med")
    {
        always_compare_med = value;
    }
    if(value_path == "cluster-id")
    {
        cluster_id = value;
    }
    if(value_path == "deterministic-med")
    {
        deterministic_med = value;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw = value;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as = value;
    }
    if(value_path == "enhanced-error")
    {
        enhanced_error = value;
    }
    if(value_path == "fast-external-fallover")
    {
        fast_external_fallover = value;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes = value;
    }
    if(value_path == "maxas-limit")
    {
        maxas_limit = value;
    }
    if(value_path == "maxcommunity-limit")
    {
        maxcommunity_limit = value;
    }
    if(value_path == "redistribute-internal")
    {
        redistribute_internal = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
    if(value_path == "scan-time")
    {
        scan_time = value;
    }
    if(value_path == "soft-reconfig-backup")
    {
        soft_reconfig_backup = value;
    }
    if(value_path == "suppress-inactive")
    {
        suppress_inactive = value;
    }
    if(value_path == "update-delay")
    {
        update_delay = value;
    }
}

Native::Router::Bgp::Bgp_::Asnotation::Asnotation()
    :
    dot{YType::empty, "dot"}
{
    yang_name = "asnotation"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::Asnotation::~Asnotation()
{
}

bool Native::Router::Bgp::Bgp_::Asnotation::has_data() const
{
    return dot.is_set;
}

bool Native::Router::Bgp::Bgp_::Asnotation::has_operation() const
{
    return is_set(operation)
	|| is_set(dot.operation);
}

std::string Native::Router::Bgp::Bgp_::Asnotation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asnotation";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Asnotation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Asnotation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot.is_set || is_set(dot.operation)) leaf_name_data.push_back(dot.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Asnotation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Asnotation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Asnotation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot")
    {
        dot = value;
    }
}

Native::Router::Bgp::Bgp_::NopeerupDelay::NopeerupDelay()
    :
    cold_boot{YType::uint16, "cold-boot"},
    nsf_switchover{YType::uint16, "nsf-switchover"},
    post_boot{YType::uint16, "post-boot"},
    user_initiated{YType::uint16, "user-initiated"}
{
    yang_name = "nopeerup-delay"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::NopeerupDelay::~NopeerupDelay()
{
}

bool Native::Router::Bgp::Bgp_::NopeerupDelay::has_data() const
{
    return cold_boot.is_set
	|| nsf_switchover.is_set
	|| post_boot.is_set
	|| user_initiated.is_set;
}

bool Native::Router::Bgp::Bgp_::NopeerupDelay::has_operation() const
{
    return is_set(operation)
	|| is_set(cold_boot.operation)
	|| is_set(nsf_switchover.operation)
	|| is_set(post_boot.operation)
	|| is_set(user_initiated.operation);
}

std::string Native::Router::Bgp::Bgp_::NopeerupDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nopeerup-delay";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::NopeerupDelay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NopeerupDelay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cold_boot.is_set || is_set(cold_boot.operation)) leaf_name_data.push_back(cold_boot.get_name_leafdata());
    if (nsf_switchover.is_set || is_set(nsf_switchover.operation)) leaf_name_data.push_back(nsf_switchover.get_name_leafdata());
    if (post_boot.is_set || is_set(post_boot.operation)) leaf_name_data.push_back(post_boot.get_name_leafdata());
    if (user_initiated.is_set || is_set(user_initiated.operation)) leaf_name_data.push_back(user_initiated.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::NopeerupDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::NopeerupDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::NopeerupDelay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cold-boot")
    {
        cold_boot = value;
    }
    if(value_path == "nsf-switchover")
    {
        nsf_switchover = value;
    }
    if(value_path == "post-boot")
    {
        post_boot = value;
    }
    if(value_path == "user-initiated")
    {
        user_initiated = value;
    }
}

Native::Router::Bgp::Bgp_::Recursion::Recursion()
    :
    host{YType::empty, "host"}
{
    yang_name = "recursion"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::Recursion::~Recursion()
{
}

bool Native::Router::Bgp::Bgp_::Recursion::has_data() const
{
    return host.is_set;
}

bool Native::Router::Bgp::Bgp_::Recursion::has_operation() const
{
    return is_set(operation)
	|| is_set(host.operation);
}

std::string Native::Router::Bgp::Bgp_::Recursion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recursion";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Recursion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Recursion' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Recursion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Recursion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Recursion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host")
    {
        host = value;
    }
}

Native::Router::Bgp::Bgp_::AdditionalPaths::AdditionalPaths()
    :
    install{YType::empty, "install"},
    receive{YType::empty, "receive"}
    	,
    select(std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select>())
	,send(nullptr) // presence node
{
    select->parent = this;

    yang_name = "additional-paths"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::AdditionalPaths::~AdditionalPaths()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::has_data() const
{
    return install.is_set
	|| receive.is_set
	|| (select !=  nullptr && select->has_data())
	|| (send !=  nullptr && send->has_data());
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::has_operation() const
{
    return is_set(operation)
	|| is_set(install.operation)
	|| is_set(receive.operation)
	|| (select !=  nullptr && select->has_operation())
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::AdditionalPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdditionalPaths' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (install.is_set || is_set(install.operation)) leaf_name_data.push_back(install.get_name_leafdata());
    if (receive.is_set || is_set(receive.operation)) leaf_name_data.push_back(receive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "select")
    {
        if(select == nullptr)
        {
            select = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select>();
        }
        return select;
    }

    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(select != nullptr)
    {
        children["select"] = select;
    }

    if(send != nullptr)
    {
        children["send"] = send;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "install")
    {
        install = value;
    }
    if(value_path == "receive")
    {
        receive = value;
    }
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Select()
    :
    all(nullptr) // presence node
	,backup(nullptr) // presence node
	,best(std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best>())
	,best_external(nullptr) // presence node
	,group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "select"; yang_parent_name = "additional-paths";
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::~Select()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::has_data() const
{
    return (all !=  nullptr && all->has_data())
	|| (backup !=  nullptr && backup->has_data())
	|| (best !=  nullptr && best->has_data())
	|| (best_external !=  nullptr && best_external->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::has_operation() const
{
    return is_set(operation)
	|| (all !=  nullptr && all->has_operation())
	|| (backup !=  nullptr && backup->has_operation())
	|| (best !=  nullptr && best->has_operation())
	|| (best_external !=  nullptr && best_external->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "select";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::AdditionalPaths::Select::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Select' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All>();
        }
        return all;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best>();
        }
        return best;
    }

    if(child_yang_name == "best-external")
    {
        if(best_external == nullptr)
        {
            best_external = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal>();
        }
        return best_external;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    if(best != nullptr)
    {
        children["best"] = best;
    }

    if(best_external != nullptr)
    {
        children["best-external"] = best_external;
    }

    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::All()
    :
    best(std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best>())
	,group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "all"; yang_parent_name = "select";
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::~All()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::has_data() const
{
    return (best !=  nullptr && best->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::has_operation() const
{
    return is_set(operation)
	|| (best !=  nullptr && best->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'All' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best>();
        }
        return best;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(best != nullptr)
    {
        children["best"] = best;
    }

    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Best()
{
    yang_name = "best"; yang_parent_name = "all";
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::~Best()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Best' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::Range()
    :
    range{YType::uint8, "range"},
    group_best{YType::empty, "group-best"}
{
    yang_name = "range"; yang_parent_name = "best";
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::~Range()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::has_data() const
{
    return range.is_set
	|| group_best.is_set;
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| is_set(group_best.operation);
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (group_best.is_set || is_set(group_best.operation)) leaf_name_data.push_back(group_best.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "group-best")
    {
        group_best = value;
    }
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::GroupBest()
    :
    best{YType::uint8, "best"}
{
    yang_name = "group-best"; yang_parent_name = "all";
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::has_data() const
{
    return best.is_set;
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::has_operation() const
{
    return is_set(operation)
	|| is_set(best.operation);
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupBest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best.is_set || is_set(best.operation)) leaf_name_data.push_back(best.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "best")
    {
        best = value;
    }
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::Backup()
    :
    best_external{YType::empty, "best-external"}
{
    yang_name = "backup"; yang_parent_name = "select";
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::~Backup()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::has_data() const
{
    return best_external.is_set;
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::has_operation() const
{
    return is_set(operation)
	|| is_set(best_external.operation);
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_external.is_set || is_set(best_external.operation)) leaf_name_data.push_back(best_external.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "best-external")
    {
        best_external = value;
    }
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Best()
{
    yang_name = "best"; yang_parent_name = "select";
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::~Best()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Best' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::Range()
    :
    range{YType::uint8, "range"},
    all{YType::empty, "all"}
    	,
    group_best(nullptr) // presence node
{
    yang_name = "range"; yang_parent_name = "best";
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::~Range()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::has_data() const
{
    return range.is_set
	|| all.is_set
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| is_set(all.operation)
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "all")
    {
        all = value;
    }
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::GroupBest()
    :
    all{YType::empty, "all"}
{
    yang_name = "group-best"; yang_parent_name = "range";
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::has_data() const
{
    return all.is_set;
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation);
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupBest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::BestExternal()
    :
    backup{YType::empty, "backup"}
{
    yang_name = "best-external"; yang_parent_name = "select";
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::~BestExternal()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::has_data() const
{
    return backup.is_set;
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::has_operation() const
{
    return is_set(operation)
	|| is_set(backup.operation);
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-external";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BestExternal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup.is_set || is_set(backup.operation)) leaf_name_data.push_back(backup.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup")
    {
        backup = value;
    }
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::GroupBest()
    :
    all{YType::empty, "all"},
    best{YType::uint8, "best"}
{
    yang_name = "group-best"; yang_parent_name = "select";
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::has_data() const
{
    return all.is_set
	|| best.is_set;
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(best.operation);
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupBest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (best.is_set || is_set(best.operation)) leaf_name_data.push_back(best.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "best")
    {
        best = value;
    }
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Send::Send()
    :
    receive{YType::empty, "receive"}
{
    yang_name = "send"; yang_parent_name = "additional-paths";
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Send::~Send()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Send::has_data() const
{
    return receive.is_set;
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Send::has_operation() const
{
    return is_set(operation)
	|| is_set(receive.operation);
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::AdditionalPaths::Send::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Send' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.operation)) leaf_name_data.push_back(receive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Send::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "receive")
    {
        receive = value;
    }
}

Native::Router::Bgp::Bgp_::Bestpath::Bestpath()
    :
    compare_routerid{YType::empty, "compare-routerid"}
    	,
    cost_community(std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::CostCommunity>())
	,igp_metric(std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::IgpMetric>())
	,med(std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::Med>())
{
    cost_community->parent = this;

    igp_metric->parent = this;

    med->parent = this;

    yang_name = "bestpath"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::Bestpath::~Bestpath()
{
}

bool Native::Router::Bgp::Bgp_::Bestpath::has_data() const
{
    return compare_routerid.is_set
	|| (cost_community !=  nullptr && cost_community->has_data())
	|| (igp_metric !=  nullptr && igp_metric->has_data())
	|| (med !=  nullptr && med->has_data());
}

bool Native::Router::Bgp::Bgp_::Bestpath::has_operation() const
{
    return is_set(operation)
	|| is_set(compare_routerid.operation)
	|| (cost_community !=  nullptr && cost_community->has_operation())
	|| (igp_metric !=  nullptr && igp_metric->has_operation())
	|| (med !=  nullptr && med->has_operation());
}

std::string Native::Router::Bgp::Bgp_::Bestpath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bestpath";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Bestpath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bestpath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (compare_routerid.is_set || is_set(compare_routerid.operation)) leaf_name_data.push_back(compare_routerid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Bestpath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost-community")
    {
        if(cost_community == nullptr)
        {
            cost_community = std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::CostCommunity>();
        }
        return cost_community;
    }

    if(child_yang_name == "igp-metric")
    {
        if(igp_metric == nullptr)
        {
            igp_metric = std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::IgpMetric>();
        }
        return igp_metric;
    }

    if(child_yang_name == "med")
    {
        if(med == nullptr)
        {
            med = std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::Med>();
        }
        return med;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Bestpath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cost_community != nullptr)
    {
        children["cost-community"] = cost_community;
    }

    if(igp_metric != nullptr)
    {
        children["igp-metric"] = igp_metric;
    }

    if(med != nullptr)
    {
        children["med"] = med;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::Bestpath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "compare-routerid")
    {
        compare_routerid = value;
    }
}

Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::CostCommunity()
    :
    ignore{YType::empty, "ignore"}
{
    yang_name = "cost-community"; yang_parent_name = "bestpath";
}

Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::~CostCommunity()
{
}

bool Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::has_data() const
{
    return ignore.is_set;
}

bool Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore.operation);
}

std::string Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost-community";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CostCommunity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore")
    {
        ignore = value;
    }
}

Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::IgpMetric()
    :
    ignore{YType::empty, "ignore"}
{
    yang_name = "igp-metric"; yang_parent_name = "bestpath";
}

Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::~IgpMetric()
{
}

bool Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::has_data() const
{
    return ignore.is_set;
}

bool Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore.operation);
}

std::string Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgpMetric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore")
    {
        ignore = value;
    }
}

Native::Router::Bgp::Bgp_::Bestpath::Med::Med()
    :
    missing_at_worst{YType::empty, "missing-at-worst"}
    	,
    confed(nullptr) // presence node
{
    yang_name = "med"; yang_parent_name = "bestpath";
}

Native::Router::Bgp::Bgp_::Bestpath::Med::~Med()
{
}

bool Native::Router::Bgp::Bgp_::Bestpath::Med::has_data() const
{
    return missing_at_worst.is_set
	|| (confed !=  nullptr && confed->has_data());
}

bool Native::Router::Bgp::Bgp_::Bestpath::Med::has_operation() const
{
    return is_set(operation)
	|| is_set(missing_at_worst.operation)
	|| (confed !=  nullptr && confed->has_operation());
}

std::string Native::Router::Bgp::Bgp_::Bestpath::Med::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "med";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Bestpath::Med::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Med' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (missing_at_worst.is_set || is_set(missing_at_worst.operation)) leaf_name_data.push_back(missing_at_worst.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Bestpath::Med::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "confed")
    {
        if(confed == nullptr)
        {
            confed = std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::Med::Confed>();
        }
        return confed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Bestpath::Med::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(confed != nullptr)
    {
        children["confed"] = confed;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::Bestpath::Med::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "missing-at-worst")
    {
        missing_at_worst = value;
    }
}

Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::Confed()
    :
    missing_at_worst{YType::empty, "missing-at-worst"}
{
    yang_name = "confed"; yang_parent_name = "med";
}

Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::~Confed()
{
}

bool Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::has_data() const
{
    return missing_at_worst.is_set;
}

bool Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::has_operation() const
{
    return is_set(operation)
	|| is_set(missing_at_worst.operation);
}

std::string Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confed";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Confed' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (missing_at_worst.is_set || is_set(missing_at_worst.operation)) leaf_name_data.push_back(missing_at_worst.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "missing-at-worst")
    {
        missing_at_worst = value;
    }
}

Native::Router::Bgp::Bgp_::ClientToClient::ClientToClient()
    :
    reflection{YType::empty, "reflection"}
{
    yang_name = "client-to-client"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::ClientToClient::~ClientToClient()
{
}

bool Native::Router::Bgp::Bgp_::ClientToClient::has_data() const
{
    return reflection.is_set;
}

bool Native::Router::Bgp::Bgp_::ClientToClient::has_operation() const
{
    return is_set(operation)
	|| is_set(reflection.operation);
}

std::string Native::Router::Bgp::Bgp_::ClientToClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-to-client";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::ClientToClient::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClientToClient' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reflection.is_set || is_set(reflection.operation)) leaf_name_data.push_back(reflection.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::ClientToClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::ClientToClient::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::ClientToClient::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reflection")
    {
        reflection = value;
    }
}

Native::Router::Bgp::Bgp_::Confederation::Confederation()
    :
    identifier{YType::uint32, "identifier"}
    	,
    peers(std::make_shared<Native::Router::Bgp::Bgp_::Confederation::Peers>())
{
    peers->parent = this;

    yang_name = "confederation"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::Confederation::~Confederation()
{
}

bool Native::Router::Bgp::Bgp_::Confederation::has_data() const
{
    return identifier.is_set
	|| (peers !=  nullptr && peers->has_data());
}

bool Native::Router::Bgp::Bgp_::Confederation::has_operation() const
{
    return is_set(operation)
	|| is_set(identifier.operation)
	|| (peers !=  nullptr && peers->has_operation());
}

std::string Native::Router::Bgp::Bgp_::Confederation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confederation";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Confederation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Confederation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.operation)) leaf_name_data.push_back(identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Confederation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<Native::Router::Bgp::Bgp_::Confederation::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Confederation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::Confederation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "identifier")
    {
        identifier = value;
    }
}

Native::Router::Bgp::Bgp_::Confederation::Peers::Peers()
    :
    peers_as{YType::uint32, "peers-as"}
{
    yang_name = "peers"; yang_parent_name = "confederation";
}

Native::Router::Bgp::Bgp_::Confederation::Peers::~Peers()
{
}

bool Native::Router::Bgp::Bgp_::Confederation::Peers::has_data() const
{
    for (auto const & leaf : peers_as.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Bgp_::Confederation::Peers::has_operation() const
{
    for (auto const & leaf : peers_as.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(peers_as.operation);
}

std::string Native::Router::Bgp::Bgp_::Confederation::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Confederation::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto peers_as_name_datas = peers_as.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), peers_as_name_datas.begin(), peers_as_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Confederation::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Confederation::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Confederation::Peers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peers-as")
    {
        peers_as.append(value);
    }
}

Native::Router::Bgp::Bgp_::ConsistencyChecker::ConsistencyChecker()
    :
    auto_repair(nullptr) // presence node
	,error_message(nullptr) // presence node
{
    yang_name = "consistency-checker"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::ConsistencyChecker::~ConsistencyChecker()
{
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::has_data() const
{
    return (auto_repair !=  nullptr && auto_repair->has_data())
	|| (error_message !=  nullptr && error_message->has_data());
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::has_operation() const
{
    return is_set(operation)
	|| (auto_repair !=  nullptr && auto_repair->has_operation())
	|| (error_message !=  nullptr && error_message->has_operation());
}

std::string Native::Router::Bgp::Bgp_::ConsistencyChecker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "consistency-checker";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::ConsistencyChecker::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConsistencyChecker' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::ConsistencyChecker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-repair")
    {
        if(auto_repair == nullptr)
        {
            auto_repair = std::make_shared<Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair>();
        }
        return auto_repair;
    }

    if(child_yang_name == "error-message")
    {
        if(error_message == nullptr)
        {
            error_message = std::make_shared<Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage>();
        }
        return error_message;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::ConsistencyChecker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_repair != nullptr)
    {
        children["auto-repair"] = auto_repair;
    }

    if(error_message != nullptr)
    {
        children["error-message"] = error_message;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::ConsistencyChecker::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::AutoRepair()
    :
    interval{YType::uint16, "interval"}
{
    yang_name = "auto-repair"; yang_parent_name = "consistency-checker";
}

Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::~AutoRepair()
{
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::has_data() const
{
    return interval.is_set;
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation);
}

std::string Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-repair";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoRepair' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::ErrorMessage()
    :
    interval{YType::uint16, "interval"}
{
    yang_name = "error-message"; yang_parent_name = "consistency-checker";
}

Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::~ErrorMessage()
{
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::has_data() const
{
    return interval.is_set;
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation);
}

std::string Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-message";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ErrorMessage' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Router::Bgp::Bgp_::Dampening::Dampening()
    :
    route_map{YType::str, "route-map"}
    	,
    dampen(std::make_shared<Native::Router::Bgp::Bgp_::Dampening::Dampen>())
{
    dampen->parent = this;

    yang_name = "dampening"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::Dampening::~Dampening()
{
}

bool Native::Router::Bgp::Bgp_::Dampening::has_data() const
{
    return route_map.is_set
	|| (dampen !=  nullptr && dampen->has_data());
}

bool Native::Router::Bgp::Bgp_::Dampening::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (dampen !=  nullptr && dampen->has_operation());
}

std::string Native::Router::Bgp::Bgp_::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Dampening::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dampening' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dampen")
    {
        if(dampen == nullptr)
        {
            dampen = std::make_shared<Native::Router::Bgp::Bgp_::Dampening::Dampen>();
        }
        return dampen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dampen != nullptr)
    {
        children["dampen"] = dampen;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::Dampening::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Bgp::Bgp_::Dampening::Dampen::Dampen()
    :
    half_life_time{YType::uint8, "half-life-time"},
    max_suppress_time{YType::uint8, "max-suppress-time"},
    reuse_time{YType::uint16, "reuse-time"},
    suppress_time{YType::uint16, "suppress-time"}
{
    yang_name = "dampen"; yang_parent_name = "dampening";
}

Native::Router::Bgp::Bgp_::Dampening::Dampen::~Dampen()
{
}

bool Native::Router::Bgp::Bgp_::Dampening::Dampen::has_data() const
{
    return half_life_time.is_set
	|| max_suppress_time.is_set
	|| reuse_time.is_set
	|| suppress_time.is_set;
}

bool Native::Router::Bgp::Bgp_::Dampening::Dampen::has_operation() const
{
    return is_set(operation)
	|| is_set(half_life_time.operation)
	|| is_set(max_suppress_time.operation)
	|| is_set(reuse_time.operation)
	|| is_set(suppress_time.operation);
}

std::string Native::Router::Bgp::Bgp_::Dampening::Dampen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampen";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Dampening::Dampen::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dampen' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (half_life_time.is_set || is_set(half_life_time.operation)) leaf_name_data.push_back(half_life_time.get_name_leafdata());
    if (max_suppress_time.is_set || is_set(max_suppress_time.operation)) leaf_name_data.push_back(max_suppress_time.get_name_leafdata());
    if (reuse_time.is_set || is_set(reuse_time.operation)) leaf_name_data.push_back(reuse_time.get_name_leafdata());
    if (suppress_time.is_set || is_set(suppress_time.operation)) leaf_name_data.push_back(suppress_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Dampening::Dampen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Dampening::Dampen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Dampening::Dampen::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "half-life-time")
    {
        half_life_time = value;
    }
    if(value_path == "max-suppress-time")
    {
        max_suppress_time = value;
    }
    if(value_path == "reuse-time")
    {
        reuse_time = value;
    }
    if(value_path == "suppress-time")
    {
        suppress_time = value;
    }
}

Native::Router::Bgp::Bgp_::Default_::Default_()
    :
    ipv4_unicast{YType::boolean, "ipv4-unicast"},
    ipv6_nexthop{YType::empty, "ipv6-nexthop"},
    local_preference{YType::uint32, "local-preference"},
    route_target{YType::enumeration, "route-target"}
{
    yang_name = "default"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::Default_::~Default_()
{
}

bool Native::Router::Bgp::Bgp_::Default_::has_data() const
{
    return ipv4_unicast.is_set
	|| ipv6_nexthop.is_set
	|| local_preference.is_set
	|| route_target.is_set;
}

bool Native::Router::Bgp::Bgp_::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_unicast.operation)
	|| is_set(ipv6_nexthop.operation)
	|| is_set(local_preference.operation)
	|| is_set(route_target.operation);
}

std::string Native::Router::Bgp::Bgp_::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_unicast.is_set || is_set(ipv4_unicast.operation)) leaf_name_data.push_back(ipv4_unicast.get_name_leafdata());
    if (ipv6_nexthop.is_set || is_set(ipv6_nexthop.operation)) leaf_name_data.push_back(ipv6_nexthop.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.operation)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (route_target.is_set || is_set(route_target.operation)) leaf_name_data.push_back(route_target.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-unicast")
    {
        ipv4_unicast = value;
    }
    if(value_path == "ipv6-nexthop")
    {
        ipv6_nexthop = value;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
    }
    if(value_path == "route-target")
    {
        route_target = value;
    }
}

Native::Router::Bgp::Bgp_::GracefulRestart::GracefulRestart()
    :
    extended{YType::empty, "extended"},
    restart_time{YType::uint16, "restart-time"},
    stalepath_time{YType::uint16, "stalepath-time"}
{
    yang_name = "graceful-restart"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Bgp::Bgp_::GracefulRestart::has_data() const
{
    return extended.is_set
	|| restart_time.is_set
	|| stalepath_time.is_set;
}

bool Native::Router::Bgp::Bgp_::GracefulRestart::has_operation() const
{
    return is_set(operation)
	|| is_set(extended.operation)
	|| is_set(restart_time.operation)
	|| is_set(stalepath_time.operation);
}

std::string Native::Router::Bgp::Bgp_::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulRestart' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended.is_set || is_set(extended.operation)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.operation)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (stalepath_time.is_set || is_set(stalepath_time.operation)) leaf_name_data.push_back(stalepath_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::GracefulRestart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extended")
    {
        extended = value;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
    }
    if(value_path == "stalepath-time")
    {
        stalepath_time = value;
    }
}

Native::Router::Bgp::Bgp_::HaMode::HaMode()
    :
    sso(nullptr) // presence node
{
    yang_name = "ha-mode"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::HaMode::~HaMode()
{
}

bool Native::Router::Bgp::Bgp_::HaMode::has_data() const
{
    return (sso !=  nullptr && sso->has_data());
}

bool Native::Router::Bgp::Bgp_::HaMode::has_operation() const
{
    return is_set(operation)
	|| (sso !=  nullptr && sso->has_operation());
}

std::string Native::Router::Bgp::Bgp_::HaMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-mode";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::HaMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HaMode' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::HaMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sso")
    {
        if(sso == nullptr)
        {
            sso = std::make_shared<Native::Router::Bgp::Bgp_::HaMode::Sso>();
        }
        return sso;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::HaMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sso != nullptr)
    {
        children["sso"] = sso;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::HaMode::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::Bgp_::HaMode::Sso::Sso()
    :
    prefer{YType::empty, "prefer"}
{
    yang_name = "sso"; yang_parent_name = "ha-mode";
}

Native::Router::Bgp::Bgp_::HaMode::Sso::~Sso()
{
}

bool Native::Router::Bgp::Bgp_::HaMode::Sso::has_data() const
{
    return prefer.is_set;
}

bool Native::Router::Bgp::Bgp_::HaMode::Sso::has_operation() const
{
    return is_set(operation)
	|| is_set(prefer.operation);
}

std::string Native::Router::Bgp::Bgp_::HaMode::Sso::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sso";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::HaMode::Sso::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sso' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefer.is_set || is_set(prefer.operation)) leaf_name_data.push_back(prefer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::HaMode::Sso::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::HaMode::Sso::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::HaMode::Sso::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefer")
    {
        prefer = value;
    }
}

Native::Router::Bgp::Bgp_::InjectMap::InjectMap()
    :
    name{YType::str, "name"},
    copy_attributes{YType::empty, "copy-attributes"},
    exist_map{YType::str, "exist-map"}
{
    yang_name = "inject-map"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::InjectMap::~InjectMap()
{
}

bool Native::Router::Bgp::Bgp_::InjectMap::has_data() const
{
    return name.is_set
	|| copy_attributes.is_set
	|| exist_map.is_set;
}

bool Native::Router::Bgp::Bgp_::InjectMap::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(copy_attributes.operation)
	|| is_set(exist_map.operation);
}

std::string Native::Router::Bgp::Bgp_::InjectMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inject-map" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::InjectMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InjectMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (copy_attributes.is_set || is_set(copy_attributes.operation)) leaf_name_data.push_back(copy_attributes.get_name_leafdata());
    if (exist_map.is_set || is_set(exist_map.operation)) leaf_name_data.push_back(exist_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::InjectMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::InjectMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::InjectMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "copy-attributes")
    {
        copy_attributes = value;
    }
    if(value_path == "exist-map")
    {
        exist_map = value;
    }
}

Native::Router::Bgp::Bgp_::RouteMap::RouteMap()
    :
    priority{YType::empty, "priority"}
{
    yang_name = "route-map"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::RouteMap::~RouteMap()
{
}

bool Native::Router::Bgp::Bgp_::RouteMap::has_data() const
{
    return priority.is_set;
}

bool Native::Router::Bgp::Bgp_::RouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(priority.operation);
}

std::string Native::Router::Bgp::Bgp_::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::RouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::RouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority")
    {
        priority = value;
    }
}

Native::Router::Bgp::Bgp_::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
	,split_update_group(std::make_shared<Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::Bgp_::SlowPeer::has_data() const
{
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::Bgp_::SlowPeer::has_operation() const
{
    return is_set(operation)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::Bgp_::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::SlowPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SlowPeer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::Bgp_::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detection != nullptr)
    {
        children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        children["split-update-group"] = split_update_group;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::SlowPeer::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::Bgp_::SlowPeer::Detection::Detection()
    :
    disable{YType::empty, "disable"},
    threshold{YType::uint16, "threshold"}
{
    yang_name = "detection"; yang_parent_name = "slow-peer";
}

Native::Router::Bgp::Bgp_::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::Bgp_::SlowPeer::Detection::has_data() const
{
    return disable.is_set
	|| threshold.is_set;
}

bool Native::Router::Bgp::Bgp_::SlowPeer::Detection::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(threshold.operation);
}

std::string Native::Router::Bgp::Bgp_::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::SlowPeer::Detection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Detection' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::SlowPeer::Detection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{
    yang_name = "split-update-group"; yang_parent_name = "slow-peer";
}

Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::has_data() const
{
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(operation)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SplitUpdateGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{
    yang_name = "dynamic"; yang_parent_name = "split-update-group";
}

Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    return permanent.is_set;
}

bool Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(operation)
	|| is_set(permanent.operation);
}

std::string Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dynamic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "permanent")
    {
        permanent = value;
    }
}

Native::Router::Bgp::Bgp_::UpdateGroup::UpdateGroup()
    :
    split(std::make_shared<Native::Router::Bgp::Bgp_::UpdateGroup::Split>())
{
    split->parent = this;

    yang_name = "update-group"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::UpdateGroup::~UpdateGroup()
{
}

bool Native::Router::Bgp::Bgp_::UpdateGroup::has_data() const
{
    return (split !=  nullptr && split->has_data());
}

bool Native::Router::Bgp::Bgp_::UpdateGroup::has_operation() const
{
    return is_set(operation)
	|| (split !=  nullptr && split->has_operation());
}

std::string Native::Router::Bgp::Bgp_::UpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-group";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::UpdateGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::UpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "split")
    {
        if(split == nullptr)
        {
            split = std::make_shared<Native::Router::Bgp::Bgp_::UpdateGroup::Split>();
        }
        return split;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::UpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(split != nullptr)
    {
        children["split"] = split;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::UpdateGroup::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::Bgp_::UpdateGroup::Split::Split()
    :
    as_override{YType::empty, "as-override"}
{
    yang_name = "split"; yang_parent_name = "update-group";
}

Native::Router::Bgp::Bgp_::UpdateGroup::Split::~Split()
{
}

bool Native::Router::Bgp::Bgp_::UpdateGroup::Split::has_data() const
{
    return as_override.is_set;
}

bool Native::Router::Bgp::Bgp_::UpdateGroup::Split::has_operation() const
{
    return is_set(operation)
	|| is_set(as_override.operation);
}

std::string Native::Router::Bgp::Bgp_::UpdateGroup::Split::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::UpdateGroup::Split::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Split' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_override.is_set || is_set(as_override.operation)) leaf_name_data.push_back(as_override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::UpdateGroup::Split::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::UpdateGroup::Split::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::UpdateGroup::Split::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-override")
    {
        as_override = value;
    }
}

Native::Router::Bgp::Bgp_::Nexthop::Nexthop()
    :
    route_map{YType::str, "route-map"}
    	,
    trigger(std::make_shared<Native::Router::Bgp::Bgp_::Nexthop::Trigger>())
{
    trigger->parent = this;

    yang_name = "nexthop"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::Nexthop::~Nexthop()
{
}

bool Native::Router::Bgp::Bgp_::Nexthop::has_data() const
{
    return route_map.is_set
	|| (trigger !=  nullptr && trigger->has_data());
}

bool Native::Router::Bgp::Bgp_::Nexthop::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (trigger !=  nullptr && trigger->has_operation());
}

std::string Native::Router::Bgp::Bgp_::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Nexthop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nexthop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger")
    {
        if(trigger == nullptr)
        {
            trigger = std::make_shared<Native::Router::Bgp::Bgp_::Nexthop::Trigger>();
        }
        return trigger;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trigger != nullptr)
    {
        children["trigger"] = trigger;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::Nexthop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Bgp::Bgp_::Nexthop::Trigger::Trigger()
    :
    delay{YType::uint8, "delay"},
    enable{YType::boolean, "enable"}
{
    yang_name = "trigger"; yang_parent_name = "nexthop";
}

Native::Router::Bgp::Bgp_::Nexthop::Trigger::~Trigger()
{
}

bool Native::Router::Bgp::Bgp_::Nexthop::Trigger::has_data() const
{
    return delay.is_set
	|| enable.is_set;
}

bool Native::Router::Bgp::Bgp_::Nexthop::Trigger::has_operation() const
{
    return is_set(operation)
	|| is_set(delay.operation)
	|| is_set(enable.operation);
}

std::string Native::Router::Bgp::Bgp_::Nexthop::Trigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Nexthop::Trigger::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Trigger' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Nexthop::Trigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Nexthop::Trigger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Nexthop::Trigger::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delay")
    {
        delay = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Native::Router::Bgp::Bgp_::Regexp::Regexp()
    :
    deterministic{YType::empty, "deterministic"}
{
    yang_name = "regexp"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::Regexp::~Regexp()
{
}

bool Native::Router::Bgp::Bgp_::Regexp::has_data() const
{
    return deterministic.is_set;
}

bool Native::Router::Bgp::Bgp_::Regexp::has_operation() const
{
    return is_set(operation)
	|| is_set(deterministic.operation);
}

std::string Native::Router::Bgp::Bgp_::Regexp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "regexp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Regexp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Regexp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deterministic.is_set || is_set(deterministic.operation)) leaf_name_data.push_back(deterministic.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Regexp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Regexp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Regexp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "deterministic")
    {
        deterministic = value;
    }
}

Native::Router::Bgp::Bgp_::Transport::Transport()
    :
    path_mtu_discovery{YType::boolean, "path-mtu-discovery"}
{
    yang_name = "transport"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::Transport::~Transport()
{
}

bool Native::Router::Bgp::Bgp_::Transport::has_data() const
{
    return path_mtu_discovery.is_set;
}

bool Native::Router::Bgp::Bgp_::Transport::has_operation() const
{
    return is_set(operation)
	|| is_set(path_mtu_discovery.operation);
}

std::string Native::Router::Bgp::Bgp_::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Transport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_mtu_discovery.is_set || is_set(path_mtu_discovery.operation)) leaf_name_data.push_back(path_mtu_discovery.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Transport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-mtu-discovery")
    {
        path_mtu_discovery = value;
    }
}

Native::Router::Bgp::DefaultInformation::DefaultInformation()
    :
    originate{YType::empty, "originate"}
{
    yang_name = "default-information"; yang_parent_name = "bgp";
}

Native::Router::Bgp::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Bgp::DefaultInformation::has_data() const
{
    return originate.is_set;
}

bool Native::Router::Bgp::DefaultInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(originate.operation);
}

std::string Native::Router::Bgp::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::DefaultInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultInformation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originate.is_set || is_set(originate.operation)) leaf_name_data.push_back(originate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::DefaultInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "originate")
    {
        originate = value;
    }
}

Native::Router::Bgp::Distance::Distance()
    :
    bgp(std::make_shared<Native::Router::Bgp::Distance::Bgp_>())
{
    bgp->parent = this;

    yang_name = "distance"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Distance::~Distance()
{
}

bool Native::Router::Bgp::Distance::has_data() const
{
    for (std::size_t index=0; index<adm_distance.size(); index++)
    {
        if(adm_distance[index]->has_data())
            return true;
    }
    return (bgp !=  nullptr && bgp->has_data());
}

bool Native::Router::Bgp::Distance::has_operation() const
{
    for (std::size_t index=0; index<adm_distance.size(); index++)
    {
        if(adm_distance[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Native::Router::Bgp::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Distance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Distance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adm-distance")
    {
        for(auto const & c : adm_distance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Distance::AdmDistance>();
        c->parent = this;
        adm_distance.push_back(c);
        return c;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Bgp::Distance::Bgp_>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : adm_distance)
    {
        children[c->get_segment_path()] = c;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void Native::Router::Bgp::Distance::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::Distance::Bgp_::Bgp_()
    :
    extern_as{YType::uint16, "extern-as"},
    internal_as{YType::uint16, "internal-as"},
    local{YType::uint16, "local"}
{
    yang_name = "bgp"; yang_parent_name = "distance";
}

Native::Router::Bgp::Distance::Bgp_::~Bgp_()
{
}

bool Native::Router::Bgp::Distance::Bgp_::has_data() const
{
    return extern_as.is_set
	|| internal_as.is_set
	|| local.is_set;
}

bool Native::Router::Bgp::Distance::Bgp_::has_operation() const
{
    return is_set(operation)
	|| is_set(extern_as.operation)
	|| is_set(internal_as.operation)
	|| is_set(local.operation);
}

std::string Native::Router::Bgp::Distance::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Distance::Bgp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extern_as.is_set || is_set(extern_as.operation)) leaf_name_data.push_back(extern_as.get_name_leafdata());
    if (internal_as.is_set || is_set(internal_as.operation)) leaf_name_data.push_back(internal_as.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Distance::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Distance::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Distance::Bgp_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extern-as")
    {
        extern_as = value;
    }
    if(value_path == "internal-as")
    {
        internal_as = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
}

Native::Router::Bgp::Distance::AdmDistance::AdmDistance()
    :
    distance{YType::uint16, "distance"},
    srcip{YType::str, "srcip"},
    wildbits{YType::str, "wildbits"},
    acl{YType::str, "acl"}
{
    yang_name = "adm-distance"; yang_parent_name = "distance";
}

Native::Router::Bgp::Distance::AdmDistance::~AdmDistance()
{
}

bool Native::Router::Bgp::Distance::AdmDistance::has_data() const
{
    return distance.is_set
	|| srcip.is_set
	|| wildbits.is_set
	|| acl.is_set;
}

bool Native::Router::Bgp::Distance::AdmDistance::has_operation() const
{
    return is_set(operation)
	|| is_set(distance.operation)
	|| is_set(srcip.operation)
	|| is_set(wildbits.operation)
	|| is_set(acl.operation);
}

std::string Native::Router::Bgp::Distance::AdmDistance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adm-distance" <<"[distance='" <<distance <<"']" <<"[srcip='" <<srcip <<"']" <<"[wildbits='" <<wildbits <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Distance::AdmDistance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdmDistance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.operation)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (wildbits.is_set || is_set(wildbits.operation)) leaf_name_data.push_back(wildbits.get_name_leafdata());
    if (acl.is_set || is_set(acl.operation)) leaf_name_data.push_back(acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Distance::AdmDistance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Distance::AdmDistance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Distance::AdmDistance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "srcip")
    {
        srcip = value;
    }
    if(value_path == "wildbits")
    {
        wildbits = value;
    }
    if(value_path == "acl")
    {
        acl = value;
    }
}

Native::Router::Bgp::DistributeList::DistributeList()
    :
    id{YType::str, "id"}
    	,
    in(nullptr) // presence node
	,out(nullptr) // presence node
{
    yang_name = "distribute-list"; yang_parent_name = "bgp";
}

Native::Router::Bgp::DistributeList::~DistributeList()
{
}

bool Native::Router::Bgp::DistributeList::has_data() const
{
    return id.is_set
	|| (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Router::Bgp::DistributeList::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Router::Bgp::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Router::Bgp::DistributeList::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Router::Bgp::DistributeList::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in != nullptr)
    {
        children["in"] = in;
    }

    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Router::Bgp::DistributeList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::Bgp::DistributeList::In::In()
    :
    interface{YType::str, "interface"}
{
    yang_name = "in"; yang_parent_name = "distribute-list";
}

Native::Router::Bgp::DistributeList::In::~In()
{
}

bool Native::Router::Bgp::DistributeList::In::has_data() const
{
    return interface.is_set;
}

bool Native::Router::Bgp::DistributeList::In::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string Native::Router::Bgp::DistributeList::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::DistributeList::In::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'In' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::DistributeList::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::DistributeList::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::DistributeList::In::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

Native::Router::Bgp::DistributeList::Out::Out()
    :
    interface{YType::str, "interface"}
{
    yang_name = "out"; yang_parent_name = "distribute-list";
}

Native::Router::Bgp::DistributeList::Out::~Out()
{
}

bool Native::Router::Bgp::DistributeList::Out::has_data() const
{
    return interface.is_set;
}

bool Native::Router::Bgp::DistributeList::Out::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string Native::Router::Bgp::DistributeList::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::DistributeList::Out::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Out' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::DistributeList::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::DistributeList::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::DistributeList::Out::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

Native::Router::Bgp::MaximumPaths::MaximumPaths()
    :
    eibgp(std::make_shared<Native::Router::Bgp::MaximumPaths::Eibgp>())
	,external_rtfilter(std::make_shared<Native::Router::Bgp::MaximumPaths::ExternalRtfilter>())
	,ibgp(std::make_shared<Native::Router::Bgp::MaximumPaths::Ibgp>())
	,max_path(std::make_shared<Native::Router::Bgp::MaximumPaths::MaxPath>())
{
    eibgp->parent = this;

    external_rtfilter->parent = this;

    ibgp->parent = this;

    max_path->parent = this;

    yang_name = "maximum-paths"; yang_parent_name = "bgp";
}

Native::Router::Bgp::MaximumPaths::~MaximumPaths()
{
}

bool Native::Router::Bgp::MaximumPaths::has_data() const
{
    return (eibgp !=  nullptr && eibgp->has_data())
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_data())
	|| (ibgp !=  nullptr && ibgp->has_data())
	|| (max_path !=  nullptr && max_path->has_data());
}

bool Native::Router::Bgp::MaximumPaths::has_operation() const
{
    return is_set(operation)
	|| (eibgp !=  nullptr && eibgp->has_operation())
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_operation())
	|| (ibgp !=  nullptr && ibgp->has_operation())
	|| (max_path !=  nullptr && max_path->has_operation());
}

std::string Native::Router::Bgp::MaximumPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-paths";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::MaximumPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumPaths' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::MaximumPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eibgp")
    {
        if(eibgp == nullptr)
        {
            eibgp = std::make_shared<Native::Router::Bgp::MaximumPaths::Eibgp>();
        }
        return eibgp;
    }

    if(child_yang_name == "external-rtfilter")
    {
        if(external_rtfilter == nullptr)
        {
            external_rtfilter = std::make_shared<Native::Router::Bgp::MaximumPaths::ExternalRtfilter>();
        }
        return external_rtfilter;
    }

    if(child_yang_name == "ibgp")
    {
        if(ibgp == nullptr)
        {
            ibgp = std::make_shared<Native::Router::Bgp::MaximumPaths::Ibgp>();
        }
        return ibgp;
    }

    if(child_yang_name == "max-path")
    {
        if(max_path == nullptr)
        {
            max_path = std::make_shared<Native::Router::Bgp::MaximumPaths::MaxPath>();
        }
        return max_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::MaximumPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eibgp != nullptr)
    {
        children["eibgp"] = eibgp;
    }

    if(external_rtfilter != nullptr)
    {
        children["external-rtfilter"] = external_rtfilter;
    }

    if(ibgp != nullptr)
    {
        children["ibgp"] = ibgp;
    }

    if(max_path != nullptr)
    {
        children["max-path"] = max_path;
    }

    return children;
}

void Native::Router::Bgp::MaximumPaths::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::MaximumPaths::MaxPath::MaxPath()
    :
    max{YType::uint16, "max"}
{
    yang_name = "max-path"; yang_parent_name = "maximum-paths";
}

Native::Router::Bgp::MaximumPaths::MaxPath::~MaxPath()
{
}

bool Native::Router::Bgp::MaximumPaths::MaxPath::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::MaximumPaths::MaxPath::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::Router::Bgp::MaximumPaths::MaxPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-path";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::MaximumPaths::MaxPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxPath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::MaximumPaths::MaxPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::MaximumPaths::MaxPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::MaximumPaths::MaxPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Router::Bgp::MaximumPaths::ExternalRtfilter::ExternalRtfilter()
    :
    max{YType::uint16, "max"}
{
    yang_name = "external-rtfilter"; yang_parent_name = "maximum-paths";
}

Native::Router::Bgp::MaximumPaths::ExternalRtfilter::~ExternalRtfilter()
{
}

bool Native::Router::Bgp::MaximumPaths::ExternalRtfilter::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::MaximumPaths::ExternalRtfilter::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::Router::Bgp::MaximumPaths::ExternalRtfilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-rtfilter";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::MaximumPaths::ExternalRtfilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalRtfilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::MaximumPaths::ExternalRtfilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::MaximumPaths::ExternalRtfilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::MaximumPaths::ExternalRtfilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Router::Bgp::MaximumPaths::Eibgp::Eibgp()
    :
    external_rtfilter(std::make_shared<Native::Router::Bgp::MaximumPaths::Eibgp::ExternalRtfilter>())
	,max_path(std::make_shared<Native::Router::Bgp::MaximumPaths::Eibgp::MaxPath>())
{
    external_rtfilter->parent = this;

    max_path->parent = this;

    yang_name = "eibgp"; yang_parent_name = "maximum-paths";
}

Native::Router::Bgp::MaximumPaths::Eibgp::~Eibgp()
{
}

bool Native::Router::Bgp::MaximumPaths::Eibgp::has_data() const
{
    return (external_rtfilter !=  nullptr && external_rtfilter->has_data())
	|| (max_path !=  nullptr && max_path->has_data());
}

bool Native::Router::Bgp::MaximumPaths::Eibgp::has_operation() const
{
    return is_set(operation)
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_operation())
	|| (max_path !=  nullptr && max_path->has_operation());
}

std::string Native::Router::Bgp::MaximumPaths::Eibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eibgp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::MaximumPaths::Eibgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eibgp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::MaximumPaths::Eibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-rtfilter")
    {
        if(external_rtfilter == nullptr)
        {
            external_rtfilter = std::make_shared<Native::Router::Bgp::MaximumPaths::Eibgp::ExternalRtfilter>();
        }
        return external_rtfilter;
    }

    if(child_yang_name == "max-path")
    {
        if(max_path == nullptr)
        {
            max_path = std::make_shared<Native::Router::Bgp::MaximumPaths::Eibgp::MaxPath>();
        }
        return max_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::MaximumPaths::Eibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external_rtfilter != nullptr)
    {
        children["external-rtfilter"] = external_rtfilter;
    }

    if(max_path != nullptr)
    {
        children["max-path"] = max_path;
    }

    return children;
}

void Native::Router::Bgp::MaximumPaths::Eibgp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::MaximumPaths::Eibgp::MaxPath::MaxPath()
    :
    max{YType::uint16, "max"}
{
    yang_name = "max-path"; yang_parent_name = "eibgp";
}

Native::Router::Bgp::MaximumPaths::Eibgp::MaxPath::~MaxPath()
{
}

bool Native::Router::Bgp::MaximumPaths::Eibgp::MaxPath::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::MaximumPaths::Eibgp::MaxPath::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::Router::Bgp::MaximumPaths::Eibgp::MaxPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-path";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::MaximumPaths::Eibgp::MaxPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxPath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::MaximumPaths::Eibgp::MaxPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::MaximumPaths::Eibgp::MaxPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::MaximumPaths::Eibgp::MaxPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Router::Bgp::MaximumPaths::Eibgp::ExternalRtfilter::ExternalRtfilter()
    :
    max{YType::uint16, "max"}
{
    yang_name = "external-rtfilter"; yang_parent_name = "eibgp";
}

Native::Router::Bgp::MaximumPaths::Eibgp::ExternalRtfilter::~ExternalRtfilter()
{
}

bool Native::Router::Bgp::MaximumPaths::Eibgp::ExternalRtfilter::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::MaximumPaths::Eibgp::ExternalRtfilter::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::Router::Bgp::MaximumPaths::Eibgp::ExternalRtfilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-rtfilter";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::MaximumPaths::Eibgp::ExternalRtfilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalRtfilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::MaximumPaths::Eibgp::ExternalRtfilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::MaximumPaths::Eibgp::ExternalRtfilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::MaximumPaths::Eibgp::ExternalRtfilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Router::Bgp::MaximumPaths::Ibgp::Ibgp()
    :
    external_rtfilter(std::make_shared<Native::Router::Bgp::MaximumPaths::Ibgp::ExternalRtfilter>())
	,max_path(std::make_shared<Native::Router::Bgp::MaximumPaths::Ibgp::MaxPath>())
	,unequal_cost(std::make_shared<Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost>())
{
    external_rtfilter->parent = this;

    max_path->parent = this;

    unequal_cost->parent = this;

    yang_name = "ibgp"; yang_parent_name = "maximum-paths";
}

Native::Router::Bgp::MaximumPaths::Ibgp::~Ibgp()
{
}

bool Native::Router::Bgp::MaximumPaths::Ibgp::has_data() const
{
    return (external_rtfilter !=  nullptr && external_rtfilter->has_data())
	|| (max_path !=  nullptr && max_path->has_data())
	|| (unequal_cost !=  nullptr && unequal_cost->has_data());
}

bool Native::Router::Bgp::MaximumPaths::Ibgp::has_operation() const
{
    return is_set(operation)
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_operation())
	|| (max_path !=  nullptr && max_path->has_operation())
	|| (unequal_cost !=  nullptr && unequal_cost->has_operation());
}

std::string Native::Router::Bgp::MaximumPaths::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::MaximumPaths::Ibgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ibgp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::MaximumPaths::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-rtfilter")
    {
        if(external_rtfilter == nullptr)
        {
            external_rtfilter = std::make_shared<Native::Router::Bgp::MaximumPaths::Ibgp::ExternalRtfilter>();
        }
        return external_rtfilter;
    }

    if(child_yang_name == "max-path")
    {
        if(max_path == nullptr)
        {
            max_path = std::make_shared<Native::Router::Bgp::MaximumPaths::Ibgp::MaxPath>();
        }
        return max_path;
    }

    if(child_yang_name == "unequal-cost")
    {
        if(unequal_cost == nullptr)
        {
            unequal_cost = std::make_shared<Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost>();
        }
        return unequal_cost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::MaximumPaths::Ibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external_rtfilter != nullptr)
    {
        children["external-rtfilter"] = external_rtfilter;
    }

    if(max_path != nullptr)
    {
        children["max-path"] = max_path;
    }

    if(unequal_cost != nullptr)
    {
        children["unequal-cost"] = unequal_cost;
    }

    return children;
}

void Native::Router::Bgp::MaximumPaths::Ibgp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::UnequalCost()
    :
    external_rtfilter(std::make_shared<Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter>())
	,max_path(std::make_shared<Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::MaxPath>())
{
    external_rtfilter->parent = this;

    max_path->parent = this;

    yang_name = "unequal-cost"; yang_parent_name = "ibgp";
}

Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::~UnequalCost()
{
}

bool Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::has_data() const
{
    return (external_rtfilter !=  nullptr && external_rtfilter->has_data())
	|| (max_path !=  nullptr && max_path->has_data());
}

bool Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::has_operation() const
{
    return is_set(operation)
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_operation())
	|| (max_path !=  nullptr && max_path->has_operation());
}

std::string Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unequal-cost";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnequalCost' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-rtfilter")
    {
        if(external_rtfilter == nullptr)
        {
            external_rtfilter = std::make_shared<Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter>();
        }
        return external_rtfilter;
    }

    if(child_yang_name == "max-path")
    {
        if(max_path == nullptr)
        {
            max_path = std::make_shared<Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::MaxPath>();
        }
        return max_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external_rtfilter != nullptr)
    {
        children["external-rtfilter"] = external_rtfilter;
    }

    if(max_path != nullptr)
    {
        children["max-path"] = max_path;
    }

    return children;
}

void Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::MaxPath::MaxPath()
    :
    max{YType::uint16, "max"}
{
    yang_name = "max-path"; yang_parent_name = "unequal-cost";
}

Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::MaxPath::~MaxPath()
{
}

bool Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::MaxPath::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::MaxPath::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::MaxPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-path";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::MaxPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxPath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::MaxPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::MaxPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::MaxPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter::ExternalRtfilter()
    :
    max{YType::uint16, "max"}
{
    yang_name = "external-rtfilter"; yang_parent_name = "unequal-cost";
}

Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter::~ExternalRtfilter()
{
}

bool Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-rtfilter";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalRtfilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Router::Bgp::MaximumPaths::Ibgp::MaxPath::MaxPath()
    :
    max{YType::uint16, "max"}
{
    yang_name = "max-path"; yang_parent_name = "ibgp";
}

Native::Router::Bgp::MaximumPaths::Ibgp::MaxPath::~MaxPath()
{
}

bool Native::Router::Bgp::MaximumPaths::Ibgp::MaxPath::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::MaximumPaths::Ibgp::MaxPath::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::Router::Bgp::MaximumPaths::Ibgp::MaxPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-path";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::MaximumPaths::Ibgp::MaxPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxPath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::MaximumPaths::Ibgp::MaxPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::MaximumPaths::Ibgp::MaxPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::MaximumPaths::Ibgp::MaxPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Router::Bgp::MaximumPaths::Ibgp::ExternalRtfilter::ExternalRtfilter()
    :
    max{YType::uint16, "max"}
{
    yang_name = "external-rtfilter"; yang_parent_name = "ibgp";
}

Native::Router::Bgp::MaximumPaths::Ibgp::ExternalRtfilter::~ExternalRtfilter()
{
}

bool Native::Router::Bgp::MaximumPaths::Ibgp::ExternalRtfilter::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::MaximumPaths::Ibgp::ExternalRtfilter::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::Router::Bgp::MaximumPaths::Ibgp::ExternalRtfilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-rtfilter";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::MaximumPaths::Ibgp::ExternalRtfilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalRtfilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::MaximumPaths::Ibgp::ExternalRtfilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::MaximumPaths::Ibgp::ExternalRtfilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::MaximumPaths::Ibgp::ExternalRtfilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Router::Bgp::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    activate{YType::empty, "activate"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    allow_policy{YType::empty, "allow-policy"},
    cluster_id{YType::str, "cluster-id"},
    description{YType::str, "description"},
    disable_connected_check{YType::empty, "disable-connected-check"},
    dmzlink_bw{YType::empty, "dmzlink-bw"},
    next_hop_self{YType::empty, "next-hop-self"},
    next_hop_unchanged{YType::empty, "next-hop-unchanged"},
    remote_as{YType::uint16, "remote-as"},
    remove_private_as{YType::empty, "remove-private-as"},
    route_reflector_client{YType::empty, "route-reflector-client"},
    route_reflector_cluster_id{YType::str, "route-reflector-cluster-id"},
    shutdown{YType::empty, "shutdown"},
    soft_reconfiguration{YType::enumeration, "soft-reconfiguration"},
    unsuppress_map{YType::str, "unsuppress-map"},
    version{YType::uint16, "version"},
    weight{YType::uint16, "weight"}
    	,
    additional_paths(std::make_shared<Native::Router::Bgp::Neighbor::AdditionalPaths>())
	,advertise(std::make_shared<Native::Router::Bgp::Neighbor::Advertise>())
	,advertise_map(std::make_shared<Native::Router::Bgp::Neighbor::AdvertiseMap>())
	,aigp(nullptr) // presence node
	,allowas_in(nullptr) // presence node
	,announce(std::make_shared<Native::Router::Bgp::Neighbor::Announce>())
	,as_override(nullptr) // presence node
	,capability(std::make_shared<Native::Router::Bgp::Neighbor::Capability>())
	,default_originate(nullptr) // presence node
	,ebgp_multihop(nullptr) // presence node
	,fall_over(std::make_shared<Native::Router::Bgp::Neighbor::FallOver>())
	,ha_mode(std::make_shared<Native::Router::Bgp::Neighbor::HaMode>())
	,inherit(std::make_shared<Native::Router::Bgp::Neighbor::Inherit>())
	,local_as(nullptr) // presence node
	,log_neighbor_changes(nullptr) // presence node
	,maximum_prefix(std::make_shared<Native::Router::Bgp::Neighbor::MaximumPrefix>())
	,password(std::make_shared<Native::Router::Bgp::Neighbor::Password>())
	,path_attribute(std::make_shared<Native::Router::Bgp::Neighbor::PathAttribute>())
	,peer_group(nullptr) // presence node
	,send_community(nullptr) // presence node
	,send_label(std::make_shared<Native::Router::Bgp::Neighbor::SendLabel>())
	,slow_peer(std::make_shared<Native::Router::Bgp::Neighbor::SlowPeer>())
	,timers(std::make_shared<Native::Router::Bgp::Neighbor::Timers>())
	,translate_update(std::make_shared<Native::Router::Bgp::Neighbor::TranslateUpdate>())
	,transport(std::make_shared<Native::Router::Bgp::Neighbor::Transport>())
	,ttl_security(std::make_shared<Native::Router::Bgp::Neighbor::TtlSecurity>())
	,update_source(std::make_shared<Native::Router::Bgp::Neighbor::UpdateSource>())
{
    additional_paths->parent = this;

    advertise->parent = this;

    advertise_map->parent = this;

    announce->parent = this;

    capability->parent = this;

    fall_over->parent = this;

    ha_mode->parent = this;

    inherit->parent = this;

    maximum_prefix->parent = this;

    password->parent = this;

    path_attribute->parent = this;

    send_label->parent = this;

    slow_peer->parent = this;

    timers->parent = this;

    translate_update->parent = this;

    transport->parent = this;

    ttl_security->parent = this;

    update_source->parent = this;

    yang_name = "neighbor"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Neighbor::~Neighbor()
{
}

bool Native::Router::Bgp::Neighbor::has_data() const
{
    for (std::size_t index=0; index<distribute_list.size(); index++)
    {
        if(distribute_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<filter_list.size(); index++)
    {
        if(filter_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return id.is_set
	|| activate.is_set
	|| advertisement_interval.is_set
	|| allow_policy.is_set
	|| cluster_id.is_set
	|| description.is_set
	|| disable_connected_check.is_set
	|| dmzlink_bw.is_set
	|| next_hop_self.is_set
	|| next_hop_unchanged.is_set
	|| remote_as.is_set
	|| remove_private_as.is_set
	|| route_reflector_client.is_set
	|| route_reflector_cluster_id.is_set
	|| shutdown.is_set
	|| soft_reconfiguration.is_set
	|| unsuppress_map.is_set
	|| version.is_set
	|| weight.is_set
	|| (additional_paths !=  nullptr && additional_paths->has_data())
	|| (advertise !=  nullptr && advertise->has_data())
	|| (advertise_map !=  nullptr && advertise_map->has_data())
	|| (aigp !=  nullptr && aigp->has_data())
	|| (allowas_in !=  nullptr && allowas_in->has_data())
	|| (announce !=  nullptr && announce->has_data())
	|| (as_override !=  nullptr && as_override->has_data())
	|| (capability !=  nullptr && capability->has_data())
	|| (default_originate !=  nullptr && default_originate->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (fall_over !=  nullptr && fall_over->has_data())
	|| (ha_mode !=  nullptr && ha_mode->has_data())
	|| (inherit !=  nullptr && inherit->has_data())
	|| (local_as !=  nullptr && local_as->has_data())
	|| (log_neighbor_changes !=  nullptr && log_neighbor_changes->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (path_attribute !=  nullptr && path_attribute->has_data())
	|| (peer_group !=  nullptr && peer_group->has_data())
	|| (send_community !=  nullptr && send_community->has_data())
	|| (send_label !=  nullptr && send_label->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (translate_update !=  nullptr && translate_update->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data())
	|| (update_source !=  nullptr && update_source->has_data());
}

bool Native::Router::Bgp::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<distribute_list.size(); index++)
    {
        if(distribute_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<filter_list.size(); index++)
    {
        if(filter_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(activate.operation)
	|| is_set(advertisement_interval.operation)
	|| is_set(allow_policy.operation)
	|| is_set(cluster_id.operation)
	|| is_set(description.operation)
	|| is_set(disable_connected_check.operation)
	|| is_set(dmzlink_bw.operation)
	|| is_set(next_hop_self.operation)
	|| is_set(next_hop_unchanged.operation)
	|| is_set(remote_as.operation)
	|| is_set(remove_private_as.operation)
	|| is_set(route_reflector_client.operation)
	|| is_set(route_reflector_cluster_id.operation)
	|| is_set(shutdown.operation)
	|| is_set(soft_reconfiguration.operation)
	|| is_set(unsuppress_map.operation)
	|| is_set(version.operation)
	|| is_set(weight.operation)
	|| (additional_paths !=  nullptr && additional_paths->has_operation())
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (advertise_map !=  nullptr && advertise_map->has_operation())
	|| (aigp !=  nullptr && aigp->has_operation())
	|| (allowas_in !=  nullptr && allowas_in->has_operation())
	|| (announce !=  nullptr && announce->has_operation())
	|| (as_override !=  nullptr && as_override->has_operation())
	|| (capability !=  nullptr && capability->has_operation())
	|| (default_originate !=  nullptr && default_originate->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (fall_over !=  nullptr && fall_over->has_operation())
	|| (ha_mode !=  nullptr && ha_mode->has_operation())
	|| (inherit !=  nullptr && inherit->has_operation())
	|| (local_as !=  nullptr && local_as->has_operation())
	|| (log_neighbor_changes !=  nullptr && log_neighbor_changes->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (path_attribute !=  nullptr && path_attribute->has_operation())
	|| (peer_group !=  nullptr && peer_group->has_operation())
	|| (send_community !=  nullptr && send_community->has_operation())
	|| (send_label !=  nullptr && send_label->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (translate_update !=  nullptr && translate_update->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation())
	|| (update_source !=  nullptr && update_source->has_operation());
}

std::string Native::Router::Bgp::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (activate.is_set || is_set(activate.operation)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.operation)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (allow_policy.is_set || is_set(allow_policy.operation)) leaf_name_data.push_back(allow_policy.get_name_leafdata());
    if (cluster_id.is_set || is_set(cluster_id.operation)) leaf_name_data.push_back(cluster_id.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (disable_connected_check.is_set || is_set(disable_connected_check.operation)) leaf_name_data.push_back(disable_connected_check.get_name_leafdata());
    if (dmzlink_bw.is_set || is_set(dmzlink_bw.operation)) leaf_name_data.push_back(dmzlink_bw.get_name_leafdata());
    if (next_hop_self.is_set || is_set(next_hop_self.operation)) leaf_name_data.push_back(next_hop_self.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.operation)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.operation)) leaf_name_data.push_back(remote_as.get_name_leafdata());
    if (remove_private_as.is_set || is_set(remove_private_as.operation)) leaf_name_data.push_back(remove_private_as.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.operation)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (route_reflector_cluster_id.is_set || is_set(route_reflector_cluster_id.operation)) leaf_name_data.push_back(route_reflector_cluster_id.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (soft_reconfiguration.is_set || is_set(soft_reconfiguration.operation)) leaf_name_data.push_back(soft_reconfiguration.get_name_leafdata());
    if (unsuppress_map.is_set || is_set(unsuppress_map.operation)) leaf_name_data.push_back(unsuppress_map.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "additional-paths")
    {
        if(additional_paths == nullptr)
        {
            additional_paths = std::make_shared<Native::Router::Bgp::Neighbor::AdditionalPaths>();
        }
        return additional_paths;
    }

    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Router::Bgp::Neighbor::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "advertise-map")
    {
        if(advertise_map == nullptr)
        {
            advertise_map = std::make_shared<Native::Router::Bgp::Neighbor::AdvertiseMap>();
        }
        return advertise_map;
    }

    if(child_yang_name == "aigp")
    {
        if(aigp == nullptr)
        {
            aigp = std::make_shared<Native::Router::Bgp::Neighbor::Aigp>();
        }
        return aigp;
    }

    if(child_yang_name == "allowas-in")
    {
        if(allowas_in == nullptr)
        {
            allowas_in = std::make_shared<Native::Router::Bgp::Neighbor::AllowasIn>();
        }
        return allowas_in;
    }

    if(child_yang_name == "announce")
    {
        if(announce == nullptr)
        {
            announce = std::make_shared<Native::Router::Bgp::Neighbor::Announce>();
        }
        return announce;
    }

    if(child_yang_name == "as-override")
    {
        if(as_override == nullptr)
        {
            as_override = std::make_shared<Native::Router::Bgp::Neighbor::AsOverride>();
        }
        return as_override;
    }

    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<Native::Router::Bgp::Neighbor::Capability>();
        }
        return capability;
    }

    if(child_yang_name == "default-originate")
    {
        if(default_originate == nullptr)
        {
            default_originate = std::make_shared<Native::Router::Bgp::Neighbor::DefaultOriginate>();
        }
        return default_originate;
    }

    if(child_yang_name == "distribute-list")
    {
        for(auto const & c : distribute_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Neighbor::DistributeList>();
        c->parent = this;
        distribute_list.push_back(c);
        return c;
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop == nullptr)
        {
            ebgp_multihop = std::make_shared<Native::Router::Bgp::Neighbor::EbgpMultihop>();
        }
        return ebgp_multihop;
    }

    if(child_yang_name == "fall-over")
    {
        if(fall_over == nullptr)
        {
            fall_over = std::make_shared<Native::Router::Bgp::Neighbor::FallOver>();
        }
        return fall_over;
    }

    if(child_yang_name == "filter-list")
    {
        for(auto const & c : filter_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Neighbor::FilterList>();
        c->parent = this;
        filter_list.push_back(c);
        return c;
    }

    if(child_yang_name == "ha-mode")
    {
        if(ha_mode == nullptr)
        {
            ha_mode = std::make_shared<Native::Router::Bgp::Neighbor::HaMode>();
        }
        return ha_mode;
    }

    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Router::Bgp::Neighbor::Inherit>();
        }
        return inherit;
    }

    if(child_yang_name == "local-as")
    {
        if(local_as == nullptr)
        {
            local_as = std::make_shared<Native::Router::Bgp::Neighbor::LocalAs>();
        }
        return local_as;
    }

    if(child_yang_name == "log-neighbor-changes")
    {
        if(log_neighbor_changes == nullptr)
        {
            log_neighbor_changes = std::make_shared<Native::Router::Bgp::Neighbor::LogNeighborChanges>();
        }
        return log_neighbor_changes;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Bgp::Neighbor::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Router::Bgp::Neighbor::Password>();
        }
        return password;
    }

    if(child_yang_name == "path-attribute")
    {
        if(path_attribute == nullptr)
        {
            path_attribute = std::make_shared<Native::Router::Bgp::Neighbor::PathAttribute>();
        }
        return path_attribute;
    }

    if(child_yang_name == "peer-group")
    {
        if(peer_group == nullptr)
        {
            peer_group = std::make_shared<Native::Router::Bgp::Neighbor::PeerGroup>();
        }
        return peer_group;
    }

    if(child_yang_name == "prefix-list")
    {
        for(auto const & c : prefix_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Neighbor::PrefixList>();
        c->parent = this;
        prefix_list.push_back(c);
        return c;
    }

    if(child_yang_name == "route-map")
    {
        for(auto const & c : route_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Neighbor::RouteMap>();
        c->parent = this;
        route_map.push_back(c);
        return c;
    }

    if(child_yang_name == "send-community")
    {
        if(send_community == nullptr)
        {
            send_community = std::make_shared<Native::Router::Bgp::Neighbor::SendCommunity>();
        }
        return send_community;
    }

    if(child_yang_name == "send-label")
    {
        if(send_label == nullptr)
        {
            send_label = std::make_shared<Native::Router::Bgp::Neighbor::SendLabel>();
        }
        return send_label;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::Neighbor::SlowPeer>();
        }
        return slow_peer;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Bgp::Neighbor::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "translate-update")
    {
        if(translate_update == nullptr)
        {
            translate_update = std::make_shared<Native::Router::Bgp::Neighbor::TranslateUpdate>();
        }
        return translate_update;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Router::Bgp::Neighbor::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Native::Router::Bgp::Neighbor::TtlSecurity>();
        }
        return ttl_security;
    }

    if(child_yang_name == "update-source")
    {
        if(update_source == nullptr)
        {
            update_source = std::make_shared<Native::Router::Bgp::Neighbor::UpdateSource>();
        }
        return update_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(additional_paths != nullptr)
    {
        children["additional-paths"] = additional_paths;
    }

    if(advertise != nullptr)
    {
        children["advertise"] = advertise;
    }

    if(advertise_map != nullptr)
    {
        children["advertise-map"] = advertise_map;
    }

    if(aigp != nullptr)
    {
        children["aigp"] = aigp;
    }

    if(allowas_in != nullptr)
    {
        children["allowas-in"] = allowas_in;
    }

    if(announce != nullptr)
    {
        children["announce"] = announce;
    }

    if(as_override != nullptr)
    {
        children["as-override"] = as_override;
    }

    if(capability != nullptr)
    {
        children["capability"] = capability;
    }

    if(default_originate != nullptr)
    {
        children["default-originate"] = default_originate;
    }

    for (auto const & c : distribute_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(ebgp_multihop != nullptr)
    {
        children["ebgp-multihop"] = ebgp_multihop;
    }

    if(fall_over != nullptr)
    {
        children["fall-over"] = fall_over;
    }

    for (auto const & c : filter_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(ha_mode != nullptr)
    {
        children["ha-mode"] = ha_mode;
    }

    if(inherit != nullptr)
    {
        children["inherit"] = inherit;
    }

    if(local_as != nullptr)
    {
        children["local-as"] = local_as;
    }

    if(log_neighbor_changes != nullptr)
    {
        children["log-neighbor-changes"] = log_neighbor_changes;
    }

    if(maximum_prefix != nullptr)
    {
        children["maximum-prefix"] = maximum_prefix;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(path_attribute != nullptr)
    {
        children["path-attribute"] = path_attribute;
    }

    if(peer_group != nullptr)
    {
        children["peer-group"] = peer_group;
    }

    for (auto const & c : prefix_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : route_map)
    {
        children[c->get_segment_path()] = c;
    }

    if(send_community != nullptr)
    {
        children["send-community"] = send_community;
    }

    if(send_label != nullptr)
    {
        children["send-label"] = send_label;
    }

    if(slow_peer != nullptr)
    {
        children["slow-peer"] = slow_peer;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(translate_update != nullptr)
    {
        children["translate-update"] = translate_update;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    if(update_source != nullptr)
    {
        children["update-source"] = update_source;
    }

    return children;
}

void Native::Router::Bgp::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "activate")
    {
        activate = value;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
    }
    if(value_path == "allow-policy")
    {
        allow_policy = value;
    }
    if(value_path == "cluster-id")
    {
        cluster_id = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "disable-connected-check")
    {
        disable_connected_check = value;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw = value;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self = value;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
    }
    if(value_path == "remove-private-as")
    {
        remove_private_as = value;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
    }
    if(value_path == "route-reflector-cluster-id")
    {
        route_reflector_cluster_id = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "soft-reconfiguration")
    {
        soft_reconfiguration = value;
    }
    if(value_path == "unsuppress-map")
    {
        unsuppress_map = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Bgp::Neighbor::PeerGroup::PeerGroup()
    :
    peer_group_name{YType::str, "peer-group-name"}
{
    yang_name = "peer-group"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::Neighbor::PeerGroup::~PeerGroup()
{
}

bool Native::Router::Bgp::Neighbor::PeerGroup::has_data() const
{
    return peer_group_name.is_set;
}

bool Native::Router::Bgp::Neighbor::PeerGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_group_name.operation);
}

std::string Native::Router::Bgp::Neighbor::PeerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-group";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Neighbor::PeerGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_group_name.is_set || is_set(peer_group_name.operation)) leaf_name_data.push_back(peer_group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Neighbor::PeerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Neighbor::PeerGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Neighbor::PeerGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-group-name")
    {
        peer_group_name = value;
    }
}

const Enum::YLeaf Native::Mpls::TrafficEng::PathSelection::MetricEnum::igp {0, "igp"};
const Enum::YLeaf Native::Mpls::TrafficEng::PathSelection::MetricEnum::te {1, "te"};

const Enum::YLeaf Native::Router::Bgp::Bgp_::Default_::RouteTargetEnum::filter {0, "filter"};

const Enum::YLeaf Native::Router::Bgp::Neighbor::SoftReconfigurationEnum::inbound {0, "inbound"};


}
}

