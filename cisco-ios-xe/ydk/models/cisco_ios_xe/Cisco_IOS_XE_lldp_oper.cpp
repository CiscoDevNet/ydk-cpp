
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_lldp_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XE_lldp_oper {

LldpEntries::LldpEntries()
{
    yang_name = "lldp-entries"; yang_parent_name = "Cisco-IOS-XE-lldp-oper";
}

LldpEntries::~LldpEntries()
{
}

bool LldpEntries::has_data() const
{
    for (std::size_t index=0; index<lldp_entry_.size(); index++)
    {
        if(lldp_entry_[index]->has_data())
            return true;
    }
    return false;
}

bool LldpEntries::has_operation() const
{
    for (std::size_t index=0; index<lldp_entry_.size(); index++)
    {
        if(lldp_entry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string LldpEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lldp-oper:lldp-entries";

    return path_buffer.str();

}

const EntityPath LldpEntries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LldpEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldp-entry")
    {
        for(auto const & c : lldp_entry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LldpEntries::LldpEntry>();
        c->parent = this;
        lldp_entry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LldpEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lldp_entry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LldpEntries::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> LldpEntries::clone_ptr() const
{
    return std::make_shared<LldpEntries>();
}

std::string LldpEntries::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string LldpEntries::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function LldpEntries::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

LldpEntries::LldpEntry::LldpEntry()
    :
    device_id{YType::str, "device-id"},
    local_interface{YType::str, "local-interface"},
    connecting_interface{YType::str, "connecting-interface"},
    ttl{YType::uint32, "ttl"}
    	,
    capabilities_(std::make_shared<LldpEntries::LldpEntry::Capabilities>())
{
    capabilities_->parent = this;

    yang_name = "lldp-entry"; yang_parent_name = "lldp-entries";
}

LldpEntries::LldpEntry::~LldpEntry()
{
}

bool LldpEntries::LldpEntry::has_data() const
{
    return device_id.is_set
	|| local_interface.is_set
	|| connecting_interface.is_set
	|| ttl.is_set
	|| (capabilities_ !=  nullptr && capabilities_->has_data());
}

bool LldpEntries::LldpEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(device_id.operation)
	|| is_set(local_interface.operation)
	|| is_set(connecting_interface.operation)
	|| is_set(ttl.operation)
	|| (capabilities_ !=  nullptr && capabilities_->has_operation());
}

std::string LldpEntries::LldpEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp-entry" <<"[device-id='" <<device_id <<"']" <<"[local-interface='" <<local_interface <<"']" <<"[connecting-interface='" <<connecting_interface <<"']";

    return path_buffer.str();

}

const EntityPath LldpEntries::LldpEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-lldp-oper:lldp-entries/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_id.is_set || is_set(device_id.operation)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (local_interface.is_set || is_set(local_interface.operation)) leaf_name_data.push_back(local_interface.get_name_leafdata());
    if (connecting_interface.is_set || is_set(connecting_interface.operation)) leaf_name_data.push_back(connecting_interface.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LldpEntries::LldpEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "capabilities")
    {
        if(capabilities_ == nullptr)
        {
            capabilities_ = std::make_shared<LldpEntries::LldpEntry::Capabilities>();
        }
        return capabilities_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LldpEntries::LldpEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(capabilities_ != nullptr)
    {
        children["capabilities"] = capabilities_;
    }

    return children;
}

void LldpEntries::LldpEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device-id")
    {
        device_id = value;
    }
    if(value_path == "local-interface")
    {
        local_interface = value;
    }
    if(value_path == "connecting-interface")
    {
        connecting_interface = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

LldpEntries::LldpEntry::Capabilities::Capabilities()
    :
    access_point{YType::empty, "access-point"},
    bridge{YType::empty, "bridge"},
    docsis{YType::empty, "docsis"},
    other{YType::empty, "other"},
    repeater{YType::empty, "repeater"},
    router{YType::empty, "router"},
    station{YType::empty, "station"},
    telephone{YType::empty, "telephone"}
{
    yang_name = "capabilities"; yang_parent_name = "lldp-entry";
}

LldpEntries::LldpEntry::Capabilities::~Capabilities()
{
}

bool LldpEntries::LldpEntry::Capabilities::has_data() const
{
    return access_point.is_set
	|| bridge.is_set
	|| docsis.is_set
	|| other.is_set
	|| repeater.is_set
	|| router.is_set
	|| station.is_set
	|| telephone.is_set;
}

bool LldpEntries::LldpEntry::Capabilities::has_operation() const
{
    return is_set(operation)
	|| is_set(access_point.operation)
	|| is_set(bridge.operation)
	|| is_set(docsis.operation)
	|| is_set(other.operation)
	|| is_set(repeater.operation)
	|| is_set(router.operation)
	|| is_set(station.operation)
	|| is_set(telephone.operation);
}

std::string LldpEntries::LldpEntry::Capabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capabilities";

    return path_buffer.str();

}

const EntityPath LldpEntries::LldpEntry::Capabilities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Capabilities' in Cisco_IOS_XE_lldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_point.is_set || is_set(access_point.operation)) leaf_name_data.push_back(access_point.get_name_leafdata());
    if (bridge.is_set || is_set(bridge.operation)) leaf_name_data.push_back(bridge.get_name_leafdata());
    if (docsis.is_set || is_set(docsis.operation)) leaf_name_data.push_back(docsis.get_name_leafdata());
    if (other.is_set || is_set(other.operation)) leaf_name_data.push_back(other.get_name_leafdata());
    if (repeater.is_set || is_set(repeater.operation)) leaf_name_data.push_back(repeater.get_name_leafdata());
    if (router.is_set || is_set(router.operation)) leaf_name_data.push_back(router.get_name_leafdata());
    if (station.is_set || is_set(station.operation)) leaf_name_data.push_back(station.get_name_leafdata());
    if (telephone.is_set || is_set(telephone.operation)) leaf_name_data.push_back(telephone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LldpEntries::LldpEntry::Capabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LldpEntries::LldpEntry::Capabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LldpEntries::LldpEntry::Capabilities::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-point")
    {
        access_point = value;
    }
    if(value_path == "bridge")
    {
        bridge = value;
    }
    if(value_path == "docsis")
    {
        docsis = value;
    }
    if(value_path == "other")
    {
        other = value;
    }
    if(value_path == "repeater")
    {
        repeater = value;
    }
    if(value_path == "router")
    {
        router = value;
    }
    if(value_path == "station")
    {
        station = value;
    }
    if(value_path == "telephone")
    {
        telephone = value;
    }
}


}
}

