
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_cfg_1.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_cfg_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_cfg {

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::AdvertiseVrfImpDisableV6()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-vrf-imp-disable-v6"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::~AdvertiseVrfImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_option.operation)
	|| is_set(af_name.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v6";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseVrfImpDisableV6' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.operation)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4::AdvertiseV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-v4"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4::~AdvertiseV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v4";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseV4' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4::AdvertiseLocalV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-local-v4"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4::~AdvertiseLocalV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v4";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseLocalV4' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::RemovePrivateAsEntireAsPath()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{
    yang_name = "remove-private-as-entire-as-path"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::~RemovePrivateAsEntireAsPath()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::has_data() const
{
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(entire.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemovePrivateAsEntireAsPath' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.operation)) leaf_name_data.push_back(entire.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "entire")
    {
        entire = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::AdvertiseVrfImpDisableV4()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-vrf-imp-disable-v4"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::~AdvertiseVrfImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_option.operation)
	|| is_set(af_name.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v4";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseVrfImpDisableV4' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.operation)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress::LocalAddress()
    :
    local_address_disable{YType::boolean, "local-address-disable"},
    local_ip_address{YType::str, "local-ip-address"}
{
    yang_name = "local-address"; yang_parent_name = "neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress::~LocalAddress()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress::has_data() const
{
    return local_address_disable.is_set
	|| local_ip_address.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(local_address_disable.operation)
	|| is_set(local_ip_address.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalAddress' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address_disable.is_set || is_set(local_address_disable.operation)) leaf_name_data.push_back(local_address_disable.get_name_leafdata());
    if (local_ip_address.is_set || is_set(local_ip_address.operation)) leaf_name_data.push_back(local_ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-address-disable")
    {
        local_address_disable = value;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivates()
{
    yang_name = "bmp-activates"; yang_parent_name = "neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::~BmpActivates()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::has_data() const
{
    for (std::size_t index=0; index<bmp_activate.size(); index++)
    {
        if(bmp_activate[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::has_operation() const
{
    for (std::size_t index=0; index<bmp_activate.size(); index++)
    {
        if(bmp_activate[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activates";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpActivates' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bmp-activate")
    {
        for(auto const & c : bmp_activate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate>();
        c->parent = this;
        bmp_activate.push_back(std::move(c));
        children[segment_path] = bmp_activate.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::get_children()
{
    for (auto const & c : bmp_activate)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate::BmpActivate()
    :
    server_id{YType::uint32, "server-id"}
{
    yang_name = "bmp-activate"; yang_parent_name = "bmp-activates";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate::~BmpActivate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate::has_data() const
{
    return server_id.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate::has_operation() const
{
    return is_set(operation)
	|| is_set(server_id.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activate" <<"[server-id='" <<server_id <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpActivate' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_id.is_set || is_set(server_id.operation)) leaf_name_data.push_back(server_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "server-id")
    {
        server_id = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop::EbgpMultihop()
    :
    max_hop_count{YType::uint32, "max-hop-count"},
    mpls_deactivation{YType::boolean, "mpls-deactivation"}
{
    yang_name = "ebgp-multihop"; yang_parent_name = "neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop::~EbgpMultihop()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop::has_data() const
{
    return max_hop_count.is_set
	|| mpls_deactivation.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop::has_operation() const
{
    return is_set(operation)
	|| is_set(max_hop_count.operation)
	|| is_set(mpls_deactivation.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EbgpMultihop' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_hop_count.is_set || is_set(max_hop_count.operation)) leaf_name_data.push_back(max_hop_count.get_name_leafdata());
    if (mpls_deactivation.is_set || is_set(mpls_deactivation.operation)) leaf_name_data.push_back(mpls_deactivation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-hop-count")
    {
        max_hop_count = value;
    }
    if(value_path == "mpls-deactivation")
    {
        mpls_deactivation = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs::RemoteAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{
    yang_name = "remote-as"; yang_parent_name = "neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs::~RemoteAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-as";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteAs' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs::LocalAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    disable{YType::empty, "disable"},
    dual_as{YType::empty, "dual-as"},
    no_prepend{YType::empty, "no-prepend"},
    replace_as{YType::empty, "replace-as"}
{
    yang_name = "local-as"; yang_parent_name = "neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs::~LocalAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set
	|| disable.is_set
	|| dual_as.is_set
	|| no_prepend.is_set
	|| replace_as.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs::has_operation() const
{
    return is_set(operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation)
	|| is_set(disable.operation)
	|| is_set(dual_as.operation)
	|| is_set(no_prepend.operation)
	|| is_set(replace_as.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-as";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalAs' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (dual_as.is_set || is_set(dual_as.operation)) leaf_name_data.push_back(dual_as.get_name_leafdata());
    if (no_prepend.is_set || is_set(no_prepend.operation)) leaf_name_data.push_back(no_prepend.get_name_leafdata());
    if (replace_as.is_set || is_set(replace_as.operation)) leaf_name_data.push_back(replace_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "dual-as")
    {
        dual_as = value;
    }
    if(value_path == "no-prepend")
    {
        no_prepend = value;
    }
    if(value_path == "replace-as")
    {
        replace_as = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password::Password()
    :
    password{YType::str, "password"},
    password_disable{YType::boolean, "password-disable"}
{
    yang_name = "password"; yang_parent_name = "neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password::~Password()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password::has_data() const
{
    return password.is_set
	|| password_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(password.operation)
	|| is_set(password_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (password_disable.is_set || is_set(password_disable.operation)) leaf_name_data.push_back(password_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "password-disable")
    {
        password_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval::AdvertisementInterval()
    :
    minimum_interval{YType::uint32, "minimum-interval"},
    minimum_interval_msecs{YType::uint32, "minimum-interval-msecs"}
{
    yang_name = "advertisement-interval"; yang_parent_name = "neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval::~AdvertisementInterval()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval::has_data() const
{
    return minimum_interval.is_set
	|| minimum_interval_msecs.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum_interval.operation)
	|| is_set(minimum_interval_msecs.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement-interval";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertisementInterval' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (minimum_interval_msecs.is_set || is_set(minimum_interval_msecs.operation)) leaf_name_data.push_back(minimum_interval_msecs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "minimum-interval-msecs")
    {
        minimum_interval_msecs = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId::NeighborClusterId()
    :
    cluster_id_address{YType::str, "cluster-id-address"},
    cluster_id_number{YType::uint32, "cluster-id-number"}
{
    yang_name = "neighbor-cluster-id"; yang_parent_name = "neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId::~NeighborClusterId()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId::has_data() const
{
    return cluster_id_address.is_set
	|| cluster_id_number.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId::has_operation() const
{
    return is_set(operation)
	|| is_set(cluster_id_address.operation)
	|| is_set(cluster_id_number.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-cluster-id";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborClusterId' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_address.is_set || is_set(cluster_id_address.operation)) leaf_name_data.push_back(cluster_id_address.get_name_leafdata());
    if (cluster_id_number.is_set || is_set(cluster_id_number.operation)) leaf_name_data.push_back(cluster_id_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cluster-id-address")
    {
        cluster_id_address = value;
    }
    if(value_path == "cluster-id-number")
    {
        cluster_id_number = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss::Tcpmss()
    :
    mss{YType::uint32, "mss"},
    tcpmss_disable{YType::boolean, "tcpmss-disable"}
{
    yang_name = "tcpmss"; yang_parent_name = "neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss::~Tcpmss()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss::has_data() const
{
    return mss.is_set
	|| tcpmss_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss::has_operation() const
{
    return is_set(operation)
	|| is_set(mss.operation)
	|| is_set(tcpmss_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpmss";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tcpmss' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mss.is_set || is_set(mss.operation)) leaf_name_data.push_back(mss.get_name_leafdata());
    if (tcpmss_disable.is_set || is_set(tcpmss_disable.operation)) leaf_name_data.push_back(tcpmss_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mss")
    {
        mss = value;
    }
    if(value_path == "tcpmss-disable")
    {
        tcpmss_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos::Tos()
    :
    type{YType::enumeration, "type"},
    value_{YType::str, "value"}
{
    yang_name = "tos"; yang_parent_name = "neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos::~Tos()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos::has_data() const
{
    return type.is_set
	|| value_.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| is_set(value_.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tos' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFiltering()
    :
    enable{YType::empty, "enable"},
    update_in_filtering_attribute_filter_group{YType::str, "update-in-filtering-attribute-filter-group"},
    update_in_filtering_syslog_disable{YType::empty, "update-in-filtering-syslog-disable"}
    	,
    update_in_filtering_message_buffers(nullptr) // presence node
{
    yang_name = "update-in-filtering"; yang_parent_name = "neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::~UpdateInFiltering()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::has_data() const
{
    return enable.is_set
	|| update_in_filtering_attribute_filter_group.is_set
	|| update_in_filtering_syslog_disable.is_set
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(update_in_filtering_attribute_filter_group.operation)
	|| is_set(update_in_filtering_syslog_disable.operation)
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateInFiltering' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (update_in_filtering_attribute_filter_group.is_set || is_set(update_in_filtering_attribute_filter_group.operation)) leaf_name_data.push_back(update_in_filtering_attribute_filter_group.get_name_leafdata());
    if (update_in_filtering_syslog_disable.is_set || is_set(update_in_filtering_syslog_disable.operation)) leaf_name_data.push_back(update_in_filtering_syslog_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "update-in-filtering-message-buffers")
    {
        if(update_in_filtering_message_buffers != nullptr)
        {
            children["update-in-filtering-message-buffers"] = update_in_filtering_message_buffers;
        }
        else
        {
            update_in_filtering_message_buffers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers>();
            update_in_filtering_message_buffers->parent = this;
            children["update-in-filtering-message-buffers"] = update_in_filtering_message_buffers;
        }
        return children.at("update-in-filtering-message-buffers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::get_children()
{
    if(children.find("update-in-filtering-message-buffers") == children.end())
    {
        if(update_in_filtering_message_buffers != nullptr)
        {
            children["update-in-filtering-message-buffers"] = update_in_filtering_message_buffers;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "update-in-filtering-attribute-filter-group")
    {
        update_in_filtering_attribute_filter_group = value;
    }
    if(value_path == "update-in-filtering-syslog-disable")
    {
        update_in_filtering_syslog_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::UpdateInFilteringMessageBuffers()
    :
    non_circular_buffer{YType::boolean, "non-circular-buffer"},
    number_of_buffers{YType::uint32, "number-of-buffers"}
{
    yang_name = "update-in-filtering-message-buffers"; yang_parent_name = "update-in-filtering";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::~UpdateInFilteringMessageBuffers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_data() const
{
    return non_circular_buffer.is_set
	|| number_of_buffers.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_operation() const
{
    return is_set(operation)
	|| is_set(non_circular_buffer.operation)
	|| is_set(number_of_buffers.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering-message-buffers";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateInFilteringMessageBuffers' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_circular_buffer.is_set || is_set(non_circular_buffer.operation)) leaf_name_data.push_back(non_circular_buffer.get_name_leafdata());
    if (number_of_buffers.is_set || is_set(number_of_buffers.operation)) leaf_name_data.push_back(number_of_buffers.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-circular-buffer")
    {
        non_circular_buffer = value;
    }
    if(value_path == "number-of-buffers")
    {
        number_of_buffers = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut::MsgLogOut()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{
    yang_name = "msg-log-out"; yang_parent_name = "neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut::~MsgLogOut()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut::has_data() const
{
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut::has_operation() const
{
    return is_set(operation)
	|| is_set(msg_buf_count.operation)
	|| is_set(msg_log_disable.operation)
	|| is_set(msg_log_inherit_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-out";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MsgLogOut' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.operation)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.operation)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.operation)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize::ReceiveBufferSize()
    :
    bgp_receive_size{YType::uint32, "bgp-receive-size"},
    socket_receive_size{YType::uint32, "socket-receive-size"}
{
    yang_name = "receive-buffer-size"; yang_parent_name = "neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize::~ReceiveBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize::has_data() const
{
    return bgp_receive_size.is_set
	|| socket_receive_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp_receive_size.operation)
	|| is_set(socket_receive_size.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-buffer-size";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceiveBufferSize' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_receive_size.is_set || is_set(bgp_receive_size.operation)) leaf_name_data.push_back(bgp_receive_size.get_name_leafdata());
    if (socket_receive_size.is_set || is_set(socket_receive_size.operation)) leaf_name_data.push_back(socket_receive_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size = value;
    }
    if(value_path == "socket-receive-size")
    {
        socket_receive_size = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn::MsgLogIn()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{
    yang_name = "msg-log-in"; yang_parent_name = "neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn::~MsgLogIn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn::has_data() const
{
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn::has_operation() const
{
    return is_set(operation)
	|| is_set(msg_buf_count.operation)
	|| is_set(msg_log_disable.operation)
	|| is_set(msg_log_inherit_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-in";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MsgLogIn' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.operation)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.operation)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.operation)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize::SendBufferSize()
    :
    bgp_send_size{YType::uint32, "bgp-send-size"},
    socket_send_size{YType::uint32, "socket-send-size"}
{
    yang_name = "send-buffer-size"; yang_parent_name = "neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize::~SendBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize::has_data() const
{
    return bgp_send_size.is_set
	|| socket_send_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp_send_size.operation)
	|| is_set(socket_send_size.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-buffer-size";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendBufferSize' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_send_size.is_set || is_set(bgp_send_size.operation)) leaf_name_data.push_back(bgp_send_size.get_name_leafdata());
    if (socket_send_size.is_set || is_set(socket_send_size.operation)) leaf_name_data.push_back(socket_send_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp-send-size")
    {
        bgp_send_size = value;
    }
    if(value_path == "socket-send-size")
    {
        socket_send_size = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers::Timers()
    :
    hold_time{YType::uint32, "hold-time"},
    keepalive_interval{YType::uint32, "keepalive-interval"},
    min_accept_hold_time{YType::uint32, "min-accept-hold-time"}
{
    yang_name = "timers"; yang_parent_name = "neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers::~Timers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers::has_data() const
{
    return hold_time.is_set
	|| keepalive_interval.is_set
	|| min_accept_hold_time.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_time.operation)
	|| is_set(keepalive_interval.operation)
	|| is_set(min_accept_hold_time.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.operation)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (min_accept_hold_time.is_set || is_set(min_accept_hold_time.operation)) leaf_name_data.push_back(min_accept_hold_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain::Keychain()
    :
    keychain_disable{YType::boolean, "keychain-disable"},
    keychain_name{YType::str, "keychain-name"}
{
    yang_name = "keychain"; yang_parent_name = "neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain::~Keychain()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain::has_data() const
{
    return keychain_disable.is_set
	|| keychain_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain::has_operation() const
{
    return is_set(operation)
	|| is_set(keychain_disable.operation)
	|| is_set(keychain_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keychain";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Keychain' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keychain_disable.is_set || is_set(keychain_disable.operation)) leaf_name_data.push_back(keychain_disable.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.operation)) leaf_name_data.push_back(keychain_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "keychain-disable")
    {
        keychain_disable = value;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenance()
    :
    enable{YType::empty, "enable"},
    graceful_maintenance_activate{YType::boolean, "graceful-maintenance-activate"}
    	,
    graceful_maintenance_as_prepends(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends>())
	,graceful_maintenance_local_preference(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference>())
{
    graceful_maintenance_as_prepends->parent = this;
    children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;

    graceful_maintenance_local_preference->parent = this;
    children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;

    yang_name = "graceful-maintenance"; yang_parent_name = "neighbor";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::~GracefulMaintenance()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::has_data() const
{
    return enable.is_set
	|| graceful_maintenance_activate.is_set
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_data())
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(graceful_maintenance_activate.operation)
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_operation())
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulMaintenance' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (graceful_maintenance_activate.is_set || is_set(graceful_maintenance_activate.operation)) leaf_name_data.push_back(graceful_maintenance_activate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "graceful-maintenance-as-prepends")
    {
        if(graceful_maintenance_as_prepends != nullptr)
        {
            children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;
        }
        else
        {
            graceful_maintenance_as_prepends = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends>();
            graceful_maintenance_as_prepends->parent = this;
            children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;
        }
        return children.at("graceful-maintenance-as-prepends");
    }

    if(child_yang_name == "graceful-maintenance-local-preference")
    {
        if(graceful_maintenance_local_preference != nullptr)
        {
            children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;
        }
        else
        {
            graceful_maintenance_local_preference = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference>();
            graceful_maintenance_local_preference->parent = this;
            children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;
        }
        return children.at("graceful-maintenance-local-preference");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::get_children()
{
    if(children.find("graceful-maintenance-as-prepends") == children.end())
    {
        if(graceful_maintenance_as_prepends != nullptr)
        {
            children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;
        }
    }

    if(children.find("graceful-maintenance-local-preference") == children.end())
    {
        if(graceful_maintenance_local_preference != nullptr)
        {
            children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "graceful-maintenance-activate")
    {
        graceful_maintenance_activate = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::GracefulMaintenanceLocalPreference()
    :
    gshut_loc_pref_disable{YType::boolean, "gshut-loc-pref-disable"},
    local_preference{YType::uint32, "local-preference"}
{
    yang_name = "graceful-maintenance-local-preference"; yang_parent_name = "graceful-maintenance";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::~GracefulMaintenanceLocalPreference()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_data() const
{
    return gshut_loc_pref_disable.is_set
	|| local_preference.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_operation() const
{
    return is_set(operation)
	|| is_set(gshut_loc_pref_disable.operation)
	|| is_set(local_preference.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-local-preference";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulMaintenanceLocalPreference' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gshut_loc_pref_disable.is_set || is_set(gshut_loc_pref_disable.operation)) leaf_name_data.push_back(gshut_loc_pref_disable.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.operation)) leaf_name_data.push_back(local_preference.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gshut-loc-pref-disable")
    {
        gshut_loc_pref_disable = value;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::GracefulMaintenanceAsPrepends()
    :
    as_prepends{YType::uint32, "as-prepends"},
    gshut_prepends_disable{YType::boolean, "gshut-prepends-disable"}
{
    yang_name = "graceful-maintenance-as-prepends"; yang_parent_name = "graceful-maintenance";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::~GracefulMaintenanceAsPrepends()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_data() const
{
    return as_prepends.is_set
	|| gshut_prepends_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_operation() const
{
    return is_set(operation)
	|| is_set(as_prepends.operation)
	|| is_set(gshut_prepends_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-as-prepends";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulMaintenanceAsPrepends' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_prepends.is_set || is_set(as_prepends.operation)) leaf_name_data.push_back(as_prepends.get_name_leafdata());
    if (gshut_prepends_disable.is_set || is_set(gshut_prepends_disable.operation)) leaf_name_data.push_back(gshut_prepends_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-prepends")
    {
        as_prepends = value;
    }
    if(value_path == "gshut-prepends-disable")
    {
        gshut_prepends_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborPrefixLength()
    :
    neighbor_address{YType::str, "neighbor-address"},
    prefix_length{YType::uint32, "prefix-length"},
    additional_paths_receive_capability{YType::enumeration, "additional-paths-receive-capability"},
    additional_paths_send_capability{YType::enumeration, "additional-paths-send-capability"},
    bfd_enable_modes{YType::enumeration, "bfd-enable-modes"},
    bfd_minimum_interval{YType::uint32, "bfd-minimum-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    description{YType::str, "description"},
    ebgp_recv_dmz{YType::boolean, "ebgp-recv-dmz"},
    ebgp_send_dmz_enable_modes{YType::enumeration, "ebgp-send-dmz-enable-modes"},
    egress_peer_engineering{YType::boolean, "egress-peer-engineering"},
    enforce_first_as{YType::boolean, "enforce-first-as"},
    idle_watch_time{YType::uint32, "idle-watch-time"},
    ignore_connected_check_ebgp{YType::boolean, "ignore-connected-check-ebgp"},
    internal_vpn_client_ibgpce{YType::boolean, "internal-vpn-client-ibgpce"},
    max_peers{YType::uint32, "max-peers"},
    neighbor_graceful_restart{YType::boolean, "neighbor-graceful-restart"},
    neighbor_graceful_restart_stalepath_time{YType::uint32, "neighbor-graceful-restart-stalepath-time"},
    neighbor_graceful_restart_time{YType::uint32, "neighbor-graceful-restart-time"},
    neighbor_group_add_member{YType::str, "neighbor-group-add-member"},
    propagate_dmz_link_bandwidth{YType::boolean, "propagate-dmz-link-bandwidth"},
    remote_as_list{YType::str, "remote-as-list"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    session_group_add_member{YType::str, "session-group-add-member"},
    session_open_mode{YType::enumeration, "session-open-mode"},
    shutdown{YType::boolean, "shutdown"},
    suppress_all_capabilities{YType::boolean, "suppress-all-capabilities"},
    suppress_four_byte_as_capability{YType::boolean, "suppress-four-byte-as-capability"},
    ttl_security{YType::boolean, "ttl-security"},
    update_source_interface{YType::str, "update-source-interface"}
    	,
    advertisement_interval(nullptr) // presence node
	,bmp_activates(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates>())
	,ebgp_multihop(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop>())
	,graceful_maintenance(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance>())
	,keychain(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain>())
	,local_address(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress>())
	,local_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs>())
	,msg_log_in(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn>())
	,msg_log_out(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut>())
	,neighbor_afs(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs>())
	,neighbor_cluster_id(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId>())
	,password(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password>())
	,receive_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize>())
	,remote_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs>())
	,send_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize>())
	,tcpmss(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss>())
	,timers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers>())
	,tos(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos>())
	,update_in_filtering(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering>())
{
    bmp_activates->parent = this;
    children["bmp-activates"] = bmp_activates;

    ebgp_multihop->parent = this;
    children["ebgp-multihop"] = ebgp_multihop;

    graceful_maintenance->parent = this;
    children["graceful-maintenance"] = graceful_maintenance;

    keychain->parent = this;
    children["keychain"] = keychain;

    local_address->parent = this;
    children["local-address"] = local_address;

    local_as->parent = this;
    children["local-as"] = local_as;

    msg_log_in->parent = this;
    children["msg-log-in"] = msg_log_in;

    msg_log_out->parent = this;
    children["msg-log-out"] = msg_log_out;

    neighbor_afs->parent = this;
    children["neighbor-afs"] = neighbor_afs;

    neighbor_cluster_id->parent = this;
    children["neighbor-cluster-id"] = neighbor_cluster_id;

    password->parent = this;
    children["password"] = password;

    receive_buffer_size->parent = this;
    children["receive-buffer-size"] = receive_buffer_size;

    remote_as->parent = this;
    children["remote-as"] = remote_as;

    send_buffer_size->parent = this;
    children["send-buffer-size"] = send_buffer_size;

    tcpmss->parent = this;
    children["tcpmss"] = tcpmss;

    timers->parent = this;
    children["timers"] = timers;

    tos->parent = this;
    children["tos"] = tos;

    update_in_filtering->parent = this;
    children["update-in-filtering"] = update_in_filtering;

    yang_name = "neighbor-prefix-length"; yang_parent_name = "neighbors";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::~NeighborPrefixLength()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::has_data() const
{
    return neighbor_address.is_set
	|| prefix_length.is_set
	|| additional_paths_receive_capability.is_set
	|| additional_paths_send_capability.is_set
	|| bfd_enable_modes.is_set
	|| bfd_minimum_interval.is_set
	|| bfd_multiplier.is_set
	|| description.is_set
	|| ebgp_recv_dmz.is_set
	|| ebgp_send_dmz_enable_modes.is_set
	|| egress_peer_engineering.is_set
	|| enforce_first_as.is_set
	|| idle_watch_time.is_set
	|| ignore_connected_check_ebgp.is_set
	|| internal_vpn_client_ibgpce.is_set
	|| max_peers.is_set
	|| neighbor_graceful_restart.is_set
	|| neighbor_graceful_restart_stalepath_time.is_set
	|| neighbor_graceful_restart_time.is_set
	|| neighbor_group_add_member.is_set
	|| propagate_dmz_link_bandwidth.is_set
	|| remote_as_list.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| session_group_add_member.is_set
	|| session_open_mode.is_set
	|| shutdown.is_set
	|| suppress_all_capabilities.is_set
	|| suppress_four_byte_as_capability.is_set
	|| ttl_security.is_set
	|| update_source_interface.is_set
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_data())
	|| (bmp_activates !=  nullptr && bmp_activates->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_data())
	|| (keychain !=  nullptr && keychain->has_data())
	|| (local_address !=  nullptr && local_address->has_data())
	|| (local_as !=  nullptr && local_as->has_data())
	|| (msg_log_in !=  nullptr && msg_log_in->has_data())
	|| (msg_log_out !=  nullptr && msg_log_out->has_data())
	|| (neighbor_afs !=  nullptr && neighbor_afs->has_data())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_data())
	|| (remote_as !=  nullptr && remote_as->has_data())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_data())
	|| (tcpmss !=  nullptr && tcpmss->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (tos !=  nullptr && tos->has_data())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(prefix_length.operation)
	|| is_set(additional_paths_receive_capability.operation)
	|| is_set(additional_paths_send_capability.operation)
	|| is_set(bfd_enable_modes.operation)
	|| is_set(bfd_minimum_interval.operation)
	|| is_set(bfd_multiplier.operation)
	|| is_set(description.operation)
	|| is_set(ebgp_recv_dmz.operation)
	|| is_set(ebgp_send_dmz_enable_modes.operation)
	|| is_set(egress_peer_engineering.operation)
	|| is_set(enforce_first_as.operation)
	|| is_set(idle_watch_time.operation)
	|| is_set(ignore_connected_check_ebgp.operation)
	|| is_set(internal_vpn_client_ibgpce.operation)
	|| is_set(max_peers.operation)
	|| is_set(neighbor_graceful_restart.operation)
	|| is_set(neighbor_graceful_restart_stalepath_time.operation)
	|| is_set(neighbor_graceful_restart_time.operation)
	|| is_set(neighbor_group_add_member.operation)
	|| is_set(propagate_dmz_link_bandwidth.operation)
	|| is_set(remote_as_list.operation)
	|| is_set(rpki_bestpath_origin_as_allow_invalid.operation)
	|| is_set(rpki_origin_as_validation_disable.operation)
	|| is_set(session_group_add_member.operation)
	|| is_set(session_open_mode.operation)
	|| is_set(shutdown.operation)
	|| is_set(suppress_all_capabilities.operation)
	|| is_set(suppress_four_byte_as_capability.operation)
	|| is_set(ttl_security.operation)
	|| is_set(update_source_interface.operation)
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_operation())
	|| (bmp_activates !=  nullptr && bmp_activates->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_operation())
	|| (keychain !=  nullptr && keychain->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (local_as !=  nullptr && local_as->has_operation())
	|| (msg_log_in !=  nullptr && msg_log_in->has_operation())
	|| (msg_log_out !=  nullptr && msg_log_out->has_operation())
	|| (neighbor_afs !=  nullptr && neighbor_afs->has_operation())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_operation())
	|| (remote_as !=  nullptr && remote_as->has_operation())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_operation())
	|| (tcpmss !=  nullptr && tcpmss->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (tos !=  nullptr && tos->has_operation())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-prefix-length" <<"[neighbor-address='" <<neighbor_address <<"']" <<"[prefix-length='" <<prefix_length <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborPrefixLength' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (additional_paths_receive_capability.is_set || is_set(additional_paths_receive_capability.operation)) leaf_name_data.push_back(additional_paths_receive_capability.get_name_leafdata());
    if (additional_paths_send_capability.is_set || is_set(additional_paths_send_capability.operation)) leaf_name_data.push_back(additional_paths_send_capability.get_name_leafdata());
    if (bfd_enable_modes.is_set || is_set(bfd_enable_modes.operation)) leaf_name_data.push_back(bfd_enable_modes.get_name_leafdata());
    if (bfd_minimum_interval.is_set || is_set(bfd_minimum_interval.operation)) leaf_name_data.push_back(bfd_minimum_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.operation)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (ebgp_recv_dmz.is_set || is_set(ebgp_recv_dmz.operation)) leaf_name_data.push_back(ebgp_recv_dmz.get_name_leafdata());
    if (ebgp_send_dmz_enable_modes.is_set || is_set(ebgp_send_dmz_enable_modes.operation)) leaf_name_data.push_back(ebgp_send_dmz_enable_modes.get_name_leafdata());
    if (egress_peer_engineering.is_set || is_set(egress_peer_engineering.operation)) leaf_name_data.push_back(egress_peer_engineering.get_name_leafdata());
    if (enforce_first_as.is_set || is_set(enforce_first_as.operation)) leaf_name_data.push_back(enforce_first_as.get_name_leafdata());
    if (idle_watch_time.is_set || is_set(idle_watch_time.operation)) leaf_name_data.push_back(idle_watch_time.get_name_leafdata());
    if (ignore_connected_check_ebgp.is_set || is_set(ignore_connected_check_ebgp.operation)) leaf_name_data.push_back(ignore_connected_check_ebgp.get_name_leafdata());
    if (internal_vpn_client_ibgpce.is_set || is_set(internal_vpn_client_ibgpce.operation)) leaf_name_data.push_back(internal_vpn_client_ibgpce.get_name_leafdata());
    if (max_peers.is_set || is_set(max_peers.operation)) leaf_name_data.push_back(max_peers.get_name_leafdata());
    if (neighbor_graceful_restart.is_set || is_set(neighbor_graceful_restart.operation)) leaf_name_data.push_back(neighbor_graceful_restart.get_name_leafdata());
    if (neighbor_graceful_restart_stalepath_time.is_set || is_set(neighbor_graceful_restart_stalepath_time.operation)) leaf_name_data.push_back(neighbor_graceful_restart_stalepath_time.get_name_leafdata());
    if (neighbor_graceful_restart_time.is_set || is_set(neighbor_graceful_restart_time.operation)) leaf_name_data.push_back(neighbor_graceful_restart_time.get_name_leafdata());
    if (neighbor_group_add_member.is_set || is_set(neighbor_group_add_member.operation)) leaf_name_data.push_back(neighbor_group_add_member.get_name_leafdata());
    if (propagate_dmz_link_bandwidth.is_set || is_set(propagate_dmz_link_bandwidth.operation)) leaf_name_data.push_back(propagate_dmz_link_bandwidth.get_name_leafdata());
    if (remote_as_list.is_set || is_set(remote_as_list.operation)) leaf_name_data.push_back(remote_as_list.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.operation)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.operation)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (session_group_add_member.is_set || is_set(session_group_add_member.operation)) leaf_name_data.push_back(session_group_add_member.get_name_leafdata());
    if (session_open_mode.is_set || is_set(session_open_mode.operation)) leaf_name_data.push_back(session_open_mode.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (suppress_all_capabilities.is_set || is_set(suppress_all_capabilities.operation)) leaf_name_data.push_back(suppress_all_capabilities.get_name_leafdata());
    if (suppress_four_byte_as_capability.is_set || is_set(suppress_four_byte_as_capability.operation)) leaf_name_data.push_back(suppress_four_byte_as_capability.get_name_leafdata());
    if (ttl_security.is_set || is_set(ttl_security.operation)) leaf_name_data.push_back(ttl_security.get_name_leafdata());
    if (update_source_interface.is_set || is_set(update_source_interface.operation)) leaf_name_data.push_back(update_source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "advertisement-interval")
    {
        if(advertisement_interval != nullptr)
        {
            children["advertisement-interval"] = advertisement_interval;
        }
        else
        {
            advertisement_interval = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::AdvertisementInterval>();
            advertisement_interval->parent = this;
            children["advertisement-interval"] = advertisement_interval;
        }
        return children.at("advertisement-interval");
    }

    if(child_yang_name == "bmp-activates")
    {
        if(bmp_activates != nullptr)
        {
            children["bmp-activates"] = bmp_activates;
        }
        else
        {
            bmp_activates = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates>();
            bmp_activates->parent = this;
            children["bmp-activates"] = bmp_activates;
        }
        return children.at("bmp-activates");
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop != nullptr)
        {
            children["ebgp-multihop"] = ebgp_multihop;
        }
        else
        {
            ebgp_multihop = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop>();
            ebgp_multihop->parent = this;
            children["ebgp-multihop"] = ebgp_multihop;
        }
        return children.at("ebgp-multihop");
    }

    if(child_yang_name == "graceful-maintenance")
    {
        if(graceful_maintenance != nullptr)
        {
            children["graceful-maintenance"] = graceful_maintenance;
        }
        else
        {
            graceful_maintenance = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance>();
            graceful_maintenance->parent = this;
            children["graceful-maintenance"] = graceful_maintenance;
        }
        return children.at("graceful-maintenance");
    }

    if(child_yang_name == "keychain")
    {
        if(keychain != nullptr)
        {
            children["keychain"] = keychain;
        }
        else
        {
            keychain = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain>();
            keychain->parent = this;
            children["keychain"] = keychain;
        }
        return children.at("keychain");
    }

    if(child_yang_name == "local-address")
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address;
        }
        else
        {
            local_address = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress>();
            local_address->parent = this;
            children["local-address"] = local_address;
        }
        return children.at("local-address");
    }

    if(child_yang_name == "local-as")
    {
        if(local_as != nullptr)
        {
            children["local-as"] = local_as;
        }
        else
        {
            local_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs>();
            local_as->parent = this;
            children["local-as"] = local_as;
        }
        return children.at("local-as");
    }

    if(child_yang_name == "msg-log-in")
    {
        if(msg_log_in != nullptr)
        {
            children["msg-log-in"] = msg_log_in;
        }
        else
        {
            msg_log_in = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn>();
            msg_log_in->parent = this;
            children["msg-log-in"] = msg_log_in;
        }
        return children.at("msg-log-in");
    }

    if(child_yang_name == "msg-log-out")
    {
        if(msg_log_out != nullptr)
        {
            children["msg-log-out"] = msg_log_out;
        }
        else
        {
            msg_log_out = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut>();
            msg_log_out->parent = this;
            children["msg-log-out"] = msg_log_out;
        }
        return children.at("msg-log-out");
    }

    if(child_yang_name == "neighbor-afs")
    {
        if(neighbor_afs != nullptr)
        {
            children["neighbor-afs"] = neighbor_afs;
        }
        else
        {
            neighbor_afs = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs>();
            neighbor_afs->parent = this;
            children["neighbor-afs"] = neighbor_afs;
        }
        return children.at("neighbor-afs");
    }

    if(child_yang_name == "neighbor-cluster-id")
    {
        if(neighbor_cluster_id != nullptr)
        {
            children["neighbor-cluster-id"] = neighbor_cluster_id;
        }
        else
        {
            neighbor_cluster_id = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId>();
            neighbor_cluster_id->parent = this;
            children["neighbor-cluster-id"] = neighbor_cluster_id;
        }
        return children.at("neighbor-cluster-id");
    }

    if(child_yang_name == "password")
    {
        if(password != nullptr)
        {
            children["password"] = password;
        }
        else
        {
            password = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password>();
            password->parent = this;
            children["password"] = password;
        }
        return children.at("password");
    }

    if(child_yang_name == "receive-buffer-size")
    {
        if(receive_buffer_size != nullptr)
        {
            children["receive-buffer-size"] = receive_buffer_size;
        }
        else
        {
            receive_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize>();
            receive_buffer_size->parent = this;
            children["receive-buffer-size"] = receive_buffer_size;
        }
        return children.at("receive-buffer-size");
    }

    if(child_yang_name == "remote-as")
    {
        if(remote_as != nullptr)
        {
            children["remote-as"] = remote_as;
        }
        else
        {
            remote_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs>();
            remote_as->parent = this;
            children["remote-as"] = remote_as;
        }
        return children.at("remote-as");
    }

    if(child_yang_name == "send-buffer-size")
    {
        if(send_buffer_size != nullptr)
        {
            children["send-buffer-size"] = send_buffer_size;
        }
        else
        {
            send_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize>();
            send_buffer_size->parent = this;
            children["send-buffer-size"] = send_buffer_size;
        }
        return children.at("send-buffer-size");
    }

    if(child_yang_name == "tcpmss")
    {
        if(tcpmss != nullptr)
        {
            children["tcpmss"] = tcpmss;
        }
        else
        {
            tcpmss = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss>();
            tcpmss->parent = this;
            children["tcpmss"] = tcpmss;
        }
        return children.at("tcpmss");
    }

    if(child_yang_name == "timers")
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
        else
        {
            timers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers>();
            timers->parent = this;
            children["timers"] = timers;
        }
        return children.at("timers");
    }

    if(child_yang_name == "tos")
    {
        if(tos != nullptr)
        {
            children["tos"] = tos;
        }
        else
        {
            tos = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos>();
            tos->parent = this;
            children["tos"] = tos;
        }
        return children.at("tos");
    }

    if(child_yang_name == "update-in-filtering")
    {
        if(update_in_filtering != nullptr)
        {
            children["update-in-filtering"] = update_in_filtering;
        }
        else
        {
            update_in_filtering = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering>();
            update_in_filtering->parent = this;
            children["update-in-filtering"] = update_in_filtering;
        }
        return children.at("update-in-filtering");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::get_children()
{
    if(children.find("advertisement-interval") == children.end())
    {
        if(advertisement_interval != nullptr)
        {
            children["advertisement-interval"] = advertisement_interval;
        }
    }

    if(children.find("bmp-activates") == children.end())
    {
        if(bmp_activates != nullptr)
        {
            children["bmp-activates"] = bmp_activates;
        }
    }

    if(children.find("ebgp-multihop") == children.end())
    {
        if(ebgp_multihop != nullptr)
        {
            children["ebgp-multihop"] = ebgp_multihop;
        }
    }

    if(children.find("graceful-maintenance") == children.end())
    {
        if(graceful_maintenance != nullptr)
        {
            children["graceful-maintenance"] = graceful_maintenance;
        }
    }

    if(children.find("keychain") == children.end())
    {
        if(keychain != nullptr)
        {
            children["keychain"] = keychain;
        }
    }

    if(children.find("local-address") == children.end())
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address;
        }
    }

    if(children.find("local-as") == children.end())
    {
        if(local_as != nullptr)
        {
            children["local-as"] = local_as;
        }
    }

    if(children.find("msg-log-in") == children.end())
    {
        if(msg_log_in != nullptr)
        {
            children["msg-log-in"] = msg_log_in;
        }
    }

    if(children.find("msg-log-out") == children.end())
    {
        if(msg_log_out != nullptr)
        {
            children["msg-log-out"] = msg_log_out;
        }
    }

    if(children.find("neighbor-afs") == children.end())
    {
        if(neighbor_afs != nullptr)
        {
            children["neighbor-afs"] = neighbor_afs;
        }
    }

    if(children.find("neighbor-cluster-id") == children.end())
    {
        if(neighbor_cluster_id != nullptr)
        {
            children["neighbor-cluster-id"] = neighbor_cluster_id;
        }
    }

    if(children.find("password") == children.end())
    {
        if(password != nullptr)
        {
            children["password"] = password;
        }
    }

    if(children.find("receive-buffer-size") == children.end())
    {
        if(receive_buffer_size != nullptr)
        {
            children["receive-buffer-size"] = receive_buffer_size;
        }
    }

    if(children.find("remote-as") == children.end())
    {
        if(remote_as != nullptr)
        {
            children["remote-as"] = remote_as;
        }
    }

    if(children.find("send-buffer-size") == children.end())
    {
        if(send_buffer_size != nullptr)
        {
            children["send-buffer-size"] = send_buffer_size;
        }
    }

    if(children.find("tcpmss") == children.end())
    {
        if(tcpmss != nullptr)
        {
            children["tcpmss"] = tcpmss;
        }
    }

    if(children.find("timers") == children.end())
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
    }

    if(children.find("tos") == children.end())
    {
        if(tos != nullptr)
        {
            children["tos"] = tos;
        }
    }

    if(children.find("update-in-filtering") == children.end())
    {
        if(update_in_filtering != nullptr)
        {
            children["update-in-filtering"] = update_in_filtering;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "additional-paths-receive-capability")
    {
        additional_paths_receive_capability = value;
    }
    if(value_path == "additional-paths-send-capability")
    {
        additional_paths_send_capability = value;
    }
    if(value_path == "bfd-enable-modes")
    {
        bfd_enable_modes = value;
    }
    if(value_path == "bfd-minimum-interval")
    {
        bfd_minimum_interval = value;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz = value;
    }
    if(value_path == "ebgp-send-dmz-enable-modes")
    {
        ebgp_send_dmz_enable_modes = value;
    }
    if(value_path == "egress-peer-engineering")
    {
        egress_peer_engineering = value;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as = value;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time = value;
    }
    if(value_path == "ignore-connected-check-ebgp")
    {
        ignore_connected_check_ebgp = value;
    }
    if(value_path == "internal-vpn-client-ibgpce")
    {
        internal_vpn_client_ibgpce = value;
    }
    if(value_path == "max-peers")
    {
        max_peers = value;
    }
    if(value_path == "neighbor-graceful-restart")
    {
        neighbor_graceful_restart = value;
    }
    if(value_path == "neighbor-graceful-restart-stalepath-time")
    {
        neighbor_graceful_restart_stalepath_time = value;
    }
    if(value_path == "neighbor-graceful-restart-time")
    {
        neighbor_graceful_restart_time = value;
    }
    if(value_path == "neighbor-group-add-member")
    {
        neighbor_group_add_member = value;
    }
    if(value_path == "propagate-dmz-link-bandwidth")
    {
        propagate_dmz_link_bandwidth = value;
    }
    if(value_path == "remote-as-list")
    {
        remote_as_list = value;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
    }
    if(value_path == "session-group-add-member")
    {
        session_group_add_member = value;
    }
    if(value_path == "session-open-mode")
    {
        session_open_mode = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "suppress-all-capabilities")
    {
        suppress_all_capabilities = value;
    }
    if(value_path == "suppress-four-byte-as-capability")
    {
        suppress_four_byte_as_capability = value;
    }
    if(value_path == "ttl-security")
    {
        ttl_security = value;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAfs()
{
    yang_name = "neighbor-afs"; yang_parent_name = "neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::~NeighborAfs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::has_data() const
{
    for (std::size_t index=0; index<neighbor_af.size(); index++)
    {
        if(neighbor_af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::has_operation() const
{
    for (std::size_t index=0; index<neighbor_af.size(); index++)
    {
        if(neighbor_af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-afs";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAfs' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-af")
    {
        for(auto const & c : neighbor_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf>();
        c->parent = this;
        neighbor_af.push_back(std::move(c));
        children[segment_path] = neighbor_af.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::get_children()
{
    for (auto const & c : neighbor_af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAf()
    :
    af_name{YType::enumeration, "af-name"},
    accept_own{YType::boolean, "accept-own"},
    accept_route_legacy_rt{YType::boolean, "accept-route-legacy-rt"},
    activate{YType::empty, "activate"},
    advertise_local_labeled_route{YType::enumeration, "advertise-local-labeled-route"},
    advertise_orf{YType::enumeration, "advertise-orf"},
    advertise_permanent_network{YType::empty, "advertise-permanent-network"},
    af_group{YType::str, "af-group"},
    aigp{YType::enumeration, "aigp"},
    aigp_send_med{YType::enumeration, "aigp-send-med"},
    allow_as_in{YType::uint32, "allow-as-in"},
    as_override{YType::boolean, "as-override"},
    default_weight{YType::uint32, "default-weight"},
    encapsulation_type{YType::enumeration, "encapsulation-type"},
    flowspec_validation{YType::enumeration, "flowspec-validation"},
    l2vpn_signalling{YType::enumeration, "l2vpn-signalling"},
    multipath{YType::empty, "multipath"},
    neighbor_af_long_lived_graceful_restart_capable{YType::boolean, "neighbor-af-long-lived-graceful-restart-capable"},
    next_hop_self{YType::boolean, "next-hop-self"},
    next_hop_unchanged{YType::boolean, "next-hop-unchanged"},
    next_hop_unchanged_multipath{YType::boolean, "next-hop-unchanged-multipath"},
    prefix_orf_policy{YType::str, "prefix-orf-policy"},
    route_policy_in{YType::str, "route-policy-in"},
    route_policy_out{YType::str, "route-policy-out"},
    route_reflector_client{YType::boolean, "route-reflector-client"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    send_community_ebgp{YType::boolean, "send-community-ebgp"},
    send_community_ebgp_graceful_shutdown{YType::boolean, "send-community-ebgp-graceful-shutdown"},
    send_ext_community_ebgp{YType::boolean, "send-ext-community-ebgp"},
    send_multicast_attr{YType::enumeration, "send-multicast-attr"}
    	,
    advertise_def_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4>())
	,advertise_def_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6>())
	,advertise_disable(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable>())
	,advertise_l2vpnevpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn>())
	,advertise_local_l2vpnevpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn>())
	,advertise_local_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4>())
	,advertise_local_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6>())
	,advertise_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4>())
	,advertise_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6>())
	,advertise_vrf_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4>())
	,advertise_vrf_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6>())
	,aigp_cost_community(nullptr) // presence node
	,default_originate(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate>())
	,import(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import>())
	,maximum_prefixes(nullptr) // presence node
	,neighbor_af_long_lived_graceful_restart_stale_time(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime>())
	,remove_private_as_entire_as_path(nullptr) // presence node
	,remove_private_as_entire_as_path_inbound(nullptr) // presence node
	,soft_reconfiguration(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration>())
{
    advertise_def_imp_disable_v4->parent = this;
    children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;

    advertise_def_imp_disable_v6->parent = this;
    children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;

    advertise_disable->parent = this;
    children["advertise-disable"] = advertise_disable;

    advertise_l2vpnevpn->parent = this;
    children["advertise-l2vpnevpn"] = advertise_l2vpnevpn;

    advertise_local_l2vpnevpn->parent = this;
    children["advertise-local-l2vpnevpn"] = advertise_local_l2vpnevpn;

    advertise_local_v4->parent = this;
    children["advertise-local-v4"] = advertise_local_v4;

    advertise_local_v6->parent = this;
    children["advertise-local-v6"] = advertise_local_v6;

    advertise_v4->parent = this;
    children["advertise-v4"] = advertise_v4;

    advertise_v6->parent = this;
    children["advertise-v6"] = advertise_v6;

    advertise_vrf_imp_disable_v4->parent = this;
    children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;

    advertise_vrf_imp_disable_v6->parent = this;
    children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;

    default_originate->parent = this;
    children["default-originate"] = default_originate;

    import->parent = this;
    children["import"] = import;

    neighbor_af_long_lived_graceful_restart_stale_time->parent = this;
    children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;

    soft_reconfiguration->parent = this;
    children["soft-reconfiguration"] = soft_reconfiguration;

    yang_name = "neighbor-af"; yang_parent_name = "neighbor-afs";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::~NeighborAf()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::has_data() const
{
    return af_name.is_set
	|| accept_own.is_set
	|| accept_route_legacy_rt.is_set
	|| activate.is_set
	|| advertise_local_labeled_route.is_set
	|| advertise_orf.is_set
	|| advertise_permanent_network.is_set
	|| af_group.is_set
	|| aigp.is_set
	|| aigp_send_med.is_set
	|| allow_as_in.is_set
	|| as_override.is_set
	|| default_weight.is_set
	|| encapsulation_type.is_set
	|| flowspec_validation.is_set
	|| l2vpn_signalling.is_set
	|| multipath.is_set
	|| neighbor_af_long_lived_graceful_restart_capable.is_set
	|| next_hop_self.is_set
	|| next_hop_unchanged.is_set
	|| next_hop_unchanged_multipath.is_set
	|| prefix_orf_policy.is_set
	|| route_policy_in.is_set
	|| route_policy_out.is_set
	|| route_reflector_client.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| send_community_ebgp.is_set
	|| send_community_ebgp_graceful_shutdown.is_set
	|| send_ext_community_ebgp.is_set
	|| send_multicast_attr.is_set
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_data())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_data())
	|| (advertise_disable !=  nullptr && advertise_disable->has_data())
	|| (advertise_l2vpnevpn !=  nullptr && advertise_l2vpnevpn->has_data())
	|| (advertise_local_l2vpnevpn !=  nullptr && advertise_local_l2vpnevpn->has_data())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_data())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_data())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_data())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_data())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_data())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_data())
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_data())
	|| (default_originate !=  nullptr && default_originate->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_data())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_data())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_data())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_data())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(accept_own.operation)
	|| is_set(accept_route_legacy_rt.operation)
	|| is_set(activate.operation)
	|| is_set(advertise_local_labeled_route.operation)
	|| is_set(advertise_orf.operation)
	|| is_set(advertise_permanent_network.operation)
	|| is_set(af_group.operation)
	|| is_set(aigp.operation)
	|| is_set(aigp_send_med.operation)
	|| is_set(allow_as_in.operation)
	|| is_set(as_override.operation)
	|| is_set(default_weight.operation)
	|| is_set(encapsulation_type.operation)
	|| is_set(flowspec_validation.operation)
	|| is_set(l2vpn_signalling.operation)
	|| is_set(multipath.operation)
	|| is_set(neighbor_af_long_lived_graceful_restart_capable.operation)
	|| is_set(next_hop_self.operation)
	|| is_set(next_hop_unchanged.operation)
	|| is_set(next_hop_unchanged_multipath.operation)
	|| is_set(prefix_orf_policy.operation)
	|| is_set(route_policy_in.operation)
	|| is_set(route_policy_out.operation)
	|| is_set(route_reflector_client.operation)
	|| is_set(rpki_bestpath_origin_as_allow_invalid.operation)
	|| is_set(rpki_origin_as_validation_disable.operation)
	|| is_set(send_community_ebgp.operation)
	|| is_set(send_community_ebgp_graceful_shutdown.operation)
	|| is_set(send_ext_community_ebgp.operation)
	|| is_set(send_multicast_attr.operation)
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_operation())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_operation())
	|| (advertise_disable !=  nullptr && advertise_disable->has_operation())
	|| (advertise_l2vpnevpn !=  nullptr && advertise_l2vpnevpn->has_operation())
	|| (advertise_local_l2vpnevpn !=  nullptr && advertise_local_l2vpnevpn->has_operation())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_operation())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_operation())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_operation())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_operation())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_operation())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_operation())
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_operation())
	|| (default_originate !=  nullptr && default_originate->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_operation())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_operation())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_operation())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_operation())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAf' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (accept_own.is_set || is_set(accept_own.operation)) leaf_name_data.push_back(accept_own.get_name_leafdata());
    if (accept_route_legacy_rt.is_set || is_set(accept_route_legacy_rt.operation)) leaf_name_data.push_back(accept_route_legacy_rt.get_name_leafdata());
    if (activate.is_set || is_set(activate.operation)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (advertise_local_labeled_route.is_set || is_set(advertise_local_labeled_route.operation)) leaf_name_data.push_back(advertise_local_labeled_route.get_name_leafdata());
    if (advertise_orf.is_set || is_set(advertise_orf.operation)) leaf_name_data.push_back(advertise_orf.get_name_leafdata());
    if (advertise_permanent_network.is_set || is_set(advertise_permanent_network.operation)) leaf_name_data.push_back(advertise_permanent_network.get_name_leafdata());
    if (af_group.is_set || is_set(af_group.operation)) leaf_name_data.push_back(af_group.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.operation)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (aigp_send_med.is_set || is_set(aigp_send_med.operation)) leaf_name_data.push_back(aigp_send_med.get_name_leafdata());
    if (allow_as_in.is_set || is_set(allow_as_in.operation)) leaf_name_data.push_back(allow_as_in.get_name_leafdata());
    if (as_override.is_set || is_set(as_override.operation)) leaf_name_data.push_back(as_override.get_name_leafdata());
    if (default_weight.is_set || is_set(default_weight.operation)) leaf_name_data.push_back(default_weight.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.operation)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (flowspec_validation.is_set || is_set(flowspec_validation.operation)) leaf_name_data.push_back(flowspec_validation.get_name_leafdata());
    if (l2vpn_signalling.is_set || is_set(l2vpn_signalling.operation)) leaf_name_data.push_back(l2vpn_signalling.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.operation)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (neighbor_af_long_lived_graceful_restart_capable.is_set || is_set(neighbor_af_long_lived_graceful_restart_capable.operation)) leaf_name_data.push_back(neighbor_af_long_lived_graceful_restart_capable.get_name_leafdata());
    if (next_hop_self.is_set || is_set(next_hop_self.operation)) leaf_name_data.push_back(next_hop_self.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.operation)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (next_hop_unchanged_multipath.is_set || is_set(next_hop_unchanged_multipath.operation)) leaf_name_data.push_back(next_hop_unchanged_multipath.get_name_leafdata());
    if (prefix_orf_policy.is_set || is_set(prefix_orf_policy.operation)) leaf_name_data.push_back(prefix_orf_policy.get_name_leafdata());
    if (route_policy_in.is_set || is_set(route_policy_in.operation)) leaf_name_data.push_back(route_policy_in.get_name_leafdata());
    if (route_policy_out.is_set || is_set(route_policy_out.operation)) leaf_name_data.push_back(route_policy_out.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.operation)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.operation)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.operation)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (send_community_ebgp.is_set || is_set(send_community_ebgp.operation)) leaf_name_data.push_back(send_community_ebgp.get_name_leafdata());
    if (send_community_ebgp_graceful_shutdown.is_set || is_set(send_community_ebgp_graceful_shutdown.operation)) leaf_name_data.push_back(send_community_ebgp_graceful_shutdown.get_name_leafdata());
    if (send_ext_community_ebgp.is_set || is_set(send_ext_community_ebgp.operation)) leaf_name_data.push_back(send_ext_community_ebgp.get_name_leafdata());
    if (send_multicast_attr.is_set || is_set(send_multicast_attr.operation)) leaf_name_data.push_back(send_multicast_attr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "advertise-def-imp-disable-v4")
    {
        if(advertise_def_imp_disable_v4 != nullptr)
        {
            children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;
        }
        else
        {
            advertise_def_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4>();
            advertise_def_imp_disable_v4->parent = this;
            children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;
        }
        return children.at("advertise-def-imp-disable-v4");
    }

    if(child_yang_name == "advertise-def-imp-disable-v6")
    {
        if(advertise_def_imp_disable_v6 != nullptr)
        {
            children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;
        }
        else
        {
            advertise_def_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6>();
            advertise_def_imp_disable_v6->parent = this;
            children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;
        }
        return children.at("advertise-def-imp-disable-v6");
    }

    if(child_yang_name == "advertise-disable")
    {
        if(advertise_disable != nullptr)
        {
            children["advertise-disable"] = advertise_disable;
        }
        else
        {
            advertise_disable = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable>();
            advertise_disable->parent = this;
            children["advertise-disable"] = advertise_disable;
        }
        return children.at("advertise-disable");
    }

    if(child_yang_name == "advertise-l2vpnevpn")
    {
        if(advertise_l2vpnevpn != nullptr)
        {
            children["advertise-l2vpnevpn"] = advertise_l2vpnevpn;
        }
        else
        {
            advertise_l2vpnevpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn>();
            advertise_l2vpnevpn->parent = this;
            children["advertise-l2vpnevpn"] = advertise_l2vpnevpn;
        }
        return children.at("advertise-l2vpnevpn");
    }

    if(child_yang_name == "advertise-local-l2vpnevpn")
    {
        if(advertise_local_l2vpnevpn != nullptr)
        {
            children["advertise-local-l2vpnevpn"] = advertise_local_l2vpnevpn;
        }
        else
        {
            advertise_local_l2vpnevpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn>();
            advertise_local_l2vpnevpn->parent = this;
            children["advertise-local-l2vpnevpn"] = advertise_local_l2vpnevpn;
        }
        return children.at("advertise-local-l2vpnevpn");
    }

    if(child_yang_name == "advertise-local-v4")
    {
        if(advertise_local_v4 != nullptr)
        {
            children["advertise-local-v4"] = advertise_local_v4;
        }
        else
        {
            advertise_local_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4>();
            advertise_local_v4->parent = this;
            children["advertise-local-v4"] = advertise_local_v4;
        }
        return children.at("advertise-local-v4");
    }

    if(child_yang_name == "advertise-local-v6")
    {
        if(advertise_local_v6 != nullptr)
        {
            children["advertise-local-v6"] = advertise_local_v6;
        }
        else
        {
            advertise_local_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6>();
            advertise_local_v6->parent = this;
            children["advertise-local-v6"] = advertise_local_v6;
        }
        return children.at("advertise-local-v6");
    }

    if(child_yang_name == "advertise-v4")
    {
        if(advertise_v4 != nullptr)
        {
            children["advertise-v4"] = advertise_v4;
        }
        else
        {
            advertise_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4>();
            advertise_v4->parent = this;
            children["advertise-v4"] = advertise_v4;
        }
        return children.at("advertise-v4");
    }

    if(child_yang_name == "advertise-v6")
    {
        if(advertise_v6 != nullptr)
        {
            children["advertise-v6"] = advertise_v6;
        }
        else
        {
            advertise_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6>();
            advertise_v6->parent = this;
            children["advertise-v6"] = advertise_v6;
        }
        return children.at("advertise-v6");
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v4")
    {
        if(advertise_vrf_imp_disable_v4 != nullptr)
        {
            children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;
        }
        else
        {
            advertise_vrf_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4>();
            advertise_vrf_imp_disable_v4->parent = this;
            children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;
        }
        return children.at("advertise-vrf-imp-disable-v4");
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v6")
    {
        if(advertise_vrf_imp_disable_v6 != nullptr)
        {
            children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;
        }
        else
        {
            advertise_vrf_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6>();
            advertise_vrf_imp_disable_v6->parent = this;
            children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;
        }
        return children.at("advertise-vrf-imp-disable-v6");
    }

    if(child_yang_name == "aigp-cost-community")
    {
        if(aigp_cost_community != nullptr)
        {
            children["aigp-cost-community"] = aigp_cost_community;
        }
        else
        {
            aigp_cost_community = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AigpCostCommunity>();
            aigp_cost_community->parent = this;
            children["aigp-cost-community"] = aigp_cost_community;
        }
        return children.at("aigp-cost-community");
    }

    if(child_yang_name == "default-originate")
    {
        if(default_originate != nullptr)
        {
            children["default-originate"] = default_originate;
        }
        else
        {
            default_originate = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate>();
            default_originate->parent = this;
            children["default-originate"] = default_originate;
        }
        return children.at("default-originate");
    }

    if(child_yang_name == "import")
    {
        if(import != nullptr)
        {
            children["import"] = import;
        }
        else
        {
            import = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import>();
            import->parent = this;
            children["import"] = import;
        }
        return children.at("import");
    }

    if(child_yang_name == "maximum-prefixes")
    {
        if(maximum_prefixes != nullptr)
        {
            children["maximum-prefixes"] = maximum_prefixes;
        }
        else
        {
            maximum_prefixes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::MaximumPrefixes>();
            maximum_prefixes->parent = this;
            children["maximum-prefixes"] = maximum_prefixes;
        }
        return children.at("maximum-prefixes");
    }

    if(child_yang_name == "neighbor-af-long-lived-graceful-restart-stale-time")
    {
        if(neighbor_af_long_lived_graceful_restart_stale_time != nullptr)
        {
            children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;
        }
        else
        {
            neighbor_af_long_lived_graceful_restart_stale_time = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime>();
            neighbor_af_long_lived_graceful_restart_stale_time->parent = this;
            children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;
        }
        return children.at("neighbor-af-long-lived-graceful-restart-stale-time");
    }

    if(child_yang_name == "remove-private-as-entire-as-path")
    {
        if(remove_private_as_entire_as_path != nullptr)
        {
            children["remove-private-as-entire-as-path"] = remove_private_as_entire_as_path;
        }
        else
        {
            remove_private_as_entire_as_path = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath>();
            remove_private_as_entire_as_path->parent = this;
            children["remove-private-as-entire-as-path"] = remove_private_as_entire_as_path;
        }
        return children.at("remove-private-as-entire-as-path");
    }

    if(child_yang_name == "remove-private-as-entire-as-path-inbound")
    {
        if(remove_private_as_entire_as_path_inbound != nullptr)
        {
            children["remove-private-as-entire-as-path-inbound"] = remove_private_as_entire_as_path_inbound;
        }
        else
        {
            remove_private_as_entire_as_path_inbound = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound>();
            remove_private_as_entire_as_path_inbound->parent = this;
            children["remove-private-as-entire-as-path-inbound"] = remove_private_as_entire_as_path_inbound;
        }
        return children.at("remove-private-as-entire-as-path-inbound");
    }

    if(child_yang_name == "soft-reconfiguration")
    {
        if(soft_reconfiguration != nullptr)
        {
            children["soft-reconfiguration"] = soft_reconfiguration;
        }
        else
        {
            soft_reconfiguration = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration>();
            soft_reconfiguration->parent = this;
            children["soft-reconfiguration"] = soft_reconfiguration;
        }
        return children.at("soft-reconfiguration");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::get_children()
{
    if(children.find("advertise-def-imp-disable-v4") == children.end())
    {
        if(advertise_def_imp_disable_v4 != nullptr)
        {
            children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;
        }
    }

    if(children.find("advertise-def-imp-disable-v6") == children.end())
    {
        if(advertise_def_imp_disable_v6 != nullptr)
        {
            children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;
        }
    }

    if(children.find("advertise-disable") == children.end())
    {
        if(advertise_disable != nullptr)
        {
            children["advertise-disable"] = advertise_disable;
        }
    }

    if(children.find("advertise-l2vpnevpn") == children.end())
    {
        if(advertise_l2vpnevpn != nullptr)
        {
            children["advertise-l2vpnevpn"] = advertise_l2vpnevpn;
        }
    }

    if(children.find("advertise-local-l2vpnevpn") == children.end())
    {
        if(advertise_local_l2vpnevpn != nullptr)
        {
            children["advertise-local-l2vpnevpn"] = advertise_local_l2vpnevpn;
        }
    }

    if(children.find("advertise-local-v4") == children.end())
    {
        if(advertise_local_v4 != nullptr)
        {
            children["advertise-local-v4"] = advertise_local_v4;
        }
    }

    if(children.find("advertise-local-v6") == children.end())
    {
        if(advertise_local_v6 != nullptr)
        {
            children["advertise-local-v6"] = advertise_local_v6;
        }
    }

    if(children.find("advertise-v4") == children.end())
    {
        if(advertise_v4 != nullptr)
        {
            children["advertise-v4"] = advertise_v4;
        }
    }

    if(children.find("advertise-v6") == children.end())
    {
        if(advertise_v6 != nullptr)
        {
            children["advertise-v6"] = advertise_v6;
        }
    }

    if(children.find("advertise-vrf-imp-disable-v4") == children.end())
    {
        if(advertise_vrf_imp_disable_v4 != nullptr)
        {
            children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;
        }
    }

    if(children.find("advertise-vrf-imp-disable-v6") == children.end())
    {
        if(advertise_vrf_imp_disable_v6 != nullptr)
        {
            children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;
        }
    }

    if(children.find("aigp-cost-community") == children.end())
    {
        if(aigp_cost_community != nullptr)
        {
            children["aigp-cost-community"] = aigp_cost_community;
        }
    }

    if(children.find("default-originate") == children.end())
    {
        if(default_originate != nullptr)
        {
            children["default-originate"] = default_originate;
        }
    }

    if(children.find("import") == children.end())
    {
        if(import != nullptr)
        {
            children["import"] = import;
        }
    }

    if(children.find("maximum-prefixes") == children.end())
    {
        if(maximum_prefixes != nullptr)
        {
            children["maximum-prefixes"] = maximum_prefixes;
        }
    }

    if(children.find("neighbor-af-long-lived-graceful-restart-stale-time") == children.end())
    {
        if(neighbor_af_long_lived_graceful_restart_stale_time != nullptr)
        {
            children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;
        }
    }

    if(children.find("remove-private-as-entire-as-path") == children.end())
    {
        if(remove_private_as_entire_as_path != nullptr)
        {
            children["remove-private-as-entire-as-path"] = remove_private_as_entire_as_path;
        }
    }

    if(children.find("remove-private-as-entire-as-path-inbound") == children.end())
    {
        if(remove_private_as_entire_as_path_inbound != nullptr)
        {
            children["remove-private-as-entire-as-path-inbound"] = remove_private_as_entire_as_path_inbound;
        }
    }

    if(children.find("soft-reconfiguration") == children.end())
    {
        if(soft_reconfiguration != nullptr)
        {
            children["soft-reconfiguration"] = soft_reconfiguration;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "accept-own")
    {
        accept_own = value;
    }
    if(value_path == "accept-route-legacy-rt")
    {
        accept_route_legacy_rt = value;
    }
    if(value_path == "activate")
    {
        activate = value;
    }
    if(value_path == "advertise-local-labeled-route")
    {
        advertise_local_labeled_route = value;
    }
    if(value_path == "advertise-orf")
    {
        advertise_orf = value;
    }
    if(value_path == "advertise-permanent-network")
    {
        advertise_permanent_network = value;
    }
    if(value_path == "af-group")
    {
        af_group = value;
    }
    if(value_path == "aigp")
    {
        aigp = value;
    }
    if(value_path == "aigp-send-med")
    {
        aigp_send_med = value;
    }
    if(value_path == "allow-as-in")
    {
        allow_as_in = value;
    }
    if(value_path == "as-override")
    {
        as_override = value;
    }
    if(value_path == "default-weight")
    {
        default_weight = value;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
    }
    if(value_path == "flowspec-validation")
    {
        flowspec_validation = value;
    }
    if(value_path == "l2vpn-signalling")
    {
        l2vpn_signalling = value;
    }
    if(value_path == "multipath")
    {
        multipath = value;
    }
    if(value_path == "neighbor-af-long-lived-graceful-restart-capable")
    {
        neighbor_af_long_lived_graceful_restart_capable = value;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self = value;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
    }
    if(value_path == "next-hop-unchanged-multipath")
    {
        next_hop_unchanged_multipath = value;
    }
    if(value_path == "prefix-orf-policy")
    {
        prefix_orf_policy = value;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in = value;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out = value;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
    }
    if(value_path == "send-community-ebgp")
    {
        send_community_ebgp = value;
    }
    if(value_path == "send-community-ebgp-graceful-shutdown")
    {
        send_community_ebgp_graceful_shutdown = value;
    }
    if(value_path == "send-ext-community-ebgp")
    {
        send_ext_community_ebgp = value;
    }
    if(value_path == "send-multicast-attr")
    {
        send_multicast_attr = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AigpCostCommunity::AigpCostCommunity()
    :
    cost_community_id{YType::uint32, "cost-community-id"},
    cost_community_poi_type{YType::enumeration, "cost-community-poi-type"},
    enable{YType::boolean, "enable"},
    transitive{YType::boolean, "transitive"}
{
    yang_name = "aigp-cost-community"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AigpCostCommunity::~AigpCostCommunity()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AigpCostCommunity::has_data() const
{
    return cost_community_id.is_set
	|| cost_community_poi_type.is_set
	|| enable.is_set
	|| transitive.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AigpCostCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(cost_community_id.operation)
	|| is_set(cost_community_poi_type.operation)
	|| is_set(enable.operation)
	|| is_set(transitive.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AigpCostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aigp-cost-community";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AigpCostCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AigpCostCommunity' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost_community_id.is_set || is_set(cost_community_id.operation)) leaf_name_data.push_back(cost_community_id.get_name_leafdata());
    if (cost_community_poi_type.is_set || is_set(cost_community_poi_type.operation)) leaf_name_data.push_back(cost_community_poi_type.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (transitive.is_set || is_set(transitive.operation)) leaf_name_data.push_back(transitive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AigpCostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AigpCostCommunity::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AigpCostCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost-community-id")
    {
        cost_community_id = value;
    }
    if(value_path == "cost-community-poi-type")
    {
        cost_community_poi_type = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "transitive")
    {
        transitive = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::AdvertiseDefImpDisableV6()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-def-imp-disable-v6"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::~AdvertiseDefImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_option.operation)
	|| is_set(af_name.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v6";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseDefImpDisableV6' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.operation)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable::AdvertiseDisable()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-disable"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable::~AdvertiseDisable()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-disable";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseDisable' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDisable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::MaximumPrefixes::MaximumPrefixes()
    :
    discard_extra_paths{YType::boolean, "discard-extra-paths"},
    prefix_limit{YType::uint32, "prefix-limit"},
    restart_time{YType::uint32, "restart-time"},
    warning_only{YType::boolean, "warning-only"},
    warning_percentage{YType::uint32, "warning-percentage"}
{
    yang_name = "maximum-prefixes"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::MaximumPrefixes::~MaximumPrefixes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::MaximumPrefixes::has_data() const
{
    return discard_extra_paths.is_set
	|| prefix_limit.is_set
	|| restart_time.is_set
	|| warning_only.is_set
	|| warning_percentage.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::MaximumPrefixes::has_operation() const
{
    return is_set(operation)
	|| is_set(discard_extra_paths.operation)
	|| is_set(prefix_limit.operation)
	|| is_set(restart_time.operation)
	|| is_set(warning_only.operation)
	|| is_set(warning_percentage.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::MaximumPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefixes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::MaximumPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumPrefixes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discard_extra_paths.is_set || is_set(discard_extra_paths.operation)) leaf_name_data.push_back(discard_extra_paths.get_name_leafdata());
    if (prefix_limit.is_set || is_set(prefix_limit.operation)) leaf_name_data.push_back(prefix_limit.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.operation)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.operation)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (warning_percentage.is_set || is_set(warning_percentage.operation)) leaf_name_data.push_back(warning_percentage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::MaximumPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::MaximumPrefixes::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::MaximumPrefixes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discard-extra-paths")
    {
        discard_extra_paths = value;
    }
    if(value_path == "prefix-limit")
    {
        prefix_limit = value;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
    }
    if(value_path == "warning-percentage")
    {
        warning_percentage = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::RemovePrivateAsEntireAsPathInbound()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{
    yang_name = "remove-private-as-entire-as-path-inbound"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::~RemovePrivateAsEntireAsPathInbound()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::has_data() const
{
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(entire.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path-inbound";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemovePrivateAsEntireAsPathInbound' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.operation)) leaf_name_data.push_back(entire.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "entire")
    {
        entire = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::AdvertiseDefImpDisableV4()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-def-imp-disable-v4"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::~AdvertiseDefImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_option.operation)
	|| is_set(af_name.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v4";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseDefImpDisableV4' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.operation)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn::AdvertiseL2Vpnevpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-l2vpnevpn"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn::~AdvertiseL2Vpnevpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-l2vpnevpn";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseL2Vpnevpn' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn::AdvertiseLocalL2Vpnevpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-local-l2vpnevpn"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn::~AdvertiseLocalL2Vpnevpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-l2vpnevpn";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseLocalL2Vpnevpn' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::NeighborAfLongLivedGracefulRestartStaleTime()
    :
    stale_time_accept{YType::uint32, "stale-time-accept"},
    stale_time_send{YType::uint32, "stale-time-send"}
{
    yang_name = "neighbor-af-long-lived-graceful-restart-stale-time"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::~NeighborAfLongLivedGracefulRestartStaleTime()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::has_data() const
{
    return stale_time_accept.is_set
	|| stale_time_send.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::has_operation() const
{
    return is_set(operation)
	|| is_set(stale_time_accept.operation)
	|| is_set(stale_time_send.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af-long-lived-graceful-restart-stale-time";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAfLongLivedGracefulRestartStaleTime' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stale_time_accept.is_set || is_set(stale_time_accept.operation)) leaf_name_data.push_back(stale_time_accept.get_name_leafdata());
    if (stale_time_send.is_set || is_set(stale_time_send.operation)) leaf_name_data.push_back(stale_time_send.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stale-time-accept")
    {
        stale_time_accept = value;
    }
    if(value_path == "stale-time-send")
    {
        stale_time_send = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6::AdvertiseV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-v6"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6::~AdvertiseV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v6";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseV6' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6::AdvertiseLocalV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-local-v6"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6::~AdvertiseLocalV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v6";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseLocalV6' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import::Import()
    :
    import_reoriginate{YType::boolean, "import-reoriginate"},
    import_reoriginate_stitching{YType::boolean, "import-reoriginate-stitching"},
    import_stitching{YType::boolean, "import-stitching"}
{
    yang_name = "import"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import::~Import()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import::has_data() const
{
    return import_reoriginate.is_set
	|| import_reoriginate_stitching.is_set
	|| import_stitching.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import::has_operation() const
{
    return is_set(operation)
	|| is_set(import_reoriginate.operation)
	|| is_set(import_reoriginate_stitching.operation)
	|| is_set(import_stitching.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Import' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (import_reoriginate.is_set || is_set(import_reoriginate.operation)) leaf_name_data.push_back(import_reoriginate.get_name_leafdata());
    if (import_reoriginate_stitching.is_set || is_set(import_reoriginate_stitching.operation)) leaf_name_data.push_back(import_reoriginate_stitching.get_name_leafdata());
    if (import_stitching.is_set || is_set(import_stitching.operation)) leaf_name_data.push_back(import_stitching.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::Import::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "import-reoriginate")
    {
        import_reoriginate = value;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching = value;
    }
    if(value_path == "import-stitching")
    {
        import_stitching = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate::DefaultOriginate()
    :
    enable{YType::boolean, "enable"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "default-originate"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate::~DefaultOriginate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate::has_data() const
{
    return enable.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-originate";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultOriginate' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::DefaultOriginate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration::SoftReconfiguration()
    :
    inbound_soft{YType::boolean, "inbound-soft"},
    soft_always{YType::boolean, "soft-always"}
{
    yang_name = "soft-reconfiguration"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration::~SoftReconfiguration()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration::has_data() const
{
    return inbound_soft.is_set
	|| soft_always.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration::has_operation() const
{
    return is_set(operation)
	|| is_set(inbound_soft.operation)
	|| is_set(soft_always.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-reconfiguration";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SoftReconfiguration' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inbound_soft.is_set || is_set(inbound_soft.operation)) leaf_name_data.push_back(inbound_soft.get_name_leafdata());
    if (soft_always.is_set || is_set(soft_always.operation)) leaf_name_data.push_back(soft_always.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::SoftReconfiguration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inbound-soft")
    {
        inbound_soft = value;
    }
    if(value_path == "soft-always")
    {
        soft_always = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::AdvertiseVrfImpDisableV6()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-vrf-imp-disable-v6"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::~AdvertiseVrfImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_option.operation)
	|| is_set(af_name.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v6";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseVrfImpDisableV6' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.operation)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4::AdvertiseV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-v4"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4::~AdvertiseV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v4";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseV4' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4::AdvertiseLocalV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-local-v4"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4::~AdvertiseLocalV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v4";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseLocalV4' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseLocalV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::RemovePrivateAsEntireAsPath()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{
    yang_name = "remove-private-as-entire-as-path"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::~RemovePrivateAsEntireAsPath()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::has_data() const
{
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(entire.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemovePrivateAsEntireAsPath' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.operation)) leaf_name_data.push_back(entire.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "entire")
    {
        entire = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::AdvertiseVrfImpDisableV4()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-vrf-imp-disable-v4"; yang_parent_name = "neighbor-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::~AdvertiseVrfImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_option.operation)
	|| is_set(af_name.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v4";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseVrfImpDisableV4' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.operation)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborAfs::NeighborAf::AdvertiseVrfImpDisableV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress::LocalAddress()
    :
    local_address_disable{YType::boolean, "local-address-disable"},
    local_ip_address{YType::str, "local-ip-address"}
{
    yang_name = "local-address"; yang_parent_name = "neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress::~LocalAddress()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress::has_data() const
{
    return local_address_disable.is_set
	|| local_ip_address.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(local_address_disable.operation)
	|| is_set(local_ip_address.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalAddress' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address_disable.is_set || is_set(local_address_disable.operation)) leaf_name_data.push_back(local_address_disable.get_name_leafdata());
    if (local_ip_address.is_set || is_set(local_ip_address.operation)) leaf_name_data.push_back(local_ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-address-disable")
    {
        local_address_disable = value;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivates()
{
    yang_name = "bmp-activates"; yang_parent_name = "neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::~BmpActivates()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::has_data() const
{
    for (std::size_t index=0; index<bmp_activate.size(); index++)
    {
        if(bmp_activate[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::has_operation() const
{
    for (std::size_t index=0; index<bmp_activate.size(); index++)
    {
        if(bmp_activate[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activates";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpActivates' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bmp-activate")
    {
        for(auto const & c : bmp_activate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivate>();
        c->parent = this;
        bmp_activate.push_back(std::move(c));
        children[segment_path] = bmp_activate.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::get_children()
{
    for (auto const & c : bmp_activate)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivate::BmpActivate()
    :
    server_id{YType::uint32, "server-id"}
{
    yang_name = "bmp-activate"; yang_parent_name = "bmp-activates";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivate::~BmpActivate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivate::has_data() const
{
    return server_id.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivate::has_operation() const
{
    return is_set(operation)
	|| is_set(server_id.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activate" <<"[server-id='" <<server_id <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpActivate' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_id.is_set || is_set(server_id.operation)) leaf_name_data.push_back(server_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivate::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::BmpActivates::BmpActivate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "server-id")
    {
        server_id = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop::EbgpMultihop()
    :
    max_hop_count{YType::uint32, "max-hop-count"},
    mpls_deactivation{YType::boolean, "mpls-deactivation"}
{
    yang_name = "ebgp-multihop"; yang_parent_name = "neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop::~EbgpMultihop()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop::has_data() const
{
    return max_hop_count.is_set
	|| mpls_deactivation.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop::has_operation() const
{
    return is_set(operation)
	|| is_set(max_hop_count.operation)
	|| is_set(mpls_deactivation.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EbgpMultihop' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_hop_count.is_set || is_set(max_hop_count.operation)) leaf_name_data.push_back(max_hop_count.get_name_leafdata());
    if (mpls_deactivation.is_set || is_set(mpls_deactivation.operation)) leaf_name_data.push_back(mpls_deactivation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::EbgpMultihop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-hop-count")
    {
        max_hop_count = value;
    }
    if(value_path == "mpls-deactivation")
    {
        mpls_deactivation = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs::RemoteAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{
    yang_name = "remote-as"; yang_parent_name = "neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs::~RemoteAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-as";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteAs' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::RemoteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs::LocalAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    disable{YType::empty, "disable"},
    dual_as{YType::empty, "dual-as"},
    no_prepend{YType::empty, "no-prepend"},
    replace_as{YType::empty, "replace-as"}
{
    yang_name = "local-as"; yang_parent_name = "neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs::~LocalAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set
	|| disable.is_set
	|| dual_as.is_set
	|| no_prepend.is_set
	|| replace_as.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs::has_operation() const
{
    return is_set(operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation)
	|| is_set(disable.operation)
	|| is_set(dual_as.operation)
	|| is_set(no_prepend.operation)
	|| is_set(replace_as.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-as";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalAs' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (dual_as.is_set || is_set(dual_as.operation)) leaf_name_data.push_back(dual_as.get_name_leafdata());
    if (no_prepend.is_set || is_set(no_prepend.operation)) leaf_name_data.push_back(no_prepend.get_name_leafdata());
    if (replace_as.is_set || is_set(replace_as.operation)) leaf_name_data.push_back(replace_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::LocalAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "dual-as")
    {
        dual_as = value;
    }
    if(value_path == "no-prepend")
    {
        no_prepend = value;
    }
    if(value_path == "replace-as")
    {
        replace_as = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password::Password()
    :
    password{YType::str, "password"},
    password_disable{YType::boolean, "password-disable"}
{
    yang_name = "password"; yang_parent_name = "neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password::~Password()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password::has_data() const
{
    return password.is_set
	|| password_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(password.operation)
	|| is_set(password_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (password_disable.is_set || is_set(password_disable.operation)) leaf_name_data.push_back(password_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "password-disable")
    {
        password_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::AdvertisementInterval::AdvertisementInterval()
    :
    minimum_interval{YType::uint32, "minimum-interval"},
    minimum_interval_msecs{YType::uint32, "minimum-interval-msecs"}
{
    yang_name = "advertisement-interval"; yang_parent_name = "neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::AdvertisementInterval::~AdvertisementInterval()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::AdvertisementInterval::has_data() const
{
    return minimum_interval.is_set
	|| minimum_interval_msecs.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::AdvertisementInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum_interval.operation)
	|| is_set(minimum_interval_msecs.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::AdvertisementInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement-interval";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::AdvertisementInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertisementInterval' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (minimum_interval_msecs.is_set || is_set(minimum_interval_msecs.operation)) leaf_name_data.push_back(minimum_interval_msecs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::AdvertisementInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::AdvertisementInterval::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::AdvertisementInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "minimum-interval-msecs")
    {
        minimum_interval_msecs = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId::NeighborClusterId()
    :
    cluster_id_address{YType::str, "cluster-id-address"},
    cluster_id_number{YType::uint32, "cluster-id-number"}
{
    yang_name = "neighbor-cluster-id"; yang_parent_name = "neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId::~NeighborClusterId()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId::has_data() const
{
    return cluster_id_address.is_set
	|| cluster_id_number.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId::has_operation() const
{
    return is_set(operation)
	|| is_set(cluster_id_address.operation)
	|| is_set(cluster_id_number.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-cluster-id";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborClusterId' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_address.is_set || is_set(cluster_id_address.operation)) leaf_name_data.push_back(cluster_id_address.get_name_leafdata());
    if (cluster_id_number.is_set || is_set(cluster_id_number.operation)) leaf_name_data.push_back(cluster_id_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::NeighborClusterId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cluster-id-address")
    {
        cluster_id_address = value;
    }
    if(value_path == "cluster-id-number")
    {
        cluster_id_number = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss::Tcpmss()
    :
    mss{YType::uint32, "mss"},
    tcpmss_disable{YType::boolean, "tcpmss-disable"}
{
    yang_name = "tcpmss"; yang_parent_name = "neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss::~Tcpmss()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss::has_data() const
{
    return mss.is_set
	|| tcpmss_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss::has_operation() const
{
    return is_set(operation)
	|| is_set(mss.operation)
	|| is_set(tcpmss_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpmss";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tcpmss' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mss.is_set || is_set(mss.operation)) leaf_name_data.push_back(mss.get_name_leafdata());
    if (tcpmss_disable.is_set || is_set(tcpmss_disable.operation)) leaf_name_data.push_back(tcpmss_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tcpmss::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mss")
    {
        mss = value;
    }
    if(value_path == "tcpmss-disable")
    {
        tcpmss_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos::Tos()
    :
    type{YType::enumeration, "type"},
    value_{YType::str, "value"}
{
    yang_name = "tos"; yang_parent_name = "neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos::~Tos()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos::has_data() const
{
    return type.is_set
	|| value_.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| is_set(value_.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tos' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Tos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFiltering()
    :
    enable{YType::empty, "enable"},
    update_in_filtering_attribute_filter_group{YType::str, "update-in-filtering-attribute-filter-group"},
    update_in_filtering_syslog_disable{YType::empty, "update-in-filtering-syslog-disable"}
    	,
    update_in_filtering_message_buffers(nullptr) // presence node
{
    yang_name = "update-in-filtering"; yang_parent_name = "neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::~UpdateInFiltering()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::has_data() const
{
    return enable.is_set
	|| update_in_filtering_attribute_filter_group.is_set
	|| update_in_filtering_syslog_disable.is_set
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(update_in_filtering_attribute_filter_group.operation)
	|| is_set(update_in_filtering_syslog_disable.operation)
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateInFiltering' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (update_in_filtering_attribute_filter_group.is_set || is_set(update_in_filtering_attribute_filter_group.operation)) leaf_name_data.push_back(update_in_filtering_attribute_filter_group.get_name_leafdata());
    if (update_in_filtering_syslog_disable.is_set || is_set(update_in_filtering_syslog_disable.operation)) leaf_name_data.push_back(update_in_filtering_syslog_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "update-in-filtering-message-buffers")
    {
        if(update_in_filtering_message_buffers != nullptr)
        {
            children["update-in-filtering-message-buffers"] = update_in_filtering_message_buffers;
        }
        else
        {
            update_in_filtering_message_buffers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers>();
            update_in_filtering_message_buffers->parent = this;
            children["update-in-filtering-message-buffers"] = update_in_filtering_message_buffers;
        }
        return children.at("update-in-filtering-message-buffers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::get_children()
{
    if(children.find("update-in-filtering-message-buffers") == children.end())
    {
        if(update_in_filtering_message_buffers != nullptr)
        {
            children["update-in-filtering-message-buffers"] = update_in_filtering_message_buffers;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "update-in-filtering-attribute-filter-group")
    {
        update_in_filtering_attribute_filter_group = value;
    }
    if(value_path == "update-in-filtering-syslog-disable")
    {
        update_in_filtering_syslog_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::UpdateInFilteringMessageBuffers()
    :
    non_circular_buffer{YType::boolean, "non-circular-buffer"},
    number_of_buffers{YType::uint32, "number-of-buffers"}
{
    yang_name = "update-in-filtering-message-buffers"; yang_parent_name = "update-in-filtering";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::~UpdateInFilteringMessageBuffers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_data() const
{
    return non_circular_buffer.is_set
	|| number_of_buffers.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_operation() const
{
    return is_set(operation)
	|| is_set(non_circular_buffer.operation)
	|| is_set(number_of_buffers.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering-message-buffers";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateInFilteringMessageBuffers' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_circular_buffer.is_set || is_set(non_circular_buffer.operation)) leaf_name_data.push_back(non_circular_buffer.get_name_leafdata());
    if (number_of_buffers.is_set || is_set(number_of_buffers.operation)) leaf_name_data.push_back(number_of_buffers.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::UpdateInFiltering::UpdateInFilteringMessageBuffers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-circular-buffer")
    {
        non_circular_buffer = value;
    }
    if(value_path == "number-of-buffers")
    {
        number_of_buffers = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut::MsgLogOut()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{
    yang_name = "msg-log-out"; yang_parent_name = "neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut::~MsgLogOut()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut::has_data() const
{
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut::has_operation() const
{
    return is_set(operation)
	|| is_set(msg_buf_count.operation)
	|| is_set(msg_log_disable.operation)
	|| is_set(msg_log_inherit_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-out";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MsgLogOut' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.operation)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.operation)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.operation)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogOut::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize::ReceiveBufferSize()
    :
    bgp_receive_size{YType::uint32, "bgp-receive-size"},
    socket_receive_size{YType::uint32, "socket-receive-size"}
{
    yang_name = "receive-buffer-size"; yang_parent_name = "neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize::~ReceiveBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize::has_data() const
{
    return bgp_receive_size.is_set
	|| socket_receive_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp_receive_size.operation)
	|| is_set(socket_receive_size.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-buffer-size";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceiveBufferSize' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_receive_size.is_set || is_set(bgp_receive_size.operation)) leaf_name_data.push_back(bgp_receive_size.get_name_leafdata());
    if (socket_receive_size.is_set || is_set(socket_receive_size.operation)) leaf_name_data.push_back(socket_receive_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::ReceiveBufferSize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size = value;
    }
    if(value_path == "socket-receive-size")
    {
        socket_receive_size = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn::MsgLogIn()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{
    yang_name = "msg-log-in"; yang_parent_name = "neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn::~MsgLogIn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn::has_data() const
{
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn::has_operation() const
{
    return is_set(operation)
	|| is_set(msg_buf_count.operation)
	|| is_set(msg_log_disable.operation)
	|| is_set(msg_log_inherit_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-in";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MsgLogIn' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.operation)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.operation)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.operation)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::MsgLogIn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize::SendBufferSize()
    :
    bgp_send_size{YType::uint32, "bgp-send-size"},
    socket_send_size{YType::uint32, "socket-send-size"}
{
    yang_name = "send-buffer-size"; yang_parent_name = "neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize::~SendBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize::has_data() const
{
    return bgp_send_size.is_set
	|| socket_send_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp_send_size.operation)
	|| is_set(socket_send_size.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-buffer-size";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendBufferSize' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_send_size.is_set || is_set(bgp_send_size.operation)) leaf_name_data.push_back(bgp_send_size.get_name_leafdata());
    if (socket_send_size.is_set || is_set(socket_send_size.operation)) leaf_name_data.push_back(socket_send_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::SendBufferSize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp-send-size")
    {
        bgp_send_size = value;
    }
    if(value_path == "socket-send-size")
    {
        socket_send_size = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers::Timers()
    :
    hold_time{YType::uint32, "hold-time"},
    keepalive_interval{YType::uint32, "keepalive-interval"},
    min_accept_hold_time{YType::uint32, "min-accept-hold-time"}
{
    yang_name = "timers"; yang_parent_name = "neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers::~Timers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers::has_data() const
{
    return hold_time.is_set
	|| keepalive_interval.is_set
	|| min_accept_hold_time.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_time.operation)
	|| is_set(keepalive_interval.operation)
	|| is_set(min_accept_hold_time.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.operation)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (min_accept_hold_time.is_set || is_set(min_accept_hold_time.operation)) leaf_name_data.push_back(min_accept_hold_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain::Keychain()
    :
    keychain_disable{YType::boolean, "keychain-disable"},
    keychain_name{YType::str, "keychain-name"}
{
    yang_name = "keychain"; yang_parent_name = "neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain::~Keychain()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain::has_data() const
{
    return keychain_disable.is_set
	|| keychain_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain::has_operation() const
{
    return is_set(operation)
	|| is_set(keychain_disable.operation)
	|| is_set(keychain_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keychain";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Keychain' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keychain_disable.is_set || is_set(keychain_disable.operation)) leaf_name_data.push_back(keychain_disable.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.operation)) leaf_name_data.push_back(keychain_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::Keychain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "keychain-disable")
    {
        keychain_disable = value;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenance()
    :
    enable{YType::empty, "enable"},
    graceful_maintenance_activate{YType::boolean, "graceful-maintenance-activate"}
    	,
    graceful_maintenance_as_prepends(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends>())
	,graceful_maintenance_local_preference(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference>())
{
    graceful_maintenance_as_prepends->parent = this;
    children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;

    graceful_maintenance_local_preference->parent = this;
    children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;

    yang_name = "graceful-maintenance"; yang_parent_name = "neighbor-prefix-length";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::~GracefulMaintenance()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::has_data() const
{
    return enable.is_set
	|| graceful_maintenance_activate.is_set
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_data())
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(graceful_maintenance_activate.operation)
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_operation())
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulMaintenance' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (graceful_maintenance_activate.is_set || is_set(graceful_maintenance_activate.operation)) leaf_name_data.push_back(graceful_maintenance_activate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "graceful-maintenance-as-prepends")
    {
        if(graceful_maintenance_as_prepends != nullptr)
        {
            children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;
        }
        else
        {
            graceful_maintenance_as_prepends = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends>();
            graceful_maintenance_as_prepends->parent = this;
            children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;
        }
        return children.at("graceful-maintenance-as-prepends");
    }

    if(child_yang_name == "graceful-maintenance-local-preference")
    {
        if(graceful_maintenance_local_preference != nullptr)
        {
            children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;
        }
        else
        {
            graceful_maintenance_local_preference = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference>();
            graceful_maintenance_local_preference->parent = this;
            children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;
        }
        return children.at("graceful-maintenance-local-preference");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::get_children()
{
    if(children.find("graceful-maintenance-as-prepends") == children.end())
    {
        if(graceful_maintenance_as_prepends != nullptr)
        {
            children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;
        }
    }

    if(children.find("graceful-maintenance-local-preference") == children.end())
    {
        if(graceful_maintenance_local_preference != nullptr)
        {
            children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "graceful-maintenance-activate")
    {
        graceful_maintenance_activate = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::GracefulMaintenanceLocalPreference()
    :
    gshut_loc_pref_disable{YType::boolean, "gshut-loc-pref-disable"},
    local_preference{YType::uint32, "local-preference"}
{
    yang_name = "graceful-maintenance-local-preference"; yang_parent_name = "graceful-maintenance";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::~GracefulMaintenanceLocalPreference()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_data() const
{
    return gshut_loc_pref_disable.is_set
	|| local_preference.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_operation() const
{
    return is_set(operation)
	|| is_set(gshut_loc_pref_disable.operation)
	|| is_set(local_preference.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-local-preference";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulMaintenanceLocalPreference' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gshut_loc_pref_disable.is_set || is_set(gshut_loc_pref_disable.operation)) leaf_name_data.push_back(gshut_loc_pref_disable.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.operation)) leaf_name_data.push_back(local_preference.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceLocalPreference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gshut-loc-pref-disable")
    {
        gshut_loc_pref_disable = value;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::GracefulMaintenanceAsPrepends()
    :
    as_prepends{YType::uint32, "as-prepends"},
    gshut_prepends_disable{YType::boolean, "gshut-prepends-disable"}
{
    yang_name = "graceful-maintenance-as-prepends"; yang_parent_name = "graceful-maintenance";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::~GracefulMaintenanceAsPrepends()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_data() const
{
    return as_prepends.is_set
	|| gshut_prepends_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_operation() const
{
    return is_set(operation)
	|| is_set(as_prepends.operation)
	|| is_set(gshut_prepends_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-as-prepends";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulMaintenanceAsPrepends' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_prepends.is_set || is_set(as_prepends.operation)) leaf_name_data.push_back(as_prepends.get_name_leafdata());
    if (gshut_prepends_disable.is_set || is_set(gshut_prepends_disable.operation)) leaf_name_data.push_back(gshut_prepends_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::NeighborPrefixLength::GracefulMaintenance::GracefulMaintenanceAsPrepends::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-prepends")
    {
        as_prepends = value;
    }
    if(value_path == "gshut-prepends-disable")
    {
        gshut_prepends_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroups()
{
    yang_name = "neighbor-groups"; yang_parent_name = "bgp-entity";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::~NeighborGroups()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::has_data() const
{
    for (std::size_t index=0; index<neighbor_group.size(); index++)
    {
        if(neighbor_group[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::has_operation() const
{
    for (std::size_t index=0; index<neighbor_group.size(); index++)
    {
        if(neighbor_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-groups";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborGroups' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-group")
    {
        for(auto const & c : neighbor_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup>();
        c->parent = this;
        neighbor_group.push_back(std::move(c));
        children[segment_path] = neighbor_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::get_children()
{
    for (auto const & c : neighbor_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroup()
    :
    neighbor_group_name{YType::str, "neighbor-group-name"},
    additional_paths_receive_capability{YType::enumeration, "additional-paths-receive-capability"},
    additional_paths_send_capability{YType::enumeration, "additional-paths-send-capability"},
    bfd_enable_modes{YType::enumeration, "bfd-enable-modes"},
    bfd_minimum_interval{YType::uint32, "bfd-minimum-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    create{YType::empty, "create"},
    description{YType::str, "description"},
    ebgp_recv_dmz{YType::boolean, "ebgp-recv-dmz"},
    ebgp_send_dmz_enable_modes{YType::enumeration, "ebgp-send-dmz-enable-modes"},
    egress_peer_engineering{YType::boolean, "egress-peer-engineering"},
    enforce_first_as{YType::boolean, "enforce-first-as"},
    idle_watch_time{YType::uint32, "idle-watch-time"},
    ignore_connected_check_ebgp{YType::boolean, "ignore-connected-check-ebgp"},
    internal_vpn_client_ibgpce{YType::boolean, "internal-vpn-client-ibgpce"},
    max_peers{YType::uint32, "max-peers"},
    neighbor_graceful_restart{YType::boolean, "neighbor-graceful-restart"},
    neighbor_graceful_restart_stalepath_time{YType::uint32, "neighbor-graceful-restart-stalepath-time"},
    neighbor_graceful_restart_time{YType::uint32, "neighbor-graceful-restart-time"},
    neighbor_group_add_member{YType::str, "neighbor-group-add-member"},
    propagate_dmz_link_bandwidth{YType::boolean, "propagate-dmz-link-bandwidth"},
    remote_as_list{YType::str, "remote-as-list"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    session_group_add_member{YType::str, "session-group-add-member"},
    session_open_mode{YType::enumeration, "session-open-mode"},
    shutdown{YType::boolean, "shutdown"},
    suppress_all_capabilities{YType::boolean, "suppress-all-capabilities"},
    suppress_four_byte_as_capability{YType::boolean, "suppress-four-byte-as-capability"},
    ttl_security{YType::boolean, "ttl-security"},
    update_source_interface{YType::str, "update-source-interface"}
    	,
    advertisement_interval(nullptr) // presence node
	,bmp_activates(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates>())
	,ebgp_multihop(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop>())
	,graceful_maintenance(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance>())
	,keychain(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain>())
	,local_address(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress>())
	,local_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs>())
	,msg_log_in(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn>())
	,msg_log_out(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut>())
	,neighbor_cluster_id(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId>())
	,neighbor_group_afs(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs>())
	,password(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password>())
	,receive_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize>())
	,remote_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs>())
	,send_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize>())
	,tcpmss(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss>())
	,timers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers>())
	,tos(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos>())
	,update_in_filtering(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering>())
{
    bmp_activates->parent = this;
    children["bmp-activates"] = bmp_activates;

    ebgp_multihop->parent = this;
    children["ebgp-multihop"] = ebgp_multihop;

    graceful_maintenance->parent = this;
    children["graceful-maintenance"] = graceful_maintenance;

    keychain->parent = this;
    children["keychain"] = keychain;

    local_address->parent = this;
    children["local-address"] = local_address;

    local_as->parent = this;
    children["local-as"] = local_as;

    msg_log_in->parent = this;
    children["msg-log-in"] = msg_log_in;

    msg_log_out->parent = this;
    children["msg-log-out"] = msg_log_out;

    neighbor_cluster_id->parent = this;
    children["neighbor-cluster-id"] = neighbor_cluster_id;

    neighbor_group_afs->parent = this;
    children["neighbor-group-afs"] = neighbor_group_afs;

    password->parent = this;
    children["password"] = password;

    receive_buffer_size->parent = this;
    children["receive-buffer-size"] = receive_buffer_size;

    remote_as->parent = this;
    children["remote-as"] = remote_as;

    send_buffer_size->parent = this;
    children["send-buffer-size"] = send_buffer_size;

    tcpmss->parent = this;
    children["tcpmss"] = tcpmss;

    timers->parent = this;
    children["timers"] = timers;

    tos->parent = this;
    children["tos"] = tos;

    update_in_filtering->parent = this;
    children["update-in-filtering"] = update_in_filtering;

    yang_name = "neighbor-group"; yang_parent_name = "neighbor-groups";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::~NeighborGroup()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::has_data() const
{
    return neighbor_group_name.is_set
	|| additional_paths_receive_capability.is_set
	|| additional_paths_send_capability.is_set
	|| bfd_enable_modes.is_set
	|| bfd_minimum_interval.is_set
	|| bfd_multiplier.is_set
	|| create.is_set
	|| description.is_set
	|| ebgp_recv_dmz.is_set
	|| ebgp_send_dmz_enable_modes.is_set
	|| egress_peer_engineering.is_set
	|| enforce_first_as.is_set
	|| idle_watch_time.is_set
	|| ignore_connected_check_ebgp.is_set
	|| internal_vpn_client_ibgpce.is_set
	|| max_peers.is_set
	|| neighbor_graceful_restart.is_set
	|| neighbor_graceful_restart_stalepath_time.is_set
	|| neighbor_graceful_restart_time.is_set
	|| neighbor_group_add_member.is_set
	|| propagate_dmz_link_bandwidth.is_set
	|| remote_as_list.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| session_group_add_member.is_set
	|| session_open_mode.is_set
	|| shutdown.is_set
	|| suppress_all_capabilities.is_set
	|| suppress_four_byte_as_capability.is_set
	|| ttl_security.is_set
	|| update_source_interface.is_set
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_data())
	|| (bmp_activates !=  nullptr && bmp_activates->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_data())
	|| (keychain !=  nullptr && keychain->has_data())
	|| (local_address !=  nullptr && local_address->has_data())
	|| (local_as !=  nullptr && local_as->has_data())
	|| (msg_log_in !=  nullptr && msg_log_in->has_data())
	|| (msg_log_out !=  nullptr && msg_log_out->has_data())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_data())
	|| (neighbor_group_afs !=  nullptr && neighbor_group_afs->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_data())
	|| (remote_as !=  nullptr && remote_as->has_data())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_data())
	|| (tcpmss !=  nullptr && tcpmss->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (tos !=  nullptr && tos->has_data())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_group_name.operation)
	|| is_set(additional_paths_receive_capability.operation)
	|| is_set(additional_paths_send_capability.operation)
	|| is_set(bfd_enable_modes.operation)
	|| is_set(bfd_minimum_interval.operation)
	|| is_set(bfd_multiplier.operation)
	|| is_set(create.operation)
	|| is_set(description.operation)
	|| is_set(ebgp_recv_dmz.operation)
	|| is_set(ebgp_send_dmz_enable_modes.operation)
	|| is_set(egress_peer_engineering.operation)
	|| is_set(enforce_first_as.operation)
	|| is_set(idle_watch_time.operation)
	|| is_set(ignore_connected_check_ebgp.operation)
	|| is_set(internal_vpn_client_ibgpce.operation)
	|| is_set(max_peers.operation)
	|| is_set(neighbor_graceful_restart.operation)
	|| is_set(neighbor_graceful_restart_stalepath_time.operation)
	|| is_set(neighbor_graceful_restart_time.operation)
	|| is_set(neighbor_group_add_member.operation)
	|| is_set(propagate_dmz_link_bandwidth.operation)
	|| is_set(remote_as_list.operation)
	|| is_set(rpki_bestpath_origin_as_allow_invalid.operation)
	|| is_set(rpki_origin_as_validation_disable.operation)
	|| is_set(session_group_add_member.operation)
	|| is_set(session_open_mode.operation)
	|| is_set(shutdown.operation)
	|| is_set(suppress_all_capabilities.operation)
	|| is_set(suppress_four_byte_as_capability.operation)
	|| is_set(ttl_security.operation)
	|| is_set(update_source_interface.operation)
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_operation())
	|| (bmp_activates !=  nullptr && bmp_activates->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_operation())
	|| (keychain !=  nullptr && keychain->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (local_as !=  nullptr && local_as->has_operation())
	|| (msg_log_in !=  nullptr && msg_log_in->has_operation())
	|| (msg_log_out !=  nullptr && msg_log_out->has_operation())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_operation())
	|| (neighbor_group_afs !=  nullptr && neighbor_group_afs->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_operation())
	|| (remote_as !=  nullptr && remote_as->has_operation())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_operation())
	|| (tcpmss !=  nullptr && tcpmss->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (tos !=  nullptr && tos->has_operation())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-group" <<"[neighbor-group-name='" <<neighbor_group_name <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborGroup' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_group_name.is_set || is_set(neighbor_group_name.operation)) leaf_name_data.push_back(neighbor_group_name.get_name_leafdata());
    if (additional_paths_receive_capability.is_set || is_set(additional_paths_receive_capability.operation)) leaf_name_data.push_back(additional_paths_receive_capability.get_name_leafdata());
    if (additional_paths_send_capability.is_set || is_set(additional_paths_send_capability.operation)) leaf_name_data.push_back(additional_paths_send_capability.get_name_leafdata());
    if (bfd_enable_modes.is_set || is_set(bfd_enable_modes.operation)) leaf_name_data.push_back(bfd_enable_modes.get_name_leafdata());
    if (bfd_minimum_interval.is_set || is_set(bfd_minimum_interval.operation)) leaf_name_data.push_back(bfd_minimum_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.operation)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (create.is_set || is_set(create.operation)) leaf_name_data.push_back(create.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (ebgp_recv_dmz.is_set || is_set(ebgp_recv_dmz.operation)) leaf_name_data.push_back(ebgp_recv_dmz.get_name_leafdata());
    if (ebgp_send_dmz_enable_modes.is_set || is_set(ebgp_send_dmz_enable_modes.operation)) leaf_name_data.push_back(ebgp_send_dmz_enable_modes.get_name_leafdata());
    if (egress_peer_engineering.is_set || is_set(egress_peer_engineering.operation)) leaf_name_data.push_back(egress_peer_engineering.get_name_leafdata());
    if (enforce_first_as.is_set || is_set(enforce_first_as.operation)) leaf_name_data.push_back(enforce_first_as.get_name_leafdata());
    if (idle_watch_time.is_set || is_set(idle_watch_time.operation)) leaf_name_data.push_back(idle_watch_time.get_name_leafdata());
    if (ignore_connected_check_ebgp.is_set || is_set(ignore_connected_check_ebgp.operation)) leaf_name_data.push_back(ignore_connected_check_ebgp.get_name_leafdata());
    if (internal_vpn_client_ibgpce.is_set || is_set(internal_vpn_client_ibgpce.operation)) leaf_name_data.push_back(internal_vpn_client_ibgpce.get_name_leafdata());
    if (max_peers.is_set || is_set(max_peers.operation)) leaf_name_data.push_back(max_peers.get_name_leafdata());
    if (neighbor_graceful_restart.is_set || is_set(neighbor_graceful_restart.operation)) leaf_name_data.push_back(neighbor_graceful_restart.get_name_leafdata());
    if (neighbor_graceful_restart_stalepath_time.is_set || is_set(neighbor_graceful_restart_stalepath_time.operation)) leaf_name_data.push_back(neighbor_graceful_restart_stalepath_time.get_name_leafdata());
    if (neighbor_graceful_restart_time.is_set || is_set(neighbor_graceful_restart_time.operation)) leaf_name_data.push_back(neighbor_graceful_restart_time.get_name_leafdata());
    if (neighbor_group_add_member.is_set || is_set(neighbor_group_add_member.operation)) leaf_name_data.push_back(neighbor_group_add_member.get_name_leafdata());
    if (propagate_dmz_link_bandwidth.is_set || is_set(propagate_dmz_link_bandwidth.operation)) leaf_name_data.push_back(propagate_dmz_link_bandwidth.get_name_leafdata());
    if (remote_as_list.is_set || is_set(remote_as_list.operation)) leaf_name_data.push_back(remote_as_list.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.operation)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.operation)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (session_group_add_member.is_set || is_set(session_group_add_member.operation)) leaf_name_data.push_back(session_group_add_member.get_name_leafdata());
    if (session_open_mode.is_set || is_set(session_open_mode.operation)) leaf_name_data.push_back(session_open_mode.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (suppress_all_capabilities.is_set || is_set(suppress_all_capabilities.operation)) leaf_name_data.push_back(suppress_all_capabilities.get_name_leafdata());
    if (suppress_four_byte_as_capability.is_set || is_set(suppress_four_byte_as_capability.operation)) leaf_name_data.push_back(suppress_four_byte_as_capability.get_name_leafdata());
    if (ttl_security.is_set || is_set(ttl_security.operation)) leaf_name_data.push_back(ttl_security.get_name_leafdata());
    if (update_source_interface.is_set || is_set(update_source_interface.operation)) leaf_name_data.push_back(update_source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "advertisement-interval")
    {
        if(advertisement_interval != nullptr)
        {
            children["advertisement-interval"] = advertisement_interval;
        }
        else
        {
            advertisement_interval = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval>();
            advertisement_interval->parent = this;
            children["advertisement-interval"] = advertisement_interval;
        }
        return children.at("advertisement-interval");
    }

    if(child_yang_name == "bmp-activates")
    {
        if(bmp_activates != nullptr)
        {
            children["bmp-activates"] = bmp_activates;
        }
        else
        {
            bmp_activates = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates>();
            bmp_activates->parent = this;
            children["bmp-activates"] = bmp_activates;
        }
        return children.at("bmp-activates");
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop != nullptr)
        {
            children["ebgp-multihop"] = ebgp_multihop;
        }
        else
        {
            ebgp_multihop = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop>();
            ebgp_multihop->parent = this;
            children["ebgp-multihop"] = ebgp_multihop;
        }
        return children.at("ebgp-multihop");
    }

    if(child_yang_name == "graceful-maintenance")
    {
        if(graceful_maintenance != nullptr)
        {
            children["graceful-maintenance"] = graceful_maintenance;
        }
        else
        {
            graceful_maintenance = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance>();
            graceful_maintenance->parent = this;
            children["graceful-maintenance"] = graceful_maintenance;
        }
        return children.at("graceful-maintenance");
    }

    if(child_yang_name == "keychain")
    {
        if(keychain != nullptr)
        {
            children["keychain"] = keychain;
        }
        else
        {
            keychain = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain>();
            keychain->parent = this;
            children["keychain"] = keychain;
        }
        return children.at("keychain");
    }

    if(child_yang_name == "local-address")
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address;
        }
        else
        {
            local_address = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress>();
            local_address->parent = this;
            children["local-address"] = local_address;
        }
        return children.at("local-address");
    }

    if(child_yang_name == "local-as")
    {
        if(local_as != nullptr)
        {
            children["local-as"] = local_as;
        }
        else
        {
            local_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs>();
            local_as->parent = this;
            children["local-as"] = local_as;
        }
        return children.at("local-as");
    }

    if(child_yang_name == "msg-log-in")
    {
        if(msg_log_in != nullptr)
        {
            children["msg-log-in"] = msg_log_in;
        }
        else
        {
            msg_log_in = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn>();
            msg_log_in->parent = this;
            children["msg-log-in"] = msg_log_in;
        }
        return children.at("msg-log-in");
    }

    if(child_yang_name == "msg-log-out")
    {
        if(msg_log_out != nullptr)
        {
            children["msg-log-out"] = msg_log_out;
        }
        else
        {
            msg_log_out = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut>();
            msg_log_out->parent = this;
            children["msg-log-out"] = msg_log_out;
        }
        return children.at("msg-log-out");
    }

    if(child_yang_name == "neighbor-cluster-id")
    {
        if(neighbor_cluster_id != nullptr)
        {
            children["neighbor-cluster-id"] = neighbor_cluster_id;
        }
        else
        {
            neighbor_cluster_id = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId>();
            neighbor_cluster_id->parent = this;
            children["neighbor-cluster-id"] = neighbor_cluster_id;
        }
        return children.at("neighbor-cluster-id");
    }

    if(child_yang_name == "neighbor-group-afs")
    {
        if(neighbor_group_afs != nullptr)
        {
            children["neighbor-group-afs"] = neighbor_group_afs;
        }
        else
        {
            neighbor_group_afs = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs>();
            neighbor_group_afs->parent = this;
            children["neighbor-group-afs"] = neighbor_group_afs;
        }
        return children.at("neighbor-group-afs");
    }

    if(child_yang_name == "password")
    {
        if(password != nullptr)
        {
            children["password"] = password;
        }
        else
        {
            password = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password>();
            password->parent = this;
            children["password"] = password;
        }
        return children.at("password");
    }

    if(child_yang_name == "receive-buffer-size")
    {
        if(receive_buffer_size != nullptr)
        {
            children["receive-buffer-size"] = receive_buffer_size;
        }
        else
        {
            receive_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize>();
            receive_buffer_size->parent = this;
            children["receive-buffer-size"] = receive_buffer_size;
        }
        return children.at("receive-buffer-size");
    }

    if(child_yang_name == "remote-as")
    {
        if(remote_as != nullptr)
        {
            children["remote-as"] = remote_as;
        }
        else
        {
            remote_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs>();
            remote_as->parent = this;
            children["remote-as"] = remote_as;
        }
        return children.at("remote-as");
    }

    if(child_yang_name == "send-buffer-size")
    {
        if(send_buffer_size != nullptr)
        {
            children["send-buffer-size"] = send_buffer_size;
        }
        else
        {
            send_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize>();
            send_buffer_size->parent = this;
            children["send-buffer-size"] = send_buffer_size;
        }
        return children.at("send-buffer-size");
    }

    if(child_yang_name == "tcpmss")
    {
        if(tcpmss != nullptr)
        {
            children["tcpmss"] = tcpmss;
        }
        else
        {
            tcpmss = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss>();
            tcpmss->parent = this;
            children["tcpmss"] = tcpmss;
        }
        return children.at("tcpmss");
    }

    if(child_yang_name == "timers")
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
        else
        {
            timers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers>();
            timers->parent = this;
            children["timers"] = timers;
        }
        return children.at("timers");
    }

    if(child_yang_name == "tos")
    {
        if(tos != nullptr)
        {
            children["tos"] = tos;
        }
        else
        {
            tos = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos>();
            tos->parent = this;
            children["tos"] = tos;
        }
        return children.at("tos");
    }

    if(child_yang_name == "update-in-filtering")
    {
        if(update_in_filtering != nullptr)
        {
            children["update-in-filtering"] = update_in_filtering;
        }
        else
        {
            update_in_filtering = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering>();
            update_in_filtering->parent = this;
            children["update-in-filtering"] = update_in_filtering;
        }
        return children.at("update-in-filtering");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::get_children()
{
    if(children.find("advertisement-interval") == children.end())
    {
        if(advertisement_interval != nullptr)
        {
            children["advertisement-interval"] = advertisement_interval;
        }
    }

    if(children.find("bmp-activates") == children.end())
    {
        if(bmp_activates != nullptr)
        {
            children["bmp-activates"] = bmp_activates;
        }
    }

    if(children.find("ebgp-multihop") == children.end())
    {
        if(ebgp_multihop != nullptr)
        {
            children["ebgp-multihop"] = ebgp_multihop;
        }
    }

    if(children.find("graceful-maintenance") == children.end())
    {
        if(graceful_maintenance != nullptr)
        {
            children["graceful-maintenance"] = graceful_maintenance;
        }
    }

    if(children.find("keychain") == children.end())
    {
        if(keychain != nullptr)
        {
            children["keychain"] = keychain;
        }
    }

    if(children.find("local-address") == children.end())
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address;
        }
    }

    if(children.find("local-as") == children.end())
    {
        if(local_as != nullptr)
        {
            children["local-as"] = local_as;
        }
    }

    if(children.find("msg-log-in") == children.end())
    {
        if(msg_log_in != nullptr)
        {
            children["msg-log-in"] = msg_log_in;
        }
    }

    if(children.find("msg-log-out") == children.end())
    {
        if(msg_log_out != nullptr)
        {
            children["msg-log-out"] = msg_log_out;
        }
    }

    if(children.find("neighbor-cluster-id") == children.end())
    {
        if(neighbor_cluster_id != nullptr)
        {
            children["neighbor-cluster-id"] = neighbor_cluster_id;
        }
    }

    if(children.find("neighbor-group-afs") == children.end())
    {
        if(neighbor_group_afs != nullptr)
        {
            children["neighbor-group-afs"] = neighbor_group_afs;
        }
    }

    if(children.find("password") == children.end())
    {
        if(password != nullptr)
        {
            children["password"] = password;
        }
    }

    if(children.find("receive-buffer-size") == children.end())
    {
        if(receive_buffer_size != nullptr)
        {
            children["receive-buffer-size"] = receive_buffer_size;
        }
    }

    if(children.find("remote-as") == children.end())
    {
        if(remote_as != nullptr)
        {
            children["remote-as"] = remote_as;
        }
    }

    if(children.find("send-buffer-size") == children.end())
    {
        if(send_buffer_size != nullptr)
        {
            children["send-buffer-size"] = send_buffer_size;
        }
    }

    if(children.find("tcpmss") == children.end())
    {
        if(tcpmss != nullptr)
        {
            children["tcpmss"] = tcpmss;
        }
    }

    if(children.find("timers") == children.end())
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
    }

    if(children.find("tos") == children.end())
    {
        if(tos != nullptr)
        {
            children["tos"] = tos;
        }
    }

    if(children.find("update-in-filtering") == children.end())
    {
        if(update_in_filtering != nullptr)
        {
            children["update-in-filtering"] = update_in_filtering;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-group-name")
    {
        neighbor_group_name = value;
    }
    if(value_path == "additional-paths-receive-capability")
    {
        additional_paths_receive_capability = value;
    }
    if(value_path == "additional-paths-send-capability")
    {
        additional_paths_send_capability = value;
    }
    if(value_path == "bfd-enable-modes")
    {
        bfd_enable_modes = value;
    }
    if(value_path == "bfd-minimum-interval")
    {
        bfd_minimum_interval = value;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
    }
    if(value_path == "create")
    {
        create = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz = value;
    }
    if(value_path == "ebgp-send-dmz-enable-modes")
    {
        ebgp_send_dmz_enable_modes = value;
    }
    if(value_path == "egress-peer-engineering")
    {
        egress_peer_engineering = value;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as = value;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time = value;
    }
    if(value_path == "ignore-connected-check-ebgp")
    {
        ignore_connected_check_ebgp = value;
    }
    if(value_path == "internal-vpn-client-ibgpce")
    {
        internal_vpn_client_ibgpce = value;
    }
    if(value_path == "max-peers")
    {
        max_peers = value;
    }
    if(value_path == "neighbor-graceful-restart")
    {
        neighbor_graceful_restart = value;
    }
    if(value_path == "neighbor-graceful-restart-stalepath-time")
    {
        neighbor_graceful_restart_stalepath_time = value;
    }
    if(value_path == "neighbor-graceful-restart-time")
    {
        neighbor_graceful_restart_time = value;
    }
    if(value_path == "neighbor-group-add-member")
    {
        neighbor_group_add_member = value;
    }
    if(value_path == "propagate-dmz-link-bandwidth")
    {
        propagate_dmz_link_bandwidth = value;
    }
    if(value_path == "remote-as-list")
    {
        remote_as_list = value;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
    }
    if(value_path == "session-group-add-member")
    {
        session_group_add_member = value;
    }
    if(value_path == "session-open-mode")
    {
        session_open_mode = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "suppress-all-capabilities")
    {
        suppress_all_capabilities = value;
    }
    if(value_path == "suppress-four-byte-as-capability")
    {
        suppress_four_byte_as_capability = value;
    }
    if(value_path == "ttl-security")
    {
        ttl_security = value;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAfs()
{
    yang_name = "neighbor-group-afs"; yang_parent_name = "neighbor-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::~NeighborGroupAfs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::has_data() const
{
    for (std::size_t index=0; index<neighbor_group_af.size(); index++)
    {
        if(neighbor_group_af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::has_operation() const
{
    for (std::size_t index=0; index<neighbor_group_af.size(); index++)
    {
        if(neighbor_group_af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-group-afs";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborGroupAfs' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-group-af")
    {
        for(auto const & c : neighbor_group_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf>();
        c->parent = this;
        neighbor_group_af.push_back(std::move(c));
        children[segment_path] = neighbor_group_af.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::get_children()
{
    for (auto const & c : neighbor_group_af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborGroupAf()
    :
    af_name{YType::enumeration, "af-name"},
    accept_own{YType::boolean, "accept-own"},
    accept_route_legacy_rt{YType::boolean, "accept-route-legacy-rt"},
    activate{YType::empty, "activate"},
    advertise_local_labeled_route{YType::enumeration, "advertise-local-labeled-route"},
    advertise_orf{YType::enumeration, "advertise-orf"},
    advertise_permanent_network{YType::empty, "advertise-permanent-network"},
    af_group{YType::str, "af-group"},
    aigp{YType::enumeration, "aigp"},
    aigp_send_med{YType::enumeration, "aigp-send-med"},
    allow_as_in{YType::uint32, "allow-as-in"},
    as_override{YType::boolean, "as-override"},
    default_weight{YType::uint32, "default-weight"},
    encapsulation_type{YType::enumeration, "encapsulation-type"},
    flowspec_validation{YType::enumeration, "flowspec-validation"},
    l2vpn_signalling{YType::enumeration, "l2vpn-signalling"},
    multipath{YType::empty, "multipath"},
    neighbor_af_long_lived_graceful_restart_capable{YType::boolean, "neighbor-af-long-lived-graceful-restart-capable"},
    next_hop_self{YType::boolean, "next-hop-self"},
    next_hop_unchanged{YType::boolean, "next-hop-unchanged"},
    next_hop_unchanged_multipath{YType::boolean, "next-hop-unchanged-multipath"},
    prefix_orf_policy{YType::str, "prefix-orf-policy"},
    route_policy_in{YType::str, "route-policy-in"},
    route_policy_out{YType::str, "route-policy-out"},
    route_reflector_client{YType::boolean, "route-reflector-client"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    send_community_ebgp{YType::boolean, "send-community-ebgp"},
    send_community_ebgp_graceful_shutdown{YType::boolean, "send-community-ebgp-graceful-shutdown"},
    send_ext_community_ebgp{YType::boolean, "send-ext-community-ebgp"},
    send_multicast_attr{YType::enumeration, "send-multicast-attr"}
    	,
    advertise_def_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4>())
	,advertise_def_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6>())
	,advertise_disable(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable>())
	,advertise_l2vpnevpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2Vpnevpn>())
	,advertise_local_l2vpnevpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2Vpnevpn>())
	,advertise_local_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4>())
	,advertise_local_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6>())
	,advertise_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4>())
	,advertise_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6>())
	,advertise_vrf_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4>())
	,advertise_vrf_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6>())
	,aigp_cost_community(nullptr) // presence node
	,default_originate(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate>())
	,import(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import>())
	,maximum_prefixes(nullptr) // presence node
	,neighbor_af_long_lived_graceful_restart_stale_time(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime>())
	,remove_private_as_entire_as_path(nullptr) // presence node
	,remove_private_as_entire_as_path_inbound(nullptr) // presence node
	,site_of_origin(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin>())
	,soft_reconfiguration(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration>())
{
    advertise_def_imp_disable_v4->parent = this;
    children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;

    advertise_def_imp_disable_v6->parent = this;
    children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;

    advertise_disable->parent = this;
    children["advertise-disable"] = advertise_disable;

    advertise_l2vpnevpn->parent = this;
    children["advertise-l2vpnevpn"] = advertise_l2vpnevpn;

    advertise_local_l2vpnevpn->parent = this;
    children["advertise-local-l2vpnevpn"] = advertise_local_l2vpnevpn;

    advertise_local_v4->parent = this;
    children["advertise-local-v4"] = advertise_local_v4;

    advertise_local_v6->parent = this;
    children["advertise-local-v6"] = advertise_local_v6;

    advertise_v4->parent = this;
    children["advertise-v4"] = advertise_v4;

    advertise_v6->parent = this;
    children["advertise-v6"] = advertise_v6;

    advertise_vrf_imp_disable_v4->parent = this;
    children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;

    advertise_vrf_imp_disable_v6->parent = this;
    children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;

    default_originate->parent = this;
    children["default-originate"] = default_originate;

    import->parent = this;
    children["import"] = import;

    neighbor_af_long_lived_graceful_restart_stale_time->parent = this;
    children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;

    site_of_origin->parent = this;
    children["site-of-origin"] = site_of_origin;

    soft_reconfiguration->parent = this;
    children["soft-reconfiguration"] = soft_reconfiguration;

    yang_name = "neighbor-group-af"; yang_parent_name = "neighbor-group-afs";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::~NeighborGroupAf()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::has_data() const
{
    return af_name.is_set
	|| accept_own.is_set
	|| accept_route_legacy_rt.is_set
	|| activate.is_set
	|| advertise_local_labeled_route.is_set
	|| advertise_orf.is_set
	|| advertise_permanent_network.is_set
	|| af_group.is_set
	|| aigp.is_set
	|| aigp_send_med.is_set
	|| allow_as_in.is_set
	|| as_override.is_set
	|| default_weight.is_set
	|| encapsulation_type.is_set
	|| flowspec_validation.is_set
	|| l2vpn_signalling.is_set
	|| multipath.is_set
	|| neighbor_af_long_lived_graceful_restart_capable.is_set
	|| next_hop_self.is_set
	|| next_hop_unchanged.is_set
	|| next_hop_unchanged_multipath.is_set
	|| prefix_orf_policy.is_set
	|| route_policy_in.is_set
	|| route_policy_out.is_set
	|| route_reflector_client.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| send_community_ebgp.is_set
	|| send_community_ebgp_graceful_shutdown.is_set
	|| send_ext_community_ebgp.is_set
	|| send_multicast_attr.is_set
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_data())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_data())
	|| (advertise_disable !=  nullptr && advertise_disable->has_data())
	|| (advertise_l2vpnevpn !=  nullptr && advertise_l2vpnevpn->has_data())
	|| (advertise_local_l2vpnevpn !=  nullptr && advertise_local_l2vpnevpn->has_data())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_data())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_data())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_data())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_data())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_data())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_data())
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_data())
	|| (default_originate !=  nullptr && default_originate->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_data())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_data())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_data())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_data())
	|| (site_of_origin !=  nullptr && site_of_origin->has_data())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(accept_own.operation)
	|| is_set(accept_route_legacy_rt.operation)
	|| is_set(activate.operation)
	|| is_set(advertise_local_labeled_route.operation)
	|| is_set(advertise_orf.operation)
	|| is_set(advertise_permanent_network.operation)
	|| is_set(af_group.operation)
	|| is_set(aigp.operation)
	|| is_set(aigp_send_med.operation)
	|| is_set(allow_as_in.operation)
	|| is_set(as_override.operation)
	|| is_set(default_weight.operation)
	|| is_set(encapsulation_type.operation)
	|| is_set(flowspec_validation.operation)
	|| is_set(l2vpn_signalling.operation)
	|| is_set(multipath.operation)
	|| is_set(neighbor_af_long_lived_graceful_restart_capable.operation)
	|| is_set(next_hop_self.operation)
	|| is_set(next_hop_unchanged.operation)
	|| is_set(next_hop_unchanged_multipath.operation)
	|| is_set(prefix_orf_policy.operation)
	|| is_set(route_policy_in.operation)
	|| is_set(route_policy_out.operation)
	|| is_set(route_reflector_client.operation)
	|| is_set(rpki_bestpath_origin_as_allow_invalid.operation)
	|| is_set(rpki_origin_as_validation_disable.operation)
	|| is_set(send_community_ebgp.operation)
	|| is_set(send_community_ebgp_graceful_shutdown.operation)
	|| is_set(send_ext_community_ebgp.operation)
	|| is_set(send_multicast_attr.operation)
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_operation())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_operation())
	|| (advertise_disable !=  nullptr && advertise_disable->has_operation())
	|| (advertise_l2vpnevpn !=  nullptr && advertise_l2vpnevpn->has_operation())
	|| (advertise_local_l2vpnevpn !=  nullptr && advertise_local_l2vpnevpn->has_operation())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_operation())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_operation())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_operation())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_operation())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_operation())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_operation())
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_operation())
	|| (default_originate !=  nullptr && default_originate->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_operation())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_operation())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_operation())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_operation())
	|| (site_of_origin !=  nullptr && site_of_origin->has_operation())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-group-af" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborGroupAf' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (accept_own.is_set || is_set(accept_own.operation)) leaf_name_data.push_back(accept_own.get_name_leafdata());
    if (accept_route_legacy_rt.is_set || is_set(accept_route_legacy_rt.operation)) leaf_name_data.push_back(accept_route_legacy_rt.get_name_leafdata());
    if (activate.is_set || is_set(activate.operation)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (advertise_local_labeled_route.is_set || is_set(advertise_local_labeled_route.operation)) leaf_name_data.push_back(advertise_local_labeled_route.get_name_leafdata());
    if (advertise_orf.is_set || is_set(advertise_orf.operation)) leaf_name_data.push_back(advertise_orf.get_name_leafdata());
    if (advertise_permanent_network.is_set || is_set(advertise_permanent_network.operation)) leaf_name_data.push_back(advertise_permanent_network.get_name_leafdata());
    if (af_group.is_set || is_set(af_group.operation)) leaf_name_data.push_back(af_group.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.operation)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (aigp_send_med.is_set || is_set(aigp_send_med.operation)) leaf_name_data.push_back(aigp_send_med.get_name_leafdata());
    if (allow_as_in.is_set || is_set(allow_as_in.operation)) leaf_name_data.push_back(allow_as_in.get_name_leafdata());
    if (as_override.is_set || is_set(as_override.operation)) leaf_name_data.push_back(as_override.get_name_leafdata());
    if (default_weight.is_set || is_set(default_weight.operation)) leaf_name_data.push_back(default_weight.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.operation)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (flowspec_validation.is_set || is_set(flowspec_validation.operation)) leaf_name_data.push_back(flowspec_validation.get_name_leafdata());
    if (l2vpn_signalling.is_set || is_set(l2vpn_signalling.operation)) leaf_name_data.push_back(l2vpn_signalling.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.operation)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (neighbor_af_long_lived_graceful_restart_capable.is_set || is_set(neighbor_af_long_lived_graceful_restart_capable.operation)) leaf_name_data.push_back(neighbor_af_long_lived_graceful_restart_capable.get_name_leafdata());
    if (next_hop_self.is_set || is_set(next_hop_self.operation)) leaf_name_data.push_back(next_hop_self.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.operation)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (next_hop_unchanged_multipath.is_set || is_set(next_hop_unchanged_multipath.operation)) leaf_name_data.push_back(next_hop_unchanged_multipath.get_name_leafdata());
    if (prefix_orf_policy.is_set || is_set(prefix_orf_policy.operation)) leaf_name_data.push_back(prefix_orf_policy.get_name_leafdata());
    if (route_policy_in.is_set || is_set(route_policy_in.operation)) leaf_name_data.push_back(route_policy_in.get_name_leafdata());
    if (route_policy_out.is_set || is_set(route_policy_out.operation)) leaf_name_data.push_back(route_policy_out.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.operation)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.operation)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.operation)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (send_community_ebgp.is_set || is_set(send_community_ebgp.operation)) leaf_name_data.push_back(send_community_ebgp.get_name_leafdata());
    if (send_community_ebgp_graceful_shutdown.is_set || is_set(send_community_ebgp_graceful_shutdown.operation)) leaf_name_data.push_back(send_community_ebgp_graceful_shutdown.get_name_leafdata());
    if (send_ext_community_ebgp.is_set || is_set(send_ext_community_ebgp.operation)) leaf_name_data.push_back(send_ext_community_ebgp.get_name_leafdata());
    if (send_multicast_attr.is_set || is_set(send_multicast_attr.operation)) leaf_name_data.push_back(send_multicast_attr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "advertise-def-imp-disable-v4")
    {
        if(advertise_def_imp_disable_v4 != nullptr)
        {
            children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;
        }
        else
        {
            advertise_def_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4>();
            advertise_def_imp_disable_v4->parent = this;
            children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;
        }
        return children.at("advertise-def-imp-disable-v4");
    }

    if(child_yang_name == "advertise-def-imp-disable-v6")
    {
        if(advertise_def_imp_disable_v6 != nullptr)
        {
            children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;
        }
        else
        {
            advertise_def_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6>();
            advertise_def_imp_disable_v6->parent = this;
            children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;
        }
        return children.at("advertise-def-imp-disable-v6");
    }

    if(child_yang_name == "advertise-disable")
    {
        if(advertise_disable != nullptr)
        {
            children["advertise-disable"] = advertise_disable;
        }
        else
        {
            advertise_disable = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable>();
            advertise_disable->parent = this;
            children["advertise-disable"] = advertise_disable;
        }
        return children.at("advertise-disable");
    }

    if(child_yang_name == "advertise-l2vpnevpn")
    {
        if(advertise_l2vpnevpn != nullptr)
        {
            children["advertise-l2vpnevpn"] = advertise_l2vpnevpn;
        }
        else
        {
            advertise_l2vpnevpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2Vpnevpn>();
            advertise_l2vpnevpn->parent = this;
            children["advertise-l2vpnevpn"] = advertise_l2vpnevpn;
        }
        return children.at("advertise-l2vpnevpn");
    }

    if(child_yang_name == "advertise-local-l2vpnevpn")
    {
        if(advertise_local_l2vpnevpn != nullptr)
        {
            children["advertise-local-l2vpnevpn"] = advertise_local_l2vpnevpn;
        }
        else
        {
            advertise_local_l2vpnevpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2Vpnevpn>();
            advertise_local_l2vpnevpn->parent = this;
            children["advertise-local-l2vpnevpn"] = advertise_local_l2vpnevpn;
        }
        return children.at("advertise-local-l2vpnevpn");
    }

    if(child_yang_name == "advertise-local-v4")
    {
        if(advertise_local_v4 != nullptr)
        {
            children["advertise-local-v4"] = advertise_local_v4;
        }
        else
        {
            advertise_local_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4>();
            advertise_local_v4->parent = this;
            children["advertise-local-v4"] = advertise_local_v4;
        }
        return children.at("advertise-local-v4");
    }

    if(child_yang_name == "advertise-local-v6")
    {
        if(advertise_local_v6 != nullptr)
        {
            children["advertise-local-v6"] = advertise_local_v6;
        }
        else
        {
            advertise_local_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6>();
            advertise_local_v6->parent = this;
            children["advertise-local-v6"] = advertise_local_v6;
        }
        return children.at("advertise-local-v6");
    }

    if(child_yang_name == "advertise-v4")
    {
        if(advertise_v4 != nullptr)
        {
            children["advertise-v4"] = advertise_v4;
        }
        else
        {
            advertise_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4>();
            advertise_v4->parent = this;
            children["advertise-v4"] = advertise_v4;
        }
        return children.at("advertise-v4");
    }

    if(child_yang_name == "advertise-v6")
    {
        if(advertise_v6 != nullptr)
        {
            children["advertise-v6"] = advertise_v6;
        }
        else
        {
            advertise_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6>();
            advertise_v6->parent = this;
            children["advertise-v6"] = advertise_v6;
        }
        return children.at("advertise-v6");
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v4")
    {
        if(advertise_vrf_imp_disable_v4 != nullptr)
        {
            children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;
        }
        else
        {
            advertise_vrf_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4>();
            advertise_vrf_imp_disable_v4->parent = this;
            children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;
        }
        return children.at("advertise-vrf-imp-disable-v4");
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v6")
    {
        if(advertise_vrf_imp_disable_v6 != nullptr)
        {
            children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;
        }
        else
        {
            advertise_vrf_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6>();
            advertise_vrf_imp_disable_v6->parent = this;
            children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;
        }
        return children.at("advertise-vrf-imp-disable-v6");
    }

    if(child_yang_name == "aigp-cost-community")
    {
        if(aigp_cost_community != nullptr)
        {
            children["aigp-cost-community"] = aigp_cost_community;
        }
        else
        {
            aigp_cost_community = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity>();
            aigp_cost_community->parent = this;
            children["aigp-cost-community"] = aigp_cost_community;
        }
        return children.at("aigp-cost-community");
    }

    if(child_yang_name == "default-originate")
    {
        if(default_originate != nullptr)
        {
            children["default-originate"] = default_originate;
        }
        else
        {
            default_originate = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate>();
            default_originate->parent = this;
            children["default-originate"] = default_originate;
        }
        return children.at("default-originate");
    }

    if(child_yang_name == "import")
    {
        if(import != nullptr)
        {
            children["import"] = import;
        }
        else
        {
            import = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import>();
            import->parent = this;
            children["import"] = import;
        }
        return children.at("import");
    }

    if(child_yang_name == "maximum-prefixes")
    {
        if(maximum_prefixes != nullptr)
        {
            children["maximum-prefixes"] = maximum_prefixes;
        }
        else
        {
            maximum_prefixes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes>();
            maximum_prefixes->parent = this;
            children["maximum-prefixes"] = maximum_prefixes;
        }
        return children.at("maximum-prefixes");
    }

    if(child_yang_name == "neighbor-af-long-lived-graceful-restart-stale-time")
    {
        if(neighbor_af_long_lived_graceful_restart_stale_time != nullptr)
        {
            children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;
        }
        else
        {
            neighbor_af_long_lived_graceful_restart_stale_time = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime>();
            neighbor_af_long_lived_graceful_restart_stale_time->parent = this;
            children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;
        }
        return children.at("neighbor-af-long-lived-graceful-restart-stale-time");
    }

    if(child_yang_name == "remove-private-as-entire-as-path")
    {
        if(remove_private_as_entire_as_path != nullptr)
        {
            children["remove-private-as-entire-as-path"] = remove_private_as_entire_as_path;
        }
        else
        {
            remove_private_as_entire_as_path = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath>();
            remove_private_as_entire_as_path->parent = this;
            children["remove-private-as-entire-as-path"] = remove_private_as_entire_as_path;
        }
        return children.at("remove-private-as-entire-as-path");
    }

    if(child_yang_name == "remove-private-as-entire-as-path-inbound")
    {
        if(remove_private_as_entire_as_path_inbound != nullptr)
        {
            children["remove-private-as-entire-as-path-inbound"] = remove_private_as_entire_as_path_inbound;
        }
        else
        {
            remove_private_as_entire_as_path_inbound = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound>();
            remove_private_as_entire_as_path_inbound->parent = this;
            children["remove-private-as-entire-as-path-inbound"] = remove_private_as_entire_as_path_inbound;
        }
        return children.at("remove-private-as-entire-as-path-inbound");
    }

    if(child_yang_name == "site-of-origin")
    {
        if(site_of_origin != nullptr)
        {
            children["site-of-origin"] = site_of_origin;
        }
        else
        {
            site_of_origin = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin>();
            site_of_origin->parent = this;
            children["site-of-origin"] = site_of_origin;
        }
        return children.at("site-of-origin");
    }

    if(child_yang_name == "soft-reconfiguration")
    {
        if(soft_reconfiguration != nullptr)
        {
            children["soft-reconfiguration"] = soft_reconfiguration;
        }
        else
        {
            soft_reconfiguration = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration>();
            soft_reconfiguration->parent = this;
            children["soft-reconfiguration"] = soft_reconfiguration;
        }
        return children.at("soft-reconfiguration");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::get_children()
{
    if(children.find("advertise-def-imp-disable-v4") == children.end())
    {
        if(advertise_def_imp_disable_v4 != nullptr)
        {
            children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;
        }
    }

    if(children.find("advertise-def-imp-disable-v6") == children.end())
    {
        if(advertise_def_imp_disable_v6 != nullptr)
        {
            children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;
        }
    }

    if(children.find("advertise-disable") == children.end())
    {
        if(advertise_disable != nullptr)
        {
            children["advertise-disable"] = advertise_disable;
        }
    }

    if(children.find("advertise-l2vpnevpn") == children.end())
    {
        if(advertise_l2vpnevpn != nullptr)
        {
            children["advertise-l2vpnevpn"] = advertise_l2vpnevpn;
        }
    }

    if(children.find("advertise-local-l2vpnevpn") == children.end())
    {
        if(advertise_local_l2vpnevpn != nullptr)
        {
            children["advertise-local-l2vpnevpn"] = advertise_local_l2vpnevpn;
        }
    }

    if(children.find("advertise-local-v4") == children.end())
    {
        if(advertise_local_v4 != nullptr)
        {
            children["advertise-local-v4"] = advertise_local_v4;
        }
    }

    if(children.find("advertise-local-v6") == children.end())
    {
        if(advertise_local_v6 != nullptr)
        {
            children["advertise-local-v6"] = advertise_local_v6;
        }
    }

    if(children.find("advertise-v4") == children.end())
    {
        if(advertise_v4 != nullptr)
        {
            children["advertise-v4"] = advertise_v4;
        }
    }

    if(children.find("advertise-v6") == children.end())
    {
        if(advertise_v6 != nullptr)
        {
            children["advertise-v6"] = advertise_v6;
        }
    }

    if(children.find("advertise-vrf-imp-disable-v4") == children.end())
    {
        if(advertise_vrf_imp_disable_v4 != nullptr)
        {
            children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;
        }
    }

    if(children.find("advertise-vrf-imp-disable-v6") == children.end())
    {
        if(advertise_vrf_imp_disable_v6 != nullptr)
        {
            children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;
        }
    }

    if(children.find("aigp-cost-community") == children.end())
    {
        if(aigp_cost_community != nullptr)
        {
            children["aigp-cost-community"] = aigp_cost_community;
        }
    }

    if(children.find("default-originate") == children.end())
    {
        if(default_originate != nullptr)
        {
            children["default-originate"] = default_originate;
        }
    }

    if(children.find("import") == children.end())
    {
        if(import != nullptr)
        {
            children["import"] = import;
        }
    }

    if(children.find("maximum-prefixes") == children.end())
    {
        if(maximum_prefixes != nullptr)
        {
            children["maximum-prefixes"] = maximum_prefixes;
        }
    }

    if(children.find("neighbor-af-long-lived-graceful-restart-stale-time") == children.end())
    {
        if(neighbor_af_long_lived_graceful_restart_stale_time != nullptr)
        {
            children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;
        }
    }

    if(children.find("remove-private-as-entire-as-path") == children.end())
    {
        if(remove_private_as_entire_as_path != nullptr)
        {
            children["remove-private-as-entire-as-path"] = remove_private_as_entire_as_path;
        }
    }

    if(children.find("remove-private-as-entire-as-path-inbound") == children.end())
    {
        if(remove_private_as_entire_as_path_inbound != nullptr)
        {
            children["remove-private-as-entire-as-path-inbound"] = remove_private_as_entire_as_path_inbound;
        }
    }

    if(children.find("site-of-origin") == children.end())
    {
        if(site_of_origin != nullptr)
        {
            children["site-of-origin"] = site_of_origin;
        }
    }

    if(children.find("soft-reconfiguration") == children.end())
    {
        if(soft_reconfiguration != nullptr)
        {
            children["soft-reconfiguration"] = soft_reconfiguration;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "accept-own")
    {
        accept_own = value;
    }
    if(value_path == "accept-route-legacy-rt")
    {
        accept_route_legacy_rt = value;
    }
    if(value_path == "activate")
    {
        activate = value;
    }
    if(value_path == "advertise-local-labeled-route")
    {
        advertise_local_labeled_route = value;
    }
    if(value_path == "advertise-orf")
    {
        advertise_orf = value;
    }
    if(value_path == "advertise-permanent-network")
    {
        advertise_permanent_network = value;
    }
    if(value_path == "af-group")
    {
        af_group = value;
    }
    if(value_path == "aigp")
    {
        aigp = value;
    }
    if(value_path == "aigp-send-med")
    {
        aigp_send_med = value;
    }
    if(value_path == "allow-as-in")
    {
        allow_as_in = value;
    }
    if(value_path == "as-override")
    {
        as_override = value;
    }
    if(value_path == "default-weight")
    {
        default_weight = value;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
    }
    if(value_path == "flowspec-validation")
    {
        flowspec_validation = value;
    }
    if(value_path == "l2vpn-signalling")
    {
        l2vpn_signalling = value;
    }
    if(value_path == "multipath")
    {
        multipath = value;
    }
    if(value_path == "neighbor-af-long-lived-graceful-restart-capable")
    {
        neighbor_af_long_lived_graceful_restart_capable = value;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self = value;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
    }
    if(value_path == "next-hop-unchanged-multipath")
    {
        next_hop_unchanged_multipath = value;
    }
    if(value_path == "prefix-orf-policy")
    {
        prefix_orf_policy = value;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in = value;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out = value;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
    }
    if(value_path == "send-community-ebgp")
    {
        send_community_ebgp = value;
    }
    if(value_path == "send-community-ebgp-graceful-shutdown")
    {
        send_community_ebgp_graceful_shutdown = value;
    }
    if(value_path == "send-ext-community-ebgp")
    {
        send_ext_community_ebgp = value;
    }
    if(value_path == "send-multicast-attr")
    {
        send_multicast_attr = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity::AigpCostCommunity()
    :
    cost_community_id{YType::uint32, "cost-community-id"},
    cost_community_poi_type{YType::enumeration, "cost-community-poi-type"},
    enable{YType::boolean, "enable"},
    transitive{YType::boolean, "transitive"}
{
    yang_name = "aigp-cost-community"; yang_parent_name = "neighbor-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity::~AigpCostCommunity()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity::has_data() const
{
    return cost_community_id.is_set
	|| cost_community_poi_type.is_set
	|| enable.is_set
	|| transitive.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(cost_community_id.operation)
	|| is_set(cost_community_poi_type.operation)
	|| is_set(enable.operation)
	|| is_set(transitive.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aigp-cost-community";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AigpCostCommunity' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost_community_id.is_set || is_set(cost_community_id.operation)) leaf_name_data.push_back(cost_community_id.get_name_leafdata());
    if (cost_community_poi_type.is_set || is_set(cost_community_poi_type.operation)) leaf_name_data.push_back(cost_community_poi_type.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (transitive.is_set || is_set(transitive.operation)) leaf_name_data.push_back(transitive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost-community-id")
    {
        cost_community_id = value;
    }
    if(value_path == "cost-community-poi-type")
    {
        cost_community_poi_type = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "transitive")
    {
        transitive = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6::AdvertiseDefImpDisableV6()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-def-imp-disable-v6"; yang_parent_name = "neighbor-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6::~AdvertiseDefImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_option.operation)
	|| is_set(af_name.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v6";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseDefImpDisableV6' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.operation)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable::AdvertiseDisable()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-disable"; yang_parent_name = "neighbor-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable::~AdvertiseDisable()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-disable";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseDisable' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes::MaximumPrefixes()
    :
    discard_extra_paths{YType::boolean, "discard-extra-paths"},
    prefix_limit{YType::uint32, "prefix-limit"},
    restart_time{YType::uint32, "restart-time"},
    warning_only{YType::boolean, "warning-only"},
    warning_percentage{YType::uint32, "warning-percentage"}
{
    yang_name = "maximum-prefixes"; yang_parent_name = "neighbor-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes::~MaximumPrefixes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes::has_data() const
{
    return discard_extra_paths.is_set
	|| prefix_limit.is_set
	|| restart_time.is_set
	|| warning_only.is_set
	|| warning_percentage.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes::has_operation() const
{
    return is_set(operation)
	|| is_set(discard_extra_paths.operation)
	|| is_set(prefix_limit.operation)
	|| is_set(restart_time.operation)
	|| is_set(warning_only.operation)
	|| is_set(warning_percentage.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefixes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumPrefixes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discard_extra_paths.is_set || is_set(discard_extra_paths.operation)) leaf_name_data.push_back(discard_extra_paths.get_name_leafdata());
    if (prefix_limit.is_set || is_set(prefix_limit.operation)) leaf_name_data.push_back(prefix_limit.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.operation)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.operation)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (warning_percentage.is_set || is_set(warning_percentage.operation)) leaf_name_data.push_back(warning_percentage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discard-extra-paths")
    {
        discard_extra_paths = value;
    }
    if(value_path == "prefix-limit")
    {
        prefix_limit = value;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
    }
    if(value_path == "warning-percentage")
    {
        warning_percentage = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound::RemovePrivateAsEntireAsPathInbound()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{
    yang_name = "remove-private-as-entire-as-path-inbound"; yang_parent_name = "neighbor-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound::~RemovePrivateAsEntireAsPathInbound()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound::has_data() const
{
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(entire.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path-inbound";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemovePrivateAsEntireAsPathInbound' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.operation)) leaf_name_data.push_back(entire.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "entire")
    {
        entire = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4::AdvertiseDefImpDisableV4()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-def-imp-disable-v4"; yang_parent_name = "neighbor-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4::~AdvertiseDefImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_option.operation)
	|| is_set(af_name.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v4";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseDefImpDisableV4' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.operation)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2Vpnevpn::AdvertiseL2Vpnevpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-l2vpnevpn"; yang_parent_name = "neighbor-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2Vpnevpn::~AdvertiseL2Vpnevpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2Vpnevpn::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2Vpnevpn::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2Vpnevpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-l2vpnevpn";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2Vpnevpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseL2Vpnevpn' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2Vpnevpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2Vpnevpn::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2Vpnevpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2Vpnevpn::AdvertiseLocalL2Vpnevpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-local-l2vpnevpn"; yang_parent_name = "neighbor-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2Vpnevpn::~AdvertiseLocalL2Vpnevpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2Vpnevpn::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2Vpnevpn::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2Vpnevpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-l2vpnevpn";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2Vpnevpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseLocalL2Vpnevpn' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2Vpnevpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2Vpnevpn::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2Vpnevpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::NeighborAfLongLivedGracefulRestartStaleTime()
    :
    stale_time_accept{YType::uint32, "stale-time-accept"},
    stale_time_send{YType::uint32, "stale-time-send"}
{
    yang_name = "neighbor-af-long-lived-graceful-restart-stale-time"; yang_parent_name = "neighbor-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::~NeighborAfLongLivedGracefulRestartStaleTime()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::has_data() const
{
    return stale_time_accept.is_set
	|| stale_time_send.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::has_operation() const
{
    return is_set(operation)
	|| is_set(stale_time_accept.operation)
	|| is_set(stale_time_send.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af-long-lived-graceful-restart-stale-time";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAfLongLivedGracefulRestartStaleTime' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stale_time_accept.is_set || is_set(stale_time_accept.operation)) leaf_name_data.push_back(stale_time_accept.get_name_leafdata());
    if (stale_time_send.is_set || is_set(stale_time_send.operation)) leaf_name_data.push_back(stale_time_send.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stale-time-accept")
    {
        stale_time_accept = value;
    }
    if(value_path == "stale-time-send")
    {
        stale_time_send = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin::SiteOfOrigin()
    :
    address{YType::str, "address"},
    address_index{YType::uint32, "address-index"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    as_xx{YType::uint32, "as-xx"},
    type{YType::enumeration, "type"}
{
    yang_name = "site-of-origin"; yang_parent_name = "neighbor-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin::~SiteOfOrigin()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin::has_data() const
{
    return address.is_set
	|| address_index.is_set
	|| as.is_set
	|| as_index.is_set
	|| as_xx.is_set
	|| type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(address_index.operation)
	|| is_set(as.operation)
	|| is_set(as_index.operation)
	|| is_set(as_xx.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-of-origin";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SiteOfOrigin' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_index.is_set || is_set(address_index.operation)) leaf_name_data.push_back(address_index.get_name_leafdata());
    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.operation)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "address-index")
    {
        address_index = value;
    }
    if(value_path == "as")
    {
        as = value;
    }
    if(value_path == "as-index")
    {
        as_index = value;
    }
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6::AdvertiseV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-v6"; yang_parent_name = "neighbor-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6::~AdvertiseV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v6";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseV6' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6::AdvertiseLocalV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-local-v6"; yang_parent_name = "neighbor-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6::~AdvertiseLocalV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v6";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseLocalV6' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import::Import()
    :
    import_reoriginate{YType::boolean, "import-reoriginate"},
    import_reoriginate_stitching{YType::boolean, "import-reoriginate-stitching"},
    import_stitching{YType::boolean, "import-stitching"}
{
    yang_name = "import"; yang_parent_name = "neighbor-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import::~Import()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import::has_data() const
{
    return import_reoriginate.is_set
	|| import_reoriginate_stitching.is_set
	|| import_stitching.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import::has_operation() const
{
    return is_set(operation)
	|| is_set(import_reoriginate.operation)
	|| is_set(import_reoriginate_stitching.operation)
	|| is_set(import_stitching.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Import' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (import_reoriginate.is_set || is_set(import_reoriginate.operation)) leaf_name_data.push_back(import_reoriginate.get_name_leafdata());
    if (import_reoriginate_stitching.is_set || is_set(import_reoriginate_stitching.operation)) leaf_name_data.push_back(import_reoriginate_stitching.get_name_leafdata());
    if (import_stitching.is_set || is_set(import_stitching.operation)) leaf_name_data.push_back(import_stitching.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "import-reoriginate")
    {
        import_reoriginate = value;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching = value;
    }
    if(value_path == "import-stitching")
    {
        import_stitching = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate::DefaultOriginate()
    :
    enable{YType::boolean, "enable"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "default-originate"; yang_parent_name = "neighbor-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate::~DefaultOriginate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate::has_data() const
{
    return enable.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-originate";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultOriginate' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration::SoftReconfiguration()
    :
    inbound_soft{YType::boolean, "inbound-soft"},
    soft_always{YType::boolean, "soft-always"}
{
    yang_name = "soft-reconfiguration"; yang_parent_name = "neighbor-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration::~SoftReconfiguration()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration::has_data() const
{
    return inbound_soft.is_set
	|| soft_always.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration::has_operation() const
{
    return is_set(operation)
	|| is_set(inbound_soft.operation)
	|| is_set(soft_always.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-reconfiguration";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SoftReconfiguration' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inbound_soft.is_set || is_set(inbound_soft.operation)) leaf_name_data.push_back(inbound_soft.get_name_leafdata());
    if (soft_always.is_set || is_set(soft_always.operation)) leaf_name_data.push_back(soft_always.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inbound-soft")
    {
        inbound_soft = value;
    }
    if(value_path == "soft-always")
    {
        soft_always = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6::AdvertiseVrfImpDisableV6()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-vrf-imp-disable-v6"; yang_parent_name = "neighbor-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6::~AdvertiseVrfImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_option.operation)
	|| is_set(af_name.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v6";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseVrfImpDisableV6' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.operation)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4::AdvertiseV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-v4"; yang_parent_name = "neighbor-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4::~AdvertiseV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v4";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseV4' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4::AdvertiseLocalV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-local-v4"; yang_parent_name = "neighbor-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4::~AdvertiseLocalV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v4";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseLocalV4' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath::RemovePrivateAsEntireAsPath()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{
    yang_name = "remove-private-as-entire-as-path"; yang_parent_name = "neighbor-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath::~RemovePrivateAsEntireAsPath()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath::has_data() const
{
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(entire.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemovePrivateAsEntireAsPath' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.operation)) leaf_name_data.push_back(entire.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "entire")
    {
        entire = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4::AdvertiseVrfImpDisableV4()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-vrf-imp-disable-v4"; yang_parent_name = "neighbor-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4::~AdvertiseVrfImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_option.operation)
	|| is_set(af_name.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v4";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseVrfImpDisableV4' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.operation)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseVrfImpDisableV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress::LocalAddress()
    :
    local_address_disable{YType::boolean, "local-address-disable"},
    local_ip_address{YType::str, "local-ip-address"}
{
    yang_name = "local-address"; yang_parent_name = "neighbor-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress::~LocalAddress()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress::has_data() const
{
    return local_address_disable.is_set
	|| local_ip_address.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(local_address_disable.operation)
	|| is_set(local_ip_address.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalAddress' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address_disable.is_set || is_set(local_address_disable.operation)) leaf_name_data.push_back(local_address_disable.get_name_leafdata());
    if (local_ip_address.is_set || is_set(local_ip_address.operation)) leaf_name_data.push_back(local_ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-address-disable")
    {
        local_address_disable = value;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivates()
{
    yang_name = "bmp-activates"; yang_parent_name = "neighbor-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::~BmpActivates()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::has_data() const
{
    for (std::size_t index=0; index<bmp_activate.size(); index++)
    {
        if(bmp_activate[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::has_operation() const
{
    for (std::size_t index=0; index<bmp_activate.size(); index++)
    {
        if(bmp_activate[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activates";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpActivates' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bmp-activate")
    {
        for(auto const & c : bmp_activate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate>();
        c->parent = this;
        bmp_activate.push_back(std::move(c));
        children[segment_path] = bmp_activate.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::get_children()
{
    for (auto const & c : bmp_activate)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate::BmpActivate()
    :
    server_id{YType::uint32, "server-id"}
{
    yang_name = "bmp-activate"; yang_parent_name = "bmp-activates";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate::~BmpActivate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate::has_data() const
{
    return server_id.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate::has_operation() const
{
    return is_set(operation)
	|| is_set(server_id.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activate" <<"[server-id='" <<server_id <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpActivate' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_id.is_set || is_set(server_id.operation)) leaf_name_data.push_back(server_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "server-id")
    {
        server_id = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop::EbgpMultihop()
    :
    max_hop_count{YType::uint32, "max-hop-count"},
    mpls_deactivation{YType::boolean, "mpls-deactivation"}
{
    yang_name = "ebgp-multihop"; yang_parent_name = "neighbor-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop::~EbgpMultihop()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop::has_data() const
{
    return max_hop_count.is_set
	|| mpls_deactivation.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop::has_operation() const
{
    return is_set(operation)
	|| is_set(max_hop_count.operation)
	|| is_set(mpls_deactivation.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EbgpMultihop' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_hop_count.is_set || is_set(max_hop_count.operation)) leaf_name_data.push_back(max_hop_count.get_name_leafdata());
    if (mpls_deactivation.is_set || is_set(mpls_deactivation.operation)) leaf_name_data.push_back(mpls_deactivation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-hop-count")
    {
        max_hop_count = value;
    }
    if(value_path == "mpls-deactivation")
    {
        mpls_deactivation = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs::RemoteAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{
    yang_name = "remote-as"; yang_parent_name = "neighbor-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs::~RemoteAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-as";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteAs' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs::LocalAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    disable{YType::empty, "disable"},
    dual_as{YType::empty, "dual-as"},
    no_prepend{YType::empty, "no-prepend"},
    replace_as{YType::empty, "replace-as"}
{
    yang_name = "local-as"; yang_parent_name = "neighbor-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs::~LocalAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set
	|| disable.is_set
	|| dual_as.is_set
	|| no_prepend.is_set
	|| replace_as.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs::has_operation() const
{
    return is_set(operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation)
	|| is_set(disable.operation)
	|| is_set(dual_as.operation)
	|| is_set(no_prepend.operation)
	|| is_set(replace_as.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-as";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalAs' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (dual_as.is_set || is_set(dual_as.operation)) leaf_name_data.push_back(dual_as.get_name_leafdata());
    if (no_prepend.is_set || is_set(no_prepend.operation)) leaf_name_data.push_back(no_prepend.get_name_leafdata());
    if (replace_as.is_set || is_set(replace_as.operation)) leaf_name_data.push_back(replace_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "dual-as")
    {
        dual_as = value;
    }
    if(value_path == "no-prepend")
    {
        no_prepend = value;
    }
    if(value_path == "replace-as")
    {
        replace_as = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password::Password()
    :
    password{YType::str, "password"},
    password_disable{YType::boolean, "password-disable"}
{
    yang_name = "password"; yang_parent_name = "neighbor-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password::~Password()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password::has_data() const
{
    return password.is_set
	|| password_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(password.operation)
	|| is_set(password_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (password_disable.is_set || is_set(password_disable.operation)) leaf_name_data.push_back(password_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "password-disable")
    {
        password_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval::AdvertisementInterval()
    :
    minimum_interval{YType::uint32, "minimum-interval"},
    minimum_interval_msecs{YType::uint32, "minimum-interval-msecs"}
{
    yang_name = "advertisement-interval"; yang_parent_name = "neighbor-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval::~AdvertisementInterval()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval::has_data() const
{
    return minimum_interval.is_set
	|| minimum_interval_msecs.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum_interval.operation)
	|| is_set(minimum_interval_msecs.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement-interval";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertisementInterval' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (minimum_interval_msecs.is_set || is_set(minimum_interval_msecs.operation)) leaf_name_data.push_back(minimum_interval_msecs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "minimum-interval-msecs")
    {
        minimum_interval_msecs = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId::NeighborClusterId()
    :
    cluster_id_address{YType::str, "cluster-id-address"},
    cluster_id_number{YType::uint32, "cluster-id-number"}
{
    yang_name = "neighbor-cluster-id"; yang_parent_name = "neighbor-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId::~NeighborClusterId()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId::has_data() const
{
    return cluster_id_address.is_set
	|| cluster_id_number.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId::has_operation() const
{
    return is_set(operation)
	|| is_set(cluster_id_address.operation)
	|| is_set(cluster_id_number.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-cluster-id";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborClusterId' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_address.is_set || is_set(cluster_id_address.operation)) leaf_name_data.push_back(cluster_id_address.get_name_leafdata());
    if (cluster_id_number.is_set || is_set(cluster_id_number.operation)) leaf_name_data.push_back(cluster_id_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cluster-id-address")
    {
        cluster_id_address = value;
    }
    if(value_path == "cluster-id-number")
    {
        cluster_id_number = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss::Tcpmss()
    :
    mss{YType::uint32, "mss"},
    tcpmss_disable{YType::boolean, "tcpmss-disable"}
{
    yang_name = "tcpmss"; yang_parent_name = "neighbor-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss::~Tcpmss()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss::has_data() const
{
    return mss.is_set
	|| tcpmss_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss::has_operation() const
{
    return is_set(operation)
	|| is_set(mss.operation)
	|| is_set(tcpmss_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpmss";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tcpmss' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mss.is_set || is_set(mss.operation)) leaf_name_data.push_back(mss.get_name_leafdata());
    if (tcpmss_disable.is_set || is_set(tcpmss_disable.operation)) leaf_name_data.push_back(tcpmss_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mss")
    {
        mss = value;
    }
    if(value_path == "tcpmss-disable")
    {
        tcpmss_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos::Tos()
    :
    type{YType::enumeration, "type"},
    value_{YType::str, "value"}
{
    yang_name = "tos"; yang_parent_name = "neighbor-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos::~Tos()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos::has_data() const
{
    return type.is_set
	|| value_.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| is_set(value_.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tos";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tos' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFiltering()
    :
    enable{YType::empty, "enable"},
    update_in_filtering_attribute_filter_group{YType::str, "update-in-filtering-attribute-filter-group"},
    update_in_filtering_syslog_disable{YType::empty, "update-in-filtering-syslog-disable"}
    	,
    update_in_filtering_message_buffers(nullptr) // presence node
{
    yang_name = "update-in-filtering"; yang_parent_name = "neighbor-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::~UpdateInFiltering()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::has_data() const
{
    return enable.is_set
	|| update_in_filtering_attribute_filter_group.is_set
	|| update_in_filtering_syslog_disable.is_set
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(update_in_filtering_attribute_filter_group.operation)
	|| is_set(update_in_filtering_syslog_disable.operation)
	|| (update_in_filtering_message_buffers !=  nullptr && update_in_filtering_message_buffers->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateInFiltering' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (update_in_filtering_attribute_filter_group.is_set || is_set(update_in_filtering_attribute_filter_group.operation)) leaf_name_data.push_back(update_in_filtering_attribute_filter_group.get_name_leafdata());
    if (update_in_filtering_syslog_disable.is_set || is_set(update_in_filtering_syslog_disable.operation)) leaf_name_data.push_back(update_in_filtering_syslog_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "update-in-filtering-message-buffers")
    {
        if(update_in_filtering_message_buffers != nullptr)
        {
            children["update-in-filtering-message-buffers"] = update_in_filtering_message_buffers;
        }
        else
        {
            update_in_filtering_message_buffers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers>();
            update_in_filtering_message_buffers->parent = this;
            children["update-in-filtering-message-buffers"] = update_in_filtering_message_buffers;
        }
        return children.at("update-in-filtering-message-buffers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::get_children()
{
    if(children.find("update-in-filtering-message-buffers") == children.end())
    {
        if(update_in_filtering_message_buffers != nullptr)
        {
            children["update-in-filtering-message-buffers"] = update_in_filtering_message_buffers;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "update-in-filtering-attribute-filter-group")
    {
        update_in_filtering_attribute_filter_group = value;
    }
    if(value_path == "update-in-filtering-syslog-disable")
    {
        update_in_filtering_syslog_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::UpdateInFilteringMessageBuffers()
    :
    non_circular_buffer{YType::boolean, "non-circular-buffer"},
    number_of_buffers{YType::uint32, "number-of-buffers"}
{
    yang_name = "update-in-filtering-message-buffers"; yang_parent_name = "update-in-filtering";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::~UpdateInFilteringMessageBuffers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_data() const
{
    return non_circular_buffer.is_set
	|| number_of_buffers.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::has_operation() const
{
    return is_set(operation)
	|| is_set(non_circular_buffer.operation)
	|| is_set(number_of_buffers.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-in-filtering-message-buffers";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateInFilteringMessageBuffers' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_circular_buffer.is_set || is_set(non_circular_buffer.operation)) leaf_name_data.push_back(non_circular_buffer.get_name_leafdata());
    if (number_of_buffers.is_set || is_set(number_of_buffers.operation)) leaf_name_data.push_back(number_of_buffers.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-circular-buffer")
    {
        non_circular_buffer = value;
    }
    if(value_path == "number-of-buffers")
    {
        number_of_buffers = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut::MsgLogOut()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{
    yang_name = "msg-log-out"; yang_parent_name = "neighbor-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut::~MsgLogOut()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut::has_data() const
{
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut::has_operation() const
{
    return is_set(operation)
	|| is_set(msg_buf_count.operation)
	|| is_set(msg_log_disable.operation)
	|| is_set(msg_log_inherit_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-out";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MsgLogOut' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.operation)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.operation)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.operation)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize::ReceiveBufferSize()
    :
    bgp_receive_size{YType::uint32, "bgp-receive-size"},
    socket_receive_size{YType::uint32, "socket-receive-size"}
{
    yang_name = "receive-buffer-size"; yang_parent_name = "neighbor-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize::~ReceiveBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize::has_data() const
{
    return bgp_receive_size.is_set
	|| socket_receive_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp_receive_size.operation)
	|| is_set(socket_receive_size.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-buffer-size";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceiveBufferSize' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_receive_size.is_set || is_set(bgp_receive_size.operation)) leaf_name_data.push_back(bgp_receive_size.get_name_leafdata());
    if (socket_receive_size.is_set || is_set(socket_receive_size.operation)) leaf_name_data.push_back(socket_receive_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp-receive-size")
    {
        bgp_receive_size = value;
    }
    if(value_path == "socket-receive-size")
    {
        socket_receive_size = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn::MsgLogIn()
    :
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_log_disable{YType::boolean, "msg-log-disable"},
    msg_log_inherit_disable{YType::boolean, "msg-log-inherit-disable"}
{
    yang_name = "msg-log-in"; yang_parent_name = "neighbor-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn::~MsgLogIn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn::has_data() const
{
    return msg_buf_count.is_set
	|| msg_log_disable.is_set
	|| msg_log_inherit_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn::has_operation() const
{
    return is_set(operation)
	|| is_set(msg_buf_count.operation)
	|| is_set(msg_log_disable.operation)
	|| is_set(msg_log_inherit_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-in";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MsgLogIn' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msg_buf_count.is_set || is_set(msg_buf_count.operation)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_log_disable.is_set || is_set(msg_log_disable.operation)) leaf_name_data.push_back(msg_log_disable.get_name_leafdata());
    if (msg_log_inherit_disable.is_set || is_set(msg_log_inherit_disable.operation)) leaf_name_data.push_back(msg_log_inherit_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
    }
    if(value_path == "msg-log-disable")
    {
        msg_log_disable = value;
    }
    if(value_path == "msg-log-inherit-disable")
    {
        msg_log_inherit_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize::SendBufferSize()
    :
    bgp_send_size{YType::uint32, "bgp-send-size"},
    socket_send_size{YType::uint32, "socket-send-size"}
{
    yang_name = "send-buffer-size"; yang_parent_name = "neighbor-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize::~SendBufferSize()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize::has_data() const
{
    return bgp_send_size.is_set
	|| socket_send_size.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp_send_size.operation)
	|| is_set(socket_send_size.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-buffer-size";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendBufferSize' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_send_size.is_set || is_set(bgp_send_size.operation)) leaf_name_data.push_back(bgp_send_size.get_name_leafdata());
    if (socket_send_size.is_set || is_set(socket_send_size.operation)) leaf_name_data.push_back(socket_send_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp-send-size")
    {
        bgp_send_size = value;
    }
    if(value_path == "socket-send-size")
    {
        socket_send_size = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers::Timers()
    :
    hold_time{YType::uint32, "hold-time"},
    keepalive_interval{YType::uint32, "keepalive-interval"},
    min_accept_hold_time{YType::uint32, "min-accept-hold-time"}
{
    yang_name = "timers"; yang_parent_name = "neighbor-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers::~Timers()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers::has_data() const
{
    return hold_time.is_set
	|| keepalive_interval.is_set
	|| min_accept_hold_time.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_time.operation)
	|| is_set(keepalive_interval.operation)
	|| is_set(min_accept_hold_time.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.operation)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (min_accept_hold_time.is_set || is_set(min_accept_hold_time.operation)) leaf_name_data.push_back(min_accept_hold_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
    }
    if(value_path == "min-accept-hold-time")
    {
        min_accept_hold_time = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain::Keychain()
    :
    keychain_disable{YType::boolean, "keychain-disable"},
    keychain_name{YType::str, "keychain-name"}
{
    yang_name = "keychain"; yang_parent_name = "neighbor-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain::~Keychain()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain::has_data() const
{
    return keychain_disable.is_set
	|| keychain_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain::has_operation() const
{
    return is_set(operation)
	|| is_set(keychain_disable.operation)
	|| is_set(keychain_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keychain";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Keychain' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keychain_disable.is_set || is_set(keychain_disable.operation)) leaf_name_data.push_back(keychain_disable.get_name_leafdata());
    if (keychain_name.is_set || is_set(keychain_name.operation)) leaf_name_data.push_back(keychain_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "keychain-disable")
    {
        keychain_disable = value;
    }
    if(value_path == "keychain-name")
    {
        keychain_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenance()
    :
    enable{YType::empty, "enable"},
    graceful_maintenance_activate{YType::boolean, "graceful-maintenance-activate"}
    	,
    graceful_maintenance_as_prepends(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends>())
	,graceful_maintenance_local_preference(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference>())
{
    graceful_maintenance_as_prepends->parent = this;
    children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;

    graceful_maintenance_local_preference->parent = this;
    children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;

    yang_name = "graceful-maintenance"; yang_parent_name = "neighbor-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::~GracefulMaintenance()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::has_data() const
{
    return enable.is_set
	|| graceful_maintenance_activate.is_set
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_data())
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(graceful_maintenance_activate.operation)
	|| (graceful_maintenance_as_prepends !=  nullptr && graceful_maintenance_as_prepends->has_operation())
	|| (graceful_maintenance_local_preference !=  nullptr && graceful_maintenance_local_preference->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulMaintenance' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (graceful_maintenance_activate.is_set || is_set(graceful_maintenance_activate.operation)) leaf_name_data.push_back(graceful_maintenance_activate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "graceful-maintenance-as-prepends")
    {
        if(graceful_maintenance_as_prepends != nullptr)
        {
            children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;
        }
        else
        {
            graceful_maintenance_as_prepends = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends>();
            graceful_maintenance_as_prepends->parent = this;
            children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;
        }
        return children.at("graceful-maintenance-as-prepends");
    }

    if(child_yang_name == "graceful-maintenance-local-preference")
    {
        if(graceful_maintenance_local_preference != nullptr)
        {
            children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;
        }
        else
        {
            graceful_maintenance_local_preference = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference>();
            graceful_maintenance_local_preference->parent = this;
            children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;
        }
        return children.at("graceful-maintenance-local-preference");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::get_children()
{
    if(children.find("graceful-maintenance-as-prepends") == children.end())
    {
        if(graceful_maintenance_as_prepends != nullptr)
        {
            children["graceful-maintenance-as-prepends"] = graceful_maintenance_as_prepends;
        }
    }

    if(children.find("graceful-maintenance-local-preference") == children.end())
    {
        if(graceful_maintenance_local_preference != nullptr)
        {
            children["graceful-maintenance-local-preference"] = graceful_maintenance_local_preference;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "graceful-maintenance-activate")
    {
        graceful_maintenance_activate = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::GracefulMaintenanceLocalPreference()
    :
    gshut_loc_pref_disable{YType::boolean, "gshut-loc-pref-disable"},
    local_preference{YType::uint32, "local-preference"}
{
    yang_name = "graceful-maintenance-local-preference"; yang_parent_name = "graceful-maintenance";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::~GracefulMaintenanceLocalPreference()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_data() const
{
    return gshut_loc_pref_disable.is_set
	|| local_preference.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::has_operation() const
{
    return is_set(operation)
	|| is_set(gshut_loc_pref_disable.operation)
	|| is_set(local_preference.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-local-preference";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulMaintenanceLocalPreference' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gshut_loc_pref_disable.is_set || is_set(gshut_loc_pref_disable.operation)) leaf_name_data.push_back(gshut_loc_pref_disable.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.operation)) leaf_name_data.push_back(local_preference.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gshut-loc-pref-disable")
    {
        gshut_loc_pref_disable = value;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::GracefulMaintenanceAsPrepends()
    :
    as_prepends{YType::uint32, "as-prepends"},
    gshut_prepends_disable{YType::boolean, "gshut-prepends-disable"}
{
    yang_name = "graceful-maintenance-as-prepends"; yang_parent_name = "graceful-maintenance";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::~GracefulMaintenanceAsPrepends()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_data() const
{
    return as_prepends.is_set
	|| gshut_prepends_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::has_operation() const
{
    return is_set(operation)
	|| is_set(as_prepends.operation)
	|| is_set(gshut_prepends_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance-as-prepends";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulMaintenanceAsPrepends' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_prepends.is_set || is_set(as_prepends.operation)) leaf_name_data.push_back(as_prepends.get_name_leafdata());
    if (gshut_prepends_disable.is_set || is_set(gshut_prepends_disable.operation)) leaf_name_data.push_back(gshut_prepends_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-prepends")
    {
        as_prepends = value;
    }
    if(value_path == "gshut-prepends-disable")
    {
        gshut_prepends_disable = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroups()
{
    yang_name = "af-groups"; yang_parent_name = "bgp-entity";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::~AfGroups()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::has_data() const
{
    for (std::size_t index=0; index<af_group.size(); index++)
    {
        if(af_group[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::has_operation() const
{
    for (std::size_t index=0; index<af_group.size(); index++)
    {
        if(af_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-groups";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AfGroups' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "af-group")
    {
        for(auto const & c : af_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup>();
        c->parent = this;
        af_group.push_back(std::move(c));
        children[segment_path] = af_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::get_children()
{
    for (auto const & c : af_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroup()
    :
    af_group_name{YType::str, "af-group-name"}
    	,
    af_group_afs(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs>())
{
    af_group_afs->parent = this;
    children["af-group-afs"] = af_group_afs;

    yang_name = "af-group"; yang_parent_name = "af-groups";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::~AfGroup()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::has_data() const
{
    return af_group_name.is_set
	|| (af_group_afs !=  nullptr && af_group_afs->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(af_group_name.operation)
	|| (af_group_afs !=  nullptr && af_group_afs->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-group" <<"[af-group-name='" <<af_group_name <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AfGroup' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_group_name.is_set || is_set(af_group_name.operation)) leaf_name_data.push_back(af_group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "af-group-afs")
    {
        if(af_group_afs != nullptr)
        {
            children["af-group-afs"] = af_group_afs;
        }
        else
        {
            af_group_afs = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs>();
            af_group_afs->parent = this;
            children["af-group-afs"] = af_group_afs;
        }
        return children.at("af-group-afs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::get_children()
{
    if(children.find("af-group-afs") == children.end())
    {
        if(af_group_afs != nullptr)
        {
            children["af-group-afs"] = af_group_afs;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-group-name")
    {
        af_group_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAfs()
{
    yang_name = "af-group-afs"; yang_parent_name = "af-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::~AfGroupAfs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::has_data() const
{
    for (std::size_t index=0; index<af_group_af.size(); index++)
    {
        if(af_group_af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::has_operation() const
{
    for (std::size_t index=0; index<af_group_af.size(); index++)
    {
        if(af_group_af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-group-afs";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AfGroupAfs' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "af-group-af")
    {
        for(auto const & c : af_group_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf>();
        c->parent = this;
        af_group_af.push_back(std::move(c));
        children[segment_path] = af_group_af.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::get_children()
{
    for (auto const & c : af_group_af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AfGroupAf()
    :
    af_name{YType::enumeration, "af-name"},
    accept_own{YType::boolean, "accept-own"},
    accept_route_legacy_rt{YType::boolean, "accept-route-legacy-rt"},
    advertise_local_labeled_route{YType::enumeration, "advertise-local-labeled-route"},
    advertise_orf{YType::enumeration, "advertise-orf"},
    advertise_permanent_network{YType::empty, "advertise-permanent-network"},
    af_group{YType::str, "af-group"},
    aigp{YType::enumeration, "aigp"},
    aigp_send_med{YType::enumeration, "aigp-send-med"},
    allow_as_in{YType::uint32, "allow-as-in"},
    as_override{YType::boolean, "as-override"},
    create{YType::empty, "create"},
    default_weight{YType::uint32, "default-weight"},
    encapsulation_type{YType::enumeration, "encapsulation-type"},
    flowspec_validation{YType::enumeration, "flowspec-validation"},
    l2vpn_signalling{YType::enumeration, "l2vpn-signalling"},
    multipath{YType::empty, "multipath"},
    neighbor_af_long_lived_graceful_restart_capable{YType::boolean, "neighbor-af-long-lived-graceful-restart-capable"},
    next_hop_self{YType::boolean, "next-hop-self"},
    next_hop_unchanged{YType::boolean, "next-hop-unchanged"},
    next_hop_unchanged_multipath{YType::boolean, "next-hop-unchanged-multipath"},
    prefix_orf_policy{YType::str, "prefix-orf-policy"},
    route_policy_in{YType::str, "route-policy-in"},
    route_policy_out{YType::str, "route-policy-out"},
    route_reflector_client{YType::boolean, "route-reflector-client"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    send_community_ebgp{YType::boolean, "send-community-ebgp"},
    send_community_ebgp_graceful_shutdown{YType::boolean, "send-community-ebgp-graceful-shutdown"},
    send_ext_community_ebgp{YType::boolean, "send-ext-community-ebgp"},
    send_multicast_attr{YType::enumeration, "send-multicast-attr"}
    	,
    advertise_def_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4>())
	,advertise_def_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6>())
	,advertise_disable(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable>())
	,advertise_l2vpnevpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2Vpnevpn>())
	,advertise_local_l2vpnevpn(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2Vpnevpn>())
	,advertise_local_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4>())
	,advertise_local_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6>())
	,advertise_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4>())
	,advertise_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6>())
	,advertise_vrf_imp_disable_v4(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4>())
	,advertise_vrf_imp_disable_v6(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6>())
	,aigp_cost_community(nullptr) // presence node
	,default_originate(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate>())
	,import(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import>())
	,maximum_prefixes(nullptr) // presence node
	,neighbor_af_long_lived_graceful_restart_stale_time(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime>())
	,remove_private_as_entire_as_path(nullptr) // presence node
	,remove_private_as_entire_as_path_inbound(nullptr) // presence node
	,site_of_origin(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin>())
	,soft_reconfiguration(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration>())
{
    advertise_def_imp_disable_v4->parent = this;
    children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;

    advertise_def_imp_disable_v6->parent = this;
    children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;

    advertise_disable->parent = this;
    children["advertise-disable"] = advertise_disable;

    advertise_l2vpnevpn->parent = this;
    children["advertise-l2vpnevpn"] = advertise_l2vpnevpn;

    advertise_local_l2vpnevpn->parent = this;
    children["advertise-local-l2vpnevpn"] = advertise_local_l2vpnevpn;

    advertise_local_v4->parent = this;
    children["advertise-local-v4"] = advertise_local_v4;

    advertise_local_v6->parent = this;
    children["advertise-local-v6"] = advertise_local_v6;

    advertise_v4->parent = this;
    children["advertise-v4"] = advertise_v4;

    advertise_v6->parent = this;
    children["advertise-v6"] = advertise_v6;

    advertise_vrf_imp_disable_v4->parent = this;
    children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;

    advertise_vrf_imp_disable_v6->parent = this;
    children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;

    default_originate->parent = this;
    children["default-originate"] = default_originate;

    import->parent = this;
    children["import"] = import;

    neighbor_af_long_lived_graceful_restart_stale_time->parent = this;
    children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;

    site_of_origin->parent = this;
    children["site-of-origin"] = site_of_origin;

    soft_reconfiguration->parent = this;
    children["soft-reconfiguration"] = soft_reconfiguration;

    yang_name = "af-group-af"; yang_parent_name = "af-group-afs";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::~AfGroupAf()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::has_data() const
{
    return af_name.is_set
	|| accept_own.is_set
	|| accept_route_legacy_rt.is_set
	|| advertise_local_labeled_route.is_set
	|| advertise_orf.is_set
	|| advertise_permanent_network.is_set
	|| af_group.is_set
	|| aigp.is_set
	|| aigp_send_med.is_set
	|| allow_as_in.is_set
	|| as_override.is_set
	|| create.is_set
	|| default_weight.is_set
	|| encapsulation_type.is_set
	|| flowspec_validation.is_set
	|| l2vpn_signalling.is_set
	|| multipath.is_set
	|| neighbor_af_long_lived_graceful_restart_capable.is_set
	|| next_hop_self.is_set
	|| next_hop_unchanged.is_set
	|| next_hop_unchanged_multipath.is_set
	|| prefix_orf_policy.is_set
	|| route_policy_in.is_set
	|| route_policy_out.is_set
	|| route_reflector_client.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| send_community_ebgp.is_set
	|| send_community_ebgp_graceful_shutdown.is_set
	|| send_ext_community_ebgp.is_set
	|| send_multicast_attr.is_set
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_data())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_data())
	|| (advertise_disable !=  nullptr && advertise_disable->has_data())
	|| (advertise_l2vpnevpn !=  nullptr && advertise_l2vpnevpn->has_data())
	|| (advertise_local_l2vpnevpn !=  nullptr && advertise_local_l2vpnevpn->has_data())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_data())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_data())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_data())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_data())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_data())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_data())
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_data())
	|| (default_originate !=  nullptr && default_originate->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_data())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_data())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_data())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_data())
	|| (site_of_origin !=  nullptr && site_of_origin->has_data())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(accept_own.operation)
	|| is_set(accept_route_legacy_rt.operation)
	|| is_set(advertise_local_labeled_route.operation)
	|| is_set(advertise_orf.operation)
	|| is_set(advertise_permanent_network.operation)
	|| is_set(af_group.operation)
	|| is_set(aigp.operation)
	|| is_set(aigp_send_med.operation)
	|| is_set(allow_as_in.operation)
	|| is_set(as_override.operation)
	|| is_set(create.operation)
	|| is_set(default_weight.operation)
	|| is_set(encapsulation_type.operation)
	|| is_set(flowspec_validation.operation)
	|| is_set(l2vpn_signalling.operation)
	|| is_set(multipath.operation)
	|| is_set(neighbor_af_long_lived_graceful_restart_capable.operation)
	|| is_set(next_hop_self.operation)
	|| is_set(next_hop_unchanged.operation)
	|| is_set(next_hop_unchanged_multipath.operation)
	|| is_set(prefix_orf_policy.operation)
	|| is_set(route_policy_in.operation)
	|| is_set(route_policy_out.operation)
	|| is_set(route_reflector_client.operation)
	|| is_set(rpki_bestpath_origin_as_allow_invalid.operation)
	|| is_set(rpki_origin_as_validation_disable.operation)
	|| is_set(send_community_ebgp.operation)
	|| is_set(send_community_ebgp_graceful_shutdown.operation)
	|| is_set(send_ext_community_ebgp.operation)
	|| is_set(send_multicast_attr.operation)
	|| (advertise_def_imp_disable_v4 !=  nullptr && advertise_def_imp_disable_v4->has_operation())
	|| (advertise_def_imp_disable_v6 !=  nullptr && advertise_def_imp_disable_v6->has_operation())
	|| (advertise_disable !=  nullptr && advertise_disable->has_operation())
	|| (advertise_l2vpnevpn !=  nullptr && advertise_l2vpnevpn->has_operation())
	|| (advertise_local_l2vpnevpn !=  nullptr && advertise_local_l2vpnevpn->has_operation())
	|| (advertise_local_v4 !=  nullptr && advertise_local_v4->has_operation())
	|| (advertise_local_v6 !=  nullptr && advertise_local_v6->has_operation())
	|| (advertise_v4 !=  nullptr && advertise_v4->has_operation())
	|| (advertise_v6 !=  nullptr && advertise_v6->has_operation())
	|| (advertise_vrf_imp_disable_v4 !=  nullptr && advertise_vrf_imp_disable_v4->has_operation())
	|| (advertise_vrf_imp_disable_v6 !=  nullptr && advertise_vrf_imp_disable_v6->has_operation())
	|| (aigp_cost_community !=  nullptr && aigp_cost_community->has_operation())
	|| (default_originate !=  nullptr && default_originate->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (maximum_prefixes !=  nullptr && maximum_prefixes->has_operation())
	|| (neighbor_af_long_lived_graceful_restart_stale_time !=  nullptr && neighbor_af_long_lived_graceful_restart_stale_time->has_operation())
	|| (remove_private_as_entire_as_path !=  nullptr && remove_private_as_entire_as_path->has_operation())
	|| (remove_private_as_entire_as_path_inbound !=  nullptr && remove_private_as_entire_as_path_inbound->has_operation())
	|| (site_of_origin !=  nullptr && site_of_origin->has_operation())
	|| (soft_reconfiguration !=  nullptr && soft_reconfiguration->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-group-af" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AfGroupAf' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (accept_own.is_set || is_set(accept_own.operation)) leaf_name_data.push_back(accept_own.get_name_leafdata());
    if (accept_route_legacy_rt.is_set || is_set(accept_route_legacy_rt.operation)) leaf_name_data.push_back(accept_route_legacy_rt.get_name_leafdata());
    if (advertise_local_labeled_route.is_set || is_set(advertise_local_labeled_route.operation)) leaf_name_data.push_back(advertise_local_labeled_route.get_name_leafdata());
    if (advertise_orf.is_set || is_set(advertise_orf.operation)) leaf_name_data.push_back(advertise_orf.get_name_leafdata());
    if (advertise_permanent_network.is_set || is_set(advertise_permanent_network.operation)) leaf_name_data.push_back(advertise_permanent_network.get_name_leafdata());
    if (af_group.is_set || is_set(af_group.operation)) leaf_name_data.push_back(af_group.get_name_leafdata());
    if (aigp.is_set || is_set(aigp.operation)) leaf_name_data.push_back(aigp.get_name_leafdata());
    if (aigp_send_med.is_set || is_set(aigp_send_med.operation)) leaf_name_data.push_back(aigp_send_med.get_name_leafdata());
    if (allow_as_in.is_set || is_set(allow_as_in.operation)) leaf_name_data.push_back(allow_as_in.get_name_leafdata());
    if (as_override.is_set || is_set(as_override.operation)) leaf_name_data.push_back(as_override.get_name_leafdata());
    if (create.is_set || is_set(create.operation)) leaf_name_data.push_back(create.get_name_leafdata());
    if (default_weight.is_set || is_set(default_weight.operation)) leaf_name_data.push_back(default_weight.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.operation)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (flowspec_validation.is_set || is_set(flowspec_validation.operation)) leaf_name_data.push_back(flowspec_validation.get_name_leafdata());
    if (l2vpn_signalling.is_set || is_set(l2vpn_signalling.operation)) leaf_name_data.push_back(l2vpn_signalling.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.operation)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (neighbor_af_long_lived_graceful_restart_capable.is_set || is_set(neighbor_af_long_lived_graceful_restart_capable.operation)) leaf_name_data.push_back(neighbor_af_long_lived_graceful_restart_capable.get_name_leafdata());
    if (next_hop_self.is_set || is_set(next_hop_self.operation)) leaf_name_data.push_back(next_hop_self.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.operation)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (next_hop_unchanged_multipath.is_set || is_set(next_hop_unchanged_multipath.operation)) leaf_name_data.push_back(next_hop_unchanged_multipath.get_name_leafdata());
    if (prefix_orf_policy.is_set || is_set(prefix_orf_policy.operation)) leaf_name_data.push_back(prefix_orf_policy.get_name_leafdata());
    if (route_policy_in.is_set || is_set(route_policy_in.operation)) leaf_name_data.push_back(route_policy_in.get_name_leafdata());
    if (route_policy_out.is_set || is_set(route_policy_out.operation)) leaf_name_data.push_back(route_policy_out.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.operation)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.operation)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.operation)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (send_community_ebgp.is_set || is_set(send_community_ebgp.operation)) leaf_name_data.push_back(send_community_ebgp.get_name_leafdata());
    if (send_community_ebgp_graceful_shutdown.is_set || is_set(send_community_ebgp_graceful_shutdown.operation)) leaf_name_data.push_back(send_community_ebgp_graceful_shutdown.get_name_leafdata());
    if (send_ext_community_ebgp.is_set || is_set(send_ext_community_ebgp.operation)) leaf_name_data.push_back(send_ext_community_ebgp.get_name_leafdata());
    if (send_multicast_attr.is_set || is_set(send_multicast_attr.operation)) leaf_name_data.push_back(send_multicast_attr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "advertise-def-imp-disable-v4")
    {
        if(advertise_def_imp_disable_v4 != nullptr)
        {
            children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;
        }
        else
        {
            advertise_def_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4>();
            advertise_def_imp_disable_v4->parent = this;
            children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;
        }
        return children.at("advertise-def-imp-disable-v4");
    }

    if(child_yang_name == "advertise-def-imp-disable-v6")
    {
        if(advertise_def_imp_disable_v6 != nullptr)
        {
            children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;
        }
        else
        {
            advertise_def_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6>();
            advertise_def_imp_disable_v6->parent = this;
            children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;
        }
        return children.at("advertise-def-imp-disable-v6");
    }

    if(child_yang_name == "advertise-disable")
    {
        if(advertise_disable != nullptr)
        {
            children["advertise-disable"] = advertise_disable;
        }
        else
        {
            advertise_disable = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable>();
            advertise_disable->parent = this;
            children["advertise-disable"] = advertise_disable;
        }
        return children.at("advertise-disable");
    }

    if(child_yang_name == "advertise-l2vpnevpn")
    {
        if(advertise_l2vpnevpn != nullptr)
        {
            children["advertise-l2vpnevpn"] = advertise_l2vpnevpn;
        }
        else
        {
            advertise_l2vpnevpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2Vpnevpn>();
            advertise_l2vpnevpn->parent = this;
            children["advertise-l2vpnevpn"] = advertise_l2vpnevpn;
        }
        return children.at("advertise-l2vpnevpn");
    }

    if(child_yang_name == "advertise-local-l2vpnevpn")
    {
        if(advertise_local_l2vpnevpn != nullptr)
        {
            children["advertise-local-l2vpnevpn"] = advertise_local_l2vpnevpn;
        }
        else
        {
            advertise_local_l2vpnevpn = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2Vpnevpn>();
            advertise_local_l2vpnevpn->parent = this;
            children["advertise-local-l2vpnevpn"] = advertise_local_l2vpnevpn;
        }
        return children.at("advertise-local-l2vpnevpn");
    }

    if(child_yang_name == "advertise-local-v4")
    {
        if(advertise_local_v4 != nullptr)
        {
            children["advertise-local-v4"] = advertise_local_v4;
        }
        else
        {
            advertise_local_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4>();
            advertise_local_v4->parent = this;
            children["advertise-local-v4"] = advertise_local_v4;
        }
        return children.at("advertise-local-v4");
    }

    if(child_yang_name == "advertise-local-v6")
    {
        if(advertise_local_v6 != nullptr)
        {
            children["advertise-local-v6"] = advertise_local_v6;
        }
        else
        {
            advertise_local_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6>();
            advertise_local_v6->parent = this;
            children["advertise-local-v6"] = advertise_local_v6;
        }
        return children.at("advertise-local-v6");
    }

    if(child_yang_name == "advertise-v4")
    {
        if(advertise_v4 != nullptr)
        {
            children["advertise-v4"] = advertise_v4;
        }
        else
        {
            advertise_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4>();
            advertise_v4->parent = this;
            children["advertise-v4"] = advertise_v4;
        }
        return children.at("advertise-v4");
    }

    if(child_yang_name == "advertise-v6")
    {
        if(advertise_v6 != nullptr)
        {
            children["advertise-v6"] = advertise_v6;
        }
        else
        {
            advertise_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6>();
            advertise_v6->parent = this;
            children["advertise-v6"] = advertise_v6;
        }
        return children.at("advertise-v6");
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v4")
    {
        if(advertise_vrf_imp_disable_v4 != nullptr)
        {
            children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;
        }
        else
        {
            advertise_vrf_imp_disable_v4 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4>();
            advertise_vrf_imp_disable_v4->parent = this;
            children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;
        }
        return children.at("advertise-vrf-imp-disable-v4");
    }

    if(child_yang_name == "advertise-vrf-imp-disable-v6")
    {
        if(advertise_vrf_imp_disable_v6 != nullptr)
        {
            children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;
        }
        else
        {
            advertise_vrf_imp_disable_v6 = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6>();
            advertise_vrf_imp_disable_v6->parent = this;
            children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;
        }
        return children.at("advertise-vrf-imp-disable-v6");
    }

    if(child_yang_name == "aigp-cost-community")
    {
        if(aigp_cost_community != nullptr)
        {
            children["aigp-cost-community"] = aigp_cost_community;
        }
        else
        {
            aigp_cost_community = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity>();
            aigp_cost_community->parent = this;
            children["aigp-cost-community"] = aigp_cost_community;
        }
        return children.at("aigp-cost-community");
    }

    if(child_yang_name == "default-originate")
    {
        if(default_originate != nullptr)
        {
            children["default-originate"] = default_originate;
        }
        else
        {
            default_originate = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate>();
            default_originate->parent = this;
            children["default-originate"] = default_originate;
        }
        return children.at("default-originate");
    }

    if(child_yang_name == "import")
    {
        if(import != nullptr)
        {
            children["import"] = import;
        }
        else
        {
            import = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import>();
            import->parent = this;
            children["import"] = import;
        }
        return children.at("import");
    }

    if(child_yang_name == "maximum-prefixes")
    {
        if(maximum_prefixes != nullptr)
        {
            children["maximum-prefixes"] = maximum_prefixes;
        }
        else
        {
            maximum_prefixes = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes>();
            maximum_prefixes->parent = this;
            children["maximum-prefixes"] = maximum_prefixes;
        }
        return children.at("maximum-prefixes");
    }

    if(child_yang_name == "neighbor-af-long-lived-graceful-restart-stale-time")
    {
        if(neighbor_af_long_lived_graceful_restart_stale_time != nullptr)
        {
            children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;
        }
        else
        {
            neighbor_af_long_lived_graceful_restart_stale_time = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime>();
            neighbor_af_long_lived_graceful_restart_stale_time->parent = this;
            children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;
        }
        return children.at("neighbor-af-long-lived-graceful-restart-stale-time");
    }

    if(child_yang_name == "remove-private-as-entire-as-path")
    {
        if(remove_private_as_entire_as_path != nullptr)
        {
            children["remove-private-as-entire-as-path"] = remove_private_as_entire_as_path;
        }
        else
        {
            remove_private_as_entire_as_path = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath>();
            remove_private_as_entire_as_path->parent = this;
            children["remove-private-as-entire-as-path"] = remove_private_as_entire_as_path;
        }
        return children.at("remove-private-as-entire-as-path");
    }

    if(child_yang_name == "remove-private-as-entire-as-path-inbound")
    {
        if(remove_private_as_entire_as_path_inbound != nullptr)
        {
            children["remove-private-as-entire-as-path-inbound"] = remove_private_as_entire_as_path_inbound;
        }
        else
        {
            remove_private_as_entire_as_path_inbound = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound>();
            remove_private_as_entire_as_path_inbound->parent = this;
            children["remove-private-as-entire-as-path-inbound"] = remove_private_as_entire_as_path_inbound;
        }
        return children.at("remove-private-as-entire-as-path-inbound");
    }

    if(child_yang_name == "site-of-origin")
    {
        if(site_of_origin != nullptr)
        {
            children["site-of-origin"] = site_of_origin;
        }
        else
        {
            site_of_origin = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin>();
            site_of_origin->parent = this;
            children["site-of-origin"] = site_of_origin;
        }
        return children.at("site-of-origin");
    }

    if(child_yang_name == "soft-reconfiguration")
    {
        if(soft_reconfiguration != nullptr)
        {
            children["soft-reconfiguration"] = soft_reconfiguration;
        }
        else
        {
            soft_reconfiguration = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration>();
            soft_reconfiguration->parent = this;
            children["soft-reconfiguration"] = soft_reconfiguration;
        }
        return children.at("soft-reconfiguration");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::get_children()
{
    if(children.find("advertise-def-imp-disable-v4") == children.end())
    {
        if(advertise_def_imp_disable_v4 != nullptr)
        {
            children["advertise-def-imp-disable-v4"] = advertise_def_imp_disable_v4;
        }
    }

    if(children.find("advertise-def-imp-disable-v6") == children.end())
    {
        if(advertise_def_imp_disable_v6 != nullptr)
        {
            children["advertise-def-imp-disable-v6"] = advertise_def_imp_disable_v6;
        }
    }

    if(children.find("advertise-disable") == children.end())
    {
        if(advertise_disable != nullptr)
        {
            children["advertise-disable"] = advertise_disable;
        }
    }

    if(children.find("advertise-l2vpnevpn") == children.end())
    {
        if(advertise_l2vpnevpn != nullptr)
        {
            children["advertise-l2vpnevpn"] = advertise_l2vpnevpn;
        }
    }

    if(children.find("advertise-local-l2vpnevpn") == children.end())
    {
        if(advertise_local_l2vpnevpn != nullptr)
        {
            children["advertise-local-l2vpnevpn"] = advertise_local_l2vpnevpn;
        }
    }

    if(children.find("advertise-local-v4") == children.end())
    {
        if(advertise_local_v4 != nullptr)
        {
            children["advertise-local-v4"] = advertise_local_v4;
        }
    }

    if(children.find("advertise-local-v6") == children.end())
    {
        if(advertise_local_v6 != nullptr)
        {
            children["advertise-local-v6"] = advertise_local_v6;
        }
    }

    if(children.find("advertise-v4") == children.end())
    {
        if(advertise_v4 != nullptr)
        {
            children["advertise-v4"] = advertise_v4;
        }
    }

    if(children.find("advertise-v6") == children.end())
    {
        if(advertise_v6 != nullptr)
        {
            children["advertise-v6"] = advertise_v6;
        }
    }

    if(children.find("advertise-vrf-imp-disable-v4") == children.end())
    {
        if(advertise_vrf_imp_disable_v4 != nullptr)
        {
            children["advertise-vrf-imp-disable-v4"] = advertise_vrf_imp_disable_v4;
        }
    }

    if(children.find("advertise-vrf-imp-disable-v6") == children.end())
    {
        if(advertise_vrf_imp_disable_v6 != nullptr)
        {
            children["advertise-vrf-imp-disable-v6"] = advertise_vrf_imp_disable_v6;
        }
    }

    if(children.find("aigp-cost-community") == children.end())
    {
        if(aigp_cost_community != nullptr)
        {
            children["aigp-cost-community"] = aigp_cost_community;
        }
    }

    if(children.find("default-originate") == children.end())
    {
        if(default_originate != nullptr)
        {
            children["default-originate"] = default_originate;
        }
    }

    if(children.find("import") == children.end())
    {
        if(import != nullptr)
        {
            children["import"] = import;
        }
    }

    if(children.find("maximum-prefixes") == children.end())
    {
        if(maximum_prefixes != nullptr)
        {
            children["maximum-prefixes"] = maximum_prefixes;
        }
    }

    if(children.find("neighbor-af-long-lived-graceful-restart-stale-time") == children.end())
    {
        if(neighbor_af_long_lived_graceful_restart_stale_time != nullptr)
        {
            children["neighbor-af-long-lived-graceful-restart-stale-time"] = neighbor_af_long_lived_graceful_restart_stale_time;
        }
    }

    if(children.find("remove-private-as-entire-as-path") == children.end())
    {
        if(remove_private_as_entire_as_path != nullptr)
        {
            children["remove-private-as-entire-as-path"] = remove_private_as_entire_as_path;
        }
    }

    if(children.find("remove-private-as-entire-as-path-inbound") == children.end())
    {
        if(remove_private_as_entire_as_path_inbound != nullptr)
        {
            children["remove-private-as-entire-as-path-inbound"] = remove_private_as_entire_as_path_inbound;
        }
    }

    if(children.find("site-of-origin") == children.end())
    {
        if(site_of_origin != nullptr)
        {
            children["site-of-origin"] = site_of_origin;
        }
    }

    if(children.find("soft-reconfiguration") == children.end())
    {
        if(soft_reconfiguration != nullptr)
        {
            children["soft-reconfiguration"] = soft_reconfiguration;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "accept-own")
    {
        accept_own = value;
    }
    if(value_path == "accept-route-legacy-rt")
    {
        accept_route_legacy_rt = value;
    }
    if(value_path == "advertise-local-labeled-route")
    {
        advertise_local_labeled_route = value;
    }
    if(value_path == "advertise-orf")
    {
        advertise_orf = value;
    }
    if(value_path == "advertise-permanent-network")
    {
        advertise_permanent_network = value;
    }
    if(value_path == "af-group")
    {
        af_group = value;
    }
    if(value_path == "aigp")
    {
        aigp = value;
    }
    if(value_path == "aigp-send-med")
    {
        aigp_send_med = value;
    }
    if(value_path == "allow-as-in")
    {
        allow_as_in = value;
    }
    if(value_path == "as-override")
    {
        as_override = value;
    }
    if(value_path == "create")
    {
        create = value;
    }
    if(value_path == "default-weight")
    {
        default_weight = value;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
    }
    if(value_path == "flowspec-validation")
    {
        flowspec_validation = value;
    }
    if(value_path == "l2vpn-signalling")
    {
        l2vpn_signalling = value;
    }
    if(value_path == "multipath")
    {
        multipath = value;
    }
    if(value_path == "neighbor-af-long-lived-graceful-restart-capable")
    {
        neighbor_af_long_lived_graceful_restart_capable = value;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self = value;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
    }
    if(value_path == "next-hop-unchanged-multipath")
    {
        next_hop_unchanged_multipath = value;
    }
    if(value_path == "prefix-orf-policy")
    {
        prefix_orf_policy = value;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in = value;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out = value;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
    }
    if(value_path == "send-community-ebgp")
    {
        send_community_ebgp = value;
    }
    if(value_path == "send-community-ebgp-graceful-shutdown")
    {
        send_community_ebgp_graceful_shutdown = value;
    }
    if(value_path == "send-ext-community-ebgp")
    {
        send_ext_community_ebgp = value;
    }
    if(value_path == "send-multicast-attr")
    {
        send_multicast_attr = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity::AigpCostCommunity()
    :
    cost_community_id{YType::uint32, "cost-community-id"},
    cost_community_poi_type{YType::enumeration, "cost-community-poi-type"},
    enable{YType::boolean, "enable"},
    transitive{YType::boolean, "transitive"}
{
    yang_name = "aigp-cost-community"; yang_parent_name = "af-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity::~AigpCostCommunity()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity::has_data() const
{
    return cost_community_id.is_set
	|| cost_community_poi_type.is_set
	|| enable.is_set
	|| transitive.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(cost_community_id.operation)
	|| is_set(cost_community_poi_type.operation)
	|| is_set(enable.operation)
	|| is_set(transitive.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aigp-cost-community";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AigpCostCommunity' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost_community_id.is_set || is_set(cost_community_id.operation)) leaf_name_data.push_back(cost_community_id.get_name_leafdata());
    if (cost_community_poi_type.is_set || is_set(cost_community_poi_type.operation)) leaf_name_data.push_back(cost_community_poi_type.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (transitive.is_set || is_set(transitive.operation)) leaf_name_data.push_back(transitive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost-community-id")
    {
        cost_community_id = value;
    }
    if(value_path == "cost-community-poi-type")
    {
        cost_community_poi_type = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "transitive")
    {
        transitive = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6::AdvertiseDefImpDisableV6()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-def-imp-disable-v6"; yang_parent_name = "af-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6::~AdvertiseDefImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_option.operation)
	|| is_set(af_name.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v6";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseDefImpDisableV6' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.operation)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable::AdvertiseDisable()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-disable"; yang_parent_name = "af-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable::~AdvertiseDisable()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-disable";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseDisable' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes::MaximumPrefixes()
    :
    discard_extra_paths{YType::boolean, "discard-extra-paths"},
    prefix_limit{YType::uint32, "prefix-limit"},
    restart_time{YType::uint32, "restart-time"},
    warning_only{YType::boolean, "warning-only"},
    warning_percentage{YType::uint32, "warning-percentage"}
{
    yang_name = "maximum-prefixes"; yang_parent_name = "af-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes::~MaximumPrefixes()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes::has_data() const
{
    return discard_extra_paths.is_set
	|| prefix_limit.is_set
	|| restart_time.is_set
	|| warning_only.is_set
	|| warning_percentage.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes::has_operation() const
{
    return is_set(operation)
	|| is_set(discard_extra_paths.operation)
	|| is_set(prefix_limit.operation)
	|| is_set(restart_time.operation)
	|| is_set(warning_only.operation)
	|| is_set(warning_percentage.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefixes";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumPrefixes' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discard_extra_paths.is_set || is_set(discard_extra_paths.operation)) leaf_name_data.push_back(discard_extra_paths.get_name_leafdata());
    if (prefix_limit.is_set || is_set(prefix_limit.operation)) leaf_name_data.push_back(prefix_limit.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.operation)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.operation)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (warning_percentage.is_set || is_set(warning_percentage.operation)) leaf_name_data.push_back(warning_percentage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discard-extra-paths")
    {
        discard_extra_paths = value;
    }
    if(value_path == "prefix-limit")
    {
        prefix_limit = value;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
    }
    if(value_path == "warning-percentage")
    {
        warning_percentage = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound::RemovePrivateAsEntireAsPathInbound()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{
    yang_name = "remove-private-as-entire-as-path-inbound"; yang_parent_name = "af-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound::~RemovePrivateAsEntireAsPathInbound()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound::has_data() const
{
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(entire.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path-inbound";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemovePrivateAsEntireAsPathInbound' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.operation)) leaf_name_data.push_back(entire.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "entire")
    {
        entire = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4::AdvertiseDefImpDisableV4()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-def-imp-disable-v4"; yang_parent_name = "af-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4::~AdvertiseDefImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_option.operation)
	|| is_set(af_name.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-def-imp-disable-v4";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseDefImpDisableV4' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.operation)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2Vpnevpn::AdvertiseL2Vpnevpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-l2vpnevpn"; yang_parent_name = "af-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2Vpnevpn::~AdvertiseL2Vpnevpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2Vpnevpn::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2Vpnevpn::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2Vpnevpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-l2vpnevpn";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2Vpnevpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseL2Vpnevpn' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2Vpnevpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2Vpnevpn::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2Vpnevpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2Vpnevpn::AdvertiseLocalL2Vpnevpn()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-local-l2vpnevpn"; yang_parent_name = "af-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2Vpnevpn::~AdvertiseLocalL2Vpnevpn()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2Vpnevpn::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2Vpnevpn::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2Vpnevpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-l2vpnevpn";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2Vpnevpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseLocalL2Vpnevpn' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2Vpnevpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2Vpnevpn::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2Vpnevpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::NeighborAfLongLivedGracefulRestartStaleTime()
    :
    stale_time_accept{YType::uint32, "stale-time-accept"},
    stale_time_send{YType::uint32, "stale-time-send"}
{
    yang_name = "neighbor-af-long-lived-graceful-restart-stale-time"; yang_parent_name = "af-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::~NeighborAfLongLivedGracefulRestartStaleTime()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::has_data() const
{
    return stale_time_accept.is_set
	|| stale_time_send.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::has_operation() const
{
    return is_set(operation)
	|| is_set(stale_time_accept.operation)
	|| is_set(stale_time_send.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af-long-lived-graceful-restart-stale-time";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAfLongLivedGracefulRestartStaleTime' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stale_time_accept.is_set || is_set(stale_time_accept.operation)) leaf_name_data.push_back(stale_time_accept.get_name_leafdata());
    if (stale_time_send.is_set || is_set(stale_time_send.operation)) leaf_name_data.push_back(stale_time_send.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stale-time-accept")
    {
        stale_time_accept = value;
    }
    if(value_path == "stale-time-send")
    {
        stale_time_send = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin::SiteOfOrigin()
    :
    address{YType::str, "address"},
    address_index{YType::uint32, "address-index"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    as_xx{YType::uint32, "as-xx"},
    type{YType::enumeration, "type"}
{
    yang_name = "site-of-origin"; yang_parent_name = "af-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin::~SiteOfOrigin()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin::has_data() const
{
    return address.is_set
	|| address_index.is_set
	|| as.is_set
	|| as_index.is_set
	|| as_xx.is_set
	|| type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(address_index.operation)
	|| is_set(as.operation)
	|| is_set(as_index.operation)
	|| is_set(as_xx.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-of-origin";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SiteOfOrigin' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_index.is_set || is_set(address_index.operation)) leaf_name_data.push_back(address_index.get_name_leafdata());
    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.operation)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "address-index")
    {
        address_index = value;
    }
    if(value_path == "as")
    {
        as = value;
    }
    if(value_path == "as-index")
    {
        as_index = value;
    }
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6::AdvertiseV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-v6"; yang_parent_name = "af-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6::~AdvertiseV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v6";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseV6' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6::AdvertiseLocalV6()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-local-v6"; yang_parent_name = "af-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6::~AdvertiseLocalV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v6";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseLocalV6' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import::Import()
    :
    import_reoriginate{YType::boolean, "import-reoriginate"},
    import_reoriginate_stitching{YType::boolean, "import-reoriginate-stitching"},
    import_stitching{YType::boolean, "import-stitching"}
{
    yang_name = "import"; yang_parent_name = "af-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import::~Import()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import::has_data() const
{
    return import_reoriginate.is_set
	|| import_reoriginate_stitching.is_set
	|| import_stitching.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import::has_operation() const
{
    return is_set(operation)
	|| is_set(import_reoriginate.operation)
	|| is_set(import_reoriginate_stitching.operation)
	|| is_set(import_stitching.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Import' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (import_reoriginate.is_set || is_set(import_reoriginate.operation)) leaf_name_data.push_back(import_reoriginate.get_name_leafdata());
    if (import_reoriginate_stitching.is_set || is_set(import_reoriginate_stitching.operation)) leaf_name_data.push_back(import_reoriginate_stitching.get_name_leafdata());
    if (import_stitching.is_set || is_set(import_stitching.operation)) leaf_name_data.push_back(import_stitching.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "import-reoriginate")
    {
        import_reoriginate = value;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching = value;
    }
    if(value_path == "import-stitching")
    {
        import_stitching = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate::DefaultOriginate()
    :
    enable{YType::boolean, "enable"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "default-originate"; yang_parent_name = "af-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate::~DefaultOriginate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate::has_data() const
{
    return enable.is_set
	|| route_policy_name.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(route_policy_name.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-originate";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultOriginate' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration::SoftReconfiguration()
    :
    inbound_soft{YType::boolean, "inbound-soft"},
    soft_always{YType::boolean, "soft-always"}
{
    yang_name = "soft-reconfiguration"; yang_parent_name = "af-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration::~SoftReconfiguration()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration::has_data() const
{
    return inbound_soft.is_set
	|| soft_always.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration::has_operation() const
{
    return is_set(operation)
	|| is_set(inbound_soft.operation)
	|| is_set(soft_always.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-reconfiguration";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SoftReconfiguration' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inbound_soft.is_set || is_set(inbound_soft.operation)) leaf_name_data.push_back(inbound_soft.get_name_leafdata());
    if (soft_always.is_set || is_set(soft_always.operation)) leaf_name_data.push_back(soft_always.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inbound-soft")
    {
        inbound_soft = value;
    }
    if(value_path == "soft-always")
    {
        soft_always = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6::AdvertiseVrfImpDisableV6()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-vrf-imp-disable-v6"; yang_parent_name = "af-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6::~AdvertiseVrfImpDisableV6()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_option.operation)
	|| is_set(af_name.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v6";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseVrfImpDisableV6' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.operation)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4::AdvertiseV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-v4"; yang_parent_name = "af-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4::~AdvertiseV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-v4";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseV4' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4::AdvertiseLocalV4()
    :
    af_name{YType::enumeration, "af-name"},
    reorg_option{YType::enumeration, "reorg-option"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-local-v4"; yang_parent_name = "af-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4::~AdvertiseLocalV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4::has_data() const
{
    return af_name.is_set
	|| reorg_option.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(reorg_option.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-v4";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseLocalV4' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (reorg_option.is_set || is_set(reorg_option.operation)) leaf_name_data.push_back(reorg_option.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "reorg-option")
    {
        reorg_option = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath::RemovePrivateAsEntireAsPath()
    :
    enable{YType::boolean, "enable"},
    entire{YType::boolean, "entire"}
{
    yang_name = "remove-private-as-entire-as-path"; yang_parent_name = "af-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath::~RemovePrivateAsEntireAsPath()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath::has_data() const
{
    return enable.is_set
	|| entire.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(entire.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-entire-as-path";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemovePrivateAsEntireAsPath' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (entire.is_set || is_set(entire.operation)) leaf_name_data.push_back(entire.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "entire")
    {
        entire = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4::AdvertiseVrfImpDisableV4()
    :
    adv_option{YType::enumeration, "adv-option"},
    af_name{YType::enumeration, "af-name"},
    rt_type{YType::enumeration, "rt-type"}
{
    yang_name = "advertise-vrf-imp-disable-v4"; yang_parent_name = "af-group-af";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4::~AdvertiseVrfImpDisableV4()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4::has_data() const
{
    return adv_option.is_set
	|| af_name.is_set
	|| rt_type.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_option.operation)
	|| is_set(af_name.operation)
	|| is_set(rt_type.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-imp-disable-v4";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseVrfImpDisableV4' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_option.is_set || is_set(adv_option.operation)) leaf_name_data.push_back(adv_option.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.operation)) leaf_name_data.push_back(rt_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseVrfImpDisableV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-option")
    {
        adv_option = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroups()
{
    yang_name = "session-groups"; yang_parent_name = "bgp-entity";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::~SessionGroups()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::has_data() const
{
    for (std::size_t index=0; index<session_group.size(); index++)
    {
        if(session_group[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::has_operation() const
{
    for (std::size_t index=0; index<session_group.size(); index++)
    {
        if(session_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-groups";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionGroups' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session-group")
    {
        for(auto const & c : session_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup>();
        c->parent = this;
        session_group.push_back(std::move(c));
        children[segment_path] = session_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::get_children()
{
    for (auto const & c : session_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SessionGroup()
    :
    session_group_name{YType::str, "session-group-name"},
    additional_paths_receive_capability{YType::enumeration, "additional-paths-receive-capability"},
    additional_paths_send_capability{YType::enumeration, "additional-paths-send-capability"},
    bfd_enable_modes{YType::enumeration, "bfd-enable-modes"},
    bfd_minimum_interval{YType::uint32, "bfd-minimum-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    create{YType::empty, "create"},
    description{YType::str, "description"},
    ebgp_recv_dmz{YType::boolean, "ebgp-recv-dmz"},
    ebgp_send_dmz_enable_modes{YType::enumeration, "ebgp-send-dmz-enable-modes"},
    egress_peer_engineering{YType::boolean, "egress-peer-engineering"},
    enforce_first_as{YType::boolean, "enforce-first-as"},
    idle_watch_time{YType::uint32, "idle-watch-time"},
    ignore_connected_check_ebgp{YType::boolean, "ignore-connected-check-ebgp"},
    internal_vpn_client_ibgpce{YType::boolean, "internal-vpn-client-ibgpce"},
    max_peers{YType::uint32, "max-peers"},
    neighbor_graceful_restart{YType::boolean, "neighbor-graceful-restart"},
    neighbor_graceful_restart_stalepath_time{YType::uint32, "neighbor-graceful-restart-stalepath-time"},
    neighbor_graceful_restart_time{YType::uint32, "neighbor-graceful-restart-time"},
    propagate_dmz_link_bandwidth{YType::boolean, "propagate-dmz-link-bandwidth"},
    remote_as_list{YType::str, "remote-as-list"},
    rpki_bestpath_origin_as_allow_invalid{YType::empty, "rpki-bestpath-origin-as-allow-invalid"},
    rpki_origin_as_validation_disable{YType::empty, "rpki-origin-as-validation-disable"},
    session_group_add_member{YType::str, "session-group-add-member"},
    session_open_mode{YType::enumeration, "session-open-mode"},
    shutdown{YType::boolean, "shutdown"},
    suppress_all_capabilities{YType::boolean, "suppress-all-capabilities"},
    suppress_four_byte_as_capability{YType::boolean, "suppress-four-byte-as-capability"},
    ttl_security{YType::boolean, "ttl-security"},
    update_source_interface{YType::str, "update-source-interface"}
    	,
    advertisement_interval(nullptr) // presence node
	,bmp_activates(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates>())
	,ebgp_multihop(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop>())
	,graceful_maintenance(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance>())
	,keychain(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain>())
	,local_address(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress>())
	,local_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs>())
	,msg_log_in(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn>())
	,msg_log_out(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut>())
	,neighbor_cluster_id(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId>())
	,password(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password>())
	,receive_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize>())
	,remote_as(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs>())
	,send_buffer_size(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize>())
	,tcpmss(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss>())
	,timers(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers>())
	,tos(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos>())
	,update_in_filtering(std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering>())
{
    bmp_activates->parent = this;
    children["bmp-activates"] = bmp_activates;

    ebgp_multihop->parent = this;
    children["ebgp-multihop"] = ebgp_multihop;

    graceful_maintenance->parent = this;
    children["graceful-maintenance"] = graceful_maintenance;

    keychain->parent = this;
    children["keychain"] = keychain;

    local_address->parent = this;
    children["local-address"] = local_address;

    local_as->parent = this;
    children["local-as"] = local_as;

    msg_log_in->parent = this;
    children["msg-log-in"] = msg_log_in;

    msg_log_out->parent = this;
    children["msg-log-out"] = msg_log_out;

    neighbor_cluster_id->parent = this;
    children["neighbor-cluster-id"] = neighbor_cluster_id;

    password->parent = this;
    children["password"] = password;

    receive_buffer_size->parent = this;
    children["receive-buffer-size"] = receive_buffer_size;

    remote_as->parent = this;
    children["remote-as"] = remote_as;

    send_buffer_size->parent = this;
    children["send-buffer-size"] = send_buffer_size;

    tcpmss->parent = this;
    children["tcpmss"] = tcpmss;

    timers->parent = this;
    children["timers"] = timers;

    tos->parent = this;
    children["tos"] = tos;

    update_in_filtering->parent = this;
    children["update-in-filtering"] = update_in_filtering;

    yang_name = "session-group"; yang_parent_name = "session-groups";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::~SessionGroup()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::has_data() const
{
    return session_group_name.is_set
	|| additional_paths_receive_capability.is_set
	|| additional_paths_send_capability.is_set
	|| bfd_enable_modes.is_set
	|| bfd_minimum_interval.is_set
	|| bfd_multiplier.is_set
	|| create.is_set
	|| description.is_set
	|| ebgp_recv_dmz.is_set
	|| ebgp_send_dmz_enable_modes.is_set
	|| egress_peer_engineering.is_set
	|| enforce_first_as.is_set
	|| idle_watch_time.is_set
	|| ignore_connected_check_ebgp.is_set
	|| internal_vpn_client_ibgpce.is_set
	|| max_peers.is_set
	|| neighbor_graceful_restart.is_set
	|| neighbor_graceful_restart_stalepath_time.is_set
	|| neighbor_graceful_restart_time.is_set
	|| propagate_dmz_link_bandwidth.is_set
	|| remote_as_list.is_set
	|| rpki_bestpath_origin_as_allow_invalid.is_set
	|| rpki_origin_as_validation_disable.is_set
	|| session_group_add_member.is_set
	|| session_open_mode.is_set
	|| shutdown.is_set
	|| suppress_all_capabilities.is_set
	|| suppress_four_byte_as_capability.is_set
	|| ttl_security.is_set
	|| update_source_interface.is_set
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_data())
	|| (bmp_activates !=  nullptr && bmp_activates->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_data())
	|| (keychain !=  nullptr && keychain->has_data())
	|| (local_address !=  nullptr && local_address->has_data())
	|| (local_as !=  nullptr && local_as->has_data())
	|| (msg_log_in !=  nullptr && msg_log_in->has_data())
	|| (msg_log_out !=  nullptr && msg_log_out->has_data())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_data())
	|| (remote_as !=  nullptr && remote_as->has_data())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_data())
	|| (tcpmss !=  nullptr && tcpmss->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (tos !=  nullptr && tos->has_data())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_data());
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(session_group_name.operation)
	|| is_set(additional_paths_receive_capability.operation)
	|| is_set(additional_paths_send_capability.operation)
	|| is_set(bfd_enable_modes.operation)
	|| is_set(bfd_minimum_interval.operation)
	|| is_set(bfd_multiplier.operation)
	|| is_set(create.operation)
	|| is_set(description.operation)
	|| is_set(ebgp_recv_dmz.operation)
	|| is_set(ebgp_send_dmz_enable_modes.operation)
	|| is_set(egress_peer_engineering.operation)
	|| is_set(enforce_first_as.operation)
	|| is_set(idle_watch_time.operation)
	|| is_set(ignore_connected_check_ebgp.operation)
	|| is_set(internal_vpn_client_ibgpce.operation)
	|| is_set(max_peers.operation)
	|| is_set(neighbor_graceful_restart.operation)
	|| is_set(neighbor_graceful_restart_stalepath_time.operation)
	|| is_set(neighbor_graceful_restart_time.operation)
	|| is_set(propagate_dmz_link_bandwidth.operation)
	|| is_set(remote_as_list.operation)
	|| is_set(rpki_bestpath_origin_as_allow_invalid.operation)
	|| is_set(rpki_origin_as_validation_disable.operation)
	|| is_set(session_group_add_member.operation)
	|| is_set(session_open_mode.operation)
	|| is_set(shutdown.operation)
	|| is_set(suppress_all_capabilities.operation)
	|| is_set(suppress_four_byte_as_capability.operation)
	|| is_set(ttl_security.operation)
	|| is_set(update_source_interface.operation)
	|| (advertisement_interval !=  nullptr && advertisement_interval->has_operation())
	|| (bmp_activates !=  nullptr && bmp_activates->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_operation())
	|| (keychain !=  nullptr && keychain->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (local_as !=  nullptr && local_as->has_operation())
	|| (msg_log_in !=  nullptr && msg_log_in->has_operation())
	|| (msg_log_out !=  nullptr && msg_log_out->has_operation())
	|| (neighbor_cluster_id !=  nullptr && neighbor_cluster_id->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (receive_buffer_size !=  nullptr && receive_buffer_size->has_operation())
	|| (remote_as !=  nullptr && remote_as->has_operation())
	|| (send_buffer_size !=  nullptr && send_buffer_size->has_operation())
	|| (tcpmss !=  nullptr && tcpmss->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (tos !=  nullptr && tos->has_operation())
	|| (update_in_filtering !=  nullptr && update_in_filtering->has_operation());
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-group" <<"[session-group-name='" <<session_group_name <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionGroup' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_group_name.is_set || is_set(session_group_name.operation)) leaf_name_data.push_back(session_group_name.get_name_leafdata());
    if (additional_paths_receive_capability.is_set || is_set(additional_paths_receive_capability.operation)) leaf_name_data.push_back(additional_paths_receive_capability.get_name_leafdata());
    if (additional_paths_send_capability.is_set || is_set(additional_paths_send_capability.operation)) leaf_name_data.push_back(additional_paths_send_capability.get_name_leafdata());
    if (bfd_enable_modes.is_set || is_set(bfd_enable_modes.operation)) leaf_name_data.push_back(bfd_enable_modes.get_name_leafdata());
    if (bfd_minimum_interval.is_set || is_set(bfd_minimum_interval.operation)) leaf_name_data.push_back(bfd_minimum_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.operation)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (create.is_set || is_set(create.operation)) leaf_name_data.push_back(create.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (ebgp_recv_dmz.is_set || is_set(ebgp_recv_dmz.operation)) leaf_name_data.push_back(ebgp_recv_dmz.get_name_leafdata());
    if (ebgp_send_dmz_enable_modes.is_set || is_set(ebgp_send_dmz_enable_modes.operation)) leaf_name_data.push_back(ebgp_send_dmz_enable_modes.get_name_leafdata());
    if (egress_peer_engineering.is_set || is_set(egress_peer_engineering.operation)) leaf_name_data.push_back(egress_peer_engineering.get_name_leafdata());
    if (enforce_first_as.is_set || is_set(enforce_first_as.operation)) leaf_name_data.push_back(enforce_first_as.get_name_leafdata());
    if (idle_watch_time.is_set || is_set(idle_watch_time.operation)) leaf_name_data.push_back(idle_watch_time.get_name_leafdata());
    if (ignore_connected_check_ebgp.is_set || is_set(ignore_connected_check_ebgp.operation)) leaf_name_data.push_back(ignore_connected_check_ebgp.get_name_leafdata());
    if (internal_vpn_client_ibgpce.is_set || is_set(internal_vpn_client_ibgpce.operation)) leaf_name_data.push_back(internal_vpn_client_ibgpce.get_name_leafdata());
    if (max_peers.is_set || is_set(max_peers.operation)) leaf_name_data.push_back(max_peers.get_name_leafdata());
    if (neighbor_graceful_restart.is_set || is_set(neighbor_graceful_restart.operation)) leaf_name_data.push_back(neighbor_graceful_restart.get_name_leafdata());
    if (neighbor_graceful_restart_stalepath_time.is_set || is_set(neighbor_graceful_restart_stalepath_time.operation)) leaf_name_data.push_back(neighbor_graceful_restart_stalepath_time.get_name_leafdata());
    if (neighbor_graceful_restart_time.is_set || is_set(neighbor_graceful_restart_time.operation)) leaf_name_data.push_back(neighbor_graceful_restart_time.get_name_leafdata());
    if (propagate_dmz_link_bandwidth.is_set || is_set(propagate_dmz_link_bandwidth.operation)) leaf_name_data.push_back(propagate_dmz_link_bandwidth.get_name_leafdata());
    if (remote_as_list.is_set || is_set(remote_as_list.operation)) leaf_name_data.push_back(remote_as_list.get_name_leafdata());
    if (rpki_bestpath_origin_as_allow_invalid.is_set || is_set(rpki_bestpath_origin_as_allow_invalid.operation)) leaf_name_data.push_back(rpki_bestpath_origin_as_allow_invalid.get_name_leafdata());
    if (rpki_origin_as_validation_disable.is_set || is_set(rpki_origin_as_validation_disable.operation)) leaf_name_data.push_back(rpki_origin_as_validation_disable.get_name_leafdata());
    if (session_group_add_member.is_set || is_set(session_group_add_member.operation)) leaf_name_data.push_back(session_group_add_member.get_name_leafdata());
    if (session_open_mode.is_set || is_set(session_open_mode.operation)) leaf_name_data.push_back(session_open_mode.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (suppress_all_capabilities.is_set || is_set(suppress_all_capabilities.operation)) leaf_name_data.push_back(suppress_all_capabilities.get_name_leafdata());
    if (suppress_four_byte_as_capability.is_set || is_set(suppress_four_byte_as_capability.operation)) leaf_name_data.push_back(suppress_four_byte_as_capability.get_name_leafdata());
    if (ttl_security.is_set || is_set(ttl_security.operation)) leaf_name_data.push_back(ttl_security.get_name_leafdata());
    if (update_source_interface.is_set || is_set(update_source_interface.operation)) leaf_name_data.push_back(update_source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "advertisement-interval")
    {
        if(advertisement_interval != nullptr)
        {
            children["advertisement-interval"] = advertisement_interval;
        }
        else
        {
            advertisement_interval = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval>();
            advertisement_interval->parent = this;
            children["advertisement-interval"] = advertisement_interval;
        }
        return children.at("advertisement-interval");
    }

    if(child_yang_name == "bmp-activates")
    {
        if(bmp_activates != nullptr)
        {
            children["bmp-activates"] = bmp_activates;
        }
        else
        {
            bmp_activates = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates>();
            bmp_activates->parent = this;
            children["bmp-activates"] = bmp_activates;
        }
        return children.at("bmp-activates");
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop != nullptr)
        {
            children["ebgp-multihop"] = ebgp_multihop;
        }
        else
        {
            ebgp_multihop = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop>();
            ebgp_multihop->parent = this;
            children["ebgp-multihop"] = ebgp_multihop;
        }
        return children.at("ebgp-multihop");
    }

    if(child_yang_name == "graceful-maintenance")
    {
        if(graceful_maintenance != nullptr)
        {
            children["graceful-maintenance"] = graceful_maintenance;
        }
        else
        {
            graceful_maintenance = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance>();
            graceful_maintenance->parent = this;
            children["graceful-maintenance"] = graceful_maintenance;
        }
        return children.at("graceful-maintenance");
    }

    if(child_yang_name == "keychain")
    {
        if(keychain != nullptr)
        {
            children["keychain"] = keychain;
        }
        else
        {
            keychain = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain>();
            keychain->parent = this;
            children["keychain"] = keychain;
        }
        return children.at("keychain");
    }

    if(child_yang_name == "local-address")
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address;
        }
        else
        {
            local_address = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress>();
            local_address->parent = this;
            children["local-address"] = local_address;
        }
        return children.at("local-address");
    }

    if(child_yang_name == "local-as")
    {
        if(local_as != nullptr)
        {
            children["local-as"] = local_as;
        }
        else
        {
            local_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs>();
            local_as->parent = this;
            children["local-as"] = local_as;
        }
        return children.at("local-as");
    }

    if(child_yang_name == "msg-log-in")
    {
        if(msg_log_in != nullptr)
        {
            children["msg-log-in"] = msg_log_in;
        }
        else
        {
            msg_log_in = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn>();
            msg_log_in->parent = this;
            children["msg-log-in"] = msg_log_in;
        }
        return children.at("msg-log-in");
    }

    if(child_yang_name == "msg-log-out")
    {
        if(msg_log_out != nullptr)
        {
            children["msg-log-out"] = msg_log_out;
        }
        else
        {
            msg_log_out = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut>();
            msg_log_out->parent = this;
            children["msg-log-out"] = msg_log_out;
        }
        return children.at("msg-log-out");
    }

    if(child_yang_name == "neighbor-cluster-id")
    {
        if(neighbor_cluster_id != nullptr)
        {
            children["neighbor-cluster-id"] = neighbor_cluster_id;
        }
        else
        {
            neighbor_cluster_id = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId>();
            neighbor_cluster_id->parent = this;
            children["neighbor-cluster-id"] = neighbor_cluster_id;
        }
        return children.at("neighbor-cluster-id");
    }

    if(child_yang_name == "password")
    {
        if(password != nullptr)
        {
            children["password"] = password;
        }
        else
        {
            password = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password>();
            password->parent = this;
            children["password"] = password;
        }
        return children.at("password");
    }

    if(child_yang_name == "receive-buffer-size")
    {
        if(receive_buffer_size != nullptr)
        {
            children["receive-buffer-size"] = receive_buffer_size;
        }
        else
        {
            receive_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize>();
            receive_buffer_size->parent = this;
            children["receive-buffer-size"] = receive_buffer_size;
        }
        return children.at("receive-buffer-size");
    }

    if(child_yang_name == "remote-as")
    {
        if(remote_as != nullptr)
        {
            children["remote-as"] = remote_as;
        }
        else
        {
            remote_as = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs>();
            remote_as->parent = this;
            children["remote-as"] = remote_as;
        }
        return children.at("remote-as");
    }

    if(child_yang_name == "send-buffer-size")
    {
        if(send_buffer_size != nullptr)
        {
            children["send-buffer-size"] = send_buffer_size;
        }
        else
        {
            send_buffer_size = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize>();
            send_buffer_size->parent = this;
            children["send-buffer-size"] = send_buffer_size;
        }
        return children.at("send-buffer-size");
    }

    if(child_yang_name == "tcpmss")
    {
        if(tcpmss != nullptr)
        {
            children["tcpmss"] = tcpmss;
        }
        else
        {
            tcpmss = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss>();
            tcpmss->parent = this;
            children["tcpmss"] = tcpmss;
        }
        return children.at("tcpmss");
    }

    if(child_yang_name == "timers")
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
        else
        {
            timers = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers>();
            timers->parent = this;
            children["timers"] = timers;
        }
        return children.at("timers");
    }

    if(child_yang_name == "tos")
    {
        if(tos != nullptr)
        {
            children["tos"] = tos;
        }
        else
        {
            tos = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos>();
            tos->parent = this;
            children["tos"] = tos;
        }
        return children.at("tos");
    }

    if(child_yang_name == "update-in-filtering")
    {
        if(update_in_filtering != nullptr)
        {
            children["update-in-filtering"] = update_in_filtering;
        }
        else
        {
            update_in_filtering = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering>();
            update_in_filtering->parent = this;
            children["update-in-filtering"] = update_in_filtering;
        }
        return children.at("update-in-filtering");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::get_children()
{
    if(children.find("advertisement-interval") == children.end())
    {
        if(advertisement_interval != nullptr)
        {
            children["advertisement-interval"] = advertisement_interval;
        }
    }

    if(children.find("bmp-activates") == children.end())
    {
        if(bmp_activates != nullptr)
        {
            children["bmp-activates"] = bmp_activates;
        }
    }

    if(children.find("ebgp-multihop") == children.end())
    {
        if(ebgp_multihop != nullptr)
        {
            children["ebgp-multihop"] = ebgp_multihop;
        }
    }

    if(children.find("graceful-maintenance") == children.end())
    {
        if(graceful_maintenance != nullptr)
        {
            children["graceful-maintenance"] = graceful_maintenance;
        }
    }

    if(children.find("keychain") == children.end())
    {
        if(keychain != nullptr)
        {
            children["keychain"] = keychain;
        }
    }

    if(children.find("local-address") == children.end())
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address;
        }
    }

    if(children.find("local-as") == children.end())
    {
        if(local_as != nullptr)
        {
            children["local-as"] = local_as;
        }
    }

    if(children.find("msg-log-in") == children.end())
    {
        if(msg_log_in != nullptr)
        {
            children["msg-log-in"] = msg_log_in;
        }
    }

    if(children.find("msg-log-out") == children.end())
    {
        if(msg_log_out != nullptr)
        {
            children["msg-log-out"] = msg_log_out;
        }
    }

    if(children.find("neighbor-cluster-id") == children.end())
    {
        if(neighbor_cluster_id != nullptr)
        {
            children["neighbor-cluster-id"] = neighbor_cluster_id;
        }
    }

    if(children.find("password") == children.end())
    {
        if(password != nullptr)
        {
            children["password"] = password;
        }
    }

    if(children.find("receive-buffer-size") == children.end())
    {
        if(receive_buffer_size != nullptr)
        {
            children["receive-buffer-size"] = receive_buffer_size;
        }
    }

    if(children.find("remote-as") == children.end())
    {
        if(remote_as != nullptr)
        {
            children["remote-as"] = remote_as;
        }
    }

    if(children.find("send-buffer-size") == children.end())
    {
        if(send_buffer_size != nullptr)
        {
            children["send-buffer-size"] = send_buffer_size;
        }
    }

    if(children.find("tcpmss") == children.end())
    {
        if(tcpmss != nullptr)
        {
            children["tcpmss"] = tcpmss;
        }
    }

    if(children.find("timers") == children.end())
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
    }

    if(children.find("tos") == children.end())
    {
        if(tos != nullptr)
        {
            children["tos"] = tos;
        }
    }

    if(children.find("update-in-filtering") == children.end())
    {
        if(update_in_filtering != nullptr)
        {
            children["update-in-filtering"] = update_in_filtering;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-group-name")
    {
        session_group_name = value;
    }
    if(value_path == "additional-paths-receive-capability")
    {
        additional_paths_receive_capability = value;
    }
    if(value_path == "additional-paths-send-capability")
    {
        additional_paths_send_capability = value;
    }
    if(value_path == "bfd-enable-modes")
    {
        bfd_enable_modes = value;
    }
    if(value_path == "bfd-minimum-interval")
    {
        bfd_minimum_interval = value;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
    }
    if(value_path == "create")
    {
        create = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz = value;
    }
    if(value_path == "ebgp-send-dmz-enable-modes")
    {
        ebgp_send_dmz_enable_modes = value;
    }
    if(value_path == "egress-peer-engineering")
    {
        egress_peer_engineering = value;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as = value;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time = value;
    }
    if(value_path == "ignore-connected-check-ebgp")
    {
        ignore_connected_check_ebgp = value;
    }
    if(value_path == "internal-vpn-client-ibgpce")
    {
        internal_vpn_client_ibgpce = value;
    }
    if(value_path == "max-peers")
    {
        max_peers = value;
    }
    if(value_path == "neighbor-graceful-restart")
    {
        neighbor_graceful_restart = value;
    }
    if(value_path == "neighbor-graceful-restart-stalepath-time")
    {
        neighbor_graceful_restart_stalepath_time = value;
    }
    if(value_path == "neighbor-graceful-restart-time")
    {
        neighbor_graceful_restart_time = value;
    }
    if(value_path == "propagate-dmz-link-bandwidth")
    {
        propagate_dmz_link_bandwidth = value;
    }
    if(value_path == "remote-as-list")
    {
        remote_as_list = value;
    }
    if(value_path == "rpki-bestpath-origin-as-allow-invalid")
    {
        rpki_bestpath_origin_as_allow_invalid = value;
    }
    if(value_path == "rpki-origin-as-validation-disable")
    {
        rpki_origin_as_validation_disable = value;
    }
    if(value_path == "session-group-add-member")
    {
        session_group_add_member = value;
    }
    if(value_path == "session-open-mode")
    {
        session_open_mode = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "suppress-all-capabilities")
    {
        suppress_all_capabilities = value;
    }
    if(value_path == "suppress-four-byte-as-capability")
    {
        suppress_four_byte_as_capability = value;
    }
    if(value_path == "ttl-security")
    {
        ttl_security = value;
    }
    if(value_path == "update-source-interface")
    {
        update_source_interface = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::LocalAddress()
    :
    local_address_disable{YType::boolean, "local-address-disable"},
    local_ip_address{YType::str, "local-ip-address"}
{
    yang_name = "local-address"; yang_parent_name = "session-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::~LocalAddress()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::has_data() const
{
    return local_address_disable.is_set
	|| local_ip_address.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(local_address_disable.operation)
	|| is_set(local_ip_address.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalAddress' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address_disable.is_set || is_set(local_address_disable.operation)) leaf_name_data.push_back(local_address_disable.get_name_leafdata());
    if (local_ip_address.is_set || is_set(local_ip_address.operation)) leaf_name_data.push_back(local_ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-address-disable")
    {
        local_address_disable = value;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivates()
{
    yang_name = "bmp-activates"; yang_parent_name = "session-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::~BmpActivates()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::has_data() const
{
    for (std::size_t index=0; index<bmp_activate.size(); index++)
    {
        if(bmp_activate[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::has_operation() const
{
    for (std::size_t index=0; index<bmp_activate.size(); index++)
    {
        if(bmp_activate[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activates";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpActivates' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bmp-activate")
    {
        for(auto const & c : bmp_activate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate>();
        c->parent = this;
        bmp_activate.push_back(std::move(c));
        children[segment_path] = bmp_activate.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::get_children()
{
    for (auto const & c : bmp_activate)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::BmpActivate()
    :
    server_id{YType::uint32, "server-id"}
{
    yang_name = "bmp-activate"; yang_parent_name = "bmp-activates";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::~BmpActivate()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::has_data() const
{
    return server_id.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::has_operation() const
{
    return is_set(operation)
	|| is_set(server_id.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-activate" <<"[server-id='" <<server_id <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BmpActivate' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_id.is_set || is_set(server_id.operation)) leaf_name_data.push_back(server_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "server-id")
    {
        server_id = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::EbgpMultihop()
    :
    max_hop_count{YType::uint32, "max-hop-count"},
    mpls_deactivation{YType::boolean, "mpls-deactivation"}
{
    yang_name = "ebgp-multihop"; yang_parent_name = "session-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::~EbgpMultihop()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::has_data() const
{
    return max_hop_count.is_set
	|| mpls_deactivation.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::has_operation() const
{
    return is_set(operation)
	|| is_set(max_hop_count.operation)
	|| is_set(mpls_deactivation.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EbgpMultihop' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_hop_count.is_set || is_set(max_hop_count.operation)) leaf_name_data.push_back(max_hop_count.get_name_leafdata());
    if (mpls_deactivation.is_set || is_set(mpls_deactivation.operation)) leaf_name_data.push_back(mpls_deactivation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-hop-count")
    {
        max_hop_count = value;
    }
    if(value_path == "mpls-deactivation")
    {
        mpls_deactivation = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::RemoteAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"}
{
    yang_name = "remote-as"; yang_parent_name = "session-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::~RemoteAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-as";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteAs' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::LocalAs()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    disable{YType::empty, "disable"},
    dual_as{YType::empty, "dual-as"},
    no_prepend{YType::empty, "no-prepend"},
    replace_as{YType::empty, "replace-as"}
{
    yang_name = "local-as"; yang_parent_name = "session-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::~LocalAs()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set
	|| disable.is_set
	|| dual_as.is_set
	|| no_prepend.is_set
	|| replace_as.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::has_operation() const
{
    return is_set(operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation)
	|| is_set(disable.operation)
	|| is_set(dual_as.operation)
	|| is_set(no_prepend.operation)
	|| is_set(replace_as.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-as";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalAs' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (dual_as.is_set || is_set(dual_as.operation)) leaf_name_data.push_back(dual_as.get_name_leafdata());
    if (no_prepend.is_set || is_set(no_prepend.operation)) leaf_name_data.push_back(no_prepend.get_name_leafdata());
    if (replace_as.is_set || is_set(replace_as.operation)) leaf_name_data.push_back(replace_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "dual-as")
    {
        dual_as = value;
    }
    if(value_path == "no-prepend")
    {
        no_prepend = value;
    }
    if(value_path == "replace-as")
    {
        replace_as = value;
    }
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::Password()
    :
    password{YType::str, "password"},
    password_disable{YType::boolean, "password-disable"}
{
    yang_name = "password"; yang_parent_name = "session-group";
}

Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::~Password()
{
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::has_data() const
{
    return password.is_set
	|| password_disable.is_set;
}

bool Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(password.operation)
	|| is_set(password_disable.operation);
}

std::string Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

EntityPath Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XR_ipv4_bgp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (password_disable.is_set || is_set(password_disable.operation)) leaf_name_data.push_back(password_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::get_children()
{
    return children;
}

void Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "password-disable")
    {
        password_disable = value;
    }
}


}
}

