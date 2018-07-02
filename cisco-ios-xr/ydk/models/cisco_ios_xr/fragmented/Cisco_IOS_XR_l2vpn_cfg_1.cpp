
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_cfg_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_cfg {

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::FlowLabelLoadBalance()
    :
    flow_label{YType::enumeration, "flow-label"},
    static_{YType::empty, "static"}
{

    yang_name = "flow-label-load-balance"; yang_parent_name = "ldp-signaling-protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::~FlowLabelLoadBalance()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::has_data() const
{
    if (is_presence_container) return true;
    return flow_label.is_set
	|| static_.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_label.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-label-load-balance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_label.is_set || is_set(flow_label.yfilter)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-label")
    {
        flow_label = value;
        flow_label.value_namespace = name_space;
        flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-label")
    {
        flow_label.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-label" || name == "static")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::BgpRoutePolicy()
    :
    export_{YType::str, "export"}
{

    yang_name = "bgp-route-policy"; yang_parent_name = "bgp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::~BgpRoutePolicy()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::has_data() const
{
    if (is_presence_container) return true;
    return export_.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(export_.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-route-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (export_.is_set || is_set(export_.yfilter)) leaf_name_data.push_back(export_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "export")
    {
        export_ = value;
        export_.value_namespace = name_space;
        export_.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "export")
    {
        export_.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "export")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::RouteDistinguisher()
    :
    type{YType::enumeration, "type"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    address{YType::str, "address"},
    addr_index{YType::uint32, "addr-index"}
{

    yang_name = "route-distinguisher"; yang_parent_name = "bgp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::~RouteDistinguisher()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| as.is_set
	|| as_index.is_set
	|| address.is_set
	|| addr_index.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(addr_index.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-distinguisher";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (addr_index.is_set || is_set(addr_index.yfilter)) leaf_name_data.push_back(addr_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr-index")
    {
        addr_index = value;
        addr_index.value_namespace = name_space;
        addr_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "addr-index")
    {
        addr_index.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "as" || name == "as-index" || name == "address" || name == "addr-index")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::BgpSignalingProtocol()
    :
    ve_range{YType::uint32, "ve-range"},
    veid{YType::uint32, "veid"},
    enable{YType::empty, "enable"}
        ,
    flow_label_load_balance(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance>())
{
    flow_label_load_balance->parent = this;

    yang_name = "bgp-signaling-protocol"; yang_parent_name = "bgp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::~BgpSignalingProtocol()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::has_data() const
{
    if (is_presence_container) return true;
    return ve_range.is_set
	|| veid.is_set
	|| enable.is_set
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ve_range.yfilter)
	|| ydk::is_set(veid.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-signaling-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ve_range.is_set || is_set(ve_range.yfilter)) leaf_name_data.push_back(ve_range.get_name_leafdata());
    if (veid.is_set || is_set(veid.yfilter)) leaf_name_data.push_back(veid.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-label-load-balance")
    {
        if(flow_label_load_balance == nullptr)
        {
            flow_label_load_balance = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance>();
        }
        return flow_label_load_balance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flow_label_load_balance != nullptr)
    {
        children["flow-label-load-balance"] = flow_label_load_balance;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ve-range")
    {
        ve_range = value;
        ve_range.value_namespace = name_space;
        ve_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "veid")
    {
        veid = value;
        veid.value_namespace = name_space;
        veid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ve-range")
    {
        ve_range.yfilter = yfilter;
    }
    if(value_path == "veid")
    {
        veid.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-label-load-balance" || name == "ve-range" || name == "veid" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::FlowLabelLoadBalance()
    :
    flow_label{YType::enumeration, "flow-label"},
    static_{YType::empty, "static"}
{

    yang_name = "flow-label-load-balance"; yang_parent_name = "bgp-signaling-protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::~FlowLabelLoadBalance()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::has_data() const
{
    if (is_presence_container) return true;
    return flow_label.is_set
	|| static_.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_label.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-label-load-balance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_label.is_set || is_set(flow_label.yfilter)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-label")
    {
        flow_label = value;
        flow_label.value_namespace = name_space;
        flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-label")
    {
        flow_label.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-label" || name == "static")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTargets()
    :
    route_target(this, {"role", "format"})
{

    yang_name = "route-targets"; yang_parent_name = "bgp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::~RouteTargets()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_target.len(); index++)
    {
        if(route_target[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::has_operation() const
{
    for (std::size_t index=0; index<route_target.len(); index++)
    {
        if(route_target[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-targets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-target")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget>();
        c->parent = this;
        route_target.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : route_target.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-target")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::RouteTarget()
    :
    role{YType::enumeration, "role"},
    format{YType::enumeration, "format"}
        ,
    two_byte_as_or_four_byte_as(this, {"as", "as_index"})
    , ipv4_address(this, {"address", "addr_index"})
{

    yang_name = "route-target"; yang_parent_name = "route-targets"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::~RouteTarget()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<two_byte_as_or_four_byte_as.len(); index++)
    {
        if(two_byte_as_or_four_byte_as[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_address.len(); index++)
    {
        if(ipv4_address[index]->has_data())
            return true;
    }
    return role.is_set
	|| format.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::has_operation() const
{
    for (std::size_t index=0; index<two_byte_as_or_four_byte_as.len(); index++)
    {
        if(two_byte_as_or_four_byte_as[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_address.len(); index++)
    {
        if(ipv4_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(format.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";
    ADD_KEY_TOKEN(role, "role");
    ADD_KEY_TOKEN(format, "format");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "two-byte-as-or-four-byte-as")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs>();
        c->parent = this;
        two_byte_as_or_four_byte_as.append(c);
        return c;
    }

    if(child_yang_name == "ipv4-address")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address>();
        c->parent = this;
        ipv4_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : two_byte_as_or_four_byte_as.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ipv4_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as-or-four-byte-as" || name == "ipv4-address" || name == "role" || name == "format")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::TwoByteAsOrFourByteAs()
    :
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"}
{

    yang_name = "two-byte-as-or-four-byte-as"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::~TwoByteAsOrFourByteAs()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| as_index.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as-or-four-byte-as";
    ADD_KEY_TOKEN(as, "as");
    ADD_KEY_TOKEN(as_index, "as-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "as-index")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::Ipv4Address()
    :
    address{YType::str, "address"},
    addr_index{YType::uint32, "addr-index"}
{

    yang_name = "ipv4-address"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::~Ipv4Address()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| addr_index.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(addr_index.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address";
    ADD_KEY_TOKEN(address, "address");
    ADD_KEY_TOKEN(addr_index, "addr-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (addr_index.is_set || is_set(addr_index.yfilter)) leaf_name_data.push_back(addr_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr-index")
    {
        addr_index = value;
        addr_index.value_namespace = name_space;
        addr_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "addr-index")
    {
        addr_index.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "addr-index")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuits()
    :
    bd_attachment_circuit(this, {"name"})
{

    yang_name = "bd-attachment-circuits"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::~BdAttachmentCircuits()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bd_attachment_circuit.len(); index++)
    {
        if(bd_attachment_circuit[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::has_operation() const
{
    for (std::size_t index=0; index<bd_attachment_circuit.len(); index++)
    {
        if(bd_attachment_circuit[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-attachment-circuits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-attachment-circuit")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit>();
        c->parent = this;
        bd_attachment_circuit.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bd_attachment_circuit.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-attachment-circuit")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdAttachmentCircuit()
    :
    name{YType::str, "name"},
    interface_flooding{YType::enumeration, "interface-flooding"},
    interface_igmp_snoop{YType::str, "interface-igmp-snoop"},
    interface_flooding_unknown_unicast{YType::enumeration, "interface-flooding-unknown-unicast"},
    interface_mld_snoop{YType::str, "interface-mld-snoop"}
        ,
    interface_ip_source_guard(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard>())
    , interface_dai(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai>())
    , interface_profile(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile>())
    , bdac_storm_control_types(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes>())
    , split_horizon(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon>())
    , static_mac_addresses(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses>())
    , interface_mac(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac>())
{
    interface_ip_source_guard->parent = this;
    interface_dai->parent = this;
    interface_profile->parent = this;
    bdac_storm_control_types->parent = this;
    split_horizon->parent = this;
    static_mac_addresses->parent = this;
    interface_mac->parent = this;

    yang_name = "bd-attachment-circuit"; yang_parent_name = "bd-attachment-circuits"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::~BdAttachmentCircuit()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| interface_flooding.is_set
	|| interface_igmp_snoop.is_set
	|| interface_flooding_unknown_unicast.is_set
	|| interface_mld_snoop.is_set
	|| (interface_ip_source_guard !=  nullptr && interface_ip_source_guard->has_data())
	|| (interface_dai !=  nullptr && interface_dai->has_data())
	|| (interface_profile !=  nullptr && interface_profile->has_data())
	|| (bdac_storm_control_types !=  nullptr && bdac_storm_control_types->has_data())
	|| (split_horizon !=  nullptr && split_horizon->has_data())
	|| (static_mac_addresses !=  nullptr && static_mac_addresses->has_data())
	|| (interface_mac !=  nullptr && interface_mac->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interface_flooding.yfilter)
	|| ydk::is_set(interface_igmp_snoop.yfilter)
	|| ydk::is_set(interface_flooding_unknown_unicast.yfilter)
	|| ydk::is_set(interface_mld_snoop.yfilter)
	|| (interface_ip_source_guard !=  nullptr && interface_ip_source_guard->has_operation())
	|| (interface_dai !=  nullptr && interface_dai->has_operation())
	|| (interface_profile !=  nullptr && interface_profile->has_operation())
	|| (bdac_storm_control_types !=  nullptr && bdac_storm_control_types->has_operation())
	|| (split_horizon !=  nullptr && split_horizon->has_operation())
	|| (static_mac_addresses !=  nullptr && static_mac_addresses->has_operation())
	|| (interface_mac !=  nullptr && interface_mac->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-attachment-circuit";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_flooding.is_set || is_set(interface_flooding.yfilter)) leaf_name_data.push_back(interface_flooding.get_name_leafdata());
    if (interface_igmp_snoop.is_set || is_set(interface_igmp_snoop.yfilter)) leaf_name_data.push_back(interface_igmp_snoop.get_name_leafdata());
    if (interface_flooding_unknown_unicast.is_set || is_set(interface_flooding_unknown_unicast.yfilter)) leaf_name_data.push_back(interface_flooding_unknown_unicast.get_name_leafdata());
    if (interface_mld_snoop.is_set || is_set(interface_mld_snoop.yfilter)) leaf_name_data.push_back(interface_mld_snoop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-ip-source-guard")
    {
        if(interface_ip_source_guard == nullptr)
        {
            interface_ip_source_guard = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard>();
        }
        return interface_ip_source_guard;
    }

    if(child_yang_name == "interface-dai")
    {
        if(interface_dai == nullptr)
        {
            interface_dai = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai>();
        }
        return interface_dai;
    }

    if(child_yang_name == "interface-profile")
    {
        if(interface_profile == nullptr)
        {
            interface_profile = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile>();
        }
        return interface_profile;
    }

    if(child_yang_name == "bdac-storm-control-types")
    {
        if(bdac_storm_control_types == nullptr)
        {
            bdac_storm_control_types = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes>();
        }
        return bdac_storm_control_types;
    }

    if(child_yang_name == "split-horizon")
    {
        if(split_horizon == nullptr)
        {
            split_horizon = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon>();
        }
        return split_horizon;
    }

    if(child_yang_name == "static-mac-addresses")
    {
        if(static_mac_addresses == nullptr)
        {
            static_mac_addresses = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses>();
        }
        return static_mac_addresses;
    }

    if(child_yang_name == "interface-mac")
    {
        if(interface_mac == nullptr)
        {
            interface_mac = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac>();
        }
        return interface_mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_ip_source_guard != nullptr)
    {
        children["interface-ip-source-guard"] = interface_ip_source_guard;
    }

    if(interface_dai != nullptr)
    {
        children["interface-dai"] = interface_dai;
    }

    if(interface_profile != nullptr)
    {
        children["interface-profile"] = interface_profile;
    }

    if(bdac_storm_control_types != nullptr)
    {
        children["bdac-storm-control-types"] = bdac_storm_control_types;
    }

    if(split_horizon != nullptr)
    {
        children["split-horizon"] = split_horizon;
    }

    if(static_mac_addresses != nullptr)
    {
        children["static-mac-addresses"] = static_mac_addresses;
    }

    if(interface_mac != nullptr)
    {
        children["interface-mac"] = interface_mac;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-flooding")
    {
        interface_flooding = value;
        interface_flooding.value_namespace = name_space;
        interface_flooding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-igmp-snoop")
    {
        interface_igmp_snoop = value;
        interface_igmp_snoop.value_namespace = name_space;
        interface_igmp_snoop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-flooding-unknown-unicast")
    {
        interface_flooding_unknown_unicast = value;
        interface_flooding_unknown_unicast.value_namespace = name_space;
        interface_flooding_unknown_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mld-snoop")
    {
        interface_mld_snoop = value;
        interface_mld_snoop.value_namespace = name_space;
        interface_mld_snoop.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interface-flooding")
    {
        interface_flooding.yfilter = yfilter;
    }
    if(value_path == "interface-igmp-snoop")
    {
        interface_igmp_snoop.yfilter = yfilter;
    }
    if(value_path == "interface-flooding-unknown-unicast")
    {
        interface_flooding_unknown_unicast.yfilter = yfilter;
    }
    if(value_path == "interface-mld-snoop")
    {
        interface_mld_snoop.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-ip-source-guard" || name == "interface-dai" || name == "interface-profile" || name == "bdac-storm-control-types" || name == "split-horizon" || name == "static-mac-addresses" || name == "interface-mac" || name == "name" || name == "interface-flooding" || name == "interface-igmp-snoop" || name == "interface-flooding-unknown-unicast" || name == "interface-mld-snoop")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::InterfaceIpSourceGuard()
    :
    logging{YType::enumeration, "logging"},
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"}
{

    yang_name = "interface-ip-source-guard"; yang_parent_name = "bd-attachment-circuit"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::~InterfaceIpSourceGuard()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| disable.is_set
	|| enable.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ip-source-guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "disable" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDai()
    :
    logging{YType::enumeration, "logging"},
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"}
        ,
    interface_dai_address_validation(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation>())
{
    interface_dai_address_validation->parent = this;

    yang_name = "interface-dai"; yang_parent_name = "bd-attachment-circuit"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::~InterfaceDai()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| disable.is_set
	|| enable.is_set
	|| (interface_dai_address_validation !=  nullptr && interface_dai_address_validation->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (interface_dai_address_validation !=  nullptr && interface_dai_address_validation->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-dai";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-dai-address-validation")
    {
        if(interface_dai_address_validation == nullptr)
        {
            interface_dai_address_validation = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation>();
        }
        return interface_dai_address_validation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_dai_address_validation != nullptr)
    {
        children["interface-dai-address-validation"] = interface_dai_address_validation;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-dai-address-validation" || name == "logging" || name == "disable" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::InterfaceDaiAddressValidation()
    :
    ipv4_verification{YType::enumeration, "ipv4-verification"},
    destination_mac_verification{YType::enumeration, "destination-mac-verification"},
    source_mac_verification{YType::enumeration, "source-mac-verification"},
    enable{YType::empty, "enable"}
{

    yang_name = "interface-dai-address-validation"; yang_parent_name = "interface-dai"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::~InterfaceDaiAddressValidation()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_verification.is_set
	|| destination_mac_verification.is_set
	|| source_mac_verification.is_set
	|| enable.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_verification.yfilter)
	|| ydk::is_set(destination_mac_verification.yfilter)
	|| ydk::is_set(source_mac_verification.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-dai-address-validation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_verification.is_set || is_set(ipv4_verification.yfilter)) leaf_name_data.push_back(ipv4_verification.get_name_leafdata());
    if (destination_mac_verification.is_set || is_set(destination_mac_verification.yfilter)) leaf_name_data.push_back(destination_mac_verification.get_name_leafdata());
    if (source_mac_verification.is_set || is_set(source_mac_verification.yfilter)) leaf_name_data.push_back(source_mac_verification.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-verification")
    {
        ipv4_verification = value;
        ipv4_verification.value_namespace = name_space;
        ipv4_verification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-mac-verification")
    {
        destination_mac_verification = value;
        destination_mac_verification.value_namespace = name_space;
        destination_mac_verification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-mac-verification")
    {
        source_mac_verification = value;
        source_mac_verification.value_namespace = name_space;
        source_mac_verification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-verification")
    {
        ipv4_verification.yfilter = yfilter;
    }
    if(value_path == "destination-mac-verification")
    {
        destination_mac_verification.yfilter = yfilter;
    }
    if(value_path == "source-mac-verification")
    {
        source_mac_verification.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-verification" || name == "destination-mac-verification" || name == "source-mac-verification" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::InterfaceProfile()
    :
    profile_id{YType::enumeration, "profile-id"},
    dhcp_snooping_id{YType::str, "dhcp-snooping-id"}
{

    yang_name = "interface-profile"; yang_parent_name = "bd-attachment-circuit"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::~InterfaceProfile()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::has_data() const
{
    if (is_presence_container) return true;
    return profile_id.is_set
	|| dhcp_snooping_id.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_id.yfilter)
	|| ydk::is_set(dhcp_snooping_id.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_id.is_set || is_set(profile_id.yfilter)) leaf_name_data.push_back(profile_id.get_name_leafdata());
    if (dhcp_snooping_id.is_set || is_set(dhcp_snooping_id.yfilter)) leaf_name_data.push_back(dhcp_snooping_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-id")
    {
        profile_id = value;
        profile_id.value_namespace = name_space;
        profile_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-snooping-id")
    {
        dhcp_snooping_id = value;
        dhcp_snooping_id.value_namespace = name_space;
        dhcp_snooping_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-id")
    {
        profile_id.yfilter = yfilter;
    }
    if(value_path == "dhcp-snooping-id")
    {
        dhcp_snooping_id.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-id" || name == "dhcp-snooping-id")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlTypes()
    :
    bdac_storm_control_type(this, {"sctype"})
{

    yang_name = "bdac-storm-control-types"; yang_parent_name = "bd-attachment-circuit"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::~BdacStormControlTypes()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bdac_storm_control_type.len(); index++)
    {
        if(bdac_storm_control_type[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::has_operation() const
{
    for (std::size_t index=0; index<bdac_storm_control_type.len(); index++)
    {
        if(bdac_storm_control_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdac-storm-control-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bdac-storm-control-type")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType>();
        c->parent = this;
        bdac_storm_control_type.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bdac_storm_control_type.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bdac-storm-control-type")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::BdacStormControlType()
    :
    sctype{YType::enumeration, "sctype"}
        ,
    storm_control_unit(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit>())
{
    storm_control_unit->parent = this;

    yang_name = "bdac-storm-control-type"; yang_parent_name = "bdac-storm-control-types"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::~BdacStormControlType()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::has_data() const
{
    if (is_presence_container) return true;
    return sctype.is_set
	|| (storm_control_unit !=  nullptr && storm_control_unit->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sctype.yfilter)
	|| (storm_control_unit !=  nullptr && storm_control_unit->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdac-storm-control-type";
    ADD_KEY_TOKEN(sctype, "sctype");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sctype.is_set || is_set(sctype.yfilter)) leaf_name_data.push_back(sctype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "storm-control-unit")
    {
        if(storm_control_unit == nullptr)
        {
            storm_control_unit = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit>();
        }
        return storm_control_unit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(storm_control_unit != nullptr)
    {
        children["storm-control-unit"] = storm_control_unit;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sctype")
    {
        sctype = value;
        sctype.value_namespace = name_space;
        sctype.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sctype")
    {
        sctype.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "storm-control-unit" || name == "sctype")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::StormControlUnit()
    :
    kbits_per_sec{YType::uint32, "kbits-per-sec"},
    pkts_per_sec{YType::uint32, "pkts-per-sec"}
{

    yang_name = "storm-control-unit"; yang_parent_name = "bdac-storm-control-type"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::~StormControlUnit()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::has_data() const
{
    if (is_presence_container) return true;
    return kbits_per_sec.is_set
	|| pkts_per_sec.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kbits_per_sec.yfilter)
	|| ydk::is_set(pkts_per_sec.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control-unit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kbits_per_sec.is_set || is_set(kbits_per_sec.yfilter)) leaf_name_data.push_back(kbits_per_sec.get_name_leafdata());
    if (pkts_per_sec.is_set || is_set(pkts_per_sec.yfilter)) leaf_name_data.push_back(pkts_per_sec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kbits-per-sec")
    {
        kbits_per_sec = value;
        kbits_per_sec.value_namespace = name_space;
        kbits_per_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-per-sec")
    {
        pkts_per_sec = value;
        pkts_per_sec.value_namespace = name_space;
        pkts_per_sec.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kbits-per-sec")
    {
        kbits_per_sec.yfilter = yfilter;
    }
    if(value_path == "pkts-per-sec")
    {
        pkts_per_sec.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kbits-per-sec" || name == "pkts-per-sec")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizon()
    :
    split_horizon_group_id(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId>())
{
    split_horizon_group_id->parent = this;

    yang_name = "split-horizon"; yang_parent_name = "bd-attachment-circuit"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::~SplitHorizon()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::has_data() const
{
    if (is_presence_container) return true;
    return (split_horizon_group_id !=  nullptr && split_horizon_group_id->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::has_operation() const
{
    return is_set(yfilter)
	|| (split_horizon_group_id !=  nullptr && split_horizon_group_id->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-horizon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "split-horizon-group-id")
    {
        if(split_horizon_group_id == nullptr)
        {
            split_horizon_group_id = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId>();
        }
        return split_horizon_group_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(split_horizon_group_id != nullptr)
    {
        children["split-horizon-group-id"] = split_horizon_group_id;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "split-horizon-group-id")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::SplitHorizonGroupId()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "split-horizon-group-id"; yang_parent_name = "split-horizon"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::~SplitHorizonGroupId()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-horizon-group-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddresses()
    :
    static_mac_address(this, {"address"})
{

    yang_name = "static-mac-addresses"; yang_parent_name = "bd-attachment-circuit"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::~StaticMacAddresses()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<static_mac_address.len(); index++)
    {
        if(static_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::has_operation() const
{
    for (std::size_t index=0; index<static_mac_address.len(); index++)
    {
        if(static_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-mac-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-mac-address")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress>();
        c->parent = this;
        static_mac_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : static_mac_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-mac-address")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::StaticMacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "static-mac-address"; yang_parent_name = "static-mac-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::~StaticMacAddress()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-mac-address";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMac()
    :
    interface_mac_port_down_flush{YType::enumeration, "interface-mac-port-down-flush"},
    interface_mac_learning{YType::enumeration, "interface-mac-learning"}
        ,
    interface_mac_aging(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging>())
    , interface_mac_secure(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure>())
    , interface_mac_limit(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit>())
{
    interface_mac_aging->parent = this;
    interface_mac_secure->parent = this;
    interface_mac_limit->parent = this;

    yang_name = "interface-mac"; yang_parent_name = "bd-attachment-circuit"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::~InterfaceMac()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::has_data() const
{
    if (is_presence_container) return true;
    return interface_mac_port_down_flush.is_set
	|| interface_mac_learning.is_set
	|| (interface_mac_aging !=  nullptr && interface_mac_aging->has_data())
	|| (interface_mac_secure !=  nullptr && interface_mac_secure->has_data())
	|| (interface_mac_limit !=  nullptr && interface_mac_limit->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_mac_port_down_flush.yfilter)
	|| ydk::is_set(interface_mac_learning.yfilter)
	|| (interface_mac_aging !=  nullptr && interface_mac_aging->has_operation())
	|| (interface_mac_secure !=  nullptr && interface_mac_secure->has_operation())
	|| (interface_mac_limit !=  nullptr && interface_mac_limit->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_mac_port_down_flush.is_set || is_set(interface_mac_port_down_flush.yfilter)) leaf_name_data.push_back(interface_mac_port_down_flush.get_name_leafdata());
    if (interface_mac_learning.is_set || is_set(interface_mac_learning.yfilter)) leaf_name_data.push_back(interface_mac_learning.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-mac-aging")
    {
        if(interface_mac_aging == nullptr)
        {
            interface_mac_aging = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging>();
        }
        return interface_mac_aging;
    }

    if(child_yang_name == "interface-mac-secure")
    {
        if(interface_mac_secure == nullptr)
        {
            interface_mac_secure = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure>();
        }
        return interface_mac_secure;
    }

    if(child_yang_name == "interface-mac-limit")
    {
        if(interface_mac_limit == nullptr)
        {
            interface_mac_limit = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit>();
        }
        return interface_mac_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_mac_aging != nullptr)
    {
        children["interface-mac-aging"] = interface_mac_aging;
    }

    if(interface_mac_secure != nullptr)
    {
        children["interface-mac-secure"] = interface_mac_secure;
    }

    if(interface_mac_limit != nullptr)
    {
        children["interface-mac-limit"] = interface_mac_limit;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-mac-port-down-flush")
    {
        interface_mac_port_down_flush = value;
        interface_mac_port_down_flush.value_namespace = name_space;
        interface_mac_port_down_flush.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mac-learning")
    {
        interface_mac_learning = value;
        interface_mac_learning.value_namespace = name_space;
        interface_mac_learning.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-mac-port-down-flush")
    {
        interface_mac_port_down_flush.yfilter = yfilter;
    }
    if(value_path == "interface-mac-learning")
    {
        interface_mac_learning.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-mac-aging" || name == "interface-mac-secure" || name == "interface-mac-limit" || name == "interface-mac-port-down-flush" || name == "interface-mac-learning")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::InterfaceMacAging()
    :
    interface_mac_aging_time{YType::uint32, "interface-mac-aging-time"},
    interface_mac_aging_type{YType::enumeration, "interface-mac-aging-type"}
{

    yang_name = "interface-mac-aging"; yang_parent_name = "interface-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::~InterfaceMacAging()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::has_data() const
{
    if (is_presence_container) return true;
    return interface_mac_aging_time.is_set
	|| interface_mac_aging_type.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_mac_aging_time.yfilter)
	|| ydk::is_set(interface_mac_aging_type.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-mac-aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_mac_aging_time.is_set || is_set(interface_mac_aging_time.yfilter)) leaf_name_data.push_back(interface_mac_aging_time.get_name_leafdata());
    if (interface_mac_aging_type.is_set || is_set(interface_mac_aging_type.yfilter)) leaf_name_data.push_back(interface_mac_aging_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-mac-aging-time")
    {
        interface_mac_aging_time = value;
        interface_mac_aging_time.value_namespace = name_space;
        interface_mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mac-aging-type")
    {
        interface_mac_aging_type = value;
        interface_mac_aging_type.value_namespace = name_space;
        interface_mac_aging_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-mac-aging-time")
    {
        interface_mac_aging_time.yfilter = yfilter;
    }
    if(value_path == "interface-mac-aging-type")
    {
        interface_mac_aging_type.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-mac-aging-time" || name == "interface-mac-aging-type")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::InterfaceMacSecure()
    :
    logging{YType::enumeration, "logging"},
    disable{YType::empty, "disable"},
    action{YType::enumeration, "action"},
    enable{YType::empty, "enable"}
{

    yang_name = "interface-mac-secure"; yang_parent_name = "interface-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::~InterfaceMacSecure()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| disable.is_set
	|| action.is_set
	|| enable.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-mac-secure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "disable" || name == "action" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::InterfaceMacLimit()
    :
    interface_mac_limit_max{YType::uint32, "interface-mac-limit-max"},
    interface_mac_limit_notif{YType::enumeration, "interface-mac-limit-notif"},
    interface_mac_limit_action{YType::enumeration, "interface-mac-limit-action"}
{

    yang_name = "interface-mac-limit"; yang_parent_name = "interface-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::~InterfaceMacLimit()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::has_data() const
{
    if (is_presence_container) return true;
    return interface_mac_limit_max.is_set
	|| interface_mac_limit_notif.is_set
	|| interface_mac_limit_action.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_mac_limit_max.yfilter)
	|| ydk::is_set(interface_mac_limit_notif.yfilter)
	|| ydk::is_set(interface_mac_limit_action.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-mac-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_mac_limit_max.is_set || is_set(interface_mac_limit_max.yfilter)) leaf_name_data.push_back(interface_mac_limit_max.get_name_leafdata());
    if (interface_mac_limit_notif.is_set || is_set(interface_mac_limit_notif.yfilter)) leaf_name_data.push_back(interface_mac_limit_notif.get_name_leafdata());
    if (interface_mac_limit_action.is_set || is_set(interface_mac_limit_action.yfilter)) leaf_name_data.push_back(interface_mac_limit_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-mac-limit-max")
    {
        interface_mac_limit_max = value;
        interface_mac_limit_max.value_namespace = name_space;
        interface_mac_limit_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mac-limit-notif")
    {
        interface_mac_limit_notif = value;
        interface_mac_limit_notif.value_namespace = name_space;
        interface_mac_limit_notif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mac-limit-action")
    {
        interface_mac_limit_action = value;
        interface_mac_limit_action.value_namespace = name_space;
        interface_mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-mac-limit-max")
    {
        interface_mac_limit_max.yfilter = yfilter;
    }
    if(value_path == "interface-mac-limit-notif")
    {
        interface_mac_limit_notif.yfilter = yfilter;
    }
    if(value_path == "interface-mac-limit-action")
    {
        interface_mac_limit_action.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-mac-limit-max" || name == "interface-mac-limit-notif" || name == "interface-mac-limit-action")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpns()
    :
    bd_pseudowire_evpn(this, {"eviid", "acid"})
{

    yang_name = "bd-pseudowire-evpns"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::~BdPseudowireEvpns()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bd_pseudowire_evpn.len(); index++)
    {
        if(bd_pseudowire_evpn[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::has_operation() const
{
    for (std::size_t index=0; index<bd_pseudowire_evpn.len(); index++)
    {
        if(bd_pseudowire_evpn[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pseudowire-evpns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-pseudowire-evpn")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn>();
        c->parent = this;
        bd_pseudowire_evpn.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bd_pseudowire_evpn.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-pseudowire-evpn")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::BdPseudowireEvpn()
    :
    eviid{YType::uint32, "eviid"},
    acid{YType::uint32, "acid"}
{

    yang_name = "bd-pseudowire-evpn"; yang_parent_name = "bd-pseudowire-evpns"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::~BdPseudowireEvpn()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::has_data() const
{
    if (is_presence_container) return true;
    return eviid.is_set
	|| acid.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eviid.yfilter)
	|| ydk::is_set(acid.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pseudowire-evpn";
    ADD_KEY_TOKEN(eviid, "eviid");
    ADD_KEY_TOKEN(acid, "acid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eviid.is_set || is_set(eviid.yfilter)) leaf_name_data.push_back(eviid.get_name_leafdata());
    if (acid.is_set || is_set(acid.yfilter)) leaf_name_data.push_back(acid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eviid")
    {
        eviid = value;
        eviid.value_namespace = name_space;
        eviid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acid")
    {
        acid = value;
        acid.value_namespace = name_space;
        acid.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eviid")
    {
        eviid.yfilter = yfilter;
    }
    if(value_path == "acid")
    {
        acid.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eviid" || name == "acid")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::IpSourceGuard()
    :
    logging{YType::empty, "logging"},
    enable{YType::empty, "enable"}
{

    yang_name = "ip-source-guard"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::~IpSourceGuard()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| enable.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-source-guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::Dai()
    :
    logging{YType::empty, "logging"},
    enable{YType::empty, "enable"}
        ,
    dai_address_validation(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation>())
{
    dai_address_validation->parent = this;

    yang_name = "dai"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::~Dai()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| enable.is_set
	|| (dai_address_validation !=  nullptr && dai_address_validation->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (dai_address_validation !=  nullptr && dai_address_validation->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dai-address-validation")
    {
        if(dai_address_validation == nullptr)
        {
            dai_address_validation = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation>();
        }
        return dai_address_validation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dai_address_validation != nullptr)
    {
        children["dai-address-validation"] = dai_address_validation;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dai-address-validation" || name == "logging" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::DaiAddressValidation()
    :
    ipv4_verification{YType::empty, "ipv4-verification"},
    destination_mac_verification{YType::empty, "destination-mac-verification"},
    source_mac_verification{YType::empty, "source-mac-verification"},
    enable{YType::empty, "enable"}
{

    yang_name = "dai-address-validation"; yang_parent_name = "dai"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::~DaiAddressValidation()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_verification.is_set
	|| destination_mac_verification.is_set
	|| source_mac_verification.is_set
	|| enable.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_verification.yfilter)
	|| ydk::is_set(destination_mac_verification.yfilter)
	|| ydk::is_set(source_mac_verification.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai-address-validation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_verification.is_set || is_set(ipv4_verification.yfilter)) leaf_name_data.push_back(ipv4_verification.get_name_leafdata());
    if (destination_mac_verification.is_set || is_set(destination_mac_verification.yfilter)) leaf_name_data.push_back(destination_mac_verification.get_name_leafdata());
    if (source_mac_verification.is_set || is_set(source_mac_verification.yfilter)) leaf_name_data.push_back(source_mac_verification.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-verification")
    {
        ipv4_verification = value;
        ipv4_verification.value_namespace = name_space;
        ipv4_verification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-mac-verification")
    {
        destination_mac_verification = value;
        destination_mac_verification.value_namespace = name_space;
        destination_mac_verification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-mac-verification")
    {
        source_mac_verification = value;
        source_mac_verification.value_namespace = name_space;
        source_mac_verification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-verification")
    {
        ipv4_verification.yfilter = yfilter;
    }
    if(value_path == "destination-mac-verification")
    {
        destination_mac_verification.yfilter = yfilter;
    }
    if(value_path == "source-mac-verification")
    {
        source_mac_verification.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-verification" || name == "destination-mac-verification" || name == "source-mac-verification" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterfaces()
    :
    routed_interface(this, {"interface_name"})
{

    yang_name = "routed-interfaces"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::~RoutedInterfaces()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<routed_interface.len(); index++)
    {
        if(routed_interface[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::has_operation() const
{
    for (std::size_t index=0; index<routed_interface.len(); index++)
    {
        if(routed_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routed-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routed-interface")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface>();
        c->parent = this;
        routed_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : routed_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routed-interface")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterface()
    :
    interface_name{YType::str, "interface-name"}
        ,
    routed_interface_split_horizon_group(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup>())
{
    routed_interface_split_horizon_group->parent = this;

    yang_name = "routed-interface"; yang_parent_name = "routed-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::~RoutedInterface()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (routed_interface_split_horizon_group !=  nullptr && routed_interface_split_horizon_group->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (routed_interface_split_horizon_group !=  nullptr && routed_interface_split_horizon_group->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routed-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routed-interface-split-horizon-group")
    {
        if(routed_interface_split_horizon_group == nullptr)
        {
            routed_interface_split_horizon_group = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup>();
        }
        return routed_interface_split_horizon_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(routed_interface_split_horizon_group != nullptr)
    {
        children["routed-interface-split-horizon-group"] = routed_interface_split_horizon_group;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routed-interface-split-horizon-group" || name == "interface-name")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::RoutedInterfaceSplitHorizonGroup()
    :
    routed_interface_split_horizon_group_core{YType::empty, "routed-interface-split-horizon-group-core"}
{

    yang_name = "routed-interface-split-horizon-group"; yang_parent_name = "routed-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::~RoutedInterfaceSplitHorizonGroup()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::has_data() const
{
    if (is_presence_container) return true;
    return routed_interface_split_horizon_group_core.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(routed_interface_split_horizon_group_core.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routed-interface-split-horizon-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (routed_interface_split_horizon_group_core.is_set || is_set(routed_interface_split_horizon_group_core.yfilter)) leaf_name_data.push_back(routed_interface_split_horizon_group_core.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "routed-interface-split-horizon-group-core")
    {
        routed_interface_split_horizon_group_core = value;
        routed_interface_split_horizon_group_core.value_namespace = name_space;
        routed_interface_split_horizon_group_core.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "routed-interface-split-horizon-group-core")
    {
        routed_interface_split_horizon_group_core.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routed-interface-split-horizon-group-core")
        return true;
    return false;
}

L2vpn::Database::PseudowireClasses::PseudowireClasses()
    :
    pseudowire_class(this, {"name"})
{

    yang_name = "pseudowire-classes"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Database::PseudowireClasses::~PseudowireClasses()
{
}

bool L2vpn::Database::PseudowireClasses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pseudowire_class.len(); index++)
    {
        if(pseudowire_class[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::PseudowireClasses::has_operation() const
{
    for (std::size_t index=0; index<pseudowire_class.len(); index++)
    {
        if(pseudowire_class[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::PseudowireClasses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Database::PseudowireClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::PseudowireClasses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::PseudowireClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire-class")
    {
        auto c = std::make_shared<L2vpn::Database::PseudowireClasses::PseudowireClass>();
        c->parent = this;
        pseudowire_class.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::PseudowireClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pseudowire_class.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::PseudowireClasses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::PseudowireClasses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::PseudowireClasses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-class")
        return true;
    return false;
}

L2vpn::Database::PseudowireClasses::PseudowireClass::PseudowireClass()
    :
    name{YType::str, "name"},
    mac_withdraw{YType::empty, "mac-withdraw"},
    enable{YType::empty, "enable"}
        ,
    l2tpv3_encapsulation(std::make_shared<L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation>())
    , backup_disable_delay(std::make_shared<L2vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay>())
    , mpls_encapsulation(std::make_shared<L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation>())
{
    l2tpv3_encapsulation->parent = this;
    backup_disable_delay->parent = this;
    mpls_encapsulation->parent = this;

    yang_name = "pseudowire-class"; yang_parent_name = "pseudowire-classes"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Database::PseudowireClasses::PseudowireClass::~PseudowireClass()
{
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| mac_withdraw.is_set
	|| enable.is_set
	|| (l2tpv3_encapsulation !=  nullptr && l2tpv3_encapsulation->has_data())
	|| (backup_disable_delay !=  nullptr && backup_disable_delay->has_data())
	|| (mpls_encapsulation !=  nullptr && mpls_encapsulation->has_data());
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(mac_withdraw.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (l2tpv3_encapsulation !=  nullptr && l2tpv3_encapsulation->has_operation())
	|| (backup_disable_delay !=  nullptr && backup_disable_delay->has_operation())
	|| (mpls_encapsulation !=  nullptr && mpls_encapsulation->has_operation());
}

std::string L2vpn::Database::PseudowireClasses::PseudowireClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/pseudowire-classes/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Database::PseudowireClasses::PseudowireClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-class";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::PseudowireClasses::PseudowireClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mac_withdraw.is_set || is_set(mac_withdraw.yfilter)) leaf_name_data.push_back(mac_withdraw.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::PseudowireClasses::PseudowireClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2tpv3-encapsulation")
    {
        if(l2tpv3_encapsulation == nullptr)
        {
            l2tpv3_encapsulation = std::make_shared<L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation>();
        }
        return l2tpv3_encapsulation;
    }

    if(child_yang_name == "backup-disable-delay")
    {
        if(backup_disable_delay == nullptr)
        {
            backup_disable_delay = std::make_shared<L2vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay>();
        }
        return backup_disable_delay;
    }

    if(child_yang_name == "mpls-encapsulation")
    {
        if(mpls_encapsulation == nullptr)
        {
            mpls_encapsulation = std::make_shared<L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation>();
        }
        return mpls_encapsulation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::PseudowireClasses::PseudowireClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(l2tpv3_encapsulation != nullptr)
    {
        children["l2tpv3-encapsulation"] = l2tpv3_encapsulation;
    }

    if(backup_disable_delay != nullptr)
    {
        children["backup-disable-delay"] = backup_disable_delay;
    }

    if(mpls_encapsulation != nullptr)
    {
        children["mpls-encapsulation"] = mpls_encapsulation;
    }

    return children;
}

void L2vpn::Database::PseudowireClasses::PseudowireClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-withdraw")
    {
        mac_withdraw = value;
        mac_withdraw.value_namespace = name_space;
        mac_withdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::PseudowireClasses::PseudowireClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "mac-withdraw")
    {
        mac_withdraw.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2tpv3-encapsulation" || name == "backup-disable-delay" || name == "mpls-encapsulation" || name == "name" || name == "mac-withdraw" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::L2tpv3Encapsulation()
    :
    df_bit_set{YType::empty, "df-bit-set"},
    cookie_size{YType::enumeration, "cookie-size"},
    source_address{YType::str, "source-address"},
    transport_mode{YType::enumeration, "transport-mode"},
    enable{YType::empty, "enable"},
    time_to_live{YType::uint32, "time-to-live"}
        ,
    sequencing(std::make_shared<L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::Sequencing>())
    , type_of_service(std::make_shared<L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::TypeOfService>())
    , signaling_protocol(std::make_shared<L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::SignalingProtocol>())
    , path_mtu(std::make_shared<L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::PathMtu>())
{
    sequencing->parent = this;
    type_of_service->parent = this;
    signaling_protocol->parent = this;
    path_mtu->parent = this;

    yang_name = "l2tpv3-encapsulation"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::~L2tpv3Encapsulation()
{
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::has_data() const
{
    if (is_presence_container) return true;
    return df_bit_set.is_set
	|| cookie_size.is_set
	|| source_address.is_set
	|| transport_mode.is_set
	|| enable.is_set
	|| time_to_live.is_set
	|| (sequencing !=  nullptr && sequencing->has_data())
	|| (type_of_service !=  nullptr && type_of_service->has_data())
	|| (signaling_protocol !=  nullptr && signaling_protocol->has_data())
	|| (path_mtu !=  nullptr && path_mtu->has_data());
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(df_bit_set.yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(transport_mode.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(time_to_live.yfilter)
	|| (sequencing !=  nullptr && sequencing->has_operation())
	|| (type_of_service !=  nullptr && type_of_service->has_operation())
	|| (signaling_protocol !=  nullptr && signaling_protocol->has_operation())
	|| (path_mtu !=  nullptr && path_mtu->has_operation());
}

std::string L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (df_bit_set.is_set || is_set(df_bit_set.yfilter)) leaf_name_data.push_back(df_bit_set.get_name_leafdata());
    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (transport_mode.is_set || is_set(transport_mode.yfilter)) leaf_name_data.push_back(transport_mode.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (time_to_live.is_set || is_set(time_to_live.yfilter)) leaf_name_data.push_back(time_to_live.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sequencing")
    {
        if(sequencing == nullptr)
        {
            sequencing = std::make_shared<L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::Sequencing>();
        }
        return sequencing;
    }

    if(child_yang_name == "type-of-service")
    {
        if(type_of_service == nullptr)
        {
            type_of_service = std::make_shared<L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::TypeOfService>();
        }
        return type_of_service;
    }

    if(child_yang_name == "signaling-protocol")
    {
        if(signaling_protocol == nullptr)
        {
            signaling_protocol = std::make_shared<L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::SignalingProtocol>();
        }
        return signaling_protocol;
    }

    if(child_yang_name == "path-mtu")
    {
        if(path_mtu == nullptr)
        {
            path_mtu = std::make_shared<L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::PathMtu>();
        }
        return path_mtu;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sequencing != nullptr)
    {
        children["sequencing"] = sequencing;
    }

    if(type_of_service != nullptr)
    {
        children["type-of-service"] = type_of_service;
    }

    if(signaling_protocol != nullptr)
    {
        children["signaling-protocol"] = signaling_protocol;
    }

    if(path_mtu != nullptr)
    {
        children["path-mtu"] = path_mtu;
    }

    return children;
}

void L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "df-bit-set")
    {
        df_bit_set = value;
        df_bit_set.value_namespace = name_space;
        df_bit_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-mode")
    {
        transport_mode = value;
        transport_mode.value_namespace = name_space;
        transport_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-to-live")
    {
        time_to_live = value;
        time_to_live.value_namespace = name_space;
        time_to_live.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "df-bit-set")
    {
        df_bit_set.yfilter = yfilter;
    }
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "transport-mode")
    {
        transport_mode.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "time-to-live")
    {
        time_to_live.yfilter = yfilter;
    }
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequencing" || name == "type-of-service" || name == "signaling-protocol" || name == "path-mtu" || name == "df-bit-set" || name == "cookie-size" || name == "source-address" || name == "transport-mode" || name == "enable" || name == "time-to-live")
        return true;
    return false;
}

L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::Sequencing::Sequencing()
    :
    sequencing{YType::enumeration, "sequencing"},
    resync_threshold{YType::uint32, "resync-threshold"}
{

    yang_name = "sequencing"; yang_parent_name = "l2tpv3-encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::Sequencing::~Sequencing()
{
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::Sequencing::has_data() const
{
    if (is_presence_container) return true;
    return sequencing.is_set
	|| resync_threshold.is_set;
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::Sequencing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequencing.yfilter)
	|| ydk::is_set(resync_threshold.yfilter);
}

std::string L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::Sequencing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequencing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::Sequencing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequencing.is_set || is_set(sequencing.yfilter)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (resync_threshold.is_set || is_set(resync_threshold.yfilter)) leaf_name_data.push_back(resync_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::Sequencing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::Sequencing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::Sequencing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequencing")
    {
        sequencing = value;
        sequencing.value_namespace = name_space;
        sequencing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resync-threshold")
    {
        resync_threshold = value;
        resync_threshold.value_namespace = name_space;
        resync_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::Sequencing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequencing")
    {
        sequencing.yfilter = yfilter;
    }
    if(value_path == "resync-threshold")
    {
        resync_threshold.yfilter = yfilter;
    }
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::Sequencing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequencing" || name == "resync-threshold")
        return true;
    return false;
}

L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::TypeOfService::TypeOfService()
    :
    type_of_service_value{YType::uint32, "type-of-service-value"},
    type_of_service_mode{YType::enumeration, "type-of-service-mode"}
{

    yang_name = "type-of-service"; yang_parent_name = "l2tpv3-encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::TypeOfService::~TypeOfService()
{
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::TypeOfService::has_data() const
{
    if (is_presence_container) return true;
    return type_of_service_value.is_set
	|| type_of_service_mode.is_set;
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::TypeOfService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type_of_service_value.yfilter)
	|| ydk::is_set(type_of_service_mode.yfilter);
}

std::string L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::TypeOfService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type-of-service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::TypeOfService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type_of_service_value.is_set || is_set(type_of_service_value.yfilter)) leaf_name_data.push_back(type_of_service_value.get_name_leafdata());
    if (type_of_service_mode.is_set || is_set(type_of_service_mode.yfilter)) leaf_name_data.push_back(type_of_service_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::TypeOfService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::TypeOfService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::TypeOfService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type-of-service-value")
    {
        type_of_service_value = value;
        type_of_service_value.value_namespace = name_space;
        type_of_service_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type-of-service-mode")
    {
        type_of_service_mode = value;
        type_of_service_mode.value_namespace = name_space;
        type_of_service_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::TypeOfService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type-of-service-value")
    {
        type_of_service_value.yfilter = yfilter;
    }
    if(value_path == "type-of-service-mode")
    {
        type_of_service_mode.yfilter = yfilter;
    }
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::TypeOfService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type-of-service-value" || name == "type-of-service-mode")
        return true;
    return false;
}

L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::SignalingProtocol::SignalingProtocol()
    :
    protocol{YType::enumeration, "protocol"},
    l2tpv3_class_name{YType::str, "l2tpv3-class-name"}
{

    yang_name = "signaling-protocol"; yang_parent_name = "l2tpv3-encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::SignalingProtocol::~SignalingProtocol()
{
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::SignalingProtocol::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| l2tpv3_class_name.is_set;
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::SignalingProtocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(l2tpv3_class_name.yfilter);
}

std::string L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::SignalingProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signaling-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::SignalingProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (l2tpv3_class_name.is_set || is_set(l2tpv3_class_name.yfilter)) leaf_name_data.push_back(l2tpv3_class_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::SignalingProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::SignalingProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::SignalingProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tpv3-class-name")
    {
        l2tpv3_class_name = value;
        l2tpv3_class_name.value_namespace = name_space;
        l2tpv3_class_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::SignalingProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "l2tpv3-class-name")
    {
        l2tpv3_class_name.yfilter = yfilter;
    }
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::SignalingProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "l2tpv3-class-name")
        return true;
    return false;
}

L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::PathMtu::PathMtu()
    :
    enable{YType::empty, "enable"},
    max_path_mtu{YType::uint32, "max-path-mtu"}
{

    yang_name = "path-mtu"; yang_parent_name = "l2tpv3-encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::PathMtu::~PathMtu()
{
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::PathMtu::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| max_path_mtu.is_set;
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::PathMtu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(max_path_mtu.yfilter);
}

std::string L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::PathMtu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-mtu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::PathMtu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (max_path_mtu.is_set || is_set(max_path_mtu.yfilter)) leaf_name_data.push_back(max_path_mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::PathMtu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::PathMtu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::PathMtu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-path-mtu")
    {
        max_path_mtu = value;
        max_path_mtu.value_namespace = name_space;
        max_path_mtu.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::PathMtu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "max-path-mtu")
    {
        max_path_mtu.yfilter = yfilter;
    }
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::PathMtu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "max-path-mtu")
        return true;
    return false;
}

L2vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::BackupDisableDelay()
    :
    type{YType::enumeration, "type"},
    disable_backup{YType::uint32, "disable-backup"}
{

    yang_name = "backup-disable-delay"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::~BackupDisableDelay()
{
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| disable_backup.is_set;
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(disable_backup.yfilter);
}

std::string L2vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-disable-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (disable_backup.is_set || is_set(disable_backup.yfilter)) leaf_name_data.push_back(disable_backup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-backup")
    {
        disable_backup = value;
        disable_backup.value_namespace = name_space;
        disable_backup.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "disable-backup")
    {
        disable_backup.yfilter = yfilter;
    }
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "disable-backup")
        return true;
    return false;
}

L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsEncapsulation()
    :
    pw_switching_tlv{YType::enumeration, "pw-switching-tlv"},
    static_tag_rewrite{YType::uint32, "static-tag-rewrite"},
    signaling_protocol{YType::enumeration, "signaling-protocol"},
    vccv_type{YType::enumeration, "vccv-type"},
    source_address{YType::str, "source-address"},
    transport_mode{YType::enumeration, "transport-mode"},
    enable{YType::empty, "enable"},
    control_word{YType::enumeration, "control-word"}
        ,
    sequencing(std::make_shared<L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing>())
    , mpls_redundancy(std::make_shared<L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy>())
    , preferred_path(std::make_shared<L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath>())
    , load_balance_group(std::make_shared<L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup>())
{
    sequencing->parent = this;
    mpls_redundancy->parent = this;
    preferred_path->parent = this;
    load_balance_group->parent = this;

    yang_name = "mpls-encapsulation"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::~MplsEncapsulation()
{
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::has_data() const
{
    if (is_presence_container) return true;
    return pw_switching_tlv.is_set
	|| static_tag_rewrite.is_set
	|| signaling_protocol.is_set
	|| vccv_type.is_set
	|| source_address.is_set
	|| transport_mode.is_set
	|| enable.is_set
	|| control_word.is_set
	|| (sequencing !=  nullptr && sequencing->has_data())
	|| (mpls_redundancy !=  nullptr && mpls_redundancy->has_data())
	|| (preferred_path !=  nullptr && preferred_path->has_data())
	|| (load_balance_group !=  nullptr && load_balance_group->has_data());
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_switching_tlv.yfilter)
	|| ydk::is_set(static_tag_rewrite.yfilter)
	|| ydk::is_set(signaling_protocol.yfilter)
	|| ydk::is_set(vccv_type.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(transport_mode.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(control_word.yfilter)
	|| (sequencing !=  nullptr && sequencing->has_operation())
	|| (mpls_redundancy !=  nullptr && mpls_redundancy->has_operation())
	|| (preferred_path !=  nullptr && preferred_path->has_operation())
	|| (load_balance_group !=  nullptr && load_balance_group->has_operation());
}

std::string L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_switching_tlv.is_set || is_set(pw_switching_tlv.yfilter)) leaf_name_data.push_back(pw_switching_tlv.get_name_leafdata());
    if (static_tag_rewrite.is_set || is_set(static_tag_rewrite.yfilter)) leaf_name_data.push_back(static_tag_rewrite.get_name_leafdata());
    if (signaling_protocol.is_set || is_set(signaling_protocol.yfilter)) leaf_name_data.push_back(signaling_protocol.get_name_leafdata());
    if (vccv_type.is_set || is_set(vccv_type.yfilter)) leaf_name_data.push_back(vccv_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (transport_mode.is_set || is_set(transport_mode.yfilter)) leaf_name_data.push_back(transport_mode.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (control_word.is_set || is_set(control_word.yfilter)) leaf_name_data.push_back(control_word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sequencing")
    {
        if(sequencing == nullptr)
        {
            sequencing = std::make_shared<L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing>();
        }
        return sequencing;
    }

    if(child_yang_name == "mpls-redundancy")
    {
        if(mpls_redundancy == nullptr)
        {
            mpls_redundancy = std::make_shared<L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy>();
        }
        return mpls_redundancy;
    }

    if(child_yang_name == "preferred-path")
    {
        if(preferred_path == nullptr)
        {
            preferred_path = std::make_shared<L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath>();
        }
        return preferred_path;
    }

    if(child_yang_name == "load-balance-group")
    {
        if(load_balance_group == nullptr)
        {
            load_balance_group = std::make_shared<L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup>();
        }
        return load_balance_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sequencing != nullptr)
    {
        children["sequencing"] = sequencing;
    }

    if(mpls_redundancy != nullptr)
    {
        children["mpls-redundancy"] = mpls_redundancy;
    }

    if(preferred_path != nullptr)
    {
        children["preferred-path"] = preferred_path;
    }

    if(load_balance_group != nullptr)
    {
        children["load-balance-group"] = load_balance_group;
    }

    return children;
}

void L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-switching-tlv")
    {
        pw_switching_tlv = value;
        pw_switching_tlv.value_namespace = name_space;
        pw_switching_tlv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static-tag-rewrite")
    {
        static_tag_rewrite = value;
        static_tag_rewrite.value_namespace = name_space;
        static_tag_rewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-protocol")
    {
        signaling_protocol = value;
        signaling_protocol.value_namespace = name_space;
        signaling_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vccv-type")
    {
        vccv_type = value;
        vccv_type.value_namespace = name_space;
        vccv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-mode")
    {
        transport_mode = value;
        transport_mode.value_namespace = name_space;
        transport_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-word")
    {
        control_word = value;
        control_word.value_namespace = name_space;
        control_word.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-switching-tlv")
    {
        pw_switching_tlv.yfilter = yfilter;
    }
    if(value_path == "static-tag-rewrite")
    {
        static_tag_rewrite.yfilter = yfilter;
    }
    if(value_path == "signaling-protocol")
    {
        signaling_protocol.yfilter = yfilter;
    }
    if(value_path == "vccv-type")
    {
        vccv_type.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "transport-mode")
    {
        transport_mode.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "control-word")
    {
        control_word.yfilter = yfilter;
    }
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequencing" || name == "mpls-redundancy" || name == "preferred-path" || name == "load-balance-group" || name == "pw-switching-tlv" || name == "static-tag-rewrite" || name == "signaling-protocol" || name == "vccv-type" || name == "source-address" || name == "transport-mode" || name == "enable" || name == "control-word")
        return true;
    return false;
}

L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::Sequencing()
    :
    sequencing{YType::enumeration, "sequencing"},
    resync_threshold{YType::uint32, "resync-threshold"}
{

    yang_name = "sequencing"; yang_parent_name = "mpls-encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::~Sequencing()
{
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::has_data() const
{
    if (is_presence_container) return true;
    return sequencing.is_set
	|| resync_threshold.is_set;
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequencing.yfilter)
	|| ydk::is_set(resync_threshold.yfilter);
}

std::string L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequencing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequencing.is_set || is_set(sequencing.yfilter)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (resync_threshold.is_set || is_set(resync_threshold.yfilter)) leaf_name_data.push_back(resync_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequencing")
    {
        sequencing = value;
        sequencing.value_namespace = name_space;
        sequencing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resync-threshold")
    {
        resync_threshold = value;
        resync_threshold.value_namespace = name_space;
        resync_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequencing")
    {
        sequencing.yfilter = yfilter;
    }
    if(value_path == "resync-threshold")
    {
        resync_threshold.yfilter = yfilter;
    }
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequencing" || name == "resync-threshold")
        return true;
    return false;
}

L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::MplsRedundancy()
    :
    redundancy_one_way{YType::empty, "redundancy-one-way"},
    redundancy_initial_delay{YType::uint32, "redundancy-initial-delay"}
{

    yang_name = "mpls-redundancy"; yang_parent_name = "mpls-encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::~MplsRedundancy()
{
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::has_data() const
{
    if (is_presence_container) return true;
    return redundancy_one_way.is_set
	|| redundancy_initial_delay.is_set;
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redundancy_one_way.yfilter)
	|| ydk::is_set(redundancy_initial_delay.yfilter);
}

std::string L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redundancy_one_way.is_set || is_set(redundancy_one_way.yfilter)) leaf_name_data.push_back(redundancy_one_way.get_name_leafdata());
    if (redundancy_initial_delay.is_set || is_set(redundancy_initial_delay.yfilter)) leaf_name_data.push_back(redundancy_initial_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "redundancy-one-way")
    {
        redundancy_one_way = value;
        redundancy_one_way.value_namespace = name_space;
        redundancy_one_way.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-initial-delay")
    {
        redundancy_initial_delay = value;
        redundancy_initial_delay.value_namespace = name_space;
        redundancy_initial_delay.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redundancy-one-way")
    {
        redundancy_one_way.yfilter = yfilter;
    }
    if(value_path == "redundancy-initial-delay")
    {
        redundancy_initial_delay.yfilter = yfilter;
    }
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redundancy-one-way" || name == "redundancy-initial-delay")
        return true;
    return false;
}

L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::PreferredPath()
    :
    type{YType::enumeration, "type"},
    interface_tunnel_number{YType::uint32, "interface-tunnel-number"},
    fallback_disable{YType::empty, "fallback-disable"},
    srte_policy{YType::str, "srte-policy"}
{

    yang_name = "preferred-path"; yang_parent_name = "mpls-encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::~PreferredPath()
{
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| interface_tunnel_number.is_set
	|| fallback_disable.is_set
	|| srte_policy.is_set;
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(interface_tunnel_number.yfilter)
	|| ydk::is_set(fallback_disable.yfilter)
	|| ydk::is_set(srte_policy.yfilter);
}

std::string L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (interface_tunnel_number.is_set || is_set(interface_tunnel_number.yfilter)) leaf_name_data.push_back(interface_tunnel_number.get_name_leafdata());
    if (fallback_disable.is_set || is_set(fallback_disable.yfilter)) leaf_name_data.push_back(fallback_disable.get_name_leafdata());
    if (srte_policy.is_set || is_set(srte_policy.yfilter)) leaf_name_data.push_back(srte_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-tunnel-number")
    {
        interface_tunnel_number = value;
        interface_tunnel_number.value_namespace = name_space;
        interface_tunnel_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback-disable")
    {
        fallback_disable = value;
        fallback_disable.value_namespace = name_space;
        fallback_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srte-policy")
    {
        srte_policy = value;
        srte_policy.value_namespace = name_space;
        srte_policy.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "interface-tunnel-number")
    {
        interface_tunnel_number.yfilter = yfilter;
    }
    if(value_path == "fallback-disable")
    {
        fallback_disable.yfilter = yfilter;
    }
    if(value_path == "srte-policy")
    {
        srte_policy.yfilter = yfilter;
    }
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "interface-tunnel-number" || name == "fallback-disable" || name == "srte-policy")
        return true;
    return false;
}

L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::LoadBalanceGroup()
    :
    flow_label_load_balance_code{YType::enumeration, "flow-label-load-balance-code"},
    pw_label_load_balance{YType::enumeration, "pw-label-load-balance"}
        ,
    flow_label_load_balance(std::make_shared<L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance>())
{
    flow_label_load_balance->parent = this;

    yang_name = "load-balance-group"; yang_parent_name = "mpls-encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::~LoadBalanceGroup()
{
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::has_data() const
{
    if (is_presence_container) return true;
    return flow_label_load_balance_code.is_set
	|| pw_label_load_balance.is_set
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_data());
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_label_load_balance_code.yfilter)
	|| ydk::is_set(pw_label_load_balance.yfilter)
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_operation());
}

std::string L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_label_load_balance_code.is_set || is_set(flow_label_load_balance_code.yfilter)) leaf_name_data.push_back(flow_label_load_balance_code.get_name_leafdata());
    if (pw_label_load_balance.is_set || is_set(pw_label_load_balance.yfilter)) leaf_name_data.push_back(pw_label_load_balance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-label-load-balance")
    {
        if(flow_label_load_balance == nullptr)
        {
            flow_label_load_balance = std::make_shared<L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance>();
        }
        return flow_label_load_balance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flow_label_load_balance != nullptr)
    {
        children["flow-label-load-balance"] = flow_label_load_balance;
    }

    return children;
}

void L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-label-load-balance-code")
    {
        flow_label_load_balance_code = value;
        flow_label_load_balance_code.value_namespace = name_space;
        flow_label_load_balance_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-label-load-balance")
    {
        pw_label_load_balance = value;
        pw_label_load_balance.value_namespace = name_space;
        pw_label_load_balance.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-label-load-balance-code")
    {
        flow_label_load_balance_code.yfilter = yfilter;
    }
    if(value_path == "pw-label-load-balance")
    {
        pw_label_load_balance.yfilter = yfilter;
    }
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-label-load-balance" || name == "flow-label-load-balance-code" || name == "pw-label-load-balance")
        return true;
    return false;
}

L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::FlowLabelLoadBalance()
    :
    flow_label{YType::enumeration, "flow-label"},
    static_{YType::empty, "static"}
{

    yang_name = "flow-label-load-balance"; yang_parent_name = "load-balance-group"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::~FlowLabelLoadBalance()
{
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::has_data() const
{
    if (is_presence_container) return true;
    return flow_label.is_set
	|| static_.is_set;
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_label.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-label-load-balance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_label.is_set || is_set(flow_label.yfilter)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-label")
    {
        flow_label = value;
        flow_label.value_namespace = name_space;
        flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-label")
    {
        flow_label.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-label" || name == "static")
        return true;
    return false;
}

L2vpn::Database::FlexibleXconnectServiceTable::FlexibleXconnectServiceTable()
    :
    vlan_unaware_flexible_xconnect_services(std::make_shared<L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices>())
    , vlan_aware_flexible_xconnect_services(std::make_shared<L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices>())
{
    vlan_unaware_flexible_xconnect_services->parent = this;
    vlan_aware_flexible_xconnect_services->parent = this;

    yang_name = "flexible-xconnect-service-table"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Database::FlexibleXconnectServiceTable::~FlexibleXconnectServiceTable()
{
}

bool L2vpn::Database::FlexibleXconnectServiceTable::has_data() const
{
    if (is_presence_container) return true;
    return (vlan_unaware_flexible_xconnect_services !=  nullptr && vlan_unaware_flexible_xconnect_services->has_data())
	|| (vlan_aware_flexible_xconnect_services !=  nullptr && vlan_aware_flexible_xconnect_services->has_data());
}

bool L2vpn::Database::FlexibleXconnectServiceTable::has_operation() const
{
    return is_set(yfilter)
	|| (vlan_unaware_flexible_xconnect_services !=  nullptr && vlan_unaware_flexible_xconnect_services->has_operation())
	|| (vlan_aware_flexible_xconnect_services !=  nullptr && vlan_aware_flexible_xconnect_services->has_operation());
}

std::string L2vpn::Database::FlexibleXconnectServiceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Database::FlexibleXconnectServiceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flexible-xconnect-service-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::FlexibleXconnectServiceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::FlexibleXconnectServiceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-unaware-flexible-xconnect-services")
    {
        if(vlan_unaware_flexible_xconnect_services == nullptr)
        {
            vlan_unaware_flexible_xconnect_services = std::make_shared<L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices>();
        }
        return vlan_unaware_flexible_xconnect_services;
    }

    if(child_yang_name == "vlan-aware-flexible-xconnect-services")
    {
        if(vlan_aware_flexible_xconnect_services == nullptr)
        {
            vlan_aware_flexible_xconnect_services = std::make_shared<L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices>();
        }
        return vlan_aware_flexible_xconnect_services;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::FlexibleXconnectServiceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vlan_unaware_flexible_xconnect_services != nullptr)
    {
        children["vlan-unaware-flexible-xconnect-services"] = vlan_unaware_flexible_xconnect_services;
    }

    if(vlan_aware_flexible_xconnect_services != nullptr)
    {
        children["vlan-aware-flexible-xconnect-services"] = vlan_aware_flexible_xconnect_services;
    }

    return children;
}

void L2vpn::Database::FlexibleXconnectServiceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::FlexibleXconnectServiceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::FlexibleXconnectServiceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-unaware-flexible-xconnect-services" || name == "vlan-aware-flexible-xconnect-services")
        return true;
    return false;
}

L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectServices()
    :
    vlan_unaware_flexible_xconnect_service(this, {"name"})
{

    yang_name = "vlan-unaware-flexible-xconnect-services"; yang_parent_name = "flexible-xconnect-service-table"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::~VlanUnawareFlexibleXconnectServices()
{
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan_unaware_flexible_xconnect_service.len(); index++)
    {
        if(vlan_unaware_flexible_xconnect_service[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::has_operation() const
{
    for (std::size_t index=0; index<vlan_unaware_flexible_xconnect_service.len(); index++)
    {
        if(vlan_unaware_flexible_xconnect_service[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/flexible-xconnect-service-table/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-unaware-flexible-xconnect-services";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-unaware-flexible-xconnect-service")
    {
        auto c = std::make_shared<L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService>();
        c->parent = this;
        vlan_unaware_flexible_xconnect_service.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vlan_unaware_flexible_xconnect_service.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-unaware-flexible-xconnect-service")
        return true;
    return false;
}

L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFlexibleXconnectService()
    :
    name{YType::str, "name"}
        ,
    vlan_unaware_fxc_attachment_circuits(std::make_shared<L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits>())
    , vlan_unaware_fxc_pseudowire_evpns(std::make_shared<L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns>())
{
    vlan_unaware_fxc_attachment_circuits->parent = this;
    vlan_unaware_fxc_pseudowire_evpns->parent = this;

    yang_name = "vlan-unaware-flexible-xconnect-service"; yang_parent_name = "vlan-unaware-flexible-xconnect-services"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::~VlanUnawareFlexibleXconnectService()
{
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (vlan_unaware_fxc_attachment_circuits !=  nullptr && vlan_unaware_fxc_attachment_circuits->has_data())
	|| (vlan_unaware_fxc_pseudowire_evpns !=  nullptr && vlan_unaware_fxc_pseudowire_evpns->has_data());
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (vlan_unaware_fxc_attachment_circuits !=  nullptr && vlan_unaware_fxc_attachment_circuits->has_operation())
	|| (vlan_unaware_fxc_pseudowire_evpns !=  nullptr && vlan_unaware_fxc_pseudowire_evpns->has_operation());
}

std::string L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/flexible-xconnect-service-table/vlan-unaware-flexible-xconnect-services/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-unaware-flexible-xconnect-service";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-unaware-fxc-attachment-circuits")
    {
        if(vlan_unaware_fxc_attachment_circuits == nullptr)
        {
            vlan_unaware_fxc_attachment_circuits = std::make_shared<L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits>();
        }
        return vlan_unaware_fxc_attachment_circuits;
    }

    if(child_yang_name == "vlan-unaware-fxc-pseudowire-evpns")
    {
        if(vlan_unaware_fxc_pseudowire_evpns == nullptr)
        {
            vlan_unaware_fxc_pseudowire_evpns = std::make_shared<L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns>();
        }
        return vlan_unaware_fxc_pseudowire_evpns;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vlan_unaware_fxc_attachment_circuits != nullptr)
    {
        children["vlan-unaware-fxc-attachment-circuits"] = vlan_unaware_fxc_attachment_circuits;
    }

    if(vlan_unaware_fxc_pseudowire_evpns != nullptr)
    {
        children["vlan-unaware-fxc-pseudowire-evpns"] = vlan_unaware_fxc_pseudowire_evpns;
    }

    return children;
}

void L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-unaware-fxc-attachment-circuits" || name == "vlan-unaware-fxc-pseudowire-evpns" || name == "name")
        return true;
    return false;
}

L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuits()
    :
    vlan_unaware_fxc_attachment_circuit(this, {"name"})
{

    yang_name = "vlan-unaware-fxc-attachment-circuits"; yang_parent_name = "vlan-unaware-flexible-xconnect-service"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::~VlanUnawareFxcAttachmentCircuits()
{
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan_unaware_fxc_attachment_circuit.len(); index++)
    {
        if(vlan_unaware_fxc_attachment_circuit[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::has_operation() const
{
    for (std::size_t index=0; index<vlan_unaware_fxc_attachment_circuit.len(); index++)
    {
        if(vlan_unaware_fxc_attachment_circuit[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-unaware-fxc-attachment-circuits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-unaware-fxc-attachment-circuit")
    {
        auto c = std::make_shared<L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit>();
        c->parent = this;
        vlan_unaware_fxc_attachment_circuit.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vlan_unaware_fxc_attachment_circuit.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-unaware-fxc-attachment-circuit")
        return true;
    return false;
}

L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::VlanUnawareFxcAttachmentCircuit()
    :
    name{YType::str, "name"}
{

    yang_name = "vlan-unaware-fxc-attachment-circuit"; yang_parent_name = "vlan-unaware-fxc-attachment-circuits"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::~VlanUnawareFxcAttachmentCircuit()
{
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-unaware-fxc-attachment-circuit";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpns()
    :
    vlan_unaware_fxc_pseudowire_evpn(this, {"eviid", "acid"})
{

    yang_name = "vlan-unaware-fxc-pseudowire-evpns"; yang_parent_name = "vlan-unaware-flexible-xconnect-service"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::~VlanUnawareFxcPseudowireEvpns()
{
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan_unaware_fxc_pseudowire_evpn.len(); index++)
    {
        if(vlan_unaware_fxc_pseudowire_evpn[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::has_operation() const
{
    for (std::size_t index=0; index<vlan_unaware_fxc_pseudowire_evpn.len(); index++)
    {
        if(vlan_unaware_fxc_pseudowire_evpn[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-unaware-fxc-pseudowire-evpns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-unaware-fxc-pseudowire-evpn")
    {
        auto c = std::make_shared<L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn>();
        c->parent = this;
        vlan_unaware_fxc_pseudowire_evpn.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vlan_unaware_fxc_pseudowire_evpn.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-unaware-fxc-pseudowire-evpn")
        return true;
    return false;
}

L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::VlanUnawareFxcPseudowireEvpn()
    :
    eviid{YType::uint32, "eviid"},
    acid{YType::uint32, "acid"}
{

    yang_name = "vlan-unaware-fxc-pseudowire-evpn"; yang_parent_name = "vlan-unaware-fxc-pseudowire-evpns"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::~VlanUnawareFxcPseudowireEvpn()
{
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::has_data() const
{
    if (is_presence_container) return true;
    return eviid.is_set
	|| acid.is_set;
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eviid.yfilter)
	|| ydk::is_set(acid.yfilter);
}

std::string L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-unaware-fxc-pseudowire-evpn";
    ADD_KEY_TOKEN(eviid, "eviid");
    ADD_KEY_TOKEN(acid, "acid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eviid.is_set || is_set(eviid.yfilter)) leaf_name_data.push_back(eviid.get_name_leafdata());
    if (acid.is_set || is_set(acid.yfilter)) leaf_name_data.push_back(acid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eviid")
    {
        eviid = value;
        eviid.value_namespace = name_space;
        eviid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acid")
    {
        acid = value;
        acid.value_namespace = name_space;
        acid.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eviid")
    {
        eviid.yfilter = yfilter;
    }
    if(value_path == "acid")
    {
        acid.yfilter = yfilter;
    }
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eviid" || name == "acid")
        return true;
    return false;
}

L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectServices()
    :
    vlan_aware_flexible_xconnect_service(this, {"eviid"})
{

    yang_name = "vlan-aware-flexible-xconnect-services"; yang_parent_name = "flexible-xconnect-service-table"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::~VlanAwareFlexibleXconnectServices()
{
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan_aware_flexible_xconnect_service.len(); index++)
    {
        if(vlan_aware_flexible_xconnect_service[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::has_operation() const
{
    for (std::size_t index=0; index<vlan_aware_flexible_xconnect_service.len(); index++)
    {
        if(vlan_aware_flexible_xconnect_service[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/flexible-xconnect-service-table/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-aware-flexible-xconnect-services";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-aware-flexible-xconnect-service")
    {
        auto c = std::make_shared<L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService>();
        c->parent = this;
        vlan_aware_flexible_xconnect_service.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vlan_aware_flexible_xconnect_service.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-aware-flexible-xconnect-service")
        return true;
    return false;
}

L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFlexibleXconnectService()
    :
    eviid{YType::uint32, "eviid"}
        ,
    vlan_aware_fxc_attachment_circuits(std::make_shared<L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits>())
{
    vlan_aware_fxc_attachment_circuits->parent = this;

    yang_name = "vlan-aware-flexible-xconnect-service"; yang_parent_name = "vlan-aware-flexible-xconnect-services"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::~VlanAwareFlexibleXconnectService()
{
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::has_data() const
{
    if (is_presence_container) return true;
    return eviid.is_set
	|| (vlan_aware_fxc_attachment_circuits !=  nullptr && vlan_aware_fxc_attachment_circuits->has_data());
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eviid.yfilter)
	|| (vlan_aware_fxc_attachment_circuits !=  nullptr && vlan_aware_fxc_attachment_circuits->has_operation());
}

std::string L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/flexible-xconnect-service-table/vlan-aware-flexible-xconnect-services/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-aware-flexible-xconnect-service";
    ADD_KEY_TOKEN(eviid, "eviid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eviid.is_set || is_set(eviid.yfilter)) leaf_name_data.push_back(eviid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-aware-fxc-attachment-circuits")
    {
        if(vlan_aware_fxc_attachment_circuits == nullptr)
        {
            vlan_aware_fxc_attachment_circuits = std::make_shared<L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits>();
        }
        return vlan_aware_fxc_attachment_circuits;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vlan_aware_fxc_attachment_circuits != nullptr)
    {
        children["vlan-aware-fxc-attachment-circuits"] = vlan_aware_fxc_attachment_circuits;
    }

    return children;
}

void L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eviid")
    {
        eviid = value;
        eviid.value_namespace = name_space;
        eviid.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eviid")
    {
        eviid.yfilter = yfilter;
    }
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-aware-fxc-attachment-circuits" || name == "eviid")
        return true;
    return false;
}

L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuits()
    :
    vlan_aware_fxc_attachment_circuit(this, {"name"})
{

    yang_name = "vlan-aware-fxc-attachment-circuits"; yang_parent_name = "vlan-aware-flexible-xconnect-service"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::~VlanAwareFxcAttachmentCircuits()
{
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan_aware_fxc_attachment_circuit.len(); index++)
    {
        if(vlan_aware_fxc_attachment_circuit[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::has_operation() const
{
    for (std::size_t index=0; index<vlan_aware_fxc_attachment_circuit.len(); index++)
    {
        if(vlan_aware_fxc_attachment_circuit[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-aware-fxc-attachment-circuits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-aware-fxc-attachment-circuit")
    {
        auto c = std::make_shared<L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit>();
        c->parent = this;
        vlan_aware_fxc_attachment_circuit.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vlan_aware_fxc_attachment_circuit.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-aware-fxc-attachment-circuit")
        return true;
    return false;
}

L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::VlanAwareFxcAttachmentCircuit()
    :
    name{YType::str, "name"}
{

    yang_name = "vlan-aware-fxc-attachment-circuit"; yang_parent_name = "vlan-aware-fxc-attachment-circuits"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::~VlanAwareFxcAttachmentCircuit()
{
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-aware-fxc-attachment-circuit";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool L2vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

L2vpn::Database::Redundancy::Redundancy()
    :
    enable{YType::empty, "enable"}
        ,
    iccp_redundancy_groups(std::make_shared<L2vpn::Database::Redundancy::IccpRedundancyGroups>())
{
    iccp_redundancy_groups->parent = this;

    yang_name = "redundancy"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Database::Redundancy::~Redundancy()
{
}

bool L2vpn::Database::Redundancy::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (iccp_redundancy_groups !=  nullptr && iccp_redundancy_groups->has_data());
}

bool L2vpn::Database::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (iccp_redundancy_groups !=  nullptr && iccp_redundancy_groups->has_operation());
}

std::string L2vpn::Database::Redundancy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Database::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-redundancy-groups")
    {
        if(iccp_redundancy_groups == nullptr)
        {
            iccp_redundancy_groups = std::make_shared<L2vpn::Database::Redundancy::IccpRedundancyGroups>();
        }
        return iccp_redundancy_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(iccp_redundancy_groups != nullptr)
    {
        children["iccp-redundancy-groups"] = iccp_redundancy_groups;
    }

    return children;
}

void L2vpn::Database::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-redundancy-groups" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroups()
    :
    iccp_redundancy_group(this, {"group_id"})
{

    yang_name = "iccp-redundancy-groups"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Database::Redundancy::IccpRedundancyGroups::~IccpRedundancyGroups()
{
}

bool L2vpn::Database::Redundancy::IccpRedundancyGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iccp_redundancy_group.len(); index++)
    {
        if(iccp_redundancy_group[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::Redundancy::IccpRedundancyGroups::has_operation() const
{
    for (std::size_t index=0; index<iccp_redundancy_group.len(); index++)
    {
        if(iccp_redundancy_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::Redundancy::IccpRedundancyGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Database::Redundancy::IccpRedundancyGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-redundancy-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::Redundancy::IccpRedundancyGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::Redundancy::IccpRedundancyGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-redundancy-group")
    {
        auto c = std::make_shared<L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup>();
        c->parent = this;
        iccp_redundancy_group.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::Redundancy::IccpRedundancyGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : iccp_redundancy_group.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::Redundancy::IccpRedundancyGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::Redundancy::IccpRedundancyGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::Redundancy::IccpRedundancyGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-redundancy-group")
        return true;
    return false;
}

L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpRedundancyGroup()
    :
    group_id{YType::uint32, "group-id"},
    multi_homing_node_id{YType::uint32, "multi-homing-node-id"}
        ,
    iccp_interfaces(std::make_shared<L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces>())
{
    iccp_interfaces->parent = this;

    yang_name = "iccp-redundancy-group"; yang_parent_name = "iccp-redundancy-groups"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::~IccpRedundancyGroup()
{
}

bool L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::has_data() const
{
    if (is_presence_container) return true;
    return group_id.is_set
	|| multi_homing_node_id.is_set
	|| (iccp_interfaces !=  nullptr && iccp_interfaces->has_data());
}

bool L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(multi_homing_node_id.yfilter)
	|| (iccp_interfaces !=  nullptr && iccp_interfaces->has_operation());
}

std::string L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/redundancy/iccp-redundancy-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-redundancy-group";
    ADD_KEY_TOKEN(group_id, "group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (multi_homing_node_id.is_set || is_set(multi_homing_node_id.yfilter)) leaf_name_data.push_back(multi_homing_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-interfaces")
    {
        if(iccp_interfaces == nullptr)
        {
            iccp_interfaces = std::make_shared<L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces>();
        }
        return iccp_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(iccp_interfaces != nullptr)
    {
        children["iccp-interfaces"] = iccp_interfaces;
    }

    return children;
}

void L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multi-homing-node-id")
    {
        multi_homing_node_id = value;
        multi_homing_node_id.value_namespace = name_space;
        multi_homing_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "multi-homing-node-id")
    {
        multi_homing_node_id.yfilter = yfilter;
    }
}

bool L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-interfaces" || name == "group-id" || name == "multi-homing-node-id")
        return true;
    return false;
}

L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterfaces()
    :
    iccp_interface(this, {"interface_name"})
{

    yang_name = "iccp-interfaces"; yang_parent_name = "iccp-redundancy-group"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::~IccpInterfaces()
{
}

bool L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iccp_interface.len(); index++)
    {
        if(iccp_interface[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::has_operation() const
{
    for (std::size_t index=0; index<iccp_interface.len(); index++)
    {
        if(iccp_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-interface")
    {
        auto c = std::make_shared<L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface>();
        c->parent = this;
        iccp_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : iccp_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-interface")
        return true;
    return false;
}

L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::IccpInterface()
    :
    interface_name{YType::str, "interface-name"},
    secondary_vlan_range{YType::str, "secondary-vlan-range"},
    recovery_delay{YType::uint32, "recovery-delay"},
    primary_vlan_range{YType::str, "primary-vlan-range"},
    mac_flush_tcn{YType::empty, "mac-flush-tcn"}
{

    yang_name = "iccp-interface"; yang_parent_name = "iccp-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::~IccpInterface()
{
}

bool L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| secondary_vlan_range.is_set
	|| recovery_delay.is_set
	|| primary_vlan_range.is_set
	|| mac_flush_tcn.is_set;
}

bool L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(secondary_vlan_range.yfilter)
	|| ydk::is_set(recovery_delay.yfilter)
	|| ydk::is_set(primary_vlan_range.yfilter)
	|| ydk::is_set(mac_flush_tcn.yfilter);
}

std::string L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (secondary_vlan_range.is_set || is_set(secondary_vlan_range.yfilter)) leaf_name_data.push_back(secondary_vlan_range.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.yfilter)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (primary_vlan_range.is_set || is_set(primary_vlan_range.yfilter)) leaf_name_data.push_back(primary_vlan_range.get_name_leafdata());
    if (mac_flush_tcn.is_set || is_set(mac_flush_tcn.yfilter)) leaf_name_data.push_back(mac_flush_tcn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-vlan-range")
    {
        secondary_vlan_range = value;
        secondary_vlan_range.value_namespace = name_space;
        secondary_vlan_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
        recovery_delay.value_namespace = name_space;
        recovery_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-vlan-range")
    {
        primary_vlan_range = value;
        primary_vlan_range.value_namespace = name_space;
        primary_vlan_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flush-tcn")
    {
        mac_flush_tcn = value;
        mac_flush_tcn.value_namespace = name_space;
        mac_flush_tcn.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "secondary-vlan-range")
    {
        secondary_vlan_range.yfilter = yfilter;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay.yfilter = yfilter;
    }
    if(value_path == "primary-vlan-range")
    {
        primary_vlan_range.yfilter = yfilter;
    }
    if(value_path == "mac-flush-tcn")
    {
        mac_flush_tcn.yfilter = yfilter;
    }
}

bool L2vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "secondary-vlan-range" || name == "recovery-delay" || name == "primary-vlan-range" || name == "mac-flush-tcn")
        return true;
    return false;
}

L2vpn::Pbb::Pbb()
    :
    backbone_source_mac{YType::str, "backbone-source-mac"}
{

    yang_name = "pbb"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Pbb::~Pbb()
{
}

bool L2vpn::Pbb::has_data() const
{
    if (is_presence_container) return true;
    return backbone_source_mac.is_set;
}

bool L2vpn::Pbb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backbone_source_mac.yfilter);
}

std::string L2vpn::Pbb::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Pbb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Pbb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backbone_source_mac.is_set || is_set(backbone_source_mac.yfilter)) leaf_name_data.push_back(backbone_source_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Pbb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Pbb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Pbb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backbone-source-mac")
    {
        backbone_source_mac = value;
        backbone_source_mac.value_namespace = name_space;
        backbone_source_mac.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Pbb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backbone-source-mac")
    {
        backbone_source_mac.yfilter = yfilter;
    }
}

bool L2vpn::Pbb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backbone-source-mac")
        return true;
    return false;
}

L2vpn::AutoDiscovery::AutoDiscovery()
    :
    bgp_signaling(std::make_shared<L2vpn::AutoDiscovery::BgpSignaling>())
{
    bgp_signaling->parent = this;

    yang_name = "auto-discovery"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::AutoDiscovery::~AutoDiscovery()
{
}

bool L2vpn::AutoDiscovery::has_data() const
{
    if (is_presence_container) return true;
    return (bgp_signaling !=  nullptr && bgp_signaling->has_data());
}

bool L2vpn::AutoDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| (bgp_signaling !=  nullptr && bgp_signaling->has_operation());
}

std::string L2vpn::AutoDiscovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::AutoDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::AutoDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::AutoDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-signaling")
    {
        if(bgp_signaling == nullptr)
        {
            bgp_signaling = std::make_shared<L2vpn::AutoDiscovery::BgpSignaling>();
        }
        return bgp_signaling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::AutoDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bgp_signaling != nullptr)
    {
        children["bgp-signaling"] = bgp_signaling;
    }

    return children;
}

void L2vpn::AutoDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::AutoDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::AutoDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-signaling")
        return true;
    return false;
}

L2vpn::AutoDiscovery::BgpSignaling::BgpSignaling()
    :
    mtu_mismatch_ignore{YType::empty, "mtu-mismatch-ignore"}
{

    yang_name = "bgp-signaling"; yang_parent_name = "auto-discovery"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::AutoDiscovery::BgpSignaling::~BgpSignaling()
{
}

bool L2vpn::AutoDiscovery::BgpSignaling::has_data() const
{
    if (is_presence_container) return true;
    return mtu_mismatch_ignore.is_set;
}

bool L2vpn::AutoDiscovery::BgpSignaling::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu_mismatch_ignore.yfilter);
}

std::string L2vpn::AutoDiscovery::BgpSignaling::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/auto-discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::AutoDiscovery::BgpSignaling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-signaling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::AutoDiscovery::BgpSignaling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu_mismatch_ignore.is_set || is_set(mtu_mismatch_ignore.yfilter)) leaf_name_data.push_back(mtu_mismatch_ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::AutoDiscovery::BgpSignaling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::AutoDiscovery::BgpSignaling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::AutoDiscovery::BgpSignaling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu-mismatch-ignore")
    {
        mtu_mismatch_ignore = value;
        mtu_mismatch_ignore.value_namespace = name_space;
        mtu_mismatch_ignore.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::AutoDiscovery::BgpSignaling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu-mismatch-ignore")
    {
        mtu_mismatch_ignore.yfilter = yfilter;
    }
}

bool L2vpn::AutoDiscovery::BgpSignaling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mtu-mismatch-ignore")
        return true;
    return false;
}

L2vpn::Utility::Utility()
    :
    logging(std::make_shared<L2vpn::Utility::Logging>())
{
    logging->parent = this;

    yang_name = "utility"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Utility::~Utility()
{
}

bool L2vpn::Utility::has_data() const
{
    if (is_presence_container) return true;
    return (logging !=  nullptr && logging->has_data());
}

bool L2vpn::Utility::has_operation() const
{
    return is_set(yfilter)
	|| (logging !=  nullptr && logging->has_operation());
}

std::string L2vpn::Utility::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Utility::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utility";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Utility::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Utility::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<L2vpn::Utility::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Utility::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    return children;
}

void L2vpn::Utility::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Utility::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Utility::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging")
        return true;
    return false;
}

L2vpn::Utility::Logging::Logging()
    :
    bridge_domain_state_change{YType::empty, "bridge-domain-state-change"},
    pseudowire_state_change{YType::empty, "pseudowire-state-change"},
    vfi{YType::empty, "vfi"},
    nsr_state_change{YType::empty, "nsr-state-change"},
    pwhe_replication_state_change{YType::empty, "pwhe-replication-state-change"}
{

    yang_name = "logging"; yang_parent_name = "utility"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Utility::Logging::~Logging()
{
}

bool L2vpn::Utility::Logging::has_data() const
{
    if (is_presence_container) return true;
    return bridge_domain_state_change.is_set
	|| pseudowire_state_change.is_set
	|| vfi.is_set
	|| nsr_state_change.is_set
	|| pwhe_replication_state_change.is_set;
}

bool L2vpn::Utility::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_domain_state_change.yfilter)
	|| ydk::is_set(pseudowire_state_change.yfilter)
	|| ydk::is_set(vfi.yfilter)
	|| ydk::is_set(nsr_state_change.yfilter)
	|| ydk::is_set(pwhe_replication_state_change.yfilter);
}

std::string L2vpn::Utility::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/utility/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Utility::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Utility::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_domain_state_change.is_set || is_set(bridge_domain_state_change.yfilter)) leaf_name_data.push_back(bridge_domain_state_change.get_name_leafdata());
    if (pseudowire_state_change.is_set || is_set(pseudowire_state_change.yfilter)) leaf_name_data.push_back(pseudowire_state_change.get_name_leafdata());
    if (vfi.is_set || is_set(vfi.yfilter)) leaf_name_data.push_back(vfi.get_name_leafdata());
    if (nsr_state_change.is_set || is_set(nsr_state_change.yfilter)) leaf_name_data.push_back(nsr_state_change.get_name_leafdata());
    if (pwhe_replication_state_change.is_set || is_set(pwhe_replication_state_change.yfilter)) leaf_name_data.push_back(pwhe_replication_state_change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Utility::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Utility::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Utility::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-domain-state-change")
    {
        bridge_domain_state_change = value;
        bridge_domain_state_change.value_namespace = name_space;
        bridge_domain_state_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-state-change")
    {
        pseudowire_state_change = value;
        pseudowire_state_change.value_namespace = name_space;
        pseudowire_state_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vfi")
    {
        vfi = value;
        vfi.value_namespace = name_space;
        vfi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state-change")
    {
        nsr_state_change = value;
        nsr_state_change.value_namespace = name_space;
        nsr_state_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwhe-replication-state-change")
    {
        pwhe_replication_state_change = value;
        pwhe_replication_state_change.value_namespace = name_space;
        pwhe_replication_state_change.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Utility::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-domain-state-change")
    {
        bridge_domain_state_change.yfilter = yfilter;
    }
    if(value_path == "pseudowire-state-change")
    {
        pseudowire_state_change.yfilter = yfilter;
    }
    if(value_path == "vfi")
    {
        vfi.yfilter = yfilter;
    }
    if(value_path == "nsr-state-change")
    {
        nsr_state_change.yfilter = yfilter;
    }
    if(value_path == "pwhe-replication-state-change")
    {
        pwhe_replication_state_change.yfilter = yfilter;
    }
}

bool L2vpn::Utility::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domain-state-change" || name == "pseudowire-state-change" || name == "vfi" || name == "nsr-state-change" || name == "pwhe-replication-state-change")
        return true;
    return false;
}

L2vpn::Snmp::Snmp()
    :
    mib(std::make_shared<L2vpn::Snmp::Mib>())
{
    mib->parent = this;

    yang_name = "snmp"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Snmp::~Snmp()
{
}

bool L2vpn::Snmp::has_data() const
{
    if (is_presence_container) return true;
    return (mib !=  nullptr && mib->has_data());
}

bool L2vpn::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (mib !=  nullptr && mib->has_operation());
}

std::string L2vpn::Snmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mib")
    {
        if(mib == nullptr)
        {
            mib = std::make_shared<L2vpn::Snmp::Mib>();
        }
        return mib;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mib != nullptr)
    {
        children["mib"] = mib;
    }

    return children;
}

void L2vpn::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mib")
        return true;
    return false;
}

L2vpn::Snmp::Mib::Mib()
    :
    mib_interface(std::make_shared<L2vpn::Snmp::Mib::MibInterface>())
    , mib_pseudowire(std::make_shared<L2vpn::Snmp::Mib::MibPseudowire>())
{
    mib_interface->parent = this;
    mib_pseudowire->parent = this;

    yang_name = "mib"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Snmp::Mib::~Mib()
{
}

bool L2vpn::Snmp::Mib::has_data() const
{
    if (is_presence_container) return true;
    return (mib_interface !=  nullptr && mib_interface->has_data())
	|| (mib_pseudowire !=  nullptr && mib_pseudowire->has_data());
}

bool L2vpn::Snmp::Mib::has_operation() const
{
    return is_set(yfilter)
	|| (mib_interface !=  nullptr && mib_interface->has_operation())
	|| (mib_pseudowire !=  nullptr && mib_pseudowire->has_operation());
}

std::string L2vpn::Snmp::Mib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/snmp/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Snmp::Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Snmp::Mib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Snmp::Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mib-interface")
    {
        if(mib_interface == nullptr)
        {
            mib_interface = std::make_shared<L2vpn::Snmp::Mib::MibInterface>();
        }
        return mib_interface;
    }

    if(child_yang_name == "mib-pseudowire")
    {
        if(mib_pseudowire == nullptr)
        {
            mib_pseudowire = std::make_shared<L2vpn::Snmp::Mib::MibPseudowire>();
        }
        return mib_pseudowire;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Snmp::Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mib_interface != nullptr)
    {
        children["mib-interface"] = mib_interface;
    }

    if(mib_pseudowire != nullptr)
    {
        children["mib-pseudowire"] = mib_pseudowire;
    }

    return children;
}

void L2vpn::Snmp::Mib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Snmp::Mib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Snmp::Mib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mib-interface" || name == "mib-pseudowire")
        return true;
    return false;
}

L2vpn::Snmp::Mib::MibInterface::MibInterface()
    :
    format(std::make_shared<L2vpn::Snmp::Mib::MibInterface::Format>())
{
    format->parent = this;

    yang_name = "mib-interface"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Snmp::Mib::MibInterface::~MibInterface()
{
}

bool L2vpn::Snmp::Mib::MibInterface::has_data() const
{
    if (is_presence_container) return true;
    return (format !=  nullptr && format->has_data());
}

bool L2vpn::Snmp::Mib::MibInterface::has_operation() const
{
    return is_set(yfilter)
	|| (format !=  nullptr && format->has_operation());
}

std::string L2vpn::Snmp::Mib::MibInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/snmp/mib/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Snmp::Mib::MibInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Snmp::Mib::MibInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Snmp::Mib::MibInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "format")
    {
        if(format == nullptr)
        {
            format = std::make_shared<L2vpn::Snmp::Mib::MibInterface::Format>();
        }
        return format;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Snmp::Mib::MibInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(format != nullptr)
    {
        children["format"] = format;
    }

    return children;
}

void L2vpn::Snmp::Mib::MibInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Snmp::Mib::MibInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Snmp::Mib::MibInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format")
        return true;
    return false;
}

L2vpn::Snmp::Mib::MibInterface::Format::Format()
    :
    external_interface_format{YType::empty, "external-interface-format"}
{

    yang_name = "format"; yang_parent_name = "mib-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Snmp::Mib::MibInterface::Format::~Format()
{
}

bool L2vpn::Snmp::Mib::MibInterface::Format::has_data() const
{
    if (is_presence_container) return true;
    return external_interface_format.is_set;
}

bool L2vpn::Snmp::Mib::MibInterface::Format::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_interface_format.yfilter);
}

std::string L2vpn::Snmp::Mib::MibInterface::Format::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/snmp/mib/mib-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Snmp::Mib::MibInterface::Format::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Snmp::Mib::MibInterface::Format::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_interface_format.is_set || is_set(external_interface_format.yfilter)) leaf_name_data.push_back(external_interface_format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Snmp::Mib::MibInterface::Format::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Snmp::Mib::MibInterface::Format::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Snmp::Mib::MibInterface::Format::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-interface-format")
    {
        external_interface_format = value;
        external_interface_format.value_namespace = name_space;
        external_interface_format.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Snmp::Mib::MibInterface::Format::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-interface-format")
    {
        external_interface_format.yfilter = yfilter;
    }
}

bool L2vpn::Snmp::Mib::MibInterface::Format::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-interface-format")
        return true;
    return false;
}

L2vpn::Snmp::Mib::MibPseudowire::MibPseudowire()
    :
    statistics{YType::empty, "statistics"}
{

    yang_name = "mib-pseudowire"; yang_parent_name = "mib"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Snmp::Mib::MibPseudowire::~MibPseudowire()
{
}

bool L2vpn::Snmp::Mib::MibPseudowire::has_data() const
{
    if (is_presence_container) return true;
    return statistics.is_set;
}

bool L2vpn::Snmp::Mib::MibPseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(statistics.yfilter);
}

std::string L2vpn::Snmp::Mib::MibPseudowire::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/snmp/mib/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Snmp::Mib::MibPseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib-pseudowire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Snmp::Mib::MibPseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (statistics.is_set || is_set(statistics.yfilter)) leaf_name_data.push_back(statistics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Snmp::Mib::MibPseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Snmp::Mib::MibPseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Snmp::Mib::MibPseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "statistics")
    {
        statistics = value;
        statistics.value_namespace = name_space;
        statistics.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Snmp::Mib::MibPseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "statistics")
    {
        statistics.yfilter = yfilter;
    }
}

bool L2vpn::Snmp::Mib::MibPseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics")
        return true;
    return false;
}

GenericInterfaceLists::GenericInterfaceLists()
    :
    generic_interface_list(this, {"generic_interface_list_name"})
{

    yang_name = "generic-interface-lists"; yang_parent_name = "Cisco-IOS-XR-l2vpn-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

GenericInterfaceLists::~GenericInterfaceLists()
{
}

bool GenericInterfaceLists::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<generic_interface_list.len(); index++)
    {
        if(generic_interface_list[index]->has_data())
            return true;
    }
    return false;
}

bool GenericInterfaceLists::has_operation() const
{
    for (std::size_t index=0; index<generic_interface_list.len(); index++)
    {
        if(generic_interface_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string GenericInterfaceLists::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:generic-interface-lists";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceLists::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> GenericInterfaceLists::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-interface-list")
    {
        auto c = std::make_shared<GenericInterfaceLists::GenericInterfaceList>();
        c->parent = this;
        generic_interface_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GenericInterfaceLists::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : generic_interface_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void GenericInterfaceLists::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GenericInterfaceLists::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> GenericInterfaceLists::clone_ptr() const
{
    return std::make_shared<GenericInterfaceLists>();
}

std::string GenericInterfaceLists::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string GenericInterfaceLists::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function GenericInterfaceLists::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> GenericInterfaceLists::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool GenericInterfaceLists::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-interface-list")
        return true;
    return false;
}

GenericInterfaceLists::GenericInterfaceList::GenericInterfaceList()
    :
    generic_interface_list_name{YType::str, "generic-interface-list-name"},
    enable{YType::empty, "enable"}
        ,
    interfaces(std::make_shared<GenericInterfaceLists::GenericInterfaceList::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "generic-interface-list"; yang_parent_name = "generic-interface-lists"; is_top_level_class = false; has_list_ancestor = false; 
}

GenericInterfaceLists::GenericInterfaceList::~GenericInterfaceList()
{
}

bool GenericInterfaceLists::GenericInterfaceList::has_data() const
{
    if (is_presence_container) return true;
    return generic_interface_list_name.is_set
	|| enable.is_set
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool GenericInterfaceLists::GenericInterfaceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(generic_interface_list_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string GenericInterfaceLists::GenericInterfaceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:generic-interface-lists/" << get_segment_path();
    return path_buffer.str();
}

std::string GenericInterfaceLists::GenericInterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-interface-list";
    ADD_KEY_TOKEN(generic_interface_list_name, "generic-interface-list-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceLists::GenericInterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_interface_list_name.is_set || is_set(generic_interface_list_name.yfilter)) leaf_name_data.push_back(generic_interface_list_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> GenericInterfaceLists::GenericInterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<GenericInterfaceLists::GenericInterfaceList::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GenericInterfaceLists::GenericInterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void GenericInterfaceLists::GenericInterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-interface-list-name")
    {
        generic_interface_list_name = value;
        generic_interface_list_name.value_namespace = name_space;
        generic_interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void GenericInterfaceLists::GenericInterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-interface-list-name")
    {
        generic_interface_list_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool GenericInterfaceLists::GenericInterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "generic-interface-list-name" || name == "enable")
        return true;
    return false;
}

GenericInterfaceLists::GenericInterfaceList::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "generic-interface-list"; is_top_level_class = false; has_list_ancestor = true; 
}

GenericInterfaceLists::GenericInterfaceList::Interfaces::~Interfaces()
{
}

bool GenericInterfaceLists::GenericInterfaceList::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool GenericInterfaceLists::GenericInterfaceList::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string GenericInterfaceLists::GenericInterfaceList::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceLists::GenericInterfaceList::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> GenericInterfaceLists::GenericInterfaceList::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<GenericInterfaceLists::GenericInterfaceList::Interfaces::Interface>();
        c->parent = this;
        interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GenericInterfaceLists::GenericInterfaceList::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void GenericInterfaceLists::GenericInterfaceList::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GenericInterfaceLists::GenericInterfaceList::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GenericInterfaceLists::GenericInterfaceList::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

GenericInterfaceLists::GenericInterfaceList::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    enable{YType::empty, "enable"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

GenericInterfaceLists::GenericInterfaceList::Interfaces::Interface::~Interface()
{
}

bool GenericInterfaceLists::GenericInterfaceList::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| enable.is_set;
}

bool GenericInterfaceLists::GenericInterfaceList::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string GenericInterfaceLists::GenericInterfaceList::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceLists::GenericInterfaceList::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> GenericInterfaceLists::GenericInterfaceList::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GenericInterfaceLists::GenericInterfaceList::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void GenericInterfaceLists::GenericInterfaceList::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void GenericInterfaceLists::GenericInterfaceList::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool GenericInterfaceLists::GenericInterfaceList::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "enable")
        return true;
    return false;
}

Evpn::Evpn()
    :
    enable{YType::empty, "enable"}
        ,
    evpn_tables(std::make_shared<Evpn::EvpnTables>())
{
    evpn_tables->parent = this;

    yang_name = "evpn"; yang_parent_name = "Cisco-IOS-XR-l2vpn-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Evpn::~Evpn()
{
}

bool Evpn::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (evpn_tables !=  nullptr && evpn_tables->has_data());
}

bool Evpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (evpn_tables !=  nullptr && evpn_tables->has_operation());
}

std::string Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-tables")
    {
        if(evpn_tables == nullptr)
        {
            evpn_tables = std::make_shared<Evpn::EvpnTables>();
        }
        return evpn_tables;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(evpn_tables != nullptr)
    {
        children["evpn-tables"] = evpn_tables;
    }

    return children;
}

void Evpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Evpn::clone_ptr() const
{
    return std::make_shared<Evpn>();
}

std::string Evpn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Evpn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Evpn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Evpn::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Evpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-tables" || name == "enable")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnTables()
    :
    evi_cost_out{YType::empty, "evi-cost-out"},
    evpn_source_interface{YType::str, "evpn-source-interface"},
    evpn_cost_in_startup{YType::uint32, "evpn-cost-in-startup"}
        ,
    evpn_timers(std::make_shared<Evpn::EvpnTables::EvpnTimers>())
    , evpnmac(std::make_shared<Evpn::EvpnTables::Evpnmac>())
    , evpn_evis(std::make_shared<Evpn::EvpnTables::EvpnEvis>())
    , evpn_virtual_access_vfis(std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis>())
    , evpn_load_balancing(std::make_shared<Evpn::EvpnTables::EvpnLoadBalancing>())
    , evpn_bgp_auto_discovery(std::make_shared<Evpn::EvpnTables::EvpnBgpAutoDiscovery>())
    , evpn_groups(std::make_shared<Evpn::EvpnTables::EvpnGroups>())
    , evpn_instances(std::make_shared<Evpn::EvpnTables::EvpnInstances>())
    , evpn_logging(std::make_shared<Evpn::EvpnTables::EvpnLogging>())
    , evpn_interfaces(std::make_shared<Evpn::EvpnTables::EvpnInterfaces>())
    , evpn_virtual_access_pws(std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws>())
    , evpn_ethernet_segment(std::make_shared<Evpn::EvpnTables::EvpnEthernetSegment>())
{
    evpn_timers->parent = this;
    evpnmac->parent = this;
    evpn_evis->parent = this;
    evpn_virtual_access_vfis->parent = this;
    evpn_load_balancing->parent = this;
    evpn_bgp_auto_discovery->parent = this;
    evpn_groups->parent = this;
    evpn_instances->parent = this;
    evpn_logging->parent = this;
    evpn_interfaces->parent = this;
    evpn_virtual_access_pws->parent = this;
    evpn_ethernet_segment->parent = this;

    yang_name = "evpn-tables"; yang_parent_name = "evpn"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::EvpnTables::~EvpnTables()
{
}

bool Evpn::EvpnTables::has_data() const
{
    if (is_presence_container) return true;
    return evi_cost_out.is_set
	|| evpn_source_interface.is_set
	|| evpn_cost_in_startup.is_set
	|| (evpn_timers !=  nullptr && evpn_timers->has_data())
	|| (evpnmac !=  nullptr && evpnmac->has_data())
	|| (evpn_evis !=  nullptr && evpn_evis->has_data())
	|| (evpn_virtual_access_vfis !=  nullptr && evpn_virtual_access_vfis->has_data())
	|| (evpn_load_balancing !=  nullptr && evpn_load_balancing->has_data())
	|| (evpn_bgp_auto_discovery !=  nullptr && evpn_bgp_auto_discovery->has_data())
	|| (evpn_groups !=  nullptr && evpn_groups->has_data())
	|| (evpn_instances !=  nullptr && evpn_instances->has_data())
	|| (evpn_logging !=  nullptr && evpn_logging->has_data())
	|| (evpn_interfaces !=  nullptr && evpn_interfaces->has_data())
	|| (evpn_virtual_access_pws !=  nullptr && evpn_virtual_access_pws->has_data())
	|| (evpn_ethernet_segment !=  nullptr && evpn_ethernet_segment->has_data());
}

bool Evpn::EvpnTables::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evi_cost_out.yfilter)
	|| ydk::is_set(evpn_source_interface.yfilter)
	|| ydk::is_set(evpn_cost_in_startup.yfilter)
	|| (evpn_timers !=  nullptr && evpn_timers->has_operation())
	|| (evpnmac !=  nullptr && evpnmac->has_operation())
	|| (evpn_evis !=  nullptr && evpn_evis->has_operation())
	|| (evpn_virtual_access_vfis !=  nullptr && evpn_virtual_access_vfis->has_operation())
	|| (evpn_load_balancing !=  nullptr && evpn_load_balancing->has_operation())
	|| (evpn_bgp_auto_discovery !=  nullptr && evpn_bgp_auto_discovery->has_operation())
	|| (evpn_groups !=  nullptr && evpn_groups->has_operation())
	|| (evpn_instances !=  nullptr && evpn_instances->has_operation())
	|| (evpn_logging !=  nullptr && evpn_logging->has_operation())
	|| (evpn_interfaces !=  nullptr && evpn_interfaces->has_operation())
	|| (evpn_virtual_access_pws !=  nullptr && evpn_virtual_access_pws->has_operation())
	|| (evpn_ethernet_segment !=  nullptr && evpn_ethernet_segment->has_operation());
}

std::string Evpn::EvpnTables::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-tables";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi_cost_out.is_set || is_set(evi_cost_out.yfilter)) leaf_name_data.push_back(evi_cost_out.get_name_leafdata());
    if (evpn_source_interface.is_set || is_set(evpn_source_interface.yfilter)) leaf_name_data.push_back(evpn_source_interface.get_name_leafdata());
    if (evpn_cost_in_startup.is_set || is_set(evpn_cost_in_startup.yfilter)) leaf_name_data.push_back(evpn_cost_in_startup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-timers")
    {
        if(evpn_timers == nullptr)
        {
            evpn_timers = std::make_shared<Evpn::EvpnTables::EvpnTimers>();
        }
        return evpn_timers;
    }

    if(child_yang_name == "evpnmac")
    {
        if(evpnmac == nullptr)
        {
            evpnmac = std::make_shared<Evpn::EvpnTables::Evpnmac>();
        }
        return evpnmac;
    }

    if(child_yang_name == "evpn-evis")
    {
        if(evpn_evis == nullptr)
        {
            evpn_evis = std::make_shared<Evpn::EvpnTables::EvpnEvis>();
        }
        return evpn_evis;
    }

    if(child_yang_name == "evpn-virtual-access-vfis")
    {
        if(evpn_virtual_access_vfis == nullptr)
        {
            evpn_virtual_access_vfis = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis>();
        }
        return evpn_virtual_access_vfis;
    }

    if(child_yang_name == "evpn-load-balancing")
    {
        if(evpn_load_balancing == nullptr)
        {
            evpn_load_balancing = std::make_shared<Evpn::EvpnTables::EvpnLoadBalancing>();
        }
        return evpn_load_balancing;
    }

    if(child_yang_name == "evpn-bgp-auto-discovery")
    {
        if(evpn_bgp_auto_discovery == nullptr)
        {
            evpn_bgp_auto_discovery = std::make_shared<Evpn::EvpnTables::EvpnBgpAutoDiscovery>();
        }
        return evpn_bgp_auto_discovery;
    }

    if(child_yang_name == "evpn-groups")
    {
        if(evpn_groups == nullptr)
        {
            evpn_groups = std::make_shared<Evpn::EvpnTables::EvpnGroups>();
        }
        return evpn_groups;
    }

    if(child_yang_name == "evpn-instances")
    {
        if(evpn_instances == nullptr)
        {
            evpn_instances = std::make_shared<Evpn::EvpnTables::EvpnInstances>();
        }
        return evpn_instances;
    }

    if(child_yang_name == "evpn-logging")
    {
        if(evpn_logging == nullptr)
        {
            evpn_logging = std::make_shared<Evpn::EvpnTables::EvpnLogging>();
        }
        return evpn_logging;
    }

    if(child_yang_name == "evpn-interfaces")
    {
        if(evpn_interfaces == nullptr)
        {
            evpn_interfaces = std::make_shared<Evpn::EvpnTables::EvpnInterfaces>();
        }
        return evpn_interfaces;
    }

    if(child_yang_name == "evpn-virtual-access-pws")
    {
        if(evpn_virtual_access_pws == nullptr)
        {
            evpn_virtual_access_pws = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws>();
        }
        return evpn_virtual_access_pws;
    }

    if(child_yang_name == "evpn-ethernet-segment")
    {
        if(evpn_ethernet_segment == nullptr)
        {
            evpn_ethernet_segment = std::make_shared<Evpn::EvpnTables::EvpnEthernetSegment>();
        }
        return evpn_ethernet_segment;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(evpn_timers != nullptr)
    {
        children["evpn-timers"] = evpn_timers;
    }

    if(evpnmac != nullptr)
    {
        children["evpnmac"] = evpnmac;
    }

    if(evpn_evis != nullptr)
    {
        children["evpn-evis"] = evpn_evis;
    }

    if(evpn_virtual_access_vfis != nullptr)
    {
        children["evpn-virtual-access-vfis"] = evpn_virtual_access_vfis;
    }

    if(evpn_load_balancing != nullptr)
    {
        children["evpn-load-balancing"] = evpn_load_balancing;
    }

    if(evpn_bgp_auto_discovery != nullptr)
    {
        children["evpn-bgp-auto-discovery"] = evpn_bgp_auto_discovery;
    }

    if(evpn_groups != nullptr)
    {
        children["evpn-groups"] = evpn_groups;
    }

    if(evpn_instances != nullptr)
    {
        children["evpn-instances"] = evpn_instances;
    }

    if(evpn_logging != nullptr)
    {
        children["evpn-logging"] = evpn_logging;
    }

    if(evpn_interfaces != nullptr)
    {
        children["evpn-interfaces"] = evpn_interfaces;
    }

    if(evpn_virtual_access_pws != nullptr)
    {
        children["evpn-virtual-access-pws"] = evpn_virtual_access_pws;
    }

    if(evpn_ethernet_segment != nullptr)
    {
        children["evpn-ethernet-segment"] = evpn_ethernet_segment;
    }

    return children;
}

void Evpn::EvpnTables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi-cost-out")
    {
        evi_cost_out = value;
        evi_cost_out.value_namespace = name_space;
        evi_cost_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-source-interface")
    {
        evpn_source_interface = value;
        evpn_source_interface.value_namespace = name_space;
        evpn_source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-cost-in-startup")
    {
        evpn_cost_in_startup = value;
        evpn_cost_in_startup.value_namespace = name_space;
        evpn_cost_in_startup.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi-cost-out")
    {
        evi_cost_out.yfilter = yfilter;
    }
    if(value_path == "evpn-source-interface")
    {
        evpn_source_interface.yfilter = yfilter;
    }
    if(value_path == "evpn-cost-in-startup")
    {
        evpn_cost_in_startup.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-timers" || name == "evpnmac" || name == "evpn-evis" || name == "evpn-virtual-access-vfis" || name == "evpn-load-balancing" || name == "evpn-bgp-auto-discovery" || name == "evpn-groups" || name == "evpn-instances" || name == "evpn-logging" || name == "evpn-interfaces" || name == "evpn-virtual-access-pws" || name == "evpn-ethernet-segment" || name == "evi-cost-out" || name == "evpn-source-interface" || name == "evpn-cost-in-startup")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnTimers::EvpnTimers()
    :
    evpn_carving{YType::uint32, "evpn-carving"},
    evpn_recovery{YType::uint32, "evpn-recovery"},
    enable{YType::empty, "enable"},
    evpn_peering{YType::uint32, "evpn-peering"}
{

    yang_name = "evpn-timers"; yang_parent_name = "evpn-tables"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::EvpnTables::EvpnTimers::~EvpnTimers()
{
}

bool Evpn::EvpnTables::EvpnTimers::has_data() const
{
    if (is_presence_container) return true;
    return evpn_carving.is_set
	|| evpn_recovery.is_set
	|| enable.is_set
	|| evpn_peering.is_set;
}

bool Evpn::EvpnTables::EvpnTimers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evpn_carving.yfilter)
	|| ydk::is_set(evpn_recovery.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(evpn_peering.yfilter);
}

std::string Evpn::EvpnTables::EvpnTimers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evpn_carving.is_set || is_set(evpn_carving.yfilter)) leaf_name_data.push_back(evpn_carving.get_name_leafdata());
    if (evpn_recovery.is_set || is_set(evpn_recovery.yfilter)) leaf_name_data.push_back(evpn_recovery.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (evpn_peering.is_set || is_set(evpn_peering.yfilter)) leaf_name_data.push_back(evpn_peering.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::EvpnTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evpn-carving")
    {
        evpn_carving = value;
        evpn_carving.value_namespace = name_space;
        evpn_carving.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-recovery")
    {
        evpn_recovery = value;
        evpn_recovery.value_namespace = name_space;
        evpn_recovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-peering")
    {
        evpn_peering = value;
        evpn_peering.value_namespace = name_space;
        evpn_peering.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evpn-carving")
    {
        evpn_carving.yfilter = yfilter;
    }
    if(value_path == "evpn-recovery")
    {
        evpn_recovery.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "evpn-peering")
    {
        evpn_peering.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-carving" || name == "evpn-recovery" || name == "enable" || name == "evpn-peering")
        return true;
    return false;
}

Evpn::EvpnTables::Evpnmac::Evpnmac()
    :
    enable{YType::empty, "enable"}
        ,
    evpnmac_secure(std::make_shared<Evpn::EvpnTables::Evpnmac::EvpnmacSecure>())
{
    evpnmac_secure->parent = this;

    yang_name = "evpnmac"; yang_parent_name = "evpn-tables"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::EvpnTables::Evpnmac::~Evpnmac()
{
}

bool Evpn::EvpnTables::Evpnmac::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (evpnmac_secure !=  nullptr && evpnmac_secure->has_data());
}

bool Evpn::EvpnTables::Evpnmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (evpnmac_secure !=  nullptr && evpnmac_secure->has_operation());
}

std::string Evpn::EvpnTables::Evpnmac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::Evpnmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpnmac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::Evpnmac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::Evpnmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpnmac-secure")
    {
        if(evpnmac_secure == nullptr)
        {
            evpnmac_secure = std::make_shared<Evpn::EvpnTables::Evpnmac::EvpnmacSecure>();
        }
        return evpnmac_secure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::Evpnmac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(evpnmac_secure != nullptr)
    {
        children["evpnmac-secure"] = evpnmac_secure;
    }

    return children;
}

void Evpn::EvpnTables::Evpnmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::Evpnmac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::Evpnmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpnmac-secure" || name == "enable")
        return true;
    return false;
}

Evpn::EvpnTables::Evpnmac::EvpnmacSecure::EvpnmacSecure()
    :
    evpnmac_secure_freeze_time{YType::uint32, "evpnmac-secure-freeze-time"},
    enable{YType::empty, "enable"},
    evpnmac_secure_retry_count{YType::uint32, "evpnmac-secure-retry-count"},
    evpnmac_secure_move_count{YType::uint32, "evpnmac-secure-move-count"},
    evpnmac_secure_move_interval{YType::uint32, "evpnmac-secure-move-interval"}
{

    yang_name = "evpnmac-secure"; yang_parent_name = "evpnmac"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::EvpnTables::Evpnmac::EvpnmacSecure::~EvpnmacSecure()
{
}

bool Evpn::EvpnTables::Evpnmac::EvpnmacSecure::has_data() const
{
    if (is_presence_container) return true;
    return evpnmac_secure_freeze_time.is_set
	|| enable.is_set
	|| evpnmac_secure_retry_count.is_set
	|| evpnmac_secure_move_count.is_set
	|| evpnmac_secure_move_interval.is_set;
}

bool Evpn::EvpnTables::Evpnmac::EvpnmacSecure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evpnmac_secure_freeze_time.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(evpnmac_secure_retry_count.yfilter)
	|| ydk::is_set(evpnmac_secure_move_count.yfilter)
	|| ydk::is_set(evpnmac_secure_move_interval.yfilter);
}

std::string Evpn::EvpnTables::Evpnmac::EvpnmacSecure::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/evpnmac/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::Evpnmac::EvpnmacSecure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpnmac-secure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::Evpnmac::EvpnmacSecure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evpnmac_secure_freeze_time.is_set || is_set(evpnmac_secure_freeze_time.yfilter)) leaf_name_data.push_back(evpnmac_secure_freeze_time.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (evpnmac_secure_retry_count.is_set || is_set(evpnmac_secure_retry_count.yfilter)) leaf_name_data.push_back(evpnmac_secure_retry_count.get_name_leafdata());
    if (evpnmac_secure_move_count.is_set || is_set(evpnmac_secure_move_count.yfilter)) leaf_name_data.push_back(evpnmac_secure_move_count.get_name_leafdata());
    if (evpnmac_secure_move_interval.is_set || is_set(evpnmac_secure_move_interval.yfilter)) leaf_name_data.push_back(evpnmac_secure_move_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::Evpnmac::EvpnmacSecure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::Evpnmac::EvpnmacSecure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::Evpnmac::EvpnmacSecure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evpnmac-secure-freeze-time")
    {
        evpnmac_secure_freeze_time = value;
        evpnmac_secure_freeze_time.value_namespace = name_space;
        evpnmac_secure_freeze_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpnmac-secure-retry-count")
    {
        evpnmac_secure_retry_count = value;
        evpnmac_secure_retry_count.value_namespace = name_space;
        evpnmac_secure_retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpnmac-secure-move-count")
    {
        evpnmac_secure_move_count = value;
        evpnmac_secure_move_count.value_namespace = name_space;
        evpnmac_secure_move_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpnmac-secure-move-interval")
    {
        evpnmac_secure_move_interval = value;
        evpnmac_secure_move_interval.value_namespace = name_space;
        evpnmac_secure_move_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::Evpnmac::EvpnmacSecure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evpnmac-secure-freeze-time")
    {
        evpnmac_secure_freeze_time.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "evpnmac-secure-retry-count")
    {
        evpnmac_secure_retry_count.yfilter = yfilter;
    }
    if(value_path == "evpnmac-secure-move-count")
    {
        evpnmac_secure_move_count.yfilter = yfilter;
    }
    if(value_path == "evpnmac-secure-move-interval")
    {
        evpnmac_secure_move_interval.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::Evpnmac::EvpnmacSecure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpnmac-secure-freeze-time" || name == "enable" || name == "evpnmac-secure-retry-count" || name == "evpnmac-secure-move-count" || name == "evpnmac-secure-move-interval")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnEvis::EvpnEvis()
    :
    evpn_evi(this, {"eviid"})
{

    yang_name = "evpn-evis"; yang_parent_name = "evpn-tables"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::EvpnTables::EvpnEvis::~EvpnEvis()
{
}

bool Evpn::EvpnTables::EvpnEvis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<evpn_evi.len(); index++)
    {
        if(evpn_evi[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::EvpnTables::EvpnEvis::has_operation() const
{
    for (std::size_t index=0; index<evpn_evi.len(); index++)
    {
        if(evpn_evi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::EvpnTables::EvpnEvis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnEvis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-evis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnEvis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnEvis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-evi")
    {
        auto c = std::make_shared<Evpn::EvpnTables::EvpnEvis::EvpnEvi>();
        c->parent = this;
        evpn_evi.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnEvis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : evpn_evi.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Evpn::EvpnTables::EvpnEvis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::EvpnTables::EvpnEvis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::EvpnTables::EvpnEvis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-evi")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEvi()
    :
    eviid{YType::uint32, "eviid"},
    evi_reorig_disable{YType::empty, "evi-reorig-disable"},
    evi_advertise_mac_deprecated{YType::empty, "evi-advertise-mac-deprecated"},
    evpn_evi_description{YType::str, "evpn-evi-description"},
    evi_ecmp_disable{YType::empty, "evi-ecmp-disable"},
    evi_unknown_unicast_flooding_disable{YType::empty, "evi-unknown-unicast-flooding-disable"},
    evpn_evi_cw_disable{YType::empty, "evpn-evi-cw-disable"}
        ,
    evi_load_balancing(std::make_shared<Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviLoadBalancing>())
    , evpn_evi_bgp_auto_discovery(std::make_shared<Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery>())
    , evi_advertise_mac(std::make_shared<Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviAdvertiseMac>())
{
    evi_load_balancing->parent = this;
    evpn_evi_bgp_auto_discovery->parent = this;
    evi_advertise_mac->parent = this;

    yang_name = "evpn-evi"; yang_parent_name = "evpn-evis"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::EvpnTables::EvpnEvis::EvpnEvi::~EvpnEvi()
{
}

bool Evpn::EvpnTables::EvpnEvis::EvpnEvi::has_data() const
{
    if (is_presence_container) return true;
    return eviid.is_set
	|| evi_reorig_disable.is_set
	|| evi_advertise_mac_deprecated.is_set
	|| evpn_evi_description.is_set
	|| evi_ecmp_disable.is_set
	|| evi_unknown_unicast_flooding_disable.is_set
	|| evpn_evi_cw_disable.is_set
	|| (evi_load_balancing !=  nullptr && evi_load_balancing->has_data())
	|| (evpn_evi_bgp_auto_discovery !=  nullptr && evpn_evi_bgp_auto_discovery->has_data())
	|| (evi_advertise_mac !=  nullptr && evi_advertise_mac->has_data());
}

bool Evpn::EvpnTables::EvpnEvis::EvpnEvi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eviid.yfilter)
	|| ydk::is_set(evi_reorig_disable.yfilter)
	|| ydk::is_set(evi_advertise_mac_deprecated.yfilter)
	|| ydk::is_set(evpn_evi_description.yfilter)
	|| ydk::is_set(evi_ecmp_disable.yfilter)
	|| ydk::is_set(evi_unknown_unicast_flooding_disable.yfilter)
	|| ydk::is_set(evpn_evi_cw_disable.yfilter)
	|| (evi_load_balancing !=  nullptr && evi_load_balancing->has_operation())
	|| (evpn_evi_bgp_auto_discovery !=  nullptr && evpn_evi_bgp_auto_discovery->has_operation())
	|| (evi_advertise_mac !=  nullptr && evi_advertise_mac->has_operation());
}

std::string Evpn::EvpnTables::EvpnEvis::EvpnEvi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/evpn-evis/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnEvis::EvpnEvi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-evi";
    ADD_KEY_TOKEN(eviid, "eviid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnEvis::EvpnEvi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eviid.is_set || is_set(eviid.yfilter)) leaf_name_data.push_back(eviid.get_name_leafdata());
    if (evi_reorig_disable.is_set || is_set(evi_reorig_disable.yfilter)) leaf_name_data.push_back(evi_reorig_disable.get_name_leafdata());
    if (evi_advertise_mac_deprecated.is_set || is_set(evi_advertise_mac_deprecated.yfilter)) leaf_name_data.push_back(evi_advertise_mac_deprecated.get_name_leafdata());
    if (evpn_evi_description.is_set || is_set(evpn_evi_description.yfilter)) leaf_name_data.push_back(evpn_evi_description.get_name_leafdata());
    if (evi_ecmp_disable.is_set || is_set(evi_ecmp_disable.yfilter)) leaf_name_data.push_back(evi_ecmp_disable.get_name_leafdata());
    if (evi_unknown_unicast_flooding_disable.is_set || is_set(evi_unknown_unicast_flooding_disable.yfilter)) leaf_name_data.push_back(evi_unknown_unicast_flooding_disable.get_name_leafdata());
    if (evpn_evi_cw_disable.is_set || is_set(evpn_evi_cw_disable.yfilter)) leaf_name_data.push_back(evpn_evi_cw_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnEvis::EvpnEvi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evi-load-balancing")
    {
        if(evi_load_balancing == nullptr)
        {
            evi_load_balancing = std::make_shared<Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviLoadBalancing>();
        }
        return evi_load_balancing;
    }

    if(child_yang_name == "evpn-evi-bgp-auto-discovery")
    {
        if(evpn_evi_bgp_auto_discovery == nullptr)
        {
            evpn_evi_bgp_auto_discovery = std::make_shared<Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery>();
        }
        return evpn_evi_bgp_auto_discovery;
    }

    if(child_yang_name == "evi-advertise-mac")
    {
        if(evi_advertise_mac == nullptr)
        {
            evi_advertise_mac = std::make_shared<Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviAdvertiseMac>();
        }
        return evi_advertise_mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnEvis::EvpnEvi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(evi_load_balancing != nullptr)
    {
        children["evi-load-balancing"] = evi_load_balancing;
    }

    if(evpn_evi_bgp_auto_discovery != nullptr)
    {
        children["evpn-evi-bgp-auto-discovery"] = evpn_evi_bgp_auto_discovery;
    }

    if(evi_advertise_mac != nullptr)
    {
        children["evi-advertise-mac"] = evi_advertise_mac;
    }

    return children;
}

void Evpn::EvpnTables::EvpnEvis::EvpnEvi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eviid")
    {
        eviid = value;
        eviid.value_namespace = name_space;
        eviid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-reorig-disable")
    {
        evi_reorig_disable = value;
        evi_reorig_disable.value_namespace = name_space;
        evi_reorig_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-advertise-mac-deprecated")
    {
        evi_advertise_mac_deprecated = value;
        evi_advertise_mac_deprecated.value_namespace = name_space;
        evi_advertise_mac_deprecated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-evi-description")
    {
        evpn_evi_description = value;
        evpn_evi_description.value_namespace = name_space;
        evpn_evi_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-ecmp-disable")
    {
        evi_ecmp_disable = value;
        evi_ecmp_disable.value_namespace = name_space;
        evi_ecmp_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-unknown-unicast-flooding-disable")
    {
        evi_unknown_unicast_flooding_disable = value;
        evi_unknown_unicast_flooding_disable.value_namespace = name_space;
        evi_unknown_unicast_flooding_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-evi-cw-disable")
    {
        evpn_evi_cw_disable = value;
        evpn_evi_cw_disable.value_namespace = name_space;
        evpn_evi_cw_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnEvis::EvpnEvi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eviid")
    {
        eviid.yfilter = yfilter;
    }
    if(value_path == "evi-reorig-disable")
    {
        evi_reorig_disable.yfilter = yfilter;
    }
    if(value_path == "evi-advertise-mac-deprecated")
    {
        evi_advertise_mac_deprecated.yfilter = yfilter;
    }
    if(value_path == "evpn-evi-description")
    {
        evpn_evi_description.yfilter = yfilter;
    }
    if(value_path == "evi-ecmp-disable")
    {
        evi_ecmp_disable.yfilter = yfilter;
    }
    if(value_path == "evi-unknown-unicast-flooding-disable")
    {
        evi_unknown_unicast_flooding_disable.yfilter = yfilter;
    }
    if(value_path == "evpn-evi-cw-disable")
    {
        evpn_evi_cw_disable.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnEvis::EvpnEvi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evi-load-balancing" || name == "evpn-evi-bgp-auto-discovery" || name == "evi-advertise-mac" || name == "eviid" || name == "evi-reorig-disable" || name == "evi-advertise-mac-deprecated" || name == "evpn-evi-description" || name == "evi-ecmp-disable" || name == "evi-unknown-unicast-flooding-disable" || name == "evpn-evi-cw-disable")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviLoadBalancing::EviLoadBalancing()
    :
    enable{YType::empty, "enable"},
    evi_static_flow_label{YType::empty, "evi-static-flow-label"}
{

    yang_name = "evi-load-balancing"; yang_parent_name = "evpn-evi"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviLoadBalancing::~EviLoadBalancing()
{
}

bool Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviLoadBalancing::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| evi_static_flow_label.is_set;
}

bool Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviLoadBalancing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(evi_static_flow_label.yfilter);
}

std::string Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviLoadBalancing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evi-load-balancing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviLoadBalancing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (evi_static_flow_label.is_set || is_set(evi_static_flow_label.yfilter)) leaf_name_data.push_back(evi_static_flow_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviLoadBalancing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviLoadBalancing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviLoadBalancing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-static-flow-label")
    {
        evi_static_flow_label = value;
        evi_static_flow_label.value_namespace = name_space;
        evi_static_flow_label.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviLoadBalancing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "evi-static-flow-label")
    {
        evi_static_flow_label.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviLoadBalancing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "evi-static-flow-label")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnEviBgpAutoDiscovery()
    :
    enable{YType::empty, "enable"},
    table_policy{YType::str, "table-policy"}
        ,
    evpn_route_distinguisher(std::make_shared<Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteDistinguisher>())
    , evpn_route_targets(std::make_shared<Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets>())
{
    evpn_route_distinguisher->parent = this;
    evpn_route_targets->parent = this;

    yang_name = "evpn-evi-bgp-auto-discovery"; yang_parent_name = "evpn-evi"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::~EvpnEviBgpAutoDiscovery()
{
}

bool Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| table_policy.is_set
	|| (evpn_route_distinguisher !=  nullptr && evpn_route_distinguisher->has_data())
	|| (evpn_route_targets !=  nullptr && evpn_route_targets->has_data());
}

bool Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(table_policy.yfilter)
	|| (evpn_route_distinguisher !=  nullptr && evpn_route_distinguisher->has_operation())
	|| (evpn_route_targets !=  nullptr && evpn_route_targets->has_operation());
}

std::string Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-evi-bgp-auto-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (table_policy.is_set || is_set(table_policy.yfilter)) leaf_name_data.push_back(table_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-route-distinguisher")
    {
        if(evpn_route_distinguisher == nullptr)
        {
            evpn_route_distinguisher = std::make_shared<Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteDistinguisher>();
        }
        return evpn_route_distinguisher;
    }

    if(child_yang_name == "evpn-route-targets")
    {
        if(evpn_route_targets == nullptr)
        {
            evpn_route_targets = std::make_shared<Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets>();
        }
        return evpn_route_targets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(evpn_route_distinguisher != nullptr)
    {
        children["evpn-route-distinguisher"] = evpn_route_distinguisher;
    }

    if(evpn_route_targets != nullptr)
    {
        children["evpn-route-targets"] = evpn_route_targets;
    }

    return children;
}

void Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-policy")
    {
        table_policy = value;
        table_policy.value_namespace = name_space;
        table_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "table-policy")
    {
        table_policy.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-route-distinguisher" || name == "evpn-route-targets" || name == "enable" || name == "table-policy")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteDistinguisher::EvpnRouteDistinguisher()
    :
    type{YType::enumeration, "type"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    address{YType::str, "address"},
    addr_index{YType::uint32, "addr-index"}
{

    yang_name = "evpn-route-distinguisher"; yang_parent_name = "evpn-evi-bgp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteDistinguisher::~EvpnRouteDistinguisher()
{
}

bool Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteDistinguisher::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| as.is_set
	|| as_index.is_set
	|| address.is_set
	|| addr_index.is_set;
}

bool Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(addr_index.yfilter);
}

std::string Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-distinguisher";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (addr_index.is_set || is_set(addr_index.yfilter)) leaf_name_data.push_back(addr_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr-index")
    {
        addr_index = value;
        addr_index.value_namespace = name_space;
        addr_index.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "addr-index")
    {
        addr_index.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "as" || name == "as-index" || name == "address" || name == "addr-index")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargets()
    :
    evpn_route_target_as(this, {"format", "role", "as", "as_index", "stitching"})
    , evpn_route_target_none(this, {"format", "role", "stitching"})
    , evpn_route_target_ipv4_address(this, {"format", "role", "address", "addr_index", "stitching"})
{

    yang_name = "evpn-route-targets"; yang_parent_name = "evpn-evi-bgp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::~EvpnRouteTargets()
{
}

bool Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<evpn_route_target_as.len(); index++)
    {
        if(evpn_route_target_as[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<evpn_route_target_none.len(); index++)
    {
        if(evpn_route_target_none[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<evpn_route_target_ipv4_address.len(); index++)
    {
        if(evpn_route_target_ipv4_address[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::has_operation() const
{
    for (std::size_t index=0; index<evpn_route_target_as.len(); index++)
    {
        if(evpn_route_target_as[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<evpn_route_target_none.len(); index++)
    {
        if(evpn_route_target_none[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<evpn_route_target_ipv4_address.len(); index++)
    {
        if(evpn_route_target_ipv4_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-targets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-route-target-as")
    {
        auto c = std::make_shared<Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs>();
        c->parent = this;
        evpn_route_target_as.append(c);
        return c;
    }

    if(child_yang_name == "evpn-route-target-none")
    {
        auto c = std::make_shared<Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone>();
        c->parent = this;
        evpn_route_target_none.append(c);
        return c;
    }

    if(child_yang_name == "evpn-route-target-ipv4-address")
    {
        auto c = std::make_shared<Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address>();
        c->parent = this;
        evpn_route_target_ipv4_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : evpn_route_target_as.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : evpn_route_target_none.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : evpn_route_target_ipv4_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-route-target-as" || name == "evpn-route-target-none" || name == "evpn-route-target-ipv4-address")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::EvpnRouteTargetAs()
    :
    format{YType::enumeration, "format"},
    role{YType::enumeration, "role"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    stitching{YType::enumeration, "stitching"}
{

    yang_name = "evpn-route-target-as"; yang_parent_name = "evpn-route-targets"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::~EvpnRouteTargetAs()
{
}

bool Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::has_data() const
{
    if (is_presence_container) return true;
    return format.is_set
	|| role.is_set
	|| as.is_set
	|| as_index.is_set
	|| stitching.is_set;
}

bool Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(stitching.yfilter);
}

std::string Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-target-as";
    ADD_KEY_TOKEN(format, "format");
    ADD_KEY_TOKEN(role, "role");
    ADD_KEY_TOKEN(as, "as");
    ADD_KEY_TOKEN(as_index, "as-index");
    ADD_KEY_TOKEN(stitching, "stitching");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (stitching.is_set || is_set(stitching.yfilter)) leaf_name_data.push_back(stitching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stitching")
    {
        stitching = value;
        stitching.value_namespace = name_space;
        stitching.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "stitching")
    {
        stitching.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format" || name == "role" || name == "as" || name == "as-index" || name == "stitching")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::EvpnRouteTargetNone()
    :
    format{YType::enumeration, "format"},
    role{YType::enumeration, "role"},
    stitching{YType::enumeration, "stitching"}
{

    yang_name = "evpn-route-target-none"; yang_parent_name = "evpn-route-targets"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::~EvpnRouteTargetNone()
{
}

bool Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::has_data() const
{
    if (is_presence_container) return true;
    return format.is_set
	|| role.is_set
	|| stitching.is_set;
}

bool Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(stitching.yfilter);
}

std::string Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-target-none";
    ADD_KEY_TOKEN(format, "format");
    ADD_KEY_TOKEN(role, "role");
    ADD_KEY_TOKEN(stitching, "stitching");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (stitching.is_set || is_set(stitching.yfilter)) leaf_name_data.push_back(stitching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stitching")
    {
        stitching = value;
        stitching.value_namespace = name_space;
        stitching.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "stitching")
    {
        stitching.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format" || name == "role" || name == "stitching")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::EvpnRouteTargetIpv4Address()
    :
    format{YType::enumeration, "format"},
    role{YType::enumeration, "role"},
    address{YType::str, "address"},
    addr_index{YType::uint32, "addr-index"},
    stitching{YType::enumeration, "stitching"}
{

    yang_name = "evpn-route-target-ipv4-address"; yang_parent_name = "evpn-route-targets"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::~EvpnRouteTargetIpv4Address()
{
}

bool Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::has_data() const
{
    if (is_presence_container) return true;
    return format.is_set
	|| role.is_set
	|| address.is_set
	|| addr_index.is_set
	|| stitching.is_set;
}

bool Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(addr_index.yfilter)
	|| ydk::is_set(stitching.yfilter);
}

std::string Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-target-ipv4-address";
    ADD_KEY_TOKEN(format, "format");
    ADD_KEY_TOKEN(role, "role");
    ADD_KEY_TOKEN(address, "address");
    ADD_KEY_TOKEN(addr_index, "addr-index");
    ADD_KEY_TOKEN(stitching, "stitching");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (addr_index.is_set || is_set(addr_index.yfilter)) leaf_name_data.push_back(addr_index.get_name_leafdata());
    if (stitching.is_set || is_set(stitching.yfilter)) leaf_name_data.push_back(stitching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr-index")
    {
        addr_index = value;
        addr_index.value_namespace = name_space;
        addr_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stitching")
    {
        stitching = value;
        stitching.value_namespace = name_space;
        stitching.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "addr-index")
    {
        addr_index.yfilter = yfilter;
    }
    if(value_path == "stitching")
    {
        stitching.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnEvis::EvpnEvi::EvpnEviBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format" || name == "role" || name == "address" || name == "addr-index" || name == "stitching")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviAdvertiseMac::EviAdvertiseMac()
    :
    enable{YType::empty, "enable"},
    evi_advertise_mac_bvi{YType::empty, "evi-advertise-mac-bvi"}
{

    yang_name = "evi-advertise-mac"; yang_parent_name = "evpn-evi"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviAdvertiseMac::~EviAdvertiseMac()
{
}

bool Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviAdvertiseMac::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| evi_advertise_mac_bvi.is_set;
}

bool Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviAdvertiseMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(evi_advertise_mac_bvi.yfilter);
}

std::string Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviAdvertiseMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evi-advertise-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviAdvertiseMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (evi_advertise_mac_bvi.is_set || is_set(evi_advertise_mac_bvi.yfilter)) leaf_name_data.push_back(evi_advertise_mac_bvi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviAdvertiseMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviAdvertiseMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviAdvertiseMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-advertise-mac-bvi")
    {
        evi_advertise_mac_bvi = value;
        evi_advertise_mac_bvi.value_namespace = name_space;
        evi_advertise_mac_bvi.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviAdvertiseMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "evi-advertise-mac-bvi")
    {
        evi_advertise_mac_bvi.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnEvis::EvpnEvi::EviAdvertiseMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "evi-advertise-mac-bvi")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfis()
    :
    evpn_virtual_access_vfi(this, {"name"})
{

    yang_name = "evpn-virtual-access-vfis"; yang_parent_name = "evpn-tables"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::~EvpnVirtualAccessVfis()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<evpn_virtual_access_vfi.len(); index++)
    {
        if(evpn_virtual_access_vfi[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::has_operation() const
{
    for (std::size_t index=0; index<evpn_virtual_access_vfi.len(); index++)
    {
        if(evpn_virtual_access_vfi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::EvpnTables::EvpnVirtualAccessVfis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnVirtualAccessVfis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-virtual-access-vfis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessVfis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessVfis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-virtual-access-vfi")
    {
        auto c = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi>();
        c->parent = this;
        evpn_virtual_access_vfi.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessVfis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : evpn_virtual_access_vfi.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-virtual-access-vfi")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfi()
    :
    name{YType::str, "name"}
        ,
    evpn_virtual_access_vfi_timers(std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers>())
    , evpn_virtual_ethernet_segment(std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment>())
{
    evpn_virtual_access_vfi_timers->parent = this;
    evpn_virtual_ethernet_segment->parent = this;

    yang_name = "evpn-virtual-access-vfi"; yang_parent_name = "evpn-virtual-access-vfis"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::~EvpnVirtualAccessVfi()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (evpn_virtual_access_vfi_timers !=  nullptr && evpn_virtual_access_vfi_timers->has_data())
	|| (evpn_virtual_ethernet_segment !=  nullptr && evpn_virtual_ethernet_segment->has_data());
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (evpn_virtual_access_vfi_timers !=  nullptr && evpn_virtual_access_vfi_timers->has_operation())
	|| (evpn_virtual_ethernet_segment !=  nullptr && evpn_virtual_ethernet_segment->has_operation());
}

std::string Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/evpn-virtual-access-vfis/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-virtual-access-vfi";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-virtual-access-vfi-timers")
    {
        if(evpn_virtual_access_vfi_timers == nullptr)
        {
            evpn_virtual_access_vfi_timers = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers>();
        }
        return evpn_virtual_access_vfi_timers;
    }

    if(child_yang_name == "evpn-virtual-ethernet-segment")
    {
        if(evpn_virtual_ethernet_segment == nullptr)
        {
            evpn_virtual_ethernet_segment = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment>();
        }
        return evpn_virtual_ethernet_segment;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(evpn_virtual_access_vfi_timers != nullptr)
    {
        children["evpn-virtual-access-vfi-timers"] = evpn_virtual_access_vfi_timers;
    }

    if(evpn_virtual_ethernet_segment != nullptr)
    {
        children["evpn-virtual-ethernet-segment"] = evpn_virtual_ethernet_segment;
    }

    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-virtual-access-vfi-timers" || name == "evpn-virtual-ethernet-segment" || name == "name")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::EvpnVirtualAccessVfiTimers()
    :
    evpn_virtual_access_vfi_recovery{YType::uint32, "evpn-virtual-access-vfi-recovery"},
    evpn_virtual_access_vfi_peering{YType::uint32, "evpn-virtual-access-vfi-peering"},
    evpn_virtual_access_vfi_carving{YType::uint32, "evpn-virtual-access-vfi-carving"},
    enable{YType::empty, "enable"}
{

    yang_name = "evpn-virtual-access-vfi-timers"; yang_parent_name = "evpn-virtual-access-vfi"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::~EvpnVirtualAccessVfiTimers()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::has_data() const
{
    if (is_presence_container) return true;
    return evpn_virtual_access_vfi_recovery.is_set
	|| evpn_virtual_access_vfi_peering.is_set
	|| evpn_virtual_access_vfi_carving.is_set
	|| enable.is_set;
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evpn_virtual_access_vfi_recovery.yfilter)
	|| ydk::is_set(evpn_virtual_access_vfi_peering.yfilter)
	|| ydk::is_set(evpn_virtual_access_vfi_carving.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-virtual-access-vfi-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evpn_virtual_access_vfi_recovery.is_set || is_set(evpn_virtual_access_vfi_recovery.yfilter)) leaf_name_data.push_back(evpn_virtual_access_vfi_recovery.get_name_leafdata());
    if (evpn_virtual_access_vfi_peering.is_set || is_set(evpn_virtual_access_vfi_peering.yfilter)) leaf_name_data.push_back(evpn_virtual_access_vfi_peering.get_name_leafdata());
    if (evpn_virtual_access_vfi_carving.is_set || is_set(evpn_virtual_access_vfi_carving.yfilter)) leaf_name_data.push_back(evpn_virtual_access_vfi_carving.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evpn-virtual-access-vfi-recovery")
    {
        evpn_virtual_access_vfi_recovery = value;
        evpn_virtual_access_vfi_recovery.value_namespace = name_space;
        evpn_virtual_access_vfi_recovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-virtual-access-vfi-peering")
    {
        evpn_virtual_access_vfi_peering = value;
        evpn_virtual_access_vfi_peering.value_namespace = name_space;
        evpn_virtual_access_vfi_peering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-virtual-access-vfi-carving")
    {
        evpn_virtual_access_vfi_carving = value;
        evpn_virtual_access_vfi_carving.value_namespace = name_space;
        evpn_virtual_access_vfi_carving.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evpn-virtual-access-vfi-recovery")
    {
        evpn_virtual_access_vfi_recovery.yfilter = yfilter;
    }
    if(value_path == "evpn-virtual-access-vfi-peering")
    {
        evpn_virtual_access_vfi_peering.yfilter = yfilter;
    }
    if(value_path == "evpn-virtual-access-vfi-carving")
    {
        evpn_virtual_access_vfi_carving.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-virtual-access-vfi-recovery" || name == "evpn-virtual-access-vfi-peering" || name == "evpn-virtual-access-vfi-carving" || name == "enable")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::EvpnVirtualEthernetSegment()
    :
    enable{YType::empty, "enable"},
    es_import_route_target{YType::str, "es-import-route-target"}
        ,
    identifier(nullptr) // presence node
    , manual_service_carving(std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving>())
{
    manual_service_carving->parent = this;

    yang_name = "evpn-virtual-ethernet-segment"; yang_parent_name = "evpn-virtual-access-vfi"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::~EvpnVirtualEthernetSegment()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| es_import_route_target.is_set
	|| (identifier !=  nullptr && identifier->has_data())
	|| (manual_service_carving !=  nullptr && manual_service_carving->has_data());
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(es_import_route_target.yfilter)
	|| (identifier !=  nullptr && identifier->has_operation())
	|| (manual_service_carving !=  nullptr && manual_service_carving->has_operation());
}

std::string Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-virtual-ethernet-segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (es_import_route_target.is_set || is_set(es_import_route_target.yfilter)) leaf_name_data.push_back(es_import_route_target.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identifier")
    {
        if(identifier == nullptr)
        {
            identifier = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier>();
        }
        return identifier;
    }

    if(child_yang_name == "manual-service-carving")
    {
        if(manual_service_carving == nullptr)
        {
            manual_service_carving = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving>();
        }
        return manual_service_carving;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(identifier != nullptr)
    {
        children["identifier"] = identifier;
    }

    if(manual_service_carving != nullptr)
    {
        children["manual-service-carving"] = manual_service_carving;
    }

    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "es-import-route-target")
    {
        es_import_route_target = value;
        es_import_route_target.value_namespace = name_space;
        es_import_route_target.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "es-import-route-target")
    {
        es_import_route_target.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "manual-service-carving" || name == "enable" || name == "es-import-route-target")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::Identifier()
    :
    bytes01{YType::str, "bytes01"},
    bytes23{YType::str, "bytes23"},
    bytes45{YType::str, "bytes45"},
    bytes67{YType::str, "bytes67"},
    bytes89{YType::str, "bytes89"},
    type{YType::enumeration, "type"}
{

    yang_name = "identifier"; yang_parent_name = "evpn-virtual-ethernet-segment"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::~Identifier()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::has_data() const
{
    if (is_presence_container) return true;
    return bytes01.is_set
	|| bytes23.is_set
	|| bytes45.is_set
	|| bytes67.is_set
	|| bytes89.is_set
	|| type.is_set;
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes01.yfilter)
	|| ydk::is_set(bytes23.yfilter)
	|| ydk::is_set(bytes45.yfilter)
	|| ydk::is_set(bytes67.yfilter)
	|| ydk::is_set(bytes89.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes01.is_set || is_set(bytes01.yfilter)) leaf_name_data.push_back(bytes01.get_name_leafdata());
    if (bytes23.is_set || is_set(bytes23.yfilter)) leaf_name_data.push_back(bytes23.get_name_leafdata());
    if (bytes45.is_set || is_set(bytes45.yfilter)) leaf_name_data.push_back(bytes45.get_name_leafdata());
    if (bytes67.is_set || is_set(bytes67.yfilter)) leaf_name_data.push_back(bytes67.get_name_leafdata());
    if (bytes89.is_set || is_set(bytes89.yfilter)) leaf_name_data.push_back(bytes89.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes01")
    {
        bytes01 = value;
        bytes01.value_namespace = name_space;
        bytes01.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes23")
    {
        bytes23 = value;
        bytes23.value_namespace = name_space;
        bytes23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes45")
    {
        bytes45 = value;
        bytes45.value_namespace = name_space;
        bytes45.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes67")
    {
        bytes67 = value;
        bytes67.value_namespace = name_space;
        bytes67.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes89")
    {
        bytes89 = value;
        bytes89.value_namespace = name_space;
        bytes89.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes01")
    {
        bytes01.yfilter = yfilter;
    }
    if(value_path == "bytes23")
    {
        bytes23.yfilter = yfilter;
    }
    if(value_path == "bytes45")
    {
        bytes45.yfilter = yfilter;
    }
    if(value_path == "bytes67")
    {
        bytes67.yfilter = yfilter;
    }
    if(value_path == "bytes89")
    {
        bytes89.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes01" || name == "bytes23" || name == "bytes45" || name == "bytes67" || name == "bytes89" || name == "type")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ManualServiceCarving()
    :
    enable{YType::empty, "enable"}
        ,
    service_list(std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList>())
{
    service_list->parent = this;

    yang_name = "manual-service-carving"; yang_parent_name = "evpn-virtual-ethernet-segment"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::~ManualServiceCarving()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (service_list !=  nullptr && service_list->has_data());
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (service_list !=  nullptr && service_list->has_operation());
}

std::string Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual-service-carving";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-list")
    {
        if(service_list == nullptr)
        {
            service_list = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList>();
        }
        return service_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(service_list != nullptr)
    {
        children["service-list"] = service_list;
    }

    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-list" || name == "enable")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::ServiceList()
    :
    primary{YType::str, "primary"},
    secondary{YType::str, "secondary"}
{

    yang_name = "service-list"; yang_parent_name = "manual-service-carving"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::~ServiceList()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::has_data() const
{
    if (is_presence_container) return true;
    return primary.is_set
	|| secondary.is_set;
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnLoadBalancing::EvpnLoadBalancing()
    :
    evpn_static_flow_label{YType::empty, "evpn-static-flow-label"},
    enable{YType::empty, "enable"}
{

    yang_name = "evpn-load-balancing"; yang_parent_name = "evpn-tables"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::EvpnTables::EvpnLoadBalancing::~EvpnLoadBalancing()
{
}

bool Evpn::EvpnTables::EvpnLoadBalancing::has_data() const
{
    if (is_presence_container) return true;
    return evpn_static_flow_label.is_set
	|| enable.is_set;
}

bool Evpn::EvpnTables::EvpnLoadBalancing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evpn_static_flow_label.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Evpn::EvpnTables::EvpnLoadBalancing::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnLoadBalancing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-load-balancing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnLoadBalancing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evpn_static_flow_label.is_set || is_set(evpn_static_flow_label.yfilter)) leaf_name_data.push_back(evpn_static_flow_label.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnLoadBalancing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnLoadBalancing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::EvpnLoadBalancing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evpn-static-flow-label")
    {
        evpn_static_flow_label = value;
        evpn_static_flow_label.value_namespace = name_space;
        evpn_static_flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnLoadBalancing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evpn-static-flow-label")
    {
        evpn_static_flow_label.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnLoadBalancing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-static-flow-label" || name == "enable")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnBgpAutoDiscovery()
    :
    enable{YType::empty, "enable"}
        ,
    evpn_route_distinguisher(std::make_shared<Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher>())
{
    evpn_route_distinguisher->parent = this;

    yang_name = "evpn-bgp-auto-discovery"; yang_parent_name = "evpn-tables"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::EvpnTables::EvpnBgpAutoDiscovery::~EvpnBgpAutoDiscovery()
{
}

bool Evpn::EvpnTables::EvpnBgpAutoDiscovery::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (evpn_route_distinguisher !=  nullptr && evpn_route_distinguisher->has_data());
}

bool Evpn::EvpnTables::EvpnBgpAutoDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (evpn_route_distinguisher !=  nullptr && evpn_route_distinguisher->has_operation());
}

std::string Evpn::EvpnTables::EvpnBgpAutoDiscovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnBgpAutoDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-bgp-auto-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnBgpAutoDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnBgpAutoDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-route-distinguisher")
    {
        if(evpn_route_distinguisher == nullptr)
        {
            evpn_route_distinguisher = std::make_shared<Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher>();
        }
        return evpn_route_distinguisher;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnBgpAutoDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(evpn_route_distinguisher != nullptr)
    {
        children["evpn-route-distinguisher"] = evpn_route_distinguisher;
    }

    return children;
}

void Evpn::EvpnTables::EvpnBgpAutoDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnBgpAutoDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnBgpAutoDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-route-distinguisher" || name == "enable")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher::EvpnRouteDistinguisher()
    :
    type{YType::enumeration, "type"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    address{YType::str, "address"},
    addr_index{YType::uint32, "addr-index"}
{

    yang_name = "evpn-route-distinguisher"; yang_parent_name = "evpn-bgp-auto-discovery"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher::~EvpnRouteDistinguisher()
{
}

bool Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| as.is_set
	|| as_index.is_set
	|| address.is_set
	|| addr_index.is_set;
}

bool Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(addr_index.yfilter);
}

std::string Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/evpn-bgp-auto-discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-distinguisher";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (addr_index.is_set || is_set(addr_index.yfilter)) leaf_name_data.push_back(addr_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr-index")
    {
        addr_index = value;
        addr_index.value_namespace = name_space;
        addr_index.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "addr-index")
    {
        addr_index.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "as" || name == "as-index" || name == "address" || name == "addr-index")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnGroups::EvpnGroups()
    :
    evpn_group(this, {"group_id"})
{

    yang_name = "evpn-groups"; yang_parent_name = "evpn-tables"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::EvpnTables::EvpnGroups::~EvpnGroups()
{
}

bool Evpn::EvpnTables::EvpnGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<evpn_group.len(); index++)
    {
        if(evpn_group[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::EvpnTables::EvpnGroups::has_operation() const
{
    for (std::size_t index=0; index<evpn_group.len(); index++)
    {
        if(evpn_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::EvpnTables::EvpnGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-group")
    {
        auto c = std::make_shared<Evpn::EvpnTables::EvpnGroups::EvpnGroup>();
        c->parent = this;
        evpn_group.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : evpn_group.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Evpn::EvpnTables::EvpnGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::EvpnTables::EvpnGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::EvpnTables::EvpnGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-group")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroup()
    :
    group_id{YType::uint32, "group-id"}
        ,
    evpn_group_core_interfaces(std::make_shared<Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces>())
{
    evpn_group_core_interfaces->parent = this;

    yang_name = "evpn-group"; yang_parent_name = "evpn-groups"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::EvpnTables::EvpnGroups::EvpnGroup::~EvpnGroup()
{
}

bool Evpn::EvpnTables::EvpnGroups::EvpnGroup::has_data() const
{
    if (is_presence_container) return true;
    return group_id.is_set
	|| (evpn_group_core_interfaces !=  nullptr && evpn_group_core_interfaces->has_data());
}

bool Evpn::EvpnTables::EvpnGroups::EvpnGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| (evpn_group_core_interfaces !=  nullptr && evpn_group_core_interfaces->has_operation());
}

std::string Evpn::EvpnTables::EvpnGroups::EvpnGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/evpn-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnGroups::EvpnGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-group";
    ADD_KEY_TOKEN(group_id, "group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnGroups::EvpnGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnGroups::EvpnGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-group-core-interfaces")
    {
        if(evpn_group_core_interfaces == nullptr)
        {
            evpn_group_core_interfaces = std::make_shared<Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces>();
        }
        return evpn_group_core_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnGroups::EvpnGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(evpn_group_core_interfaces != nullptr)
    {
        children["evpn-group-core-interfaces"] = evpn_group_core_interfaces;
    }

    return children;
}

void Evpn::EvpnTables::EvpnGroups::EvpnGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnGroups::EvpnGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnGroups::EvpnGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-group-core-interfaces" || name == "group-id")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces::EvpnGroupCoreInterfaces()
    :
    evpn_group_core_interface(this, {"interface_name"})
{

    yang_name = "evpn-group-core-interfaces"; yang_parent_name = "evpn-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces::~EvpnGroupCoreInterfaces()
{
}

bool Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<evpn_group_core_interface.len(); index++)
    {
        if(evpn_group_core_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces::has_operation() const
{
    for (std::size_t index=0; index<evpn_group_core_interface.len(); index++)
    {
        if(evpn_group_core_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-group-core-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-group-core-interface")
    {
        auto c = std::make_shared<Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces::EvpnGroupCoreInterface>();
        c->parent = this;
        evpn_group_core_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : evpn_group_core_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-group-core-interface")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces::EvpnGroupCoreInterface::EvpnGroupCoreInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "evpn-group-core-interface"; yang_parent_name = "evpn-group-core-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces::EvpnGroupCoreInterface::~EvpnGroupCoreInterface()
{
}

bool Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces::EvpnGroupCoreInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces::EvpnGroupCoreInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces::EvpnGroupCoreInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-group-core-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces::EvpnGroupCoreInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces::EvpnGroupCoreInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces::EvpnGroupCoreInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces::EvpnGroupCoreInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces::EvpnGroupCoreInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnGroups::EvpnGroup::EvpnGroupCoreInterfaces::EvpnGroupCoreInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstances()
    :
    evpn_instance(this, {"eviid", "encapsulation", "side"})
{

    yang_name = "evpn-instances"; yang_parent_name = "evpn-tables"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::EvpnTables::EvpnInstances::~EvpnInstances()
{
}

bool Evpn::EvpnTables::EvpnInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<evpn_instance.len(); index++)
    {
        if(evpn_instance[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::EvpnTables::EvpnInstances::has_operation() const
{
    for (std::size_t index=0; index<evpn_instance.len(); index++)
    {
        if(evpn_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::EvpnTables::EvpnInstances::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-instance")
    {
        auto c = std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance>();
        c->parent = this;
        evpn_instance.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : evpn_instance.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Evpn::EvpnTables::EvpnInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::EvpnTables::EvpnInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::EvpnTables::EvpnInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-instance")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstance()
    :
    eviid{YType::uint32, "eviid"},
    encapsulation{YType::enumeration, "encapsulation"},
    side{YType::enumeration, "side"},
    evi_reorig_disable{YType::empty, "evi-reorig-disable"},
    evi_advertise_mac_deprecated{YType::empty, "evi-advertise-mac-deprecated"},
    evpn_evi_description{YType::str, "evpn-evi-description"},
    evi_ecmp_disable{YType::empty, "evi-ecmp-disable"},
    evi_unknown_unicast_flooding_disable{YType::empty, "evi-unknown-unicast-flooding-disable"},
    evpn_evi_cw_disable{YType::empty, "evpn-evi-cw-disable"}
        ,
    evpn_instance_bgp_auto_discovery(std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery>())
    , evpn_instance_advertise_mac(std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac>())
    , evpn_instance_load_balancing(std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing>())
{
    evpn_instance_bgp_auto_discovery->parent = this;
    evpn_instance_advertise_mac->parent = this;
    evpn_instance_load_balancing->parent = this;

    yang_name = "evpn-instance"; yang_parent_name = "evpn-instances"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::~EvpnInstance()
{
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::has_data() const
{
    if (is_presence_container) return true;
    return eviid.is_set
	|| encapsulation.is_set
	|| side.is_set
	|| evi_reorig_disable.is_set
	|| evi_advertise_mac_deprecated.is_set
	|| evpn_evi_description.is_set
	|| evi_ecmp_disable.is_set
	|| evi_unknown_unicast_flooding_disable.is_set
	|| evpn_evi_cw_disable.is_set
	|| (evpn_instance_bgp_auto_discovery !=  nullptr && evpn_instance_bgp_auto_discovery->has_data())
	|| (evpn_instance_advertise_mac !=  nullptr && evpn_instance_advertise_mac->has_data())
	|| (evpn_instance_load_balancing !=  nullptr && evpn_instance_load_balancing->has_data());
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eviid.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(side.yfilter)
	|| ydk::is_set(evi_reorig_disable.yfilter)
	|| ydk::is_set(evi_advertise_mac_deprecated.yfilter)
	|| ydk::is_set(evpn_evi_description.yfilter)
	|| ydk::is_set(evi_ecmp_disable.yfilter)
	|| ydk::is_set(evi_unknown_unicast_flooding_disable.yfilter)
	|| ydk::is_set(evpn_evi_cw_disable.yfilter)
	|| (evpn_instance_bgp_auto_discovery !=  nullptr && evpn_instance_bgp_auto_discovery->has_operation())
	|| (evpn_instance_advertise_mac !=  nullptr && evpn_instance_advertise_mac->has_operation())
	|| (evpn_instance_load_balancing !=  nullptr && evpn_instance_load_balancing->has_operation());
}

std::string Evpn::EvpnTables::EvpnInstances::EvpnInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/evpn-instances/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnInstances::EvpnInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-instance";
    ADD_KEY_TOKEN(eviid, "eviid");
    ADD_KEY_TOKEN(encapsulation, "encapsulation");
    ADD_KEY_TOKEN(side, "side");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInstances::EvpnInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eviid.is_set || is_set(eviid.yfilter)) leaf_name_data.push_back(eviid.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (side.is_set || is_set(side.yfilter)) leaf_name_data.push_back(side.get_name_leafdata());
    if (evi_reorig_disable.is_set || is_set(evi_reorig_disable.yfilter)) leaf_name_data.push_back(evi_reorig_disable.get_name_leafdata());
    if (evi_advertise_mac_deprecated.is_set || is_set(evi_advertise_mac_deprecated.yfilter)) leaf_name_data.push_back(evi_advertise_mac_deprecated.get_name_leafdata());
    if (evpn_evi_description.is_set || is_set(evpn_evi_description.yfilter)) leaf_name_data.push_back(evpn_evi_description.get_name_leafdata());
    if (evi_ecmp_disable.is_set || is_set(evi_ecmp_disable.yfilter)) leaf_name_data.push_back(evi_ecmp_disable.get_name_leafdata());
    if (evi_unknown_unicast_flooding_disable.is_set || is_set(evi_unknown_unicast_flooding_disable.yfilter)) leaf_name_data.push_back(evi_unknown_unicast_flooding_disable.get_name_leafdata());
    if (evpn_evi_cw_disable.is_set || is_set(evpn_evi_cw_disable.yfilter)) leaf_name_data.push_back(evpn_evi_cw_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInstances::EvpnInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-instance-bgp-auto-discovery")
    {
        if(evpn_instance_bgp_auto_discovery == nullptr)
        {
            evpn_instance_bgp_auto_discovery = std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery>();
        }
        return evpn_instance_bgp_auto_discovery;
    }

    if(child_yang_name == "evpn-instance-advertise-mac")
    {
        if(evpn_instance_advertise_mac == nullptr)
        {
            evpn_instance_advertise_mac = std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac>();
        }
        return evpn_instance_advertise_mac;
    }

    if(child_yang_name == "evpn-instance-load-balancing")
    {
        if(evpn_instance_load_balancing == nullptr)
        {
            evpn_instance_load_balancing = std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing>();
        }
        return evpn_instance_load_balancing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInstances::EvpnInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(evpn_instance_bgp_auto_discovery != nullptr)
    {
        children["evpn-instance-bgp-auto-discovery"] = evpn_instance_bgp_auto_discovery;
    }

    if(evpn_instance_advertise_mac != nullptr)
    {
        children["evpn-instance-advertise-mac"] = evpn_instance_advertise_mac;
    }

    if(evpn_instance_load_balancing != nullptr)
    {
        children["evpn-instance-load-balancing"] = evpn_instance_load_balancing;
    }

    return children;
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eviid")
    {
        eviid = value;
        eviid.value_namespace = name_space;
        eviid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "side")
    {
        side = value;
        side.value_namespace = name_space;
        side.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-reorig-disable")
    {
        evi_reorig_disable = value;
        evi_reorig_disable.value_namespace = name_space;
        evi_reorig_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-advertise-mac-deprecated")
    {
        evi_advertise_mac_deprecated = value;
        evi_advertise_mac_deprecated.value_namespace = name_space;
        evi_advertise_mac_deprecated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-evi-description")
    {
        evpn_evi_description = value;
        evpn_evi_description.value_namespace = name_space;
        evpn_evi_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-ecmp-disable")
    {
        evi_ecmp_disable = value;
        evi_ecmp_disable.value_namespace = name_space;
        evi_ecmp_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-unknown-unicast-flooding-disable")
    {
        evi_unknown_unicast_flooding_disable = value;
        evi_unknown_unicast_flooding_disable.value_namespace = name_space;
        evi_unknown_unicast_flooding_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-evi-cw-disable")
    {
        evpn_evi_cw_disable = value;
        evpn_evi_cw_disable.value_namespace = name_space;
        evpn_evi_cw_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eviid")
    {
        eviid.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "side")
    {
        side.yfilter = yfilter;
    }
    if(value_path == "evi-reorig-disable")
    {
        evi_reorig_disable.yfilter = yfilter;
    }
    if(value_path == "evi-advertise-mac-deprecated")
    {
        evi_advertise_mac_deprecated.yfilter = yfilter;
    }
    if(value_path == "evpn-evi-description")
    {
        evpn_evi_description.yfilter = yfilter;
    }
    if(value_path == "evi-ecmp-disable")
    {
        evi_ecmp_disable.yfilter = yfilter;
    }
    if(value_path == "evi-unknown-unicast-flooding-disable")
    {
        evi_unknown_unicast_flooding_disable.yfilter = yfilter;
    }
    if(value_path == "evpn-evi-cw-disable")
    {
        evpn_evi_cw_disable.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-instance-bgp-auto-discovery" || name == "evpn-instance-advertise-mac" || name == "evpn-instance-load-balancing" || name == "eviid" || name == "encapsulation" || name == "side" || name == "evi-reorig-disable" || name == "evi-advertise-mac-deprecated" || name == "evpn-evi-description" || name == "evi-ecmp-disable" || name == "evi-unknown-unicast-flooding-disable" || name == "evpn-evi-cw-disable")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnInstanceBgpAutoDiscovery()
    :
    enable{YType::empty, "enable"},
    table_policy{YType::str, "table-policy"}
        ,
    evpn_route_distinguisher(std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher>())
    , evpn_route_targets(std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets>())
{
    evpn_route_distinguisher->parent = this;
    evpn_route_targets->parent = this;

    yang_name = "evpn-instance-bgp-auto-discovery"; yang_parent_name = "evpn-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::~EvpnInstanceBgpAutoDiscovery()
{
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| table_policy.is_set
	|| (evpn_route_distinguisher !=  nullptr && evpn_route_distinguisher->has_data())
	|| (evpn_route_targets !=  nullptr && evpn_route_targets->has_data());
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(table_policy.yfilter)
	|| (evpn_route_distinguisher !=  nullptr && evpn_route_distinguisher->has_operation())
	|| (evpn_route_targets !=  nullptr && evpn_route_targets->has_operation());
}

std::string Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-instance-bgp-auto-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (table_policy.is_set || is_set(table_policy.yfilter)) leaf_name_data.push_back(table_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-route-distinguisher")
    {
        if(evpn_route_distinguisher == nullptr)
        {
            evpn_route_distinguisher = std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher>();
        }
        return evpn_route_distinguisher;
    }

    if(child_yang_name == "evpn-route-targets")
    {
        if(evpn_route_targets == nullptr)
        {
            evpn_route_targets = std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets>();
        }
        return evpn_route_targets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(evpn_route_distinguisher != nullptr)
    {
        children["evpn-route-distinguisher"] = evpn_route_distinguisher;
    }

    if(evpn_route_targets != nullptr)
    {
        children["evpn-route-targets"] = evpn_route_targets;
    }

    return children;
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-policy")
    {
        table_policy = value;
        table_policy.value_namespace = name_space;
        table_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "table-policy")
    {
        table_policy.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-route-distinguisher" || name == "evpn-route-targets" || name == "enable" || name == "table-policy")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher::EvpnRouteDistinguisher()
    :
    type{YType::enumeration, "type"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    address{YType::str, "address"},
    addr_index{YType::uint32, "addr-index"}
{

    yang_name = "evpn-route-distinguisher"; yang_parent_name = "evpn-instance-bgp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher::~EvpnRouteDistinguisher()
{
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| as.is_set
	|| as_index.is_set
	|| address.is_set
	|| addr_index.is_set;
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(addr_index.yfilter);
}

std::string Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-distinguisher";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (addr_index.is_set || is_set(addr_index.yfilter)) leaf_name_data.push_back(addr_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr-index")
    {
        addr_index = value;
        addr_index.value_namespace = name_space;
        addr_index.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "addr-index")
    {
        addr_index.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "as" || name == "as-index" || name == "address" || name == "addr-index")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargets()
    :
    evpn_route_target_as(this, {"format", "role", "as", "as_index", "stitching"})
    , evpn_route_target_none(this, {"format", "role", "stitching"})
    , evpn_route_target_ipv4_address(this, {"format", "role", "address", "addr_index", "stitching"})
{

    yang_name = "evpn-route-targets"; yang_parent_name = "evpn-instance-bgp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::~EvpnRouteTargets()
{
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<evpn_route_target_as.len(); index++)
    {
        if(evpn_route_target_as[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<evpn_route_target_none.len(); index++)
    {
        if(evpn_route_target_none[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<evpn_route_target_ipv4_address.len(); index++)
    {
        if(evpn_route_target_ipv4_address[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::has_operation() const
{
    for (std::size_t index=0; index<evpn_route_target_as.len(); index++)
    {
        if(evpn_route_target_as[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<evpn_route_target_none.len(); index++)
    {
        if(evpn_route_target_none[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<evpn_route_target_ipv4_address.len(); index++)
    {
        if(evpn_route_target_ipv4_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-targets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-route-target-as")
    {
        auto c = std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs>();
        c->parent = this;
        evpn_route_target_as.append(c);
        return c;
    }

    if(child_yang_name == "evpn-route-target-none")
    {
        auto c = std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone>();
        c->parent = this;
        evpn_route_target_none.append(c);
        return c;
    }

    if(child_yang_name == "evpn-route-target-ipv4-address")
    {
        auto c = std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address>();
        c->parent = this;
        evpn_route_target_ipv4_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : evpn_route_target_as.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : evpn_route_target_none.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : evpn_route_target_ipv4_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-route-target-as" || name == "evpn-route-target-none" || name == "evpn-route-target-ipv4-address")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::EvpnRouteTargetAs()
    :
    format{YType::enumeration, "format"},
    role{YType::enumeration, "role"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    stitching{YType::enumeration, "stitching"}
{

    yang_name = "evpn-route-target-as"; yang_parent_name = "evpn-route-targets"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::~EvpnRouteTargetAs()
{
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::has_data() const
{
    if (is_presence_container) return true;
    return format.is_set
	|| role.is_set
	|| as.is_set
	|| as_index.is_set
	|| stitching.is_set;
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(stitching.yfilter);
}

std::string Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-target-as";
    ADD_KEY_TOKEN(format, "format");
    ADD_KEY_TOKEN(role, "role");
    ADD_KEY_TOKEN(as, "as");
    ADD_KEY_TOKEN(as_index, "as-index");
    ADD_KEY_TOKEN(stitching, "stitching");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (stitching.is_set || is_set(stitching.yfilter)) leaf_name_data.push_back(stitching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stitching")
    {
        stitching = value;
        stitching.value_namespace = name_space;
        stitching.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "stitching")
    {
        stitching.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format" || name == "role" || name == "as" || name == "as-index" || name == "stitching")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::EvpnRouteTargetNone()
    :
    format{YType::enumeration, "format"},
    role{YType::enumeration, "role"},
    stitching{YType::enumeration, "stitching"}
{

    yang_name = "evpn-route-target-none"; yang_parent_name = "evpn-route-targets"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::~EvpnRouteTargetNone()
{
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::has_data() const
{
    if (is_presence_container) return true;
    return format.is_set
	|| role.is_set
	|| stitching.is_set;
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(stitching.yfilter);
}

std::string Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-target-none";
    ADD_KEY_TOKEN(format, "format");
    ADD_KEY_TOKEN(role, "role");
    ADD_KEY_TOKEN(stitching, "stitching");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (stitching.is_set || is_set(stitching.yfilter)) leaf_name_data.push_back(stitching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stitching")
    {
        stitching = value;
        stitching.value_namespace = name_space;
        stitching.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "stitching")
    {
        stitching.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format" || name == "role" || name == "stitching")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::EvpnRouteTargetIpv4Address()
    :
    format{YType::enumeration, "format"},
    role{YType::enumeration, "role"},
    address{YType::str, "address"},
    addr_index{YType::uint32, "addr-index"},
    stitching{YType::enumeration, "stitching"}
{

    yang_name = "evpn-route-target-ipv4-address"; yang_parent_name = "evpn-route-targets"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::~EvpnRouteTargetIpv4Address()
{
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::has_data() const
{
    if (is_presence_container) return true;
    return format.is_set
	|| role.is_set
	|| address.is_set
	|| addr_index.is_set
	|| stitching.is_set;
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(addr_index.yfilter)
	|| ydk::is_set(stitching.yfilter);
}

std::string Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-target-ipv4-address";
    ADD_KEY_TOKEN(format, "format");
    ADD_KEY_TOKEN(role, "role");
    ADD_KEY_TOKEN(address, "address");
    ADD_KEY_TOKEN(addr_index, "addr-index");
    ADD_KEY_TOKEN(stitching, "stitching");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (addr_index.is_set || is_set(addr_index.yfilter)) leaf_name_data.push_back(addr_index.get_name_leafdata());
    if (stitching.is_set || is_set(stitching.yfilter)) leaf_name_data.push_back(stitching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr-index")
    {
        addr_index = value;
        addr_index.value_namespace = name_space;
        addr_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stitching")
    {
        stitching = value;
        stitching.value_namespace = name_space;
        stitching.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "addr-index")
    {
        addr_index.yfilter = yfilter;
    }
    if(value_path == "stitching")
    {
        stitching.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format" || name == "role" || name == "address" || name == "addr-index" || name == "stitching")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac::EvpnInstanceAdvertiseMac()
    :
    enable{YType::empty, "enable"},
    evi_advertise_mac_bvi{YType::empty, "evi-advertise-mac-bvi"}
{

    yang_name = "evpn-instance-advertise-mac"; yang_parent_name = "evpn-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac::~EvpnInstanceAdvertiseMac()
{
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| evi_advertise_mac_bvi.is_set;
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(evi_advertise_mac_bvi.yfilter);
}

std::string Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-instance-advertise-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (evi_advertise_mac_bvi.is_set || is_set(evi_advertise_mac_bvi.yfilter)) leaf_name_data.push_back(evi_advertise_mac_bvi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-advertise-mac-bvi")
    {
        evi_advertise_mac_bvi = value;
        evi_advertise_mac_bvi.value_namespace = name_space;
        evi_advertise_mac_bvi.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "evi-advertise-mac-bvi")
    {
        evi_advertise_mac_bvi.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "evi-advertise-mac-bvi")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing::EvpnInstanceLoadBalancing()
    :
    enable{YType::empty, "enable"},
    evi_static_flow_label{YType::empty, "evi-static-flow-label"}
{

    yang_name = "evpn-instance-load-balancing"; yang_parent_name = "evpn-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing::~EvpnInstanceLoadBalancing()
{
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| evi_static_flow_label.is_set;
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(evi_static_flow_label.yfilter);
}

std::string Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-instance-load-balancing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (evi_static_flow_label.is_set || is_set(evi_static_flow_label.yfilter)) leaf_name_data.push_back(evi_static_flow_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-static-flow-label")
    {
        evi_static_flow_label = value;
        evi_static_flow_label.value_namespace = name_space;
        evi_static_flow_label.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "evi-static-flow-label")
    {
        evi_static_flow_label.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "evi-static-flow-label")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnLogging::EvpnLogging()
    :
    evpn_df_election{YType::empty, "evpn-df-election"},
    enable{YType::empty, "enable"}
{

    yang_name = "evpn-logging"; yang_parent_name = "evpn-tables"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::EvpnTables::EvpnLogging::~EvpnLogging()
{
}

bool Evpn::EvpnTables::EvpnLogging::has_data() const
{
    if (is_presence_container) return true;
    return evpn_df_election.is_set
	|| enable.is_set;
}

bool Evpn::EvpnTables::EvpnLogging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evpn_df_election.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Evpn::EvpnTables::EvpnLogging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnLogging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evpn_df_election.is_set || is_set(evpn_df_election.yfilter)) leaf_name_data.push_back(evpn_df_election.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnLogging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::EvpnLogging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evpn-df-election")
    {
        evpn_df_election = value;
        evpn_df_election.value_namespace = name_space;
        evpn_df_election.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnLogging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evpn-df-election")
    {
        evpn_df_election.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnLogging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-df-election" || name == "enable")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterfaces()
    :
    evpn_interface(this, {"interface_name"})
{

    yang_name = "evpn-interfaces"; yang_parent_name = "evpn-tables"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::EvpnTables::EvpnInterfaces::~EvpnInterfaces()
{
}

bool Evpn::EvpnTables::EvpnInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<evpn_interface.len(); index++)
    {
        if(evpn_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::EvpnTables::EvpnInterfaces::has_operation() const
{
    for (std::size_t index=0; index<evpn_interface.len(); index++)
    {
        if(evpn_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::EvpnTables::EvpnInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-interface")
    {
        auto c = std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface>();
        c->parent = this;
        evpn_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : evpn_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Evpn::EvpnTables::EvpnInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::EvpnTables::EvpnInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::EvpnTables::EvpnInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-interface")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterface()
    :
    interface_name{YType::str, "interface-name"},
    evpn_core_isolation_group{YType::uint32, "evpn-core-isolation-group"},
    mac_flush{YType::enumeration, "mac-flush"}
        ,
    evpnac_timers(std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers>())
    , ethernet_segment(std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment>())
{
    evpnac_timers->parent = this;
    ethernet_segment->parent = this;

    yang_name = "evpn-interface"; yang_parent_name = "evpn-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::~EvpnInterface()
{
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| evpn_core_isolation_group.is_set
	|| mac_flush.is_set
	|| (evpnac_timers !=  nullptr && evpnac_timers->has_data())
	|| (ethernet_segment !=  nullptr && ethernet_segment->has_data());
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(evpn_core_isolation_group.yfilter)
	|| ydk::is_set(mac_flush.yfilter)
	|| (evpnac_timers !=  nullptr && evpnac_timers->has_operation())
	|| (ethernet_segment !=  nullptr && ethernet_segment->has_operation());
}

std::string Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/evpn-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (evpn_core_isolation_group.is_set || is_set(evpn_core_isolation_group.yfilter)) leaf_name_data.push_back(evpn_core_isolation_group.get_name_leafdata());
    if (mac_flush.is_set || is_set(mac_flush.yfilter)) leaf_name_data.push_back(mac_flush.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpnac-timers")
    {
        if(evpnac_timers == nullptr)
        {
            evpnac_timers = std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers>();
        }
        return evpnac_timers;
    }

    if(child_yang_name == "ethernet-segment")
    {
        if(ethernet_segment == nullptr)
        {
            ethernet_segment = std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment>();
        }
        return ethernet_segment;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(evpnac_timers != nullptr)
    {
        children["evpnac-timers"] = evpnac_timers;
    }

    if(ethernet_segment != nullptr)
    {
        children["ethernet-segment"] = ethernet_segment;
    }

    return children;
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-core-isolation-group")
    {
        evpn_core_isolation_group = value;
        evpn_core_isolation_group.value_namespace = name_space;
        evpn_core_isolation_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flush")
    {
        mac_flush = value;
        mac_flush.value_namespace = name_space;
        mac_flush.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "evpn-core-isolation-group")
    {
        evpn_core_isolation_group.yfilter = yfilter;
    }
    if(value_path == "mac-flush")
    {
        mac_flush.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpnac-timers" || name == "ethernet-segment" || name == "interface-name" || name == "evpn-core-isolation-group" || name == "mac-flush")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::EvpnacTimers()
    :
    evpnac_peering{YType::uint32, "evpnac-peering"},
    evpnac_carving{YType::uint32, "evpnac-carving"},
    enable{YType::empty, "enable"},
    evpnac_recovery{YType::uint32, "evpnac-recovery"}
{

    yang_name = "evpnac-timers"; yang_parent_name = "evpn-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::~EvpnacTimers()
{
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::has_data() const
{
    if (is_presence_container) return true;
    return evpnac_peering.is_set
	|| evpnac_carving.is_set
	|| enable.is_set
	|| evpnac_recovery.is_set;
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evpnac_peering.yfilter)
	|| ydk::is_set(evpnac_carving.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(evpnac_recovery.yfilter);
}

std::string Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpnac-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evpnac_peering.is_set || is_set(evpnac_peering.yfilter)) leaf_name_data.push_back(evpnac_peering.get_name_leafdata());
    if (evpnac_carving.is_set || is_set(evpnac_carving.yfilter)) leaf_name_data.push_back(evpnac_carving.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (evpnac_recovery.is_set || is_set(evpnac_recovery.yfilter)) leaf_name_data.push_back(evpnac_recovery.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evpnac-peering")
    {
        evpnac_peering = value;
        evpnac_peering.value_namespace = name_space;
        evpnac_peering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpnac-carving")
    {
        evpnac_carving = value;
        evpnac_carving.value_namespace = name_space;
        evpnac_carving.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpnac-recovery")
    {
        evpnac_recovery = value;
        evpnac_recovery.value_namespace = name_space;
        evpnac_recovery.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evpnac-peering")
    {
        evpnac_peering.yfilter = yfilter;
    }
    if(value_path == "evpnac-carving")
    {
        evpnac_carving.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "evpnac-recovery")
    {
        evpnac_recovery.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpnac-peering" || name == "evpnac-carving" || name == "enable" || name == "evpnac-recovery")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::EthernetSegment()
    :
    force_single_homed{YType::empty, "force-single-homed"},
    load_balancing_mode{YType::enumeration, "load-balancing-mode"},
    enable{YType::empty, "enable"},
    backbone_source_mac{YType::str, "backbone-source-mac"},
    es_import_route_target{YType::str, "es-import-route-target"}
        ,
    identifier(nullptr) // presence node
    , manual_service_carving(std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving>())
{
    manual_service_carving->parent = this;

    yang_name = "ethernet-segment"; yang_parent_name = "evpn-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::~EthernetSegment()
{
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::has_data() const
{
    if (is_presence_container) return true;
    return force_single_homed.is_set
	|| load_balancing_mode.is_set
	|| enable.is_set
	|| backbone_source_mac.is_set
	|| es_import_route_target.is_set
	|| (identifier !=  nullptr && identifier->has_data())
	|| (manual_service_carving !=  nullptr && manual_service_carving->has_data());
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(force_single_homed.yfilter)
	|| ydk::is_set(load_balancing_mode.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(backbone_source_mac.yfilter)
	|| ydk::is_set(es_import_route_target.yfilter)
	|| (identifier !=  nullptr && identifier->has_operation())
	|| (manual_service_carving !=  nullptr && manual_service_carving->has_operation());
}

std::string Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (force_single_homed.is_set || is_set(force_single_homed.yfilter)) leaf_name_data.push_back(force_single_homed.get_name_leafdata());
    if (load_balancing_mode.is_set || is_set(load_balancing_mode.yfilter)) leaf_name_data.push_back(load_balancing_mode.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (backbone_source_mac.is_set || is_set(backbone_source_mac.yfilter)) leaf_name_data.push_back(backbone_source_mac.get_name_leafdata());
    if (es_import_route_target.is_set || is_set(es_import_route_target.yfilter)) leaf_name_data.push_back(es_import_route_target.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identifier")
    {
        if(identifier == nullptr)
        {
            identifier = std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier>();
        }
        return identifier;
    }

    if(child_yang_name == "manual-service-carving")
    {
        if(manual_service_carving == nullptr)
        {
            manual_service_carving = std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving>();
        }
        return manual_service_carving;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(identifier != nullptr)
    {
        children["identifier"] = identifier;
    }

    if(manual_service_carving != nullptr)
    {
        children["manual-service-carving"] = manual_service_carving;
    }

    return children;
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "force-single-homed")
    {
        force_single_homed = value;
        force_single_homed.value_namespace = name_space;
        force_single_homed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balancing-mode")
    {
        load_balancing_mode = value;
        load_balancing_mode.value_namespace = name_space;
        load_balancing_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backbone-source-mac")
    {
        backbone_source_mac = value;
        backbone_source_mac.value_namespace = name_space;
        backbone_source_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "es-import-route-target")
    {
        es_import_route_target = value;
        es_import_route_target.value_namespace = name_space;
        es_import_route_target.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "force-single-homed")
    {
        force_single_homed.yfilter = yfilter;
    }
    if(value_path == "load-balancing-mode")
    {
        load_balancing_mode.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "backbone-source-mac")
    {
        backbone_source_mac.yfilter = yfilter;
    }
    if(value_path == "es-import-route-target")
    {
        es_import_route_target.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "manual-service-carving" || name == "force-single-homed" || name == "load-balancing-mode" || name == "enable" || name == "backbone-source-mac" || name == "es-import-route-target")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier::Identifier()
    :
    bytes01{YType::str, "bytes01"},
    bytes23{YType::str, "bytes23"},
    bytes45{YType::str, "bytes45"},
    bytes67{YType::str, "bytes67"},
    bytes89{YType::str, "bytes89"},
    type{YType::enumeration, "type"}
{

    yang_name = "identifier"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier::~Identifier()
{
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier::has_data() const
{
    if (is_presence_container) return true;
    return bytes01.is_set
	|| bytes23.is_set
	|| bytes45.is_set
	|| bytes67.is_set
	|| bytes89.is_set
	|| type.is_set;
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes01.yfilter)
	|| ydk::is_set(bytes23.yfilter)
	|| ydk::is_set(bytes45.yfilter)
	|| ydk::is_set(bytes67.yfilter)
	|| ydk::is_set(bytes89.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes01.is_set || is_set(bytes01.yfilter)) leaf_name_data.push_back(bytes01.get_name_leafdata());
    if (bytes23.is_set || is_set(bytes23.yfilter)) leaf_name_data.push_back(bytes23.get_name_leafdata());
    if (bytes45.is_set || is_set(bytes45.yfilter)) leaf_name_data.push_back(bytes45.get_name_leafdata());
    if (bytes67.is_set || is_set(bytes67.yfilter)) leaf_name_data.push_back(bytes67.get_name_leafdata());
    if (bytes89.is_set || is_set(bytes89.yfilter)) leaf_name_data.push_back(bytes89.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes01")
    {
        bytes01 = value;
        bytes01.value_namespace = name_space;
        bytes01.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes23")
    {
        bytes23 = value;
        bytes23.value_namespace = name_space;
        bytes23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes45")
    {
        bytes45 = value;
        bytes45.value_namespace = name_space;
        bytes45.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes67")
    {
        bytes67 = value;
        bytes67.value_namespace = name_space;
        bytes67.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes89")
    {
        bytes89 = value;
        bytes89.value_namespace = name_space;
        bytes89.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes01")
    {
        bytes01.yfilter = yfilter;
    }
    if(value_path == "bytes23")
    {
        bytes23.yfilter = yfilter;
    }
    if(value_path == "bytes45")
    {
        bytes45.yfilter = yfilter;
    }
    if(value_path == "bytes67")
    {
        bytes67.yfilter = yfilter;
    }
    if(value_path == "bytes89")
    {
        bytes89.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes01" || name == "bytes23" || name == "bytes45" || name == "bytes67" || name == "bytes89" || name == "type")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ManualServiceCarving()
    :
    enable{YType::empty, "enable"}
        ,
    service_list(std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList>())
{
    service_list->parent = this;

    yang_name = "manual-service-carving"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::~ManualServiceCarving()
{
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (service_list !=  nullptr && service_list->has_data());
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (service_list !=  nullptr && service_list->has_operation());
}

std::string Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual-service-carving";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-list")
    {
        if(service_list == nullptr)
        {
            service_list = std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList>();
        }
        return service_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(service_list != nullptr)
    {
        children["service-list"] = service_list;
    }

    return children;
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-list" || name == "enable")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList::ServiceList()
    :
    primary{YType::str, "primary"},
    secondary{YType::str, "secondary"}
{

    yang_name = "service-list"; yang_parent_name = "manual-service-carving"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList::~ServiceList()
{
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList::has_data() const
{
    if (is_presence_container) return true;
    return primary.is_set
	|| secondary.is_set;
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPws()
    :
    evpn_virtual_access_pw(this, {"neighbor", "pseudowire_id"})
{

    yang_name = "evpn-virtual-access-pws"; yang_parent_name = "evpn-tables"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::EvpnTables::EvpnVirtualAccessPws::~EvpnVirtualAccessPws()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<evpn_virtual_access_pw.len(); index++)
    {
        if(evpn_virtual_access_pw[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::has_operation() const
{
    for (std::size_t index=0; index<evpn_virtual_access_pw.len(); index++)
    {
        if(evpn_virtual_access_pw[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::EvpnTables::EvpnVirtualAccessPws::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnVirtualAccessPws::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-virtual-access-pws";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessPws::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessPws::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-virtual-access-pw")
    {
        auto c = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw>();
        c->parent = this;
        evpn_virtual_access_pw.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessPws::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : evpn_virtual_access_pw.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-virtual-access-pw")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPw()
    :
    neighbor{YType::str, "neighbor"},
    pseudowire_id{YType::uint32, "pseudowire-id"}
        ,
    evpn_virtual_access_pw_timers(std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers>())
    , evpn_virtual_ethernet_segment(std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment>())
{
    evpn_virtual_access_pw_timers->parent = this;
    evpn_virtual_ethernet_segment->parent = this;

    yang_name = "evpn-virtual-access-pw"; yang_parent_name = "evpn-virtual-access-pws"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::~EvpnVirtualAccessPw()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::has_data() const
{
    if (is_presence_container) return true;
    return neighbor.is_set
	|| pseudowire_id.is_set
	|| (evpn_virtual_access_pw_timers !=  nullptr && evpn_virtual_access_pw_timers->has_data())
	|| (evpn_virtual_ethernet_segment !=  nullptr && evpn_virtual_ethernet_segment->has_data());
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| (evpn_virtual_access_pw_timers !=  nullptr && evpn_virtual_access_pw_timers->has_operation())
	|| (evpn_virtual_ethernet_segment !=  nullptr && evpn_virtual_ethernet_segment->has_operation());
}

std::string Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/evpn-virtual-access-pws/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-virtual-access-pw";
    ADD_KEY_TOKEN(neighbor, "neighbor");
    ADD_KEY_TOKEN(pseudowire_id, "pseudowire-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-virtual-access-pw-timers")
    {
        if(evpn_virtual_access_pw_timers == nullptr)
        {
            evpn_virtual_access_pw_timers = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers>();
        }
        return evpn_virtual_access_pw_timers;
    }

    if(child_yang_name == "evpn-virtual-ethernet-segment")
    {
        if(evpn_virtual_ethernet_segment == nullptr)
        {
            evpn_virtual_ethernet_segment = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment>();
        }
        return evpn_virtual_ethernet_segment;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(evpn_virtual_access_pw_timers != nullptr)
    {
        children["evpn-virtual-access-pw-timers"] = evpn_virtual_access_pw_timers;
    }

    if(evpn_virtual_ethernet_segment != nullptr)
    {
        children["evpn-virtual-ethernet-segment"] = evpn_virtual_ethernet_segment;
    }

    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
        pseudowire_id.value_namespace = name_space;
        pseudowire_id.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-virtual-access-pw-timers" || name == "evpn-virtual-ethernet-segment" || name == "neighbor" || name == "pseudowire-id")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::EvpnVirtualAccessPwTimers()
    :
    evpn_virtual_access_pw_recovery{YType::uint32, "evpn-virtual-access-pw-recovery"},
    evpn_virtual_access_pw_peering{YType::uint32, "evpn-virtual-access-pw-peering"},
    enable{YType::empty, "enable"},
    evpn_virtual_access_pw_carving{YType::uint32, "evpn-virtual-access-pw-carving"}
{

    yang_name = "evpn-virtual-access-pw-timers"; yang_parent_name = "evpn-virtual-access-pw"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::~EvpnVirtualAccessPwTimers()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::has_data() const
{
    if (is_presence_container) return true;
    return evpn_virtual_access_pw_recovery.is_set
	|| evpn_virtual_access_pw_peering.is_set
	|| enable.is_set
	|| evpn_virtual_access_pw_carving.is_set;
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evpn_virtual_access_pw_recovery.yfilter)
	|| ydk::is_set(evpn_virtual_access_pw_peering.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(evpn_virtual_access_pw_carving.yfilter);
}

std::string Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-virtual-access-pw-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evpn_virtual_access_pw_recovery.is_set || is_set(evpn_virtual_access_pw_recovery.yfilter)) leaf_name_data.push_back(evpn_virtual_access_pw_recovery.get_name_leafdata());
    if (evpn_virtual_access_pw_peering.is_set || is_set(evpn_virtual_access_pw_peering.yfilter)) leaf_name_data.push_back(evpn_virtual_access_pw_peering.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (evpn_virtual_access_pw_carving.is_set || is_set(evpn_virtual_access_pw_carving.yfilter)) leaf_name_data.push_back(evpn_virtual_access_pw_carving.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evpn-virtual-access-pw-recovery")
    {
        evpn_virtual_access_pw_recovery = value;
        evpn_virtual_access_pw_recovery.value_namespace = name_space;
        evpn_virtual_access_pw_recovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-virtual-access-pw-peering")
    {
        evpn_virtual_access_pw_peering = value;
        evpn_virtual_access_pw_peering.value_namespace = name_space;
        evpn_virtual_access_pw_peering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-virtual-access-pw-carving")
    {
        evpn_virtual_access_pw_carving = value;
        evpn_virtual_access_pw_carving.value_namespace = name_space;
        evpn_virtual_access_pw_carving.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evpn-virtual-access-pw-recovery")
    {
        evpn_virtual_access_pw_recovery.yfilter = yfilter;
    }
    if(value_path == "evpn-virtual-access-pw-peering")
    {
        evpn_virtual_access_pw_peering.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "evpn-virtual-access-pw-carving")
    {
        evpn_virtual_access_pw_carving.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-virtual-access-pw-recovery" || name == "evpn-virtual-access-pw-peering" || name == "enable" || name == "evpn-virtual-access-pw-carving")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::EvpnVirtualEthernetSegment()
    :
    enable{YType::empty, "enable"},
    es_import_route_target{YType::str, "es-import-route-target"}
        ,
    identifier(nullptr) // presence node
    , manual_service_carving(std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving>())
{
    manual_service_carving->parent = this;

    yang_name = "evpn-virtual-ethernet-segment"; yang_parent_name = "evpn-virtual-access-pw"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::~EvpnVirtualEthernetSegment()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| es_import_route_target.is_set
	|| (identifier !=  nullptr && identifier->has_data())
	|| (manual_service_carving !=  nullptr && manual_service_carving->has_data());
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(es_import_route_target.yfilter)
	|| (identifier !=  nullptr && identifier->has_operation())
	|| (manual_service_carving !=  nullptr && manual_service_carving->has_operation());
}

std::string Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-virtual-ethernet-segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (es_import_route_target.is_set || is_set(es_import_route_target.yfilter)) leaf_name_data.push_back(es_import_route_target.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identifier")
    {
        if(identifier == nullptr)
        {
            identifier = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier>();
        }
        return identifier;
    }

    if(child_yang_name == "manual-service-carving")
    {
        if(manual_service_carving == nullptr)
        {
            manual_service_carving = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving>();
        }
        return manual_service_carving;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(identifier != nullptr)
    {
        children["identifier"] = identifier;
    }

    if(manual_service_carving != nullptr)
    {
        children["manual-service-carving"] = manual_service_carving;
    }

    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "es-import-route-target")
    {
        es_import_route_target = value;
        es_import_route_target.value_namespace = name_space;
        es_import_route_target.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "es-import-route-target")
    {
        es_import_route_target.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "manual-service-carving" || name == "enable" || name == "es-import-route-target")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::Identifier()
    :
    bytes01{YType::str, "bytes01"},
    bytes23{YType::str, "bytes23"},
    bytes45{YType::str, "bytes45"},
    bytes67{YType::str, "bytes67"},
    bytes89{YType::str, "bytes89"},
    type{YType::enumeration, "type"}
{

    yang_name = "identifier"; yang_parent_name = "evpn-virtual-ethernet-segment"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::~Identifier()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::has_data() const
{
    if (is_presence_container) return true;
    return bytes01.is_set
	|| bytes23.is_set
	|| bytes45.is_set
	|| bytes67.is_set
	|| bytes89.is_set
	|| type.is_set;
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes01.yfilter)
	|| ydk::is_set(bytes23.yfilter)
	|| ydk::is_set(bytes45.yfilter)
	|| ydk::is_set(bytes67.yfilter)
	|| ydk::is_set(bytes89.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes01.is_set || is_set(bytes01.yfilter)) leaf_name_data.push_back(bytes01.get_name_leafdata());
    if (bytes23.is_set || is_set(bytes23.yfilter)) leaf_name_data.push_back(bytes23.get_name_leafdata());
    if (bytes45.is_set || is_set(bytes45.yfilter)) leaf_name_data.push_back(bytes45.get_name_leafdata());
    if (bytes67.is_set || is_set(bytes67.yfilter)) leaf_name_data.push_back(bytes67.get_name_leafdata());
    if (bytes89.is_set || is_set(bytes89.yfilter)) leaf_name_data.push_back(bytes89.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes01")
    {
        bytes01 = value;
        bytes01.value_namespace = name_space;
        bytes01.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes23")
    {
        bytes23 = value;
        bytes23.value_namespace = name_space;
        bytes23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes45")
    {
        bytes45 = value;
        bytes45.value_namespace = name_space;
        bytes45.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes67")
    {
        bytes67 = value;
        bytes67.value_namespace = name_space;
        bytes67.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes89")
    {
        bytes89 = value;
        bytes89.value_namespace = name_space;
        bytes89.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes01")
    {
        bytes01.yfilter = yfilter;
    }
    if(value_path == "bytes23")
    {
        bytes23.yfilter = yfilter;
    }
    if(value_path == "bytes45")
    {
        bytes45.yfilter = yfilter;
    }
    if(value_path == "bytes67")
    {
        bytes67.yfilter = yfilter;
    }
    if(value_path == "bytes89")
    {
        bytes89.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes01" || name == "bytes23" || name == "bytes45" || name == "bytes67" || name == "bytes89" || name == "type")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ManualServiceCarving()
    :
    enable{YType::empty, "enable"}
        ,
    service_list(std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList>())
{
    service_list->parent = this;

    yang_name = "manual-service-carving"; yang_parent_name = "evpn-virtual-ethernet-segment"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::~ManualServiceCarving()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (service_list !=  nullptr && service_list->has_data());
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (service_list !=  nullptr && service_list->has_operation());
}

std::string Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual-service-carving";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-list")
    {
        if(service_list == nullptr)
        {
            service_list = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList>();
        }
        return service_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(service_list != nullptr)
    {
        children["service-list"] = service_list;
    }

    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-list" || name == "enable")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::ServiceList()
    :
    primary{YType::str, "primary"},
    secondary{YType::str, "secondary"}
{

    yang_name = "service-list"; yang_parent_name = "manual-service-carving"; is_top_level_class = false; has_list_ancestor = true; 
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::~ServiceList()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::has_data() const
{
    if (is_presence_container) return true;
    return primary.is_set
	|| secondary.is_set;
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnEthernetSegment::EvpnEthernetSegment()
    :
    enable{YType::empty, "enable"}
        ,
    evpn_esi_types(std::make_shared<Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes>())
{
    evpn_esi_types->parent = this;

    yang_name = "evpn-ethernet-segment"; yang_parent_name = "evpn-tables"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::EvpnTables::EvpnEthernetSegment::~EvpnEthernetSegment()
{
}

bool Evpn::EvpnTables::EvpnEthernetSegment::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (evpn_esi_types !=  nullptr && evpn_esi_types->has_data());
}

bool Evpn::EvpnTables::EvpnEthernetSegment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (evpn_esi_types !=  nullptr && evpn_esi_types->has_operation());
}

std::string Evpn::EvpnTables::EvpnEthernetSegment::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnEthernetSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-ethernet-segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnEthernetSegment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnEthernetSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-esi-types")
    {
        if(evpn_esi_types == nullptr)
        {
            evpn_esi_types = std::make_shared<Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes>();
        }
        return evpn_esi_types;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnEthernetSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(evpn_esi_types != nullptr)
    {
        children["evpn-esi-types"] = evpn_esi_types;
    }

    return children;
}

void Evpn::EvpnTables::EvpnEthernetSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnEthernetSegment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnEthernetSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-esi-types" || name == "enable")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiTypes()
    :
    evpn_esi_type(this, {"esi_type"})
{

    yang_name = "evpn-esi-types"; yang_parent_name = "evpn-ethernet-segment"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::~EvpnEsiTypes()
{
}

bool Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<evpn_esi_type.len(); index++)
    {
        if(evpn_esi_type[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::has_operation() const
{
    for (std::size_t index=0; index<evpn_esi_type.len(); index++)
    {
        if(evpn_esi_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/evpn-ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-esi-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-esi-type")
    {
        auto c = std::make_shared<Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType>();
        c->parent = this;
        evpn_esi_type.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : evpn_esi_type.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-esi-type")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType::EvpnEsiType()
    :
    esi_type{YType::uint32, "esi-type"},
    disable_auto_generation{YType::empty, "disable-auto-generation"}
{

    yang_name = "evpn-esi-type"; yang_parent_name = "evpn-esi-types"; is_top_level_class = false; has_list_ancestor = false; 
}

Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType::~EvpnEsiType()
{
}

bool Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType::has_data() const
{
    if (is_presence_container) return true;
    return esi_type.is_set
	|| disable_auto_generation.is_set;
}

bool Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(esi_type.yfilter)
	|| ydk::is_set(disable_auto_generation.yfilter);
}

std::string Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/evpn-ethernet-segment/evpn-esi-types/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-esi-type";
    ADD_KEY_TOKEN(esi_type, "esi-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (esi_type.is_set || is_set(esi_type.yfilter)) leaf_name_data.push_back(esi_type.get_name_leafdata());
    if (disable_auto_generation.is_set || is_set(disable_auto_generation.yfilter)) leaf_name_data.push_back(disable_auto_generation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "esi-type")
    {
        esi_type = value;
        esi_type.value_namespace = name_space;
        esi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-auto-generation")
    {
        disable_auto_generation = value;
        disable_auto_generation.value_namespace = name_space;
        disable_auto_generation.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "esi-type")
    {
        esi_type.yfilter = yfilter;
    }
    if(value_path == "disable-auto-generation")
    {
        disable_auto_generation.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "esi-type" || name == "disable-auto-generation")
        return true;
    return false;
}


}
}

