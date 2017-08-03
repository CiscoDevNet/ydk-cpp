
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clns_isis_oper {

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::Invalid()
    :
    reason_code{YType::enumeration, "reason-code"}
{
    yang_name = "invalid"; yang_parent_name = "multicast-status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::~Invalid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalid";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Invalid' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::ClnsP2PData()
    :
    p2p_over_lan_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData>())
{
    p2p_over_lan_data->parent = this;

    yang_name = "clns-p2p-data"; yang_parent_name = "media-specific-state";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::~ClnsP2PData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::has_data() const
{
    return (p2p_over_lan_data !=  nullptr && p2p_over_lan_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::has_operation() const
{
    return is_set(yfilter)
	|| (p2p_over_lan_data !=  nullptr && p2p_over_lan_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns-p2p-data";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClnsP2PData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2p-over-lan-data")
    {
        if(p2p_over_lan_data == nullptr)
        {
            p2p_over_lan_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData>();
        }
        return p2p_over_lan_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(p2p_over_lan_data != nullptr)
    {
        children["p2p-over-lan-data"] = p2p_over_lan_data;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2p-over-lan-data")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::P2POverLanData()
    :
    multicast_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus>())
{
    multicast_status->parent = this;

    yang_name = "p2p-over-lan-data"; yang_parent_name = "clns-p2p-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::~P2POverLanData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::has_data() const
{
    return (multicast_status !=  nullptr && multicast_status->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::has_operation() const
{
    return is_set(yfilter)
	|| (multicast_status !=  nullptr && multicast_status->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-over-lan-data";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'P2POverLanData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-status")
    {
        if(multicast_status == nullptr)
        {
            multicast_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus>();
        }
        return multicast_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multicast_status != nullptr)
    {
        children["multicast-status"] = multicast_status;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::MulticastStatus()
    :
    status{YType::enumeration, "status"}
    	,
    invalid(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid>())
{
    invalid->parent = this;

    yang_name = "multicast-status"; yang_parent_name = "p2p-over-lan-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::~MulticastStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::has_data() const
{
    return status.is_set
	|| (invalid !=  nullptr && invalid->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (invalid !=  nullptr && invalid->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-status";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalid")
    {
        if(invalid == nullptr)
        {
            invalid = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid>();
        }
        return invalid;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(invalid != nullptr)
    {
        children["invalid"] = invalid;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalid" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::Invalid()
    :
    reason_code{YType::enumeration, "reason-code"}
{
    yang_name = "invalid"; yang_parent_name = "multicast-status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::~Invalid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalid";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Invalid' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::UnderlyingInterface()
    :
    entry{YType::str, "entry"}
{
    yang_name = "underlying-interface"; yang_parent_name = "enabled";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::~UnderlyingInterface()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underlying-interface";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnderlyingInterface' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::PerAreaData()
    :
    adjacency_count{YType::uint32, "adjacency-count"},
    level{YType::enumeration, "level"},
    lsp_pacing_interval{YType::uint32, "lsp-pacing-interval"},
    psnp_transmit_queue_size{YType::uint32, "psnp-transmit-queue-size"}
    	,
    lan_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData>())
{
    lan_data->parent = this;

    yang_name = "per-area-data"; yang_parent_name = "enabled";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::~PerAreaData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::has_data() const
{
    return adjacency_count.is_set
	|| level.is_set
	|| lsp_pacing_interval.is_set
	|| psnp_transmit_queue_size.is_set
	|| (lan_data !=  nullptr && lan_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_count.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(lsp_pacing_interval.yfilter)
	|| ydk::is_set(psnp_transmit_queue_size.yfilter)
	|| (lan_data !=  nullptr && lan_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-area-data";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerAreaData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_count.is_set || is_set(adjacency_count.yfilter)) leaf_name_data.push_back(adjacency_count.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (lsp_pacing_interval.is_set || is_set(lsp_pacing_interval.yfilter)) leaf_name_data.push_back(lsp_pacing_interval.get_name_leafdata());
    if (psnp_transmit_queue_size.is_set || is_set(psnp_transmit_queue_size.yfilter)) leaf_name_data.push_back(psnp_transmit_queue_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lan-data")
    {
        if(lan_data == nullptr)
        {
            lan_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData>();
        }
        return lan_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lan_data != nullptr)
    {
        children["lan-data"] = lan_data;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-count")
    {
        adjacency_count = value;
        adjacency_count.value_namespace = name_space;
        adjacency_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pacing-interval")
    {
        lsp_pacing_interval = value;
        lsp_pacing_interval.value_namespace = name_space;
        lsp_pacing_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psnp-transmit-queue-size")
    {
        psnp_transmit_queue_size = value;
        psnp_transmit_queue_size.value_namespace = name_space;
        psnp_transmit_queue_size.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-count")
    {
        adjacency_count.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "lsp-pacing-interval")
    {
        lsp_pacing_interval.yfilter = yfilter;
    }
    if(value_path == "psnp-transmit-queue-size")
    {
        psnp_transmit_queue_size.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lan-data" || name == "adjacency-count" || name == "level" || name == "lsp-pacing-interval" || name == "psnp-transmit-queue-size")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::LanData()
    :
    are_we_dis{YType::boolean, "are-we-dis"},
    circuit_lan_id{YType::str, "circuit-lan-id"},
    dispriority{YType::uint8, "dispriority"},
    interface_priority{YType::uint8, "interface-priority"},
    time_until_next_iih{YType::uint32, "time-until-next-iih"}
{
    yang_name = "lan-data"; yang_parent_name = "per-area-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::~LanData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::has_data() const
{
    return are_we_dis.is_set
	|| circuit_lan_id.is_set
	|| dispriority.is_set
	|| interface_priority.is_set
	|| time_until_next_iih.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(are_we_dis.yfilter)
	|| ydk::is_set(circuit_lan_id.yfilter)
	|| ydk::is_set(dispriority.yfilter)
	|| ydk::is_set(interface_priority.yfilter)
	|| ydk::is_set(time_until_next_iih.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lan-data";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LanData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (are_we_dis.is_set || is_set(are_we_dis.yfilter)) leaf_name_data.push_back(are_we_dis.get_name_leafdata());
    if (circuit_lan_id.is_set || is_set(circuit_lan_id.yfilter)) leaf_name_data.push_back(circuit_lan_id.get_name_leafdata());
    if (dispriority.is_set || is_set(dispriority.yfilter)) leaf_name_data.push_back(dispriority.get_name_leafdata());
    if (interface_priority.is_set || is_set(interface_priority.yfilter)) leaf_name_data.push_back(interface_priority.get_name_leafdata());
    if (time_until_next_iih.is_set || is_set(time_until_next_iih.yfilter)) leaf_name_data.push_back(time_until_next_iih.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "are-we-dis")
    {
        are_we_dis = value;
        are_we_dis.value_namespace = name_space;
        are_we_dis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "circuit-lan-id")
    {
        circuit_lan_id = value;
        circuit_lan_id.value_namespace = name_space;
        circuit_lan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dispriority")
    {
        dispriority = value;
        dispriority.value_namespace = name_space;
        dispriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-priority")
    {
        interface_priority = value;
        interface_priority.value_namespace = name_space;
        interface_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-until-next-iih")
    {
        time_until_next_iih = value;
        time_until_next_iih.value_namespace = name_space;
        time_until_next_iih.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "are-we-dis")
    {
        are_we_dis.yfilter = yfilter;
    }
    if(value_path == "circuit-lan-id")
    {
        circuit_lan_id.yfilter = yfilter;
    }
    if(value_path == "dispriority")
    {
        dispriority.yfilter = yfilter;
    }
    if(value_path == "interface-priority")
    {
        interface_priority.yfilter = yfilter;
    }
    if(value_path == "time-until-next-iih")
    {
        time_until_next_iih.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "are-we-dis" || name == "circuit-lan-id" || name == "dispriority" || name == "interface-priority" || name == "time-until-next-iih")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::PerTopologyData()
    :
    status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status>())
	,topology_id(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId>())
{
    status->parent = this;

    topology_id->parent = this;

    yang_name = "per-topology-data"; yang_parent_name = "enabled";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::~PerTopologyData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::has_data() const
{
    return (status !=  nullptr && status->has_data())
	|| (topology_id !=  nullptr && topology_id->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::has_operation() const
{
    return is_set(yfilter)
	|| (status !=  nullptr && status->has_operation())
	|| (topology_id !=  nullptr && topology_id->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-topology-data";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerTopologyData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status>();
        }
        return status;
    }

    if(child_yang_name == "topology-id")
    {
        if(topology_id == nullptr)
        {
            topology_id = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId>();
        }
        return topology_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status != nullptr)
    {
        children["status"] = status;
    }

    if(topology_id != nullptr)
    {
        children["topology-id"] = topology_id;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status" || name == "topology-id")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::TopologyId()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "topology-id"; yang_parent_name = "per-topology-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::~TopologyId()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set
	|| topology_name.is_set
	|| vrf_name.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-id";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyId' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "saf-name" || name == "topology-name" || name == "vrf-name")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Status()
    :
    status{YType::enumeration, "status"}
    	,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled>())
	,enabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_>())
{
    disabled->parent = this;

    enabled->parent = this;

    yang_name = "status"; yang_parent_name = "per-topology-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::~Status()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::has_data() const
{
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data())
	|| (enabled !=  nullptr && enabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (disabled !=  nullptr && disabled->has_operation())
	|| (enabled !=  nullptr && enabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Status' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled>();
        }
        return disabled;
    }

    if(child_yang_name == "enabled")
    {
        if(enabled == nullptr)
        {
            enabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_>();
        }
        return enabled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(disabled != nullptr)
    {
        children["disabled"] = disabled;
    }

    if(enabled != nullptr)
    {
        children["enabled"] = enabled;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "enabled" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{
    yang_name = "disabled"; yang_parent_name = "status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Disabled' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Enabled_()
    :
    ld_pv6_sync_status{YType::boolean, "ld-pv6-sync-status"},
    ldp_sync_status{YType::boolean, "ldp-sync-status"},
    level1_lkgp_configured{YType::boolean, "level1-lkgp-configured"},
    level1_metric{YType::uint32, "level1-metric"},
    level1_offset_metric{YType::uint32, "level1-offset-metric"},
    level1_weight{YType::uint32, "level1-weight"},
    level1ldp_sync_enabled{YType::boolean, "level1ldp-sync-enabled"},
    level1pp_configured{YType::boolean, "level1pp-configured"},
    level1pp_metric{YType::uint32, "level1pp-metric"},
    level2_lkgp_configured{YType::boolean, "level2-lkgp-configured"},
    level2_metric{YType::uint32, "level2-metric"},
    level2_offset_metric{YType::uint32, "level2-offset-metric"},
    level2_weight{YType::uint32, "level2-weight"},
    level2ldp_sync_enabled{YType::boolean, "level2ldp-sync-enabled"},
    level2pp_configured{YType::boolean, "level2pp-configured"},
    level2pp_metric{YType::uint32, "level2pp-metric"},
    max_bkp_label_supported{YType::uint8, "max-bkp-label-supported"},
    max_label_supported{YType::uint8, "max-label-supported"},
    max_srte_label_supported{YType::uint8, "max-srte-label-supported"}
    	,
    adjacency_form_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus>())
	,adv_prefix_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus>())
{
    adjacency_form_status->parent = this;

    adv_prefix_status->parent = this;

    yang_name = "enabled"; yang_parent_name = "status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::~Enabled_()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::has_data() const
{
    return ld_pv6_sync_status.is_set
	|| ldp_sync_status.is_set
	|| level1_lkgp_configured.is_set
	|| level1_metric.is_set
	|| level1_offset_metric.is_set
	|| level1_weight.is_set
	|| level1ldp_sync_enabled.is_set
	|| level1pp_configured.is_set
	|| level1pp_metric.is_set
	|| level2_lkgp_configured.is_set
	|| level2_metric.is_set
	|| level2_offset_metric.is_set
	|| level2_weight.is_set
	|| level2ldp_sync_enabled.is_set
	|| level2pp_configured.is_set
	|| level2pp_metric.is_set
	|| max_bkp_label_supported.is_set
	|| max_label_supported.is_set
	|| max_srte_label_supported.is_set
	|| (adjacency_form_status !=  nullptr && adjacency_form_status->has_data())
	|| (adv_prefix_status !=  nullptr && adv_prefix_status->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ld_pv6_sync_status.yfilter)
	|| ydk::is_set(ldp_sync_status.yfilter)
	|| ydk::is_set(level1_lkgp_configured.yfilter)
	|| ydk::is_set(level1_metric.yfilter)
	|| ydk::is_set(level1_offset_metric.yfilter)
	|| ydk::is_set(level1_weight.yfilter)
	|| ydk::is_set(level1ldp_sync_enabled.yfilter)
	|| ydk::is_set(level1pp_configured.yfilter)
	|| ydk::is_set(level1pp_metric.yfilter)
	|| ydk::is_set(level2_lkgp_configured.yfilter)
	|| ydk::is_set(level2_metric.yfilter)
	|| ydk::is_set(level2_offset_metric.yfilter)
	|| ydk::is_set(level2_weight.yfilter)
	|| ydk::is_set(level2ldp_sync_enabled.yfilter)
	|| ydk::is_set(level2pp_configured.yfilter)
	|| ydk::is_set(level2pp_metric.yfilter)
	|| ydk::is_set(max_bkp_label_supported.yfilter)
	|| ydk::is_set(max_label_supported.yfilter)
	|| ydk::is_set(max_srte_label_supported.yfilter)
	|| (adjacency_form_status !=  nullptr && adjacency_form_status->has_operation())
	|| (adv_prefix_status !=  nullptr && adv_prefix_status->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enabled";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Enabled_' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ld_pv6_sync_status.is_set || is_set(ld_pv6_sync_status.yfilter)) leaf_name_data.push_back(ld_pv6_sync_status.get_name_leafdata());
    if (ldp_sync_status.is_set || is_set(ldp_sync_status.yfilter)) leaf_name_data.push_back(ldp_sync_status.get_name_leafdata());
    if (level1_lkgp_configured.is_set || is_set(level1_lkgp_configured.yfilter)) leaf_name_data.push_back(level1_lkgp_configured.get_name_leafdata());
    if (level1_metric.is_set || is_set(level1_metric.yfilter)) leaf_name_data.push_back(level1_metric.get_name_leafdata());
    if (level1_offset_metric.is_set || is_set(level1_offset_metric.yfilter)) leaf_name_data.push_back(level1_offset_metric.get_name_leafdata());
    if (level1_weight.is_set || is_set(level1_weight.yfilter)) leaf_name_data.push_back(level1_weight.get_name_leafdata());
    if (level1ldp_sync_enabled.is_set || is_set(level1ldp_sync_enabled.yfilter)) leaf_name_data.push_back(level1ldp_sync_enabled.get_name_leafdata());
    if (level1pp_configured.is_set || is_set(level1pp_configured.yfilter)) leaf_name_data.push_back(level1pp_configured.get_name_leafdata());
    if (level1pp_metric.is_set || is_set(level1pp_metric.yfilter)) leaf_name_data.push_back(level1pp_metric.get_name_leafdata());
    if (level2_lkgp_configured.is_set || is_set(level2_lkgp_configured.yfilter)) leaf_name_data.push_back(level2_lkgp_configured.get_name_leafdata());
    if (level2_metric.is_set || is_set(level2_metric.yfilter)) leaf_name_data.push_back(level2_metric.get_name_leafdata());
    if (level2_offset_metric.is_set || is_set(level2_offset_metric.yfilter)) leaf_name_data.push_back(level2_offset_metric.get_name_leafdata());
    if (level2_weight.is_set || is_set(level2_weight.yfilter)) leaf_name_data.push_back(level2_weight.get_name_leafdata());
    if (level2ldp_sync_enabled.is_set || is_set(level2ldp_sync_enabled.yfilter)) leaf_name_data.push_back(level2ldp_sync_enabled.get_name_leafdata());
    if (level2pp_configured.is_set || is_set(level2pp_configured.yfilter)) leaf_name_data.push_back(level2pp_configured.get_name_leafdata());
    if (level2pp_metric.is_set || is_set(level2pp_metric.yfilter)) leaf_name_data.push_back(level2pp_metric.get_name_leafdata());
    if (max_bkp_label_supported.is_set || is_set(max_bkp_label_supported.yfilter)) leaf_name_data.push_back(max_bkp_label_supported.get_name_leafdata());
    if (max_label_supported.is_set || is_set(max_label_supported.yfilter)) leaf_name_data.push_back(max_label_supported.get_name_leafdata());
    if (max_srte_label_supported.is_set || is_set(max_srte_label_supported.yfilter)) leaf_name_data.push_back(max_srte_label_supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-form-status")
    {
        if(adjacency_form_status == nullptr)
        {
            adjacency_form_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus>();
        }
        return adjacency_form_status;
    }

    if(child_yang_name == "adv-prefix-status")
    {
        if(adv_prefix_status == nullptr)
        {
            adv_prefix_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus>();
        }
        return adv_prefix_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adjacency_form_status != nullptr)
    {
        children["adjacency-form-status"] = adjacency_form_status;
    }

    if(adv_prefix_status != nullptr)
    {
        children["adv-prefix-status"] = adv_prefix_status;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ld-pv6-sync-status")
    {
        ld_pv6_sync_status = value;
        ld_pv6_sync_status.value_namespace = name_space;
        ld_pv6_sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-sync-status")
    {
        ldp_sync_status = value;
        ldp_sync_status.value_namespace = name_space;
        ldp_sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level1-lkgp-configured")
    {
        level1_lkgp_configured = value;
        level1_lkgp_configured.value_namespace = name_space;
        level1_lkgp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level1-metric")
    {
        level1_metric = value;
        level1_metric.value_namespace = name_space;
        level1_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level1-offset-metric")
    {
        level1_offset_metric = value;
        level1_offset_metric.value_namespace = name_space;
        level1_offset_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level1-weight")
    {
        level1_weight = value;
        level1_weight.value_namespace = name_space;
        level1_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level1ldp-sync-enabled")
    {
        level1ldp_sync_enabled = value;
        level1ldp_sync_enabled.value_namespace = name_space;
        level1ldp_sync_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level1pp-configured")
    {
        level1pp_configured = value;
        level1pp_configured.value_namespace = name_space;
        level1pp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level1pp-metric")
    {
        level1pp_metric = value;
        level1pp_metric.value_namespace = name_space;
        level1pp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2-lkgp-configured")
    {
        level2_lkgp_configured = value;
        level2_lkgp_configured.value_namespace = name_space;
        level2_lkgp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2-metric")
    {
        level2_metric = value;
        level2_metric.value_namespace = name_space;
        level2_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2-offset-metric")
    {
        level2_offset_metric = value;
        level2_offset_metric.value_namespace = name_space;
        level2_offset_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2-weight")
    {
        level2_weight = value;
        level2_weight.value_namespace = name_space;
        level2_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2ldp-sync-enabled")
    {
        level2ldp_sync_enabled = value;
        level2ldp_sync_enabled.value_namespace = name_space;
        level2ldp_sync_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2pp-configured")
    {
        level2pp_configured = value;
        level2pp_configured.value_namespace = name_space;
        level2pp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2pp-metric")
    {
        level2pp_metric = value;
        level2pp_metric.value_namespace = name_space;
        level2pp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bkp-label-supported")
    {
        max_bkp_label_supported = value;
        max_bkp_label_supported.value_namespace = name_space;
        max_bkp_label_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-label-supported")
    {
        max_label_supported = value;
        max_label_supported.value_namespace = name_space;
        max_label_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-srte-label-supported")
    {
        max_srte_label_supported = value;
        max_srte_label_supported.value_namespace = name_space;
        max_srte_label_supported.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ld-pv6-sync-status")
    {
        ld_pv6_sync_status.yfilter = yfilter;
    }
    if(value_path == "ldp-sync-status")
    {
        ldp_sync_status.yfilter = yfilter;
    }
    if(value_path == "level1-lkgp-configured")
    {
        level1_lkgp_configured.yfilter = yfilter;
    }
    if(value_path == "level1-metric")
    {
        level1_metric.yfilter = yfilter;
    }
    if(value_path == "level1-offset-metric")
    {
        level1_offset_metric.yfilter = yfilter;
    }
    if(value_path == "level1-weight")
    {
        level1_weight.yfilter = yfilter;
    }
    if(value_path == "level1ldp-sync-enabled")
    {
        level1ldp_sync_enabled.yfilter = yfilter;
    }
    if(value_path == "level1pp-configured")
    {
        level1pp_configured.yfilter = yfilter;
    }
    if(value_path == "level1pp-metric")
    {
        level1pp_metric.yfilter = yfilter;
    }
    if(value_path == "level2-lkgp-configured")
    {
        level2_lkgp_configured.yfilter = yfilter;
    }
    if(value_path == "level2-metric")
    {
        level2_metric.yfilter = yfilter;
    }
    if(value_path == "level2-offset-metric")
    {
        level2_offset_metric.yfilter = yfilter;
    }
    if(value_path == "level2-weight")
    {
        level2_weight.yfilter = yfilter;
    }
    if(value_path == "level2ldp-sync-enabled")
    {
        level2ldp_sync_enabled.yfilter = yfilter;
    }
    if(value_path == "level2pp-configured")
    {
        level2pp_configured.yfilter = yfilter;
    }
    if(value_path == "level2pp-metric")
    {
        level2pp_metric.yfilter = yfilter;
    }
    if(value_path == "max-bkp-label-supported")
    {
        max_bkp_label_supported.yfilter = yfilter;
    }
    if(value_path == "max-label-supported")
    {
        max_label_supported.yfilter = yfilter;
    }
    if(value_path == "max-srte-label-supported")
    {
        max_srte_label_supported.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-form-status" || name == "adv-prefix-status" || name == "ld-pv6-sync-status" || name == "ldp-sync-status" || name == "level1-lkgp-configured" || name == "level1-metric" || name == "level1-offset-metric" || name == "level1-weight" || name == "level1ldp-sync-enabled" || name == "level1pp-configured" || name == "level1pp-metric" || name == "level2-lkgp-configured" || name == "level2-metric" || name == "level2-offset-metric" || name == "level2-weight" || name == "level2ldp-sync-enabled" || name == "level2pp-configured" || name == "level2pp-metric" || name == "max-bkp-label-supported" || name == "max-label-supported" || name == "max-srte-label-supported")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::AdjacencyFormStatus()
    :
    status{YType::enumeration, "status"}
    	,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled>())
{
    disabled->parent = this;

    yang_name = "adjacency-form-status"; yang_parent_name = "enabled";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::~AdjacencyFormStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::has_data() const
{
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (disabled !=  nullptr && disabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-form-status";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencyFormStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled>();
        }
        return disabled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(disabled != nullptr)
    {
        children["disabled"] = disabled;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{
    yang_name = "disabled"; yang_parent_name = "adjacency-form-status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Disabled' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::AdvPrefixStatus()
    :
    status{YType::enumeration, "status"}
    	,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled>())
{
    disabled->parent = this;

    yang_name = "adv-prefix-status"; yang_parent_name = "enabled";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::~AdvPrefixStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::has_data() const
{
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (disabled !=  nullptr && disabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adv-prefix-status";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvPrefixStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled>();
        }
        return disabled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(disabled != nullptr)
    {
        children["disabled"] = disabled;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{
    yang_name = "disabled"; yang_parent_name = "adv-prefix-status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Disabled' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::PerAddressFamilyData()
    :
    af_name{YType::enumeration, "af-name"}
    	,
    af_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus>())
{
    af_status->parent = this;

    yang_name = "per-address-family-data"; yang_parent_name = "enabled";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::~PerAddressFamilyData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::has_data() const
{
    return af_name.is_set
	|| (af_status !=  nullptr && af_status->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (af_status !=  nullptr && af_status->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-address-family-data";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerAddressFamilyData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-status")
    {
        if(af_status == nullptr)
        {
            af_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus>();
        }
        return af_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(af_status != nullptr)
    {
        children["af-status"] = af_status;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-status" || name == "af-name")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfStatus()
    :
    status{YType::enumeration, "status"}
    	,
    af_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData>())
	,disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled>())
{
    af_data->parent = this;

    disabled->parent = this;

    yang_name = "af-status"; yang_parent_name = "per-address-family-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::~AfStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::has_data() const
{
    return status.is_set
	|| (af_data !=  nullptr && af_data->has_data())
	|| (disabled !=  nullptr && disabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (af_data !=  nullptr && af_data->has_operation())
	|| (disabled !=  nullptr && disabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-status";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AfStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-data")
    {
        if(af_data == nullptr)
        {
            af_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData>();
        }
        return af_data;
    }

    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled>();
        }
        return disabled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(af_data != nullptr)
    {
        children["af-data"] = af_data;
    }

    if(disabled != nullptr)
    {
        children["disabled"] = disabled;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-data" || name == "disabled" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{
    yang_name = "disabled"; yang_parent_name = "af-status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Disabled' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::AfData()
    :
    forwarding_address_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus>())
	,prefix_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus>())
	,protocol_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus>())
{
    forwarding_address_status->parent = this;

    prefix_status->parent = this;

    protocol_status->parent = this;

    yang_name = "af-data"; yang_parent_name = "af-status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::~AfData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::has_data() const
{
    return (forwarding_address_status !=  nullptr && forwarding_address_status->has_data())
	|| (prefix_status !=  nullptr && prefix_status->has_data())
	|| (protocol_status !=  nullptr && protocol_status->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::has_operation() const
{
    return is_set(yfilter)
	|| (forwarding_address_status !=  nullptr && forwarding_address_status->has_operation())
	|| (prefix_status !=  nullptr && prefix_status->has_operation())
	|| (protocol_status !=  nullptr && protocol_status->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-data";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AfData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-address-status")
    {
        if(forwarding_address_status == nullptr)
        {
            forwarding_address_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus>();
        }
        return forwarding_address_status;
    }

    if(child_yang_name == "prefix-status")
    {
        if(prefix_status == nullptr)
        {
            prefix_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus>();
        }
        return prefix_status;
    }

    if(child_yang_name == "protocol-status")
    {
        if(protocol_status == nullptr)
        {
            protocol_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus>();
        }
        return protocol_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forwarding_address_status != nullptr)
    {
        children["forwarding-address-status"] = forwarding_address_status;
    }

    if(prefix_status != nullptr)
    {
        children["prefix-status"] = prefix_status;
    }

    if(protocol_status != nullptr)
    {
        children["protocol-status"] = protocol_status;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-address-status" || name == "prefix-status" || name == "protocol-status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::ProtocolStatus()
    :
    status{YType::enumeration, "status"}
    	,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled>())
{
    disabled->parent = this;

    yang_name = "protocol-status"; yang_parent_name = "af-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::~ProtocolStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::has_data() const
{
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (disabled !=  nullptr && disabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-status";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled>();
        }
        return disabled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(disabled != nullptr)
    {
        children["disabled"] = disabled;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{
    yang_name = "disabled"; yang_parent_name = "protocol-status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Disabled' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressStatus()
    :
    status{YType::enumeration, "status"}
    	,
    forwarding_address_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData>())
	,unknown(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown>())
{
    forwarding_address_data->parent = this;

    unknown->parent = this;

    yang_name = "forwarding-address-status"; yang_parent_name = "af-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::~ForwardingAddressStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::has_data() const
{
    return status.is_set
	|| (forwarding_address_data !=  nullptr && forwarding_address_data->has_data())
	|| (unknown !=  nullptr && unknown->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (forwarding_address_data !=  nullptr && forwarding_address_data->has_operation())
	|| (unknown !=  nullptr && unknown->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-address-status";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardingAddressStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-address-data")
    {
        if(forwarding_address_data == nullptr)
        {
            forwarding_address_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData>();
        }
        return forwarding_address_data;
    }

    if(child_yang_name == "unknown")
    {
        if(unknown == nullptr)
        {
            unknown = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown>();
        }
        return unknown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forwarding_address_data != nullptr)
    {
        children["forwarding-address-data"] = forwarding_address_data;
    }

    if(unknown != nullptr)
    {
        children["unknown"] = unknown;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-address-data" || name == "unknown" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::Unknown()
    :
    reason_code{YType::enumeration, "reason-code"}
{
    yang_name = "unknown"; yang_parent_name = "forwarding-address-status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::~Unknown()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Unknown' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddressData()
    :
    unnumbered_interface_name{YType::str, "unnumbered-interface-name"}
{
    yang_name = "forwarding-address-data"; yang_parent_name = "forwarding-address-status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::~ForwardingAddressData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::has_data() const
{
    for (std::size_t index=0; index<forwarding_address.size(); index++)
    {
        if(forwarding_address[index]->has_data())
            return true;
    }
    return unnumbered_interface_name.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::has_operation() const
{
    for (std::size_t index=0; index<forwarding_address.size(); index++)
    {
        if(forwarding_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(unnumbered_interface_name.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-address-data";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardingAddressData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unnumbered_interface_name.is_set || is_set(unnumbered_interface_name.yfilter)) leaf_name_data.push_back(unnumbered_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-address")
    {
        for(auto const & c : forwarding_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress>();
        c->parent = this;
        forwarding_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : forwarding_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unnumbered-interface-name")
    {
        unnumbered_interface_name = value;
        unnumbered_interface_name.value_namespace = name_space;
        unnumbered_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unnumbered-interface-name")
    {
        unnumbered_interface_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-address" || name == "unnumbered-interface-name")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::ForwardingAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "forwarding-address"; yang_parent_name = "forwarding-address-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::~ForwardingAddress()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::has_data() const
{
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-address";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardingAddress' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixStatus()
    :
    status{YType::enumeration, "status"}
    	,
    prefix_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData>())
	,unknown(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown>())
{
    prefix_data->parent = this;

    unknown->parent = this;

    yang_name = "prefix-status"; yang_parent_name = "af-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::~PrefixStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::has_data() const
{
    return status.is_set
	|| (prefix_data !=  nullptr && prefix_data->has_data())
	|| (unknown !=  nullptr && unknown->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (prefix_data !=  nullptr && prefix_data->has_operation())
	|| (unknown !=  nullptr && unknown->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-status";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-data")
    {
        if(prefix_data == nullptr)
        {
            prefix_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData>();
        }
        return prefix_data;
    }

    if(child_yang_name == "unknown")
    {
        if(unknown == nullptr)
        {
            unknown = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown>();
        }
        return unknown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_data != nullptr)
    {
        children["prefix-data"] = prefix_data;
    }

    if(unknown != nullptr)
    {
        children["unknown"] = unknown;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-data" || name == "unknown" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::Unknown()
    :
    reason_code{YType::enumeration, "reason-code"}
{
    yang_name = "unknown"; yang_parent_name = "prefix-status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::~Unknown()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Unknown' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::PrefixData()
    :
    is_unnumbered{YType::boolean, "is-unnumbered"}
{
    yang_name = "prefix-data"; yang_parent_name = "prefix-status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::~PrefixData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::has_data() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return is_unnumbered.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::has_operation() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_unnumbered.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-data";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_unnumbered.is_set || is_set(is_unnumbered.yfilter)) leaf_name_data.push_back(is_unnumbered.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        for(auto const & c : prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix>();
        c->parent = this;
        prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-unnumbered")
    {
        is_unnumbered = value;
        is_unnumbered.value_namespace = name_space;
        is_unnumbered.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-unnumbered")
    {
        is_unnumbered.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "is-unnumbered")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"}
    	,
    ipv4(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4>())
	,ipv6(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6>())
{
    ipv4->parent = this;

    ipv6->parent = this;

    yang_name = "prefix"; yang_parent_name = "prefix-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::~Prefix()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::has_data() const
{
    return af_name.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "af-name")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::Ipv4()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "ipv4"; yang_parent_name = "prefix";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::~Ipv4()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::Ipv6()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "ipv6"; yang_parent_name = "prefix";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::~Ipv6()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacencies()
{
    yang_name = "checkpoint-adjacencies"; yang_parent_name = "instance";
}

Isis::Instances::Instance::CheckpointAdjacencies::~CheckpointAdjacencies()
{
}

bool Isis::Instances::Instance::CheckpointAdjacencies::has_data() const
{
    for (std::size_t index=0; index<checkpoint_adjacency.size(); index++)
    {
        if(checkpoint_adjacency[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::CheckpointAdjacencies::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_adjacency.size(); index++)
    {
        if(checkpoint_adjacency[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::CheckpointAdjacencies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-adjacencies";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::CheckpointAdjacencies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CheckpointAdjacencies' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointAdjacencies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "checkpoint-adjacency")
    {
        for(auto const & c : checkpoint_adjacency)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency>();
        c->parent = this;
        checkpoint_adjacency.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::CheckpointAdjacencies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : checkpoint_adjacency)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::CheckpointAdjacencies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::CheckpointAdjacencies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::CheckpointAdjacencies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-adjacency")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacency()
    :
    checkpoint_adjacency_circuit_number{YType::uint8, "checkpoint-adjacency-circuit-number"},
    checkpoint_adjacency_holdtime{YType::uint16, "checkpoint-adjacency-holdtime"},
    checkpoint_adjacency_interface{YType::str, "checkpoint-adjacency-interface"},
    checkpoint_adjacency_lan_priority{YType::uint8, "checkpoint-adjacency-lan-priority"},
    checkpoint_adjacency_level{YType::enumeration, "checkpoint-adjacency-level"},
    checkpoint_adjacency_object_id{YType::uint32, "checkpoint-adjacency-object-id"},
    checkpoint_adjacency_snpa{YType::str, "checkpoint-adjacency-snpa"},
    checkpoint_adjacency_system_id{YType::str, "checkpoint-adjacency-system-id"},
    interface_name{YType::str, "interface-name"},
    level{YType::enumeration, "level"},
    system_id{YType::str, "system-id"}
{
    yang_name = "checkpoint-adjacency"; yang_parent_name = "checkpoint-adjacencies";
}

Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::~CheckpointAdjacency()
{
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::has_data() const
{
    for (std::size_t index=0; index<checkpoint_adjacency_per_address_family_next_hop.size(); index++)
    {
        if(checkpoint_adjacency_per_address_family_next_hop[index]->has_data())
            return true;
    }
    return checkpoint_adjacency_circuit_number.is_set
	|| checkpoint_adjacency_holdtime.is_set
	|| checkpoint_adjacency_interface.is_set
	|| checkpoint_adjacency_lan_priority.is_set
	|| checkpoint_adjacency_level.is_set
	|| checkpoint_adjacency_object_id.is_set
	|| checkpoint_adjacency_snpa.is_set
	|| checkpoint_adjacency_system_id.is_set
	|| interface_name.is_set
	|| level.is_set
	|| system_id.is_set;
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_adjacency_per_address_family_next_hop.size(); index++)
    {
        if(checkpoint_adjacency_per_address_family_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(checkpoint_adjacency_circuit_number.yfilter)
	|| ydk::is_set(checkpoint_adjacency_holdtime.yfilter)
	|| ydk::is_set(checkpoint_adjacency_interface.yfilter)
	|| ydk::is_set(checkpoint_adjacency_lan_priority.yfilter)
	|| ydk::is_set(checkpoint_adjacency_level.yfilter)
	|| ydk::is_set(checkpoint_adjacency_object_id.yfilter)
	|| ydk::is_set(checkpoint_adjacency_snpa.yfilter)
	|| ydk::is_set(checkpoint_adjacency_system_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(system_id.yfilter);
}

std::string Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-adjacency";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CheckpointAdjacency' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (checkpoint_adjacency_circuit_number.is_set || is_set(checkpoint_adjacency_circuit_number.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_circuit_number.get_name_leafdata());
    if (checkpoint_adjacency_holdtime.is_set || is_set(checkpoint_adjacency_holdtime.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_holdtime.get_name_leafdata());
    if (checkpoint_adjacency_interface.is_set || is_set(checkpoint_adjacency_interface.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_interface.get_name_leafdata());
    if (checkpoint_adjacency_lan_priority.is_set || is_set(checkpoint_adjacency_lan_priority.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_lan_priority.get_name_leafdata());
    if (checkpoint_adjacency_level.is_set || is_set(checkpoint_adjacency_level.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_level.get_name_leafdata());
    if (checkpoint_adjacency_object_id.is_set || is_set(checkpoint_adjacency_object_id.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_object_id.get_name_leafdata());
    if (checkpoint_adjacency_snpa.is_set || is_set(checkpoint_adjacency_snpa.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_snpa.get_name_leafdata());
    if (checkpoint_adjacency_system_id.is_set || is_set(checkpoint_adjacency_system_id.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_system_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "checkpoint-adjacency-per-address-family-next-hop")
    {
        for(auto const & c : checkpoint_adjacency_per_address_family_next_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop>();
        c->parent = this;
        checkpoint_adjacency_per_address_family_next_hop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : checkpoint_adjacency_per_address_family_next_hop)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "checkpoint-adjacency-circuit-number")
    {
        checkpoint_adjacency_circuit_number = value;
        checkpoint_adjacency_circuit_number.value_namespace = name_space;
        checkpoint_adjacency_circuit_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-holdtime")
    {
        checkpoint_adjacency_holdtime = value;
        checkpoint_adjacency_holdtime.value_namespace = name_space;
        checkpoint_adjacency_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-interface")
    {
        checkpoint_adjacency_interface = value;
        checkpoint_adjacency_interface.value_namespace = name_space;
        checkpoint_adjacency_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-lan-priority")
    {
        checkpoint_adjacency_lan_priority = value;
        checkpoint_adjacency_lan_priority.value_namespace = name_space;
        checkpoint_adjacency_lan_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-level")
    {
        checkpoint_adjacency_level = value;
        checkpoint_adjacency_level.value_namespace = name_space;
        checkpoint_adjacency_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-object-id")
    {
        checkpoint_adjacency_object_id = value;
        checkpoint_adjacency_object_id.value_namespace = name_space;
        checkpoint_adjacency_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-snpa")
    {
        checkpoint_adjacency_snpa = value;
        checkpoint_adjacency_snpa.value_namespace = name_space;
        checkpoint_adjacency_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-system-id")
    {
        checkpoint_adjacency_system_id = value;
        checkpoint_adjacency_system_id.value_namespace = name_space;
        checkpoint_adjacency_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "checkpoint-adjacency-circuit-number")
    {
        checkpoint_adjacency_circuit_number.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-holdtime")
    {
        checkpoint_adjacency_holdtime.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-interface")
    {
        checkpoint_adjacency_interface.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-lan-priority")
    {
        checkpoint_adjacency_lan_priority.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-level")
    {
        checkpoint_adjacency_level.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-object-id")
    {
        checkpoint_adjacency_object_id.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-snpa")
    {
        checkpoint_adjacency_snpa.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-system-id")
    {
        checkpoint_adjacency_system_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-adjacency-per-address-family-next-hop" || name == "checkpoint-adjacency-circuit-number" || name == "checkpoint-adjacency-holdtime" || name == "checkpoint-adjacency-interface" || name == "checkpoint-adjacency-lan-priority" || name == "checkpoint-adjacency-level" || name == "checkpoint-adjacency-object-id" || name == "checkpoint-adjacency-snpa" || name == "checkpoint-adjacency-system-id" || name == "interface-name" || name == "level" || name == "system-id")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::CheckpointAdjacencyPerAddressFamilyNextHop()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "checkpoint-adjacency-per-address-family-next-hop"; yang_parent_name = "checkpoint-adjacency";
}

Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::~CheckpointAdjacencyPerAddressFamilyNextHop()
{
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::has_data() const
{
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-adjacency-per-address-family-next-hop";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CheckpointAdjacencyPerAddressFamilyNextHop' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Srms()
    :
    policy(std::make_shared<Isis::Instances::Instance::Srms::Policy>())
{
    policy->parent = this;

    yang_name = "srms"; yang_parent_name = "instance";
}

Isis::Instances::Instance::Srms::~Srms()
{
}

bool Isis::Instances::Instance::Srms::has_data() const
{
    return (policy !=  nullptr && policy->has_data());
}

bool Isis::Instances::Instance::Srms::has_operation() const
{
    return is_set(yfilter)
	|| (policy !=  nullptr && policy->has_operation());
}

std::string Isis::Instances::Instance::Srms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srms";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Srms::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Srms' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Isis::Instances::Instance::Srms::Policy>();
        }
        return policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    return children;
}

void Isis::Instances::Instance::Srms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::Policy()
    :
    policy_ipv4(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4>())
	,policy_ipv6(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6>())
{
    policy_ipv4->parent = this;

    policy_ipv6->parent = this;

    yang_name = "policy"; yang_parent_name = "srms";
}

Isis::Instances::Instance::Srms::Policy::~Policy()
{
}

bool Isis::Instances::Instance::Srms::Policy::has_data() const
{
    return (policy_ipv4 !=  nullptr && policy_ipv4->has_data())
	|| (policy_ipv6 !=  nullptr && policy_ipv6->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::has_operation() const
{
    return is_set(yfilter)
	|| (policy_ipv4 !=  nullptr && policy_ipv4->has_operation())
	|| (policy_ipv6 !=  nullptr && policy_ipv6->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Srms::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Policy' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-ipv4")
    {
        if(policy_ipv4 == nullptr)
        {
            policy_ipv4 = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4>();
        }
        return policy_ipv4;
    }

    if(child_yang_name == "policy-ipv6")
    {
        if(policy_ipv6 == nullptr)
        {
            policy_ipv6 = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6>();
        }
        return policy_ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(policy_ipv4 != nullptr)
    {
        children["policy-ipv4"] = policy_ipv4;
    }

    if(policy_ipv6 != nullptr)
    {
        children["policy-ipv6"] = policy_ipv6;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-ipv4" || name == "policy-ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4()
    :
    policy_ipv4_active(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active>())
	,policy_ipv4_backup(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup>())
{
    policy_ipv4_active->parent = this;

    policy_ipv4_backup->parent = this;

    yang_name = "policy-ipv4"; yang_parent_name = "policy";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::~PolicyIpv4()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::has_data() const
{
    return (policy_ipv4_active !=  nullptr && policy_ipv4_active->has_data())
	|| (policy_ipv4_backup !=  nullptr && policy_ipv4_backup->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::has_operation() const
{
    return is_set(yfilter)
	|| (policy_ipv4_active !=  nullptr && policy_ipv4_active->has_operation())
	|| (policy_ipv4_backup !=  nullptr && policy_ipv4_backup->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyIpv4' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-ipv4-active")
    {
        if(policy_ipv4_active == nullptr)
        {
            policy_ipv4_active = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active>();
        }
        return policy_ipv4_active;
    }

    if(child_yang_name == "policy-ipv4-backup")
    {
        if(policy_ipv4_backup == nullptr)
        {
            policy_ipv4_backup = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup>();
        }
        return policy_ipv4_backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(policy_ipv4_active != nullptr)
    {
        children["policy-ipv4-active"] = policy_ipv4_active;
    }

    if(policy_ipv4_backup != nullptr)
    {
        children["policy-ipv4-backup"] = policy_ipv4_backup;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-ipv4-active" || name == "policy-ipv4-backup")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyIpv4Active()
{
    yang_name = "policy-ipv4-active"; yang_parent_name = "policy-ipv4";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::~PolicyIpv4Active()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_data() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4-active";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyIpv4Active' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        for(auto const & c : policy_mi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi>();
        c->parent = this;
        policy_mi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_mi)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    area{YType::str, "area"},
    flag_attached{YType::enumeration, "flag-attached"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    prefix{YType::uint8, "prefix"},
    router{YType::str, "router"},
    sid_count{YType::uint32, "sid-count"},
    sid_start{YType::uint32, "sid-start"},
    src{YType::enumeration, "src"}
    	,
    addr(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv4-active";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::~PolicyMi()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_data() const
{
    return mi_id.is_set
	|| area.is_set
	|| flag_attached.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| prefix.is_set
	|| router.is_set
	|| sid_count.is_set
	|| sid_start.is_set
	|| src.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_id.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(src.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi" <<"[mi-id='" <<mi_id <<"']";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyMi' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.yfilter)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
        mi_id.value_namespace = name_space;
        mi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-id")
    {
        mi_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "area" || name == "flag-attached" || name == "last-prefix" || name == "last-sid-index" || name == "prefix" || name == "router" || name == "sid-count" || name == "sid-start" || name == "src")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "addr"; yang_parent_name = "policy-mi";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::~Addr()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Addr' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyIpv4Backup()
{
    yang_name = "policy-ipv4-backup"; yang_parent_name = "policy-ipv4";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::~PolicyIpv4Backup()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_data() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4-backup";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyIpv4Backup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        for(auto const & c : policy_mi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi>();
        c->parent = this;
        policy_mi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_mi)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    area{YType::str, "area"},
    flag_attached{YType::enumeration, "flag-attached"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    prefix{YType::uint8, "prefix"},
    router{YType::str, "router"},
    sid_count{YType::uint32, "sid-count"},
    sid_start{YType::uint32, "sid-start"},
    src{YType::enumeration, "src"}
    	,
    addr(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv4-backup";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::~PolicyMi()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_data() const
{
    return mi_id.is_set
	|| area.is_set
	|| flag_attached.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| prefix.is_set
	|| router.is_set
	|| sid_count.is_set
	|| sid_start.is_set
	|| src.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_id.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(src.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi" <<"[mi-id='" <<mi_id <<"']";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyMi' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.yfilter)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
        mi_id.value_namespace = name_space;
        mi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-id")
    {
        mi_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "area" || name == "flag-attached" || name == "last-prefix" || name == "last-sid-index" || name == "prefix" || name == "router" || name == "sid-count" || name == "sid-start" || name == "src")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "addr"; yang_parent_name = "policy-mi";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::~Addr()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Addr' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6()
    :
    policy_ipv6_active(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active>())
	,policy_ipv6_backup(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup>())
{
    policy_ipv6_active->parent = this;

    policy_ipv6_backup->parent = this;

    yang_name = "policy-ipv6"; yang_parent_name = "policy";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::~PolicyIpv6()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::has_data() const
{
    return (policy_ipv6_active !=  nullptr && policy_ipv6_active->has_data())
	|| (policy_ipv6_backup !=  nullptr && policy_ipv6_backup->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::has_operation() const
{
    return is_set(yfilter)
	|| (policy_ipv6_active !=  nullptr && policy_ipv6_active->has_operation())
	|| (policy_ipv6_backup !=  nullptr && policy_ipv6_backup->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv6";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyIpv6' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-ipv6-active")
    {
        if(policy_ipv6_active == nullptr)
        {
            policy_ipv6_active = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active>();
        }
        return policy_ipv6_active;
    }

    if(child_yang_name == "policy-ipv6-backup")
    {
        if(policy_ipv6_backup == nullptr)
        {
            policy_ipv6_backup = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup>();
        }
        return policy_ipv6_backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(policy_ipv6_active != nullptr)
    {
        children["policy-ipv6-active"] = policy_ipv6_active;
    }

    if(policy_ipv6_backup != nullptr)
    {
        children["policy-ipv6-backup"] = policy_ipv6_backup;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-ipv6-active" || name == "policy-ipv6-backup")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyIpv6Backup()
{
    yang_name = "policy-ipv6-backup"; yang_parent_name = "policy-ipv6";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::~PolicyIpv6Backup()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::has_data() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv6-backup";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyIpv6Backup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        for(auto const & c : policy_mi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi>();
        c->parent = this;
        policy_mi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_mi)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    area{YType::str, "area"},
    flag_attached{YType::enumeration, "flag-attached"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    prefix{YType::uint8, "prefix"},
    router{YType::str, "router"},
    sid_count{YType::uint32, "sid-count"},
    sid_start{YType::uint32, "sid-start"},
    src{YType::enumeration, "src"}
    	,
    addr(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv6-backup";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::~PolicyMi()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::has_data() const
{
    return mi_id.is_set
	|| area.is_set
	|| flag_attached.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| prefix.is_set
	|| router.is_set
	|| sid_count.is_set
	|| sid_start.is_set
	|| src.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_id.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(src.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi" <<"[mi-id='" <<mi_id <<"']";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyMi' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.yfilter)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
        mi_id.value_namespace = name_space;
        mi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-id")
    {
        mi_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "area" || name == "flag-attached" || name == "last-prefix" || name == "last-sid-index" || name == "prefix" || name == "router" || name == "sid-count" || name == "sid-start" || name == "src")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "addr"; yang_parent_name = "policy-mi";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::~Addr()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Addr' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyIpv6Active()
{
    yang_name = "policy-ipv6-active"; yang_parent_name = "policy-ipv6";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::~PolicyIpv6Active()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::has_data() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv6-active";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyIpv6Active' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        for(auto const & c : policy_mi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi>();
        c->parent = this;
        policy_mi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_mi)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    area{YType::str, "area"},
    flag_attached{YType::enumeration, "flag-attached"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    prefix{YType::uint8, "prefix"},
    router{YType::str, "router"},
    sid_count{YType::uint32, "sid-count"},
    sid_start{YType::uint32, "sid-start"},
    src{YType::enumeration, "src"}
    	,
    addr(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv6-active";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::~PolicyMi()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::has_data() const
{
    return mi_id.is_set
	|| area.is_set
	|| flag_attached.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| prefix.is_set
	|| router.is_set
	|| sid_count.is_set
	|| sid_start.is_set
	|| src.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_id.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(src.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi" <<"[mi-id='" <<mi_id <<"']";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyMi' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.yfilter)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addr != nullptr)
    {
        children["addr"] = addr;
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
        mi_id.value_namespace = name_space;
        mi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-id")
    {
        mi_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "area" || name == "flag-attached" || name == "last-prefix" || name == "last-sid-index" || name == "prefix" || name == "router" || name == "sid-count" || name == "sid-start" || name == "src")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "addr"; yang_parent_name = "policy-mi";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::~Addr()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Addr' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::ErrorLog::ErrorLog()
{
    yang_name = "error-log"; yang_parent_name = "instance";
}

Isis::Instances::Instance::ErrorLog::~ErrorLog()
{
}

bool Isis::Instances::Instance::ErrorLog::has_data() const
{
    for (std::size_t index=0; index<log_entry.size(); index++)
    {
        if(log_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::ErrorLog::has_operation() const
{
    for (std::size_t index=0; index<log_entry.size(); index++)
    {
        if(log_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::ErrorLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-log";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::ErrorLog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ErrorLog' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::ErrorLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-entry")
    {
        for(auto const & c : log_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::ErrorLog::LogEntry>();
        c->parent = this;
        log_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::ErrorLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : log_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::ErrorLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::ErrorLog::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::ErrorLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-entry")
        return true;
    return false;
}

Isis::Instances::Instance::ErrorLog::LogEntry::LogEntry()
    :
    error_code{YType::uint32, "error-code"},
    error_log_level{YType::enumeration, "error-log-level"},
    error_reason{YType::str, "error-reason"}
    	,
    generic_data(std::make_shared<Isis::Instances::Instance::ErrorLog::LogEntry::GenericData>())
{
    generic_data->parent = this;

    yang_name = "log-entry"; yang_parent_name = "error-log";
}

Isis::Instances::Instance::ErrorLog::LogEntry::~LogEntry()
{
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::has_data() const
{
    return error_code.is_set
	|| error_log_level.is_set
	|| error_reason.is_set
	|| (generic_data !=  nullptr && generic_data->has_data());
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_code.yfilter)
	|| ydk::is_set(error_log_level.yfilter)
	|| ydk::is_set(error_reason.yfilter)
	|| (generic_data !=  nullptr && generic_data->has_operation());
}

std::string Isis::Instances::Instance::ErrorLog::LogEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-entry";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::ErrorLog::LogEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LogEntry' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_code.is_set || is_set(error_code.yfilter)) leaf_name_data.push_back(error_code.get_name_leafdata());
    if (error_log_level.is_set || is_set(error_log_level.yfilter)) leaf_name_data.push_back(error_log_level.get_name_leafdata());
    if (error_reason.is_set || is_set(error_reason.yfilter)) leaf_name_data.push_back(error_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::ErrorLog::LogEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-data")
    {
        if(generic_data == nullptr)
        {
            generic_data = std::make_shared<Isis::Instances::Instance::ErrorLog::LogEntry::GenericData>();
        }
        return generic_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::ErrorLog::LogEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(generic_data != nullptr)
    {
        children["generic-data"] = generic_data;
    }

    return children;
}

void Isis::Instances::Instance::ErrorLog::LogEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-code")
    {
        error_code = value;
        error_code.value_namespace = name_space;
        error_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-log-level")
    {
        error_log_level = value;
        error_log_level.value_namespace = name_space;
        error_log_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-reason")
    {
        error_reason = value;
        error_reason.value_namespace = name_space;
        error_reason.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::ErrorLog::LogEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-code")
    {
        error_code.yfilter = yfilter;
    }
    if(value_path == "error-log-level")
    {
        error_log_level.yfilter = yfilter;
    }
    if(value_path == "error-reason")
    {
        error_reason.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-data" || name == "error-code" || name == "error-log-level" || name == "error-reason")
        return true;
    return false;
}

Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::GenericData()
    :
    timestamp(std::make_shared<Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp>())
{
    timestamp->parent = this;

    yang_name = "generic-data"; yang_parent_name = "log-entry";
}

Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::~GenericData()
{
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::has_data() const
{
    return (timestamp !=  nullptr && timestamp->has_data());
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::has_operation() const
{
    return is_set(yfilter)
	|| (timestamp !=  nullptr && timestamp->has_operation());
}

std::string Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-data";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GenericData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timestamp")
    {
        if(timestamp == nullptr)
        {
            timestamp = std::make_shared<Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp>();
        }
        return timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timestamp != nullptr)
    {
        children["timestamp"] = timestamp;
    }

    return children;
}

void Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp")
        return true;
    return false;
}

Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::Timestamp()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "timestamp"; yang_parent_name = "generic-data";
}

Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::~Timestamp()
{
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nano_seconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timestamp' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nano-seconds" || name == "seconds")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterfaces()
{
    yang_name = "checkpoint-interfaces"; yang_parent_name = "instance";
}

Isis::Instances::Instance::CheckpointInterfaces::~CheckpointInterfaces()
{
}

bool Isis::Instances::Instance::CheckpointInterfaces::has_data() const
{
    for (std::size_t index=0; index<checkpoint_interface.size(); index++)
    {
        if(checkpoint_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::CheckpointInterfaces::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_interface.size(); index++)
    {
        if(checkpoint_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::CheckpointInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-interfaces";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::CheckpointInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CheckpointInterfaces' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "checkpoint-interface")
    {
        for(auto const & c : checkpoint_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface>();
        c->parent = this;
        checkpoint_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::CheckpointInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : checkpoint_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::CheckpointInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::CheckpointInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::CheckpointInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-interface")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::CheckpointInterface()
    :
    interface_name{YType::str, "interface-name"},
    checkpoint_interface_handle{YType::str, "checkpoint-interface-handle"},
    checkpoint_object_id{YType::uint32, "checkpoint-object-id"},
    dis_areas{YType::enumeration, "dis-areas"},
    has_achieved_ld_pv6_sync{YType::boolean, "has-achieved-ld-pv6-sync"},
    has_achieved_ldp_sync{YType::boolean, "has-achieved-ldp-sync"},
    has_adjacency{YType::boolean, "has-adjacency"},
    has_joined_mcast_group{YType::boolean, "has-joined-mcast-group"},
    interface_name_xr{YType::str, "interface-name-xr"},
    local_circuit_number{YType::uint8, "local-circuit-number"},
    local_snpa{YType::str, "local-snpa"}
{
    yang_name = "checkpoint-interface"; yang_parent_name = "checkpoint-interfaces";
}

Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::~CheckpointInterface()
{
}

bool Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::has_data() const
{
    return interface_name.is_set
	|| checkpoint_interface_handle.is_set
	|| checkpoint_object_id.is_set
	|| dis_areas.is_set
	|| has_achieved_ld_pv6_sync.is_set
	|| has_achieved_ldp_sync.is_set
	|| has_adjacency.is_set
	|| has_joined_mcast_group.is_set
	|| interface_name_xr.is_set
	|| local_circuit_number.is_set
	|| local_snpa.is_set;
}

bool Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(checkpoint_interface_handle.yfilter)
	|| ydk::is_set(checkpoint_object_id.yfilter)
	|| ydk::is_set(dis_areas.yfilter)
	|| ydk::is_set(has_achieved_ld_pv6_sync.yfilter)
	|| ydk::is_set(has_achieved_ldp_sync.yfilter)
	|| ydk::is_set(has_adjacency.yfilter)
	|| ydk::is_set(has_joined_mcast_group.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(local_circuit_number.yfilter)
	|| ydk::is_set(local_snpa.yfilter);
}

std::string Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CheckpointInterface' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (checkpoint_interface_handle.is_set || is_set(checkpoint_interface_handle.yfilter)) leaf_name_data.push_back(checkpoint_interface_handle.get_name_leafdata());
    if (checkpoint_object_id.is_set || is_set(checkpoint_object_id.yfilter)) leaf_name_data.push_back(checkpoint_object_id.get_name_leafdata());
    if (dis_areas.is_set || is_set(dis_areas.yfilter)) leaf_name_data.push_back(dis_areas.get_name_leafdata());
    if (has_achieved_ld_pv6_sync.is_set || is_set(has_achieved_ld_pv6_sync.yfilter)) leaf_name_data.push_back(has_achieved_ld_pv6_sync.get_name_leafdata());
    if (has_achieved_ldp_sync.is_set || is_set(has_achieved_ldp_sync.yfilter)) leaf_name_data.push_back(has_achieved_ldp_sync.get_name_leafdata());
    if (has_adjacency.is_set || is_set(has_adjacency.yfilter)) leaf_name_data.push_back(has_adjacency.get_name_leafdata());
    if (has_joined_mcast_group.is_set || is_set(has_joined_mcast_group.yfilter)) leaf_name_data.push_back(has_joined_mcast_group.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (local_circuit_number.is_set || is_set(local_circuit_number.yfilter)) leaf_name_data.push_back(local_circuit_number.get_name_leafdata());
    if (local_snpa.is_set || is_set(local_snpa.yfilter)) leaf_name_data.push_back(local_snpa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-interface-handle")
    {
        checkpoint_interface_handle = value;
        checkpoint_interface_handle.value_namespace = name_space;
        checkpoint_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-object-id")
    {
        checkpoint_object_id = value;
        checkpoint_object_id.value_namespace = name_space;
        checkpoint_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dis-areas")
    {
        dis_areas = value;
        dis_areas.value_namespace = name_space;
        dis_areas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-achieved-ld-pv6-sync")
    {
        has_achieved_ld_pv6_sync = value;
        has_achieved_ld_pv6_sync.value_namespace = name_space;
        has_achieved_ld_pv6_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-achieved-ldp-sync")
    {
        has_achieved_ldp_sync = value;
        has_achieved_ldp_sync.value_namespace = name_space;
        has_achieved_ldp_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-adjacency")
    {
        has_adjacency = value;
        has_adjacency.value_namespace = name_space;
        has_adjacency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-joined-mcast-group")
    {
        has_joined_mcast_group = value;
        has_joined_mcast_group.value_namespace = name_space;
        has_joined_mcast_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-circuit-number")
    {
        local_circuit_number = value;
        local_circuit_number.value_namespace = name_space;
        local_circuit_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-snpa")
    {
        local_snpa = value;
        local_snpa.value_namespace = name_space;
        local_snpa.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "checkpoint-interface-handle")
    {
        checkpoint_interface_handle.yfilter = yfilter;
    }
    if(value_path == "checkpoint-object-id")
    {
        checkpoint_object_id.yfilter = yfilter;
    }
    if(value_path == "dis-areas")
    {
        dis_areas.yfilter = yfilter;
    }
    if(value_path == "has-achieved-ld-pv6-sync")
    {
        has_achieved_ld_pv6_sync.yfilter = yfilter;
    }
    if(value_path == "has-achieved-ldp-sync")
    {
        has_achieved_ldp_sync.yfilter = yfilter;
    }
    if(value_path == "has-adjacency")
    {
        has_adjacency.yfilter = yfilter;
    }
    if(value_path == "has-joined-mcast-group")
    {
        has_joined_mcast_group.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "local-circuit-number")
    {
        local_circuit_number.yfilter = yfilter;
    }
    if(value_path == "local-snpa")
    {
        local_snpa.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "checkpoint-interface-handle" || name == "checkpoint-object-id" || name == "dis-areas" || name == "has-achieved-ld-pv6-sync" || name == "has-achieved-ldp-sync" || name == "has-adjacency" || name == "has-joined-mcast-group" || name == "interface-name-xr" || name == "local-circuit-number" || name == "local-snpa")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistics()
{
    yang_name = "interface-statistics"; yang_parent_name = "instance";
}

Isis::Instances::Instance::InterfaceStatistics::~InterfaceStatistics()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::has_data() const
{
    for (std::size_t index=0; index<interface_statistic.size(); index++)
    {
        if(interface_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::InterfaceStatistics::has_operation() const
{
    for (std::size_t index=0; index<interface_statistic.size(); index++)
    {
        if(interface_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::InterfaceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-statistics";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::InterfaceStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStatistics' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-statistic")
    {
        for(auto const & c : interface_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic>();
        c->parent = this;
        interface_statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::InterfaceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::InterfaceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-statistic")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::InterfaceStatistic()
    :
    interface_name{YType::str, "interface-name"},
    interface_media_type{YType::enumeration, "interface-media-type"},
    traffic_interface{YType::str, "traffic-interface"}
    	,
    p2p_statistics(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics>())
{
    p2p_statistics->parent = this;

    yang_name = "interface-statistic"; yang_parent_name = "interface-statistics";
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::~InterfaceStatistic()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::has_data() const
{
    for (std::size_t index=0; index<per_area_data.size(); index++)
    {
        if(per_area_data[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_media_type.is_set
	|| traffic_interface.is_set
	|| (p2p_statistics !=  nullptr && p2p_statistics->has_data());
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::has_operation() const
{
    for (std::size_t index=0; index<per_area_data.size(); index++)
    {
        if(per_area_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_media_type.yfilter)
	|| ydk::is_set(traffic_interface.yfilter)
	|| (p2p_statistics !=  nullptr && p2p_statistics->has_operation());
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-statistic" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStatistic' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_media_type.is_set || is_set(interface_media_type.yfilter)) leaf_name_data.push_back(interface_media_type.get_name_leafdata());
    if (traffic_interface.is_set || is_set(traffic_interface.yfilter)) leaf_name_data.push_back(traffic_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2p-statistics")
    {
        if(p2p_statistics == nullptr)
        {
            p2p_statistics = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics>();
        }
        return p2p_statistics;
    }

    if(child_yang_name == "per-area-data")
    {
        for(auto const & c : per_area_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData>();
        c->parent = this;
        per_area_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(p2p_statistics != nullptr)
    {
        children["p2p-statistics"] = p2p_statistics;
    }

    for (auto const & c : per_area_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-media-type")
    {
        interface_media_type = value;
        interface_media_type.value_namespace = name_space;
        interface_media_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-interface")
    {
        traffic_interface = value;
        traffic_interface.value_namespace = name_space;
        traffic_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-media-type")
    {
        interface_media_type.yfilter = yfilter;
    }
    if(value_path == "traffic-interface")
    {
        traffic_interface.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2p-statistics" || name == "per-area-data" || name == "interface-name" || name == "interface-media-type" || name == "traffic-interface")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::P2PStatistics()
    :
    lsp_retransmit_count{YType::uint32, "lsp-retransmit-count"},
    memory_exhausted_iih_count{YType::uint32, "memory-exhausted-iih-count"}
    	,
    iih_count(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount>())
{
    iih_count->parent = this;

    yang_name = "p2p-statistics"; yang_parent_name = "interface-statistic";
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::~P2PStatistics()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::has_data() const
{
    return lsp_retransmit_count.is_set
	|| memory_exhausted_iih_count.is_set
	|| (iih_count !=  nullptr && iih_count->has_data());
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_retransmit_count.yfilter)
	|| ydk::is_set(memory_exhausted_iih_count.yfilter)
	|| (iih_count !=  nullptr && iih_count->has_operation());
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-statistics";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'P2PStatistics' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_retransmit_count.is_set || is_set(lsp_retransmit_count.yfilter)) leaf_name_data.push_back(lsp_retransmit_count.get_name_leafdata());
    if (memory_exhausted_iih_count.is_set || is_set(memory_exhausted_iih_count.yfilter)) leaf_name_data.push_back(memory_exhausted_iih_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iih-count")
    {
        if(iih_count == nullptr)
        {
            iih_count = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount>();
        }
        return iih_count;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(iih_count != nullptr)
    {
        children["iih-count"] = iih_count;
    }

    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-retransmit-count")
    {
        lsp_retransmit_count = value;
        lsp_retransmit_count.value_namespace = name_space;
        lsp_retransmit_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-exhausted-iih-count")
    {
        memory_exhausted_iih_count = value;
        memory_exhausted_iih_count.value_namespace = name_space;
        memory_exhausted_iih_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-retransmit-count")
    {
        lsp_retransmit_count.yfilter = yfilter;
    }
    if(value_path == "memory-exhausted-iih-count")
    {
        memory_exhausted_iih_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iih-count" || name == "lsp-retransmit-count" || name == "memory-exhausted-iih-count")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::IihCount()
    :
    pdu_receive_count{YType::uint32, "pdu-receive-count"},
    pdu_send_count{YType::uint32, "pdu-send-count"}
{
    yang_name = "iih-count"; yang_parent_name = "p2p-statistics";
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::~IihCount()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::has_data() const
{
    return pdu_receive_count.is_set
	|| pdu_send_count.is_set;
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu_receive_count.yfilter)
	|| ydk::is_set(pdu_send_count.yfilter);
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iih-count";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IihCount' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu_receive_count.is_set || is_set(pdu_receive_count.yfilter)) leaf_name_data.push_back(pdu_receive_count.get_name_leafdata());
    if (pdu_send_count.is_set || is_set(pdu_send_count.yfilter)) leaf_name_data.push_back(pdu_send_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count = value;
        pdu_receive_count.value_namespace = name_space;
        pdu_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count = value;
        pdu_send_count.value_namespace = name_space;
        pdu_send_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count.yfilter = yfilter;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu-receive-count" || name == "pdu-send-count")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::PerAreaData()
    :
    level{YType::enumeration, "level"}
    	,
    lan_data(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData>())
	,statistics(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics>())
{
    lan_data->parent = this;

    statistics->parent = this;

    yang_name = "per-area-data"; yang_parent_name = "interface-statistic";
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::~PerAreaData()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::has_data() const
{
    return level.is_set
	|| (lan_data !=  nullptr && lan_data->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| (lan_data !=  nullptr && lan_data->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-area-data";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerAreaData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lan-data")
    {
        if(lan_data == nullptr)
        {
            lan_data = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData>();
        }
        return lan_data;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lan_data != nullptr)
    {
        children["lan-data"] = lan_data;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lan-data" || name == "statistics" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::Statistics()
    :
    lsp_drop_count{YType::uint32, "lsp-drop-count"},
    lsp_flooding_dup_count{YType::uint32, "lsp-flooding-dup-count"}
    	,
    csnp_count(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount>())
	,lsp_count(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount>())
	,psnp_count(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount>())
{
    csnp_count->parent = this;

    lsp_count->parent = this;

    psnp_count->parent = this;

    yang_name = "statistics"; yang_parent_name = "per-area-data";
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::~Statistics()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::has_data() const
{
    return lsp_drop_count.is_set
	|| lsp_flooding_dup_count.is_set
	|| (csnp_count !=  nullptr && csnp_count->has_data())
	|| (lsp_count !=  nullptr && lsp_count->has_data())
	|| (psnp_count !=  nullptr && psnp_count->has_data());
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_drop_count.yfilter)
	|| ydk::is_set(lsp_flooding_dup_count.yfilter)
	|| (csnp_count !=  nullptr && csnp_count->has_operation())
	|| (lsp_count !=  nullptr && lsp_count->has_operation())
	|| (psnp_count !=  nullptr && psnp_count->has_operation());
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_drop_count.is_set || is_set(lsp_drop_count.yfilter)) leaf_name_data.push_back(lsp_drop_count.get_name_leafdata());
    if (lsp_flooding_dup_count.is_set || is_set(lsp_flooding_dup_count.yfilter)) leaf_name_data.push_back(lsp_flooding_dup_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csnp-count")
    {
        if(csnp_count == nullptr)
        {
            csnp_count = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount>();
        }
        return csnp_count;
    }

    if(child_yang_name == "lsp-count")
    {
        if(lsp_count == nullptr)
        {
            lsp_count = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount>();
        }
        return lsp_count;
    }

    if(child_yang_name == "psnp-count")
    {
        if(psnp_count == nullptr)
        {
            psnp_count = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount>();
        }
        return psnp_count;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(csnp_count != nullptr)
    {
        children["csnp-count"] = csnp_count;
    }

    if(lsp_count != nullptr)
    {
        children["lsp-count"] = lsp_count;
    }

    if(psnp_count != nullptr)
    {
        children["psnp-count"] = psnp_count;
    }

    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-drop-count")
    {
        lsp_drop_count = value;
        lsp_drop_count.value_namespace = name_space;
        lsp_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-flooding-dup-count")
    {
        lsp_flooding_dup_count = value;
        lsp_flooding_dup_count.value_namespace = name_space;
        lsp_flooding_dup_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-drop-count")
    {
        lsp_drop_count.yfilter = yfilter;
    }
    if(value_path == "lsp-flooding-dup-count")
    {
        lsp_flooding_dup_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csnp-count" || name == "lsp-count" || name == "psnp-count" || name == "lsp-drop-count" || name == "lsp-flooding-dup-count")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::LspCount()
    :
    pdu_receive_count{YType::uint32, "pdu-receive-count"},
    pdu_send_count{YType::uint32, "pdu-send-count"}
{
    yang_name = "lsp-count"; yang_parent_name = "statistics";
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::~LspCount()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::has_data() const
{
    return pdu_receive_count.is_set
	|| pdu_send_count.is_set;
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu_receive_count.yfilter)
	|| ydk::is_set(pdu_send_count.yfilter);
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-count";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspCount' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu_receive_count.is_set || is_set(pdu_receive_count.yfilter)) leaf_name_data.push_back(pdu_receive_count.get_name_leafdata());
    if (pdu_send_count.is_set || is_set(pdu_send_count.yfilter)) leaf_name_data.push_back(pdu_send_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count = value;
        pdu_receive_count.value_namespace = name_space;
        pdu_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count = value;
        pdu_send_count.value_namespace = name_space;
        pdu_send_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count.yfilter = yfilter;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu-receive-count" || name == "pdu-send-count")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::CsnpCount()
    :
    pdu_receive_count{YType::uint32, "pdu-receive-count"},
    pdu_send_count{YType::uint32, "pdu-send-count"}
{
    yang_name = "csnp-count"; yang_parent_name = "statistics";
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::~CsnpCount()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::has_data() const
{
    return pdu_receive_count.is_set
	|| pdu_send_count.is_set;
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu_receive_count.yfilter)
	|| ydk::is_set(pdu_send_count.yfilter);
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csnp-count";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsnpCount' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu_receive_count.is_set || is_set(pdu_receive_count.yfilter)) leaf_name_data.push_back(pdu_receive_count.get_name_leafdata());
    if (pdu_send_count.is_set || is_set(pdu_send_count.yfilter)) leaf_name_data.push_back(pdu_send_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count = value;
        pdu_receive_count.value_namespace = name_space;
        pdu_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count = value;
        pdu_send_count.value_namespace = name_space;
        pdu_send_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count.yfilter = yfilter;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu-receive-count" || name == "pdu-send-count")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::PsnpCount()
    :
    pdu_receive_count{YType::uint32, "pdu-receive-count"},
    pdu_send_count{YType::uint32, "pdu-send-count"}
{
    yang_name = "psnp-count"; yang_parent_name = "statistics";
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::~PsnpCount()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::has_data() const
{
    return pdu_receive_count.is_set
	|| pdu_send_count.is_set;
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu_receive_count.yfilter)
	|| ydk::is_set(pdu_send_count.yfilter);
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psnp-count";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PsnpCount' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu_receive_count.is_set || is_set(pdu_receive_count.yfilter)) leaf_name_data.push_back(pdu_receive_count.get_name_leafdata());
    if (pdu_send_count.is_set || is_set(pdu_send_count.yfilter)) leaf_name_data.push_back(pdu_send_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count = value;
        pdu_receive_count.value_namespace = name_space;
        pdu_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count = value;
        pdu_send_count.value_namespace = name_space;
        pdu_send_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count.yfilter = yfilter;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu-receive-count" || name == "pdu-send-count")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::LanData()
    :
    dis_election_count{YType::uint32, "dis-election-count"},
    memory_exhausted_iih_count{YType::uint32, "memory-exhausted-iih-count"}
    	,
    iih_count(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount>())
{
    iih_count->parent = this;

    yang_name = "lan-data"; yang_parent_name = "per-area-data";
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::~LanData()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::has_data() const
{
    return dis_election_count.is_set
	|| memory_exhausted_iih_count.is_set
	|| (iih_count !=  nullptr && iih_count->has_data());
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dis_election_count.yfilter)
	|| ydk::is_set(memory_exhausted_iih_count.yfilter)
	|| (iih_count !=  nullptr && iih_count->has_operation());
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lan-data";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LanData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dis_election_count.is_set || is_set(dis_election_count.yfilter)) leaf_name_data.push_back(dis_election_count.get_name_leafdata());
    if (memory_exhausted_iih_count.is_set || is_set(memory_exhausted_iih_count.yfilter)) leaf_name_data.push_back(memory_exhausted_iih_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iih-count")
    {
        if(iih_count == nullptr)
        {
            iih_count = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount>();
        }
        return iih_count;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(iih_count != nullptr)
    {
        children["iih-count"] = iih_count;
    }

    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dis-election-count")
    {
        dis_election_count = value;
        dis_election_count.value_namespace = name_space;
        dis_election_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-exhausted-iih-count")
    {
        memory_exhausted_iih_count = value;
        memory_exhausted_iih_count.value_namespace = name_space;
        memory_exhausted_iih_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dis-election-count")
    {
        dis_election_count.yfilter = yfilter;
    }
    if(value_path == "memory-exhausted-iih-count")
    {
        memory_exhausted_iih_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iih-count" || name == "dis-election-count" || name == "memory-exhausted-iih-count")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::IihCount()
    :
    pdu_receive_count{YType::uint32, "pdu-receive-count"},
    pdu_send_count{YType::uint32, "pdu-send-count"}
{
    yang_name = "iih-count"; yang_parent_name = "lan-data";
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::~IihCount()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::has_data() const
{
    return pdu_receive_count.is_set
	|| pdu_send_count.is_set;
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu_receive_count.yfilter)
	|| ydk::is_set(pdu_send_count.yfilter);
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iih-count";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IihCount' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu_receive_count.is_set || is_set(pdu_receive_count.yfilter)) leaf_name_data.push_back(pdu_receive_count.get_name_leafdata());
    if (pdu_send_count.is_set || is_set(pdu_send_count.yfilter)) leaf_name_data.push_back(pdu_send_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count = value;
        pdu_receive_count.value_namespace = name_space;
        pdu_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count = value;
        pdu_send_count.value_namespace = name_space;
        pdu_send_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count.yfilter = yfilter;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu-receive-count" || name == "pdu-send-count")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::Protocol()
    :
    adj_form_count{YType::uint32, "adj-form-count"},
    adj_full_count{YType::uint32, "adj-full-count"},
    adj_stagger_enabled{YType::boolean, "adj-stagger-enabled"},
    adj_stagger_init{YType::uint32, "adj-stagger-init"},
    adj_stagger_max{YType::uint32, "adj-stagger-max"},
    configured_nsf_flavor{YType::enumeration, "configured-nsf-flavor"},
    instance_id{YType::uint16, "instance-id"},
    last_restart_nsf_flavor{YType::enumeration, "last-restart-nsf-flavor"},
    last_restart_status{YType::enumeration, "last-restart-status"},
    nsap_system_id{YType::str, "nsap-system-id"},
    remaining_time_for_next_nsf_restart{YType::uint32, "remaining-time-for-next-nsf-restart"},
    running_levels{YType::enumeration, "running-levels"},
    te_connection{YType::enumeration, "te-connection"},
    valid_nsap_system_id{YType::boolean, "valid-nsap-system-id"}
{
    yang_name = "protocol"; yang_parent_name = "instance";
}

Isis::Instances::Instance::Protocol::~Protocol()
{
}

bool Isis::Instances::Instance::Protocol::has_data() const
{
    for (std::size_t index=0; index<active_area_address.size(); index++)
    {
        if(active_area_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<manual_area_address.size(); index++)
    {
        if(manual_area_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<per_topo_data.size(); index++)
    {
        if(per_topo_data[index]->has_data())
            return true;
    }
    return adj_form_count.is_set
	|| adj_full_count.is_set
	|| adj_stagger_enabled.is_set
	|| adj_stagger_init.is_set
	|| adj_stagger_max.is_set
	|| configured_nsf_flavor.is_set
	|| instance_id.is_set
	|| last_restart_nsf_flavor.is_set
	|| last_restart_status.is_set
	|| nsap_system_id.is_set
	|| remaining_time_for_next_nsf_restart.is_set
	|| running_levels.is_set
	|| te_connection.is_set
	|| valid_nsap_system_id.is_set;
}

bool Isis::Instances::Instance::Protocol::has_operation() const
{
    for (std::size_t index=0; index<active_area_address.size(); index++)
    {
        if(active_area_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<manual_area_address.size(); index++)
    {
        if(manual_area_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<per_topo_data.size(); index++)
    {
        if(per_topo_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(adj_form_count.yfilter)
	|| ydk::is_set(adj_full_count.yfilter)
	|| ydk::is_set(adj_stagger_enabled.yfilter)
	|| ydk::is_set(adj_stagger_init.yfilter)
	|| ydk::is_set(adj_stagger_max.yfilter)
	|| ydk::is_set(configured_nsf_flavor.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(last_restart_nsf_flavor.yfilter)
	|| ydk::is_set(last_restart_status.yfilter)
	|| ydk::is_set(nsap_system_id.yfilter)
	|| ydk::is_set(remaining_time_for_next_nsf_restart.yfilter)
	|| ydk::is_set(running_levels.yfilter)
	|| ydk::is_set(te_connection.yfilter)
	|| ydk::is_set(valid_nsap_system_id.yfilter);
}

std::string Isis::Instances::Instance::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocol' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adj_form_count.is_set || is_set(adj_form_count.yfilter)) leaf_name_data.push_back(adj_form_count.get_name_leafdata());
    if (adj_full_count.is_set || is_set(adj_full_count.yfilter)) leaf_name_data.push_back(adj_full_count.get_name_leafdata());
    if (adj_stagger_enabled.is_set || is_set(adj_stagger_enabled.yfilter)) leaf_name_data.push_back(adj_stagger_enabled.get_name_leafdata());
    if (adj_stagger_init.is_set || is_set(adj_stagger_init.yfilter)) leaf_name_data.push_back(adj_stagger_init.get_name_leafdata());
    if (adj_stagger_max.is_set || is_set(adj_stagger_max.yfilter)) leaf_name_data.push_back(adj_stagger_max.get_name_leafdata());
    if (configured_nsf_flavor.is_set || is_set(configured_nsf_flavor.yfilter)) leaf_name_data.push_back(configured_nsf_flavor.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (last_restart_nsf_flavor.is_set || is_set(last_restart_nsf_flavor.yfilter)) leaf_name_data.push_back(last_restart_nsf_flavor.get_name_leafdata());
    if (last_restart_status.is_set || is_set(last_restart_status.yfilter)) leaf_name_data.push_back(last_restart_status.get_name_leafdata());
    if (nsap_system_id.is_set || is_set(nsap_system_id.yfilter)) leaf_name_data.push_back(nsap_system_id.get_name_leafdata());
    if (remaining_time_for_next_nsf_restart.is_set || is_set(remaining_time_for_next_nsf_restart.yfilter)) leaf_name_data.push_back(remaining_time_for_next_nsf_restart.get_name_leafdata());
    if (running_levels.is_set || is_set(running_levels.yfilter)) leaf_name_data.push_back(running_levels.get_name_leafdata());
    if (te_connection.is_set || is_set(te_connection.yfilter)) leaf_name_data.push_back(te_connection.get_name_leafdata());
    if (valid_nsap_system_id.is_set || is_set(valid_nsap_system_id.yfilter)) leaf_name_data.push_back(valid_nsap_system_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-area-address")
    {
        for(auto const & c : active_area_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Protocol::ActiveAreaAddress>();
        c->parent = this;
        active_area_address.push_back(c);
        return c;
    }

    if(child_yang_name == "manual-area-address")
    {
        for(auto const & c : manual_area_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Protocol::ManualAreaAddress>();
        c->parent = this;
        manual_area_address.push_back(c);
        return c;
    }

    if(child_yang_name == "per-topo-data")
    {
        for(auto const & c : per_topo_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData>();
        c->parent = this;
        per_topo_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : active_area_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : manual_area_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : per_topo_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adj-form-count")
    {
        adj_form_count = value;
        adj_form_count.value_namespace = name_space;
        adj_form_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-full-count")
    {
        adj_full_count = value;
        adj_full_count.value_namespace = name_space;
        adj_full_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-stagger-enabled")
    {
        adj_stagger_enabled = value;
        adj_stagger_enabled.value_namespace = name_space;
        adj_stagger_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-stagger-init")
    {
        adj_stagger_init = value;
        adj_stagger_init.value_namespace = name_space;
        adj_stagger_init.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-stagger-max")
    {
        adj_stagger_max = value;
        adj_stagger_max.value_namespace = name_space;
        adj_stagger_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-nsf-flavor")
    {
        configured_nsf_flavor = value;
        configured_nsf_flavor.value_namespace = name_space;
        configured_nsf_flavor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-restart-nsf-flavor")
    {
        last_restart_nsf_flavor = value;
        last_restart_nsf_flavor.value_namespace = name_space;
        last_restart_nsf_flavor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-restart-status")
    {
        last_restart_status = value;
        last_restart_status.value_namespace = name_space;
        last_restart_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsap-system-id")
    {
        nsap_system_id = value;
        nsap_system_id.value_namespace = name_space;
        nsap_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-time-for-next-nsf-restart")
    {
        remaining_time_for_next_nsf_restart = value;
        remaining_time_for_next_nsf_restart.value_namespace = name_space;
        remaining_time_for_next_nsf_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running-levels")
    {
        running_levels = value;
        running_levels.value_namespace = name_space;
        running_levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-connection")
    {
        te_connection = value;
        te_connection.value_namespace = name_space;
        te_connection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-nsap-system-id")
    {
        valid_nsap_system_id = value;
        valid_nsap_system_id.value_namespace = name_space;
        valid_nsap_system_id.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adj-form-count")
    {
        adj_form_count.yfilter = yfilter;
    }
    if(value_path == "adj-full-count")
    {
        adj_full_count.yfilter = yfilter;
    }
    if(value_path == "adj-stagger-enabled")
    {
        adj_stagger_enabled.yfilter = yfilter;
    }
    if(value_path == "adj-stagger-init")
    {
        adj_stagger_init.yfilter = yfilter;
    }
    if(value_path == "adj-stagger-max")
    {
        adj_stagger_max.yfilter = yfilter;
    }
    if(value_path == "configured-nsf-flavor")
    {
        configured_nsf_flavor.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "last-restart-nsf-flavor")
    {
        last_restart_nsf_flavor.yfilter = yfilter;
    }
    if(value_path == "last-restart-status")
    {
        last_restart_status.yfilter = yfilter;
    }
    if(value_path == "nsap-system-id")
    {
        nsap_system_id.yfilter = yfilter;
    }
    if(value_path == "remaining-time-for-next-nsf-restart")
    {
        remaining_time_for_next_nsf_restart.yfilter = yfilter;
    }
    if(value_path == "running-levels")
    {
        running_levels.yfilter = yfilter;
    }
    if(value_path == "te-connection")
    {
        te_connection.yfilter = yfilter;
    }
    if(value_path == "valid-nsap-system-id")
    {
        valid_nsap_system_id.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-area-address" || name == "manual-area-address" || name == "per-topo-data" || name == "adj-form-count" || name == "adj-full-count" || name == "adj-stagger-enabled" || name == "adj-stagger-init" || name == "adj-stagger-max" || name == "configured-nsf-flavor" || name == "instance-id" || name == "last-restart-nsf-flavor" || name == "last-restart-status" || name == "nsap-system-id" || name == "remaining-time-for-next-nsf-restart" || name == "running-levels" || name == "te-connection" || name == "valid-nsap-system-id")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::ManualAreaAddress::ManualAreaAddress()
    :
    entry{YType::str, "entry"}
{
    yang_name = "manual-area-address"; yang_parent_name = "protocol";
}

Isis::Instances::Instance::Protocol::ManualAreaAddress::~ManualAreaAddress()
{
}

bool Isis::Instances::Instance::Protocol::ManualAreaAddress::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Protocol::ManualAreaAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Protocol::ManualAreaAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual-area-address";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Protocol::ManualAreaAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ManualAreaAddress' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::ManualAreaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Protocol::ManualAreaAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Protocol::ManualAreaAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::ManualAreaAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::ManualAreaAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::ActiveAreaAddress::ActiveAreaAddress()
    :
    entry{YType::str, "entry"}
{
    yang_name = "active-area-address"; yang_parent_name = "protocol";
}

Isis::Instances::Instance::Protocol::ActiveAreaAddress::~ActiveAreaAddress()
{
}

bool Isis::Instances::Instance::Protocol::ActiveAreaAddress::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::Protocol::ActiveAreaAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Protocol::ActiveAreaAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-area-address";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Protocol::ActiveAreaAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActiveAreaAddress' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::ActiveAreaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Protocol::ActiveAreaAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Protocol::ActiveAreaAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::ActiveAreaAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::ActiveAreaAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::PerTopoData::PerTopoData()
    :
    advertise_passive_only{YType::boolean, "advertise-passive-only"},
    default_admin_distance{YType::uint32, "default-admin-distance"},
    wait_redist_complete{YType::boolean, "wait-redist-complete"}
    	,
    id(std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::Id>())
	,redist_protocols_list(std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList>())
{
    id->parent = this;

    redist_protocols_list->parent = this;

    yang_name = "per-topo-data"; yang_parent_name = "protocol";
}

Isis::Instances::Instance::Protocol::PerTopoData::~PerTopoData()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::has_data() const
{
    for (std::size_t index=0; index<per_area_data.size(); index++)
    {
        if(per_area_data[index]->has_data())
            return true;
    }
    return advertise_passive_only.is_set
	|| default_admin_distance.is_set
	|| wait_redist_complete.is_set
	|| (id !=  nullptr && id->has_data())
	|| (redist_protocols_list !=  nullptr && redist_protocols_list->has_data());
}

bool Isis::Instances::Instance::Protocol::PerTopoData::has_operation() const
{
    for (std::size_t index=0; index<per_area_data.size(); index++)
    {
        if(per_area_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(advertise_passive_only.yfilter)
	|| ydk::is_set(default_admin_distance.yfilter)
	|| ydk::is_set(wait_redist_complete.yfilter)
	|| (id !=  nullptr && id->has_operation())
	|| (redist_protocols_list !=  nullptr && redist_protocols_list->has_operation());
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-topo-data";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Protocol::PerTopoData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerTopoData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_passive_only.is_set || is_set(advertise_passive_only.yfilter)) leaf_name_data.push_back(advertise_passive_only.get_name_leafdata());
    if (default_admin_distance.is_set || is_set(default_admin_distance.yfilter)) leaf_name_data.push_back(default_admin_distance.get_name_leafdata());
    if (wait_redist_complete.is_set || is_set(wait_redist_complete.yfilter)) leaf_name_data.push_back(wait_redist_complete.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::PerTopoData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::Id>();
        }
        return id;
    }

    if(child_yang_name == "per-area-data")
    {
        for(auto const & c : per_area_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData>();
        c->parent = this;
        per_area_data.push_back(c);
        return c;
    }

    if(child_yang_name == "redist-protocols-list")
    {
        if(redist_protocols_list == nullptr)
        {
            redist_protocols_list = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList>();
        }
        return redist_protocols_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Protocol::PerTopoData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(id != nullptr)
    {
        children["id"] = id;
    }

    for (auto const & c : per_area_data)
    {
        children[c->get_segment_path()] = c;
    }

    if(redist_protocols_list != nullptr)
    {
        children["redist-protocols-list"] = redist_protocols_list;
    }

    return children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise-passive-only")
    {
        advertise_passive_only = value;
        advertise_passive_only.value_namespace = name_space;
        advertise_passive_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-admin-distance")
    {
        default_admin_distance = value;
        default_admin_distance.value_namespace = name_space;
        default_admin_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-redist-complete")
    {
        wait_redist_complete = value;
        wait_redist_complete.value_namespace = name_space;
        wait_redist_complete.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::PerTopoData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise-passive-only")
    {
        advertise_passive_only.yfilter = yfilter;
    }
    if(value_path == "default-admin-distance")
    {
        default_admin_distance.yfilter = yfilter;
    }
    if(value_path == "wait-redist-complete")
    {
        wait_redist_complete.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::PerTopoData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "per-area-data" || name == "redist-protocols-list" || name == "advertise-passive-only" || name == "default-admin-distance" || name == "wait-redist-complete")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::PerTopoData::Id::Id()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "id"; yang_parent_name = "per-topo-data";
}

Isis::Instances::Instance::Protocol::PerTopoData::Id::~Id()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::Id::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set
	|| topology_name.is_set
	|| vrf_name.is_set;
}

bool Isis::Instances::Instance::Protocol::PerTopoData::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Protocol::PerTopoData::Id::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Id' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::PerTopoData::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Protocol::PerTopoData::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::PerTopoData::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::PerTopoData::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "saf-name" || name == "topology-name" || name == "vrf-name")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::RedistProtocolsList()
{
    yang_name = "redist-protocols-list"; yang_parent_name = "per-topo-data";
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::~RedistProtocolsList()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::has_data() const
{
    for (std::size_t index=0; index<isis_sh_redist_entry.size(); index++)
    {
        if(isis_sh_redist_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::has_operation() const
{
    for (std::size_t index=0; index<isis_sh_redist_entry.size(); index++)
    {
        if(isis_sh_redist_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-protocols-list";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistProtocolsList' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-sh-redist-entry")
    {
        for(auto const & c : isis_sh_redist_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry>();
        c->parent = this;
        isis_sh_redist_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isis_sh_redist_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-sh-redist-entry")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::IsisShRedistEntry()
    :
    protocol_details(std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails>())
{
    protocol_details->parent = this;

    yang_name = "isis-sh-redist-entry"; yang_parent_name = "redist-protocols-list";
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::~IsisShRedistEntry()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::has_data() const
{
    return (protocol_details !=  nullptr && protocol_details->has_data());
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::has_operation() const
{
    return is_set(yfilter)
	|| (protocol_details !=  nullptr && protocol_details->has_operation());
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-sh-redist-entry";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsisShRedistEntry' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-details")
    {
        if(protocol_details == nullptr)
        {
            protocol_details = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails>();
        }
        return protocol_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol_details != nullptr)
    {
        children["protocol-details"] = protocol_details;
    }

    return children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-details")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::ProtocolDetails()
    :
    application_name{YType::str, "application-name"},
    bgp_as_number{YType::str, "bgp-as-number"},
    eigrp_as_number{YType::str, "eigrp-as-number"},
    isis_instance_id{YType::str, "isis-instance-id"},
    ospf_process_id{YType::str, "ospf-process-id"},
    ospfv3_process_id{YType::str, "ospfv3-process-id"},
    protocol{YType::enumeration, "protocol"}
{
    yang_name = "protocol-details"; yang_parent_name = "isis-sh-redist-entry";
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::~ProtocolDetails()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::has_data() const
{
    return application_name.is_set
	|| bgp_as_number.is_set
	|| eigrp_as_number.is_set
	|| isis_instance_id.is_set
	|| ospf_process_id.is_set
	|| ospfv3_process_id.is_set
	|| protocol.is_set;
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_name.yfilter)
	|| ydk::is_set(bgp_as_number.yfilter)
	|| ydk::is_set(eigrp_as_number.yfilter)
	|| ydk::is_set(isis_instance_id.yfilter)
	|| ydk::is_set(ospf_process_id.yfilter)
	|| ydk::is_set(ospfv3_process_id.yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-details";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolDetails' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (bgp_as_number.is_set || is_set(bgp_as_number.yfilter)) leaf_name_data.push_back(bgp_as_number.get_name_leafdata());
    if (eigrp_as_number.is_set || is_set(eigrp_as_number.yfilter)) leaf_name_data.push_back(eigrp_as_number.get_name_leafdata());
    if (isis_instance_id.is_set || is_set(isis_instance_id.yfilter)) leaf_name_data.push_back(isis_instance_id.get_name_leafdata());
    if (ospf_process_id.is_set || is_set(ospf_process_id.yfilter)) leaf_name_data.push_back(ospf_process_id.get_name_leafdata());
    if (ospfv3_process_id.is_set || is_set(ospfv3_process_id.yfilter)) leaf_name_data.push_back(ospfv3_process_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-name")
    {
        application_name = value;
        application_name.value_namespace = name_space;
        application_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-as-number")
    {
        bgp_as_number = value;
        bgp_as_number.value_namespace = name_space;
        bgp_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number = value;
        eigrp_as_number.value_namespace = name_space;
        eigrp_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id = value;
        isis_instance_id.value_namespace = name_space;
        isis_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id = value;
        ospf_process_id.value_namespace = name_space;
        ospf_process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfv3-process-id")
    {
        ospfv3_process_id = value;
        ospfv3_process_id.value_namespace = name_space;
        ospfv3_process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
    if(value_path == "bgp-as-number")
    {
        bgp_as_number.yfilter = yfilter;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number.yfilter = yfilter;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id.yfilter = yfilter;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id.yfilter = yfilter;
    }
    if(value_path == "ospfv3-process-id")
    {
        ospfv3_process_id.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-name" || name == "bgp-as-number" || name == "eigrp-as-number" || name == "isis-instance-id" || name == "ospf-process-id" || name == "ospfv3-process-id" || name == "protocol")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::PerAreaData()
    :
    accepted_metric_style{YType::enumeration, "accepted-metric-style"},
    duration{YType::uint32, "duration"},
    generated_metric_style{YType::enumeration, "generated-metric-style"},
    ispf_state{YType::enumeration, "ispf-state"},
    level{YType::enumeration, "level"},
    metric{YType::uint32, "metric"},
    rib_update_delay{YType::uint32, "rib-update-delay"},
    sr_uloop_event{YType::enumeration, "sr-uloop-event"},
    sr_uloop_far_node_id{YType::str, "sr-uloop-far-node-id"},
    sr_uloop_is_active{YType::boolean, "sr-uloop-is-active"},
    sr_uloop_near_node_id{YType::str, "sr-uloop-near-node-id"},
    te_enabled{YType::boolean, "te-enabled"},
    uloop_avoidance_type{YType::enumeration, "uloop-avoidance-type"},
    uses_default_link_topo_flag{YType::boolean, "uses-default-link-topo-flag"}
{
    yang_name = "per-area-data"; yang_parent_name = "per-topo-data";
}

Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::~PerAreaData()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::has_data() const
{
    return accepted_metric_style.is_set
	|| duration.is_set
	|| generated_metric_style.is_set
	|| ispf_state.is_set
	|| level.is_set
	|| metric.is_set
	|| rib_update_delay.is_set
	|| sr_uloop_event.is_set
	|| sr_uloop_far_node_id.is_set
	|| sr_uloop_is_active.is_set
	|| sr_uloop_near_node_id.is_set
	|| te_enabled.is_set
	|| uloop_avoidance_type.is_set
	|| uses_default_link_topo_flag.is_set;
}

bool Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accepted_metric_style.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(generated_metric_style.yfilter)
	|| ydk::is_set(ispf_state.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(rib_update_delay.yfilter)
	|| ydk::is_set(sr_uloop_event.yfilter)
	|| ydk::is_set(sr_uloop_far_node_id.yfilter)
	|| ydk::is_set(sr_uloop_is_active.yfilter)
	|| ydk::is_set(sr_uloop_near_node_id.yfilter)
	|| ydk::is_set(te_enabled.yfilter)
	|| ydk::is_set(uloop_avoidance_type.yfilter)
	|| ydk::is_set(uses_default_link_topo_flag.yfilter);
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-area-data";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerAreaData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_metric_style.is_set || is_set(accepted_metric_style.yfilter)) leaf_name_data.push_back(accepted_metric_style.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (generated_metric_style.is_set || is_set(generated_metric_style.yfilter)) leaf_name_data.push_back(generated_metric_style.get_name_leafdata());
    if (ispf_state.is_set || is_set(ispf_state.yfilter)) leaf_name_data.push_back(ispf_state.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (rib_update_delay.is_set || is_set(rib_update_delay.yfilter)) leaf_name_data.push_back(rib_update_delay.get_name_leafdata());
    if (sr_uloop_event.is_set || is_set(sr_uloop_event.yfilter)) leaf_name_data.push_back(sr_uloop_event.get_name_leafdata());
    if (sr_uloop_far_node_id.is_set || is_set(sr_uloop_far_node_id.yfilter)) leaf_name_data.push_back(sr_uloop_far_node_id.get_name_leafdata());
    if (sr_uloop_is_active.is_set || is_set(sr_uloop_is_active.yfilter)) leaf_name_data.push_back(sr_uloop_is_active.get_name_leafdata());
    if (sr_uloop_near_node_id.is_set || is_set(sr_uloop_near_node_id.yfilter)) leaf_name_data.push_back(sr_uloop_near_node_id.get_name_leafdata());
    if (te_enabled.is_set || is_set(te_enabled.yfilter)) leaf_name_data.push_back(te_enabled.get_name_leafdata());
    if (uloop_avoidance_type.is_set || is_set(uloop_avoidance_type.yfilter)) leaf_name_data.push_back(uloop_avoidance_type.get_name_leafdata());
    if (uses_default_link_topo_flag.is_set || is_set(uses_default_link_topo_flag.yfilter)) leaf_name_data.push_back(uses_default_link_topo_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accepted-metric-style")
    {
        accepted_metric_style = value;
        accepted_metric_style.value_namespace = name_space;
        accepted_metric_style.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generated-metric-style")
    {
        generated_metric_style = value;
        generated_metric_style.value_namespace = name_space;
        generated_metric_style.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ispf-state")
    {
        ispf_state = value;
        ispf_state.value_namespace = name_space;
        ispf_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-update-delay")
    {
        rib_update_delay = value;
        rib_update_delay.value_namespace = name_space;
        rib_update_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-uloop-event")
    {
        sr_uloop_event = value;
        sr_uloop_event.value_namespace = name_space;
        sr_uloop_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-uloop-far-node-id")
    {
        sr_uloop_far_node_id = value;
        sr_uloop_far_node_id.value_namespace = name_space;
        sr_uloop_far_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-uloop-is-active")
    {
        sr_uloop_is_active = value;
        sr_uloop_is_active.value_namespace = name_space;
        sr_uloop_is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-uloop-near-node-id")
    {
        sr_uloop_near_node_id = value;
        sr_uloop_near_node_id.value_namespace = name_space;
        sr_uloop_near_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-enabled")
    {
        te_enabled = value;
        te_enabled.value_namespace = name_space;
        te_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uloop-avoidance-type")
    {
        uloop_avoidance_type = value;
        uloop_avoidance_type.value_namespace = name_space;
        uloop_avoidance_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uses-default-link-topo-flag")
    {
        uses_default_link_topo_flag = value;
        uses_default_link_topo_flag.value_namespace = name_space;
        uses_default_link_topo_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accepted-metric-style")
    {
        accepted_metric_style.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "generated-metric-style")
    {
        generated_metric_style.yfilter = yfilter;
    }
    if(value_path == "ispf-state")
    {
        ispf_state.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "rib-update-delay")
    {
        rib_update_delay.yfilter = yfilter;
    }
    if(value_path == "sr-uloop-event")
    {
        sr_uloop_event.yfilter = yfilter;
    }
    if(value_path == "sr-uloop-far-node-id")
    {
        sr_uloop_far_node_id.yfilter = yfilter;
    }
    if(value_path == "sr-uloop-is-active")
    {
        sr_uloop_is_active.yfilter = yfilter;
    }
    if(value_path == "sr-uloop-near-node-id")
    {
        sr_uloop_near_node_id.yfilter = yfilter;
    }
    if(value_path == "te-enabled")
    {
        te_enabled.yfilter = yfilter;
    }
    if(value_path == "uloop-avoidance-type")
    {
        uloop_avoidance_type.yfilter = yfilter;
    }
    if(value_path == "uses-default-link-topo-flag")
    {
        uses_default_link_topo_flag.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accepted-metric-style" || name == "duration" || name == "generated-metric-style" || name == "ispf-state" || name == "level" || name == "metric" || name == "rib-update-delay" || name == "sr-uloop-event" || name == "sr-uloop-far-node-id" || name == "sr-uloop-is-active" || name == "sr-uloop-near-node-id" || name == "te-enabled" || name == "uloop-avoidance-type" || name == "uses-default-link-topo-flag")
        return true;
    return false;
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummaries()
{
    yang_name = "neighbor-summaries"; yang_parent_name = "instance";
}

Isis::Instances::Instance::NeighborSummaries::~NeighborSummaries()
{
}

bool Isis::Instances::Instance::NeighborSummaries::has_data() const
{
    for (std::size_t index=0; index<neighbor_summary.size(); index++)
    {
        if(neighbor_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::NeighborSummaries::has_operation() const
{
    for (std::size_t index=0; index<neighbor_summary.size(); index++)
    {
        if(neighbor_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::NeighborSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summaries";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::NeighborSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborSummaries' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NeighborSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-summary")
    {
        for(auto const & c : neighbor_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary>();
        c->parent = this;
        neighbor_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NeighborSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::NeighborSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::NeighborSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::NeighborSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-summary")
        return true;
    return false;
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::NeighborSummary()
    :
    interface_name{YType::str, "interface-name"}
    	,
    level12_neigbors(std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors>())
	,level1_neighbors(std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors>())
	,level2_neighbors(std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors>())
{
    level12_neigbors->parent = this;

    level1_neighbors->parent = this;

    level2_neighbors->parent = this;

    yang_name = "neighbor-summary"; yang_parent_name = "neighbor-summaries";
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::~NeighborSummary()
{
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::has_data() const
{
    return interface_name.is_set
	|| (level12_neigbors !=  nullptr && level12_neigbors->has_data())
	|| (level1_neighbors !=  nullptr && level1_neighbors->has_data())
	|| (level2_neighbors !=  nullptr && level2_neighbors->has_data());
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (level12_neigbors !=  nullptr && level12_neigbors->has_operation())
	|| (level1_neighbors !=  nullptr && level1_neighbors->has_operation())
	|| (level2_neighbors !=  nullptr && level2_neighbors->has_operation());
}

std::string Isis::Instances::Instance::NeighborSummaries::NeighborSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summary" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::NeighborSummaries::NeighborSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborSummary' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level12-neigbors")
    {
        if(level12_neigbors == nullptr)
        {
            level12_neigbors = std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors>();
        }
        return level12_neigbors;
    }

    if(child_yang_name == "level1-neighbors")
    {
        if(level1_neighbors == nullptr)
        {
            level1_neighbors = std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors>();
        }
        return level1_neighbors;
    }

    if(child_yang_name == "level2-neighbors")
    {
        if(level2_neighbors == nullptr)
        {
            level2_neighbors = std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors>();
        }
        return level2_neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level12_neigbors != nullptr)
    {
        children["level12-neigbors"] = level12_neigbors;
    }

    if(level1_neighbors != nullptr)
    {
        children["level1-neighbors"] = level1_neighbors;
    }

    if(level2_neighbors != nullptr)
    {
        children["level2-neighbors"] = level2_neighbors;
    }

    return children;
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level12-neigbors" || name == "level1-neighbors" || name == "level2-neighbors" || name == "interface-name")
        return true;
    return false;
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::Level1Neighbors()
    :
    neighbor_down_count{YType::uint32, "neighbor-down-count"},
    neighbor_init_count{YType::uint32, "neighbor-init-count"},
    neighbor_up_count{YType::uint32, "neighbor-up-count"}
{
    yang_name = "level1-neighbors"; yang_parent_name = "neighbor-summary";
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::~Level1Neighbors()
{
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::has_data() const
{
    return neighbor_down_count.is_set
	|| neighbor_init_count.is_set
	|| neighbor_up_count.is_set;
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_down_count.yfilter)
	|| ydk::is_set(neighbor_init_count.yfilter)
	|| ydk::is_set(neighbor_up_count.yfilter);
}

std::string Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level1-neighbors";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level1Neighbors' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_down_count.is_set || is_set(neighbor_down_count.yfilter)) leaf_name_data.push_back(neighbor_down_count.get_name_leafdata());
    if (neighbor_init_count.is_set || is_set(neighbor_init_count.yfilter)) leaf_name_data.push_back(neighbor_init_count.get_name_leafdata());
    if (neighbor_up_count.is_set || is_set(neighbor_up_count.yfilter)) leaf_name_data.push_back(neighbor_up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-down-count")
    {
        neighbor_down_count = value;
        neighbor_down_count.value_namespace = name_space;
        neighbor_down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-init-count")
    {
        neighbor_init_count = value;
        neighbor_init_count.value_namespace = name_space;
        neighbor_init_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-up-count")
    {
        neighbor_up_count = value;
        neighbor_up_count.value_namespace = name_space;
        neighbor_up_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-down-count")
    {
        neighbor_down_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-init-count")
    {
        neighbor_init_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-up-count")
    {
        neighbor_up_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-down-count" || name == "neighbor-init-count" || name == "neighbor-up-count")
        return true;
    return false;
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::Level2Neighbors()
    :
    neighbor_down_count{YType::uint32, "neighbor-down-count"},
    neighbor_init_count{YType::uint32, "neighbor-init-count"},
    neighbor_up_count{YType::uint32, "neighbor-up-count"}
{
    yang_name = "level2-neighbors"; yang_parent_name = "neighbor-summary";
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::~Level2Neighbors()
{
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::has_data() const
{
    return neighbor_down_count.is_set
	|| neighbor_init_count.is_set
	|| neighbor_up_count.is_set;
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_down_count.yfilter)
	|| ydk::is_set(neighbor_init_count.yfilter)
	|| ydk::is_set(neighbor_up_count.yfilter);
}

std::string Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level2-neighbors";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level2Neighbors' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_down_count.is_set || is_set(neighbor_down_count.yfilter)) leaf_name_data.push_back(neighbor_down_count.get_name_leafdata());
    if (neighbor_init_count.is_set || is_set(neighbor_init_count.yfilter)) leaf_name_data.push_back(neighbor_init_count.get_name_leafdata());
    if (neighbor_up_count.is_set || is_set(neighbor_up_count.yfilter)) leaf_name_data.push_back(neighbor_up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-down-count")
    {
        neighbor_down_count = value;
        neighbor_down_count.value_namespace = name_space;
        neighbor_down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-init-count")
    {
        neighbor_init_count = value;
        neighbor_init_count.value_namespace = name_space;
        neighbor_init_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-up-count")
    {
        neighbor_up_count = value;
        neighbor_up_count.value_namespace = name_space;
        neighbor_up_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-down-count")
    {
        neighbor_down_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-init-count")
    {
        neighbor_init_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-up-count")
    {
        neighbor_up_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-down-count" || name == "neighbor-init-count" || name == "neighbor-up-count")
        return true;
    return false;
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::Level12Neigbors()
    :
    neighbor_down_count{YType::uint32, "neighbor-down-count"},
    neighbor_init_count{YType::uint32, "neighbor-init-count"},
    neighbor_up_count{YType::uint32, "neighbor-up-count"}
{
    yang_name = "level12-neigbors"; yang_parent_name = "neighbor-summary";
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::~Level12Neigbors()
{
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::has_data() const
{
    return neighbor_down_count.is_set
	|| neighbor_init_count.is_set
	|| neighbor_up_count.is_set;
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_down_count.yfilter)
	|| ydk::is_set(neighbor_init_count.yfilter)
	|| ydk::is_set(neighbor_up_count.yfilter);
}

std::string Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level12-neigbors";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level12Neigbors' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_down_count.is_set || is_set(neighbor_down_count.yfilter)) leaf_name_data.push_back(neighbor_down_count.get_name_leafdata());
    if (neighbor_init_count.is_set || is_set(neighbor_init_count.yfilter)) leaf_name_data.push_back(neighbor_init_count.get_name_leafdata());
    if (neighbor_up_count.is_set || is_set(neighbor_up_count.yfilter)) leaf_name_data.push_back(neighbor_up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-down-count")
    {
        neighbor_down_count = value;
        neighbor_down_count.value_namespace = name_space;
        neighbor_down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-init-count")
    {
        neighbor_init_count = value;
        neighbor_init_count.value_namespace = name_space;
        neighbor_init_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-up-count")
    {
        neighbor_up_count = value;
        neighbor_up_count.value_namespace = name_space;
        neighbor_up_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-down-count")
    {
        neighbor_down_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-init-count")
    {
        neighbor_init_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-up-count")
    {
        neighbor_up_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-down-count" || name == "neighbor-init-count" || name == "neighbor-up-count")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointLsps::CheckpointLsps()
{
    yang_name = "checkpoint-lsps"; yang_parent_name = "instance";
}

Isis::Instances::Instance::CheckpointLsps::~CheckpointLsps()
{
}

bool Isis::Instances::Instance::CheckpointLsps::has_data() const
{
    for (std::size_t index=0; index<checkpoint_lsp.size(); index++)
    {
        if(checkpoint_lsp[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::CheckpointLsps::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_lsp.size(); index++)
    {
        if(checkpoint_lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::CheckpointLsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-lsps";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::CheckpointLsps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CheckpointLsps' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointLsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "checkpoint-lsp")
    {
        for(auto const & c : checkpoint_lsp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::CheckpointLsps::CheckpointLsp>();
        c->parent = this;
        checkpoint_lsp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::CheckpointLsps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : checkpoint_lsp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::CheckpointLsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::CheckpointLsps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::CheckpointLsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-lsp")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::CheckpointLsp()
    :
    checkpoint_lsp_id{YType::str, "checkpoint-lsp-id"},
    checkpoint_lsp_level{YType::uint8, "checkpoint-lsp-level"},
    checkpoint_lsp_local_flag{YType::boolean, "checkpoint-lsp-local-flag"},
    checkpoint_lsp_object_id{YType::uint32, "checkpoint-lsp-object-id"},
    level{YType::enumeration, "level"},
    lsp_id{YType::str, "lsp-id"}
{
    yang_name = "checkpoint-lsp"; yang_parent_name = "checkpoint-lsps";
}

Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::~CheckpointLsp()
{
}

bool Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::has_data() const
{
    return checkpoint_lsp_id.is_set
	|| checkpoint_lsp_level.is_set
	|| checkpoint_lsp_local_flag.is_set
	|| checkpoint_lsp_object_id.is_set
	|| level.is_set
	|| lsp_id.is_set;
}

bool Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(checkpoint_lsp_id.yfilter)
	|| ydk::is_set(checkpoint_lsp_level.yfilter)
	|| ydk::is_set(checkpoint_lsp_local_flag.yfilter)
	|| ydk::is_set(checkpoint_lsp_object_id.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(lsp_id.yfilter);
}

std::string Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-lsp";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CheckpointLsp' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (checkpoint_lsp_id.is_set || is_set(checkpoint_lsp_id.yfilter)) leaf_name_data.push_back(checkpoint_lsp_id.get_name_leafdata());
    if (checkpoint_lsp_level.is_set || is_set(checkpoint_lsp_level.yfilter)) leaf_name_data.push_back(checkpoint_lsp_level.get_name_leafdata());
    if (checkpoint_lsp_local_flag.is_set || is_set(checkpoint_lsp_local_flag.yfilter)) leaf_name_data.push_back(checkpoint_lsp_local_flag.get_name_leafdata());
    if (checkpoint_lsp_object_id.is_set || is_set(checkpoint_lsp_object_id.yfilter)) leaf_name_data.push_back(checkpoint_lsp_object_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "checkpoint-lsp-id")
    {
        checkpoint_lsp_id = value;
        checkpoint_lsp_id.value_namespace = name_space;
        checkpoint_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-lsp-level")
    {
        checkpoint_lsp_level = value;
        checkpoint_lsp_level.value_namespace = name_space;
        checkpoint_lsp_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-lsp-local-flag")
    {
        checkpoint_lsp_local_flag = value;
        checkpoint_lsp_local_flag.value_namespace = name_space;
        checkpoint_lsp_local_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-lsp-object-id")
    {
        checkpoint_lsp_object_id = value;
        checkpoint_lsp_object_id.value_namespace = name_space;
        checkpoint_lsp_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "checkpoint-lsp-id")
    {
        checkpoint_lsp_id.yfilter = yfilter;
    }
    if(value_path == "checkpoint-lsp-level")
    {
        checkpoint_lsp_level.yfilter = yfilter;
    }
    if(value_path == "checkpoint-lsp-local-flag")
    {
        checkpoint_lsp_local_flag.yfilter = yfilter;
    }
    if(value_path == "checkpoint-lsp-object-id")
    {
        checkpoint_lsp_object_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-lsp-id" || name == "checkpoint-lsp-level" || name == "checkpoint-lsp-local-flag" || name == "checkpoint-lsp-object-id" || name == "level" || name == "lsp-id")
        return true;
    return false;
}

Isis::Instances::Instance::MeshGroups::MeshGroups()
    :
    mesh_group_configured_interface_list(std::make_shared<Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList>())
{
    mesh_group_configured_interface_list->parent = this;

    yang_name = "mesh-groups"; yang_parent_name = "instance";
}

Isis::Instances::Instance::MeshGroups::~MeshGroups()
{
}

bool Isis::Instances::Instance::MeshGroups::has_data() const
{
    return (mesh_group_configured_interface_list !=  nullptr && mesh_group_configured_interface_list->has_data());
}

bool Isis::Instances::Instance::MeshGroups::has_operation() const
{
    return is_set(yfilter)
	|| (mesh_group_configured_interface_list !=  nullptr && mesh_group_configured_interface_list->has_operation());
}

std::string Isis::Instances::Instance::MeshGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-groups";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::MeshGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MeshGroups' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::MeshGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mesh-group-configured-interface-list")
    {
        if(mesh_group_configured_interface_list == nullptr)
        {
            mesh_group_configured_interface_list = std::make_shared<Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList>();
        }
        return mesh_group_configured_interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::MeshGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mesh_group_configured_interface_list != nullptr)
    {
        children["mesh-group-configured-interface-list"] = mesh_group_configured_interface_list;
    }

    return children;
}

void Isis::Instances::Instance::MeshGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::MeshGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::MeshGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mesh-group-configured-interface-list")
        return true;
    return false;
}

Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::MeshGroupConfiguredInterfaceList()
{
    yang_name = "mesh-group-configured-interface-list"; yang_parent_name = "mesh-groups";
}

Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::~MeshGroupConfiguredInterfaceList()
{
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::has_data() const
{
    for (std::size_t index=0; index<isis_sh_mesh_entry.size(); index++)
    {
        if(isis_sh_mesh_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::has_operation() const
{
    for (std::size_t index=0; index<isis_sh_mesh_entry.size(); index++)
    {
        if(isis_sh_mesh_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group-configured-interface-list";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MeshGroupConfiguredInterfaceList' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-sh-mesh-entry")
    {
        for(auto const & c : isis_sh_mesh_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry>();
        c->parent = this;
        isis_sh_mesh_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isis_sh_mesh_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-sh-mesh-entry")
        return true;
    return false;
}

Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::IsisShMeshEntry()
    :
    mesh_group_interface{YType::str, "mesh-group-interface"},
    mesh_group_number{YType::uint32, "mesh-group-number"}
{
    yang_name = "isis-sh-mesh-entry"; yang_parent_name = "mesh-group-configured-interface-list";
}

Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::~IsisShMeshEntry()
{
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::has_data() const
{
    return mesh_group_interface.is_set
	|| mesh_group_number.is_set;
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mesh_group_interface.yfilter)
	|| ydk::is_set(mesh_group_number.yfilter);
}

std::string Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-sh-mesh-entry";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsisShMeshEntry' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mesh_group_interface.is_set || is_set(mesh_group_interface.yfilter)) leaf_name_data.push_back(mesh_group_interface.get_name_leafdata());
    if (mesh_group_number.is_set || is_set(mesh_group_number.yfilter)) leaf_name_data.push_back(mesh_group_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mesh-group-interface")
    {
        mesh_group_interface = value;
        mesh_group_interface.value_namespace = name_space;
        mesh_group_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group-number")
    {
        mesh_group_number = value;
        mesh_group_number.value_namespace = name_space;
        mesh_group_number.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mesh-group-interface")
    {
        mesh_group_interface.yfilter = yfilter;
    }
    if(value_path == "mesh-group-number")
    {
        mesh_group_number.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mesh-group-interface" || name == "mesh-group-number")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatistics::NsrStatistics()
    :
    isis_vm_state{YType::uint16, "isis-vm-state"}
    	,
    isis_nsr_stats_data(std::make_shared<Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData>())
{
    isis_nsr_stats_data->parent = this;

    yang_name = "nsr-statistics"; yang_parent_name = "instance";
}

Isis::Instances::Instance::NsrStatistics::~NsrStatistics()
{
}

bool Isis::Instances::Instance::NsrStatistics::has_data() const
{
    return isis_vm_state.is_set
	|| (isis_nsr_stats_data !=  nullptr && isis_nsr_stats_data->has_data());
}

bool Isis::Instances::Instance::NsrStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_vm_state.yfilter)
	|| (isis_nsr_stats_data !=  nullptr && isis_nsr_stats_data->has_operation());
}

std::string Isis::Instances::Instance::NsrStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-statistics";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::NsrStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrStatistics' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_vm_state.is_set || is_set(isis_vm_state.yfilter)) leaf_name_data.push_back(isis_vm_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-nsr-stats-data")
    {
        if(isis_nsr_stats_data == nullptr)
        {
            isis_nsr_stats_data = std::make_shared<Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData>();
        }
        return isis_nsr_stats_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(isis_nsr_stats_data != nullptr)
    {
        children["isis-nsr-stats-data"] = isis_nsr_stats_data;
    }

    return children;
}

void Isis::Instances::Instance::NsrStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-vm-state")
    {
        isis_vm_state = value;
        isis_vm_state.value_namespace = name_space;
        isis_vm_state.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-vm-state")
    {
        isis_vm_state.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-nsr-stats-data" || name == "isis-vm-state")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::IsisNsrStatsData()
    :
    self(std::make_shared<Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self>())
{
    self->parent = this;

    yang_name = "isis-nsr-stats-data"; yang_parent_name = "nsr-statistics";
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::~IsisNsrStatsData()
{
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return (self !=  nullptr && self->has_data());
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (self !=  nullptr && self->has_operation());
}

std::string Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-nsr-stats-data";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsisNsrStatsData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    if(child_yang_name == "self")
    {
        if(self == nullptr)
        {
            self = std::make_shared<Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self>();
        }
        return self;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    if(self != nullptr)
    {
        children["self"] = self;
    }

    return children;
}

void Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "self")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::Self()
    :
    no_of_ipv4_routes{YType::uint32, "no-of-ipv4-routes"},
    no_of_ipv6_routes{YType::uint32, "no-of-ipv6-routes"},
    no_of_l1_adj{YType::uint16, "no-of-l1-adj"},
    no_of_l1_lsp{YType::uint32, "no-of-l1-lsp"},
    no_of_l2_adj{YType::uint16, "no-of-l2-adj"},
    no_of_l2_lsp{YType::uint32, "no-of-l2-lsp"},
    no_of_lan_interface{YType::uint16, "no-of-lan-interface"},
    no_of_live_interface{YType::uint16, "no-of-live-interface"},
    no_of_loopback_interface{YType::uint16, "no-of-loopback-interface"},
    no_of_ptp_interface{YType::uint16, "no-of-ptp-interface"},
    no_of_te_links{YType::uint16, "no-of-te-links"},
    no_of_te_tunnels{YType::uint16, "no-of-te-tunnels"},
    seqnum{YType::uint32, "seqnum"}
{
    yang_name = "self"; yang_parent_name = "isis-nsr-stats-data";
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::~Self()
{
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::has_data() const
{
    return no_of_ipv4_routes.is_set
	|| no_of_ipv6_routes.is_set
	|| no_of_l1_adj.is_set
	|| no_of_l1_lsp.is_set
	|| no_of_l2_adj.is_set
	|| no_of_l2_lsp.is_set
	|| no_of_lan_interface.is_set
	|| no_of_live_interface.is_set
	|| no_of_loopback_interface.is_set
	|| no_of_ptp_interface.is_set
	|| no_of_te_links.is_set
	|| no_of_te_tunnels.is_set
	|| seqnum.is_set;
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_of_ipv4_routes.yfilter)
	|| ydk::is_set(no_of_ipv6_routes.yfilter)
	|| ydk::is_set(no_of_l1_adj.yfilter)
	|| ydk::is_set(no_of_l1_lsp.yfilter)
	|| ydk::is_set(no_of_l2_adj.yfilter)
	|| ydk::is_set(no_of_l2_lsp.yfilter)
	|| ydk::is_set(no_of_lan_interface.yfilter)
	|| ydk::is_set(no_of_live_interface.yfilter)
	|| ydk::is_set(no_of_loopback_interface.yfilter)
	|| ydk::is_set(no_of_ptp_interface.yfilter)
	|| ydk::is_set(no_of_te_links.yfilter)
	|| ydk::is_set(no_of_te_tunnels.yfilter)
	|| ydk::is_set(seqnum.yfilter);
}

std::string Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "self";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Self' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_of_ipv4_routes.is_set || is_set(no_of_ipv4_routes.yfilter)) leaf_name_data.push_back(no_of_ipv4_routes.get_name_leafdata());
    if (no_of_ipv6_routes.is_set || is_set(no_of_ipv6_routes.yfilter)) leaf_name_data.push_back(no_of_ipv6_routes.get_name_leafdata());
    if (no_of_l1_adj.is_set || is_set(no_of_l1_adj.yfilter)) leaf_name_data.push_back(no_of_l1_adj.get_name_leafdata());
    if (no_of_l1_lsp.is_set || is_set(no_of_l1_lsp.yfilter)) leaf_name_data.push_back(no_of_l1_lsp.get_name_leafdata());
    if (no_of_l2_adj.is_set || is_set(no_of_l2_adj.yfilter)) leaf_name_data.push_back(no_of_l2_adj.get_name_leafdata());
    if (no_of_l2_lsp.is_set || is_set(no_of_l2_lsp.yfilter)) leaf_name_data.push_back(no_of_l2_lsp.get_name_leafdata());
    if (no_of_lan_interface.is_set || is_set(no_of_lan_interface.yfilter)) leaf_name_data.push_back(no_of_lan_interface.get_name_leafdata());
    if (no_of_live_interface.is_set || is_set(no_of_live_interface.yfilter)) leaf_name_data.push_back(no_of_live_interface.get_name_leafdata());
    if (no_of_loopback_interface.is_set || is_set(no_of_loopback_interface.yfilter)) leaf_name_data.push_back(no_of_loopback_interface.get_name_leafdata());
    if (no_of_ptp_interface.is_set || is_set(no_of_ptp_interface.yfilter)) leaf_name_data.push_back(no_of_ptp_interface.get_name_leafdata());
    if (no_of_te_links.is_set || is_set(no_of_te_links.yfilter)) leaf_name_data.push_back(no_of_te_links.get_name_leafdata());
    if (no_of_te_tunnels.is_set || is_set(no_of_te_tunnels.yfilter)) leaf_name_data.push_back(no_of_te_tunnels.get_name_leafdata());
    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-of-ipv4-routes")
    {
        no_of_ipv4_routes = value;
        no_of_ipv4_routes.value_namespace = name_space;
        no_of_ipv4_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-ipv6-routes")
    {
        no_of_ipv6_routes = value;
        no_of_ipv6_routes.value_namespace = name_space;
        no_of_ipv6_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l1-adj")
    {
        no_of_l1_adj = value;
        no_of_l1_adj.value_namespace = name_space;
        no_of_l1_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l1-lsp")
    {
        no_of_l1_lsp = value;
        no_of_l1_lsp.value_namespace = name_space;
        no_of_l1_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l2-adj")
    {
        no_of_l2_adj = value;
        no_of_l2_adj.value_namespace = name_space;
        no_of_l2_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l2-lsp")
    {
        no_of_l2_lsp = value;
        no_of_l2_lsp.value_namespace = name_space;
        no_of_l2_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-lan-interface")
    {
        no_of_lan_interface = value;
        no_of_lan_interface.value_namespace = name_space;
        no_of_lan_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-live-interface")
    {
        no_of_live_interface = value;
        no_of_live_interface.value_namespace = name_space;
        no_of_live_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-loopback-interface")
    {
        no_of_loopback_interface = value;
        no_of_loopback_interface.value_namespace = name_space;
        no_of_loopback_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-ptp-interface")
    {
        no_of_ptp_interface = value;
        no_of_ptp_interface.value_namespace = name_space;
        no_of_ptp_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-te-links")
    {
        no_of_te_links = value;
        no_of_te_links.value_namespace = name_space;
        no_of_te_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-te-tunnels")
    {
        no_of_te_tunnels = value;
        no_of_te_tunnels.value_namespace = name_space;
        no_of_te_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seqnum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-of-ipv4-routes")
    {
        no_of_ipv4_routes.yfilter = yfilter;
    }
    if(value_path == "no-of-ipv6-routes")
    {
        no_of_ipv6_routes.yfilter = yfilter;
    }
    if(value_path == "no-of-l1-adj")
    {
        no_of_l1_adj.yfilter = yfilter;
    }
    if(value_path == "no-of-l1-lsp")
    {
        no_of_l1_lsp.yfilter = yfilter;
    }
    if(value_path == "no-of-l2-adj")
    {
        no_of_l2_adj.yfilter = yfilter;
    }
    if(value_path == "no-of-l2-lsp")
    {
        no_of_l2_lsp.yfilter = yfilter;
    }
    if(value_path == "no-of-lan-interface")
    {
        no_of_lan_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-live-interface")
    {
        no_of_live_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-loopback-interface")
    {
        no_of_loopback_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-ptp-interface")
    {
        no_of_ptp_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-te-links")
    {
        no_of_te_links.yfilter = yfilter;
    }
    if(value_path == "no-of-te-tunnels")
    {
        no_of_te_tunnels.yfilter = yfilter;
    }
    if(value_path == "seqnum")
    {
        seqnum.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-of-ipv4-routes" || name == "no-of-ipv6-routes" || name == "no-of-l1-adj" || name == "no-of-l1-lsp" || name == "no-of-l2-adj" || name == "no-of-l2-lsp" || name == "no-of-lan-interface" || name == "no-of-live-interface" || name == "no-of-loopback-interface" || name == "no-of-ptp-interface" || name == "no-of-te-links" || name == "no-of-te-tunnels" || name == "seqnum")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::Peer()
    :
    no_of_ipv4_routes{YType::uint32, "no-of-ipv4-routes"},
    no_of_ipv6_routes{YType::uint32, "no-of-ipv6-routes"},
    no_of_l1_adj{YType::uint16, "no-of-l1-adj"},
    no_of_l1_lsp{YType::uint32, "no-of-l1-lsp"},
    no_of_l2_adj{YType::uint16, "no-of-l2-adj"},
    no_of_l2_lsp{YType::uint32, "no-of-l2-lsp"},
    no_of_lan_interface{YType::uint16, "no-of-lan-interface"},
    no_of_live_interface{YType::uint16, "no-of-live-interface"},
    no_of_loopback_interface{YType::uint16, "no-of-loopback-interface"},
    no_of_ptp_interface{YType::uint16, "no-of-ptp-interface"},
    no_of_te_links{YType::uint16, "no-of-te-links"},
    no_of_te_tunnels{YType::uint16, "no-of-te-tunnels"},
    seqnum{YType::uint32, "seqnum"}
{
    yang_name = "peer"; yang_parent_name = "isis-nsr-stats-data";
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::~Peer()
{
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::has_data() const
{
    return no_of_ipv4_routes.is_set
	|| no_of_ipv6_routes.is_set
	|| no_of_l1_adj.is_set
	|| no_of_l1_lsp.is_set
	|| no_of_l2_adj.is_set
	|| no_of_l2_lsp.is_set
	|| no_of_lan_interface.is_set
	|| no_of_live_interface.is_set
	|| no_of_loopback_interface.is_set
	|| no_of_ptp_interface.is_set
	|| no_of_te_links.is_set
	|| no_of_te_tunnels.is_set
	|| seqnum.is_set;
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_of_ipv4_routes.yfilter)
	|| ydk::is_set(no_of_ipv6_routes.yfilter)
	|| ydk::is_set(no_of_l1_adj.yfilter)
	|| ydk::is_set(no_of_l1_lsp.yfilter)
	|| ydk::is_set(no_of_l2_adj.yfilter)
	|| ydk::is_set(no_of_l2_lsp.yfilter)
	|| ydk::is_set(no_of_lan_interface.yfilter)
	|| ydk::is_set(no_of_live_interface.yfilter)
	|| ydk::is_set(no_of_loopback_interface.yfilter)
	|| ydk::is_set(no_of_ptp_interface.yfilter)
	|| ydk::is_set(no_of_te_links.yfilter)
	|| ydk::is_set(no_of_te_tunnels.yfilter)
	|| ydk::is_set(seqnum.yfilter);
}

std::string Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_of_ipv4_routes.is_set || is_set(no_of_ipv4_routes.yfilter)) leaf_name_data.push_back(no_of_ipv4_routes.get_name_leafdata());
    if (no_of_ipv6_routes.is_set || is_set(no_of_ipv6_routes.yfilter)) leaf_name_data.push_back(no_of_ipv6_routes.get_name_leafdata());
    if (no_of_l1_adj.is_set || is_set(no_of_l1_adj.yfilter)) leaf_name_data.push_back(no_of_l1_adj.get_name_leafdata());
    if (no_of_l1_lsp.is_set || is_set(no_of_l1_lsp.yfilter)) leaf_name_data.push_back(no_of_l1_lsp.get_name_leafdata());
    if (no_of_l2_adj.is_set || is_set(no_of_l2_adj.yfilter)) leaf_name_data.push_back(no_of_l2_adj.get_name_leafdata());
    if (no_of_l2_lsp.is_set || is_set(no_of_l2_lsp.yfilter)) leaf_name_data.push_back(no_of_l2_lsp.get_name_leafdata());
    if (no_of_lan_interface.is_set || is_set(no_of_lan_interface.yfilter)) leaf_name_data.push_back(no_of_lan_interface.get_name_leafdata());
    if (no_of_live_interface.is_set || is_set(no_of_live_interface.yfilter)) leaf_name_data.push_back(no_of_live_interface.get_name_leafdata());
    if (no_of_loopback_interface.is_set || is_set(no_of_loopback_interface.yfilter)) leaf_name_data.push_back(no_of_loopback_interface.get_name_leafdata());
    if (no_of_ptp_interface.is_set || is_set(no_of_ptp_interface.yfilter)) leaf_name_data.push_back(no_of_ptp_interface.get_name_leafdata());
    if (no_of_te_links.is_set || is_set(no_of_te_links.yfilter)) leaf_name_data.push_back(no_of_te_links.get_name_leafdata());
    if (no_of_te_tunnels.is_set || is_set(no_of_te_tunnels.yfilter)) leaf_name_data.push_back(no_of_te_tunnels.get_name_leafdata());
    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-of-ipv4-routes")
    {
        no_of_ipv4_routes = value;
        no_of_ipv4_routes.value_namespace = name_space;
        no_of_ipv4_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-ipv6-routes")
    {
        no_of_ipv6_routes = value;
        no_of_ipv6_routes.value_namespace = name_space;
        no_of_ipv6_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l1-adj")
    {
        no_of_l1_adj = value;
        no_of_l1_adj.value_namespace = name_space;
        no_of_l1_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l1-lsp")
    {
        no_of_l1_lsp = value;
        no_of_l1_lsp.value_namespace = name_space;
        no_of_l1_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l2-adj")
    {
        no_of_l2_adj = value;
        no_of_l2_adj.value_namespace = name_space;
        no_of_l2_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l2-lsp")
    {
        no_of_l2_lsp = value;
        no_of_l2_lsp.value_namespace = name_space;
        no_of_l2_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-lan-interface")
    {
        no_of_lan_interface = value;
        no_of_lan_interface.value_namespace = name_space;
        no_of_lan_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-live-interface")
    {
        no_of_live_interface = value;
        no_of_live_interface.value_namespace = name_space;
        no_of_live_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-loopback-interface")
    {
        no_of_loopback_interface = value;
        no_of_loopback_interface.value_namespace = name_space;
        no_of_loopback_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-ptp-interface")
    {
        no_of_ptp_interface = value;
        no_of_ptp_interface.value_namespace = name_space;
        no_of_ptp_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-te-links")
    {
        no_of_te_links = value;
        no_of_te_links.value_namespace = name_space;
        no_of_te_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-te-tunnels")
    {
        no_of_te_tunnels = value;
        no_of_te_tunnels.value_namespace = name_space;
        no_of_te_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seqnum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-of-ipv4-routes")
    {
        no_of_ipv4_routes.yfilter = yfilter;
    }
    if(value_path == "no-of-ipv6-routes")
    {
        no_of_ipv6_routes.yfilter = yfilter;
    }
    if(value_path == "no-of-l1-adj")
    {
        no_of_l1_adj.yfilter = yfilter;
    }
    if(value_path == "no-of-l1-lsp")
    {
        no_of_l1_lsp.yfilter = yfilter;
    }
    if(value_path == "no-of-l2-adj")
    {
        no_of_l2_adj.yfilter = yfilter;
    }
    if(value_path == "no-of-l2-lsp")
    {
        no_of_l2_lsp.yfilter = yfilter;
    }
    if(value_path == "no-of-lan-interface")
    {
        no_of_lan_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-live-interface")
    {
        no_of_live_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-loopback-interface")
    {
        no_of_loopback_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-ptp-interface")
    {
        no_of_ptp_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-te-links")
    {
        no_of_te_links.yfilter = yfilter;
    }
    if(value_path == "no-of-te-tunnels")
    {
        no_of_te_tunnels.yfilter = yfilter;
    }
    if(value_path == "seqnum")
    {
        seqnum.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-of-ipv4-routes" || name == "no-of-ipv6-routes" || name == "no-of-l1-adj" || name == "no-of-l1-lsp" || name == "no-of-l2-adj" || name == "no-of-l2-lsp" || name == "no-of-lan-interface" || name == "no-of-live-interface" || name == "no-of-loopback-interface" || name == "no-of-ptp-interface" || name == "no-of-te-links" || name == "no-of-te-tunnels" || name == "seqnum")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnels()
{
    yang_name = "checkpoint-te-tunnels"; yang_parent_name = "instance";
}

Isis::Instances::Instance::CheckpointTeTunnels::~CheckpointTeTunnels()
{
}

bool Isis::Instances::Instance::CheckpointTeTunnels::has_data() const
{
    for (std::size_t index=0; index<checkpoint_te_tunnel.size(); index++)
    {
        if(checkpoint_te_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::CheckpointTeTunnels::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_te_tunnel.size(); index++)
    {
        if(checkpoint_te_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::CheckpointTeTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-te-tunnels";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::CheckpointTeTunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CheckpointTeTunnels' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointTeTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "checkpoint-te-tunnel")
    {
        for(auto const & c : checkpoint_te_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel>();
        c->parent = this;
        checkpoint_te_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::CheckpointTeTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : checkpoint_te_tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::CheckpointTeTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::CheckpointTeTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::CheckpointTeTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-te-tunnel")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::CheckpointTeTunnel()
    :
    checkpoint_te_bandwidth{YType::uint32, "checkpoint-te-bandwidth"},
    checkpoint_te_flags{YType::uint32, "checkpoint-te-flags"},
    checkpoint_te_interface{YType::str, "checkpoint-te-interface"},
    checkpoint_te_level{YType::enumeration, "checkpoint-te-level"},
    checkpoint_te_metric{YType::int32, "checkpoint-te-metric"},
    checkpoint_te_metric_mode{YType::enumeration, "checkpoint-te-metric-mode"},
    checkpoint_te_nexthop{YType::str, "checkpoint-te-nexthop"},
    checkpoint_te_object_id{YType::uint32, "checkpoint-te-object-id"},
    checkpoint_te_system_id{YType::str, "checkpoint-te-system-id"},
    interface_name{YType::str, "interface-name"},
    level{YType::enumeration, "level"}
{
    yang_name = "checkpoint-te-tunnel"; yang_parent_name = "checkpoint-te-tunnels";
}

Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::~CheckpointTeTunnel()
{
}

bool Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::has_data() const
{
    return checkpoint_te_bandwidth.is_set
	|| checkpoint_te_flags.is_set
	|| checkpoint_te_interface.is_set
	|| checkpoint_te_level.is_set
	|| checkpoint_te_metric.is_set
	|| checkpoint_te_metric_mode.is_set
	|| checkpoint_te_nexthop.is_set
	|| checkpoint_te_object_id.is_set
	|| checkpoint_te_system_id.is_set
	|| interface_name.is_set
	|| level.is_set;
}

bool Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(checkpoint_te_bandwidth.yfilter)
	|| ydk::is_set(checkpoint_te_flags.yfilter)
	|| ydk::is_set(checkpoint_te_interface.yfilter)
	|| ydk::is_set(checkpoint_te_level.yfilter)
	|| ydk::is_set(checkpoint_te_metric.yfilter)
	|| ydk::is_set(checkpoint_te_metric_mode.yfilter)
	|| ydk::is_set(checkpoint_te_nexthop.yfilter)
	|| ydk::is_set(checkpoint_te_object_id.yfilter)
	|| ydk::is_set(checkpoint_te_system_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-te-tunnel";

    return path_buffer.str();

}

const EntityPath Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CheckpointTeTunnel' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (checkpoint_te_bandwidth.is_set || is_set(checkpoint_te_bandwidth.yfilter)) leaf_name_data.push_back(checkpoint_te_bandwidth.get_name_leafdata());
    if (checkpoint_te_flags.is_set || is_set(checkpoint_te_flags.yfilter)) leaf_name_data.push_back(checkpoint_te_flags.get_name_leafdata());
    if (checkpoint_te_interface.is_set || is_set(checkpoint_te_interface.yfilter)) leaf_name_data.push_back(checkpoint_te_interface.get_name_leafdata());
    if (checkpoint_te_level.is_set || is_set(checkpoint_te_level.yfilter)) leaf_name_data.push_back(checkpoint_te_level.get_name_leafdata());
    if (checkpoint_te_metric.is_set || is_set(checkpoint_te_metric.yfilter)) leaf_name_data.push_back(checkpoint_te_metric.get_name_leafdata());
    if (checkpoint_te_metric_mode.is_set || is_set(checkpoint_te_metric_mode.yfilter)) leaf_name_data.push_back(checkpoint_te_metric_mode.get_name_leafdata());
    if (checkpoint_te_nexthop.is_set || is_set(checkpoint_te_nexthop.yfilter)) leaf_name_data.push_back(checkpoint_te_nexthop.get_name_leafdata());
    if (checkpoint_te_object_id.is_set || is_set(checkpoint_te_object_id.yfilter)) leaf_name_data.push_back(checkpoint_te_object_id.get_name_leafdata());
    if (checkpoint_te_system_id.is_set || is_set(checkpoint_te_system_id.yfilter)) leaf_name_data.push_back(checkpoint_te_system_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "checkpoint-te-bandwidth")
    {
        checkpoint_te_bandwidth = value;
        checkpoint_te_bandwidth.value_namespace = name_space;
        checkpoint_te_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-flags")
    {
        checkpoint_te_flags = value;
        checkpoint_te_flags.value_namespace = name_space;
        checkpoint_te_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-interface")
    {
        checkpoint_te_interface = value;
        checkpoint_te_interface.value_namespace = name_space;
        checkpoint_te_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-level")
    {
        checkpoint_te_level = value;
        checkpoint_te_level.value_namespace = name_space;
        checkpoint_te_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-metric")
    {
        checkpoint_te_metric = value;
        checkpoint_te_metric.value_namespace = name_space;
        checkpoint_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-metric-mode")
    {
        checkpoint_te_metric_mode = value;
        checkpoint_te_metric_mode.value_namespace = name_space;
        checkpoint_te_metric_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-nexthop")
    {
        checkpoint_te_nexthop = value;
        checkpoint_te_nexthop.value_namespace = name_space;
        checkpoint_te_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-object-id")
    {
        checkpoint_te_object_id = value;
        checkpoint_te_object_id.value_namespace = name_space;
        checkpoint_te_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-system-id")
    {
        checkpoint_te_system_id = value;
        checkpoint_te_system_id.value_namespace = name_space;
        checkpoint_te_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "checkpoint-te-bandwidth")
    {
        checkpoint_te_bandwidth.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-flags")
    {
        checkpoint_te_flags.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-interface")
    {
        checkpoint_te_interface.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-level")
    {
        checkpoint_te_level.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-metric")
    {
        checkpoint_te_metric.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-metric-mode")
    {
        checkpoint_te_metric_mode.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-nexthop")
    {
        checkpoint_te_nexthop.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-object-id")
    {
        checkpoint_te_object_id.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-system-id")
    {
        checkpoint_te_system_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-te-bandwidth" || name == "checkpoint-te-flags" || name == "checkpoint-te-interface" || name == "checkpoint-te-level" || name == "checkpoint-te-metric" || name == "checkpoint-te-metric-mode" || name == "checkpoint-te-nexthop" || name == "checkpoint-te-object-id" || name == "checkpoint-te-system-id" || name == "interface-name" || name == "level")
        return true;
    return false;
}


}
}

