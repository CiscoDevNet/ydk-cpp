
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_lldp_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
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
    for (std::size_t index=0; index<lldp_entry.size(); index++)
    {
        if(lldp_entry[index]->has_data())
            return true;
    }
    return false;
}

bool LldpEntries::has_operation() const
{
    for (std::size_t index=0; index<lldp_entry.size(); index++)
    {
        if(lldp_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : lldp_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LldpEntries::LldpEntry>();
        c->parent = this;
        lldp_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LldpEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lldp_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LldpEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LldpEntries::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> LldpEntries::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool LldpEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldp-entry")
        return true;
    return false;
}

LldpEntries::LldpEntry::LldpEntry()
    :
    device_id{YType::str, "device-id"},
    local_interface{YType::str, "local-interface"},
    connecting_interface{YType::str, "connecting-interface"},
    ttl{YType::uint32, "ttl"}
    	,
    capabilities(std::make_shared<LldpEntries::LldpEntry::Capabilities>())
{
    capabilities->parent = this;

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
	|| (capabilities !=  nullptr && capabilities->has_data());
}

bool LldpEntries::LldpEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_id.yfilter)
	|| ydk::is_set(local_interface.yfilter)
	|| ydk::is_set(connecting_interface.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (capabilities !=  nullptr && capabilities->has_operation());
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

    if (device_id.is_set || is_set(device_id.yfilter)) leaf_name_data.push_back(device_id.get_name_leafdata());
    if (local_interface.is_set || is_set(local_interface.yfilter)) leaf_name_data.push_back(local_interface.get_name_leafdata());
    if (connecting_interface.is_set || is_set(connecting_interface.yfilter)) leaf_name_data.push_back(connecting_interface.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LldpEntries::LldpEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "capabilities")
    {
        if(capabilities == nullptr)
        {
            capabilities = std::make_shared<LldpEntries::LldpEntry::Capabilities>();
        }
        return capabilities;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LldpEntries::LldpEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(capabilities != nullptr)
    {
        children["capabilities"] = capabilities;
    }

    return children;
}

void LldpEntries::LldpEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-id")
    {
        device_id = value;
        device_id.value_namespace = name_space;
        device_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-interface")
    {
        local_interface = value;
        local_interface.value_namespace = name_space;
        local_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-interface")
    {
        connecting_interface = value;
        connecting_interface.value_namespace = name_space;
        connecting_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void LldpEntries::LldpEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-id")
    {
        device_id.yfilter = yfilter;
    }
    if(value_path == "local-interface")
    {
        local_interface.yfilter = yfilter;
    }
    if(value_path == "connecting-interface")
    {
        connecting_interface.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool LldpEntries::LldpEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capabilities" || name == "device-id" || name == "local-interface" || name == "connecting-interface" || name == "ttl")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(access_point.yfilter)
	|| ydk::is_set(bridge.yfilter)
	|| ydk::is_set(docsis.yfilter)
	|| ydk::is_set(other.yfilter)
	|| ydk::is_set(repeater.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(station.yfilter)
	|| ydk::is_set(telephone.yfilter);
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

    if (access_point.is_set || is_set(access_point.yfilter)) leaf_name_data.push_back(access_point.get_name_leafdata());
    if (bridge.is_set || is_set(bridge.yfilter)) leaf_name_data.push_back(bridge.get_name_leafdata());
    if (docsis.is_set || is_set(docsis.yfilter)) leaf_name_data.push_back(docsis.get_name_leafdata());
    if (other.is_set || is_set(other.yfilter)) leaf_name_data.push_back(other.get_name_leafdata());
    if (repeater.is_set || is_set(repeater.yfilter)) leaf_name_data.push_back(repeater.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (station.is_set || is_set(station.yfilter)) leaf_name_data.push_back(station.get_name_leafdata());
    if (telephone.is_set || is_set(telephone.yfilter)) leaf_name_data.push_back(telephone.get_name_leafdata());


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

void LldpEntries::LldpEntry::Capabilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-point")
    {
        access_point = value;
        access_point.value_namespace = name_space;
        access_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge")
    {
        bridge = value;
        bridge.value_namespace = name_space;
        bridge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsis")
    {
        docsis = value;
        docsis.value_namespace = name_space;
        docsis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other")
    {
        other = value;
        other.value_namespace = name_space;
        other.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repeater")
    {
        repeater = value;
        repeater.value_namespace = name_space;
        repeater.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "station")
    {
        station = value;
        station.value_namespace = name_space;
        station.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "telephone")
    {
        telephone = value;
        telephone.value_namespace = name_space;
        telephone.value_namespace_prefix = name_space_prefix;
    }
}

void LldpEntries::LldpEntry::Capabilities::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-point")
    {
        access_point.yfilter = yfilter;
    }
    if(value_path == "bridge")
    {
        bridge.yfilter = yfilter;
    }
    if(value_path == "docsis")
    {
        docsis.yfilter = yfilter;
    }
    if(value_path == "other")
    {
        other.yfilter = yfilter;
    }
    if(value_path == "repeater")
    {
        repeater.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "station")
    {
        station.yfilter = yfilter;
    }
    if(value_path == "telephone")
    {
        telephone.yfilter = yfilter;
    }
}

bool LldpEntries::LldpEntry::Capabilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-point" || name == "bridge" || name == "docsis" || name == "other" || name == "repeater" || name == "router" || name == "station" || name == "telephone")
        return true;
    return false;
}


}
}

