
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_25.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_26.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_27.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_oper {

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyAllocatedBindingSid::SrPolicyAllocatedBindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{
    yang_name = "sr-policy-allocated-binding-sid"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyAllocatedBindingSid::~SrPolicyAllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyAllocatedBindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyAllocatedBindingSid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyAllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-allocated-binding-sid";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyAllocatedBindingSid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrPolicyAllocatedBindingSid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyAllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyAllocatedBindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyAllocatedBindingSid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Community::Community()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "community"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Community::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Community::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Community::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Community' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Community::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "extended-community"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedCommunity' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "unknown-attribute"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownAttribute' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "cluster"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Cluster::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Cluster::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Cluster::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cluster' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Cluster::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::L2Tpv3Cookie::L2Tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "l2tpv3-cookie"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::L2Tpv3Cookie::~L2Tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::L2Tpv3Cookie::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::L2Tpv3Cookie::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::L2Tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::L2Tpv3Cookie::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tpv3Cookie' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::L2Tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::L2Tpv3Cookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::L2Tpv3Cookie::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "connector-value"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ConnectorValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ConnectorValue::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ConnectorValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectorValue' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ConnectorValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ConnectorValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "pmsi-value"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PmsiValue::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PmsiValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PmsiValue' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PmsiValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "ls-attr"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LsAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LsAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LsAttr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsAttr' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LsAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LsAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LabelIndexAttr::LabelIndexAttr()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "label-index-attr"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LabelIndexAttr::~LabelIndexAttr()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LabelIndexAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LabelIndexAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LabelIndexAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-index-attr";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LabelIndexAttr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelIndexAttr' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LabelIndexAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LabelIndexAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LabelIndexAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    label{YType::uint32, "label"},
    pe_address{YType::str, "pe-address"}
{
    yang_name = "pe-distinguisher-label"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::has_data() const
{
    return label.is_set
	|| pe_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(label.operation)
	|| is_set(pe_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeDistinguisherLabel' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (pe_address.is_set || is_set(pe_address.operation)) leaf_name_data.push_back(pe_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "pe-address")
    {
        pe_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::SrPolicyExplicitPath()
    :
    weight{YType::uint8, "weight"}
{
    yang_name = "sr-policy-explicit-path"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::~SrPolicyExplicitPath()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::has_data() const
{
    for (std::size_t index=0; index<sid.size(); index++)
    {
        if(sid[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::has_operation() const
{
    for (std::size_t index=0; index<sid.size(); index++)
    {
        if(sid[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(weight.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-explicit-path";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrPolicyExplicitPath' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid")
    {
        for(auto const & c : sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::Sid>();
        c->parent = this;
        sid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "weight")
    {
        weight = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::Sid::Sid()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"},
    label{YType::uint32, "label"},
    type{YType::uint8, "type"}
{
    yang_name = "sid"; yang_parent_name = "sr-policy-explicit-path";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::Sid::~Sid()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::Sid::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::Sid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::Sid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::Sid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::Sid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::Sid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::Sid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RnhAddr::RnhAddr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    len{YType::enumeration, "len"},
    mac_address{YType::str, "mac-address"}
{
    yang_name = "rnh-addr"; yang_parent_name = "attributes-after-policy-out";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RnhAddr::~RnhAddr()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RnhAddr::has_data() const
{
    return ipv4_address.is_set
	|| ipv6_address.is_set
	|| len.is_set
	|| mac_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RnhAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(len.operation)
	|| is_set(mac_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RnhAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rnh-addr";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RnhAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RnhAddr' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (len.is_set || is_set(len.operation)) leaf_name_data.push_back(len.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RnhAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RnhAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RnhAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "len")
    {
        len = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::RibrnhIp()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;

    ipv6sr_policy_address->parent = this;

    l2vpn_mspw_address->parent = this;

    l2vpnvpls_address->parent = this;

    yang_name = "ribrnh-ip"; yang_parent_name = "attributes-after-policy-out";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::~RibrnhIp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribrnh-ip";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RibrnhIp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address == nullptr)
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress>();
        }
        return ipv4sr_policy_address;
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address == nullptr)
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress>();
        }
        return ipv6sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address == nullptr)
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnvplsAddress>();
        }
        return l2vpnvpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4sr_policy_address != nullptr)
    {
        children["ipv4sr-policy-address"] = ipv4sr_policy_address;
    }

    if(ipv6sr_policy_address != nullptr)
    {
        children["ipv6sr-policy-address"] = ipv6sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpnvpls_address != nullptr)
    {
        children["l2vpnvpls-address"] = l2vpnvpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "ribrnh-ip";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnvplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "ribrnh-ip";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "ribrnh-ip";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "ribrnh-ip";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::NeighborAfTable()
{
    yang_name = "neighbor-af-table"; yang_parent_name = "af";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::~NeighborAfTable()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af-table";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAfTable' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    active_bmp_servers{YType::uint8, "active-bmp-servers"},
    actual_last_write_bytes{YType::uint32, "actual-last-write-bytes"},
    actual_last_write_reset_bytes{YType::uint32, "actual-last-write-reset-bytes"},
    actual_second_last_write_bytes{YType::uint32, "actual-second-last-write-bytes"},
    actual_second_last_write_reset_bytes{YType::uint32, "actual-second-last-write-reset-bytes"},
    attempted_last_write_bytes{YType::uint32, "attempted-last-write-bytes"},
    attempted_last_write_reset_bytes{YType::uint32, "attempted-last-write-reset-bytes"},
    attempted_second_last_write_bytes{YType::uint32, "attempted-second-last-write-bytes"},
    attempted_second_last_write_reset_bytes{YType::uint32, "attempted-second-last-write-reset-bytes"},
    bfd_minintervalval{YType::uint32, "bfd-minintervalval"},
    bfd_multiplierval{YType::uint32, "bfd-multiplierval"},
    bfd_session_created_state{YType::enumeration, "bfd-session-created-state"},
    bfd_session_enable_mode{YType::enumeration, "bfd-session-enable-mode"},
    bfd_session_state{YType::enumeration, "bfd-session-state"},
    bfd_state_ts{YType::uint64, "bfd-state-ts"},
    bytes_read{YType::uint32, "bytes-read"},
    bytes_written{YType::uint32, "bytes-written"},
    configured_hold_time{YType::uint16, "configured-hold-time"},
    configured_keepalive{YType::uint16, "configured-keepalive"},
    configured_min_acc_hold_time{YType::uint16, "configured-min-acc-hold-time"},
    connect_retry_interval{YType::uint16, "connect-retry-interval"},
    connection_admin_status{YType::uint32, "connection-admin-status"},
    connection_down_count{YType::uint32, "connection-down-count"},
    connection_established_time{YType::uint32, "connection-established-time"},
    connection_local_port{YType::uint32, "connection-local-port"},
    connection_remote_port{YType::uint32, "connection-remote-port"},
    connection_state{YType::enumeration, "connection-state"},
    connection_up_count{YType::uint32, "connection-up-count"},
    count_last_write{YType::uint32, "count-last-write"},
    description{YType::str, "description"},
    discard_as4_path{YType::uint32, "discard-as4-path"},
    discard_data_bytes{YType::uint32, "discard-data-bytes"},
    dmz_link_bandwidth{YType::uint32, "dmz-link-bandwidth"},
    dynamic_neighbor{YType::boolean, "dynamic-neighbor"},
    ebgp_recv_dmz{YType::boolean, "ebgp-recv-dmz"},
    ebgp_send_dmz_mode{YType::enumeration, "ebgp-send-dmz-mode"},
    ebgp_time_to_live{YType::uint32, "ebgp-time-to-live"},
    egress_peer_engineering_enabled{YType::boolean, "egress-peer-engineering-enabled"},
    error_notifies_received{YType::uint32, "error-notifies-received"},
    error_notifies_sent{YType::uint32, "error-notifies-sent"},
    fpbsn_offset{YType::uint32, "fpbsn-offset"},
    fssn_offset{YType::uint32, "fssn-offset"},
    gr_restart_time{YType::uint32, "gr-restart-time"},
    gr_stale_path_time{YType::uint32, "gr-stale-path-time"},
    graceful_restart_enabled_nbr{YType::boolean, "graceful-restart-enabled-nbr"},
    has_internal_link{YType::boolean, "has-internal-link"},
    hold_time{YType::uint16, "hold-time"},
    ignore_connected{YType::boolean, "ignore-connected"},
    internal_vpn_client{YType::boolean, "internal-vpn-client"},
    io_armed{YType::boolean, "io-armed"},
    is4_byte_as_capability_received{YType::boolean, "is4-byte-as-capability-received"},
    is4_byte_as_capability_sent{YType::boolean, "is4-byte-as-capability-sent"},
    is_administratively_shut_down{YType::boolean, "is-administratively-shut-down"},
    is_capability_negotiation_performed{YType::boolean, "is-capability-negotiation-performed"},
    is_capability_negotiation_suppressed{YType::boolean, "is-capability-negotiation-suppressed"},
    is_ebgp_multihop_bgpmpls_forwarding_disabled{YType::boolean, "is-ebgp-multihop-bgpmpls-forwarding-disabled"},
    is_ebgp_peer_as_league{YType::boolean, "is-ebgp-peer-as-league"},
    is_ebgp_peer_common_admin{YType::boolean, "is-ebgp-peer-common-admin"},
    is_external_neighbor_not_directly_connected{YType::boolean, "is-external-neighbor-not-directly-connected"},
    is_gr_aware{YType::boolean, "is-gr-aware"},
    is_local_address_configured{YType::boolean, "is-local-address-configured"},
    is_neighbor_max_prefix_shutdown{YType::boolean, "is-neighbor-max-prefix-shutdown"},
    is_out_of_memory_forced_up{YType::boolean, "is-out-of-memory-forced-up"},
    is_out_of_memory_shutdown{YType::boolean, "is-out-of-memory-shutdown"},
    is_passive_close{YType::boolean, "is-passive-close"},
    is_read_disabled{YType::boolean, "is-read-disabled"},
    is_route_refresh_capability_received{YType::boolean, "is-route-refresh-capability-received"},
    is_route_refresh_old_capability_received{YType::boolean, "is-route-refresh-old-capability-received"},
    keep_alive_time{YType::uint16, "keep-alive-time"},
    last_ackd_seq_no{YType::uint32, "last-ackd-seq-no"},
    last_k_aerror_reset{YType::uint32, "last-k-aerror-reset"},
    last_k_aexpiry_reset{YType::uint32, "last-k-aexpiry-reset"},
    last_k_anotsent_reset{YType::uint32, "last-k-anotsent-reset"},
    last_k_astart_reset{YType::uint32, "last-k-astart-reset"},
    last_notify_error_code{YType::uint8, "last-notify-error-code"},
    last_notify_error_subcode{YType::uint8, "last-notify-error-subcode"},
    last_write_event{YType::uint32, "last-write-event"},
    local_as{YType::uint32, "local-as"},
    local_as_dual_as{YType::boolean, "local-as-dual-as"},
    local_as_dual_as_mode_native{YType::boolean, "local-as-dual-as-mode-native"},
    local_as_no_prepend{YType::boolean, "local-as-no-prepend"},
    local_as_replace_as{YType::boolean, "local-as-replace-as"},
    messages_queued_in{YType::uint32, "messages-queued-in"},
    messages_queued_out{YType::uint32, "messages-queued-out"},
    messages_received{YType::uint32, "messages-received"},
    messages_sent{YType::uint32, "messages-sent"},
    min_advertise_interval{YType::uint32, "min-advertise-interval"},
    min_advertise_interval_msecs{YType::uint32, "min-advertise-interval-msecs"},
    min_origination_interval{YType::uint16, "min-origination-interval"},
    msg_log_in{YType::uint32, "msg-log-in"},
    msg_log_out{YType::uint32, "msg-log-out"},
    multi_protocol_capability_received{YType::boolean, "multi-protocol-capability-received"},
    nbr_cluster_id{YType::uint32, "nbr-cluster-id"},
    nbr_enforce_first_as{YType::boolean, "nbr-enforce-first-as"},
    nbr_in_cluster{YType::uint8, "nbr-in-cluster"},
    negotiated_protocol_version{YType::uint16, "negotiated-protocol-version"},
    neighbor_interface_handle{YType::uint32, "neighbor-interface-handle"},
    neighbor_local_as{YType::uint32, "neighbor-local-as"},
    nsr_enabled{YType::boolean, "nsr-enabled"},
    nsr_state{YType::enumeration, "nsr-state"},
    open_check_error_code{YType::enumeration, "open-check-error-code"},
    peer_error_code{YType::uint32, "peer-error-code"},
    peer_reset_reason{YType::enumeration, "peer-reset-reason"},
    previous_connection_state{YType::uint32, "previous-connection-state"},
    read_armed{YType::boolean, "read-armed"},
    remote_as{YType::uint32, "remote-as"},
    remote_as_number{YType::uint32, "remote-as-number"},
    reset_notification_sent{YType::boolean, "reset-notification-sent"},
    reset_reason{YType::enumeration, "reset-reason"},
    router_id{YType::str, "router-id"},
    rpki_allow_invalid{YType::boolean, "rpki-allow-invalid"},
    rpki_disable{YType::boolean, "rpki-disable"},
    rpki_signal_ibgp{YType::boolean, "rpki-signal-ibgp"},
    rpki_use_validity{YType::boolean, "rpki-use-validity"},
    second_last_k_aexpiry_reset{YType::uint32, "second-last-k-aexpiry-reset"},
    second_last_k_astart_reset{YType::uint32, "second-last-k-astart-reset"},
    second_last_write_event{YType::uint32, "second-last-write-event"},
    socket_read_bytes{YType::uint32, "socket-read-bytes"},
    speaker_id{YType::uint8, "speaker-id"},
    standby_rp{YType::boolean, "standby-rp"},
    suppress4_byte_as{YType::boolean, "suppress4-byte-as"},
    tcp_session_open_mode{YType::enumeration, "tcp-session-open-mode"},
    tcpmss{YType::uint32, "tcpmss"},
    time_last_cb{YType::uint64, "time-last-cb"},
    time_last_cb_reset{YType::uint32, "time-last-cb-reset"},
    time_last_fb{YType::uint64, "time-last-fb"},
    time_since_connection_last_dropped{YType::uint32, "time-since-connection-last-dropped"},
    time_since_last_read{YType::uint32, "time-since-last-read"},
    time_since_last_read_reset{YType::uint32, "time-since-last-read-reset"},
    time_since_last_update{YType::uint32, "time-since-last-update"},
    time_since_last_write{YType::uint32, "time-since-last-write"},
    time_since_last_write_reset{YType::uint32, "time-since-last-write-reset"},
    time_since_second_last_write{YType::uint32, "time-since-second-last-write"},
    time_since_second_last_write_reset{YType::uint32, "time-since-second-last-write-reset"},
    tos_type{YType::uint8, "tos-type"},
    tos_value{YType::uint8, "tos-value"},
    ttl_security_enabled{YType::boolean, "ttl-security-enabled"},
    update_bytes_read{YType::uint32, "update-bytes-read"},
    update_messages_in{YType::uint32, "update-messages-in"},
    update_messages_out{YType::uint32, "update-messages-out"},
    vrf_name{YType::str, "vrf-name"},
    write_armed{YType::boolean, "write-armed"}
    	,
    connection_local_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress>())
	,connection_remote_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress>())
	,graceful_maintenance(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::GracefulMaintenance>())
	,message_statistics(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics>())
	,performance_statistics(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::PerformanceStatistics>())
	,received_notification_info(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo>())
	,send_notification_info(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo>())
	,tcp_init_sync_done_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncDoneTimeSpec>())
	,tcp_init_sync_phase_two_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncPhaseTwoTimeSpec>())
	,tcp_init_sync_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncTimeSpec>())
{
    connection_local_address->parent = this;

    connection_remote_address->parent = this;

    graceful_maintenance->parent = this;

    message_statistics->parent = this;

    performance_statistics->parent = this;

    received_notification_info->parent = this;

    send_notification_info->parent = this;

    tcp_init_sync_done_time_spec->parent = this;

    tcp_init_sync_phase_two_time_spec->parent = this;

    tcp_init_sync_time_spec->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbor-af-table";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::~Neighbor()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::has_data() const
{
    for (std::size_t index=0; index<af_data.size(); index++)
    {
        if(af_data[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| active_bmp_servers.is_set
	|| actual_last_write_bytes.is_set
	|| actual_last_write_reset_bytes.is_set
	|| actual_second_last_write_bytes.is_set
	|| actual_second_last_write_reset_bytes.is_set
	|| attempted_last_write_bytes.is_set
	|| attempted_last_write_reset_bytes.is_set
	|| attempted_second_last_write_bytes.is_set
	|| attempted_second_last_write_reset_bytes.is_set
	|| bfd_minintervalval.is_set
	|| bfd_multiplierval.is_set
	|| bfd_session_created_state.is_set
	|| bfd_session_enable_mode.is_set
	|| bfd_session_state.is_set
	|| bfd_state_ts.is_set
	|| bytes_read.is_set
	|| bytes_written.is_set
	|| configured_hold_time.is_set
	|| configured_keepalive.is_set
	|| configured_min_acc_hold_time.is_set
	|| connect_retry_interval.is_set
	|| connection_admin_status.is_set
	|| connection_down_count.is_set
	|| connection_established_time.is_set
	|| connection_local_port.is_set
	|| connection_remote_port.is_set
	|| connection_state.is_set
	|| connection_up_count.is_set
	|| count_last_write.is_set
	|| description.is_set
	|| discard_as4_path.is_set
	|| discard_data_bytes.is_set
	|| dmz_link_bandwidth.is_set
	|| dynamic_neighbor.is_set
	|| ebgp_recv_dmz.is_set
	|| ebgp_send_dmz_mode.is_set
	|| ebgp_time_to_live.is_set
	|| egress_peer_engineering_enabled.is_set
	|| error_notifies_received.is_set
	|| error_notifies_sent.is_set
	|| fpbsn_offset.is_set
	|| fssn_offset.is_set
	|| gr_restart_time.is_set
	|| gr_stale_path_time.is_set
	|| graceful_restart_enabled_nbr.is_set
	|| has_internal_link.is_set
	|| hold_time.is_set
	|| ignore_connected.is_set
	|| internal_vpn_client.is_set
	|| io_armed.is_set
	|| is4_byte_as_capability_received.is_set
	|| is4_byte_as_capability_sent.is_set
	|| is_administratively_shut_down.is_set
	|| is_capability_negotiation_performed.is_set
	|| is_capability_negotiation_suppressed.is_set
	|| is_ebgp_multihop_bgpmpls_forwarding_disabled.is_set
	|| is_ebgp_peer_as_league.is_set
	|| is_ebgp_peer_common_admin.is_set
	|| is_external_neighbor_not_directly_connected.is_set
	|| is_gr_aware.is_set
	|| is_local_address_configured.is_set
	|| is_neighbor_max_prefix_shutdown.is_set
	|| is_out_of_memory_forced_up.is_set
	|| is_out_of_memory_shutdown.is_set
	|| is_passive_close.is_set
	|| is_read_disabled.is_set
	|| is_route_refresh_capability_received.is_set
	|| is_route_refresh_old_capability_received.is_set
	|| keep_alive_time.is_set
	|| last_ackd_seq_no.is_set
	|| last_k_aerror_reset.is_set
	|| last_k_aexpiry_reset.is_set
	|| last_k_anotsent_reset.is_set
	|| last_k_astart_reset.is_set
	|| last_notify_error_code.is_set
	|| last_notify_error_subcode.is_set
	|| last_write_event.is_set
	|| local_as.is_set
	|| local_as_dual_as.is_set
	|| local_as_dual_as_mode_native.is_set
	|| local_as_no_prepend.is_set
	|| local_as_replace_as.is_set
	|| messages_queued_in.is_set
	|| messages_queued_out.is_set
	|| messages_received.is_set
	|| messages_sent.is_set
	|| min_advertise_interval.is_set
	|| min_advertise_interval_msecs.is_set
	|| min_origination_interval.is_set
	|| msg_log_in.is_set
	|| msg_log_out.is_set
	|| multi_protocol_capability_received.is_set
	|| nbr_cluster_id.is_set
	|| nbr_enforce_first_as.is_set
	|| nbr_in_cluster.is_set
	|| negotiated_protocol_version.is_set
	|| neighbor_interface_handle.is_set
	|| neighbor_local_as.is_set
	|| nsr_enabled.is_set
	|| nsr_state.is_set
	|| open_check_error_code.is_set
	|| peer_error_code.is_set
	|| peer_reset_reason.is_set
	|| previous_connection_state.is_set
	|| read_armed.is_set
	|| remote_as.is_set
	|| remote_as_number.is_set
	|| reset_notification_sent.is_set
	|| reset_reason.is_set
	|| router_id.is_set
	|| rpki_allow_invalid.is_set
	|| rpki_disable.is_set
	|| rpki_signal_ibgp.is_set
	|| rpki_use_validity.is_set
	|| second_last_k_aexpiry_reset.is_set
	|| second_last_k_astart_reset.is_set
	|| second_last_write_event.is_set
	|| socket_read_bytes.is_set
	|| speaker_id.is_set
	|| standby_rp.is_set
	|| suppress4_byte_as.is_set
	|| tcp_session_open_mode.is_set
	|| tcpmss.is_set
	|| time_last_cb.is_set
	|| time_last_cb_reset.is_set
	|| time_last_fb.is_set
	|| time_since_connection_last_dropped.is_set
	|| time_since_last_read.is_set
	|| time_since_last_read_reset.is_set
	|| time_since_last_update.is_set
	|| time_since_last_write.is_set
	|| time_since_last_write_reset.is_set
	|| time_since_second_last_write.is_set
	|| time_since_second_last_write_reset.is_set
	|| tos_type.is_set
	|| tos_value.is_set
	|| ttl_security_enabled.is_set
	|| update_bytes_read.is_set
	|| update_messages_in.is_set
	|| update_messages_out.is_set
	|| vrf_name.is_set
	|| write_armed.is_set
	|| (connection_local_address !=  nullptr && connection_local_address->has_data())
	|| (connection_remote_address !=  nullptr && connection_remote_address->has_data())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_data())
	|| (message_statistics !=  nullptr && message_statistics->has_data())
	|| (performance_statistics !=  nullptr && performance_statistics->has_data())
	|| (received_notification_info !=  nullptr && received_notification_info->has_data())
	|| (send_notification_info !=  nullptr && send_notification_info->has_data())
	|| (tcp_init_sync_done_time_spec !=  nullptr && tcp_init_sync_done_time_spec->has_data())
	|| (tcp_init_sync_phase_two_time_spec !=  nullptr && tcp_init_sync_phase_two_time_spec->has_data())
	|| (tcp_init_sync_time_spec !=  nullptr && tcp_init_sync_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<af_data.size(); index++)
    {
        if(af_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(active_bmp_servers.operation)
	|| is_set(actual_last_write_bytes.operation)
	|| is_set(actual_last_write_reset_bytes.operation)
	|| is_set(actual_second_last_write_bytes.operation)
	|| is_set(actual_second_last_write_reset_bytes.operation)
	|| is_set(attempted_last_write_bytes.operation)
	|| is_set(attempted_last_write_reset_bytes.operation)
	|| is_set(attempted_second_last_write_bytes.operation)
	|| is_set(attempted_second_last_write_reset_bytes.operation)
	|| is_set(bfd_minintervalval.operation)
	|| is_set(bfd_multiplierval.operation)
	|| is_set(bfd_session_created_state.operation)
	|| is_set(bfd_session_enable_mode.operation)
	|| is_set(bfd_session_state.operation)
	|| is_set(bfd_state_ts.operation)
	|| is_set(bytes_read.operation)
	|| is_set(bytes_written.operation)
	|| is_set(configured_hold_time.operation)
	|| is_set(configured_keepalive.operation)
	|| is_set(configured_min_acc_hold_time.operation)
	|| is_set(connect_retry_interval.operation)
	|| is_set(connection_admin_status.operation)
	|| is_set(connection_down_count.operation)
	|| is_set(connection_established_time.operation)
	|| is_set(connection_local_port.operation)
	|| is_set(connection_remote_port.operation)
	|| is_set(connection_state.operation)
	|| is_set(connection_up_count.operation)
	|| is_set(count_last_write.operation)
	|| is_set(description.operation)
	|| is_set(discard_as4_path.operation)
	|| is_set(discard_data_bytes.operation)
	|| is_set(dmz_link_bandwidth.operation)
	|| is_set(dynamic_neighbor.operation)
	|| is_set(ebgp_recv_dmz.operation)
	|| is_set(ebgp_send_dmz_mode.operation)
	|| is_set(ebgp_time_to_live.operation)
	|| is_set(egress_peer_engineering_enabled.operation)
	|| is_set(error_notifies_received.operation)
	|| is_set(error_notifies_sent.operation)
	|| is_set(fpbsn_offset.operation)
	|| is_set(fssn_offset.operation)
	|| is_set(gr_restart_time.operation)
	|| is_set(gr_stale_path_time.operation)
	|| is_set(graceful_restart_enabled_nbr.operation)
	|| is_set(has_internal_link.operation)
	|| is_set(hold_time.operation)
	|| is_set(ignore_connected.operation)
	|| is_set(internal_vpn_client.operation)
	|| is_set(io_armed.operation)
	|| is_set(is4_byte_as_capability_received.operation)
	|| is_set(is4_byte_as_capability_sent.operation)
	|| is_set(is_administratively_shut_down.operation)
	|| is_set(is_capability_negotiation_performed.operation)
	|| is_set(is_capability_negotiation_suppressed.operation)
	|| is_set(is_ebgp_multihop_bgpmpls_forwarding_disabled.operation)
	|| is_set(is_ebgp_peer_as_league.operation)
	|| is_set(is_ebgp_peer_common_admin.operation)
	|| is_set(is_external_neighbor_not_directly_connected.operation)
	|| is_set(is_gr_aware.operation)
	|| is_set(is_local_address_configured.operation)
	|| is_set(is_neighbor_max_prefix_shutdown.operation)
	|| is_set(is_out_of_memory_forced_up.operation)
	|| is_set(is_out_of_memory_shutdown.operation)
	|| is_set(is_passive_close.operation)
	|| is_set(is_read_disabled.operation)
	|| is_set(is_route_refresh_capability_received.operation)
	|| is_set(is_route_refresh_old_capability_received.operation)
	|| is_set(keep_alive_time.operation)
	|| is_set(last_ackd_seq_no.operation)
	|| is_set(last_k_aerror_reset.operation)
	|| is_set(last_k_aexpiry_reset.operation)
	|| is_set(last_k_anotsent_reset.operation)
	|| is_set(last_k_astart_reset.operation)
	|| is_set(last_notify_error_code.operation)
	|| is_set(last_notify_error_subcode.operation)
	|| is_set(last_write_event.operation)
	|| is_set(local_as.operation)
	|| is_set(local_as_dual_as.operation)
	|| is_set(local_as_dual_as_mode_native.operation)
	|| is_set(local_as_no_prepend.operation)
	|| is_set(local_as_replace_as.operation)
	|| is_set(messages_queued_in.operation)
	|| is_set(messages_queued_out.operation)
	|| is_set(messages_received.operation)
	|| is_set(messages_sent.operation)
	|| is_set(min_advertise_interval.operation)
	|| is_set(min_advertise_interval_msecs.operation)
	|| is_set(min_origination_interval.operation)
	|| is_set(msg_log_in.operation)
	|| is_set(msg_log_out.operation)
	|| is_set(multi_protocol_capability_received.operation)
	|| is_set(nbr_cluster_id.operation)
	|| is_set(nbr_enforce_first_as.operation)
	|| is_set(nbr_in_cluster.operation)
	|| is_set(negotiated_protocol_version.operation)
	|| is_set(neighbor_interface_handle.operation)
	|| is_set(neighbor_local_as.operation)
	|| is_set(nsr_enabled.operation)
	|| is_set(nsr_state.operation)
	|| is_set(open_check_error_code.operation)
	|| is_set(peer_error_code.operation)
	|| is_set(peer_reset_reason.operation)
	|| is_set(previous_connection_state.operation)
	|| is_set(read_armed.operation)
	|| is_set(remote_as.operation)
	|| is_set(remote_as_number.operation)
	|| is_set(reset_notification_sent.operation)
	|| is_set(reset_reason.operation)
	|| is_set(router_id.operation)
	|| is_set(rpki_allow_invalid.operation)
	|| is_set(rpki_disable.operation)
	|| is_set(rpki_signal_ibgp.operation)
	|| is_set(rpki_use_validity.operation)
	|| is_set(second_last_k_aexpiry_reset.operation)
	|| is_set(second_last_k_astart_reset.operation)
	|| is_set(second_last_write_event.operation)
	|| is_set(socket_read_bytes.operation)
	|| is_set(speaker_id.operation)
	|| is_set(standby_rp.operation)
	|| is_set(suppress4_byte_as.operation)
	|| is_set(tcp_session_open_mode.operation)
	|| is_set(tcpmss.operation)
	|| is_set(time_last_cb.operation)
	|| is_set(time_last_cb_reset.operation)
	|| is_set(time_last_fb.operation)
	|| is_set(time_since_connection_last_dropped.operation)
	|| is_set(time_since_last_read.operation)
	|| is_set(time_since_last_read_reset.operation)
	|| is_set(time_since_last_update.operation)
	|| is_set(time_since_last_write.operation)
	|| is_set(time_since_last_write_reset.operation)
	|| is_set(time_since_second_last_write.operation)
	|| is_set(time_since_second_last_write_reset.operation)
	|| is_set(tos_type.operation)
	|| is_set(tos_value.operation)
	|| is_set(ttl_security_enabled.operation)
	|| is_set(update_bytes_read.operation)
	|| is_set(update_messages_in.operation)
	|| is_set(update_messages_out.operation)
	|| is_set(vrf_name.operation)
	|| is_set(write_armed.operation)
	|| (connection_local_address !=  nullptr && connection_local_address->has_operation())
	|| (connection_remote_address !=  nullptr && connection_remote_address->has_operation())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_operation())
	|| (message_statistics !=  nullptr && message_statistics->has_operation())
	|| (performance_statistics !=  nullptr && performance_statistics->has_operation())
	|| (received_notification_info !=  nullptr && received_notification_info->has_operation())
	|| (send_notification_info !=  nullptr && send_notification_info->has_operation())
	|| (tcp_init_sync_done_time_spec !=  nullptr && tcp_init_sync_done_time_spec->has_operation())
	|| (tcp_init_sync_phase_two_time_spec !=  nullptr && tcp_init_sync_phase_two_time_spec->has_operation())
	|| (tcp_init_sync_time_spec !=  nullptr && tcp_init_sync_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (active_bmp_servers.is_set || is_set(active_bmp_servers.operation)) leaf_name_data.push_back(active_bmp_servers.get_name_leafdata());
    if (actual_last_write_bytes.is_set || is_set(actual_last_write_bytes.operation)) leaf_name_data.push_back(actual_last_write_bytes.get_name_leafdata());
    if (actual_last_write_reset_bytes.is_set || is_set(actual_last_write_reset_bytes.operation)) leaf_name_data.push_back(actual_last_write_reset_bytes.get_name_leafdata());
    if (actual_second_last_write_bytes.is_set || is_set(actual_second_last_write_bytes.operation)) leaf_name_data.push_back(actual_second_last_write_bytes.get_name_leafdata());
    if (actual_second_last_write_reset_bytes.is_set || is_set(actual_second_last_write_reset_bytes.operation)) leaf_name_data.push_back(actual_second_last_write_reset_bytes.get_name_leafdata());
    if (attempted_last_write_bytes.is_set || is_set(attempted_last_write_bytes.operation)) leaf_name_data.push_back(attempted_last_write_bytes.get_name_leafdata());
    if (attempted_last_write_reset_bytes.is_set || is_set(attempted_last_write_reset_bytes.operation)) leaf_name_data.push_back(attempted_last_write_reset_bytes.get_name_leafdata());
    if (attempted_second_last_write_bytes.is_set || is_set(attempted_second_last_write_bytes.operation)) leaf_name_data.push_back(attempted_second_last_write_bytes.get_name_leafdata());
    if (attempted_second_last_write_reset_bytes.is_set || is_set(attempted_second_last_write_reset_bytes.operation)) leaf_name_data.push_back(attempted_second_last_write_reset_bytes.get_name_leafdata());
    if (bfd_minintervalval.is_set || is_set(bfd_minintervalval.operation)) leaf_name_data.push_back(bfd_minintervalval.get_name_leafdata());
    if (bfd_multiplierval.is_set || is_set(bfd_multiplierval.operation)) leaf_name_data.push_back(bfd_multiplierval.get_name_leafdata());
    if (bfd_session_created_state.is_set || is_set(bfd_session_created_state.operation)) leaf_name_data.push_back(bfd_session_created_state.get_name_leafdata());
    if (bfd_session_enable_mode.is_set || is_set(bfd_session_enable_mode.operation)) leaf_name_data.push_back(bfd_session_enable_mode.get_name_leafdata());
    if (bfd_session_state.is_set || is_set(bfd_session_state.operation)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());
    if (bfd_state_ts.is_set || is_set(bfd_state_ts.operation)) leaf_name_data.push_back(bfd_state_ts.get_name_leafdata());
    if (bytes_read.is_set || is_set(bytes_read.operation)) leaf_name_data.push_back(bytes_read.get_name_leafdata());
    if (bytes_written.is_set || is_set(bytes_written.operation)) leaf_name_data.push_back(bytes_written.get_name_leafdata());
    if (configured_hold_time.is_set || is_set(configured_hold_time.operation)) leaf_name_data.push_back(configured_hold_time.get_name_leafdata());
    if (configured_keepalive.is_set || is_set(configured_keepalive.operation)) leaf_name_data.push_back(configured_keepalive.get_name_leafdata());
    if (configured_min_acc_hold_time.is_set || is_set(configured_min_acc_hold_time.operation)) leaf_name_data.push_back(configured_min_acc_hold_time.get_name_leafdata());
    if (connect_retry_interval.is_set || is_set(connect_retry_interval.operation)) leaf_name_data.push_back(connect_retry_interval.get_name_leafdata());
    if (connection_admin_status.is_set || is_set(connection_admin_status.operation)) leaf_name_data.push_back(connection_admin_status.get_name_leafdata());
    if (connection_down_count.is_set || is_set(connection_down_count.operation)) leaf_name_data.push_back(connection_down_count.get_name_leafdata());
    if (connection_established_time.is_set || is_set(connection_established_time.operation)) leaf_name_data.push_back(connection_established_time.get_name_leafdata());
    if (connection_local_port.is_set || is_set(connection_local_port.operation)) leaf_name_data.push_back(connection_local_port.get_name_leafdata());
    if (connection_remote_port.is_set || is_set(connection_remote_port.operation)) leaf_name_data.push_back(connection_remote_port.get_name_leafdata());
    if (connection_state.is_set || is_set(connection_state.operation)) leaf_name_data.push_back(connection_state.get_name_leafdata());
    if (connection_up_count.is_set || is_set(connection_up_count.operation)) leaf_name_data.push_back(connection_up_count.get_name_leafdata());
    if (count_last_write.is_set || is_set(count_last_write.operation)) leaf_name_data.push_back(count_last_write.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (discard_as4_path.is_set || is_set(discard_as4_path.operation)) leaf_name_data.push_back(discard_as4_path.get_name_leafdata());
    if (discard_data_bytes.is_set || is_set(discard_data_bytes.operation)) leaf_name_data.push_back(discard_data_bytes.get_name_leafdata());
    if (dmz_link_bandwidth.is_set || is_set(dmz_link_bandwidth.operation)) leaf_name_data.push_back(dmz_link_bandwidth.get_name_leafdata());
    if (dynamic_neighbor.is_set || is_set(dynamic_neighbor.operation)) leaf_name_data.push_back(dynamic_neighbor.get_name_leafdata());
    if (ebgp_recv_dmz.is_set || is_set(ebgp_recv_dmz.operation)) leaf_name_data.push_back(ebgp_recv_dmz.get_name_leafdata());
    if (ebgp_send_dmz_mode.is_set || is_set(ebgp_send_dmz_mode.operation)) leaf_name_data.push_back(ebgp_send_dmz_mode.get_name_leafdata());
    if (ebgp_time_to_live.is_set || is_set(ebgp_time_to_live.operation)) leaf_name_data.push_back(ebgp_time_to_live.get_name_leafdata());
    if (egress_peer_engineering_enabled.is_set || is_set(egress_peer_engineering_enabled.operation)) leaf_name_data.push_back(egress_peer_engineering_enabled.get_name_leafdata());
    if (error_notifies_received.is_set || is_set(error_notifies_received.operation)) leaf_name_data.push_back(error_notifies_received.get_name_leafdata());
    if (error_notifies_sent.is_set || is_set(error_notifies_sent.operation)) leaf_name_data.push_back(error_notifies_sent.get_name_leafdata());
    if (fpbsn_offset.is_set || is_set(fpbsn_offset.operation)) leaf_name_data.push_back(fpbsn_offset.get_name_leafdata());
    if (fssn_offset.is_set || is_set(fssn_offset.operation)) leaf_name_data.push_back(fssn_offset.get_name_leafdata());
    if (gr_restart_time.is_set || is_set(gr_restart_time.operation)) leaf_name_data.push_back(gr_restart_time.get_name_leafdata());
    if (gr_stale_path_time.is_set || is_set(gr_stale_path_time.operation)) leaf_name_data.push_back(gr_stale_path_time.get_name_leafdata());
    if (graceful_restart_enabled_nbr.is_set || is_set(graceful_restart_enabled_nbr.operation)) leaf_name_data.push_back(graceful_restart_enabled_nbr.get_name_leafdata());
    if (has_internal_link.is_set || is_set(has_internal_link.operation)) leaf_name_data.push_back(has_internal_link.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (ignore_connected.is_set || is_set(ignore_connected.operation)) leaf_name_data.push_back(ignore_connected.get_name_leafdata());
    if (internal_vpn_client.is_set || is_set(internal_vpn_client.operation)) leaf_name_data.push_back(internal_vpn_client.get_name_leafdata());
    if (io_armed.is_set || is_set(io_armed.operation)) leaf_name_data.push_back(io_armed.get_name_leafdata());
    if (is4_byte_as_capability_received.is_set || is_set(is4_byte_as_capability_received.operation)) leaf_name_data.push_back(is4_byte_as_capability_received.get_name_leafdata());
    if (is4_byte_as_capability_sent.is_set || is_set(is4_byte_as_capability_sent.operation)) leaf_name_data.push_back(is4_byte_as_capability_sent.get_name_leafdata());
    if (is_administratively_shut_down.is_set || is_set(is_administratively_shut_down.operation)) leaf_name_data.push_back(is_administratively_shut_down.get_name_leafdata());
    if (is_capability_negotiation_performed.is_set || is_set(is_capability_negotiation_performed.operation)) leaf_name_data.push_back(is_capability_negotiation_performed.get_name_leafdata());
    if (is_capability_negotiation_suppressed.is_set || is_set(is_capability_negotiation_suppressed.operation)) leaf_name_data.push_back(is_capability_negotiation_suppressed.get_name_leafdata());
    if (is_ebgp_multihop_bgpmpls_forwarding_disabled.is_set || is_set(is_ebgp_multihop_bgpmpls_forwarding_disabled.operation)) leaf_name_data.push_back(is_ebgp_multihop_bgpmpls_forwarding_disabled.get_name_leafdata());
    if (is_ebgp_peer_as_league.is_set || is_set(is_ebgp_peer_as_league.operation)) leaf_name_data.push_back(is_ebgp_peer_as_league.get_name_leafdata());
    if (is_ebgp_peer_common_admin.is_set || is_set(is_ebgp_peer_common_admin.operation)) leaf_name_data.push_back(is_ebgp_peer_common_admin.get_name_leafdata());
    if (is_external_neighbor_not_directly_connected.is_set || is_set(is_external_neighbor_not_directly_connected.operation)) leaf_name_data.push_back(is_external_neighbor_not_directly_connected.get_name_leafdata());
    if (is_gr_aware.is_set || is_set(is_gr_aware.operation)) leaf_name_data.push_back(is_gr_aware.get_name_leafdata());
    if (is_local_address_configured.is_set || is_set(is_local_address_configured.operation)) leaf_name_data.push_back(is_local_address_configured.get_name_leafdata());
    if (is_neighbor_max_prefix_shutdown.is_set || is_set(is_neighbor_max_prefix_shutdown.operation)) leaf_name_data.push_back(is_neighbor_max_prefix_shutdown.get_name_leafdata());
    if (is_out_of_memory_forced_up.is_set || is_set(is_out_of_memory_forced_up.operation)) leaf_name_data.push_back(is_out_of_memory_forced_up.get_name_leafdata());
    if (is_out_of_memory_shutdown.is_set || is_set(is_out_of_memory_shutdown.operation)) leaf_name_data.push_back(is_out_of_memory_shutdown.get_name_leafdata());
    if (is_passive_close.is_set || is_set(is_passive_close.operation)) leaf_name_data.push_back(is_passive_close.get_name_leafdata());
    if (is_read_disabled.is_set || is_set(is_read_disabled.operation)) leaf_name_data.push_back(is_read_disabled.get_name_leafdata());
    if (is_route_refresh_capability_received.is_set || is_set(is_route_refresh_capability_received.operation)) leaf_name_data.push_back(is_route_refresh_capability_received.get_name_leafdata());
    if (is_route_refresh_old_capability_received.is_set || is_set(is_route_refresh_old_capability_received.operation)) leaf_name_data.push_back(is_route_refresh_old_capability_received.get_name_leafdata());
    if (keep_alive_time.is_set || is_set(keep_alive_time.operation)) leaf_name_data.push_back(keep_alive_time.get_name_leafdata());
    if (last_ackd_seq_no.is_set || is_set(last_ackd_seq_no.operation)) leaf_name_data.push_back(last_ackd_seq_no.get_name_leafdata());
    if (last_k_aerror_reset.is_set || is_set(last_k_aerror_reset.operation)) leaf_name_data.push_back(last_k_aerror_reset.get_name_leafdata());
    if (last_k_aexpiry_reset.is_set || is_set(last_k_aexpiry_reset.operation)) leaf_name_data.push_back(last_k_aexpiry_reset.get_name_leafdata());
    if (last_k_anotsent_reset.is_set || is_set(last_k_anotsent_reset.operation)) leaf_name_data.push_back(last_k_anotsent_reset.get_name_leafdata());
    if (last_k_astart_reset.is_set || is_set(last_k_astart_reset.operation)) leaf_name_data.push_back(last_k_astart_reset.get_name_leafdata());
    if (last_notify_error_code.is_set || is_set(last_notify_error_code.operation)) leaf_name_data.push_back(last_notify_error_code.get_name_leafdata());
    if (last_notify_error_subcode.is_set || is_set(last_notify_error_subcode.operation)) leaf_name_data.push_back(last_notify_error_subcode.get_name_leafdata());
    if (last_write_event.is_set || is_set(last_write_event.operation)) leaf_name_data.push_back(last_write_event.get_name_leafdata());
    if (local_as.is_set || is_set(local_as.operation)) leaf_name_data.push_back(local_as.get_name_leafdata());
    if (local_as_dual_as.is_set || is_set(local_as_dual_as.operation)) leaf_name_data.push_back(local_as_dual_as.get_name_leafdata());
    if (local_as_dual_as_mode_native.is_set || is_set(local_as_dual_as_mode_native.operation)) leaf_name_data.push_back(local_as_dual_as_mode_native.get_name_leafdata());
    if (local_as_no_prepend.is_set || is_set(local_as_no_prepend.operation)) leaf_name_data.push_back(local_as_no_prepend.get_name_leafdata());
    if (local_as_replace_as.is_set || is_set(local_as_replace_as.operation)) leaf_name_data.push_back(local_as_replace_as.get_name_leafdata());
    if (messages_queued_in.is_set || is_set(messages_queued_in.operation)) leaf_name_data.push_back(messages_queued_in.get_name_leafdata());
    if (messages_queued_out.is_set || is_set(messages_queued_out.operation)) leaf_name_data.push_back(messages_queued_out.get_name_leafdata());
    if (messages_received.is_set || is_set(messages_received.operation)) leaf_name_data.push_back(messages_received.get_name_leafdata());
    if (messages_sent.is_set || is_set(messages_sent.operation)) leaf_name_data.push_back(messages_sent.get_name_leafdata());
    if (min_advertise_interval.is_set || is_set(min_advertise_interval.operation)) leaf_name_data.push_back(min_advertise_interval.get_name_leafdata());
    if (min_advertise_interval_msecs.is_set || is_set(min_advertise_interval_msecs.operation)) leaf_name_data.push_back(min_advertise_interval_msecs.get_name_leafdata());
    if (min_origination_interval.is_set || is_set(min_origination_interval.operation)) leaf_name_data.push_back(min_origination_interval.get_name_leafdata());
    if (msg_log_in.is_set || is_set(msg_log_in.operation)) leaf_name_data.push_back(msg_log_in.get_name_leafdata());
    if (msg_log_out.is_set || is_set(msg_log_out.operation)) leaf_name_data.push_back(msg_log_out.get_name_leafdata());
    if (multi_protocol_capability_received.is_set || is_set(multi_protocol_capability_received.operation)) leaf_name_data.push_back(multi_protocol_capability_received.get_name_leafdata());
    if (nbr_cluster_id.is_set || is_set(nbr_cluster_id.operation)) leaf_name_data.push_back(nbr_cluster_id.get_name_leafdata());
    if (nbr_enforce_first_as.is_set || is_set(nbr_enforce_first_as.operation)) leaf_name_data.push_back(nbr_enforce_first_as.get_name_leafdata());
    if (nbr_in_cluster.is_set || is_set(nbr_in_cluster.operation)) leaf_name_data.push_back(nbr_in_cluster.get_name_leafdata());
    if (negotiated_protocol_version.is_set || is_set(negotiated_protocol_version.operation)) leaf_name_data.push_back(negotiated_protocol_version.get_name_leafdata());
    if (neighbor_interface_handle.is_set || is_set(neighbor_interface_handle.operation)) leaf_name_data.push_back(neighbor_interface_handle.get_name_leafdata());
    if (neighbor_local_as.is_set || is_set(neighbor_local_as.operation)) leaf_name_data.push_back(neighbor_local_as.get_name_leafdata());
    if (nsr_enabled.is_set || is_set(nsr_enabled.operation)) leaf_name_data.push_back(nsr_enabled.get_name_leafdata());
    if (nsr_state.is_set || is_set(nsr_state.operation)) leaf_name_data.push_back(nsr_state.get_name_leafdata());
    if (open_check_error_code.is_set || is_set(open_check_error_code.operation)) leaf_name_data.push_back(open_check_error_code.get_name_leafdata());
    if (peer_error_code.is_set || is_set(peer_error_code.operation)) leaf_name_data.push_back(peer_error_code.get_name_leafdata());
    if (peer_reset_reason.is_set || is_set(peer_reset_reason.operation)) leaf_name_data.push_back(peer_reset_reason.get_name_leafdata());
    if (previous_connection_state.is_set || is_set(previous_connection_state.operation)) leaf_name_data.push_back(previous_connection_state.get_name_leafdata());
    if (read_armed.is_set || is_set(read_armed.operation)) leaf_name_data.push_back(read_armed.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.operation)) leaf_name_data.push_back(remote_as.get_name_leafdata());
    if (remote_as_number.is_set || is_set(remote_as_number.operation)) leaf_name_data.push_back(remote_as_number.get_name_leafdata());
    if (reset_notification_sent.is_set || is_set(reset_notification_sent.operation)) leaf_name_data.push_back(reset_notification_sent.get_name_leafdata());
    if (reset_reason.is_set || is_set(reset_reason.operation)) leaf_name_data.push_back(reset_reason.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (rpki_allow_invalid.is_set || is_set(rpki_allow_invalid.operation)) leaf_name_data.push_back(rpki_allow_invalid.get_name_leafdata());
    if (rpki_disable.is_set || is_set(rpki_disable.operation)) leaf_name_data.push_back(rpki_disable.get_name_leafdata());
    if (rpki_signal_ibgp.is_set || is_set(rpki_signal_ibgp.operation)) leaf_name_data.push_back(rpki_signal_ibgp.get_name_leafdata());
    if (rpki_use_validity.is_set || is_set(rpki_use_validity.operation)) leaf_name_data.push_back(rpki_use_validity.get_name_leafdata());
    if (second_last_k_aexpiry_reset.is_set || is_set(second_last_k_aexpiry_reset.operation)) leaf_name_data.push_back(second_last_k_aexpiry_reset.get_name_leafdata());
    if (second_last_k_astart_reset.is_set || is_set(second_last_k_astart_reset.operation)) leaf_name_data.push_back(second_last_k_astart_reset.get_name_leafdata());
    if (second_last_write_event.is_set || is_set(second_last_write_event.operation)) leaf_name_data.push_back(second_last_write_event.get_name_leafdata());
    if (socket_read_bytes.is_set || is_set(socket_read_bytes.operation)) leaf_name_data.push_back(socket_read_bytes.get_name_leafdata());
    if (speaker_id.is_set || is_set(speaker_id.operation)) leaf_name_data.push_back(speaker_id.get_name_leafdata());
    if (standby_rp.is_set || is_set(standby_rp.operation)) leaf_name_data.push_back(standby_rp.get_name_leafdata());
    if (suppress4_byte_as.is_set || is_set(suppress4_byte_as.operation)) leaf_name_data.push_back(suppress4_byte_as.get_name_leafdata());
    if (tcp_session_open_mode.is_set || is_set(tcp_session_open_mode.operation)) leaf_name_data.push_back(tcp_session_open_mode.get_name_leafdata());
    if (tcpmss.is_set || is_set(tcpmss.operation)) leaf_name_data.push_back(tcpmss.get_name_leafdata());
    if (time_last_cb.is_set || is_set(time_last_cb.operation)) leaf_name_data.push_back(time_last_cb.get_name_leafdata());
    if (time_last_cb_reset.is_set || is_set(time_last_cb_reset.operation)) leaf_name_data.push_back(time_last_cb_reset.get_name_leafdata());
    if (time_last_fb.is_set || is_set(time_last_fb.operation)) leaf_name_data.push_back(time_last_fb.get_name_leafdata());
    if (time_since_connection_last_dropped.is_set || is_set(time_since_connection_last_dropped.operation)) leaf_name_data.push_back(time_since_connection_last_dropped.get_name_leafdata());
    if (time_since_last_read.is_set || is_set(time_since_last_read.operation)) leaf_name_data.push_back(time_since_last_read.get_name_leafdata());
    if (time_since_last_read_reset.is_set || is_set(time_since_last_read_reset.operation)) leaf_name_data.push_back(time_since_last_read_reset.get_name_leafdata());
    if (time_since_last_update.is_set || is_set(time_since_last_update.operation)) leaf_name_data.push_back(time_since_last_update.get_name_leafdata());
    if (time_since_last_write.is_set || is_set(time_since_last_write.operation)) leaf_name_data.push_back(time_since_last_write.get_name_leafdata());
    if (time_since_last_write_reset.is_set || is_set(time_since_last_write_reset.operation)) leaf_name_data.push_back(time_since_last_write_reset.get_name_leafdata());
    if (time_since_second_last_write.is_set || is_set(time_since_second_last_write.operation)) leaf_name_data.push_back(time_since_second_last_write.get_name_leafdata());
    if (time_since_second_last_write_reset.is_set || is_set(time_since_second_last_write_reset.operation)) leaf_name_data.push_back(time_since_second_last_write_reset.get_name_leafdata());
    if (tos_type.is_set || is_set(tos_type.operation)) leaf_name_data.push_back(tos_type.get_name_leafdata());
    if (tos_value.is_set || is_set(tos_value.operation)) leaf_name_data.push_back(tos_value.get_name_leafdata());
    if (ttl_security_enabled.is_set || is_set(ttl_security_enabled.operation)) leaf_name_data.push_back(ttl_security_enabled.get_name_leafdata());
    if (update_bytes_read.is_set || is_set(update_bytes_read.operation)) leaf_name_data.push_back(update_bytes_read.get_name_leafdata());
    if (update_messages_in.is_set || is_set(update_messages_in.operation)) leaf_name_data.push_back(update_messages_in.get_name_leafdata());
    if (update_messages_out.is_set || is_set(update_messages_out.operation)) leaf_name_data.push_back(update_messages_out.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (write_armed.is_set || is_set(write_armed.operation)) leaf_name_data.push_back(write_armed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-data")
    {
        for(auto const & c : af_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData>();
        c->parent = this;
        af_data.push_back(c);
        return c;
    }

    if(child_yang_name == "connection-local-address")
    {
        if(connection_local_address == nullptr)
        {
            connection_local_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress>();
        }
        return connection_local_address;
    }

    if(child_yang_name == "connection-remote-address")
    {
        if(connection_remote_address == nullptr)
        {
            connection_remote_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress>();
        }
        return connection_remote_address;
    }

    if(child_yang_name == "graceful-maintenance")
    {
        if(graceful_maintenance == nullptr)
        {
            graceful_maintenance = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::GracefulMaintenance>();
        }
        return graceful_maintenance;
    }

    if(child_yang_name == "message-statistics")
    {
        if(message_statistics == nullptr)
        {
            message_statistics = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics>();
        }
        return message_statistics;
    }

    if(child_yang_name == "performance-statistics")
    {
        if(performance_statistics == nullptr)
        {
            performance_statistics = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::PerformanceStatistics>();
        }
        return performance_statistics;
    }

    if(child_yang_name == "received-notification-info")
    {
        if(received_notification_info == nullptr)
        {
            received_notification_info = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo>();
        }
        return received_notification_info;
    }

    if(child_yang_name == "send-notification-info")
    {
        if(send_notification_info == nullptr)
        {
            send_notification_info = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo>();
        }
        return send_notification_info;
    }

    if(child_yang_name == "tcp-init-sync-done-time-spec")
    {
        if(tcp_init_sync_done_time_spec == nullptr)
        {
            tcp_init_sync_done_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncDoneTimeSpec>();
        }
        return tcp_init_sync_done_time_spec;
    }

    if(child_yang_name == "tcp-init-sync-phase-two-time-spec")
    {
        if(tcp_init_sync_phase_two_time_spec == nullptr)
        {
            tcp_init_sync_phase_two_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncPhaseTwoTimeSpec>();
        }
        return tcp_init_sync_phase_two_time_spec;
    }

    if(child_yang_name == "tcp-init-sync-time-spec")
    {
        if(tcp_init_sync_time_spec == nullptr)
        {
            tcp_init_sync_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncTimeSpec>();
        }
        return tcp_init_sync_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : af_data)
    {
        children[c->get_segment_path()] = c;
    }

    if(connection_local_address != nullptr)
    {
        children["connection-local-address"] = connection_local_address;
    }

    if(connection_remote_address != nullptr)
    {
        children["connection-remote-address"] = connection_remote_address;
    }

    if(graceful_maintenance != nullptr)
    {
        children["graceful-maintenance"] = graceful_maintenance;
    }

    if(message_statistics != nullptr)
    {
        children["message-statistics"] = message_statistics;
    }

    if(performance_statistics != nullptr)
    {
        children["performance-statistics"] = performance_statistics;
    }

    if(received_notification_info != nullptr)
    {
        children["received-notification-info"] = received_notification_info;
    }

    if(send_notification_info != nullptr)
    {
        children["send-notification-info"] = send_notification_info;
    }

    if(tcp_init_sync_done_time_spec != nullptr)
    {
        children["tcp-init-sync-done-time-spec"] = tcp_init_sync_done_time_spec;
    }

    if(tcp_init_sync_phase_two_time_spec != nullptr)
    {
        children["tcp-init-sync-phase-two-time-spec"] = tcp_init_sync_phase_two_time_spec;
    }

    if(tcp_init_sync_time_spec != nullptr)
    {
        children["tcp-init-sync-time-spec"] = tcp_init_sync_time_spec;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "active-bmp-servers")
    {
        active_bmp_servers = value;
    }
    if(value_path == "actual-last-write-bytes")
    {
        actual_last_write_bytes = value;
    }
    if(value_path == "actual-last-write-reset-bytes")
    {
        actual_last_write_reset_bytes = value;
    }
    if(value_path == "actual-second-last-write-bytes")
    {
        actual_second_last_write_bytes = value;
    }
    if(value_path == "actual-second-last-write-reset-bytes")
    {
        actual_second_last_write_reset_bytes = value;
    }
    if(value_path == "attempted-last-write-bytes")
    {
        attempted_last_write_bytes = value;
    }
    if(value_path == "attempted-last-write-reset-bytes")
    {
        attempted_last_write_reset_bytes = value;
    }
    if(value_path == "attempted-second-last-write-bytes")
    {
        attempted_second_last_write_bytes = value;
    }
    if(value_path == "attempted-second-last-write-reset-bytes")
    {
        attempted_second_last_write_reset_bytes = value;
    }
    if(value_path == "bfd-minintervalval")
    {
        bfd_minintervalval = value;
    }
    if(value_path == "bfd-multiplierval")
    {
        bfd_multiplierval = value;
    }
    if(value_path == "bfd-session-created-state")
    {
        bfd_session_created_state = value;
    }
    if(value_path == "bfd-session-enable-mode")
    {
        bfd_session_enable_mode = value;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
    }
    if(value_path == "bfd-state-ts")
    {
        bfd_state_ts = value;
    }
    if(value_path == "bytes-read")
    {
        bytes_read = value;
    }
    if(value_path == "bytes-written")
    {
        bytes_written = value;
    }
    if(value_path == "configured-hold-time")
    {
        configured_hold_time = value;
    }
    if(value_path == "configured-keepalive")
    {
        configured_keepalive = value;
    }
    if(value_path == "configured-min-acc-hold-time")
    {
        configured_min_acc_hold_time = value;
    }
    if(value_path == "connect-retry-interval")
    {
        connect_retry_interval = value;
    }
    if(value_path == "connection-admin-status")
    {
        connection_admin_status = value;
    }
    if(value_path == "connection-down-count")
    {
        connection_down_count = value;
    }
    if(value_path == "connection-established-time")
    {
        connection_established_time = value;
    }
    if(value_path == "connection-local-port")
    {
        connection_local_port = value;
    }
    if(value_path == "connection-remote-port")
    {
        connection_remote_port = value;
    }
    if(value_path == "connection-state")
    {
        connection_state = value;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count = value;
    }
    if(value_path == "count-last-write")
    {
        count_last_write = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "discard-as4-path")
    {
        discard_as4_path = value;
    }
    if(value_path == "discard-data-bytes")
    {
        discard_data_bytes = value;
    }
    if(value_path == "dmz-link-bandwidth")
    {
        dmz_link_bandwidth = value;
    }
    if(value_path == "dynamic-neighbor")
    {
        dynamic_neighbor = value;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz = value;
    }
    if(value_path == "ebgp-send-dmz-mode")
    {
        ebgp_send_dmz_mode = value;
    }
    if(value_path == "ebgp-time-to-live")
    {
        ebgp_time_to_live = value;
    }
    if(value_path == "egress-peer-engineering-enabled")
    {
        egress_peer_engineering_enabled = value;
    }
    if(value_path == "error-notifies-received")
    {
        error_notifies_received = value;
    }
    if(value_path == "error-notifies-sent")
    {
        error_notifies_sent = value;
    }
    if(value_path == "fpbsn-offset")
    {
        fpbsn_offset = value;
    }
    if(value_path == "fssn-offset")
    {
        fssn_offset = value;
    }
    if(value_path == "gr-restart-time")
    {
        gr_restart_time = value;
    }
    if(value_path == "gr-stale-path-time")
    {
        gr_stale_path_time = value;
    }
    if(value_path == "graceful-restart-enabled-nbr")
    {
        graceful_restart_enabled_nbr = value;
    }
    if(value_path == "has-internal-link")
    {
        has_internal_link = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "ignore-connected")
    {
        ignore_connected = value;
    }
    if(value_path == "internal-vpn-client")
    {
        internal_vpn_client = value;
    }
    if(value_path == "io-armed")
    {
        io_armed = value;
    }
    if(value_path == "is4-byte-as-capability-received")
    {
        is4_byte_as_capability_received = value;
    }
    if(value_path == "is4-byte-as-capability-sent")
    {
        is4_byte_as_capability_sent = value;
    }
    if(value_path == "is-administratively-shut-down")
    {
        is_administratively_shut_down = value;
    }
    if(value_path == "is-capability-negotiation-performed")
    {
        is_capability_negotiation_performed = value;
    }
    if(value_path == "is-capability-negotiation-suppressed")
    {
        is_capability_negotiation_suppressed = value;
    }
    if(value_path == "is-ebgp-multihop-bgpmpls-forwarding-disabled")
    {
        is_ebgp_multihop_bgpmpls_forwarding_disabled = value;
    }
    if(value_path == "is-ebgp-peer-as-league")
    {
        is_ebgp_peer_as_league = value;
    }
    if(value_path == "is-ebgp-peer-common-admin")
    {
        is_ebgp_peer_common_admin = value;
    }
    if(value_path == "is-external-neighbor-not-directly-connected")
    {
        is_external_neighbor_not_directly_connected = value;
    }
    if(value_path == "is-gr-aware")
    {
        is_gr_aware = value;
    }
    if(value_path == "is-local-address-configured")
    {
        is_local_address_configured = value;
    }
    if(value_path == "is-neighbor-max-prefix-shutdown")
    {
        is_neighbor_max_prefix_shutdown = value;
    }
    if(value_path == "is-out-of-memory-forced-up")
    {
        is_out_of_memory_forced_up = value;
    }
    if(value_path == "is-out-of-memory-shutdown")
    {
        is_out_of_memory_shutdown = value;
    }
    if(value_path == "is-passive-close")
    {
        is_passive_close = value;
    }
    if(value_path == "is-read-disabled")
    {
        is_read_disabled = value;
    }
    if(value_path == "is-route-refresh-capability-received")
    {
        is_route_refresh_capability_received = value;
    }
    if(value_path == "is-route-refresh-old-capability-received")
    {
        is_route_refresh_old_capability_received = value;
    }
    if(value_path == "keep-alive-time")
    {
        keep_alive_time = value;
    }
    if(value_path == "last-ackd-seq-no")
    {
        last_ackd_seq_no = value;
    }
    if(value_path == "last-k-aerror-reset")
    {
        last_k_aerror_reset = value;
    }
    if(value_path == "last-k-aexpiry-reset")
    {
        last_k_aexpiry_reset = value;
    }
    if(value_path == "last-k-anotsent-reset")
    {
        last_k_anotsent_reset = value;
    }
    if(value_path == "last-k-astart-reset")
    {
        last_k_astart_reset = value;
    }
    if(value_path == "last-notify-error-code")
    {
        last_notify_error_code = value;
    }
    if(value_path == "last-notify-error-subcode")
    {
        last_notify_error_subcode = value;
    }
    if(value_path == "last-write-event")
    {
        last_write_event = value;
    }
    if(value_path == "local-as")
    {
        local_as = value;
    }
    if(value_path == "local-as-dual-as")
    {
        local_as_dual_as = value;
    }
    if(value_path == "local-as-dual-as-mode-native")
    {
        local_as_dual_as_mode_native = value;
    }
    if(value_path == "local-as-no-prepend")
    {
        local_as_no_prepend = value;
    }
    if(value_path == "local-as-replace-as")
    {
        local_as_replace_as = value;
    }
    if(value_path == "messages-queued-in")
    {
        messages_queued_in = value;
    }
    if(value_path == "messages-queued-out")
    {
        messages_queued_out = value;
    }
    if(value_path == "messages-received")
    {
        messages_received = value;
    }
    if(value_path == "messages-sent")
    {
        messages_sent = value;
    }
    if(value_path == "min-advertise-interval")
    {
        min_advertise_interval = value;
    }
    if(value_path == "min-advertise-interval-msecs")
    {
        min_advertise_interval_msecs = value;
    }
    if(value_path == "min-origination-interval")
    {
        min_origination_interval = value;
    }
    if(value_path == "msg-log-in")
    {
        msg_log_in = value;
    }
    if(value_path == "msg-log-out")
    {
        msg_log_out = value;
    }
    if(value_path == "multi-protocol-capability-received")
    {
        multi_protocol_capability_received = value;
    }
    if(value_path == "nbr-cluster-id")
    {
        nbr_cluster_id = value;
    }
    if(value_path == "nbr-enforce-first-as")
    {
        nbr_enforce_first_as = value;
    }
    if(value_path == "nbr-in-cluster")
    {
        nbr_in_cluster = value;
    }
    if(value_path == "negotiated-protocol-version")
    {
        negotiated_protocol_version = value;
    }
    if(value_path == "neighbor-interface-handle")
    {
        neighbor_interface_handle = value;
    }
    if(value_path == "neighbor-local-as")
    {
        neighbor_local_as = value;
    }
    if(value_path == "nsr-enabled")
    {
        nsr_enabled = value;
    }
    if(value_path == "nsr-state")
    {
        nsr_state = value;
    }
    if(value_path == "open-check-error-code")
    {
        open_check_error_code = value;
    }
    if(value_path == "peer-error-code")
    {
        peer_error_code = value;
    }
    if(value_path == "peer-reset-reason")
    {
        peer_reset_reason = value;
    }
    if(value_path == "previous-connection-state")
    {
        previous_connection_state = value;
    }
    if(value_path == "read-armed")
    {
        read_armed = value;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
    }
    if(value_path == "remote-as-number")
    {
        remote_as_number = value;
    }
    if(value_path == "reset-notification-sent")
    {
        reset_notification_sent = value;
    }
    if(value_path == "reset-reason")
    {
        reset_reason = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
    if(value_path == "rpki-allow-invalid")
    {
        rpki_allow_invalid = value;
    }
    if(value_path == "rpki-disable")
    {
        rpki_disable = value;
    }
    if(value_path == "rpki-signal-ibgp")
    {
        rpki_signal_ibgp = value;
    }
    if(value_path == "rpki-use-validity")
    {
        rpki_use_validity = value;
    }
    if(value_path == "second-last-k-aexpiry-reset")
    {
        second_last_k_aexpiry_reset = value;
    }
    if(value_path == "second-last-k-astart-reset")
    {
        second_last_k_astart_reset = value;
    }
    if(value_path == "second-last-write-event")
    {
        second_last_write_event = value;
    }
    if(value_path == "socket-read-bytes")
    {
        socket_read_bytes = value;
    }
    if(value_path == "speaker-id")
    {
        speaker_id = value;
    }
    if(value_path == "standby-rp")
    {
        standby_rp = value;
    }
    if(value_path == "suppress4-byte-as")
    {
        suppress4_byte_as = value;
    }
    if(value_path == "tcp-session-open-mode")
    {
        tcp_session_open_mode = value;
    }
    if(value_path == "tcpmss")
    {
        tcpmss = value;
    }
    if(value_path == "time-last-cb")
    {
        time_last_cb = value;
    }
    if(value_path == "time-last-cb-reset")
    {
        time_last_cb_reset = value;
    }
    if(value_path == "time-last-fb")
    {
        time_last_fb = value;
    }
    if(value_path == "time-since-connection-last-dropped")
    {
        time_since_connection_last_dropped = value;
    }
    if(value_path == "time-since-last-read")
    {
        time_since_last_read = value;
    }
    if(value_path == "time-since-last-read-reset")
    {
        time_since_last_read_reset = value;
    }
    if(value_path == "time-since-last-update")
    {
        time_since_last_update = value;
    }
    if(value_path == "time-since-last-write")
    {
        time_since_last_write = value;
    }
    if(value_path == "time-since-last-write-reset")
    {
        time_since_last_write_reset = value;
    }
    if(value_path == "time-since-second-last-write")
    {
        time_since_second_last_write = value;
    }
    if(value_path == "time-since-second-last-write-reset")
    {
        time_since_second_last_write_reset = value;
    }
    if(value_path == "tos-type")
    {
        tos_type = value;
    }
    if(value_path == "tos-value")
    {
        tos_value = value;
    }
    if(value_path == "ttl-security-enabled")
    {
        ttl_security_enabled = value;
    }
    if(value_path == "update-bytes-read")
    {
        update_bytes_read = value;
    }
    if(value_path == "update-messages-in")
    {
        update_messages_in = value;
    }
    if(value_path == "update-messages-out")
    {
        update_messages_out = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "write-armed")
    {
        write_armed = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::ConnectionLocalAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;

    ipv6sr_policy_address->parent = this;

    l2vpn_mspw_address->parent = this;

    l2vpnvpls_address->parent = this;

    yang_name = "connection-local-address"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::~ConnectionLocalAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-local-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectionLocalAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address == nullptr)
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4sr_policy_address;
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address == nullptr)
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address == nullptr)
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress>();
        }
        return l2vpnvpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4sr_policy_address != nullptr)
    {
        children["ipv4sr-policy-address"] = ipv4sr_policy_address;
    }

    if(ipv6sr_policy_address != nullptr)
    {
        children["ipv6sr-policy-address"] = ipv6sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpnvpls_address != nullptr)
    {
        children["l2vpnvpls-address"] = l2vpnvpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::ConnectionRemoteAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;

    ipv6sr_policy_address->parent = this;

    l2vpn_mspw_address->parent = this;

    l2vpnvpls_address->parent = this;

    yang_name = "connection-remote-address"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::~ConnectionRemoteAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-remote-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectionRemoteAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address == nullptr)
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4sr_policy_address;
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address == nullptr)
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address == nullptr)
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress>();
        }
        return l2vpnvpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4sr_policy_address != nullptr)
    {
        children["ipv4sr-policy-address"] = ipv4sr_policy_address;
    }

    if(ipv6sr_policy_address != nullptr)
    {
        children["ipv6sr-policy-address"] = ipv6sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpnvpls_address != nullptr)
    {
        children["l2vpnvpls-address"] = l2vpnvpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::SendNotificationInfo()
    :
    notification_error_code{YType::uint8, "notification-error-code"},
    notification_error_subcode{YType::uint8, "notification-error-subcode"},
    time_since_last_notification{YType::uint32, "time-since-last-notification"}
{
    yang_name = "send-notification-info"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::~SendNotificationInfo()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::has_data() const
{
    for (std::size_t index=0; index<last_notification_data.size(); index++)
    {
        if(last_notification_data[index]->has_data())
            return true;
    }
    return notification_error_code.is_set
	|| notification_error_subcode.is_set
	|| time_since_last_notification.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::has_operation() const
{
    for (std::size_t index=0; index<last_notification_data.size(); index++)
    {
        if(last_notification_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(notification_error_code.operation)
	|| is_set(notification_error_subcode.operation)
	|| is_set(time_since_last_notification.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-notification-info";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendNotificationInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notification_error_code.is_set || is_set(notification_error_code.operation)) leaf_name_data.push_back(notification_error_code.get_name_leafdata());
    if (notification_error_subcode.is_set || is_set(notification_error_subcode.operation)) leaf_name_data.push_back(notification_error_subcode.get_name_leafdata());
    if (time_since_last_notification.is_set || is_set(time_since_last_notification.operation)) leaf_name_data.push_back(time_since_last_notification.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-notification-data")
    {
        for(auto const & c : last_notification_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::LastNotificationData>();
        c->parent = this;
        last_notification_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : last_notification_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "notification-error-code")
    {
        notification_error_code = value;
    }
    if(value_path == "notification-error-subcode")
    {
        notification_error_subcode = value;
    }
    if(value_path == "time-since-last-notification")
    {
        time_since_last_notification = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::LastNotificationData::LastNotificationData()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "last-notification-data"; yang_parent_name = "send-notification-info";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::LastNotificationData::~LastNotificationData()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::LastNotificationData::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::LastNotificationData::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::LastNotificationData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-notification-data";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::LastNotificationData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastNotificationData' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::LastNotificationData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::LastNotificationData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::LastNotificationData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::ReceivedNotificationInfo()
    :
    notification_error_code{YType::uint8, "notification-error-code"},
    notification_error_subcode{YType::uint8, "notification-error-subcode"},
    time_since_last_notification{YType::uint32, "time-since-last-notification"}
{
    yang_name = "received-notification-info"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::~ReceivedNotificationInfo()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::has_data() const
{
    for (std::size_t index=0; index<last_notification_data.size(); index++)
    {
        if(last_notification_data[index]->has_data())
            return true;
    }
    return notification_error_code.is_set
	|| notification_error_subcode.is_set
	|| time_since_last_notification.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::has_operation() const
{
    for (std::size_t index=0; index<last_notification_data.size(); index++)
    {
        if(last_notification_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(notification_error_code.operation)
	|| is_set(notification_error_subcode.operation)
	|| is_set(time_since_last_notification.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-notification-info";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedNotificationInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notification_error_code.is_set || is_set(notification_error_code.operation)) leaf_name_data.push_back(notification_error_code.get_name_leafdata());
    if (notification_error_subcode.is_set || is_set(notification_error_subcode.operation)) leaf_name_data.push_back(notification_error_subcode.get_name_leafdata());
    if (time_since_last_notification.is_set || is_set(time_since_last_notification.operation)) leaf_name_data.push_back(time_since_last_notification.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-notification-data")
    {
        for(auto const & c : last_notification_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::LastNotificationData>();
        c->parent = this;
        last_notification_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : last_notification_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "notification-error-code")
    {
        notification_error_code = value;
    }
    if(value_path == "notification-error-subcode")
    {
        notification_error_subcode = value;
    }
    if(value_path == "time-since-last-notification")
    {
        time_since_last_notification = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::LastNotificationData::LastNotificationData()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "last-notification-data"; yang_parent_name = "received-notification-info";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::LastNotificationData::~LastNotificationData()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::LastNotificationData::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::LastNotificationData::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::LastNotificationData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-notification-data";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::LastNotificationData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastNotificationData' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::LastNotificationData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::LastNotificationData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::LastNotificationData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::PerformanceStatistics::PerformanceStatistics()
    :
    active_collision{YType::uint32, "active-collision"},
    actives{YType::uint32, "actives"},
    control_to_read_thread_trigger{YType::uint32, "control-to-read-thread-trigger"},
    control_to_write_thread_trigger{YType::uint32, "control-to-write-thread-trigger"},
    data_bytes_read{YType::uint32, "data-bytes-read"},
    data_bytes_written{YType::uint32, "data-bytes-written"},
    failed_post_actives{YType::uint32, "failed-post-actives"},
    high_throttled_read{YType::uint32, "high-throttled-read"},
    inbound_update_messages{YType::uint32, "inbound-update-messages"},
    inbound_update_messages_time{YType::uint32, "inbound-update-messages-time"},
    io_read_time{YType::uint32, "io-read-time"},
    io_write_time{YType::uint32, "io-write-time"},
    last_nsr_scoped_sync{YType::uint32, "last-nsr-scoped-sync"},
    last_sent_seq_no{YType::uint32, "last-sent-seq-no"},
    low_throttled_read{YType::uint32, "low-throttled-read"},
    maximum_read_size{YType::uint32, "maximum-read-size"},
    nbr_fd{YType::int32, "nbr-fd"},
    nbr_flags{YType::uint32, "nbr-flags"},
    network_status{YType::uint32, "network-status"},
    nsr_oper_down_count{YType::uint32, "nsr-oper-down-count"},
    passive_collision{YType::uint32, "passive-collision"},
    passives{YType::uint32, "passives"},
    read_calls_count{YType::uint32, "read-calls-count"},
    read_messages_count{YType::uint32, "read-messages-count"},
    read_throttles{YType::uint32, "read-throttles"},
    rejected_passives{YType::uint32, "rejected-passives"},
    reset_flags{YType::uint32, "reset-flags"},
    reset_retries{YType::uint8, "reset-retries"},
    subgroup_list_time{YType::uint32, "subgroup-list-time"},
    sync_flags{YType::uint32, "sync-flags"},
    time_since_last_throttled_read{YType::uint32, "time-since-last-throttled-read"},
    write_calls_count{YType::uint32, "write-calls-count"},
    write_queue_calls_count{YType::uint32, "write-queue-calls-count"},
    write_queue_messages_count{YType::uint32, "write-queue-messages-count"},
    write_queue_time{YType::uint32, "write-queue-time"},
    write_subgroup_calls_count{YType::uint32, "write-subgroup-calls-count"},
    write_subgroup_messages_count{YType::uint32, "write-subgroup-messages-count"}
{
    yang_name = "performance-statistics"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::PerformanceStatistics::~PerformanceStatistics()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::PerformanceStatistics::has_data() const
{
    return active_collision.is_set
	|| actives.is_set
	|| control_to_read_thread_trigger.is_set
	|| control_to_write_thread_trigger.is_set
	|| data_bytes_read.is_set
	|| data_bytes_written.is_set
	|| failed_post_actives.is_set
	|| high_throttled_read.is_set
	|| inbound_update_messages.is_set
	|| inbound_update_messages_time.is_set
	|| io_read_time.is_set
	|| io_write_time.is_set
	|| last_nsr_scoped_sync.is_set
	|| last_sent_seq_no.is_set
	|| low_throttled_read.is_set
	|| maximum_read_size.is_set
	|| nbr_fd.is_set
	|| nbr_flags.is_set
	|| network_status.is_set
	|| nsr_oper_down_count.is_set
	|| passive_collision.is_set
	|| passives.is_set
	|| read_calls_count.is_set
	|| read_messages_count.is_set
	|| read_throttles.is_set
	|| rejected_passives.is_set
	|| reset_flags.is_set
	|| reset_retries.is_set
	|| subgroup_list_time.is_set
	|| sync_flags.is_set
	|| time_since_last_throttled_read.is_set
	|| write_calls_count.is_set
	|| write_queue_calls_count.is_set
	|| write_queue_messages_count.is_set
	|| write_queue_time.is_set
	|| write_subgroup_calls_count.is_set
	|| write_subgroup_messages_count.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::PerformanceStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(active_collision.operation)
	|| is_set(actives.operation)
	|| is_set(control_to_read_thread_trigger.operation)
	|| is_set(control_to_write_thread_trigger.operation)
	|| is_set(data_bytes_read.operation)
	|| is_set(data_bytes_written.operation)
	|| is_set(failed_post_actives.operation)
	|| is_set(high_throttled_read.operation)
	|| is_set(inbound_update_messages.operation)
	|| is_set(inbound_update_messages_time.operation)
	|| is_set(io_read_time.operation)
	|| is_set(io_write_time.operation)
	|| is_set(last_nsr_scoped_sync.operation)
	|| is_set(last_sent_seq_no.operation)
	|| is_set(low_throttled_read.operation)
	|| is_set(maximum_read_size.operation)
	|| is_set(nbr_fd.operation)
	|| is_set(nbr_flags.operation)
	|| is_set(network_status.operation)
	|| is_set(nsr_oper_down_count.operation)
	|| is_set(passive_collision.operation)
	|| is_set(passives.operation)
	|| is_set(read_calls_count.operation)
	|| is_set(read_messages_count.operation)
	|| is_set(read_throttles.operation)
	|| is_set(rejected_passives.operation)
	|| is_set(reset_flags.operation)
	|| is_set(reset_retries.operation)
	|| is_set(subgroup_list_time.operation)
	|| is_set(sync_flags.operation)
	|| is_set(time_since_last_throttled_read.operation)
	|| is_set(write_calls_count.operation)
	|| is_set(write_queue_calls_count.operation)
	|| is_set(write_queue_messages_count.operation)
	|| is_set(write_queue_time.operation)
	|| is_set(write_subgroup_calls_count.operation)
	|| is_set(write_subgroup_messages_count.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::PerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-statistics";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::PerformanceStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerformanceStatistics' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_collision.is_set || is_set(active_collision.operation)) leaf_name_data.push_back(active_collision.get_name_leafdata());
    if (actives.is_set || is_set(actives.operation)) leaf_name_data.push_back(actives.get_name_leafdata());
    if (control_to_read_thread_trigger.is_set || is_set(control_to_read_thread_trigger.operation)) leaf_name_data.push_back(control_to_read_thread_trigger.get_name_leafdata());
    if (control_to_write_thread_trigger.is_set || is_set(control_to_write_thread_trigger.operation)) leaf_name_data.push_back(control_to_write_thread_trigger.get_name_leafdata());
    if (data_bytes_read.is_set || is_set(data_bytes_read.operation)) leaf_name_data.push_back(data_bytes_read.get_name_leafdata());
    if (data_bytes_written.is_set || is_set(data_bytes_written.operation)) leaf_name_data.push_back(data_bytes_written.get_name_leafdata());
    if (failed_post_actives.is_set || is_set(failed_post_actives.operation)) leaf_name_data.push_back(failed_post_actives.get_name_leafdata());
    if (high_throttled_read.is_set || is_set(high_throttled_read.operation)) leaf_name_data.push_back(high_throttled_read.get_name_leafdata());
    if (inbound_update_messages.is_set || is_set(inbound_update_messages.operation)) leaf_name_data.push_back(inbound_update_messages.get_name_leafdata());
    if (inbound_update_messages_time.is_set || is_set(inbound_update_messages_time.operation)) leaf_name_data.push_back(inbound_update_messages_time.get_name_leafdata());
    if (io_read_time.is_set || is_set(io_read_time.operation)) leaf_name_data.push_back(io_read_time.get_name_leafdata());
    if (io_write_time.is_set || is_set(io_write_time.operation)) leaf_name_data.push_back(io_write_time.get_name_leafdata());
    if (last_nsr_scoped_sync.is_set || is_set(last_nsr_scoped_sync.operation)) leaf_name_data.push_back(last_nsr_scoped_sync.get_name_leafdata());
    if (last_sent_seq_no.is_set || is_set(last_sent_seq_no.operation)) leaf_name_data.push_back(last_sent_seq_no.get_name_leafdata());
    if (low_throttled_read.is_set || is_set(low_throttled_read.operation)) leaf_name_data.push_back(low_throttled_read.get_name_leafdata());
    if (maximum_read_size.is_set || is_set(maximum_read_size.operation)) leaf_name_data.push_back(maximum_read_size.get_name_leafdata());
    if (nbr_fd.is_set || is_set(nbr_fd.operation)) leaf_name_data.push_back(nbr_fd.get_name_leafdata());
    if (nbr_flags.is_set || is_set(nbr_flags.operation)) leaf_name_data.push_back(nbr_flags.get_name_leafdata());
    if (network_status.is_set || is_set(network_status.operation)) leaf_name_data.push_back(network_status.get_name_leafdata());
    if (nsr_oper_down_count.is_set || is_set(nsr_oper_down_count.operation)) leaf_name_data.push_back(nsr_oper_down_count.get_name_leafdata());
    if (passive_collision.is_set || is_set(passive_collision.operation)) leaf_name_data.push_back(passive_collision.get_name_leafdata());
    if (passives.is_set || is_set(passives.operation)) leaf_name_data.push_back(passives.get_name_leafdata());
    if (read_calls_count.is_set || is_set(read_calls_count.operation)) leaf_name_data.push_back(read_calls_count.get_name_leafdata());
    if (read_messages_count.is_set || is_set(read_messages_count.operation)) leaf_name_data.push_back(read_messages_count.get_name_leafdata());
    if (read_throttles.is_set || is_set(read_throttles.operation)) leaf_name_data.push_back(read_throttles.get_name_leafdata());
    if (rejected_passives.is_set || is_set(rejected_passives.operation)) leaf_name_data.push_back(rejected_passives.get_name_leafdata());
    if (reset_flags.is_set || is_set(reset_flags.operation)) leaf_name_data.push_back(reset_flags.get_name_leafdata());
    if (reset_retries.is_set || is_set(reset_retries.operation)) leaf_name_data.push_back(reset_retries.get_name_leafdata());
    if (subgroup_list_time.is_set || is_set(subgroup_list_time.operation)) leaf_name_data.push_back(subgroup_list_time.get_name_leafdata());
    if (sync_flags.is_set || is_set(sync_flags.operation)) leaf_name_data.push_back(sync_flags.get_name_leafdata());
    if (time_since_last_throttled_read.is_set || is_set(time_since_last_throttled_read.operation)) leaf_name_data.push_back(time_since_last_throttled_read.get_name_leafdata());
    if (write_calls_count.is_set || is_set(write_calls_count.operation)) leaf_name_data.push_back(write_calls_count.get_name_leafdata());
    if (write_queue_calls_count.is_set || is_set(write_queue_calls_count.operation)) leaf_name_data.push_back(write_queue_calls_count.get_name_leafdata());
    if (write_queue_messages_count.is_set || is_set(write_queue_messages_count.operation)) leaf_name_data.push_back(write_queue_messages_count.get_name_leafdata());
    if (write_queue_time.is_set || is_set(write_queue_time.operation)) leaf_name_data.push_back(write_queue_time.get_name_leafdata());
    if (write_subgroup_calls_count.is_set || is_set(write_subgroup_calls_count.operation)) leaf_name_data.push_back(write_subgroup_calls_count.get_name_leafdata());
    if (write_subgroup_messages_count.is_set || is_set(write_subgroup_messages_count.operation)) leaf_name_data.push_back(write_subgroup_messages_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::PerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::PerformanceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::PerformanceStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-collision")
    {
        active_collision = value;
    }
    if(value_path == "actives")
    {
        actives = value;
    }
    if(value_path == "control-to-read-thread-trigger")
    {
        control_to_read_thread_trigger = value;
    }
    if(value_path == "control-to-write-thread-trigger")
    {
        control_to_write_thread_trigger = value;
    }
    if(value_path == "data-bytes-read")
    {
        data_bytes_read = value;
    }
    if(value_path == "data-bytes-written")
    {
        data_bytes_written = value;
    }
    if(value_path == "failed-post-actives")
    {
        failed_post_actives = value;
    }
    if(value_path == "high-throttled-read")
    {
        high_throttled_read = value;
    }
    if(value_path == "inbound-update-messages")
    {
        inbound_update_messages = value;
    }
    if(value_path == "inbound-update-messages-time")
    {
        inbound_update_messages_time = value;
    }
    if(value_path == "io-read-time")
    {
        io_read_time = value;
    }
    if(value_path == "io-write-time")
    {
        io_write_time = value;
    }
    if(value_path == "last-nsr-scoped-sync")
    {
        last_nsr_scoped_sync = value;
    }
    if(value_path == "last-sent-seq-no")
    {
        last_sent_seq_no = value;
    }
    if(value_path == "low-throttled-read")
    {
        low_throttled_read = value;
    }
    if(value_path == "maximum-read-size")
    {
        maximum_read_size = value;
    }
    if(value_path == "nbr-fd")
    {
        nbr_fd = value;
    }
    if(value_path == "nbr-flags")
    {
        nbr_flags = value;
    }
    if(value_path == "network-status")
    {
        network_status = value;
    }
    if(value_path == "nsr-oper-down-count")
    {
        nsr_oper_down_count = value;
    }
    if(value_path == "passive-collision")
    {
        passive_collision = value;
    }
    if(value_path == "passives")
    {
        passives = value;
    }
    if(value_path == "read-calls-count")
    {
        read_calls_count = value;
    }
    if(value_path == "read-messages-count")
    {
        read_messages_count = value;
    }
    if(value_path == "read-throttles")
    {
        read_throttles = value;
    }
    if(value_path == "rejected-passives")
    {
        rejected_passives = value;
    }
    if(value_path == "reset-flags")
    {
        reset_flags = value;
    }
    if(value_path == "reset-retries")
    {
        reset_retries = value;
    }
    if(value_path == "subgroup-list-time")
    {
        subgroup_list_time = value;
    }
    if(value_path == "sync-flags")
    {
        sync_flags = value;
    }
    if(value_path == "time-since-last-throttled-read")
    {
        time_since_last_throttled_read = value;
    }
    if(value_path == "write-calls-count")
    {
        write_calls_count = value;
    }
    if(value_path == "write-queue-calls-count")
    {
        write_queue_calls_count = value;
    }
    if(value_path == "write-queue-messages-count")
    {
        write_queue_messages_count = value;
    }
    if(value_path == "write-queue-time")
    {
        write_queue_time = value;
    }
    if(value_path == "write-subgroup-calls-count")
    {
        write_subgroup_calls_count = value;
    }
    if(value_path == "write-subgroup-messages-count")
    {
        write_subgroup_messages_count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::MessageStatistics()
    :
    keepalive(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive>())
	,notification(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification>())
	,open(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open>())
	,route_refresh(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh>())
	,total(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total>())
	,update(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update>())
{
    keepalive->parent = this;

    notification->parent = this;

    open->parent = this;

    route_refresh->parent = this;

    total->parent = this;

    update->parent = this;

    yang_name = "message-statistics"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::~MessageStatistics()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::has_data() const
{
    return (keepalive !=  nullptr && keepalive->has_data())
	|| (notification !=  nullptr && notification->has_data())
	|| (open !=  nullptr && open->has_data())
	|| (route_refresh !=  nullptr && route_refresh->has_data())
	|| (total !=  nullptr && total->has_data())
	|| (update !=  nullptr && update->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::has_operation() const
{
    return is_set(operation)
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (notification !=  nullptr && notification->has_operation())
	|| (open !=  nullptr && open->has_operation())
	|| (route_refresh !=  nullptr && route_refresh->has_operation())
	|| (total !=  nullptr && total->has_operation())
	|| (update !=  nullptr && update->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-statistics";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageStatistics' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive>();
        }
        return keepalive;
    }

    if(child_yang_name == "notification")
    {
        if(notification == nullptr)
        {
            notification = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification>();
        }
        return notification;
    }

    if(child_yang_name == "open")
    {
        if(open == nullptr)
        {
            open = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open>();
        }
        return open;
    }

    if(child_yang_name == "route-refresh")
    {
        if(route_refresh == nullptr)
        {
            route_refresh = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh>();
        }
        return route_refresh;
    }

    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total>();
        }
        return total;
    }

    if(child_yang_name == "update")
    {
        if(update == nullptr)
        {
            update = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update>();
        }
        return update;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(keepalive != nullptr)
    {
        children["keepalive"] = keepalive;
    }

    if(notification != nullptr)
    {
        children["notification"] = notification;
    }

    if(open != nullptr)
    {
        children["open"] = open;
    }

    if(route_refresh != nullptr)
    {
        children["route-refresh"] = route_refresh;
    }

    if(total != nullptr)
    {
        children["total"] = total;
    }

    if(update != nullptr)
    {
        children["update"] = update;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Open()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx>())
{
    rx->parent = this;

    tx->parent = this;

    yang_name = "open"; yang_parent_name = "message-statistics";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::~Open()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::has_operation() const
{
    return is_set(operation)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "open";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Open' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx")
    {
        if(rx == nullptr)
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx>();
        }
        return rx;
    }

    if(child_yang_name == "tx")
    {
        if(tx == nullptr)
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx>();
        }
        return tx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rx != nullptr)
    {
        children["rx"] = rx;
    }

    if(tx != nullptr)
    {
        children["tx"] = tx;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "tx"; yang_parent_name = "open";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_time_spec != nullptr)
    {
        children["last-time-spec"] = last_time_spec;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "tx";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "rx"; yang_parent_name = "open";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_time_spec != nullptr)
    {
        children["last-time-spec"] = last_time_spec;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "rx";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Notification()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx>())
{
    rx->parent = this;

    tx->parent = this;

    yang_name = "notification"; yang_parent_name = "message-statistics";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::~Notification()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::has_operation() const
{
    return is_set(operation)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Notification' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx")
    {
        if(rx == nullptr)
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx>();
        }
        return rx;
    }

    if(child_yang_name == "tx")
    {
        if(tx == nullptr)
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx>();
        }
        return tx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rx != nullptr)
    {
        children["rx"] = rx;
    }

    if(tx != nullptr)
    {
        children["tx"] = tx;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "tx"; yang_parent_name = "notification";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_time_spec != nullptr)
    {
        children["last-time-spec"] = last_time_spec;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "tx";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "rx"; yang_parent_name = "notification";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_time_spec != nullptr)
    {
        children["last-time-spec"] = last_time_spec;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "rx";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Update()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx>())
{
    rx->parent = this;

    tx->parent = this;

    yang_name = "update"; yang_parent_name = "message-statistics";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::~Update()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::has_operation() const
{
    return is_set(operation)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Update' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx")
    {
        if(rx == nullptr)
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx>();
        }
        return rx;
    }

    if(child_yang_name == "tx")
    {
        if(tx == nullptr)
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx>();
        }
        return tx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rx != nullptr)
    {
        children["rx"] = rx;
    }

    if(tx != nullptr)
    {
        children["tx"] = tx;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "tx"; yang_parent_name = "update";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_time_spec != nullptr)
    {
        children["last-time-spec"] = last_time_spec;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "tx";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "rx"; yang_parent_name = "update";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_time_spec != nullptr)
    {
        children["last-time-spec"] = last_time_spec;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "rx";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Keepalive()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx>())
{
    rx->parent = this;

    tx->parent = this;

    yang_name = "keepalive"; yang_parent_name = "message-statistics";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::~Keepalive()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::has_operation() const
{
    return is_set(operation)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Keepalive' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx")
    {
        if(rx == nullptr)
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx>();
        }
        return rx;
    }

    if(child_yang_name == "tx")
    {
        if(tx == nullptr)
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx>();
        }
        return tx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rx != nullptr)
    {
        children["rx"] = rx;
    }

    if(tx != nullptr)
    {
        children["tx"] = tx;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "tx"; yang_parent_name = "keepalive";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_time_spec != nullptr)
    {
        children["last-time-spec"] = last_time_spec;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "tx";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "rx"; yang_parent_name = "keepalive";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_time_spec != nullptr)
    {
        children["last-time-spec"] = last_time_spec;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "rx";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::RouteRefresh()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx>())
{
    rx->parent = this;

    tx->parent = this;

    yang_name = "route-refresh"; yang_parent_name = "message-statistics";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::~RouteRefresh()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::has_operation() const
{
    return is_set(operation)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-refresh";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteRefresh' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx")
    {
        if(rx == nullptr)
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx>();
        }
        return rx;
    }

    if(child_yang_name == "tx")
    {
        if(tx == nullptr)
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx>();
        }
        return tx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rx != nullptr)
    {
        children["rx"] = rx;
    }

    if(tx != nullptr)
    {
        children["tx"] = tx;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "tx"; yang_parent_name = "route-refresh";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_time_spec != nullptr)
    {
        children["last-time-spec"] = last_time_spec;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "tx";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "rx"; yang_parent_name = "route-refresh";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_time_spec != nullptr)
    {
        children["last-time-spec"] = last_time_spec;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "rx";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Total()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx>())
{
    rx->parent = this;

    tx->parent = this;

    yang_name = "total"; yang_parent_name = "message-statistics";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::~Total()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::has_operation() const
{
    return is_set(operation)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Total' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx")
    {
        if(rx == nullptr)
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx>();
        }
        return rx;
    }

    if(child_yang_name == "tx")
    {
        if(tx == nullptr)
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx>();
        }
        return tx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rx != nullptr)
    {
        children["rx"] = rx;
    }

    if(tx != nullptr)
    {
        children["tx"] = tx;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "tx"; yang_parent_name = "total";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_time_spec != nullptr)
    {
        children["last-time-spec"] = last_time_spec;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "tx";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;

    yang_name = "rx"; yang_parent_name = "total";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec == nullptr)
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec>();
        }
        return last_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_time_spec != nullptr)
    {
        children["last-time-spec"] = last_time_spec;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "rx";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncTimeSpec::TcpInitSyncTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "tcp-init-sync-time-spec"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncTimeSpec::~TcpInitSyncTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-init-sync-time-spec";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TcpInitSyncTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncPhaseTwoTimeSpec::TcpInitSyncPhaseTwoTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "tcp-init-sync-phase-two-time-spec"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncPhaseTwoTimeSpec::~TcpInitSyncPhaseTwoTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncPhaseTwoTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncPhaseTwoTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncPhaseTwoTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-init-sync-phase-two-time-spec";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncPhaseTwoTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TcpInitSyncPhaseTwoTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncPhaseTwoTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncPhaseTwoTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncPhaseTwoTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncDoneTimeSpec::TcpInitSyncDoneTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "tcp-init-sync-done-time-spec"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncDoneTimeSpec::~TcpInitSyncDoneTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncDoneTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncDoneTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncDoneTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-init-sync-done-time-spec";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncDoneTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TcpInitSyncDoneTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncDoneTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncDoneTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncDoneTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::GracefulMaintenance::GracefulMaintenance()
    :
    gshut_active{YType::boolean, "gshut-active"},
    gshut_exists{YType::boolean, "gshut-exists"},
    gshut_local_active{YType::boolean, "gshut-local-active"},
    gshut_locpref{YType::uint32, "gshut-locpref"},
    gshut_locpref_set{YType::boolean, "gshut-locpref-set"},
    gshut_prepends{YType::uint8, "gshut-prepends"}
{
    yang_name = "graceful-maintenance"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::GracefulMaintenance::~GracefulMaintenance()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::GracefulMaintenance::has_data() const
{
    return gshut_active.is_set
	|| gshut_exists.is_set
	|| gshut_local_active.is_set
	|| gshut_locpref.is_set
	|| gshut_locpref_set.is_set
	|| gshut_prepends.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::GracefulMaintenance::has_operation() const
{
    return is_set(operation)
	|| is_set(gshut_active.operation)
	|| is_set(gshut_exists.operation)
	|| is_set(gshut_local_active.operation)
	|| is_set(gshut_locpref.operation)
	|| is_set(gshut_locpref_set.operation)
	|| is_set(gshut_prepends.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::GracefulMaintenance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::GracefulMaintenance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulMaintenance' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gshut_active.is_set || is_set(gshut_active.operation)) leaf_name_data.push_back(gshut_active.get_name_leafdata());
    if (gshut_exists.is_set || is_set(gshut_exists.operation)) leaf_name_data.push_back(gshut_exists.get_name_leafdata());
    if (gshut_local_active.is_set || is_set(gshut_local_active.operation)) leaf_name_data.push_back(gshut_local_active.get_name_leafdata());
    if (gshut_locpref.is_set || is_set(gshut_locpref.operation)) leaf_name_data.push_back(gshut_locpref.get_name_leafdata());
    if (gshut_locpref_set.is_set || is_set(gshut_locpref_set.operation)) leaf_name_data.push_back(gshut_locpref_set.get_name_leafdata());
    if (gshut_prepends.is_set || is_set(gshut_prepends.operation)) leaf_name_data.push_back(gshut_prepends.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::GracefulMaintenance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::GracefulMaintenance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::GracefulMaintenance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gshut-active")
    {
        gshut_active = value;
    }
    if(value_path == "gshut-exists")
    {
        gshut_exists = value;
    }
    if(value_path == "gshut-local-active")
    {
        gshut_local_active = value;
    }
    if(value_path == "gshut-locpref")
    {
        gshut_locpref = value;
    }
    if(value_path == "gshut-locpref-set")
    {
        gshut_locpref_set = value;
    }
    if(value_path == "gshut-prepends")
    {
        gshut_prepends = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::AfData()
    :
    accept_own_enabled{YType::boolean, "accept-own-enabled"},
    acked_version{YType::uint32, "acked-version"},
    address_family_long_lived_time{YType::uint32, "address-family-long-lived-time"},
    advertise_afi{YType::boolean, "advertise-afi"},
    advertise_afi_def_vrf_imp_disable{YType::boolean, "advertise-afi-def-vrf-imp-disable"},
    advertise_afi_disable{YType::boolean, "advertise-afi-disable"},
    advertise_afi_eo_r_ready{YType::boolean, "advertise-afi-eo-r-ready"},
    advertise_afi_reorg{YType::boolean, "advertise-afi-reorg"},
    advertise_afi_vrf_re_imp_disable{YType::boolean, "advertise-afi-vrf-re-imp-disable"},
    advertise_evp_nv4afi_def_vrf_imp_disable{YType::boolean, "advertise-evp-nv4afi-def-vrf-imp-disable"},
    advertise_evp_nv4afi_vrf_re_imp_disable{YType::boolean, "advertise-evp-nv4afi-vrf-re-imp-disable"},
    advertise_evp_nv6afi_def_vrf_imp_disable{YType::boolean, "advertise-evp-nv6afi-def-vrf-imp-disable"},
    advertise_evp_nv6afi_vrf_re_imp_disable{YType::boolean, "advertise-evp-nv6afi-vrf-re-imp-disable"},
    advertise_local_labeled_route_unicast{YType::boolean, "advertise-local-labeled-route-unicast"},
    advertise_rt_type{YType::uint8, "advertise-rt-type"},
    advertise_v4_flags{YType::uint32, "advertise-v4-flags"},
    advertise_v6_flags{YType::uint32, "advertise-v6-flags"},
    af_name{YType::enumeration, "af-name"},
    afrpki_allow_invalid{YType::boolean, "afrpki-allow-invalid"},
    afrpki_disable{YType::boolean, "afrpki-disable"},
    afrpki_signal_ibgp{YType::boolean, "afrpki-signal-ibgp"},
    afrpki_use_validity{YType::boolean, "afrpki-use-validity"},
    allow_as_in_count{YType::uint32, "allow-as-in-count"},
    always_use_next_hop_local{YType::boolean, "always-use-next-hop-local"},
    encapsulation_type{YType::uint32, "encapsulation-type"},
    eo_r_received_in_read_only{YType::boolean, "eo-r-received-in-read-only"},
    filter_group_index{YType::uint32, "filter-group-index"},
    flowspec_redirect_validation_d_isable{YType::boolean, "flowspec-redirect-validation-d-isable"},
    flowspec_validation_d_isable{YType::boolean, "flowspec-validation-d-isable"},
    import_reoriginate{YType::boolean, "import-reoriginate"},
    import_reoriginate_stitching{YType::boolean, "import-reoriginate-stitching"},
    import_stitching{YType::boolean, "import-stitching"},
    is_add_path_receive_capability_advertised{YType::boolean, "is-add-path-receive-capability-advertised"},
    is_add_path_receive_capability_received{YType::boolean, "is-add-path-receive-capability-received"},
    is_add_path_send_capability_advertised{YType::boolean, "is-add-path-send-capability-advertised"},
    is_add_path_send_capability_received{YType::boolean, "is-add-path-send-capability-received"},
    is_addpath_receive_operational{YType::boolean, "is-addpath-receive-operational"},
    is_addpath_send_operational{YType::boolean, "is-addpath-send-operational"},
    is_advertise_permanent_network{YType::boolean, "is-advertise-permanent-network"},
    is_advertised_graceful_restart{YType::boolean, "is-advertised-graceful-restart"},
    is_advertised_orf_receive{YType::boolean, "is-advertised-orf-receive"},
    is_advertised_orf_send{YType::boolean, "is-advertised-orf-send"},
    is_aigp_set{YType::boolean, "is-aigp-set"},
    is_allow_as_in_set{YType::boolean, "is-allow-as-in-set"},
    is_as_override_set{YType::boolean, "is-as-override-set"},
    is_default_originate_sent{YType::boolean, "is-default-originate-sent"},
    is_ext_nh_encoding_capability_received{YType::boolean, "is-ext-nh-encoding-capability-received"},
    is_ext_nh_encoding_capability_sent{YType::boolean, "is-ext-nh-encoding-capability-sent"},
    is_graceful_restart_state_flag{YType::boolean, "is-graceful-restart-state-flag"},
    is_legacy_pe_rt{YType::boolean, "is-legacy-pe-rt"},
    is_neighbor_af_capable{YType::boolean, "is-neighbor-af-capable"},
    is_neighbor_ebgp_without_inbound_policy{YType::boolean, "is-neighbor-ebgp-without-inbound-policy"},
    is_neighbor_ebgp_without_outbound_policy{YType::boolean, "is-neighbor-ebgp-without-outbound-policy"},
    is_neighbor_route_reflector_client{YType::boolean, "is-neighbor-route-reflector-client"},
    is_orf_send_scheduled{YType::boolean, "is-orf-send-scheduled"},
    is_orf_sent{YType::boolean, "is-orf-sent"},
    is_orr_root_address_configured{YType::boolean, "is-orr-root-address-configured"},
    is_peer_orf_capable{YType::boolean, "is-peer-orf-capable"},
    is_prefix_orf_present{YType::boolean, "is-prefix-orf-present"},
    is_received_graceful_restart_capable{YType::boolean, "is-received-graceful-restart-capable"},
    is_received_orf_receive_capable{YType::boolean, "is-received-orf-receive-capable"},
    is_received_orf_send_capable{YType::boolean, "is-received-orf-send-capable"},
    is_rt_present{YType::boolean, "is-rt-present"},
    is_rt_present_standby{YType::boolean, "is-rt-present-standby"},
    is_send_mcast_attr{YType::boolean, "is-send-mcast-attr"},
    is_soft_reconfiguration_inbound_allowed{YType::boolean, "is-soft-reconfiguration-inbound-allowed"},
    is_update_deferred{YType::boolean, "is-update-deferred"},
    is_update_leaving{YType::boolean, "is-update-leaving"},
    is_update_throttled{YType::boolean, "is-update-throttled"},
    is_use_soft_reconfiguration_always_on{YType::boolean, "is-use-soft-reconfiguration-always-on"},
    local_restart_time{YType::uint32, "local-restart-time"},
    long_lived_graceful_restart_capability_received{YType::boolean, "long-lived-graceful-restart-capability-received"},
    long_lived_graceful_restart_stale_time_accept{YType::uint32, "long-lived-graceful-restart-stale-time-accept"},
    long_lived_graceful_restart_stale_time_configured{YType::boolean, "long-lived-graceful-restart-stale-time-configured"},
    long_lived_graceful_restart_stale_time_received{YType::uint32, "long-lived-graceful-restart-stale-time-received"},
    long_lived_graceful_restart_stale_time_sent{YType::uint32, "long-lived-graceful-restart-stale-time-sent"},
    max_prefix_discard_extra_paths{YType::boolean, "max-prefix-discard-extra-paths"},
    max_prefix_exceed_discard_paths{YType::boolean, "max-prefix-exceed-discard-paths"},
    max_prefix_limit{YType::uint32, "max-prefix-limit"},
    max_prefix_restart_time{YType::uint16, "max-prefix-restart-time"},
    max_prefix_threshold_percent{YType::uint8, "max-prefix-threshold-percent"},
    neighbor_default_originate{YType::boolean, "neighbor-default-originate"},
    neighbor_long_lived_graceful_restart_capable{YType::boolean, "neighbor-long-lived-graceful-restart-capable"},
    neighbor_long_lived_graceful_restart_time_remaining{YType::uint32, "neighbor-long-lived-graceful-restart-time-remaining"},
    neighbor_preserved_forwarding_state{YType::boolean, "neighbor-preserved-forwarding-state"},
    neighbor_preserved_long_lived_forwarding_state{YType::boolean, "neighbor-preserved-long-lived-forwarding-state"},
    neighbor_version{YType::uint32, "neighbor-version"},
    number_of_best_externalpaths{YType::uint32, "number-of-best-externalpaths"},
    number_of_bestpaths{YType::uint32, "number-of-bestpaths"},
    orf_entries_received{YType::uint32, "orf-entries-received"},
    orr_group_index{YType::uint32, "orr-group-index"},
    orr_group_name{YType::str, "orr-group-name"},
    outstanding_version{YType::uint32, "outstanding-version"},
    outstanding_version_max{YType::uint32, "outstanding-version-max"},
    prefixes_accepted{YType::uint32, "prefixes-accepted"},
    prefixes_advertised{YType::uint32, "prefixes-advertised"},
    prefixes_be_advertised{YType::uint32, "prefixes-be-advertised"},
    prefixes_denied{YType::uint32, "prefixes-denied"},
    prefixes_denied_no_policy{YType::uint32, "prefixes-denied-no-policy"},
    prefixes_denied_non_cumulative{YType::uint32, "prefixes-denied-non-cumulative"},
    prefixes_denied_orf_policy{YType::uint32, "prefixes-denied-orf-policy"},
    prefixes_denied_policy{YType::uint32, "prefixes-denied-policy"},
    prefixes_denied_rt_permit{YType::uint32, "prefixes-denied-rt-permit"},
    prefixes_suppressed{YType::uint32, "prefixes-suppressed"},
    prefixes_synced{YType::uint32, "prefixes-synced"},
    prefixes_withdrawn{YType::uint32, "prefixes-withdrawn"},
    prefixes_withdrawn_not_found{YType::uint32, "prefixes-withdrawn-not-found"},
    refresh_acked_version{YType::uint32, "refresh-acked-version"},
    refresh_target_version{YType::uint32, "refresh-target-version"},
    refresh_version{YType::uint32, "refresh-version"},
    remove_private_as_entire_aspath_from_inbound_updates{YType::boolean, "remove-private-as-entire-aspath-from-inbound-updates"},
    remove_private_as_entire_aspath_from_updates{YType::boolean, "remove-private-as-entire-aspath-from-updates"},
    remove_private_as_from_inbound_updates{YType::boolean, "remove-private-as-from-inbound-updates"},
    remove_private_as_from_updates{YType::boolean, "remove-private-as-from-updates"},
    restart_time{YType::uint32, "restart-time"},
    rib_purge_timeout_value{YType::uint32, "rib-purge-timeout-value"},
    route_policy_default_originate{YType::str, "route-policy-default-originate"},
    route_policy_in{YType::str, "route-policy-in"},
    route_policy_out{YType::str, "route-policy-out"},
    route_policy_prefix_orf{YType::str, "route-policy-prefix-orf"},
    route_refreshes_received{YType::uint32, "route-refreshes-received"},
    route_refreshes_sent{YType::uint32, "route-refreshes-sent"},
    selective_multipath_eligible{YType::boolean, "selective-multipath-eligible"},
    sent_community_to_neighbor{YType::boolean, "sent-community-to-neighbor"},
    sent_extended_community_to_neighbor{YType::boolean, "sent-extended-community-to-neighbor"},
    sent_gshut_community_to_neighbor{YType::boolean, "sent-gshut-community-to-neighbor"},
    stale_path_timeout{YType::uint32, "stale-path-timeout"},
    synced_acked_version{YType::uint32, "synced-acked-version"},
    update_group_number{YType::uint32, "update-group-number"},
    use_max_prefix_warning_only{YType::boolean, "use-max-prefix-warning-only"},
    vpn_update_gen_enabled{YType::boolean, "vpn-update-gen-enabled"},
    vpn_update_gen_trigger_enabled{YType::boolean, "vpn-update-gen-trigger-enabled"},
    weight{YType::uint32, "weight"}
    	,
    neighbor_af_performance_statistics(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::NeighborAfPerformanceStatistics>())
{
    neighbor_af_performance_statistics->parent = this;

    yang_name = "af-data"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::~AfData()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::has_data() const
{
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community_standby.size(); index++)
    {
        if(extended_community_standby[index]->has_data())
            return true;
    }
    return accept_own_enabled.is_set
	|| acked_version.is_set
	|| address_family_long_lived_time.is_set
	|| advertise_afi.is_set
	|| advertise_afi_def_vrf_imp_disable.is_set
	|| advertise_afi_disable.is_set
	|| advertise_afi_eo_r_ready.is_set
	|| advertise_afi_reorg.is_set
	|| advertise_afi_vrf_re_imp_disable.is_set
	|| advertise_evp_nv4afi_def_vrf_imp_disable.is_set
	|| advertise_evp_nv4afi_vrf_re_imp_disable.is_set
	|| advertise_evp_nv6afi_def_vrf_imp_disable.is_set
	|| advertise_evp_nv6afi_vrf_re_imp_disable.is_set
	|| advertise_local_labeled_route_unicast.is_set
	|| advertise_rt_type.is_set
	|| advertise_v4_flags.is_set
	|| advertise_v6_flags.is_set
	|| af_name.is_set
	|| afrpki_allow_invalid.is_set
	|| afrpki_disable.is_set
	|| afrpki_signal_ibgp.is_set
	|| afrpki_use_validity.is_set
	|| allow_as_in_count.is_set
	|| always_use_next_hop_local.is_set
	|| encapsulation_type.is_set
	|| eo_r_received_in_read_only.is_set
	|| filter_group_index.is_set
	|| flowspec_redirect_validation_d_isable.is_set
	|| flowspec_validation_d_isable.is_set
	|| import_reoriginate.is_set
	|| import_reoriginate_stitching.is_set
	|| import_stitching.is_set
	|| is_add_path_receive_capability_advertised.is_set
	|| is_add_path_receive_capability_received.is_set
	|| is_add_path_send_capability_advertised.is_set
	|| is_add_path_send_capability_received.is_set
	|| is_addpath_receive_operational.is_set
	|| is_addpath_send_operational.is_set
	|| is_advertise_permanent_network.is_set
	|| is_advertised_graceful_restart.is_set
	|| is_advertised_orf_receive.is_set
	|| is_advertised_orf_send.is_set
	|| is_aigp_set.is_set
	|| is_allow_as_in_set.is_set
	|| is_as_override_set.is_set
	|| is_default_originate_sent.is_set
	|| is_ext_nh_encoding_capability_received.is_set
	|| is_ext_nh_encoding_capability_sent.is_set
	|| is_graceful_restart_state_flag.is_set
	|| is_legacy_pe_rt.is_set
	|| is_neighbor_af_capable.is_set
	|| is_neighbor_ebgp_without_inbound_policy.is_set
	|| is_neighbor_ebgp_without_outbound_policy.is_set
	|| is_neighbor_route_reflector_client.is_set
	|| is_orf_send_scheduled.is_set
	|| is_orf_sent.is_set
	|| is_orr_root_address_configured.is_set
	|| is_peer_orf_capable.is_set
	|| is_prefix_orf_present.is_set
	|| is_received_graceful_restart_capable.is_set
	|| is_received_orf_receive_capable.is_set
	|| is_received_orf_send_capable.is_set
	|| is_rt_present.is_set
	|| is_rt_present_standby.is_set
	|| is_send_mcast_attr.is_set
	|| is_soft_reconfiguration_inbound_allowed.is_set
	|| is_update_deferred.is_set
	|| is_update_leaving.is_set
	|| is_update_throttled.is_set
	|| is_use_soft_reconfiguration_always_on.is_set
	|| local_restart_time.is_set
	|| long_lived_graceful_restart_capability_received.is_set
	|| long_lived_graceful_restart_stale_time_accept.is_set
	|| long_lived_graceful_restart_stale_time_configured.is_set
	|| long_lived_graceful_restart_stale_time_received.is_set
	|| long_lived_graceful_restart_stale_time_sent.is_set
	|| max_prefix_discard_extra_paths.is_set
	|| max_prefix_exceed_discard_paths.is_set
	|| max_prefix_limit.is_set
	|| max_prefix_restart_time.is_set
	|| max_prefix_threshold_percent.is_set
	|| neighbor_default_originate.is_set
	|| neighbor_long_lived_graceful_restart_capable.is_set
	|| neighbor_long_lived_graceful_restart_time_remaining.is_set
	|| neighbor_preserved_forwarding_state.is_set
	|| neighbor_preserved_long_lived_forwarding_state.is_set
	|| neighbor_version.is_set
	|| number_of_best_externalpaths.is_set
	|| number_of_bestpaths.is_set
	|| orf_entries_received.is_set
	|| orr_group_index.is_set
	|| orr_group_name.is_set
	|| outstanding_version.is_set
	|| outstanding_version_max.is_set
	|| prefixes_accepted.is_set
	|| prefixes_advertised.is_set
	|| prefixes_be_advertised.is_set
	|| prefixes_denied.is_set
	|| prefixes_denied_no_policy.is_set
	|| prefixes_denied_non_cumulative.is_set
	|| prefixes_denied_orf_policy.is_set
	|| prefixes_denied_policy.is_set
	|| prefixes_denied_rt_permit.is_set
	|| prefixes_suppressed.is_set
	|| prefixes_synced.is_set
	|| prefixes_withdrawn.is_set
	|| prefixes_withdrawn_not_found.is_set
	|| refresh_acked_version.is_set
	|| refresh_target_version.is_set
	|| refresh_version.is_set
	|| remove_private_as_entire_aspath_from_inbound_updates.is_set
	|| remove_private_as_entire_aspath_from_updates.is_set
	|| remove_private_as_from_inbound_updates.is_set
	|| remove_private_as_from_updates.is_set
	|| restart_time.is_set
	|| rib_purge_timeout_value.is_set
	|| route_policy_default_originate.is_set
	|| route_policy_in.is_set
	|| route_policy_out.is_set
	|| route_policy_prefix_orf.is_set
	|| route_refreshes_received.is_set
	|| route_refreshes_sent.is_set
	|| selective_multipath_eligible.is_set
	|| sent_community_to_neighbor.is_set
	|| sent_extended_community_to_neighbor.is_set
	|| sent_gshut_community_to_neighbor.is_set
	|| stale_path_timeout.is_set
	|| synced_acked_version.is_set
	|| update_group_number.is_set
	|| use_max_prefix_warning_only.is_set
	|| vpn_update_gen_enabled.is_set
	|| vpn_update_gen_trigger_enabled.is_set
	|| weight.is_set
	|| (neighbor_af_performance_statistics !=  nullptr && neighbor_af_performance_statistics->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::has_operation() const
{
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community_standby.size(); index++)
    {
        if(extended_community_standby[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(accept_own_enabled.operation)
	|| is_set(acked_version.operation)
	|| is_set(address_family_long_lived_time.operation)
	|| is_set(advertise_afi.operation)
	|| is_set(advertise_afi_def_vrf_imp_disable.operation)
	|| is_set(advertise_afi_disable.operation)
	|| is_set(advertise_afi_eo_r_ready.operation)
	|| is_set(advertise_afi_reorg.operation)
	|| is_set(advertise_afi_vrf_re_imp_disable.operation)
	|| is_set(advertise_evp_nv4afi_def_vrf_imp_disable.operation)
	|| is_set(advertise_evp_nv4afi_vrf_re_imp_disable.operation)
	|| is_set(advertise_evp_nv6afi_def_vrf_imp_disable.operation)
	|| is_set(advertise_evp_nv6afi_vrf_re_imp_disable.operation)
	|| is_set(advertise_local_labeled_route_unicast.operation)
	|| is_set(advertise_rt_type.operation)
	|| is_set(advertise_v4_flags.operation)
	|| is_set(advertise_v6_flags.operation)
	|| is_set(af_name.operation)
	|| is_set(afrpki_allow_invalid.operation)
	|| is_set(afrpki_disable.operation)
	|| is_set(afrpki_signal_ibgp.operation)
	|| is_set(afrpki_use_validity.operation)
	|| is_set(allow_as_in_count.operation)
	|| is_set(always_use_next_hop_local.operation)
	|| is_set(encapsulation_type.operation)
	|| is_set(eo_r_received_in_read_only.operation)
	|| is_set(filter_group_index.operation)
	|| is_set(flowspec_redirect_validation_d_isable.operation)
	|| is_set(flowspec_validation_d_isable.operation)
	|| is_set(import_reoriginate.operation)
	|| is_set(import_reoriginate_stitching.operation)
	|| is_set(import_stitching.operation)
	|| is_set(is_add_path_receive_capability_advertised.operation)
	|| is_set(is_add_path_receive_capability_received.operation)
	|| is_set(is_add_path_send_capability_advertised.operation)
	|| is_set(is_add_path_send_capability_received.operation)
	|| is_set(is_addpath_receive_operational.operation)
	|| is_set(is_addpath_send_operational.operation)
	|| is_set(is_advertise_permanent_network.operation)
	|| is_set(is_advertised_graceful_restart.operation)
	|| is_set(is_advertised_orf_receive.operation)
	|| is_set(is_advertised_orf_send.operation)
	|| is_set(is_aigp_set.operation)
	|| is_set(is_allow_as_in_set.operation)
	|| is_set(is_as_override_set.operation)
	|| is_set(is_default_originate_sent.operation)
	|| is_set(is_ext_nh_encoding_capability_received.operation)
	|| is_set(is_ext_nh_encoding_capability_sent.operation)
	|| is_set(is_graceful_restart_state_flag.operation)
	|| is_set(is_legacy_pe_rt.operation)
	|| is_set(is_neighbor_af_capable.operation)
	|| is_set(is_neighbor_ebgp_without_inbound_policy.operation)
	|| is_set(is_neighbor_ebgp_without_outbound_policy.operation)
	|| is_set(is_neighbor_route_reflector_client.operation)
	|| is_set(is_orf_send_scheduled.operation)
	|| is_set(is_orf_sent.operation)
	|| is_set(is_orr_root_address_configured.operation)
	|| is_set(is_peer_orf_capable.operation)
	|| is_set(is_prefix_orf_present.operation)
	|| is_set(is_received_graceful_restart_capable.operation)
	|| is_set(is_received_orf_receive_capable.operation)
	|| is_set(is_received_orf_send_capable.operation)
	|| is_set(is_rt_present.operation)
	|| is_set(is_rt_present_standby.operation)
	|| is_set(is_send_mcast_attr.operation)
	|| is_set(is_soft_reconfiguration_inbound_allowed.operation)
	|| is_set(is_update_deferred.operation)
	|| is_set(is_update_leaving.operation)
	|| is_set(is_update_throttled.operation)
	|| is_set(is_use_soft_reconfiguration_always_on.operation)
	|| is_set(local_restart_time.operation)
	|| is_set(long_lived_graceful_restart_capability_received.operation)
	|| is_set(long_lived_graceful_restart_stale_time_accept.operation)
	|| is_set(long_lived_graceful_restart_stale_time_configured.operation)
	|| is_set(long_lived_graceful_restart_stale_time_received.operation)
	|| is_set(long_lived_graceful_restart_stale_time_sent.operation)
	|| is_set(max_prefix_discard_extra_paths.operation)
	|| is_set(max_prefix_exceed_discard_paths.operation)
	|| is_set(max_prefix_limit.operation)
	|| is_set(max_prefix_restart_time.operation)
	|| is_set(max_prefix_threshold_percent.operation)
	|| is_set(neighbor_default_originate.operation)
	|| is_set(neighbor_long_lived_graceful_restart_capable.operation)
	|| is_set(neighbor_long_lived_graceful_restart_time_remaining.operation)
	|| is_set(neighbor_preserved_forwarding_state.operation)
	|| is_set(neighbor_preserved_long_lived_forwarding_state.operation)
	|| is_set(neighbor_version.operation)
	|| is_set(number_of_best_externalpaths.operation)
	|| is_set(number_of_bestpaths.operation)
	|| is_set(orf_entries_received.operation)
	|| is_set(orr_group_index.operation)
	|| is_set(orr_group_name.operation)
	|| is_set(outstanding_version.operation)
	|| is_set(outstanding_version_max.operation)
	|| is_set(prefixes_accepted.operation)
	|| is_set(prefixes_advertised.operation)
	|| is_set(prefixes_be_advertised.operation)
	|| is_set(prefixes_denied.operation)
	|| is_set(prefixes_denied_no_policy.operation)
	|| is_set(prefixes_denied_non_cumulative.operation)
	|| is_set(prefixes_denied_orf_policy.operation)
	|| is_set(prefixes_denied_policy.operation)
	|| is_set(prefixes_denied_rt_permit.operation)
	|| is_set(prefixes_suppressed.operation)
	|| is_set(prefixes_synced.operation)
	|| is_set(prefixes_withdrawn.operation)
	|| is_set(prefixes_withdrawn_not_found.operation)
	|| is_set(refresh_acked_version.operation)
	|| is_set(refresh_target_version.operation)
	|| is_set(refresh_version.operation)
	|| is_set(remove_private_as_entire_aspath_from_inbound_updates.operation)
	|| is_set(remove_private_as_entire_aspath_from_updates.operation)
	|| is_set(remove_private_as_from_inbound_updates.operation)
	|| is_set(remove_private_as_from_updates.operation)
	|| is_set(restart_time.operation)
	|| is_set(rib_purge_timeout_value.operation)
	|| is_set(route_policy_default_originate.operation)
	|| is_set(route_policy_in.operation)
	|| is_set(route_policy_out.operation)
	|| is_set(route_policy_prefix_orf.operation)
	|| is_set(route_refreshes_received.operation)
	|| is_set(route_refreshes_sent.operation)
	|| is_set(selective_multipath_eligible.operation)
	|| is_set(sent_community_to_neighbor.operation)
	|| is_set(sent_extended_community_to_neighbor.operation)
	|| is_set(sent_gshut_community_to_neighbor.operation)
	|| is_set(stale_path_timeout.operation)
	|| is_set(synced_acked_version.operation)
	|| is_set(update_group_number.operation)
	|| is_set(use_max_prefix_warning_only.operation)
	|| is_set(vpn_update_gen_enabled.operation)
	|| is_set(vpn_update_gen_trigger_enabled.operation)
	|| is_set(weight.operation)
	|| (neighbor_af_performance_statistics !=  nullptr && neighbor_af_performance_statistics->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-data";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AfData' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_own_enabled.is_set || is_set(accept_own_enabled.operation)) leaf_name_data.push_back(accept_own_enabled.get_name_leafdata());
    if (acked_version.is_set || is_set(acked_version.operation)) leaf_name_data.push_back(acked_version.get_name_leafdata());
    if (address_family_long_lived_time.is_set || is_set(address_family_long_lived_time.operation)) leaf_name_data.push_back(address_family_long_lived_time.get_name_leafdata());
    if (advertise_afi.is_set || is_set(advertise_afi.operation)) leaf_name_data.push_back(advertise_afi.get_name_leafdata());
    if (advertise_afi_def_vrf_imp_disable.is_set || is_set(advertise_afi_def_vrf_imp_disable.operation)) leaf_name_data.push_back(advertise_afi_def_vrf_imp_disable.get_name_leafdata());
    if (advertise_afi_disable.is_set || is_set(advertise_afi_disable.operation)) leaf_name_data.push_back(advertise_afi_disable.get_name_leafdata());
    if (advertise_afi_eo_r_ready.is_set || is_set(advertise_afi_eo_r_ready.operation)) leaf_name_data.push_back(advertise_afi_eo_r_ready.get_name_leafdata());
    if (advertise_afi_reorg.is_set || is_set(advertise_afi_reorg.operation)) leaf_name_data.push_back(advertise_afi_reorg.get_name_leafdata());
    if (advertise_afi_vrf_re_imp_disable.is_set || is_set(advertise_afi_vrf_re_imp_disable.operation)) leaf_name_data.push_back(advertise_afi_vrf_re_imp_disable.get_name_leafdata());
    if (advertise_evp_nv4afi_def_vrf_imp_disable.is_set || is_set(advertise_evp_nv4afi_def_vrf_imp_disable.operation)) leaf_name_data.push_back(advertise_evp_nv4afi_def_vrf_imp_disable.get_name_leafdata());
    if (advertise_evp_nv4afi_vrf_re_imp_disable.is_set || is_set(advertise_evp_nv4afi_vrf_re_imp_disable.operation)) leaf_name_data.push_back(advertise_evp_nv4afi_vrf_re_imp_disable.get_name_leafdata());
    if (advertise_evp_nv6afi_def_vrf_imp_disable.is_set || is_set(advertise_evp_nv6afi_def_vrf_imp_disable.operation)) leaf_name_data.push_back(advertise_evp_nv6afi_def_vrf_imp_disable.get_name_leafdata());
    if (advertise_evp_nv6afi_vrf_re_imp_disable.is_set || is_set(advertise_evp_nv6afi_vrf_re_imp_disable.operation)) leaf_name_data.push_back(advertise_evp_nv6afi_vrf_re_imp_disable.get_name_leafdata());
    if (advertise_local_labeled_route_unicast.is_set || is_set(advertise_local_labeled_route_unicast.operation)) leaf_name_data.push_back(advertise_local_labeled_route_unicast.get_name_leafdata());
    if (advertise_rt_type.is_set || is_set(advertise_rt_type.operation)) leaf_name_data.push_back(advertise_rt_type.get_name_leafdata());
    if (advertise_v4_flags.is_set || is_set(advertise_v4_flags.operation)) leaf_name_data.push_back(advertise_v4_flags.get_name_leafdata());
    if (advertise_v6_flags.is_set || is_set(advertise_v6_flags.operation)) leaf_name_data.push_back(advertise_v6_flags.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (afrpki_allow_invalid.is_set || is_set(afrpki_allow_invalid.operation)) leaf_name_data.push_back(afrpki_allow_invalid.get_name_leafdata());
    if (afrpki_disable.is_set || is_set(afrpki_disable.operation)) leaf_name_data.push_back(afrpki_disable.get_name_leafdata());
    if (afrpki_signal_ibgp.is_set || is_set(afrpki_signal_ibgp.operation)) leaf_name_data.push_back(afrpki_signal_ibgp.get_name_leafdata());
    if (afrpki_use_validity.is_set || is_set(afrpki_use_validity.operation)) leaf_name_data.push_back(afrpki_use_validity.get_name_leafdata());
    if (allow_as_in_count.is_set || is_set(allow_as_in_count.operation)) leaf_name_data.push_back(allow_as_in_count.get_name_leafdata());
    if (always_use_next_hop_local.is_set || is_set(always_use_next_hop_local.operation)) leaf_name_data.push_back(always_use_next_hop_local.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.operation)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (eo_r_received_in_read_only.is_set || is_set(eo_r_received_in_read_only.operation)) leaf_name_data.push_back(eo_r_received_in_read_only.get_name_leafdata());
    if (filter_group_index.is_set || is_set(filter_group_index.operation)) leaf_name_data.push_back(filter_group_index.get_name_leafdata());
    if (flowspec_redirect_validation_d_isable.is_set || is_set(flowspec_redirect_validation_d_isable.operation)) leaf_name_data.push_back(flowspec_redirect_validation_d_isable.get_name_leafdata());
    if (flowspec_validation_d_isable.is_set || is_set(flowspec_validation_d_isable.operation)) leaf_name_data.push_back(flowspec_validation_d_isable.get_name_leafdata());
    if (import_reoriginate.is_set || is_set(import_reoriginate.operation)) leaf_name_data.push_back(import_reoriginate.get_name_leafdata());
    if (import_reoriginate_stitching.is_set || is_set(import_reoriginate_stitching.operation)) leaf_name_data.push_back(import_reoriginate_stitching.get_name_leafdata());
    if (import_stitching.is_set || is_set(import_stitching.operation)) leaf_name_data.push_back(import_stitching.get_name_leafdata());
    if (is_add_path_receive_capability_advertised.is_set || is_set(is_add_path_receive_capability_advertised.operation)) leaf_name_data.push_back(is_add_path_receive_capability_advertised.get_name_leafdata());
    if (is_add_path_receive_capability_received.is_set || is_set(is_add_path_receive_capability_received.operation)) leaf_name_data.push_back(is_add_path_receive_capability_received.get_name_leafdata());
    if (is_add_path_send_capability_advertised.is_set || is_set(is_add_path_send_capability_advertised.operation)) leaf_name_data.push_back(is_add_path_send_capability_advertised.get_name_leafdata());
    if (is_add_path_send_capability_received.is_set || is_set(is_add_path_send_capability_received.operation)) leaf_name_data.push_back(is_add_path_send_capability_received.get_name_leafdata());
    if (is_addpath_receive_operational.is_set || is_set(is_addpath_receive_operational.operation)) leaf_name_data.push_back(is_addpath_receive_operational.get_name_leafdata());
    if (is_addpath_send_operational.is_set || is_set(is_addpath_send_operational.operation)) leaf_name_data.push_back(is_addpath_send_operational.get_name_leafdata());
    if (is_advertise_permanent_network.is_set || is_set(is_advertise_permanent_network.operation)) leaf_name_data.push_back(is_advertise_permanent_network.get_name_leafdata());
    if (is_advertised_graceful_restart.is_set || is_set(is_advertised_graceful_restart.operation)) leaf_name_data.push_back(is_advertised_graceful_restart.get_name_leafdata());
    if (is_advertised_orf_receive.is_set || is_set(is_advertised_orf_receive.operation)) leaf_name_data.push_back(is_advertised_orf_receive.get_name_leafdata());
    if (is_advertised_orf_send.is_set || is_set(is_advertised_orf_send.operation)) leaf_name_data.push_back(is_advertised_orf_send.get_name_leafdata());
    if (is_aigp_set.is_set || is_set(is_aigp_set.operation)) leaf_name_data.push_back(is_aigp_set.get_name_leafdata());
    if (is_allow_as_in_set.is_set || is_set(is_allow_as_in_set.operation)) leaf_name_data.push_back(is_allow_as_in_set.get_name_leafdata());
    if (is_as_override_set.is_set || is_set(is_as_override_set.operation)) leaf_name_data.push_back(is_as_override_set.get_name_leafdata());
    if (is_default_originate_sent.is_set || is_set(is_default_originate_sent.operation)) leaf_name_data.push_back(is_default_originate_sent.get_name_leafdata());
    if (is_ext_nh_encoding_capability_received.is_set || is_set(is_ext_nh_encoding_capability_received.operation)) leaf_name_data.push_back(is_ext_nh_encoding_capability_received.get_name_leafdata());
    if (is_ext_nh_encoding_capability_sent.is_set || is_set(is_ext_nh_encoding_capability_sent.operation)) leaf_name_data.push_back(is_ext_nh_encoding_capability_sent.get_name_leafdata());
    if (is_graceful_restart_state_flag.is_set || is_set(is_graceful_restart_state_flag.operation)) leaf_name_data.push_back(is_graceful_restart_state_flag.get_name_leafdata());
    if (is_legacy_pe_rt.is_set || is_set(is_legacy_pe_rt.operation)) leaf_name_data.push_back(is_legacy_pe_rt.get_name_leafdata());
    if (is_neighbor_af_capable.is_set || is_set(is_neighbor_af_capable.operation)) leaf_name_data.push_back(is_neighbor_af_capable.get_name_leafdata());
    if (is_neighbor_ebgp_without_inbound_policy.is_set || is_set(is_neighbor_ebgp_without_inbound_policy.operation)) leaf_name_data.push_back(is_neighbor_ebgp_without_inbound_policy.get_name_leafdata());
    if (is_neighbor_ebgp_without_outbound_policy.is_set || is_set(is_neighbor_ebgp_without_outbound_policy.operation)) leaf_name_data.push_back(is_neighbor_ebgp_without_outbound_policy.get_name_leafdata());
    if (is_neighbor_route_reflector_client.is_set || is_set(is_neighbor_route_reflector_client.operation)) leaf_name_data.push_back(is_neighbor_route_reflector_client.get_name_leafdata());
    if (is_orf_send_scheduled.is_set || is_set(is_orf_send_scheduled.operation)) leaf_name_data.push_back(is_orf_send_scheduled.get_name_leafdata());
    if (is_orf_sent.is_set || is_set(is_orf_sent.operation)) leaf_name_data.push_back(is_orf_sent.get_name_leafdata());
    if (is_orr_root_address_configured.is_set || is_set(is_orr_root_address_configured.operation)) leaf_name_data.push_back(is_orr_root_address_configured.get_name_leafdata());
    if (is_peer_orf_capable.is_set || is_set(is_peer_orf_capable.operation)) leaf_name_data.push_back(is_peer_orf_capable.get_name_leafdata());
    if (is_prefix_orf_present.is_set || is_set(is_prefix_orf_present.operation)) leaf_name_data.push_back(is_prefix_orf_present.get_name_leafdata());
    if (is_received_graceful_restart_capable.is_set || is_set(is_received_graceful_restart_capable.operation)) leaf_name_data.push_back(is_received_graceful_restart_capable.get_name_leafdata());
    if (is_received_orf_receive_capable.is_set || is_set(is_received_orf_receive_capable.operation)) leaf_name_data.push_back(is_received_orf_receive_capable.get_name_leafdata());
    if (is_received_orf_send_capable.is_set || is_set(is_received_orf_send_capable.operation)) leaf_name_data.push_back(is_received_orf_send_capable.get_name_leafdata());
    if (is_rt_present.is_set || is_set(is_rt_present.operation)) leaf_name_data.push_back(is_rt_present.get_name_leafdata());
    if (is_rt_present_standby.is_set || is_set(is_rt_present_standby.operation)) leaf_name_data.push_back(is_rt_present_standby.get_name_leafdata());
    if (is_send_mcast_attr.is_set || is_set(is_send_mcast_attr.operation)) leaf_name_data.push_back(is_send_mcast_attr.get_name_leafdata());
    if (is_soft_reconfiguration_inbound_allowed.is_set || is_set(is_soft_reconfiguration_inbound_allowed.operation)) leaf_name_data.push_back(is_soft_reconfiguration_inbound_allowed.get_name_leafdata());
    if (is_update_deferred.is_set || is_set(is_update_deferred.operation)) leaf_name_data.push_back(is_update_deferred.get_name_leafdata());
    if (is_update_leaving.is_set || is_set(is_update_leaving.operation)) leaf_name_data.push_back(is_update_leaving.get_name_leafdata());
    if (is_update_throttled.is_set || is_set(is_update_throttled.operation)) leaf_name_data.push_back(is_update_throttled.get_name_leafdata());
    if (is_use_soft_reconfiguration_always_on.is_set || is_set(is_use_soft_reconfiguration_always_on.operation)) leaf_name_data.push_back(is_use_soft_reconfiguration_always_on.get_name_leafdata());
    if (local_restart_time.is_set || is_set(local_restart_time.operation)) leaf_name_data.push_back(local_restart_time.get_name_leafdata());
    if (long_lived_graceful_restart_capability_received.is_set || is_set(long_lived_graceful_restart_capability_received.operation)) leaf_name_data.push_back(long_lived_graceful_restart_capability_received.get_name_leafdata());
    if (long_lived_graceful_restart_stale_time_accept.is_set || is_set(long_lived_graceful_restart_stale_time_accept.operation)) leaf_name_data.push_back(long_lived_graceful_restart_stale_time_accept.get_name_leafdata());
    if (long_lived_graceful_restart_stale_time_configured.is_set || is_set(long_lived_graceful_restart_stale_time_configured.operation)) leaf_name_data.push_back(long_lived_graceful_restart_stale_time_configured.get_name_leafdata());
    if (long_lived_graceful_restart_stale_time_received.is_set || is_set(long_lived_graceful_restart_stale_time_received.operation)) leaf_name_data.push_back(long_lived_graceful_restart_stale_time_received.get_name_leafdata());
    if (long_lived_graceful_restart_stale_time_sent.is_set || is_set(long_lived_graceful_restart_stale_time_sent.operation)) leaf_name_data.push_back(long_lived_graceful_restart_stale_time_sent.get_name_leafdata());
    if (max_prefix_discard_extra_paths.is_set || is_set(max_prefix_discard_extra_paths.operation)) leaf_name_data.push_back(max_prefix_discard_extra_paths.get_name_leafdata());
    if (max_prefix_exceed_discard_paths.is_set || is_set(max_prefix_exceed_discard_paths.operation)) leaf_name_data.push_back(max_prefix_exceed_discard_paths.get_name_leafdata());
    if (max_prefix_limit.is_set || is_set(max_prefix_limit.operation)) leaf_name_data.push_back(max_prefix_limit.get_name_leafdata());
    if (max_prefix_restart_time.is_set || is_set(max_prefix_restart_time.operation)) leaf_name_data.push_back(max_prefix_restart_time.get_name_leafdata());
    if (max_prefix_threshold_percent.is_set || is_set(max_prefix_threshold_percent.operation)) leaf_name_data.push_back(max_prefix_threshold_percent.get_name_leafdata());
    if (neighbor_default_originate.is_set || is_set(neighbor_default_originate.operation)) leaf_name_data.push_back(neighbor_default_originate.get_name_leafdata());
    if (neighbor_long_lived_graceful_restart_capable.is_set || is_set(neighbor_long_lived_graceful_restart_capable.operation)) leaf_name_data.push_back(neighbor_long_lived_graceful_restart_capable.get_name_leafdata());
    if (neighbor_long_lived_graceful_restart_time_remaining.is_set || is_set(neighbor_long_lived_graceful_restart_time_remaining.operation)) leaf_name_data.push_back(neighbor_long_lived_graceful_restart_time_remaining.get_name_leafdata());
    if (neighbor_preserved_forwarding_state.is_set || is_set(neighbor_preserved_forwarding_state.operation)) leaf_name_data.push_back(neighbor_preserved_forwarding_state.get_name_leafdata());
    if (neighbor_preserved_long_lived_forwarding_state.is_set || is_set(neighbor_preserved_long_lived_forwarding_state.operation)) leaf_name_data.push_back(neighbor_preserved_long_lived_forwarding_state.get_name_leafdata());
    if (neighbor_version.is_set || is_set(neighbor_version.operation)) leaf_name_data.push_back(neighbor_version.get_name_leafdata());
    if (number_of_best_externalpaths.is_set || is_set(number_of_best_externalpaths.operation)) leaf_name_data.push_back(number_of_best_externalpaths.get_name_leafdata());
    if (number_of_bestpaths.is_set || is_set(number_of_bestpaths.operation)) leaf_name_data.push_back(number_of_bestpaths.get_name_leafdata());
    if (orf_entries_received.is_set || is_set(orf_entries_received.operation)) leaf_name_data.push_back(orf_entries_received.get_name_leafdata());
    if (orr_group_index.is_set || is_set(orr_group_index.operation)) leaf_name_data.push_back(orr_group_index.get_name_leafdata());
    if (orr_group_name.is_set || is_set(orr_group_name.operation)) leaf_name_data.push_back(orr_group_name.get_name_leafdata());
    if (outstanding_version.is_set || is_set(outstanding_version.operation)) leaf_name_data.push_back(outstanding_version.get_name_leafdata());
    if (outstanding_version_max.is_set || is_set(outstanding_version_max.operation)) leaf_name_data.push_back(outstanding_version_max.get_name_leafdata());
    if (prefixes_accepted.is_set || is_set(prefixes_accepted.operation)) leaf_name_data.push_back(prefixes_accepted.get_name_leafdata());
    if (prefixes_advertised.is_set || is_set(prefixes_advertised.operation)) leaf_name_data.push_back(prefixes_advertised.get_name_leafdata());
    if (prefixes_be_advertised.is_set || is_set(prefixes_be_advertised.operation)) leaf_name_data.push_back(prefixes_be_advertised.get_name_leafdata());
    if (prefixes_denied.is_set || is_set(prefixes_denied.operation)) leaf_name_data.push_back(prefixes_denied.get_name_leafdata());
    if (prefixes_denied_no_policy.is_set || is_set(prefixes_denied_no_policy.operation)) leaf_name_data.push_back(prefixes_denied_no_policy.get_name_leafdata());
    if (prefixes_denied_non_cumulative.is_set || is_set(prefixes_denied_non_cumulative.operation)) leaf_name_data.push_back(prefixes_denied_non_cumulative.get_name_leafdata());
    if (prefixes_denied_orf_policy.is_set || is_set(prefixes_denied_orf_policy.operation)) leaf_name_data.push_back(prefixes_denied_orf_policy.get_name_leafdata());
    if (prefixes_denied_policy.is_set || is_set(prefixes_denied_policy.operation)) leaf_name_data.push_back(prefixes_denied_policy.get_name_leafdata());
    if (prefixes_denied_rt_permit.is_set || is_set(prefixes_denied_rt_permit.operation)) leaf_name_data.push_back(prefixes_denied_rt_permit.get_name_leafdata());
    if (prefixes_suppressed.is_set || is_set(prefixes_suppressed.operation)) leaf_name_data.push_back(prefixes_suppressed.get_name_leafdata());
    if (prefixes_synced.is_set || is_set(prefixes_synced.operation)) leaf_name_data.push_back(prefixes_synced.get_name_leafdata());
    if (prefixes_withdrawn.is_set || is_set(prefixes_withdrawn.operation)) leaf_name_data.push_back(prefixes_withdrawn.get_name_leafdata());
    if (prefixes_withdrawn_not_found.is_set || is_set(prefixes_withdrawn_not_found.operation)) leaf_name_data.push_back(prefixes_withdrawn_not_found.get_name_leafdata());
    if (refresh_acked_version.is_set || is_set(refresh_acked_version.operation)) leaf_name_data.push_back(refresh_acked_version.get_name_leafdata());
    if (refresh_target_version.is_set || is_set(refresh_target_version.operation)) leaf_name_data.push_back(refresh_target_version.get_name_leafdata());
    if (refresh_version.is_set || is_set(refresh_version.operation)) leaf_name_data.push_back(refresh_version.get_name_leafdata());
    if (remove_private_as_entire_aspath_from_inbound_updates.is_set || is_set(remove_private_as_entire_aspath_from_inbound_updates.operation)) leaf_name_data.push_back(remove_private_as_entire_aspath_from_inbound_updates.get_name_leafdata());
    if (remove_private_as_entire_aspath_from_updates.is_set || is_set(remove_private_as_entire_aspath_from_updates.operation)) leaf_name_data.push_back(remove_private_as_entire_aspath_from_updates.get_name_leafdata());
    if (remove_private_as_from_inbound_updates.is_set || is_set(remove_private_as_from_inbound_updates.operation)) leaf_name_data.push_back(remove_private_as_from_inbound_updates.get_name_leafdata());
    if (remove_private_as_from_updates.is_set || is_set(remove_private_as_from_updates.operation)) leaf_name_data.push_back(remove_private_as_from_updates.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.operation)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (rib_purge_timeout_value.is_set || is_set(rib_purge_timeout_value.operation)) leaf_name_data.push_back(rib_purge_timeout_value.get_name_leafdata());
    if (route_policy_default_originate.is_set || is_set(route_policy_default_originate.operation)) leaf_name_data.push_back(route_policy_default_originate.get_name_leafdata());
    if (route_policy_in.is_set || is_set(route_policy_in.operation)) leaf_name_data.push_back(route_policy_in.get_name_leafdata());
    if (route_policy_out.is_set || is_set(route_policy_out.operation)) leaf_name_data.push_back(route_policy_out.get_name_leafdata());
    if (route_policy_prefix_orf.is_set || is_set(route_policy_prefix_orf.operation)) leaf_name_data.push_back(route_policy_prefix_orf.get_name_leafdata());
    if (route_refreshes_received.is_set || is_set(route_refreshes_received.operation)) leaf_name_data.push_back(route_refreshes_received.get_name_leafdata());
    if (route_refreshes_sent.is_set || is_set(route_refreshes_sent.operation)) leaf_name_data.push_back(route_refreshes_sent.get_name_leafdata());
    if (selective_multipath_eligible.is_set || is_set(selective_multipath_eligible.operation)) leaf_name_data.push_back(selective_multipath_eligible.get_name_leafdata());
    if (sent_community_to_neighbor.is_set || is_set(sent_community_to_neighbor.operation)) leaf_name_data.push_back(sent_community_to_neighbor.get_name_leafdata());
    if (sent_extended_community_to_neighbor.is_set || is_set(sent_extended_community_to_neighbor.operation)) leaf_name_data.push_back(sent_extended_community_to_neighbor.get_name_leafdata());
    if (sent_gshut_community_to_neighbor.is_set || is_set(sent_gshut_community_to_neighbor.operation)) leaf_name_data.push_back(sent_gshut_community_to_neighbor.get_name_leafdata());
    if (stale_path_timeout.is_set || is_set(stale_path_timeout.operation)) leaf_name_data.push_back(stale_path_timeout.get_name_leafdata());
    if (synced_acked_version.is_set || is_set(synced_acked_version.operation)) leaf_name_data.push_back(synced_acked_version.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.operation)) leaf_name_data.push_back(update_group_number.get_name_leafdata());
    if (use_max_prefix_warning_only.is_set || is_set(use_max_prefix_warning_only.operation)) leaf_name_data.push_back(use_max_prefix_warning_only.get_name_leafdata());
    if (vpn_update_gen_enabled.is_set || is_set(vpn_update_gen_enabled.operation)) leaf_name_data.push_back(vpn_update_gen_enabled.get_name_leafdata());
    if (vpn_update_gen_trigger_enabled.is_set || is_set(vpn_update_gen_trigger_enabled.operation)) leaf_name_data.push_back(vpn_update_gen_trigger_enabled.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-community")
    {
        for(auto const & c : extended_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::ExtendedCommunity>();
        c->parent = this;
        extended_community.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-community-standby")
    {
        for(auto const & c : extended_community_standby)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::ExtendedCommunityStandby>();
        c->parent = this;
        extended_community_standby.push_back(c);
        return c;
    }

    if(child_yang_name == "neighbor-af-performance-statistics")
    {
        if(neighbor_af_performance_statistics == nullptr)
        {
            neighbor_af_performance_statistics = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::NeighborAfPerformanceStatistics>();
        }
        return neighbor_af_performance_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : extended_community)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_community_standby)
    {
        children[c->get_segment_path()] = c;
    }

    if(neighbor_af_performance_statistics != nullptr)
    {
        children["neighbor-af-performance-statistics"] = neighbor_af_performance_statistics;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-own-enabled")
    {
        accept_own_enabled = value;
    }
    if(value_path == "acked-version")
    {
        acked_version = value;
    }
    if(value_path == "address-family-long-lived-time")
    {
        address_family_long_lived_time = value;
    }
    if(value_path == "advertise-afi")
    {
        advertise_afi = value;
    }
    if(value_path == "advertise-afi-def-vrf-imp-disable")
    {
        advertise_afi_def_vrf_imp_disable = value;
    }
    if(value_path == "advertise-afi-disable")
    {
        advertise_afi_disable = value;
    }
    if(value_path == "advertise-afi-eo-r-ready")
    {
        advertise_afi_eo_r_ready = value;
    }
    if(value_path == "advertise-afi-reorg")
    {
        advertise_afi_reorg = value;
    }
    if(value_path == "advertise-afi-vrf-re-imp-disable")
    {
        advertise_afi_vrf_re_imp_disable = value;
    }
    if(value_path == "advertise-evp-nv4afi-def-vrf-imp-disable")
    {
        advertise_evp_nv4afi_def_vrf_imp_disable = value;
    }
    if(value_path == "advertise-evp-nv4afi-vrf-re-imp-disable")
    {
        advertise_evp_nv4afi_vrf_re_imp_disable = value;
    }
    if(value_path == "advertise-evp-nv6afi-def-vrf-imp-disable")
    {
        advertise_evp_nv6afi_def_vrf_imp_disable = value;
    }
    if(value_path == "advertise-evp-nv6afi-vrf-re-imp-disable")
    {
        advertise_evp_nv6afi_vrf_re_imp_disable = value;
    }
    if(value_path == "advertise-local-labeled-route-unicast")
    {
        advertise_local_labeled_route_unicast = value;
    }
    if(value_path == "advertise-rt-type")
    {
        advertise_rt_type = value;
    }
    if(value_path == "advertise-v4-flags")
    {
        advertise_v4_flags = value;
    }
    if(value_path == "advertise-v6-flags")
    {
        advertise_v6_flags = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "afrpki-allow-invalid")
    {
        afrpki_allow_invalid = value;
    }
    if(value_path == "afrpki-disable")
    {
        afrpki_disable = value;
    }
    if(value_path == "afrpki-signal-ibgp")
    {
        afrpki_signal_ibgp = value;
    }
    if(value_path == "afrpki-use-validity")
    {
        afrpki_use_validity = value;
    }
    if(value_path == "allow-as-in-count")
    {
        allow_as_in_count = value;
    }
    if(value_path == "always-use-next-hop-local")
    {
        always_use_next_hop_local = value;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
    }
    if(value_path == "eo-r-received-in-read-only")
    {
        eo_r_received_in_read_only = value;
    }
    if(value_path == "filter-group-index")
    {
        filter_group_index = value;
    }
    if(value_path == "flowspec-redirect-validation-d-isable")
    {
        flowspec_redirect_validation_d_isable = value;
    }
    if(value_path == "flowspec-validation-d-isable")
    {
        flowspec_validation_d_isable = value;
    }
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
    if(value_path == "is-add-path-receive-capability-advertised")
    {
        is_add_path_receive_capability_advertised = value;
    }
    if(value_path == "is-add-path-receive-capability-received")
    {
        is_add_path_receive_capability_received = value;
    }
    if(value_path == "is-add-path-send-capability-advertised")
    {
        is_add_path_send_capability_advertised = value;
    }
    if(value_path == "is-add-path-send-capability-received")
    {
        is_add_path_send_capability_received = value;
    }
    if(value_path == "is-addpath-receive-operational")
    {
        is_addpath_receive_operational = value;
    }
    if(value_path == "is-addpath-send-operational")
    {
        is_addpath_send_operational = value;
    }
    if(value_path == "is-advertise-permanent-network")
    {
        is_advertise_permanent_network = value;
    }
    if(value_path == "is-advertised-graceful-restart")
    {
        is_advertised_graceful_restart = value;
    }
    if(value_path == "is-advertised-orf-receive")
    {
        is_advertised_orf_receive = value;
    }
    if(value_path == "is-advertised-orf-send")
    {
        is_advertised_orf_send = value;
    }
    if(value_path == "is-aigp-set")
    {
        is_aigp_set = value;
    }
    if(value_path == "is-allow-as-in-set")
    {
        is_allow_as_in_set = value;
    }
    if(value_path == "is-as-override-set")
    {
        is_as_override_set = value;
    }
    if(value_path == "is-default-originate-sent")
    {
        is_default_originate_sent = value;
    }
    if(value_path == "is-ext-nh-encoding-capability-received")
    {
        is_ext_nh_encoding_capability_received = value;
    }
    if(value_path == "is-ext-nh-encoding-capability-sent")
    {
        is_ext_nh_encoding_capability_sent = value;
    }
    if(value_path == "is-graceful-restart-state-flag")
    {
        is_graceful_restart_state_flag = value;
    }
    if(value_path == "is-legacy-pe-rt")
    {
        is_legacy_pe_rt = value;
    }
    if(value_path == "is-neighbor-af-capable")
    {
        is_neighbor_af_capable = value;
    }
    if(value_path == "is-neighbor-ebgp-without-inbound-policy")
    {
        is_neighbor_ebgp_without_inbound_policy = value;
    }
    if(value_path == "is-neighbor-ebgp-without-outbound-policy")
    {
        is_neighbor_ebgp_without_outbound_policy = value;
    }
    if(value_path == "is-neighbor-route-reflector-client")
    {
        is_neighbor_route_reflector_client = value;
    }
    if(value_path == "is-orf-send-scheduled")
    {
        is_orf_send_scheduled = value;
    }
    if(value_path == "is-orf-sent")
    {
        is_orf_sent = value;
    }
    if(value_path == "is-orr-root-address-configured")
    {
        is_orr_root_address_configured = value;
    }
    if(value_path == "is-peer-orf-capable")
    {
        is_peer_orf_capable = value;
    }
    if(value_path == "is-prefix-orf-present")
    {
        is_prefix_orf_present = value;
    }
    if(value_path == "is-received-graceful-restart-capable")
    {
        is_received_graceful_restart_capable = value;
    }
    if(value_path == "is-received-orf-receive-capable")
    {
        is_received_orf_receive_capable = value;
    }
    if(value_path == "is-received-orf-send-capable")
    {
        is_received_orf_send_capable = value;
    }
    if(value_path == "is-rt-present")
    {
        is_rt_present = value;
    }
    if(value_path == "is-rt-present-standby")
    {
        is_rt_present_standby = value;
    }
    if(value_path == "is-send-mcast-attr")
    {
        is_send_mcast_attr = value;
    }
    if(value_path == "is-soft-reconfiguration-inbound-allowed")
    {
        is_soft_reconfiguration_inbound_allowed = value;
    }
    if(value_path == "is-update-deferred")
    {
        is_update_deferred = value;
    }
    if(value_path == "is-update-leaving")
    {
        is_update_leaving = value;
    }
    if(value_path == "is-update-throttled")
    {
        is_update_throttled = value;
    }
    if(value_path == "is-use-soft-reconfiguration-always-on")
    {
        is_use_soft_reconfiguration_always_on = value;
    }
    if(value_path == "local-restart-time")
    {
        local_restart_time = value;
    }
    if(value_path == "long-lived-graceful-restart-capability-received")
    {
        long_lived_graceful_restart_capability_received = value;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-accept")
    {
        long_lived_graceful_restart_stale_time_accept = value;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-configured")
    {
        long_lived_graceful_restart_stale_time_configured = value;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-received")
    {
        long_lived_graceful_restart_stale_time_received = value;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-sent")
    {
        long_lived_graceful_restart_stale_time_sent = value;
    }
    if(value_path == "max-prefix-discard-extra-paths")
    {
        max_prefix_discard_extra_paths = value;
    }
    if(value_path == "max-prefix-exceed-discard-paths")
    {
        max_prefix_exceed_discard_paths = value;
    }
    if(value_path == "max-prefix-limit")
    {
        max_prefix_limit = value;
    }
    if(value_path == "max-prefix-restart-time")
    {
        max_prefix_restart_time = value;
    }
    if(value_path == "max-prefix-threshold-percent")
    {
        max_prefix_threshold_percent = value;
    }
    if(value_path == "neighbor-default-originate")
    {
        neighbor_default_originate = value;
    }
    if(value_path == "neighbor-long-lived-graceful-restart-capable")
    {
        neighbor_long_lived_graceful_restart_capable = value;
    }
    if(value_path == "neighbor-long-lived-graceful-restart-time-remaining")
    {
        neighbor_long_lived_graceful_restart_time_remaining = value;
    }
    if(value_path == "neighbor-preserved-forwarding-state")
    {
        neighbor_preserved_forwarding_state = value;
    }
    if(value_path == "neighbor-preserved-long-lived-forwarding-state")
    {
        neighbor_preserved_long_lived_forwarding_state = value;
    }
    if(value_path == "neighbor-version")
    {
        neighbor_version = value;
    }
    if(value_path == "number-of-best-externalpaths")
    {
        number_of_best_externalpaths = value;
    }
    if(value_path == "number-of-bestpaths")
    {
        number_of_bestpaths = value;
    }
    if(value_path == "orf-entries-received")
    {
        orf_entries_received = value;
    }
    if(value_path == "orr-group-index")
    {
        orr_group_index = value;
    }
    if(value_path == "orr-group-name")
    {
        orr_group_name = value;
    }
    if(value_path == "outstanding-version")
    {
        outstanding_version = value;
    }
    if(value_path == "outstanding-version-max")
    {
        outstanding_version_max = value;
    }
    if(value_path == "prefixes-accepted")
    {
        prefixes_accepted = value;
    }
    if(value_path == "prefixes-advertised")
    {
        prefixes_advertised = value;
    }
    if(value_path == "prefixes-be-advertised")
    {
        prefixes_be_advertised = value;
    }
    if(value_path == "prefixes-denied")
    {
        prefixes_denied = value;
    }
    if(value_path == "prefixes-denied-no-policy")
    {
        prefixes_denied_no_policy = value;
    }
    if(value_path == "prefixes-denied-non-cumulative")
    {
        prefixes_denied_non_cumulative = value;
    }
    if(value_path == "prefixes-denied-orf-policy")
    {
        prefixes_denied_orf_policy = value;
    }
    if(value_path == "prefixes-denied-policy")
    {
        prefixes_denied_policy = value;
    }
    if(value_path == "prefixes-denied-rt-permit")
    {
        prefixes_denied_rt_permit = value;
    }
    if(value_path == "prefixes-suppressed")
    {
        prefixes_suppressed = value;
    }
    if(value_path == "prefixes-synced")
    {
        prefixes_synced = value;
    }
    if(value_path == "prefixes-withdrawn")
    {
        prefixes_withdrawn = value;
    }
    if(value_path == "prefixes-withdrawn-not-found")
    {
        prefixes_withdrawn_not_found = value;
    }
    if(value_path == "refresh-acked-version")
    {
        refresh_acked_version = value;
    }
    if(value_path == "refresh-target-version")
    {
        refresh_target_version = value;
    }
    if(value_path == "refresh-version")
    {
        refresh_version = value;
    }
    if(value_path == "remove-private-as-entire-aspath-from-inbound-updates")
    {
        remove_private_as_entire_aspath_from_inbound_updates = value;
    }
    if(value_path == "remove-private-as-entire-aspath-from-updates")
    {
        remove_private_as_entire_aspath_from_updates = value;
    }
    if(value_path == "remove-private-as-from-inbound-updates")
    {
        remove_private_as_from_inbound_updates = value;
    }
    if(value_path == "remove-private-as-from-updates")
    {
        remove_private_as_from_updates = value;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
    }
    if(value_path == "rib-purge-timeout-value")
    {
        rib_purge_timeout_value = value;
    }
    if(value_path == "route-policy-default-originate")
    {
        route_policy_default_originate = value;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in = value;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out = value;
    }
    if(value_path == "route-policy-prefix-orf")
    {
        route_policy_prefix_orf = value;
    }
    if(value_path == "route-refreshes-received")
    {
        route_refreshes_received = value;
    }
    if(value_path == "route-refreshes-sent")
    {
        route_refreshes_sent = value;
    }
    if(value_path == "selective-multipath-eligible")
    {
        selective_multipath_eligible = value;
    }
    if(value_path == "sent-community-to-neighbor")
    {
        sent_community_to_neighbor = value;
    }
    if(value_path == "sent-extended-community-to-neighbor")
    {
        sent_extended_community_to_neighbor = value;
    }
    if(value_path == "sent-gshut-community-to-neighbor")
    {
        sent_gshut_community_to_neighbor = value;
    }
    if(value_path == "stale-path-timeout")
    {
        stale_path_timeout = value;
    }
    if(value_path == "synced-acked-version")
    {
        synced_acked_version = value;
    }
    if(value_path == "update-group-number")
    {
        update_group_number = value;
    }
    if(value_path == "use-max-prefix-warning-only")
    {
        use_max_prefix_warning_only = value;
    }
    if(value_path == "vpn-update-gen-enabled")
    {
        vpn_update_gen_enabled = value;
    }
    if(value_path == "vpn-update-gen-trigger-enabled")
    {
        vpn_update_gen_trigger_enabled = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::NeighborAfPerformanceStatistics::NeighborAfPerformanceStatistics()
    :
    processed_messages{YType::uint32, "processed-messages"},
    sent_messages{YType::uint32, "sent-messages"},
    split_horizon_update_blocked{YType::uint32, "split-horizon-update-blocked"},
    split_horizon_update_transmit{YType::uint32, "split-horizon-update-transmit"},
    split_horizon_withdraw_blocked{YType::uint32, "split-horizon-withdraw-blocked"},
    split_horizon_withdraw_transmit{YType::uint32, "split-horizon-withdraw-transmit"},
    sub_group_pending_message_count{YType::uint32, "sub-group-pending-message-count"}
{
    yang_name = "neighbor-af-performance-statistics"; yang_parent_name = "af-data";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::NeighborAfPerformanceStatistics::~NeighborAfPerformanceStatistics()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::NeighborAfPerformanceStatistics::has_data() const
{
    return processed_messages.is_set
	|| sent_messages.is_set
	|| split_horizon_update_blocked.is_set
	|| split_horizon_update_transmit.is_set
	|| split_horizon_withdraw_blocked.is_set
	|| split_horizon_withdraw_transmit.is_set
	|| sub_group_pending_message_count.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::NeighborAfPerformanceStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_messages.operation)
	|| is_set(sent_messages.operation)
	|| is_set(split_horizon_update_blocked.operation)
	|| is_set(split_horizon_update_transmit.operation)
	|| is_set(split_horizon_withdraw_blocked.operation)
	|| is_set(split_horizon_withdraw_transmit.operation)
	|| is_set(sub_group_pending_message_count.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::NeighborAfPerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af-performance-statistics";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::NeighborAfPerformanceStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAfPerformanceStatistics' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_messages.is_set || is_set(processed_messages.operation)) leaf_name_data.push_back(processed_messages.get_name_leafdata());
    if (sent_messages.is_set || is_set(sent_messages.operation)) leaf_name_data.push_back(sent_messages.get_name_leafdata());
    if (split_horizon_update_blocked.is_set || is_set(split_horizon_update_blocked.operation)) leaf_name_data.push_back(split_horizon_update_blocked.get_name_leafdata());
    if (split_horizon_update_transmit.is_set || is_set(split_horizon_update_transmit.operation)) leaf_name_data.push_back(split_horizon_update_transmit.get_name_leafdata());
    if (split_horizon_withdraw_blocked.is_set || is_set(split_horizon_withdraw_blocked.operation)) leaf_name_data.push_back(split_horizon_withdraw_blocked.get_name_leafdata());
    if (split_horizon_withdraw_transmit.is_set || is_set(split_horizon_withdraw_transmit.operation)) leaf_name_data.push_back(split_horizon_withdraw_transmit.get_name_leafdata());
    if (sub_group_pending_message_count.is_set || is_set(sub_group_pending_message_count.operation)) leaf_name_data.push_back(sub_group_pending_message_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::NeighborAfPerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::NeighborAfPerformanceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::NeighborAfPerformanceStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-messages")
    {
        processed_messages = value;
    }
    if(value_path == "sent-messages")
    {
        sent_messages = value;
    }
    if(value_path == "split-horizon-update-blocked")
    {
        split_horizon_update_blocked = value;
    }
    if(value_path == "split-horizon-update-transmit")
    {
        split_horizon_update_transmit = value;
    }
    if(value_path == "split-horizon-withdraw-blocked")
    {
        split_horizon_withdraw_blocked = value;
    }
    if(value_path == "split-horizon-withdraw-transmit")
    {
        split_horizon_withdraw_transmit = value;
    }
    if(value_path == "sub-group-pending-message-count")
    {
        sub_group_pending_message_count = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "extended-community"; yang_parent_name = "af-data";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::ExtendedCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::ExtendedCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedCommunity' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::ExtendedCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::ExtendedCommunityStandby::ExtendedCommunityStandby()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "extended-community-standby"; yang_parent_name = "af-data";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::ExtendedCommunityStandby::~ExtendedCommunityStandby()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::ExtendedCommunityStandby::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::ExtendedCommunityStandby::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::ExtendedCommunityStandby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-standby";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::ExtendedCommunityStandby::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedCommunityStandby' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::ExtendedCommunityStandby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::ExtendedCommunityStandby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData::ExtendedCommunityStandby::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRds()
{
    yang_name = "network-all-rds"; yang_parent_name = "af";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::~NetworkAllRds()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::has_data() const
{
    for (std::size_t index=0; index<network_all_rd.size(); index++)
    {
        if(network_all_rd[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::has_operation() const
{
    for (std::size_t index=0; index<network_all_rd.size(); index++)
    {
        if(network_all_rd[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-all-rds";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkAllRds' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-all-rd")
    {
        for(auto const & c : network_all_rd)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd>();
        c->parent = this;
        network_all_rd.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : network_all_rd)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkAllRd()
    :
    network_addr{YType::str, "network-addr"},
    network_prefix{YType::uint16, "network-prefix"}
    	,
    network_rds(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds>())
{
    network_rds->parent = this;

    yang_name = "network-all-rd"; yang_parent_name = "network-all-rds";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::~NetworkAllRd()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::has_data() const
{
    return network_addr.is_set
	|| network_prefix.is_set
	|| (network_rds !=  nullptr && network_rds->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::has_operation() const
{
    return is_set(operation)
	|| is_set(network_addr.operation)
	|| is_set(network_prefix.operation)
	|| (network_rds !=  nullptr && network_rds->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-all-rd" <<"[network-addr='" <<network_addr <<"']" <<"[network-prefix='" <<network_prefix <<"']";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkAllRd' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_addr.is_set || is_set(network_addr.operation)) leaf_name_data.push_back(network_addr.get_name_leafdata());
    if (network_prefix.is_set || is_set(network_prefix.operation)) leaf_name_data.push_back(network_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-rds")
    {
        if(network_rds == nullptr)
        {
            network_rds = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds>();
        }
        return network_rds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(network_rds != nullptr)
    {
        children["network-rds"] = network_rds;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "network-addr")
    {
        network_addr = value;
    }
    if(value_path == "network-prefix")
    {
        network_prefix = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRds()
{
    yang_name = "network-rds"; yang_parent_name = "network-all-rd";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::~NetworkRds()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::has_data() const
{
    for (std::size_t index=0; index<network_rd.size(); index++)
    {
        if(network_rd[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::has_operation() const
{
    for (std::size_t index=0; index<network_rd.size(); index++)
    {
        if(network_rd[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-rds";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkRds' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-rd")
    {
        for(auto const & c : network_rd)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd>();
        c->parent = this;
        network_rd.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : network_rd)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::NetworkRd()
    :
    rd{YType::str, "rd"},
    advertisedto_pe{YType::boolean, "advertisedto-pe"},
    af_name{YType::enumeration, "af-name"},
    bit{YType::uint16, "bit"},
    flags{YType::uint8, "flags"},
    gateway_array{YType::uint32, "gateway-array"},
    has_inconsistent_paths{YType::boolean, "has-inconsistent-paths"},
    has_lbl_retained{YType::boolean, "has-lbl-retained"},
    has_local_label{YType::boolean, "has-local-label"},
    is_net_aggregation_suppressed{YType::boolean, "is-net-aggregation-suppressed"},
    is_net_ldp_signaled{YType::boolean, "is-net-ldp-signaled"},
    is_permanent_network{YType::boolean, "is-permanent-network"},
    net_backup_available{YType::boolean, "net-backup-available"},
    net_backup_label_rewrite_available{YType::boolean, "net-backup-label-rewrite-available"},
    net_eibgp_multipath{YType::boolean, "net-eibgp-multipath"},
    net_extended_flags{YType::uint32, "net-extended-flags"},
    net_flags{YType::uint32, "net-flags"},
    net_local_label{YType::uint32, "net-local-label"},
    net_local_label_rewrite{YType::boolean, "net-local-label-rewrite"},
    net_local_label_srgb{YType::boolean, "net-local-label-srgb"},
    net_multipath{YType::boolean, "net-multipath"},
    num_of_path{YType::uint32, "num-of-path"},
    process_instance_id{YType::uint8, "process-instance-id"},
    resilient_nexthop_set{YType::uint32, "resilient-nexthop-set"},
    rib_failed{YType::boolean, "rib-failed"},
    route_distinguisher{YType::str, "route-distinguisher"},
    table_brib_version{YType::uint32, "table-brib-version"},
    table_version{YType::uint32, "table-version"},
    version{YType::uint32, "version"},
    vrf_name{YType::str, "vrf-name"}
    	,
    bgp_prefix(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix>())
	,version_age(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionAge>())
	,version_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionTimestamp>())
{
    bgp_prefix->parent = this;

    version_age->parent = this;

    version_timestamp->parent = this;

    yang_name = "network-rd"; yang_parent_name = "network-rds";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::~NetworkRd()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::has_data() const
{
    for (std::size_t index=0; index<active_path_element.size(); index++)
    {
        if(active_path_element[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<active_process_instance_path.size(); index++)
    {
        if(active_process_instance_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<add_path_orr_bitfield.size(); index++)
    {
        if(add_path_orr_bitfield[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<best_path_orr_bitfield.size(); index++)
    {
        if(best_path_orr_bitfield[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<local_path_element.size(); index++)
    {
        if(local_path_element[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<local_peers_advertised_to.size(); index++)
    {
        if(local_peers_advertised_to[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<local_process_instance_path.size(); index++)
    {
        if(local_process_instance_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pe_peers_advertised_to.size(); index++)
    {
        if(pe_peers_advertised_to[index]->has_data())
            return true;
    }
    return rd.is_set
	|| advertisedto_pe.is_set
	|| af_name.is_set
	|| bit.is_set
	|| flags.is_set
	|| gateway_array.is_set
	|| has_inconsistent_paths.is_set
	|| has_lbl_retained.is_set
	|| has_local_label.is_set
	|| is_net_aggregation_suppressed.is_set
	|| is_net_ldp_signaled.is_set
	|| is_permanent_network.is_set
	|| net_backup_available.is_set
	|| net_backup_label_rewrite_available.is_set
	|| net_eibgp_multipath.is_set
	|| net_extended_flags.is_set
	|| net_flags.is_set
	|| net_local_label.is_set
	|| net_local_label_rewrite.is_set
	|| net_local_label_srgb.is_set
	|| net_multipath.is_set
	|| num_of_path.is_set
	|| process_instance_id.is_set
	|| resilient_nexthop_set.is_set
	|| rib_failed.is_set
	|| route_distinguisher.is_set
	|| table_brib_version.is_set
	|| table_version.is_set
	|| version.is_set
	|| vrf_name.is_set
	|| (bgp_prefix !=  nullptr && bgp_prefix->has_data())
	|| (version_age !=  nullptr && version_age->has_data())
	|| (version_timestamp !=  nullptr && version_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::has_operation() const
{
    for (std::size_t index=0; index<active_path_element.size(); index++)
    {
        if(active_path_element[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<active_process_instance_path.size(); index++)
    {
        if(active_process_instance_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<add_path_orr_bitfield.size(); index++)
    {
        if(add_path_orr_bitfield[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<best_path_orr_bitfield.size(); index++)
    {
        if(best_path_orr_bitfield[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<local_path_element.size(); index++)
    {
        if(local_path_element[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<local_peers_advertised_to.size(); index++)
    {
        if(local_peers_advertised_to[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<local_process_instance_path.size(); index++)
    {
        if(local_process_instance_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pe_peers_advertised_to.size(); index++)
    {
        if(pe_peers_advertised_to[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(rd.operation)
	|| is_set(advertisedto_pe.operation)
	|| is_set(af_name.operation)
	|| is_set(bit.operation)
	|| is_set(flags.operation)
	|| is_set(gateway_array.operation)
	|| is_set(has_inconsistent_paths.operation)
	|| is_set(has_lbl_retained.operation)
	|| is_set(has_local_label.operation)
	|| is_set(is_net_aggregation_suppressed.operation)
	|| is_set(is_net_ldp_signaled.operation)
	|| is_set(is_permanent_network.operation)
	|| is_set(net_backup_available.operation)
	|| is_set(net_backup_label_rewrite_available.operation)
	|| is_set(net_eibgp_multipath.operation)
	|| is_set(net_extended_flags.operation)
	|| is_set(net_flags.operation)
	|| is_set(net_local_label.operation)
	|| is_set(net_local_label_rewrite.operation)
	|| is_set(net_local_label_srgb.operation)
	|| is_set(net_multipath.operation)
	|| is_set(num_of_path.operation)
	|| is_set(process_instance_id.operation)
	|| is_set(resilient_nexthop_set.operation)
	|| is_set(rib_failed.operation)
	|| is_set(route_distinguisher.operation)
	|| is_set(table_brib_version.operation)
	|| is_set(table_version.operation)
	|| is_set(version.operation)
	|| is_set(vrf_name.operation)
	|| (bgp_prefix !=  nullptr && bgp_prefix->has_operation())
	|| (version_age !=  nullptr && version_age->has_operation())
	|| (version_timestamp !=  nullptr && version_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-rd" <<"[rd='" <<rd <<"']";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkRd' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (advertisedto_pe.is_set || is_set(advertisedto_pe.operation)) leaf_name_data.push_back(advertisedto_pe.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (bit.is_set || is_set(bit.operation)) leaf_name_data.push_back(bit.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (gateway_array.is_set || is_set(gateway_array.operation)) leaf_name_data.push_back(gateway_array.get_name_leafdata());
    if (has_inconsistent_paths.is_set || is_set(has_inconsistent_paths.operation)) leaf_name_data.push_back(has_inconsistent_paths.get_name_leafdata());
    if (has_lbl_retained.is_set || is_set(has_lbl_retained.operation)) leaf_name_data.push_back(has_lbl_retained.get_name_leafdata());
    if (has_local_label.is_set || is_set(has_local_label.operation)) leaf_name_data.push_back(has_local_label.get_name_leafdata());
    if (is_net_aggregation_suppressed.is_set || is_set(is_net_aggregation_suppressed.operation)) leaf_name_data.push_back(is_net_aggregation_suppressed.get_name_leafdata());
    if (is_net_ldp_signaled.is_set || is_set(is_net_ldp_signaled.operation)) leaf_name_data.push_back(is_net_ldp_signaled.get_name_leafdata());
    if (is_permanent_network.is_set || is_set(is_permanent_network.operation)) leaf_name_data.push_back(is_permanent_network.get_name_leafdata());
    if (net_backup_available.is_set || is_set(net_backup_available.operation)) leaf_name_data.push_back(net_backup_available.get_name_leafdata());
    if (net_backup_label_rewrite_available.is_set || is_set(net_backup_label_rewrite_available.operation)) leaf_name_data.push_back(net_backup_label_rewrite_available.get_name_leafdata());
    if (net_eibgp_multipath.is_set || is_set(net_eibgp_multipath.operation)) leaf_name_data.push_back(net_eibgp_multipath.get_name_leafdata());
    if (net_extended_flags.is_set || is_set(net_extended_flags.operation)) leaf_name_data.push_back(net_extended_flags.get_name_leafdata());
    if (net_flags.is_set || is_set(net_flags.operation)) leaf_name_data.push_back(net_flags.get_name_leafdata());
    if (net_local_label.is_set || is_set(net_local_label.operation)) leaf_name_data.push_back(net_local_label.get_name_leafdata());
    if (net_local_label_rewrite.is_set || is_set(net_local_label_rewrite.operation)) leaf_name_data.push_back(net_local_label_rewrite.get_name_leafdata());
    if (net_local_label_srgb.is_set || is_set(net_local_label_srgb.operation)) leaf_name_data.push_back(net_local_label_srgb.get_name_leafdata());
    if (net_multipath.is_set || is_set(net_multipath.operation)) leaf_name_data.push_back(net_multipath.get_name_leafdata());
    if (num_of_path.is_set || is_set(num_of_path.operation)) leaf_name_data.push_back(num_of_path.get_name_leafdata());
    if (process_instance_id.is_set || is_set(process_instance_id.operation)) leaf_name_data.push_back(process_instance_id.get_name_leafdata());
    if (resilient_nexthop_set.is_set || is_set(resilient_nexthop_set.operation)) leaf_name_data.push_back(resilient_nexthop_set.get_name_leafdata());
    if (rib_failed.is_set || is_set(rib_failed.operation)) leaf_name_data.push_back(rib_failed.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.operation)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (table_brib_version.is_set || is_set(table_brib_version.operation)) leaf_name_data.push_back(table_brib_version.get_name_leafdata());
    if (table_version.is_set || is_set(table_version.operation)) leaf_name_data.push_back(table_version.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-path-element")
    {
        for(auto const & c : active_path_element)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActivePathElement>();
        c->parent = this;
        active_path_element.push_back(c);
        return c;
    }

    if(child_yang_name == "active-process-instance-path")
    {
        for(auto const & c : active_process_instance_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::ActiveProcessInstancePath>();
        c->parent = this;
        active_process_instance_path.push_back(c);
        return c;
    }

    if(child_yang_name == "add-path-orr-bitfield")
    {
        for(auto const & c : add_path_orr_bitfield)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield>();
        c->parent = this;
        add_path_orr_bitfield.push_back(c);
        return c;
    }

    if(child_yang_name == "best-path-orr-bitfield")
    {
        for(auto const & c : best_path_orr_bitfield)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield>();
        c->parent = this;
        best_path_orr_bitfield.push_back(c);
        return c;
    }

    if(child_yang_name == "bgp-prefix")
    {
        if(bgp_prefix == nullptr)
        {
            bgp_prefix = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix>();
        }
        return bgp_prefix;
    }

    if(child_yang_name == "local-path-element")
    {
        for(auto const & c : local_path_element)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPathElement>();
        c->parent = this;
        local_path_element.push_back(c);
        return c;
    }

    if(child_yang_name == "local-peers-advertised-to")
    {
        for(auto const & c : local_peers_advertised_to)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo>();
        c->parent = this;
        local_peers_advertised_to.push_back(c);
        return c;
    }

    if(child_yang_name == "local-process-instance-path")
    {
        for(auto const & c : local_process_instance_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath>();
        c->parent = this;
        local_process_instance_path.push_back(c);
        return c;
    }

    if(child_yang_name == "pe-peers-advertised-to")
    {
        for(auto const & c : pe_peers_advertised_to)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo>();
        c->parent = this;
        pe_peers_advertised_to.push_back(c);
        return c;
    }

    if(child_yang_name == "version-age")
    {
        if(version_age == nullptr)
        {
            version_age = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionAge>();
        }
        return version_age;
    }

    if(child_yang_name == "version-timestamp")
    {
        if(version_timestamp == nullptr)
        {
            version_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionTimestamp>();
        }
        return version_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : active_path_element)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : active_process_instance_path)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : add_path_orr_bitfield)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : best_path_orr_bitfield)
    {
        children[c->get_segment_path()] = c;
    }

    if(bgp_prefix != nullptr)
    {
        children["bgp-prefix"] = bgp_prefix;
    }

    for (auto const & c : local_path_element)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : local_peers_advertised_to)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : local_process_instance_path)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pe_peers_advertised_to)
    {
        children[c->get_segment_path()] = c;
    }

    if(version_age != nullptr)
    {
        children["version-age"] = version_age;
    }

    if(version_timestamp != nullptr)
    {
        children["version-timestamp"] = version_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rd")
    {
        rd = value;
    }
    if(value_path == "advertisedto-pe")
    {
        advertisedto_pe = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "bit")
    {
        bit = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "gateway-array")
    {
        gateway_array = value;
    }
    if(value_path == "has-inconsistent-paths")
    {
        has_inconsistent_paths = value;
    }
    if(value_path == "has-lbl-retained")
    {
        has_lbl_retained = value;
    }
    if(value_path == "has-local-label")
    {
        has_local_label = value;
    }
    if(value_path == "is-net-aggregation-suppressed")
    {
        is_net_aggregation_suppressed = value;
    }
    if(value_path == "is-net-ldp-signaled")
    {
        is_net_ldp_signaled = value;
    }
    if(value_path == "is-permanent-network")
    {
        is_permanent_network = value;
    }
    if(value_path == "net-backup-available")
    {
        net_backup_available = value;
    }
    if(value_path == "net-backup-label-rewrite-available")
    {
        net_backup_label_rewrite_available = value;
    }
    if(value_path == "net-eibgp-multipath")
    {
        net_eibgp_multipath = value;
    }
    if(value_path == "net-extended-flags")
    {
        net_extended_flags = value;
    }
    if(value_path == "net-flags")
    {
        net_flags = value;
    }
    if(value_path == "net-local-label")
    {
        net_local_label = value;
    }
    if(value_path == "net-local-label-rewrite")
    {
        net_local_label_rewrite = value;
    }
    if(value_path == "net-local-label-srgb")
    {
        net_local_label_srgb = value;
    }
    if(value_path == "net-multipath")
    {
        net_multipath = value;
    }
    if(value_path == "num-of-path")
    {
        num_of_path = value;
    }
    if(value_path == "process-instance-id")
    {
        process_instance_id = value;
    }
    if(value_path == "resilient-nexthop-set")
    {
        resilient_nexthop_set = value;
    }
    if(value_path == "rib-failed")
    {
        rib_failed = value;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
    }
    if(value_path == "table-brib-version")
    {
        table_brib_version = value;
    }
    if(value_path == "table-version")
    {
        table_version = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::BgpPrefix()
    :
    prefix_length{YType::uint16, "prefix-length"}
    	,
    prefix(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix>())
{
    prefix->parent = this;

    yang_name = "bgp-prefix"; yang_parent_name = "network-rd";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::~BgpPrefix()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::has_data() const
{
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_length.operation)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-prefix";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpPrefix' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::Prefix()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;

    ipv6sr_policy_address->parent = this;

    l2vpn_mspw_address->parent = this;

    l2vpnvpls_address->parent = this;

    yang_name = "prefix"; yang_parent_name = "bgp-prefix";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::~Prefix()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address == nullptr)
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress>();
        }
        return ipv4sr_policy_address;
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address == nullptr)
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress>();
        }
        return ipv6sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address == nullptr)
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::L2VpnvplsAddress>();
        }
        return l2vpnvpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4sr_policy_address != nullptr)
    {
        children["ipv4sr-policy-address"] = ipv4sr_policy_address;
    }

    if(ipv6sr_policy_address != nullptr)
    {
        children["ipv6sr-policy-address"] = ipv6sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpnvpls_address != nullptr)
    {
        children["l2vpnvpls-address"] = l2vpnvpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "prefix";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::L2VpnvplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "prefix";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "prefix";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "prefix";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionTimestamp::VersionTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "version-timestamp"; yang_parent_name = "network-rd";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionTimestamp::~VersionTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-timestamp";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VersionTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionAge::VersionAge()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "version-age"; yang_parent_name = "network-rd";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionAge::~VersionAge()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionAge::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionAge::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionAge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-age";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionAge::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VersionAge' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionAge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionAge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::VersionAge::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::LocalPeersAdvertisedTo()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_number{YType::uint32, "update-group-number"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "local-peers-advertised-to"; yang_parent_name = "network-rd";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::~LocalPeersAdvertisedTo()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::has_data() const
{
    return is_neighbor.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_neighbor.operation)
	|| is_set(update_group_number.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-peers-advertised-to";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalPeersAdvertisedTo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor.is_set || is_set(is_neighbor.operation)) leaf_name_data.push_back(is_neighbor.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.operation)) leaf_name_data.push_back(update_group_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor = value;
    }
    if(value_path == "update-group-number")
    {
        update_group_number = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;

    ipv6sr_policy_address->parent = this;

    l2vpn_mspw_address->parent = this;

    l2vpnvpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "local-peers-advertised-to";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address == nullptr)
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4sr_policy_address;
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address == nullptr)
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address == nullptr)
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress>();
        }
        return l2vpnvpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4sr_policy_address != nullptr)
    {
        children["ipv4sr-policy-address"] = ipv4sr_policy_address;
    }

    if(ipv6sr_policy_address != nullptr)
    {
        children["ipv6sr-policy-address"] = ipv6sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpnvpls_address != nullptr)
    {
        children["l2vpnvpls-address"] = l2vpnvpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::PePeersAdvertisedTo()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_number{YType::uint32, "update-group-number"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "pe-peers-advertised-to"; yang_parent_name = "network-rd";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::~PePeersAdvertisedTo()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::has_data() const
{
    return is_neighbor.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_neighbor.operation)
	|| is_set(update_group_number.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-peers-advertised-to";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PePeersAdvertisedTo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor.is_set || is_set(is_neighbor.operation)) leaf_name_data.push_back(is_neighbor.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.operation)) leaf_name_data.push_back(update_group_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor = value;
    }
    if(value_path == "update-group-number")
    {
        update_group_number = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;

    ipv6sr_policy_address->parent = this;

    l2vpn_mspw_address->parent = this;

    l2vpnvpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "pe-peers-advertised-to";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address == nullptr)
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4sr_policy_address;
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address == nullptr)
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address == nullptr)
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress>();
        }
        return l2vpnvpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4sr_policy_address != nullptr)
    {
        children["ipv4sr-policy-address"] = ipv4sr_policy_address;
    }

    if(ipv6sr_policy_address != nullptr)
    {
        children["ipv6sr-policy-address"] = ipv6sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpnvpls_address != nullptr)
    {
        children["l2vpnvpls-address"] = l2vpnvpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::BestPathOrrBitfield()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_number{YType::uint32, "update-group-number"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "best-path-orr-bitfield"; yang_parent_name = "network-rd";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::~BestPathOrrBitfield()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::has_data() const
{
    return is_neighbor.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::has_operation() const
{
    return is_set(operation)
	|| is_set(is_neighbor.operation)
	|| is_set(update_group_number.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-path-orr-bitfield";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BestPathOrrBitfield' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor.is_set || is_set(is_neighbor.operation)) leaf_name_data.push_back(is_neighbor.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.operation)) leaf_name_data.push_back(update_group_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor = value;
    }
    if(value_path == "update-group-number")
    {
        update_group_number = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;

    ipv6sr_policy_address->parent = this;

    l2vpn_mspw_address->parent = this;

    l2vpnvpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "best-path-orr-bitfield";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address == nullptr)
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4sr_policy_address;
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address == nullptr)
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address == nullptr)
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress>();
        }
        return l2vpnvpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4sr_policy_address != nullptr)
    {
        children["ipv4sr-policy-address"] = ipv4sr_policy_address;
    }

    if(ipv6sr_policy_address != nullptr)
    {
        children["ipv6sr-policy-address"] = ipv6sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpnvpls_address != nullptr)
    {
        children["l2vpnvpls-address"] = l2vpnvpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::AddPathOrrBitfield()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_number{YType::uint32, "update-group-number"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "add-path-orr-bitfield"; yang_parent_name = "network-rd";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::~AddPathOrrBitfield()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::has_data() const
{
    return is_neighbor.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::has_operation() const
{
    return is_set(operation)
	|| is_set(is_neighbor.operation)
	|| is_set(update_group_number.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "add-path-orr-bitfield";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddPathOrrBitfield' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor.is_set || is_set(is_neighbor.operation)) leaf_name_data.push_back(is_neighbor.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.operation)) leaf_name_data.push_back(update_group_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor = value;
    }
    if(value_path == "update-group-number")
    {
        update_group_number = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;

    ipv6sr_policy_address->parent = this;

    l2vpn_mspw_address->parent = this;

    l2vpnvpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "add-path-orr-bitfield";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address == nullptr)
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4sr_policy_address;
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address == nullptr)
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address == nullptr)
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress>();
        }
        return l2vpnvpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4sr_policy_address != nullptr)
    {
        children["ipv4sr-policy-address"] = ipv4sr_policy_address;
    }

    if(ipv6sr_policy_address != nullptr)
    {
        children["ipv6sr-policy-address"] = ipv6sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpnvpls_address != nullptr)
    {
        children["l2vpnvpls-address"] = l2vpnvpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::LocalProcessInstancePath()
    :
    af_name{YType::enumeration, "af-name"},
    label_fail{YType::boolean, "label-fail"},
    label_o_or_version{YType::uint32, "label-o-or-version"},
    label_oor{YType::boolean, "label-oor"},
    no_path{YType::boolean, "no-path"},
    prefix_version{YType::uint32, "prefix-version"},
    process_instance_id{YType::uint8, "process-instance-id"},
    route_distinguisher{YType::str, "route-distinguisher"},
    source_route_distinguisher{YType::str, "source-route-distinguisher"},
    source_vrf_name{YType::str, "source-vrf-name"},
    srcaf_name{YType::enumeration, "srcaf-name"},
    vrf_name{YType::str, "vrf-name"}
    	,
    attributes_after_policy_in(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::AttributesAfterPolicyIn>())
	,neighbor_address_xr(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr>())
	,path_information(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation>())
{
    attributes_after_policy_in->parent = this;

    neighbor_address_xr->parent = this;

    path_information->parent = this;

    yang_name = "local-process-instance-path"; yang_parent_name = "network-rd";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::~LocalProcessInstancePath()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::has_data() const
{
    return af_name.is_set
	|| label_fail.is_set
	|| label_o_or_version.is_set
	|| label_oor.is_set
	|| no_path.is_set
	|| prefix_version.is_set
	|| process_instance_id.is_set
	|| route_distinguisher.is_set
	|| source_route_distinguisher.is_set
	|| source_vrf_name.is_set
	|| srcaf_name.is_set
	|| vrf_name.is_set
	|| (attributes_after_policy_in !=  nullptr && attributes_after_policy_in->has_data())
	|| (neighbor_address_xr !=  nullptr && neighbor_address_xr->has_data())
	|| (path_information !=  nullptr && path_information->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(label_fail.operation)
	|| is_set(label_o_or_version.operation)
	|| is_set(label_oor.operation)
	|| is_set(no_path.operation)
	|| is_set(prefix_version.operation)
	|| is_set(process_instance_id.operation)
	|| is_set(route_distinguisher.operation)
	|| is_set(source_route_distinguisher.operation)
	|| is_set(source_vrf_name.operation)
	|| is_set(srcaf_name.operation)
	|| is_set(vrf_name.operation)
	|| (attributes_after_policy_in !=  nullptr && attributes_after_policy_in->has_operation())
	|| (neighbor_address_xr !=  nullptr && neighbor_address_xr->has_operation())
	|| (path_information !=  nullptr && path_information->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-process-instance-path";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalProcessInstancePath' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (label_fail.is_set || is_set(label_fail.operation)) leaf_name_data.push_back(label_fail.get_name_leafdata());
    if (label_o_or_version.is_set || is_set(label_o_or_version.operation)) leaf_name_data.push_back(label_o_or_version.get_name_leafdata());
    if (label_oor.is_set || is_set(label_oor.operation)) leaf_name_data.push_back(label_oor.get_name_leafdata());
    if (no_path.is_set || is_set(no_path.operation)) leaf_name_data.push_back(no_path.get_name_leafdata());
    if (prefix_version.is_set || is_set(prefix_version.operation)) leaf_name_data.push_back(prefix_version.get_name_leafdata());
    if (process_instance_id.is_set || is_set(process_instance_id.operation)) leaf_name_data.push_back(process_instance_id.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.operation)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (source_route_distinguisher.is_set || is_set(source_route_distinguisher.operation)) leaf_name_data.push_back(source_route_distinguisher.get_name_leafdata());
    if (source_vrf_name.is_set || is_set(source_vrf_name.operation)) leaf_name_data.push_back(source_vrf_name.get_name_leafdata());
    if (srcaf_name.is_set || is_set(srcaf_name.operation)) leaf_name_data.push_back(srcaf_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes-after-policy-in")
    {
        if(attributes_after_policy_in == nullptr)
        {
            attributes_after_policy_in = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::AttributesAfterPolicyIn>();
        }
        return attributes_after_policy_in;
    }

    if(child_yang_name == "neighbor-address-xr")
    {
        if(neighbor_address_xr == nullptr)
        {
            neighbor_address_xr = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr>();
        }
        return neighbor_address_xr;
    }

    if(child_yang_name == "path-information")
    {
        if(path_information == nullptr)
        {
            path_information = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation>();
        }
        return path_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attributes_after_policy_in != nullptr)
    {
        children["attributes-after-policy-in"] = attributes_after_policy_in;
    }

    if(neighbor_address_xr != nullptr)
    {
        children["neighbor-address-xr"] = neighbor_address_xr;
    }

    if(path_information != nullptr)
    {
        children["path-information"] = path_information;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "label-fail")
    {
        label_fail = value;
    }
    if(value_path == "label-o-or-version")
    {
        label_o_or_version = value;
    }
    if(value_path == "label-oor")
    {
        label_oor = value;
    }
    if(value_path == "no-path")
    {
        no_path = value;
    }
    if(value_path == "prefix-version")
    {
        prefix_version = value;
    }
    if(value_path == "process-instance-id")
    {
        process_instance_id = value;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
    }
    if(value_path == "source-route-distinguisher")
    {
        source_route_distinguisher = value;
    }
    if(value_path == "source-vrf-name")
    {
        source_vrf_name = value;
    }
    if(value_path == "srcaf-name")
    {
        srcaf_name = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::NeighborAddressXr()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;

    ipv6sr_policy_address->parent = this;

    l2vpn_mspw_address->parent = this;

    l2vpnvpls_address->parent = this;

    yang_name = "neighbor-address-xr"; yang_parent_name = "local-process-instance-path";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::~NeighborAddressXr()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address-xr";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddressXr' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address == nullptr)
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::Ipv4SrPolicyAddress>();
        }
        return ipv4sr_policy_address;
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address == nullptr)
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::Ipv6SrPolicyAddress>();
        }
        return ipv6sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address == nullptr)
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnvplsAddress>();
        }
        return l2vpnvpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4sr_policy_address != nullptr)
    {
        children["ipv4sr-policy-address"] = ipv4sr_policy_address;
    }

    if(ipv6sr_policy_address != nullptr)
    {
        children["ipv6sr-policy-address"] = ipv6sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpnvpls_address != nullptr)
    {
        children["l2vpnvpls-address"] = l2vpnvpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address-xr";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnvplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address-xr";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address-xr";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address-xr";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::NeighborAddressXr::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::PathInformation()
    :
    accept_own_path{YType::boolean, "accept-own-path"},
    accept_own_self_originated_p_ath{YType::boolean, "accept-own-self-originated-p-ath"},
    advertisedto_pe{YType::boolean, "advertisedto-pe"},
    aigp_metric{YType::uint64, "aigp-metric"},
    best_path_comp_stage{YType::enumeration, "best-path-comp-stage"},
    best_path_id{YType::uint32, "best-path-id"},
    best_path_id_comp_winner{YType::uint32, "best-path-id-comp-winner"},
    dampen_penalty{YType::uint32, "dampen-penalty"},
    fspec_invalid_path{YType::boolean, "fspec-invalid-path"},
    graceful_shutdown{YType::boolean, "graceful-shutdown"},
    halflife_time{YType::uint32, "halflife-time"},
    has_esi{YType::boolean, "has-esi"},
    has_gw_addr{YType::boolean, "has-gw-addr"},
    has_local_net_label{YType::boolean, "has-local-net-label"},
    has_mdt_group_addr{YType::boolean, "has-mdt-group-addr"},
    has_mvpn_extcomm{YType::boolean, "has-mvpn-extcomm"},
    has_mvpn_nbr_addr{YType::boolean, "has-mvpn-nbr-addr"},
    has_mvpn_nexthop_addr{YType::boolean, "has-mvpn-nexthop-addr"},
    has_mvpn_pmsi{YType::boolean, "has-mvpn-pmsi"},
    has_rcvd_label{YType::boolean, "has-rcvd-label"},
    has_second_label{YType::boolean, "has-second-label"},
    ibgp_signaled_validity{YType::boolean, "ibgp-signaled-validity"},
    igp_metric{YType::uint32, "igp-metric"},
    is_aggregation_suppressed{YType::boolean, "is-aggregation-suppressed"},
    is_as_best{YType::boolean, "is-as-best"},
    is_best_path{YType::boolean, "is-best-path"},
    is_import_dampened{YType::boolean, "is-import-dampened"},
    is_import_suspect{YType::boolean, "is-import-suspect"},
    is_internal_path{YType::boolean, "is-internal-path"},
    is_partial_best{YType::boolean, "is-partial-best"},
    is_path_additional_path{YType::boolean, "is-path-additional-path"},
    is_path_advertised_local_as_only{YType::boolean, "is-path-advertised-local-as-only"},
    is_path_af_install_eligible{YType::boolean, "is-path-af-install-eligible"},
    is_path_backup{YType::boolean, "is-path-backup"},
    is_path_backup_protect_multipath{YType::boolean, "is-path-backup-protect-multipath"},
    is_path_best_external{YType::boolean, "is-path-best-external"},
    is_path_damped{YType::boolean, "is-path-damped"},
    is_path_from_confederation_peer{YType::boolean, "is-path-from-confederation-peer"},
    is_path_from_network_command{YType::boolean, "is-path-from-network-command"},
    is_path_from_redistribute_command{YType::boolean, "is-path-from-redistribute-command"},
    is_path_from_route_reflector{YType::boolean, "is-path-from-route-reflector"},
    is_path_history_held{YType::boolean, "is-path-history-held"},
    is_path_imp_candidate{YType::boolean, "is-path-imp-candidate"},
    is_path_imported{YType::boolean, "is-path-imported"},
    is_path_local_aggregate{YType::boolean, "is-path-local-aggregate"},
    is_path_locally_sourced{YType::boolean, "is-path-locally-sourced"},
    is_path_long_lived_stale{YType::boolean, "is-path-long-lived-stale"},
    is_path_multipath{YType::boolean, "is-path-multipath"},
    is_path_nexthop_discarded{YType::boolean, "is-path-nexthop-discarded"},
    is_path_not_advertised{YType::boolean, "is-path-not-advertised"},
    is_path_not_advertised_to_ebg_ps{YType::boolean, "is-path-not-advertised-to-ebg-ps"},
    is_path_received_only{YType::boolean, "is-path-received-only"},
    is_path_reoriginated{YType::boolean, "is-path-reoriginated"},
    is_path_reoriginated_stitching{YType::boolean, "is-path-reoriginated-stitching"},
    is_path_stale{YType::boolean, "is-path-stale"},
    is_path_synced_with_igp{YType::boolean, "is-path-synced-with-igp"},
    is_path_valid{YType::boolean, "is-path-valid"},
    is_path_vpn_only{YType::boolean, "is-path-vpn-only"},
    is_permanent_path{YType::boolean, "is-permanent-path"},
    is_received_path_not_modified{YType::boolean, "is-received-path-not-modified"},
    is_spkr_as_best{YType::boolean, "is-spkr-as-best"},
    l2vpn_size{YType::uint32, "l2vpn-size"},
    labeled_unicast_safi_path{YType::boolean, "labeled-unicast-safi-path"},
    local_label{YType::uint32, "local-label"},
    local_nh{YType::boolean, "local-nh"},
    local_path_id{YType::uint32, "local-path-id"},
    maximum_suppress_time{YType::uint32, "maximum-suppress-time"},
    mvpn_path_flags{YType::uint16, "mvpn-path-flags"},
    mvpn_pmsi_flags{YType::uint8, "mvpn-pmsi-flags"},
    mvpn_pmsi_label{YType::uint32, "mvpn-pmsi-label"},
    mvpn_pmsi_type{YType::uint16, "mvpn-pmsi-type"},
    mvpn_sfs_path{YType::boolean, "mvpn-sfs-path"},
    neighbor_router_id{YType::str, "neighbor-router-id"},
    path_flags{YType::uint64, "path-flags"},
    path_flap_count{YType::uint32, "path-flap-count"},
    path_import_flags{YType::uint32, "path-import-flags"},
    path_rt_set_id{YType::uint32, "path-rt-set-id"},
    path_rt_set_route_count{YType::uint32, "path-rt-set-route-count"},
    path_table_version{YType::uint32, "path-table-version"},
    path_weight{YType::uint16, "path-weight"},
    rcvd_label{YType::uint32, "rcvd-label"},
    rcvd_path_id{YType::uint32, "rcvd-path-id"},
    reuse_value{YType::uint32, "reuse-value"},
    rib_failed{YType::boolean, "rib-failed"},
    route_type{YType::enumeration, "route-type"},
    rpki_origin_as_validation_disabled{YType::boolean, "rpki-origin-as-validation-disabled"},
    rt_set_limit_enabled{YType::boolean, "rt-set-limit-enabled"},
    second_label{YType::uint32, "second-label"},
    seconds_since_first_flap{YType::uint32, "seconds-since-first-flap"},
    show_rpki_origin_as_validity{YType::boolean, "show-rpki-origin-as-validity"},
    sn_rpki_origin_as_validity{YType::uint8, "sn-rpki-origin-as-validity"},
    suppress_penalty{YType::uint32, "suppress-penalty"},
    time_to_unsuppress{YType::uint32, "time-to-unsuppress"}
    	,
    best_path_comp_winner(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner>())
	,bgp_prefix(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix>())
	,gw_addr(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::GwAddr>())
	,l2vpn_evpn_esi(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::L2VpnEvpnEsi>())
	,mdt_group_addr(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr>())
	,mvpn_nbr_addr(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr>())
	,mvpn_nexthop_addr(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNexthopAddr>())
	,neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress>())
	,next_hop(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop>())
	,nhte_tunnel(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NhteTunnel>())
{
    best_path_comp_winner->parent = this;

    bgp_prefix->parent = this;

    gw_addr->parent = this;

    l2vpn_evpn_esi->parent = this;

    mdt_group_addr->parent = this;

    mvpn_nbr_addr->parent = this;

    mvpn_nexthop_addr->parent = this;

    neighbor_address->parent = this;

    next_hop->parent = this;

    nhte_tunnel->parent = this;

    yang_name = "path-information"; yang_parent_name = "local-process-instance-path";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::~PathInformation()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::has_data() const
{
    for (std::size_t index=0; index<add_path_orr_bitfield.size(); index++)
    {
        if(add_path_orr_bitfield[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<best_path_orr_bitfield.size(); index++)
    {
        if(best_path_orr_bitfield[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<l2vpn_circuit_status_value.size(); index++)
    {
        if(l2vpn_circuit_status_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<local_peers_advertised_to.size(); index++)
    {
        if(local_peers_advertised_to[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mvpn_pmsi_value.size(); index++)
    {
        if(mvpn_pmsi_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pe_peers_advertised_to.size(); index++)
    {
        if(pe_peers_advertised_to[index]->has_data())
            return true;
    }
    return accept_own_path.is_set
	|| accept_own_self_originated_p_ath.is_set
	|| advertisedto_pe.is_set
	|| aigp_metric.is_set
	|| best_path_comp_stage.is_set
	|| best_path_id.is_set
	|| best_path_id_comp_winner.is_set
	|| dampen_penalty.is_set
	|| fspec_invalid_path.is_set
	|| graceful_shutdown.is_set
	|| halflife_time.is_set
	|| has_esi.is_set
	|| has_gw_addr.is_set
	|| has_local_net_label.is_set
	|| has_mdt_group_addr.is_set
	|| has_mvpn_extcomm.is_set
	|| has_mvpn_nbr_addr.is_set
	|| has_mvpn_nexthop_addr.is_set
	|| has_mvpn_pmsi.is_set
	|| has_rcvd_label.is_set
	|| has_second_label.is_set
	|| ibgp_signaled_validity.is_set
	|| igp_metric.is_set
	|| is_aggregation_suppressed.is_set
	|| is_as_best.is_set
	|| is_best_path.is_set
	|| is_import_dampened.is_set
	|| is_import_suspect.is_set
	|| is_internal_path.is_set
	|| is_partial_best.is_set
	|| is_path_additional_path.is_set
	|| is_path_advertised_local_as_only.is_set
	|| is_path_af_install_eligible.is_set
	|| is_path_backup.is_set
	|| is_path_backup_protect_multipath.is_set
	|| is_path_best_external.is_set
	|| is_path_damped.is_set
	|| is_path_from_confederation_peer.is_set
	|| is_path_from_network_command.is_set
	|| is_path_from_redistribute_command.is_set
	|| is_path_from_route_reflector.is_set
	|| is_path_history_held.is_set
	|| is_path_imp_candidate.is_set
	|| is_path_imported.is_set
	|| is_path_local_aggregate.is_set
	|| is_path_locally_sourced.is_set
	|| is_path_long_lived_stale.is_set
	|| is_path_multipath.is_set
	|| is_path_nexthop_discarded.is_set
	|| is_path_not_advertised.is_set
	|| is_path_not_advertised_to_ebg_ps.is_set
	|| is_path_received_only.is_set
	|| is_path_reoriginated.is_set
	|| is_path_reoriginated_stitching.is_set
	|| is_path_stale.is_set
	|| is_path_synced_with_igp.is_set
	|| is_path_valid.is_set
	|| is_path_vpn_only.is_set
	|| is_permanent_path.is_set
	|| is_received_path_not_modified.is_set
	|| is_spkr_as_best.is_set
	|| l2vpn_size.is_set
	|| labeled_unicast_safi_path.is_set
	|| local_label.is_set
	|| local_nh.is_set
	|| local_path_id.is_set
	|| maximum_suppress_time.is_set
	|| mvpn_path_flags.is_set
	|| mvpn_pmsi_flags.is_set
	|| mvpn_pmsi_label.is_set
	|| mvpn_pmsi_type.is_set
	|| mvpn_sfs_path.is_set
	|| neighbor_router_id.is_set
	|| path_flags.is_set
	|| path_flap_count.is_set
	|| path_import_flags.is_set
	|| path_rt_set_id.is_set
	|| path_rt_set_route_count.is_set
	|| path_table_version.is_set
	|| path_weight.is_set
	|| rcvd_label.is_set
	|| rcvd_path_id.is_set
	|| reuse_value.is_set
	|| rib_failed.is_set
	|| route_type.is_set
	|| rpki_origin_as_validation_disabled.is_set
	|| rt_set_limit_enabled.is_set
	|| second_label.is_set
	|| seconds_since_first_flap.is_set
	|| show_rpki_origin_as_validity.is_set
	|| sn_rpki_origin_as_validity.is_set
	|| suppress_penalty.is_set
	|| time_to_unsuppress.is_set
	|| (best_path_comp_winner !=  nullptr && best_path_comp_winner->has_data())
	|| (bgp_prefix !=  nullptr && bgp_prefix->has_data())
	|| (gw_addr !=  nullptr && gw_addr->has_data())
	|| (l2vpn_evpn_esi !=  nullptr && l2vpn_evpn_esi->has_data())
	|| (mdt_group_addr !=  nullptr && mdt_group_addr->has_data())
	|| (mvpn_nbr_addr !=  nullptr && mvpn_nbr_addr->has_data())
	|| (mvpn_nexthop_addr !=  nullptr && mvpn_nexthop_addr->has_data())
	|| (neighbor_address !=  nullptr && neighbor_address->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (nhte_tunnel !=  nullptr && nhte_tunnel->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::has_operation() const
{
    for (std::size_t index=0; index<add_path_orr_bitfield.size(); index++)
    {
        if(add_path_orr_bitfield[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<best_path_orr_bitfield.size(); index++)
    {
        if(best_path_orr_bitfield[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<l2vpn_circuit_status_value.size(); index++)
    {
        if(l2vpn_circuit_status_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<local_peers_advertised_to.size(); index++)
    {
        if(local_peers_advertised_to[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mvpn_pmsi_value.size(); index++)
    {
        if(mvpn_pmsi_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pe_peers_advertised_to.size(); index++)
    {
        if(pe_peers_advertised_to[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(accept_own_path.operation)
	|| is_set(accept_own_self_originated_p_ath.operation)
	|| is_set(advertisedto_pe.operation)
	|| is_set(aigp_metric.operation)
	|| is_set(best_path_comp_stage.operation)
	|| is_set(best_path_id.operation)
	|| is_set(best_path_id_comp_winner.operation)
	|| is_set(dampen_penalty.operation)
	|| is_set(fspec_invalid_path.operation)
	|| is_set(graceful_shutdown.operation)
	|| is_set(halflife_time.operation)
	|| is_set(has_esi.operation)
	|| is_set(has_gw_addr.operation)
	|| is_set(has_local_net_label.operation)
	|| is_set(has_mdt_group_addr.operation)
	|| is_set(has_mvpn_extcomm.operation)
	|| is_set(has_mvpn_nbr_addr.operation)
	|| is_set(has_mvpn_nexthop_addr.operation)
	|| is_set(has_mvpn_pmsi.operation)
	|| is_set(has_rcvd_label.operation)
	|| is_set(has_second_label.operation)
	|| is_set(ibgp_signaled_validity.operation)
	|| is_set(igp_metric.operation)
	|| is_set(is_aggregation_suppressed.operation)
	|| is_set(is_as_best.operation)
	|| is_set(is_best_path.operation)
	|| is_set(is_import_dampened.operation)
	|| is_set(is_import_suspect.operation)
	|| is_set(is_internal_path.operation)
	|| is_set(is_partial_best.operation)
	|| is_set(is_path_additional_path.operation)
	|| is_set(is_path_advertised_local_as_only.operation)
	|| is_set(is_path_af_install_eligible.operation)
	|| is_set(is_path_backup.operation)
	|| is_set(is_path_backup_protect_multipath.operation)
	|| is_set(is_path_best_external.operation)
	|| is_set(is_path_damped.operation)
	|| is_set(is_path_from_confederation_peer.operation)
	|| is_set(is_path_from_network_command.operation)
	|| is_set(is_path_from_redistribute_command.operation)
	|| is_set(is_path_from_route_reflector.operation)
	|| is_set(is_path_history_held.operation)
	|| is_set(is_path_imp_candidate.operation)
	|| is_set(is_path_imported.operation)
	|| is_set(is_path_local_aggregate.operation)
	|| is_set(is_path_locally_sourced.operation)
	|| is_set(is_path_long_lived_stale.operation)
	|| is_set(is_path_multipath.operation)
	|| is_set(is_path_nexthop_discarded.operation)
	|| is_set(is_path_not_advertised.operation)
	|| is_set(is_path_not_advertised_to_ebg_ps.operation)
	|| is_set(is_path_received_only.operation)
	|| is_set(is_path_reoriginated.operation)
	|| is_set(is_path_reoriginated_stitching.operation)
	|| is_set(is_path_stale.operation)
	|| is_set(is_path_synced_with_igp.operation)
	|| is_set(is_path_valid.operation)
	|| is_set(is_path_vpn_only.operation)
	|| is_set(is_permanent_path.operation)
	|| is_set(is_received_path_not_modified.operation)
	|| is_set(is_spkr_as_best.operation)
	|| is_set(l2vpn_size.operation)
	|| is_set(labeled_unicast_safi_path.operation)
	|| is_set(local_label.operation)
	|| is_set(local_nh.operation)
	|| is_set(local_path_id.operation)
	|| is_set(maximum_suppress_time.operation)
	|| is_set(mvpn_path_flags.operation)
	|| is_set(mvpn_pmsi_flags.operation)
	|| is_set(mvpn_pmsi_label.operation)
	|| is_set(mvpn_pmsi_type.operation)
	|| is_set(mvpn_sfs_path.operation)
	|| is_set(neighbor_router_id.operation)
	|| is_set(path_flags.operation)
	|| is_set(path_flap_count.operation)
	|| is_set(path_import_flags.operation)
	|| is_set(path_rt_set_id.operation)
	|| is_set(path_rt_set_route_count.operation)
	|| is_set(path_table_version.operation)
	|| is_set(path_weight.operation)
	|| is_set(rcvd_label.operation)
	|| is_set(rcvd_path_id.operation)
	|| is_set(reuse_value.operation)
	|| is_set(rib_failed.operation)
	|| is_set(route_type.operation)
	|| is_set(rpki_origin_as_validation_disabled.operation)
	|| is_set(rt_set_limit_enabled.operation)
	|| is_set(second_label.operation)
	|| is_set(seconds_since_first_flap.operation)
	|| is_set(show_rpki_origin_as_validity.operation)
	|| is_set(sn_rpki_origin_as_validity.operation)
	|| is_set(suppress_penalty.operation)
	|| is_set(time_to_unsuppress.operation)
	|| (best_path_comp_winner !=  nullptr && best_path_comp_winner->has_operation())
	|| (bgp_prefix !=  nullptr && bgp_prefix->has_operation())
	|| (gw_addr !=  nullptr && gw_addr->has_operation())
	|| (l2vpn_evpn_esi !=  nullptr && l2vpn_evpn_esi->has_operation())
	|| (mdt_group_addr !=  nullptr && mdt_group_addr->has_operation())
	|| (mvpn_nbr_addr !=  nullptr && mvpn_nbr_addr->has_operation())
	|| (mvpn_nexthop_addr !=  nullptr && mvpn_nexthop_addr->has_operation())
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (nhte_tunnel !=  nullptr && nhte_tunnel->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-information";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathInformation' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_own_path.is_set || is_set(accept_own_path.operation)) leaf_name_data.push_back(accept_own_path.get_name_leafdata());
    if (accept_own_self_originated_p_ath.is_set || is_set(accept_own_self_originated_p_ath.operation)) leaf_name_data.push_back(accept_own_self_originated_p_ath.get_name_leafdata());
    if (advertisedto_pe.is_set || is_set(advertisedto_pe.operation)) leaf_name_data.push_back(advertisedto_pe.get_name_leafdata());
    if (aigp_metric.is_set || is_set(aigp_metric.operation)) leaf_name_data.push_back(aigp_metric.get_name_leafdata());
    if (best_path_comp_stage.is_set || is_set(best_path_comp_stage.operation)) leaf_name_data.push_back(best_path_comp_stage.get_name_leafdata());
    if (best_path_id.is_set || is_set(best_path_id.operation)) leaf_name_data.push_back(best_path_id.get_name_leafdata());
    if (best_path_id_comp_winner.is_set || is_set(best_path_id_comp_winner.operation)) leaf_name_data.push_back(best_path_id_comp_winner.get_name_leafdata());
    if (dampen_penalty.is_set || is_set(dampen_penalty.operation)) leaf_name_data.push_back(dampen_penalty.get_name_leafdata());
    if (fspec_invalid_path.is_set || is_set(fspec_invalid_path.operation)) leaf_name_data.push_back(fspec_invalid_path.get_name_leafdata());
    if (graceful_shutdown.is_set || is_set(graceful_shutdown.operation)) leaf_name_data.push_back(graceful_shutdown.get_name_leafdata());
    if (halflife_time.is_set || is_set(halflife_time.operation)) leaf_name_data.push_back(halflife_time.get_name_leafdata());
    if (has_esi.is_set || is_set(has_esi.operation)) leaf_name_data.push_back(has_esi.get_name_leafdata());
    if (has_gw_addr.is_set || is_set(has_gw_addr.operation)) leaf_name_data.push_back(has_gw_addr.get_name_leafdata());
    if (has_local_net_label.is_set || is_set(has_local_net_label.operation)) leaf_name_data.push_back(has_local_net_label.get_name_leafdata());
    if (has_mdt_group_addr.is_set || is_set(has_mdt_group_addr.operation)) leaf_name_data.push_back(has_mdt_group_addr.get_name_leafdata());
    if (has_mvpn_extcomm.is_set || is_set(has_mvpn_extcomm.operation)) leaf_name_data.push_back(has_mvpn_extcomm.get_name_leafdata());
    if (has_mvpn_nbr_addr.is_set || is_set(has_mvpn_nbr_addr.operation)) leaf_name_data.push_back(has_mvpn_nbr_addr.get_name_leafdata());
    if (has_mvpn_nexthop_addr.is_set || is_set(has_mvpn_nexthop_addr.operation)) leaf_name_data.push_back(has_mvpn_nexthop_addr.get_name_leafdata());
    if (has_mvpn_pmsi.is_set || is_set(has_mvpn_pmsi.operation)) leaf_name_data.push_back(has_mvpn_pmsi.get_name_leafdata());
    if (has_rcvd_label.is_set || is_set(has_rcvd_label.operation)) leaf_name_data.push_back(has_rcvd_label.get_name_leafdata());
    if (has_second_label.is_set || is_set(has_second_label.operation)) leaf_name_data.push_back(has_second_label.get_name_leafdata());
    if (ibgp_signaled_validity.is_set || is_set(ibgp_signaled_validity.operation)) leaf_name_data.push_back(ibgp_signaled_validity.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.operation)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (is_aggregation_suppressed.is_set || is_set(is_aggregation_suppressed.operation)) leaf_name_data.push_back(is_aggregation_suppressed.get_name_leafdata());
    if (is_as_best.is_set || is_set(is_as_best.operation)) leaf_name_data.push_back(is_as_best.get_name_leafdata());
    if (is_best_path.is_set || is_set(is_best_path.operation)) leaf_name_data.push_back(is_best_path.get_name_leafdata());
    if (is_import_dampened.is_set || is_set(is_import_dampened.operation)) leaf_name_data.push_back(is_import_dampened.get_name_leafdata());
    if (is_import_suspect.is_set || is_set(is_import_suspect.operation)) leaf_name_data.push_back(is_import_suspect.get_name_leafdata());
    if (is_internal_path.is_set || is_set(is_internal_path.operation)) leaf_name_data.push_back(is_internal_path.get_name_leafdata());
    if (is_partial_best.is_set || is_set(is_partial_best.operation)) leaf_name_data.push_back(is_partial_best.get_name_leafdata());
    if (is_path_additional_path.is_set || is_set(is_path_additional_path.operation)) leaf_name_data.push_back(is_path_additional_path.get_name_leafdata());
    if (is_path_advertised_local_as_only.is_set || is_set(is_path_advertised_local_as_only.operation)) leaf_name_data.push_back(is_path_advertised_local_as_only.get_name_leafdata());
    if (is_path_af_install_eligible.is_set || is_set(is_path_af_install_eligible.operation)) leaf_name_data.push_back(is_path_af_install_eligible.get_name_leafdata());
    if (is_path_backup.is_set || is_set(is_path_backup.operation)) leaf_name_data.push_back(is_path_backup.get_name_leafdata());
    if (is_path_backup_protect_multipath.is_set || is_set(is_path_backup_protect_multipath.operation)) leaf_name_data.push_back(is_path_backup_protect_multipath.get_name_leafdata());
    if (is_path_best_external.is_set || is_set(is_path_best_external.operation)) leaf_name_data.push_back(is_path_best_external.get_name_leafdata());
    if (is_path_damped.is_set || is_set(is_path_damped.operation)) leaf_name_data.push_back(is_path_damped.get_name_leafdata());
    if (is_path_from_confederation_peer.is_set || is_set(is_path_from_confederation_peer.operation)) leaf_name_data.push_back(is_path_from_confederation_peer.get_name_leafdata());
    if (is_path_from_network_command.is_set || is_set(is_path_from_network_command.operation)) leaf_name_data.push_back(is_path_from_network_command.get_name_leafdata());
    if (is_path_from_redistribute_command.is_set || is_set(is_path_from_redistribute_command.operation)) leaf_name_data.push_back(is_path_from_redistribute_command.get_name_leafdata());
    if (is_path_from_route_reflector.is_set || is_set(is_path_from_route_reflector.operation)) leaf_name_data.push_back(is_path_from_route_reflector.get_name_leafdata());
    if (is_path_history_held.is_set || is_set(is_path_history_held.operation)) leaf_name_data.push_back(is_path_history_held.get_name_leafdata());
    if (is_path_imp_candidate.is_set || is_set(is_path_imp_candidate.operation)) leaf_name_data.push_back(is_path_imp_candidate.get_name_leafdata());
    if (is_path_imported.is_set || is_set(is_path_imported.operation)) leaf_name_data.push_back(is_path_imported.get_name_leafdata());
    if (is_path_local_aggregate.is_set || is_set(is_path_local_aggregate.operation)) leaf_name_data.push_back(is_path_local_aggregate.get_name_leafdata());
    if (is_path_locally_sourced.is_set || is_set(is_path_locally_sourced.operation)) leaf_name_data.push_back(is_path_locally_sourced.get_name_leafdata());
    if (is_path_long_lived_stale.is_set || is_set(is_path_long_lived_stale.operation)) leaf_name_data.push_back(is_path_long_lived_stale.get_name_leafdata());
    if (is_path_multipath.is_set || is_set(is_path_multipath.operation)) leaf_name_data.push_back(is_path_multipath.get_name_leafdata());
    if (is_path_nexthop_discarded.is_set || is_set(is_path_nexthop_discarded.operation)) leaf_name_data.push_back(is_path_nexthop_discarded.get_name_leafdata());
    if (is_path_not_advertised.is_set || is_set(is_path_not_advertised.operation)) leaf_name_data.push_back(is_path_not_advertised.get_name_leafdata());
    if (is_path_not_advertised_to_ebg_ps.is_set || is_set(is_path_not_advertised_to_ebg_ps.operation)) leaf_name_data.push_back(is_path_not_advertised_to_ebg_ps.get_name_leafdata());
    if (is_path_received_only.is_set || is_set(is_path_received_only.operation)) leaf_name_data.push_back(is_path_received_only.get_name_leafdata());
    if (is_path_reoriginated.is_set || is_set(is_path_reoriginated.operation)) leaf_name_data.push_back(is_path_reoriginated.get_name_leafdata());
    if (is_path_reoriginated_stitching.is_set || is_set(is_path_reoriginated_stitching.operation)) leaf_name_data.push_back(is_path_reoriginated_stitching.get_name_leafdata());
    if (is_path_stale.is_set || is_set(is_path_stale.operation)) leaf_name_data.push_back(is_path_stale.get_name_leafdata());
    if (is_path_synced_with_igp.is_set || is_set(is_path_synced_with_igp.operation)) leaf_name_data.push_back(is_path_synced_with_igp.get_name_leafdata());
    if (is_path_valid.is_set || is_set(is_path_valid.operation)) leaf_name_data.push_back(is_path_valid.get_name_leafdata());
    if (is_path_vpn_only.is_set || is_set(is_path_vpn_only.operation)) leaf_name_data.push_back(is_path_vpn_only.get_name_leafdata());
    if (is_permanent_path.is_set || is_set(is_permanent_path.operation)) leaf_name_data.push_back(is_permanent_path.get_name_leafdata());
    if (is_received_path_not_modified.is_set || is_set(is_received_path_not_modified.operation)) leaf_name_data.push_back(is_received_path_not_modified.get_name_leafdata());
    if (is_spkr_as_best.is_set || is_set(is_spkr_as_best.operation)) leaf_name_data.push_back(is_spkr_as_best.get_name_leafdata());
    if (l2vpn_size.is_set || is_set(l2vpn_size.operation)) leaf_name_data.push_back(l2vpn_size.get_name_leafdata());
    if (labeled_unicast_safi_path.is_set || is_set(labeled_unicast_safi_path.operation)) leaf_name_data.push_back(labeled_unicast_safi_path.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (local_nh.is_set || is_set(local_nh.operation)) leaf_name_data.push_back(local_nh.get_name_leafdata());
    if (local_path_id.is_set || is_set(local_path_id.operation)) leaf_name_data.push_back(local_path_id.get_name_leafdata());
    if (maximum_suppress_time.is_set || is_set(maximum_suppress_time.operation)) leaf_name_data.push_back(maximum_suppress_time.get_name_leafdata());
    if (mvpn_path_flags.is_set || is_set(mvpn_path_flags.operation)) leaf_name_data.push_back(mvpn_path_flags.get_name_leafdata());
    if (mvpn_pmsi_flags.is_set || is_set(mvpn_pmsi_flags.operation)) leaf_name_data.push_back(mvpn_pmsi_flags.get_name_leafdata());
    if (mvpn_pmsi_label.is_set || is_set(mvpn_pmsi_label.operation)) leaf_name_data.push_back(mvpn_pmsi_label.get_name_leafdata());
    if (mvpn_pmsi_type.is_set || is_set(mvpn_pmsi_type.operation)) leaf_name_data.push_back(mvpn_pmsi_type.get_name_leafdata());
    if (mvpn_sfs_path.is_set || is_set(mvpn_sfs_path.operation)) leaf_name_data.push_back(mvpn_sfs_path.get_name_leafdata());
    if (neighbor_router_id.is_set || is_set(neighbor_router_id.operation)) leaf_name_data.push_back(neighbor_router_id.get_name_leafdata());
    if (path_flags.is_set || is_set(path_flags.operation)) leaf_name_data.push_back(path_flags.get_name_leafdata());
    if (path_flap_count.is_set || is_set(path_flap_count.operation)) leaf_name_data.push_back(path_flap_count.get_name_leafdata());
    if (path_import_flags.is_set || is_set(path_import_flags.operation)) leaf_name_data.push_back(path_import_flags.get_name_leafdata());
    if (path_rt_set_id.is_set || is_set(path_rt_set_id.operation)) leaf_name_data.push_back(path_rt_set_id.get_name_leafdata());
    if (path_rt_set_route_count.is_set || is_set(path_rt_set_route_count.operation)) leaf_name_data.push_back(path_rt_set_route_count.get_name_leafdata());
    if (path_table_version.is_set || is_set(path_table_version.operation)) leaf_name_data.push_back(path_table_version.get_name_leafdata());
    if (path_weight.is_set || is_set(path_weight.operation)) leaf_name_data.push_back(path_weight.get_name_leafdata());
    if (rcvd_label.is_set || is_set(rcvd_label.operation)) leaf_name_data.push_back(rcvd_label.get_name_leafdata());
    if (rcvd_path_id.is_set || is_set(rcvd_path_id.operation)) leaf_name_data.push_back(rcvd_path_id.get_name_leafdata());
    if (reuse_value.is_set || is_set(reuse_value.operation)) leaf_name_data.push_back(reuse_value.get_name_leafdata());
    if (rib_failed.is_set || is_set(rib_failed.operation)) leaf_name_data.push_back(rib_failed.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (rpki_origin_as_validation_disabled.is_set || is_set(rpki_origin_as_validation_disabled.operation)) leaf_name_data.push_back(rpki_origin_as_validation_disabled.get_name_leafdata());
    if (rt_set_limit_enabled.is_set || is_set(rt_set_limit_enabled.operation)) leaf_name_data.push_back(rt_set_limit_enabled.get_name_leafdata());
    if (second_label.is_set || is_set(second_label.operation)) leaf_name_data.push_back(second_label.get_name_leafdata());
    if (seconds_since_first_flap.is_set || is_set(seconds_since_first_flap.operation)) leaf_name_data.push_back(seconds_since_first_flap.get_name_leafdata());
    if (show_rpki_origin_as_validity.is_set || is_set(show_rpki_origin_as_validity.operation)) leaf_name_data.push_back(show_rpki_origin_as_validity.get_name_leafdata());
    if (sn_rpki_origin_as_validity.is_set || is_set(sn_rpki_origin_as_validity.operation)) leaf_name_data.push_back(sn_rpki_origin_as_validity.get_name_leafdata());
    if (suppress_penalty.is_set || is_set(suppress_penalty.operation)) leaf_name_data.push_back(suppress_penalty.get_name_leafdata());
    if (time_to_unsuppress.is_set || is_set(time_to_unsuppress.operation)) leaf_name_data.push_back(time_to_unsuppress.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "add-path-orr-bitfield")
    {
        for(auto const & c : add_path_orr_bitfield)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::AddPathOrrBitfield>();
        c->parent = this;
        add_path_orr_bitfield.push_back(c);
        return c;
    }

    if(child_yang_name == "best-path-comp-winner")
    {
        if(best_path_comp_winner == nullptr)
        {
            best_path_comp_winner = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner>();
        }
        return best_path_comp_winner;
    }

    if(child_yang_name == "best-path-orr-bitfield")
    {
        for(auto const & c : best_path_orr_bitfield)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathOrrBitfield>();
        c->parent = this;
        best_path_orr_bitfield.push_back(c);
        return c;
    }

    if(child_yang_name == "bgp-prefix")
    {
        if(bgp_prefix == nullptr)
        {
            bgp_prefix = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix>();
        }
        return bgp_prefix;
    }

    if(child_yang_name == "extended-community")
    {
        for(auto const & c : extended_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::ExtendedCommunity>();
        c->parent = this;
        extended_community.push_back(c);
        return c;
    }

    if(child_yang_name == "gw-addr")
    {
        if(gw_addr == nullptr)
        {
            gw_addr = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::GwAddr>();
        }
        return gw_addr;
    }

    if(child_yang_name == "l2vpn-circuit-status-value")
    {
        for(auto const & c : l2vpn_circuit_status_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::L2VpnCircuitStatusValue>();
        c->parent = this;
        l2vpn_circuit_status_value.push_back(c);
        return c;
    }

    if(child_yang_name == "l2vpn-evpn-esi")
    {
        if(l2vpn_evpn_esi == nullptr)
        {
            l2vpn_evpn_esi = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::L2VpnEvpnEsi>();
        }
        return l2vpn_evpn_esi;
    }

    if(child_yang_name == "local-peers-advertised-to")
    {
        for(auto const & c : local_peers_advertised_to)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::LocalPeersAdvertisedTo>();
        c->parent = this;
        local_peers_advertised_to.push_back(c);
        return c;
    }

    if(child_yang_name == "mdt-group-addr")
    {
        if(mdt_group_addr == nullptr)
        {
            mdt_group_addr = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr>();
        }
        return mdt_group_addr;
    }

    if(child_yang_name == "mvpn-nbr-addr")
    {
        if(mvpn_nbr_addr == nullptr)
        {
            mvpn_nbr_addr = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr>();
        }
        return mvpn_nbr_addr;
    }

    if(child_yang_name == "mvpn-nexthop-addr")
    {
        if(mvpn_nexthop_addr == nullptr)
        {
            mvpn_nexthop_addr = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNexthopAddr>();
        }
        return mvpn_nexthop_addr;
    }

    if(child_yang_name == "mvpn-pmsi-value")
    {
        for(auto const & c : mvpn_pmsi_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnPmsiValue>();
        c->parent = this;
        mvpn_pmsi_value.push_back(c);
        return c;
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress>();
        }
        return neighbor_address;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "nhte-tunnel")
    {
        if(nhte_tunnel == nullptr)
        {
            nhte_tunnel = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NhteTunnel>();
        }
        return nhte_tunnel;
    }

    if(child_yang_name == "pe-peers-advertised-to")
    {
        for(auto const & c : pe_peers_advertised_to)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo>();
        c->parent = this;
        pe_peers_advertised_to.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : add_path_orr_bitfield)
    {
        children[c->get_segment_path()] = c;
    }

    if(best_path_comp_winner != nullptr)
    {
        children["best-path-comp-winner"] = best_path_comp_winner;
    }

    for (auto const & c : best_path_orr_bitfield)
    {
        children[c->get_segment_path()] = c;
    }

    if(bgp_prefix != nullptr)
    {
        children["bgp-prefix"] = bgp_prefix;
    }

    for (auto const & c : extended_community)
    {
        children[c->get_segment_path()] = c;
    }

    if(gw_addr != nullptr)
    {
        children["gw-addr"] = gw_addr;
    }

    for (auto const & c : l2vpn_circuit_status_value)
    {
        children[c->get_segment_path()] = c;
    }

    if(l2vpn_evpn_esi != nullptr)
    {
        children["l2vpn-evpn-esi"] = l2vpn_evpn_esi;
    }

    for (auto const & c : local_peers_advertised_to)
    {
        children[c->get_segment_path()] = c;
    }

    if(mdt_group_addr != nullptr)
    {
        children["mdt-group-addr"] = mdt_group_addr;
    }

    if(mvpn_nbr_addr != nullptr)
    {
        children["mvpn-nbr-addr"] = mvpn_nbr_addr;
    }

    if(mvpn_nexthop_addr != nullptr)
    {
        children["mvpn-nexthop-addr"] = mvpn_nexthop_addr;
    }

    for (auto const & c : mvpn_pmsi_value)
    {
        children[c->get_segment_path()] = c;
    }

    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(nhte_tunnel != nullptr)
    {
        children["nhte-tunnel"] = nhte_tunnel;
    }

    for (auto const & c : pe_peers_advertised_to)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-own-path")
    {
        accept_own_path = value;
    }
    if(value_path == "accept-own-self-originated-p-ath")
    {
        accept_own_self_originated_p_ath = value;
    }
    if(value_path == "advertisedto-pe")
    {
        advertisedto_pe = value;
    }
    if(value_path == "aigp-metric")
    {
        aigp_metric = value;
    }
    if(value_path == "best-path-comp-stage")
    {
        best_path_comp_stage = value;
    }
    if(value_path == "best-path-id")
    {
        best_path_id = value;
    }
    if(value_path == "best-path-id-comp-winner")
    {
        best_path_id_comp_winner = value;
    }
    if(value_path == "dampen-penalty")
    {
        dampen_penalty = value;
    }
    if(value_path == "fspec-invalid-path")
    {
        fspec_invalid_path = value;
    }
    if(value_path == "graceful-shutdown")
    {
        graceful_shutdown = value;
    }
    if(value_path == "halflife-time")
    {
        halflife_time = value;
    }
    if(value_path == "has-esi")
    {
        has_esi = value;
    }
    if(value_path == "has-gw-addr")
    {
        has_gw_addr = value;
    }
    if(value_path == "has-local-net-label")
    {
        has_local_net_label = value;
    }
    if(value_path == "has-mdt-group-addr")
    {
        has_mdt_group_addr = value;
    }
    if(value_path == "has-mvpn-extcomm")
    {
        has_mvpn_extcomm = value;
    }
    if(value_path == "has-mvpn-nbr-addr")
    {
        has_mvpn_nbr_addr = value;
    }
    if(value_path == "has-mvpn-nexthop-addr")
    {
        has_mvpn_nexthop_addr = value;
    }
    if(value_path == "has-mvpn-pmsi")
    {
        has_mvpn_pmsi = value;
    }
    if(value_path == "has-rcvd-label")
    {
        has_rcvd_label = value;
    }
    if(value_path == "has-second-label")
    {
        has_second_label = value;
    }
    if(value_path == "ibgp-signaled-validity")
    {
        ibgp_signaled_validity = value;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
    }
    if(value_path == "is-aggregation-suppressed")
    {
        is_aggregation_suppressed = value;
    }
    if(value_path == "is-as-best")
    {
        is_as_best = value;
    }
    if(value_path == "is-best-path")
    {
        is_best_path = value;
    }
    if(value_path == "is-import-dampened")
    {
        is_import_dampened = value;
    }
    if(value_path == "is-import-suspect")
    {
        is_import_suspect = value;
    }
    if(value_path == "is-internal-path")
    {
        is_internal_path = value;
    }
    if(value_path == "is-partial-best")
    {
        is_partial_best = value;
    }
    if(value_path == "is-path-additional-path")
    {
        is_path_additional_path = value;
    }
    if(value_path == "is-path-advertised-local-as-only")
    {
        is_path_advertised_local_as_only = value;
    }
    if(value_path == "is-path-af-install-eligible")
    {
        is_path_af_install_eligible = value;
    }
    if(value_path == "is-path-backup")
    {
        is_path_backup = value;
    }
    if(value_path == "is-path-backup-protect-multipath")
    {
        is_path_backup_protect_multipath = value;
    }
    if(value_path == "is-path-best-external")
    {
        is_path_best_external = value;
    }
    if(value_path == "is-path-damped")
    {
        is_path_damped = value;
    }
    if(value_path == "is-path-from-confederation-peer")
    {
        is_path_from_confederation_peer = value;
    }
    if(value_path == "is-path-from-network-command")
    {
        is_path_from_network_command = value;
    }
    if(value_path == "is-path-from-redistribute-command")
    {
        is_path_from_redistribute_command = value;
    }
    if(value_path == "is-path-from-route-reflector")
    {
        is_path_from_route_reflector = value;
    }
    if(value_path == "is-path-history-held")
    {
        is_path_history_held = value;
    }
    if(value_path == "is-path-imp-candidate")
    {
        is_path_imp_candidate = value;
    }
    if(value_path == "is-path-imported")
    {
        is_path_imported = value;
    }
    if(value_path == "is-path-local-aggregate")
    {
        is_path_local_aggregate = value;
    }
    if(value_path == "is-path-locally-sourced")
    {
        is_path_locally_sourced = value;
    }
    if(value_path == "is-path-long-lived-stale")
    {
        is_path_long_lived_stale = value;
    }
    if(value_path == "is-path-multipath")
    {
        is_path_multipath = value;
    }
    if(value_path == "is-path-nexthop-discarded")
    {
        is_path_nexthop_discarded = value;
    }
    if(value_path == "is-path-not-advertised")
    {
        is_path_not_advertised = value;
    }
    if(value_path == "is-path-not-advertised-to-ebg-ps")
    {
        is_path_not_advertised_to_ebg_ps = value;
    }
    if(value_path == "is-path-received-only")
    {
        is_path_received_only = value;
    }
    if(value_path == "is-path-reoriginated")
    {
        is_path_reoriginated = value;
    }
    if(value_path == "is-path-reoriginated-stitching")
    {
        is_path_reoriginated_stitching = value;
    }
    if(value_path == "is-path-stale")
    {
        is_path_stale = value;
    }
    if(value_path == "is-path-synced-with-igp")
    {
        is_path_synced_with_igp = value;
    }
    if(value_path == "is-path-valid")
    {
        is_path_valid = value;
    }
    if(value_path == "is-path-vpn-only")
    {
        is_path_vpn_only = value;
    }
    if(value_path == "is-permanent-path")
    {
        is_permanent_path = value;
    }
    if(value_path == "is-received-path-not-modified")
    {
        is_received_path_not_modified = value;
    }
    if(value_path == "is-spkr-as-best")
    {
        is_spkr_as_best = value;
    }
    if(value_path == "l2vpn-size")
    {
        l2vpn_size = value;
    }
    if(value_path == "labeled-unicast-safi-path")
    {
        labeled_unicast_safi_path = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "local-nh")
    {
        local_nh = value;
    }
    if(value_path == "local-path-id")
    {
        local_path_id = value;
    }
    if(value_path == "maximum-suppress-time")
    {
        maximum_suppress_time = value;
    }
    if(value_path == "mvpn-path-flags")
    {
        mvpn_path_flags = value;
    }
    if(value_path == "mvpn-pmsi-flags")
    {
        mvpn_pmsi_flags = value;
    }
    if(value_path == "mvpn-pmsi-label")
    {
        mvpn_pmsi_label = value;
    }
    if(value_path == "mvpn-pmsi-type")
    {
        mvpn_pmsi_type = value;
    }
    if(value_path == "mvpn-sfs-path")
    {
        mvpn_sfs_path = value;
    }
    if(value_path == "neighbor-router-id")
    {
        neighbor_router_id = value;
    }
    if(value_path == "path-flags")
    {
        path_flags = value;
    }
    if(value_path == "path-flap-count")
    {
        path_flap_count = value;
    }
    if(value_path == "path-import-flags")
    {
        path_import_flags = value;
    }
    if(value_path == "path-rt-set-id")
    {
        path_rt_set_id = value;
    }
    if(value_path == "path-rt-set-route-count")
    {
        path_rt_set_route_count = value;
    }
    if(value_path == "path-table-version")
    {
        path_table_version = value;
    }
    if(value_path == "path-weight")
    {
        path_weight = value;
    }
    if(value_path == "rcvd-label")
    {
        rcvd_label = value;
    }
    if(value_path == "rcvd-path-id")
    {
        rcvd_path_id = value;
    }
    if(value_path == "reuse-value")
    {
        reuse_value = value;
    }
    if(value_path == "rib-failed")
    {
        rib_failed = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "rpki-origin-as-validation-disabled")
    {
        rpki_origin_as_validation_disabled = value;
    }
    if(value_path == "rt-set-limit-enabled")
    {
        rt_set_limit_enabled = value;
    }
    if(value_path == "second-label")
    {
        second_label = value;
    }
    if(value_path == "seconds-since-first-flap")
    {
        seconds_since_first_flap = value;
    }
    if(value_path == "show-rpki-origin-as-validity")
    {
        show_rpki_origin_as_validity = value;
    }
    if(value_path == "sn-rpki-origin-as-validity")
    {
        sn_rpki_origin_as_validity = value;
    }
    if(value_path == "suppress-penalty")
    {
        suppress_penalty = value;
    }
    if(value_path == "time-to-unsuppress")
    {
        time_to_unsuppress = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::BgpPrefix()
    :
    prefix_length{YType::uint16, "prefix-length"}
    	,
    prefix(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix>())
{
    prefix->parent = this;

    yang_name = "bgp-prefix"; yang_parent_name = "path-information";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::~BgpPrefix()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::has_data() const
{
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_length.operation)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-prefix";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpPrefix' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Prefix()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;

    ipv6sr_policy_address->parent = this;

    l2vpn_mspw_address->parent = this;

    l2vpnvpls_address->parent = this;

    yang_name = "prefix"; yang_parent_name = "bgp-prefix";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::~Prefix()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address == nullptr)
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress>();
        }
        return ipv4sr_policy_address;
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address == nullptr)
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress>();
        }
        return ipv6sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address == nullptr)
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnvplsAddress>();
        }
        return l2vpnvpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4sr_policy_address != nullptr)
    {
        children["ipv4sr-policy-address"] = ipv4sr_policy_address;
    }

    if(ipv6sr_policy_address != nullptr)
    {
        children["ipv6sr-policy-address"] = ipv6sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpnvpls_address != nullptr)
    {
        children["l2vpnvpls-address"] = l2vpnvpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "prefix";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnvplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "prefix";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "prefix";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "prefix";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;

    ipv6sr_policy_address->parent = this;

    l2vpn_mspw_address->parent = this;

    l2vpnvpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "path-information";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address == nullptr)
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4sr_policy_address;
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address == nullptr)
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address == nullptr)
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnvplsAddress>();
        }
        return l2vpnvpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4sr_policy_address != nullptr)
    {
        children["ipv4sr-policy-address"] = ipv4sr_policy_address;
    }

    if(ipv6sr_policy_address != nullptr)
    {
        children["ipv6sr-policy-address"] = ipv6sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpnvpls_address != nullptr)
    {
        children["l2vpnvpls-address"] = l2vpnvpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnvplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::NextHop()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;

    ipv6sr_policy_address->parent = this;

    l2vpn_mspw_address->parent = this;

    l2vpnvpls_address->parent = this;

    yang_name = "next-hop"; yang_parent_name = "path-information";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::~NextHop()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address == nullptr)
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress>();
        }
        return ipv4sr_policy_address;
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address == nullptr)
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress>();
        }
        return ipv6sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address == nullptr)
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnvplsAddress>();
        }
        return l2vpnvpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4sr_policy_address != nullptr)
    {
        children["ipv4sr-policy-address"] = ipv4sr_policy_address;
    }

    if(ipv6sr_policy_address != nullptr)
    {
        children["ipv6sr-policy-address"] = ipv6sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpnvpls_address != nullptr)
    {
        children["l2vpnvpls-address"] = l2vpnvpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "next-hop";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnvplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "next-hop";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "next-hop";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "next-hop";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NhteTunnel::NhteTunnel()
    :
    binding_label{YType::uint32, "binding-label"},
    has_te_tunnel{YType::boolean, "has-te-tunnel"},
    is_tunnel_info_stale{YType::boolean, "is-tunnel-info-stale"},
    is_tunnel_registered{YType::boolean, "is-tunnel-registered"},
    is_tunnel_up{YType::boolean, "is-tunnel-up"},
    last_tunnel_update{YType::uint32, "last-tunnel-update"},
    tunnel_if_handle{YType::uint32, "tunnel-if-handle"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_type{YType::enumeration, "tunnel-type"},
    tunnel_v6_enabled{YType::boolean, "tunnel-v6-enabled"},
    tunnel_v6_required{YType::boolean, "tunnel-v6-required"}
{
    yang_name = "nhte-tunnel"; yang_parent_name = "path-information";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NhteTunnel::~NhteTunnel()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NhteTunnel::has_data() const
{
    return binding_label.is_set
	|| has_te_tunnel.is_set
	|| is_tunnel_info_stale.is_set
	|| is_tunnel_registered.is_set
	|| is_tunnel_up.is_set
	|| last_tunnel_update.is_set
	|| tunnel_if_handle.is_set
	|| tunnel_name.is_set
	|| tunnel_type.is_set
	|| tunnel_v6_enabled.is_set
	|| tunnel_v6_required.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NhteTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(binding_label.operation)
	|| is_set(has_te_tunnel.operation)
	|| is_set(is_tunnel_info_stale.operation)
	|| is_set(is_tunnel_registered.operation)
	|| is_set(is_tunnel_up.operation)
	|| is_set(last_tunnel_update.operation)
	|| is_set(tunnel_if_handle.operation)
	|| is_set(tunnel_name.operation)
	|| is_set(tunnel_type.operation)
	|| is_set(tunnel_v6_enabled.operation)
	|| is_set(tunnel_v6_required.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NhteTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhte-tunnel";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NhteTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NhteTunnel' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (has_te_tunnel.is_set || is_set(has_te_tunnel.operation)) leaf_name_data.push_back(has_te_tunnel.get_name_leafdata());
    if (is_tunnel_info_stale.is_set || is_set(is_tunnel_info_stale.operation)) leaf_name_data.push_back(is_tunnel_info_stale.get_name_leafdata());
    if (is_tunnel_registered.is_set || is_set(is_tunnel_registered.operation)) leaf_name_data.push_back(is_tunnel_registered.get_name_leafdata());
    if (is_tunnel_up.is_set || is_set(is_tunnel_up.operation)) leaf_name_data.push_back(is_tunnel_up.get_name_leafdata());
    if (last_tunnel_update.is_set || is_set(last_tunnel_update.operation)) leaf_name_data.push_back(last_tunnel_update.get_name_leafdata());
    if (tunnel_if_handle.is_set || is_set(tunnel_if_handle.operation)) leaf_name_data.push_back(tunnel_if_handle.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_type.is_set || is_set(tunnel_type.operation)) leaf_name_data.push_back(tunnel_type.get_name_leafdata());
    if (tunnel_v6_enabled.is_set || is_set(tunnel_v6_enabled.operation)) leaf_name_data.push_back(tunnel_v6_enabled.get_name_leafdata());
    if (tunnel_v6_required.is_set || is_set(tunnel_v6_required.operation)) leaf_name_data.push_back(tunnel_v6_required.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NhteTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NhteTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::NhteTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "has-te-tunnel")
    {
        has_te_tunnel = value;
    }
    if(value_path == "is-tunnel-info-stale")
    {
        is_tunnel_info_stale = value;
    }
    if(value_path == "is-tunnel-registered")
    {
        is_tunnel_registered = value;
    }
    if(value_path == "is-tunnel-up")
    {
        is_tunnel_up = value;
    }
    if(value_path == "last-tunnel-update")
    {
        last_tunnel_update = value;
    }
    if(value_path == "tunnel-if-handle")
    {
        tunnel_if_handle = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type = value;
    }
    if(value_path == "tunnel-v6-enabled")
    {
        tunnel_v6_enabled = value;
    }
    if(value_path == "tunnel-v6-required")
    {
        tunnel_v6_required = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::MdtGroupAddr()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;

    ipv6sr_policy_address->parent = this;

    l2vpn_mspw_address->parent = this;

    l2vpnvpls_address->parent = this;

    yang_name = "mdt-group-addr"; yang_parent_name = "path-information";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::~MdtGroupAddr()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt-group-addr";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MdtGroupAddr' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address == nullptr)
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress>();
        }
        return ipv4sr_policy_address;
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address == nullptr)
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress>();
        }
        return ipv6sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address == nullptr)
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnvplsAddress>();
        }
        return l2vpnvpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4sr_policy_address != nullptr)
    {
        children["ipv4sr-policy-address"] = ipv4sr_policy_address;
    }

    if(ipv6sr_policy_address != nullptr)
    {
        children["ipv6sr-policy-address"] = ipv6sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpnvpls_address != nullptr)
    {
        children["l2vpnvpls-address"] = l2vpnvpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "mdt-group-addr";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnvplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "mdt-group-addr";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "mdt-group-addr";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "mdt-group-addr";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::L2VpnEvpnEsi::L2VpnEvpnEsi()
    :
    esi{YType::str, "esi"}
{
    yang_name = "l2vpn-evpn-esi"; yang_parent_name = "path-information";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::L2VpnEvpnEsi::~L2VpnEvpnEsi()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::L2VpnEvpnEsi::has_data() const
{
    return esi.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::L2VpnEvpnEsi::has_operation() const
{
    return is_set(operation)
	|| is_set(esi.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::L2VpnEvpnEsi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-evpn-esi";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::L2VpnEvpnEsi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnEvpnEsi' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (esi.is_set || is_set(esi.operation)) leaf_name_data.push_back(esi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::L2VpnEvpnEsi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::L2VpnEvpnEsi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::L2VpnEvpnEsi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "esi")
    {
        esi = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::GwAddr::GwAddr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    len{YType::enumeration, "len"}
{
    yang_name = "gw-addr"; yang_parent_name = "path-information";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::GwAddr::~GwAddr()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::GwAddr::has_data() const
{
    return ipv4_address.is_set
	|| ipv6_address.is_set
	|| len.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::GwAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(len.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::GwAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gw-addr";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::GwAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GwAddr' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (len.is_set || is_set(len.operation)) leaf_name_data.push_back(len.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::GwAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::GwAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::GwAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "len")
    {
        len = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::BestPathCompWinner()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;

    ipv6sr_policy_address->parent = this;

    l2vpn_mspw_address->parent = this;

    l2vpnvpls_address->parent = this;

    yang_name = "best-path-comp-winner"; yang_parent_name = "path-information";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::~BestPathCompWinner()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-path-comp-winner";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BestPathCompWinner' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address == nullptr)
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress>();
        }
        return ipv4sr_policy_address;
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address == nullptr)
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress>();
        }
        return ipv6sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address == nullptr)
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnvplsAddress>();
        }
        return l2vpnvpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4sr_policy_address != nullptr)
    {
        children["ipv4sr-policy-address"] = ipv4sr_policy_address;
    }

    if(ipv6sr_policy_address != nullptr)
    {
        children["ipv6sr-policy-address"] = ipv6sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpnvpls_address != nullptr)
    {
        children["l2vpnvpls-address"] = l2vpnvpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "best-path-comp-winner";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnvplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "best-path-comp-winner";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "best-path-comp-winner";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "best-path-comp-winner";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::MvpnNbrAddr()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;

    ipv6sr_policy_address->parent = this;

    l2vpn_mspw_address->parent = this;

    l2vpnvpls_address->parent = this;

    yang_name = "mvpn-nbr-addr"; yang_parent_name = "path-information";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::~MvpnNbrAddr()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvpn-nbr-addr";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MvpnNbrAddr' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address == nullptr)
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress>();
        }
        return ipv4sr_policy_address;
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address == nullptr)
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress>();
        }
        return ipv6sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address == nullptr)
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnvplsAddress>();
        }
        return l2vpnvpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4sr_policy_address != nullptr)
    {
        children["ipv4sr-policy-address"] = ipv4sr_policy_address;
    }

    if(ipv6sr_policy_address != nullptr)
    {
        children["ipv6sr-policy-address"] = ipv6sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpnvpls_address != nullptr)
    {
        children["l2vpnvpls-address"] = l2vpnvpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "mvpn-nbr-addr";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnvplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "mvpn-nbr-addr";
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

const EntityPath Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds::NetworkAllRd::NetworkRds::NetworkRd::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}


}
}

