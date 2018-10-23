
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_cfg_1.hpp"
#include "Cisco_IOS_XR_l2vpn_cfg_2.hpp"

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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flow_label_load_balance != nullptr)
    {
        _children["flow-label-load-balance"] = flow_label_load_balance;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-target")
    {
        auto ent_ = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget>();
        ent_->parent = this;
        route_target.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route_target.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "two-byte-as-or-four-byte-as")
    {
        auto ent_ = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs>();
        ent_->parent = this;
        two_byte_as_or_four_byte_as.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv4-address")
    {
        auto ent_ = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address>();
        ent_->parent = this;
        ipv4_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : two_byte_as_or_four_byte_as.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv4_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainvnis::BridgeDomainvnis()
    :
    bridge_domainvni(this, {"vpn_id"})
{

    yang_name = "bridge-domainvnis"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainvnis::~BridgeDomainvnis()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainvnis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bridge_domainvni.len(); index++)
    {
        if(bridge_domainvni[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainvnis::has_operation() const
{
    for (std::size_t index=0; index<bridge_domainvni.len(); index++)
    {
        if(bridge_domainvni[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainvnis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domainvnis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainvnis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainvnis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domainvni")
    {
        auto ent_ = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainvnis::BridgeDomainvni>();
        ent_->parent = this;
        bridge_domainvni.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainvnis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bridge_domainvni.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainvnis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainvnis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainvnis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domainvni")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainvnis::BridgeDomainvni::BridgeDomainvni()
    :
    vpn_id{YType::uint32, "vpn-id"}
{

    yang_name = "bridge-domainvni"; yang_parent_name = "bridge-domainvnis"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainvnis::BridgeDomainvni::~BridgeDomainvni()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainvnis::BridgeDomainvni::has_data() const
{
    if (is_presence_container) return true;
    return vpn_id.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainvnis::BridgeDomainvni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpn_id.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainvnis::BridgeDomainvni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domainvni";
    ADD_KEY_TOKEN(vpn_id, "vpn-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainvnis::BridgeDomainvni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainvnis::BridgeDomainvni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainvnis::BridgeDomainvni::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainvnis::BridgeDomainvni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainvnis::BridgeDomainvni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainvnis::BridgeDomainvni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpn-id")
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-attachment-circuit")
    {
        auto ent_ = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit>();
        ent_->parent = this;
        bd_attachment_circuit.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bd_attachment_circuit.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_ip_source_guard != nullptr)
    {
        _children["interface-ip-source-guard"] = interface_ip_source_guard;
    }

    if(interface_dai != nullptr)
    {
        _children["interface-dai"] = interface_dai;
    }

    if(interface_profile != nullptr)
    {
        _children["interface-profile"] = interface_profile;
    }

    if(bdac_storm_control_types != nullptr)
    {
        _children["bdac-storm-control-types"] = bdac_storm_control_types;
    }

    if(split_horizon != nullptr)
    {
        _children["split-horizon"] = split_horizon;
    }

    if(static_mac_addresses != nullptr)
    {
        _children["static-mac-addresses"] = static_mac_addresses;
    }

    if(interface_mac != nullptr)
    {
        _children["interface-mac"] = interface_mac;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_dai_address_validation != nullptr)
    {
        _children["interface-dai-address-validation"] = interface_dai_address_validation;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bdac-storm-control-type")
    {
        auto ent_ = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType>();
        ent_->parent = this;
        bdac_storm_control_type.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bdac_storm_control_type.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(storm_control_unit != nullptr)
    {
        _children["storm-control-unit"] = storm_control_unit;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(split_horizon_group_id != nullptr)
    {
        _children["split-horizon-group-id"] = split_horizon_group_id;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-mac-address")
    {
        auto ent_ = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress>();
        ent_->parent = this;
        static_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : static_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_mac_aging != nullptr)
    {
        _children["interface-mac-aging"] = interface_mac_aging;
    }

    if(interface_mac_secure != nullptr)
    {
        _children["interface-mac-secure"] = interface_mac_secure;
    }

    if(interface_mac_limit != nullptr)
    {
        _children["interface-mac-limit"] = interface_mac_limit;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-pseudowire-evpn")
    {
        auto ent_ = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn>();
        ent_->parent = this;
        bd_pseudowire_evpn.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bd_pseudowire_evpn.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dai_address_validation != nullptr)
    {
        _children["dai-address-validation"] = dai_address_validation;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routed-interface")
    {
        auto ent_ = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface>();
        ent_->parent = this;
        routed_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : routed_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(routed_interface_split_horizon_group != nullptr)
    {
        _children["routed-interface-split-horizon-group"] = routed_interface_split_horizon_group;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::PseudowireClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire-class")
    {
        auto ent_ = std::make_shared<L2vpn::Database::PseudowireClasses::PseudowireClass>();
        ent_->parent = this;
        pseudowire_class.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::PseudowireClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pseudowire_class.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::PseudowireClasses::PseudowireClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::PseudowireClasses::PseudowireClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2tpv3_encapsulation != nullptr)
    {
        _children["l2tpv3-encapsulation"] = l2tpv3_encapsulation;
    }

    if(backup_disable_delay != nullptr)
    {
        _children["backup-disable-delay"] = backup_disable_delay;
    }

    if(mpls_encapsulation != nullptr)
    {
        _children["mpls-encapsulation"] = mpls_encapsulation;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sequencing != nullptr)
    {
        _children["sequencing"] = sequencing;
    }

    if(type_of_service != nullptr)
    {
        _children["type-of-service"] = type_of_service;
    }

    if(signaling_protocol != nullptr)
    {
        _children["signaling-protocol"] = signaling_protocol;
    }

    if(path_mtu != nullptr)
    {
        _children["path-mtu"] = path_mtu;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::Sequencing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::Sequencing::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::TypeOfService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::TypeOfService::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::SignalingProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::SignalingProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::PathMtu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::PseudowireClasses::PseudowireClass::L2tpv3Encapsulation::PathMtu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sequencing != nullptr)
    {
        _children["sequencing"] = sequencing;
    }

    if(mpls_redundancy != nullptr)
    {
        _children["mpls-redundancy"] = mpls_redundancy;
    }

    if(preferred_path != nullptr)
    {
        _children["preferred-path"] = preferred_path;
    }

    if(load_balance_group != nullptr)
    {
        _children["load-balance-group"] = load_balance_group;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flow_label_load_balance != nullptr)
    {
        _children["flow-label-load-balance"] = flow_label_load_balance;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

L2vpn::Database::VlanSwitches::VlanSwitches()
    :
    vlan_switch(this, {"name"})
{

    yang_name = "vlan-switches"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Database::VlanSwitches::~VlanSwitches()
{
}

bool L2vpn::Database::VlanSwitches::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan_switch.len(); index++)
    {
        if(vlan_switch[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::VlanSwitches::has_operation() const
{
    for (std::size_t index=0; index<vlan_switch.len(); index++)
    {
        if(vlan_switch[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::VlanSwitches::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Database::VlanSwitches::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-switches";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-switch")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch>();
        ent_->parent = this;
        vlan_switch.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlan_switch.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-switch")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::VlanSwitch()
    :
    name{YType::str, "name"}
        ,
    vlan_switch_ports(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::VlanSwitchPorts>())
    , vni_ranges(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::VniRanges>())
    , vlan_ranges(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::VlanRanges>())
    , routed_interface_ranges(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::RoutedInterfaceRanges>())
    , bridge_domains(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains>())
{
    vlan_switch_ports->parent = this;
    vni_ranges->parent = this;
    vlan_ranges->parent = this;
    routed_interface_ranges->parent = this;
    bridge_domains->parent = this;

    yang_name = "vlan-switch"; yang_parent_name = "vlan-switches"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::~VlanSwitch()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (vlan_switch_ports !=  nullptr && vlan_switch_ports->has_data())
	|| (vni_ranges !=  nullptr && vni_ranges->has_data())
	|| (vlan_ranges !=  nullptr && vlan_ranges->has_data())
	|| (routed_interface_ranges !=  nullptr && routed_interface_ranges->has_data())
	|| (bridge_domains !=  nullptr && bridge_domains->has_data());
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (vlan_switch_ports !=  nullptr && vlan_switch_ports->has_operation())
	|| (vni_ranges !=  nullptr && vni_ranges->has_operation())
	|| (vlan_ranges !=  nullptr && vlan_ranges->has_operation())
	|| (routed_interface_ranges !=  nullptr && routed_interface_ranges->has_operation())
	|| (bridge_domains !=  nullptr && bridge_domains->has_operation());
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/vlan-switches/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-switch";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-switch-ports")
    {
        if(vlan_switch_ports == nullptr)
        {
            vlan_switch_ports = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::VlanSwitchPorts>();
        }
        return vlan_switch_ports;
    }

    if(child_yang_name == "vni-ranges")
    {
        if(vni_ranges == nullptr)
        {
            vni_ranges = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::VniRanges>();
        }
        return vni_ranges;
    }

    if(child_yang_name == "vlan-ranges")
    {
        if(vlan_ranges == nullptr)
        {
            vlan_ranges = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::VlanRanges>();
        }
        return vlan_ranges;
    }

    if(child_yang_name == "routed-interface-ranges")
    {
        if(routed_interface_ranges == nullptr)
        {
            routed_interface_ranges = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::RoutedInterfaceRanges>();
        }
        return routed_interface_ranges;
    }

    if(child_yang_name == "bridge-domains")
    {
        if(bridge_domains == nullptr)
        {
            bridge_domains = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains>();
        }
        return bridge_domains;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan_switch_ports != nullptr)
    {
        _children["vlan-switch-ports"] = vlan_switch_ports;
    }

    if(vni_ranges != nullptr)
    {
        _children["vni-ranges"] = vni_ranges;
    }

    if(vlan_ranges != nullptr)
    {
        _children["vlan-ranges"] = vlan_ranges;
    }

    if(routed_interface_ranges != nullptr)
    {
        _children["routed-interface-ranges"] = routed_interface_ranges;
    }

    if(bridge_domains != nullptr)
    {
        _children["bridge-domains"] = bridge_domains;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-switch-ports" || name == "vni-ranges" || name == "vlan-ranges" || name == "routed-interface-ranges" || name == "bridge-domains" || name == "name")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::VlanSwitchPorts::VlanSwitchPorts()
    :
    vlan_switch_port(this, {"interface_name"})
{

    yang_name = "vlan-switch-ports"; yang_parent_name = "vlan-switch"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::VlanSwitchPorts::~VlanSwitchPorts()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::VlanSwitchPorts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan_switch_port.len(); index++)
    {
        if(vlan_switch_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::VlanSwitchPorts::has_operation() const
{
    for (std::size_t index=0; index<vlan_switch_port.len(); index++)
    {
        if(vlan_switch_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::VlanSwitchPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-switch-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::VlanSwitchPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::VlanSwitchPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-switch-port")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::VlanSwitchPorts::VlanSwitchPort>();
        ent_->parent = this;
        vlan_switch_port.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::VlanSwitchPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlan_switch_port.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::VlanSwitchPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::VlanSwitch::VlanSwitchPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::VlanSwitchPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-switch-port")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::VlanSwitchPorts::VlanSwitchPort::VlanSwitchPort()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "vlan-switch-port"; yang_parent_name = "vlan-switch-ports"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::VlanSwitchPorts::VlanSwitchPort::~VlanSwitchPort()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::VlanSwitchPorts::VlanSwitchPort::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::VlanSwitchPorts::VlanSwitchPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::VlanSwitchPorts::VlanSwitchPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-switch-port";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::VlanSwitchPorts::VlanSwitchPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::VlanSwitchPorts::VlanSwitchPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::VlanSwitchPorts::VlanSwitchPort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::VlanSwitchPorts::VlanSwitchPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::VlanSwitchPorts::VlanSwitchPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::VlanSwitchPorts::VlanSwitchPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::VniRanges::VniRanges()
    :
    vni_range1_min{YType::uint32, "vni-range1-min"},
    vni_range1_max{YType::uint32, "vni-range1-max"},
    vni_range2_min{YType::uint32, "vni-range2-min"},
    vni_range2_max{YType::uint32, "vni-range2-max"},
    vni_range3_min{YType::uint32, "vni-range3-min"},
    vni_range3_max{YType::uint32, "vni-range3-max"},
    vni_range4_min{YType::uint32, "vni-range4-min"},
    vni_range4_max{YType::uint32, "vni-range4-max"},
    vni_range5_min{YType::uint32, "vni-range5-min"},
    vni_range5_max{YType::uint32, "vni-range5-max"},
    vni_range6_min{YType::uint32, "vni-range6-min"},
    vni_range6_max{YType::uint32, "vni-range6-max"},
    vni_range7_min{YType::uint32, "vni-range7-min"},
    vni_range7_max{YType::uint32, "vni-range7-max"},
    vni_range8_min{YType::uint32, "vni-range8-min"},
    vni_range8_max{YType::uint32, "vni-range8-max"},
    vni_range9_min{YType::uint32, "vni-range9-min"},
    vni_range9_max{YType::uint32, "vni-range9-max"}
{

    yang_name = "vni-ranges"; yang_parent_name = "vlan-switch"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::VniRanges::~VniRanges()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::VniRanges::has_data() const
{
    if (is_presence_container) return true;
    return vni_range1_min.is_set
	|| vni_range1_max.is_set
	|| vni_range2_min.is_set
	|| vni_range2_max.is_set
	|| vni_range3_min.is_set
	|| vni_range3_max.is_set
	|| vni_range4_min.is_set
	|| vni_range4_max.is_set
	|| vni_range5_min.is_set
	|| vni_range5_max.is_set
	|| vni_range6_min.is_set
	|| vni_range6_max.is_set
	|| vni_range7_min.is_set
	|| vni_range7_max.is_set
	|| vni_range8_min.is_set
	|| vni_range8_max.is_set
	|| vni_range9_min.is_set
	|| vni_range9_max.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::VniRanges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vni_range1_min.yfilter)
	|| ydk::is_set(vni_range1_max.yfilter)
	|| ydk::is_set(vni_range2_min.yfilter)
	|| ydk::is_set(vni_range2_max.yfilter)
	|| ydk::is_set(vni_range3_min.yfilter)
	|| ydk::is_set(vni_range3_max.yfilter)
	|| ydk::is_set(vni_range4_min.yfilter)
	|| ydk::is_set(vni_range4_max.yfilter)
	|| ydk::is_set(vni_range5_min.yfilter)
	|| ydk::is_set(vni_range5_max.yfilter)
	|| ydk::is_set(vni_range6_min.yfilter)
	|| ydk::is_set(vni_range6_max.yfilter)
	|| ydk::is_set(vni_range7_min.yfilter)
	|| ydk::is_set(vni_range7_max.yfilter)
	|| ydk::is_set(vni_range8_min.yfilter)
	|| ydk::is_set(vni_range8_max.yfilter)
	|| ydk::is_set(vni_range9_min.yfilter)
	|| ydk::is_set(vni_range9_max.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::VniRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vni-ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::VniRanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vni_range1_min.is_set || is_set(vni_range1_min.yfilter)) leaf_name_data.push_back(vni_range1_min.get_name_leafdata());
    if (vni_range1_max.is_set || is_set(vni_range1_max.yfilter)) leaf_name_data.push_back(vni_range1_max.get_name_leafdata());
    if (vni_range2_min.is_set || is_set(vni_range2_min.yfilter)) leaf_name_data.push_back(vni_range2_min.get_name_leafdata());
    if (vni_range2_max.is_set || is_set(vni_range2_max.yfilter)) leaf_name_data.push_back(vni_range2_max.get_name_leafdata());
    if (vni_range3_min.is_set || is_set(vni_range3_min.yfilter)) leaf_name_data.push_back(vni_range3_min.get_name_leafdata());
    if (vni_range3_max.is_set || is_set(vni_range3_max.yfilter)) leaf_name_data.push_back(vni_range3_max.get_name_leafdata());
    if (vni_range4_min.is_set || is_set(vni_range4_min.yfilter)) leaf_name_data.push_back(vni_range4_min.get_name_leafdata());
    if (vni_range4_max.is_set || is_set(vni_range4_max.yfilter)) leaf_name_data.push_back(vni_range4_max.get_name_leafdata());
    if (vni_range5_min.is_set || is_set(vni_range5_min.yfilter)) leaf_name_data.push_back(vni_range5_min.get_name_leafdata());
    if (vni_range5_max.is_set || is_set(vni_range5_max.yfilter)) leaf_name_data.push_back(vni_range5_max.get_name_leafdata());
    if (vni_range6_min.is_set || is_set(vni_range6_min.yfilter)) leaf_name_data.push_back(vni_range6_min.get_name_leafdata());
    if (vni_range6_max.is_set || is_set(vni_range6_max.yfilter)) leaf_name_data.push_back(vni_range6_max.get_name_leafdata());
    if (vni_range7_min.is_set || is_set(vni_range7_min.yfilter)) leaf_name_data.push_back(vni_range7_min.get_name_leafdata());
    if (vni_range7_max.is_set || is_set(vni_range7_max.yfilter)) leaf_name_data.push_back(vni_range7_max.get_name_leafdata());
    if (vni_range8_min.is_set || is_set(vni_range8_min.yfilter)) leaf_name_data.push_back(vni_range8_min.get_name_leafdata());
    if (vni_range8_max.is_set || is_set(vni_range8_max.yfilter)) leaf_name_data.push_back(vni_range8_max.get_name_leafdata());
    if (vni_range9_min.is_set || is_set(vni_range9_min.yfilter)) leaf_name_data.push_back(vni_range9_min.get_name_leafdata());
    if (vni_range9_max.is_set || is_set(vni_range9_max.yfilter)) leaf_name_data.push_back(vni_range9_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::VniRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::VniRanges::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::VniRanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vni-range1-min")
    {
        vni_range1_min = value;
        vni_range1_min.value_namespace = name_space;
        vni_range1_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-range1-max")
    {
        vni_range1_max = value;
        vni_range1_max.value_namespace = name_space;
        vni_range1_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-range2-min")
    {
        vni_range2_min = value;
        vni_range2_min.value_namespace = name_space;
        vni_range2_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-range2-max")
    {
        vni_range2_max = value;
        vni_range2_max.value_namespace = name_space;
        vni_range2_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-range3-min")
    {
        vni_range3_min = value;
        vni_range3_min.value_namespace = name_space;
        vni_range3_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-range3-max")
    {
        vni_range3_max = value;
        vni_range3_max.value_namespace = name_space;
        vni_range3_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-range4-min")
    {
        vni_range4_min = value;
        vni_range4_min.value_namespace = name_space;
        vni_range4_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-range4-max")
    {
        vni_range4_max = value;
        vni_range4_max.value_namespace = name_space;
        vni_range4_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-range5-min")
    {
        vni_range5_min = value;
        vni_range5_min.value_namespace = name_space;
        vni_range5_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-range5-max")
    {
        vni_range5_max = value;
        vni_range5_max.value_namespace = name_space;
        vni_range5_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-range6-min")
    {
        vni_range6_min = value;
        vni_range6_min.value_namespace = name_space;
        vni_range6_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-range6-max")
    {
        vni_range6_max = value;
        vni_range6_max.value_namespace = name_space;
        vni_range6_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-range7-min")
    {
        vni_range7_min = value;
        vni_range7_min.value_namespace = name_space;
        vni_range7_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-range7-max")
    {
        vni_range7_max = value;
        vni_range7_max.value_namespace = name_space;
        vni_range7_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-range8-min")
    {
        vni_range8_min = value;
        vni_range8_min.value_namespace = name_space;
        vni_range8_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-range8-max")
    {
        vni_range8_max = value;
        vni_range8_max.value_namespace = name_space;
        vni_range8_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-range9-min")
    {
        vni_range9_min = value;
        vni_range9_min.value_namespace = name_space;
        vni_range9_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-range9-max")
    {
        vni_range9_max = value;
        vni_range9_max.value_namespace = name_space;
        vni_range9_max.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::VniRanges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vni-range1-min")
    {
        vni_range1_min.yfilter = yfilter;
    }
    if(value_path == "vni-range1-max")
    {
        vni_range1_max.yfilter = yfilter;
    }
    if(value_path == "vni-range2-min")
    {
        vni_range2_min.yfilter = yfilter;
    }
    if(value_path == "vni-range2-max")
    {
        vni_range2_max.yfilter = yfilter;
    }
    if(value_path == "vni-range3-min")
    {
        vni_range3_min.yfilter = yfilter;
    }
    if(value_path == "vni-range3-max")
    {
        vni_range3_max.yfilter = yfilter;
    }
    if(value_path == "vni-range4-min")
    {
        vni_range4_min.yfilter = yfilter;
    }
    if(value_path == "vni-range4-max")
    {
        vni_range4_max.yfilter = yfilter;
    }
    if(value_path == "vni-range5-min")
    {
        vni_range5_min.yfilter = yfilter;
    }
    if(value_path == "vni-range5-max")
    {
        vni_range5_max.yfilter = yfilter;
    }
    if(value_path == "vni-range6-min")
    {
        vni_range6_min.yfilter = yfilter;
    }
    if(value_path == "vni-range6-max")
    {
        vni_range6_max.yfilter = yfilter;
    }
    if(value_path == "vni-range7-min")
    {
        vni_range7_min.yfilter = yfilter;
    }
    if(value_path == "vni-range7-max")
    {
        vni_range7_max.yfilter = yfilter;
    }
    if(value_path == "vni-range8-min")
    {
        vni_range8_min.yfilter = yfilter;
    }
    if(value_path == "vni-range8-max")
    {
        vni_range8_max.yfilter = yfilter;
    }
    if(value_path == "vni-range9-min")
    {
        vni_range9_min.yfilter = yfilter;
    }
    if(value_path == "vni-range9-max")
    {
        vni_range9_max.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::VniRanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vni-range1-min" || name == "vni-range1-max" || name == "vni-range2-min" || name == "vni-range2-max" || name == "vni-range3-min" || name == "vni-range3-max" || name == "vni-range4-min" || name == "vni-range4-max" || name == "vni-range5-min" || name == "vni-range5-max" || name == "vni-range6-min" || name == "vni-range6-max" || name == "vni-range7-min" || name == "vni-range7-max" || name == "vni-range8-min" || name == "vni-range8-max" || name == "vni-range9-min" || name == "vni-range9-max")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::VlanRanges::VlanRanges()
    :
    vlan_range1_min{YType::uint32, "vlan-range1-min"},
    vlan_range1_max{YType::uint32, "vlan-range1-max"},
    vlan_range2_min{YType::uint32, "vlan-range2-min"},
    vlan_range2_max{YType::uint32, "vlan-range2-max"},
    vlan_range3_min{YType::uint32, "vlan-range3-min"},
    vlan_range3_max{YType::uint32, "vlan-range3-max"},
    vlan_range4_min{YType::uint32, "vlan-range4-min"},
    vlan_range4_max{YType::uint32, "vlan-range4-max"},
    vlan_range5_min{YType::uint32, "vlan-range5-min"},
    vlan_range5_max{YType::uint32, "vlan-range5-max"},
    vlan_range6_min{YType::uint32, "vlan-range6-min"},
    vlan_range6_max{YType::uint32, "vlan-range6-max"},
    vlan_range7_min{YType::uint32, "vlan-range7-min"},
    vlan_range7_max{YType::uint32, "vlan-range7-max"},
    vlan_range8_min{YType::uint32, "vlan-range8-min"},
    vlan_range8_max{YType::uint32, "vlan-range8-max"},
    vlan_range9_min{YType::uint32, "vlan-range9-min"},
    vlan_range9_max{YType::uint32, "vlan-range9-max"}
{

    yang_name = "vlan-ranges"; yang_parent_name = "vlan-switch"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::VlanRanges::~VlanRanges()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::VlanRanges::has_data() const
{
    if (is_presence_container) return true;
    return vlan_range1_min.is_set
	|| vlan_range1_max.is_set
	|| vlan_range2_min.is_set
	|| vlan_range2_max.is_set
	|| vlan_range3_min.is_set
	|| vlan_range3_max.is_set
	|| vlan_range4_min.is_set
	|| vlan_range4_max.is_set
	|| vlan_range5_min.is_set
	|| vlan_range5_max.is_set
	|| vlan_range6_min.is_set
	|| vlan_range6_max.is_set
	|| vlan_range7_min.is_set
	|| vlan_range7_max.is_set
	|| vlan_range8_min.is_set
	|| vlan_range8_max.is_set
	|| vlan_range9_min.is_set
	|| vlan_range9_max.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::VlanRanges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_range1_min.yfilter)
	|| ydk::is_set(vlan_range1_max.yfilter)
	|| ydk::is_set(vlan_range2_min.yfilter)
	|| ydk::is_set(vlan_range2_max.yfilter)
	|| ydk::is_set(vlan_range3_min.yfilter)
	|| ydk::is_set(vlan_range3_max.yfilter)
	|| ydk::is_set(vlan_range4_min.yfilter)
	|| ydk::is_set(vlan_range4_max.yfilter)
	|| ydk::is_set(vlan_range5_min.yfilter)
	|| ydk::is_set(vlan_range5_max.yfilter)
	|| ydk::is_set(vlan_range6_min.yfilter)
	|| ydk::is_set(vlan_range6_max.yfilter)
	|| ydk::is_set(vlan_range7_min.yfilter)
	|| ydk::is_set(vlan_range7_max.yfilter)
	|| ydk::is_set(vlan_range8_min.yfilter)
	|| ydk::is_set(vlan_range8_max.yfilter)
	|| ydk::is_set(vlan_range9_min.yfilter)
	|| ydk::is_set(vlan_range9_max.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::VlanRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::VlanRanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_range1_min.is_set || is_set(vlan_range1_min.yfilter)) leaf_name_data.push_back(vlan_range1_min.get_name_leafdata());
    if (vlan_range1_max.is_set || is_set(vlan_range1_max.yfilter)) leaf_name_data.push_back(vlan_range1_max.get_name_leafdata());
    if (vlan_range2_min.is_set || is_set(vlan_range2_min.yfilter)) leaf_name_data.push_back(vlan_range2_min.get_name_leafdata());
    if (vlan_range2_max.is_set || is_set(vlan_range2_max.yfilter)) leaf_name_data.push_back(vlan_range2_max.get_name_leafdata());
    if (vlan_range3_min.is_set || is_set(vlan_range3_min.yfilter)) leaf_name_data.push_back(vlan_range3_min.get_name_leafdata());
    if (vlan_range3_max.is_set || is_set(vlan_range3_max.yfilter)) leaf_name_data.push_back(vlan_range3_max.get_name_leafdata());
    if (vlan_range4_min.is_set || is_set(vlan_range4_min.yfilter)) leaf_name_data.push_back(vlan_range4_min.get_name_leafdata());
    if (vlan_range4_max.is_set || is_set(vlan_range4_max.yfilter)) leaf_name_data.push_back(vlan_range4_max.get_name_leafdata());
    if (vlan_range5_min.is_set || is_set(vlan_range5_min.yfilter)) leaf_name_data.push_back(vlan_range5_min.get_name_leafdata());
    if (vlan_range5_max.is_set || is_set(vlan_range5_max.yfilter)) leaf_name_data.push_back(vlan_range5_max.get_name_leafdata());
    if (vlan_range6_min.is_set || is_set(vlan_range6_min.yfilter)) leaf_name_data.push_back(vlan_range6_min.get_name_leafdata());
    if (vlan_range6_max.is_set || is_set(vlan_range6_max.yfilter)) leaf_name_data.push_back(vlan_range6_max.get_name_leafdata());
    if (vlan_range7_min.is_set || is_set(vlan_range7_min.yfilter)) leaf_name_data.push_back(vlan_range7_min.get_name_leafdata());
    if (vlan_range7_max.is_set || is_set(vlan_range7_max.yfilter)) leaf_name_data.push_back(vlan_range7_max.get_name_leafdata());
    if (vlan_range8_min.is_set || is_set(vlan_range8_min.yfilter)) leaf_name_data.push_back(vlan_range8_min.get_name_leafdata());
    if (vlan_range8_max.is_set || is_set(vlan_range8_max.yfilter)) leaf_name_data.push_back(vlan_range8_max.get_name_leafdata());
    if (vlan_range9_min.is_set || is_set(vlan_range9_min.yfilter)) leaf_name_data.push_back(vlan_range9_min.get_name_leafdata());
    if (vlan_range9_max.is_set || is_set(vlan_range9_max.yfilter)) leaf_name_data.push_back(vlan_range9_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::VlanRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::VlanRanges::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::VlanRanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-range1-min")
    {
        vlan_range1_min = value;
        vlan_range1_min.value_namespace = name_space;
        vlan_range1_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-range1-max")
    {
        vlan_range1_max = value;
        vlan_range1_max.value_namespace = name_space;
        vlan_range1_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-range2-min")
    {
        vlan_range2_min = value;
        vlan_range2_min.value_namespace = name_space;
        vlan_range2_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-range2-max")
    {
        vlan_range2_max = value;
        vlan_range2_max.value_namespace = name_space;
        vlan_range2_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-range3-min")
    {
        vlan_range3_min = value;
        vlan_range3_min.value_namespace = name_space;
        vlan_range3_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-range3-max")
    {
        vlan_range3_max = value;
        vlan_range3_max.value_namespace = name_space;
        vlan_range3_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-range4-min")
    {
        vlan_range4_min = value;
        vlan_range4_min.value_namespace = name_space;
        vlan_range4_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-range4-max")
    {
        vlan_range4_max = value;
        vlan_range4_max.value_namespace = name_space;
        vlan_range4_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-range5-min")
    {
        vlan_range5_min = value;
        vlan_range5_min.value_namespace = name_space;
        vlan_range5_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-range5-max")
    {
        vlan_range5_max = value;
        vlan_range5_max.value_namespace = name_space;
        vlan_range5_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-range6-min")
    {
        vlan_range6_min = value;
        vlan_range6_min.value_namespace = name_space;
        vlan_range6_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-range6-max")
    {
        vlan_range6_max = value;
        vlan_range6_max.value_namespace = name_space;
        vlan_range6_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-range7-min")
    {
        vlan_range7_min = value;
        vlan_range7_min.value_namespace = name_space;
        vlan_range7_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-range7-max")
    {
        vlan_range7_max = value;
        vlan_range7_max.value_namespace = name_space;
        vlan_range7_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-range8-min")
    {
        vlan_range8_min = value;
        vlan_range8_min.value_namespace = name_space;
        vlan_range8_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-range8-max")
    {
        vlan_range8_max = value;
        vlan_range8_max.value_namespace = name_space;
        vlan_range8_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-range9-min")
    {
        vlan_range9_min = value;
        vlan_range9_min.value_namespace = name_space;
        vlan_range9_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-range9-max")
    {
        vlan_range9_max = value;
        vlan_range9_max.value_namespace = name_space;
        vlan_range9_max.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::VlanRanges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-range1-min")
    {
        vlan_range1_min.yfilter = yfilter;
    }
    if(value_path == "vlan-range1-max")
    {
        vlan_range1_max.yfilter = yfilter;
    }
    if(value_path == "vlan-range2-min")
    {
        vlan_range2_min.yfilter = yfilter;
    }
    if(value_path == "vlan-range2-max")
    {
        vlan_range2_max.yfilter = yfilter;
    }
    if(value_path == "vlan-range3-min")
    {
        vlan_range3_min.yfilter = yfilter;
    }
    if(value_path == "vlan-range3-max")
    {
        vlan_range3_max.yfilter = yfilter;
    }
    if(value_path == "vlan-range4-min")
    {
        vlan_range4_min.yfilter = yfilter;
    }
    if(value_path == "vlan-range4-max")
    {
        vlan_range4_max.yfilter = yfilter;
    }
    if(value_path == "vlan-range5-min")
    {
        vlan_range5_min.yfilter = yfilter;
    }
    if(value_path == "vlan-range5-max")
    {
        vlan_range5_max.yfilter = yfilter;
    }
    if(value_path == "vlan-range6-min")
    {
        vlan_range6_min.yfilter = yfilter;
    }
    if(value_path == "vlan-range6-max")
    {
        vlan_range6_max.yfilter = yfilter;
    }
    if(value_path == "vlan-range7-min")
    {
        vlan_range7_min.yfilter = yfilter;
    }
    if(value_path == "vlan-range7-max")
    {
        vlan_range7_max.yfilter = yfilter;
    }
    if(value_path == "vlan-range8-min")
    {
        vlan_range8_min.yfilter = yfilter;
    }
    if(value_path == "vlan-range8-max")
    {
        vlan_range8_max.yfilter = yfilter;
    }
    if(value_path == "vlan-range9-min")
    {
        vlan_range9_min.yfilter = yfilter;
    }
    if(value_path == "vlan-range9-max")
    {
        vlan_range9_max.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::VlanRanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-range1-min" || name == "vlan-range1-max" || name == "vlan-range2-min" || name == "vlan-range2-max" || name == "vlan-range3-min" || name == "vlan-range3-max" || name == "vlan-range4-min" || name == "vlan-range4-max" || name == "vlan-range5-min" || name == "vlan-range5-max" || name == "vlan-range6-min" || name == "vlan-range6-max" || name == "vlan-range7-min" || name == "vlan-range7-max" || name == "vlan-range8-min" || name == "vlan-range8-max" || name == "vlan-range9-min" || name == "vlan-range9-max")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::RoutedInterfaceRanges::RoutedInterfaceRanges()
    :
    interface_range1_min{YType::uint32, "interface-range1-min"},
    interface_range1_max{YType::uint32, "interface-range1-max"},
    interface_range2_min{YType::uint32, "interface-range2-min"},
    interface_range2_max{YType::uint32, "interface-range2-max"},
    interface_range3_min{YType::uint32, "interface-range3-min"},
    interface_range3_max{YType::uint32, "interface-range3-max"},
    interface_range4_min{YType::uint32, "interface-range4-min"},
    interface_range4_max{YType::uint32, "interface-range4-max"},
    interface_range5_min{YType::uint32, "interface-range5-min"},
    interface_range5_max{YType::uint32, "interface-range5-max"},
    interface_range6_min{YType::uint32, "interface-range6-min"},
    interface_range6_max{YType::uint32, "interface-range6-max"},
    interface_range7_min{YType::uint32, "interface-range7-min"},
    interface_range7_max{YType::uint32, "interface-range7-max"},
    interface_range8_min{YType::uint32, "interface-range8-min"},
    interface_range8_max{YType::uint32, "interface-range8-max"},
    interface_range9_min{YType::uint32, "interface-range9-min"},
    interface_range9_max{YType::uint32, "interface-range9-max"}
{

    yang_name = "routed-interface-ranges"; yang_parent_name = "vlan-switch"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::RoutedInterfaceRanges::~RoutedInterfaceRanges()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::RoutedInterfaceRanges::has_data() const
{
    if (is_presence_container) return true;
    return interface_range1_min.is_set
	|| interface_range1_max.is_set
	|| interface_range2_min.is_set
	|| interface_range2_max.is_set
	|| interface_range3_min.is_set
	|| interface_range3_max.is_set
	|| interface_range4_min.is_set
	|| interface_range4_max.is_set
	|| interface_range5_min.is_set
	|| interface_range5_max.is_set
	|| interface_range6_min.is_set
	|| interface_range6_max.is_set
	|| interface_range7_min.is_set
	|| interface_range7_max.is_set
	|| interface_range8_min.is_set
	|| interface_range8_max.is_set
	|| interface_range9_min.is_set
	|| interface_range9_max.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::RoutedInterfaceRanges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_range1_min.yfilter)
	|| ydk::is_set(interface_range1_max.yfilter)
	|| ydk::is_set(interface_range2_min.yfilter)
	|| ydk::is_set(interface_range2_max.yfilter)
	|| ydk::is_set(interface_range3_min.yfilter)
	|| ydk::is_set(interface_range3_max.yfilter)
	|| ydk::is_set(interface_range4_min.yfilter)
	|| ydk::is_set(interface_range4_max.yfilter)
	|| ydk::is_set(interface_range5_min.yfilter)
	|| ydk::is_set(interface_range5_max.yfilter)
	|| ydk::is_set(interface_range6_min.yfilter)
	|| ydk::is_set(interface_range6_max.yfilter)
	|| ydk::is_set(interface_range7_min.yfilter)
	|| ydk::is_set(interface_range7_max.yfilter)
	|| ydk::is_set(interface_range8_min.yfilter)
	|| ydk::is_set(interface_range8_max.yfilter)
	|| ydk::is_set(interface_range9_min.yfilter)
	|| ydk::is_set(interface_range9_max.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::RoutedInterfaceRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routed-interface-ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::RoutedInterfaceRanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_range1_min.is_set || is_set(interface_range1_min.yfilter)) leaf_name_data.push_back(interface_range1_min.get_name_leafdata());
    if (interface_range1_max.is_set || is_set(interface_range1_max.yfilter)) leaf_name_data.push_back(interface_range1_max.get_name_leafdata());
    if (interface_range2_min.is_set || is_set(interface_range2_min.yfilter)) leaf_name_data.push_back(interface_range2_min.get_name_leafdata());
    if (interface_range2_max.is_set || is_set(interface_range2_max.yfilter)) leaf_name_data.push_back(interface_range2_max.get_name_leafdata());
    if (interface_range3_min.is_set || is_set(interface_range3_min.yfilter)) leaf_name_data.push_back(interface_range3_min.get_name_leafdata());
    if (interface_range3_max.is_set || is_set(interface_range3_max.yfilter)) leaf_name_data.push_back(interface_range3_max.get_name_leafdata());
    if (interface_range4_min.is_set || is_set(interface_range4_min.yfilter)) leaf_name_data.push_back(interface_range4_min.get_name_leafdata());
    if (interface_range4_max.is_set || is_set(interface_range4_max.yfilter)) leaf_name_data.push_back(interface_range4_max.get_name_leafdata());
    if (interface_range5_min.is_set || is_set(interface_range5_min.yfilter)) leaf_name_data.push_back(interface_range5_min.get_name_leafdata());
    if (interface_range5_max.is_set || is_set(interface_range5_max.yfilter)) leaf_name_data.push_back(interface_range5_max.get_name_leafdata());
    if (interface_range6_min.is_set || is_set(interface_range6_min.yfilter)) leaf_name_data.push_back(interface_range6_min.get_name_leafdata());
    if (interface_range6_max.is_set || is_set(interface_range6_max.yfilter)) leaf_name_data.push_back(interface_range6_max.get_name_leafdata());
    if (interface_range7_min.is_set || is_set(interface_range7_min.yfilter)) leaf_name_data.push_back(interface_range7_min.get_name_leafdata());
    if (interface_range7_max.is_set || is_set(interface_range7_max.yfilter)) leaf_name_data.push_back(interface_range7_max.get_name_leafdata());
    if (interface_range8_min.is_set || is_set(interface_range8_min.yfilter)) leaf_name_data.push_back(interface_range8_min.get_name_leafdata());
    if (interface_range8_max.is_set || is_set(interface_range8_max.yfilter)) leaf_name_data.push_back(interface_range8_max.get_name_leafdata());
    if (interface_range9_min.is_set || is_set(interface_range9_min.yfilter)) leaf_name_data.push_back(interface_range9_min.get_name_leafdata());
    if (interface_range9_max.is_set || is_set(interface_range9_max.yfilter)) leaf_name_data.push_back(interface_range9_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::RoutedInterfaceRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::RoutedInterfaceRanges::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::RoutedInterfaceRanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-range1-min")
    {
        interface_range1_min = value;
        interface_range1_min.value_namespace = name_space;
        interface_range1_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-range1-max")
    {
        interface_range1_max = value;
        interface_range1_max.value_namespace = name_space;
        interface_range1_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-range2-min")
    {
        interface_range2_min = value;
        interface_range2_min.value_namespace = name_space;
        interface_range2_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-range2-max")
    {
        interface_range2_max = value;
        interface_range2_max.value_namespace = name_space;
        interface_range2_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-range3-min")
    {
        interface_range3_min = value;
        interface_range3_min.value_namespace = name_space;
        interface_range3_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-range3-max")
    {
        interface_range3_max = value;
        interface_range3_max.value_namespace = name_space;
        interface_range3_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-range4-min")
    {
        interface_range4_min = value;
        interface_range4_min.value_namespace = name_space;
        interface_range4_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-range4-max")
    {
        interface_range4_max = value;
        interface_range4_max.value_namespace = name_space;
        interface_range4_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-range5-min")
    {
        interface_range5_min = value;
        interface_range5_min.value_namespace = name_space;
        interface_range5_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-range5-max")
    {
        interface_range5_max = value;
        interface_range5_max.value_namespace = name_space;
        interface_range5_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-range6-min")
    {
        interface_range6_min = value;
        interface_range6_min.value_namespace = name_space;
        interface_range6_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-range6-max")
    {
        interface_range6_max = value;
        interface_range6_max.value_namespace = name_space;
        interface_range6_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-range7-min")
    {
        interface_range7_min = value;
        interface_range7_min.value_namespace = name_space;
        interface_range7_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-range7-max")
    {
        interface_range7_max = value;
        interface_range7_max.value_namespace = name_space;
        interface_range7_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-range8-min")
    {
        interface_range8_min = value;
        interface_range8_min.value_namespace = name_space;
        interface_range8_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-range8-max")
    {
        interface_range8_max = value;
        interface_range8_max.value_namespace = name_space;
        interface_range8_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-range9-min")
    {
        interface_range9_min = value;
        interface_range9_min.value_namespace = name_space;
        interface_range9_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-range9-max")
    {
        interface_range9_max = value;
        interface_range9_max.value_namespace = name_space;
        interface_range9_max.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::RoutedInterfaceRanges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-range1-min")
    {
        interface_range1_min.yfilter = yfilter;
    }
    if(value_path == "interface-range1-max")
    {
        interface_range1_max.yfilter = yfilter;
    }
    if(value_path == "interface-range2-min")
    {
        interface_range2_min.yfilter = yfilter;
    }
    if(value_path == "interface-range2-max")
    {
        interface_range2_max.yfilter = yfilter;
    }
    if(value_path == "interface-range3-min")
    {
        interface_range3_min.yfilter = yfilter;
    }
    if(value_path == "interface-range3-max")
    {
        interface_range3_max.yfilter = yfilter;
    }
    if(value_path == "interface-range4-min")
    {
        interface_range4_min.yfilter = yfilter;
    }
    if(value_path == "interface-range4-max")
    {
        interface_range4_max.yfilter = yfilter;
    }
    if(value_path == "interface-range5-min")
    {
        interface_range5_min.yfilter = yfilter;
    }
    if(value_path == "interface-range5-max")
    {
        interface_range5_max.yfilter = yfilter;
    }
    if(value_path == "interface-range6-min")
    {
        interface_range6_min.yfilter = yfilter;
    }
    if(value_path == "interface-range6-max")
    {
        interface_range6_max.yfilter = yfilter;
    }
    if(value_path == "interface-range7-min")
    {
        interface_range7_min.yfilter = yfilter;
    }
    if(value_path == "interface-range7-max")
    {
        interface_range7_max.yfilter = yfilter;
    }
    if(value_path == "interface-range8-min")
    {
        interface_range8_min.yfilter = yfilter;
    }
    if(value_path == "interface-range8-max")
    {
        interface_range8_max.yfilter = yfilter;
    }
    if(value_path == "interface-range9-min")
    {
        interface_range9_min.yfilter = yfilter;
    }
    if(value_path == "interface-range9-max")
    {
        interface_range9_max.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::RoutedInterfaceRanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-range1-min" || name == "interface-range1-max" || name == "interface-range2-min" || name == "interface-range2-max" || name == "interface-range3-min" || name == "interface-range3-max" || name == "interface-range4-min" || name == "interface-range4-max" || name == "interface-range5-min" || name == "interface-range5-max" || name == "interface-range6-min" || name == "interface-range6-max" || name == "interface-range7-min" || name == "interface-range7-max" || name == "interface-range8-min" || name == "interface-range8-max" || name == "interface-range9-min" || name == "interface-range9-max")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomains()
    :
    bridge_domain(this, {"name"})
{

    yang_name = "bridge-domains"; yang_parent_name = "vlan-switch"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::~BridgeDomains()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bridge_domain.len(); index++)
    {
        if(bridge_domain[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::has_operation() const
{
    for (std::size_t index=0; index<bridge_domain.len(); index++)
    {
        if(bridge_domain[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domains";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domain")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain>();
        ent_->parent = this;
        bridge_domain.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bridge_domain.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domain")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomain()
    :
    name{YType::str, "name"},
    coupled_mode{YType::empty, "coupled-mode"},
    shutdown{YType::empty, "shutdown"},
    flooding_unknown_unicast{YType::empty, "flooding-unknown-unicast"},
    igmp_snooping_disable{YType::empty, "igmp-snooping-disable"},
    transport_mode{YType::enumeration, "transport-mode"},
    mld_snooping{YType::str, "mld-snooping"},
    bridge_domain_mtu{YType::uint32, "bridge-domain-mtu"},
    dhcp{YType::str, "dhcp"},
    bridge_description{YType::str, "bridge-description"},
    igmp_snooping{YType::str, "igmp-snooping"},
    flooding{YType::empty, "flooding"}
        ,
    bd_storm_controls(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls>())
    , member_vnis(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis>())
    , bridge_domain_mac(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac>())
    , nv_satellite(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::NvSatellite>())
    , bridge_domain_pbb(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb>())
    , bridge_domain_evis(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainEvis>())
    , access_vfis(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis>())
    , bd_pseudowires(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires>())
    , vfis(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis>())
    , bridge_domainvnis(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainvnis>())
    , bd_attachment_circuits(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits>())
    , bd_pseudowire_evpns(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowireEvpns>())
    , ip_source_guard(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::IpSourceGuard>())
    , dai(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Dai>())
    , routed_interfaces(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::RoutedInterfaces>())
{
    bd_storm_controls->parent = this;
    member_vnis->parent = this;
    bridge_domain_mac->parent = this;
    nv_satellite->parent = this;
    bridge_domain_pbb->parent = this;
    bridge_domain_evis->parent = this;
    access_vfis->parent = this;
    bd_pseudowires->parent = this;
    vfis->parent = this;
    bridge_domainvnis->parent = this;
    bd_attachment_circuits->parent = this;
    bd_pseudowire_evpns->parent = this;
    ip_source_guard->parent = this;
    dai->parent = this;
    routed_interfaces->parent = this;

    yang_name = "bridge-domain"; yang_parent_name = "bridge-domains"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::~BridgeDomain()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| coupled_mode.is_set
	|| shutdown.is_set
	|| flooding_unknown_unicast.is_set
	|| igmp_snooping_disable.is_set
	|| transport_mode.is_set
	|| mld_snooping.is_set
	|| bridge_domain_mtu.is_set
	|| dhcp.is_set
	|| bridge_description.is_set
	|| igmp_snooping.is_set
	|| flooding.is_set
	|| (bd_storm_controls !=  nullptr && bd_storm_controls->has_data())
	|| (member_vnis !=  nullptr && member_vnis->has_data())
	|| (bridge_domain_mac !=  nullptr && bridge_domain_mac->has_data())
	|| (nv_satellite !=  nullptr && nv_satellite->has_data())
	|| (bridge_domain_pbb !=  nullptr && bridge_domain_pbb->has_data())
	|| (bridge_domain_evis !=  nullptr && bridge_domain_evis->has_data())
	|| (access_vfis !=  nullptr && access_vfis->has_data())
	|| (bd_pseudowires !=  nullptr && bd_pseudowires->has_data())
	|| (vfis !=  nullptr && vfis->has_data())
	|| (bridge_domainvnis !=  nullptr && bridge_domainvnis->has_data())
	|| (bd_attachment_circuits !=  nullptr && bd_attachment_circuits->has_data())
	|| (bd_pseudowire_evpns !=  nullptr && bd_pseudowire_evpns->has_data())
	|| (ip_source_guard !=  nullptr && ip_source_guard->has_data())
	|| (dai !=  nullptr && dai->has_data())
	|| (routed_interfaces !=  nullptr && routed_interfaces->has_data());
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(coupled_mode.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(flooding_unknown_unicast.yfilter)
	|| ydk::is_set(igmp_snooping_disable.yfilter)
	|| ydk::is_set(transport_mode.yfilter)
	|| ydk::is_set(mld_snooping.yfilter)
	|| ydk::is_set(bridge_domain_mtu.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(bridge_description.yfilter)
	|| ydk::is_set(igmp_snooping.yfilter)
	|| ydk::is_set(flooding.yfilter)
	|| (bd_storm_controls !=  nullptr && bd_storm_controls->has_operation())
	|| (member_vnis !=  nullptr && member_vnis->has_operation())
	|| (bridge_domain_mac !=  nullptr && bridge_domain_mac->has_operation())
	|| (nv_satellite !=  nullptr && nv_satellite->has_operation())
	|| (bridge_domain_pbb !=  nullptr && bridge_domain_pbb->has_operation())
	|| (bridge_domain_evis !=  nullptr && bridge_domain_evis->has_operation())
	|| (access_vfis !=  nullptr && access_vfis->has_operation())
	|| (bd_pseudowires !=  nullptr && bd_pseudowires->has_operation())
	|| (vfis !=  nullptr && vfis->has_operation())
	|| (bridge_domainvnis !=  nullptr && bridge_domainvnis->has_operation())
	|| (bd_attachment_circuits !=  nullptr && bd_attachment_circuits->has_operation())
	|| (bd_pseudowire_evpns !=  nullptr && bd_pseudowire_evpns->has_operation())
	|| (ip_source_guard !=  nullptr && ip_source_guard->has_operation())
	|| (dai !=  nullptr && dai->has_operation())
	|| (routed_interfaces !=  nullptr && routed_interfaces->has_operation());
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (coupled_mode.is_set || is_set(coupled_mode.yfilter)) leaf_name_data.push_back(coupled_mode.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (flooding_unknown_unicast.is_set || is_set(flooding_unknown_unicast.yfilter)) leaf_name_data.push_back(flooding_unknown_unicast.get_name_leafdata());
    if (igmp_snooping_disable.is_set || is_set(igmp_snooping_disable.yfilter)) leaf_name_data.push_back(igmp_snooping_disable.get_name_leafdata());
    if (transport_mode.is_set || is_set(transport_mode.yfilter)) leaf_name_data.push_back(transport_mode.get_name_leafdata());
    if (mld_snooping.is_set || is_set(mld_snooping.yfilter)) leaf_name_data.push_back(mld_snooping.get_name_leafdata());
    if (bridge_domain_mtu.is_set || is_set(bridge_domain_mtu.yfilter)) leaf_name_data.push_back(bridge_domain_mtu.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (bridge_description.is_set || is_set(bridge_description.yfilter)) leaf_name_data.push_back(bridge_description.get_name_leafdata());
    if (igmp_snooping.is_set || is_set(igmp_snooping.yfilter)) leaf_name_data.push_back(igmp_snooping.get_name_leafdata());
    if (flooding.is_set || is_set(flooding.yfilter)) leaf_name_data.push_back(flooding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-storm-controls")
    {
        if(bd_storm_controls == nullptr)
        {
            bd_storm_controls = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls>();
        }
        return bd_storm_controls;
    }

    if(child_yang_name == "member-vnis")
    {
        if(member_vnis == nullptr)
        {
            member_vnis = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis>();
        }
        return member_vnis;
    }

    if(child_yang_name == "bridge-domain-mac")
    {
        if(bridge_domain_mac == nullptr)
        {
            bridge_domain_mac = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac>();
        }
        return bridge_domain_mac;
    }

    if(child_yang_name == "nv-satellite")
    {
        if(nv_satellite == nullptr)
        {
            nv_satellite = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::NvSatellite>();
        }
        return nv_satellite;
    }

    if(child_yang_name == "bridge-domain-pbb")
    {
        if(bridge_domain_pbb == nullptr)
        {
            bridge_domain_pbb = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb>();
        }
        return bridge_domain_pbb;
    }

    if(child_yang_name == "bridge-domain-evis")
    {
        if(bridge_domain_evis == nullptr)
        {
            bridge_domain_evis = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainEvis>();
        }
        return bridge_domain_evis;
    }

    if(child_yang_name == "access-vfis")
    {
        if(access_vfis == nullptr)
        {
            access_vfis = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis>();
        }
        return access_vfis;
    }

    if(child_yang_name == "bd-pseudowires")
    {
        if(bd_pseudowires == nullptr)
        {
            bd_pseudowires = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires>();
        }
        return bd_pseudowires;
    }

    if(child_yang_name == "vfis")
    {
        if(vfis == nullptr)
        {
            vfis = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis>();
        }
        return vfis;
    }

    if(child_yang_name == "bridge-domainvnis")
    {
        if(bridge_domainvnis == nullptr)
        {
            bridge_domainvnis = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainvnis>();
        }
        return bridge_domainvnis;
    }

    if(child_yang_name == "bd-attachment-circuits")
    {
        if(bd_attachment_circuits == nullptr)
        {
            bd_attachment_circuits = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits>();
        }
        return bd_attachment_circuits;
    }

    if(child_yang_name == "bd-pseudowire-evpns")
    {
        if(bd_pseudowire_evpns == nullptr)
        {
            bd_pseudowire_evpns = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowireEvpns>();
        }
        return bd_pseudowire_evpns;
    }

    if(child_yang_name == "ip-source-guard")
    {
        if(ip_source_guard == nullptr)
        {
            ip_source_guard = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::IpSourceGuard>();
        }
        return ip_source_guard;
    }

    if(child_yang_name == "dai")
    {
        if(dai == nullptr)
        {
            dai = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Dai>();
        }
        return dai;
    }

    if(child_yang_name == "routed-interfaces")
    {
        if(routed_interfaces == nullptr)
        {
            routed_interfaces = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::RoutedInterfaces>();
        }
        return routed_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bd_storm_controls != nullptr)
    {
        _children["bd-storm-controls"] = bd_storm_controls;
    }

    if(member_vnis != nullptr)
    {
        _children["member-vnis"] = member_vnis;
    }

    if(bridge_domain_mac != nullptr)
    {
        _children["bridge-domain-mac"] = bridge_domain_mac;
    }

    if(nv_satellite != nullptr)
    {
        _children["nv-satellite"] = nv_satellite;
    }

    if(bridge_domain_pbb != nullptr)
    {
        _children["bridge-domain-pbb"] = bridge_domain_pbb;
    }

    if(bridge_domain_evis != nullptr)
    {
        _children["bridge-domain-evis"] = bridge_domain_evis;
    }

    if(access_vfis != nullptr)
    {
        _children["access-vfis"] = access_vfis;
    }

    if(bd_pseudowires != nullptr)
    {
        _children["bd-pseudowires"] = bd_pseudowires;
    }

    if(vfis != nullptr)
    {
        _children["vfis"] = vfis;
    }

    if(bridge_domainvnis != nullptr)
    {
        _children["bridge-domainvnis"] = bridge_domainvnis;
    }

    if(bd_attachment_circuits != nullptr)
    {
        _children["bd-attachment-circuits"] = bd_attachment_circuits;
    }

    if(bd_pseudowire_evpns != nullptr)
    {
        _children["bd-pseudowire-evpns"] = bd_pseudowire_evpns;
    }

    if(ip_source_guard != nullptr)
    {
        _children["ip-source-guard"] = ip_source_guard;
    }

    if(dai != nullptr)
    {
        _children["dai"] = dai;
    }

    if(routed_interfaces != nullptr)
    {
        _children["routed-interfaces"] = routed_interfaces;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coupled-mode")
    {
        coupled_mode = value;
        coupled_mode.value_namespace = name_space;
        coupled_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-unknown-unicast")
    {
        flooding_unknown_unicast = value;
        flooding_unknown_unicast.value_namespace = name_space;
        flooding_unknown_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-snooping-disable")
    {
        igmp_snooping_disable = value;
        igmp_snooping_disable.value_namespace = name_space;
        igmp_snooping_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-mode")
    {
        transport_mode = value;
        transport_mode.value_namespace = name_space;
        transport_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-snooping")
    {
        mld_snooping = value;
        mld_snooping.value_namespace = name_space;
        mld_snooping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-mtu")
    {
        bridge_domain_mtu = value;
        bridge_domain_mtu.value_namespace = name_space;
        bridge_domain_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-description")
    {
        bridge_description = value;
        bridge_description.value_namespace = name_space;
        bridge_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-snooping")
    {
        igmp_snooping = value;
        igmp_snooping.value_namespace = name_space;
        igmp_snooping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding")
    {
        flooding = value;
        flooding.value_namespace = name_space;
        flooding.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "coupled-mode")
    {
        coupled_mode.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "flooding-unknown-unicast")
    {
        flooding_unknown_unicast.yfilter = yfilter;
    }
    if(value_path == "igmp-snooping-disable")
    {
        igmp_snooping_disable.yfilter = yfilter;
    }
    if(value_path == "transport-mode")
    {
        transport_mode.yfilter = yfilter;
    }
    if(value_path == "mld-snooping")
    {
        mld_snooping.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-mtu")
    {
        bridge_domain_mtu.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "bridge-description")
    {
        bridge_description.yfilter = yfilter;
    }
    if(value_path == "igmp-snooping")
    {
        igmp_snooping.yfilter = yfilter;
    }
    if(value_path == "flooding")
    {
        flooding.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-storm-controls" || name == "member-vnis" || name == "bridge-domain-mac" || name == "nv-satellite" || name == "bridge-domain-pbb" || name == "bridge-domain-evis" || name == "access-vfis" || name == "bd-pseudowires" || name == "vfis" || name == "bridge-domainvnis" || name == "bd-attachment-circuits" || name == "bd-pseudowire-evpns" || name == "ip-source-guard" || name == "dai" || name == "routed-interfaces" || name == "name" || name == "coupled-mode" || name == "shutdown" || name == "flooding-unknown-unicast" || name == "igmp-snooping-disable" || name == "transport-mode" || name == "mld-snooping" || name == "bridge-domain-mtu" || name == "dhcp" || name == "bridge-description" || name == "igmp-snooping" || name == "flooding")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::BdStormControls()
    :
    bd_storm_control(this, {"sctype"})
{

    yang_name = "bd-storm-controls"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::~BdStormControls()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bd_storm_control.len(); index++)
    {
        if(bd_storm_control[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::has_operation() const
{
    for (std::size_t index=0; index<bd_storm_control.len(); index++)
    {
        if(bd_storm_control[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-storm-controls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-storm-control")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl>();
        ent_->parent = this;
        bd_storm_control.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bd_storm_control.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-storm-control")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::BdStormControl()
    :
    sctype{YType::enumeration, "sctype"}
        ,
    storm_control_unit(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit>())
{
    storm_control_unit->parent = this;

    yang_name = "bd-storm-control"; yang_parent_name = "bd-storm-controls"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::~BdStormControl()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::has_data() const
{
    if (is_presence_container) return true;
    return sctype.is_set
	|| (storm_control_unit !=  nullptr && storm_control_unit->has_data());
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sctype.yfilter)
	|| (storm_control_unit !=  nullptr && storm_control_unit->has_operation());
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-storm-control";
    ADD_KEY_TOKEN(sctype, "sctype");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sctype.is_set || is_set(sctype.yfilter)) leaf_name_data.push_back(sctype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "storm-control-unit")
    {
        if(storm_control_unit == nullptr)
        {
            storm_control_unit = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit>();
        }
        return storm_control_unit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(storm_control_unit != nullptr)
    {
        _children["storm-control-unit"] = storm_control_unit;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sctype")
    {
        sctype = value;
        sctype.value_namespace = name_space;
        sctype.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sctype")
    {
        sctype.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "storm-control-unit" || name == "sctype")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::StormControlUnit()
    :
    kbits_per_sec{YType::uint32, "kbits-per-sec"},
    pkts_per_sec{YType::uint32, "pkts-per-sec"}
{

    yang_name = "storm-control-unit"; yang_parent_name = "bd-storm-control"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::~StormControlUnit()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::has_data() const
{
    if (is_presence_container) return true;
    return kbits_per_sec.is_set
	|| pkts_per_sec.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kbits_per_sec.yfilter)
	|| ydk::is_set(pkts_per_sec.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control-unit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kbits_per_sec.is_set || is_set(kbits_per_sec.yfilter)) leaf_name_data.push_back(kbits_per_sec.get_name_leafdata());
    if (pkts_per_sec.is_set || is_set(pkts_per_sec.yfilter)) leaf_name_data.push_back(pkts_per_sec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kbits-per-sec" || name == "pkts-per-sec")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVnis()
    :
    member_vni(this, {"vni"})
{

    yang_name = "member-vnis"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::~MemberVnis()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<member_vni.len(); index++)
    {
        if(member_vni[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::has_operation() const
{
    for (std::size_t index=0; index<member_vni.len(); index++)
    {
        if(member_vni[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-vnis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-vni")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni>();
        ent_->parent = this;
        member_vni.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : member_vni.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-vni")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVni()
    :
    vni{YType::uint32, "vni"}
        ,
    member_vni_static_mac_addresses(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses>())
{
    member_vni_static_mac_addresses->parent = this;

    yang_name = "member-vni"; yang_parent_name = "member-vnis"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::~MemberVni()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::has_data() const
{
    if (is_presence_container) return true;
    return vni.is_set
	|| (member_vni_static_mac_addresses !=  nullptr && member_vni_static_mac_addresses->has_data());
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vni.yfilter)
	|| (member_vni_static_mac_addresses !=  nullptr && member_vni_static_mac_addresses->has_operation());
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-vni";
    ADD_KEY_TOKEN(vni, "vni");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-vni-static-mac-addresses")
    {
        if(member_vni_static_mac_addresses == nullptr)
        {
            member_vni_static_mac_addresses = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses>();
        }
        return member_vni_static_mac_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(member_vni_static_mac_addresses != nullptr)
    {
        _children["member-vni-static-mac-addresses"] = member_vni_static_mac_addresses;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-vni-static-mac-addresses" || name == "vni")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddresses()
    :
    member_vni_static_mac_address(this, {"mac_address"})
{

    yang_name = "member-vni-static-mac-addresses"; yang_parent_name = "member-vni"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::~MemberVniStaticMacAddresses()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<member_vni_static_mac_address.len(); index++)
    {
        if(member_vni_static_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::has_operation() const
{
    for (std::size_t index=0; index<member_vni_static_mac_address.len(); index++)
    {
        if(member_vni_static_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-vni-static-mac-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-vni-static-mac-address")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress>();
        ent_->parent = this;
        member_vni_static_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : member_vni_static_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-vni-static-mac-address")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::MemberVniStaticMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    next_hop_ip{YType::str, "next-hop-ip"}
{

    yang_name = "member-vni-static-mac-address"; yang_parent_name = "member-vni-static-mac-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::~MemberVniStaticMacAddress()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| next_hop_ip.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(next_hop_ip.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-vni-static-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (next_hop_ip.is_set || is_set(next_hop_ip.yfilter)) leaf_name_data.push_back(next_hop_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip = value;
        next_hop_ip.value_namespace = name_space;
        next_hop_ip.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "next-hop-ip")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BridgeDomainMac()
    :
    bd_mac_withdraw_relay{YType::empty, "bd-mac-withdraw-relay"},
    bd_mac_withdraw_access_pw_disable{YType::empty, "bd-mac-withdraw-access-pw-disable"},
    bd_mac_port_down_flush{YType::empty, "bd-mac-port-down-flush"},
    bd_mac_withdraw{YType::empty, "bd-mac-withdraw"},
    bd_mac_withdraw_behavior{YType::enumeration, "bd-mac-withdraw-behavior"},
    bd_mac_learn{YType::enumeration, "bd-mac-learn"}
        ,
    bd_mac_limit(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit>())
    , bd_mac_filters(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters>())
    , mac_secure(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure>())
    , bd_mac_aging(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging>())
{
    bd_mac_limit->parent = this;
    bd_mac_filters->parent = this;
    mac_secure->parent = this;
    bd_mac_aging->parent = this;

    yang_name = "bridge-domain-mac"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::~BridgeDomainMac()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::has_data() const
{
    if (is_presence_container) return true;
    return bd_mac_withdraw_relay.is_set
	|| bd_mac_withdraw_access_pw_disable.is_set
	|| bd_mac_port_down_flush.is_set
	|| bd_mac_withdraw.is_set
	|| bd_mac_withdraw_behavior.is_set
	|| bd_mac_learn.is_set
	|| (bd_mac_limit !=  nullptr && bd_mac_limit->has_data())
	|| (bd_mac_filters !=  nullptr && bd_mac_filters->has_data())
	|| (mac_secure !=  nullptr && mac_secure->has_data())
	|| (bd_mac_aging !=  nullptr && bd_mac_aging->has_data());
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_mac_withdraw_relay.yfilter)
	|| ydk::is_set(bd_mac_withdraw_access_pw_disable.yfilter)
	|| ydk::is_set(bd_mac_port_down_flush.yfilter)
	|| ydk::is_set(bd_mac_withdraw.yfilter)
	|| ydk::is_set(bd_mac_withdraw_behavior.yfilter)
	|| ydk::is_set(bd_mac_learn.yfilter)
	|| (bd_mac_limit !=  nullptr && bd_mac_limit->has_operation())
	|| (bd_mac_filters !=  nullptr && bd_mac_filters->has_operation())
	|| (mac_secure !=  nullptr && mac_secure->has_operation())
	|| (bd_mac_aging !=  nullptr && bd_mac_aging->has_operation());
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_mac_withdraw_relay.is_set || is_set(bd_mac_withdraw_relay.yfilter)) leaf_name_data.push_back(bd_mac_withdraw_relay.get_name_leafdata());
    if (bd_mac_withdraw_access_pw_disable.is_set || is_set(bd_mac_withdraw_access_pw_disable.yfilter)) leaf_name_data.push_back(bd_mac_withdraw_access_pw_disable.get_name_leafdata());
    if (bd_mac_port_down_flush.is_set || is_set(bd_mac_port_down_flush.yfilter)) leaf_name_data.push_back(bd_mac_port_down_flush.get_name_leafdata());
    if (bd_mac_withdraw.is_set || is_set(bd_mac_withdraw.yfilter)) leaf_name_data.push_back(bd_mac_withdraw.get_name_leafdata());
    if (bd_mac_withdraw_behavior.is_set || is_set(bd_mac_withdraw_behavior.yfilter)) leaf_name_data.push_back(bd_mac_withdraw_behavior.get_name_leafdata());
    if (bd_mac_learn.is_set || is_set(bd_mac_learn.yfilter)) leaf_name_data.push_back(bd_mac_learn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-mac-limit")
    {
        if(bd_mac_limit == nullptr)
        {
            bd_mac_limit = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit>();
        }
        return bd_mac_limit;
    }

    if(child_yang_name == "bd-mac-filters")
    {
        if(bd_mac_filters == nullptr)
        {
            bd_mac_filters = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters>();
        }
        return bd_mac_filters;
    }

    if(child_yang_name == "mac-secure")
    {
        if(mac_secure == nullptr)
        {
            mac_secure = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure>();
        }
        return mac_secure;
    }

    if(child_yang_name == "bd-mac-aging")
    {
        if(bd_mac_aging == nullptr)
        {
            bd_mac_aging = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging>();
        }
        return bd_mac_aging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bd_mac_limit != nullptr)
    {
        _children["bd-mac-limit"] = bd_mac_limit;
    }

    if(bd_mac_filters != nullptr)
    {
        _children["bd-mac-filters"] = bd_mac_filters;
    }

    if(mac_secure != nullptr)
    {
        _children["mac-secure"] = mac_secure;
    }

    if(bd_mac_aging != nullptr)
    {
        _children["bd-mac-aging"] = bd_mac_aging;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-mac-withdraw-relay")
    {
        bd_mac_withdraw_relay = value;
        bd_mac_withdraw_relay.value_namespace = name_space;
        bd_mac_withdraw_relay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-mac-withdraw-access-pw-disable")
    {
        bd_mac_withdraw_access_pw_disable = value;
        bd_mac_withdraw_access_pw_disable.value_namespace = name_space;
        bd_mac_withdraw_access_pw_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-mac-port-down-flush")
    {
        bd_mac_port_down_flush = value;
        bd_mac_port_down_flush.value_namespace = name_space;
        bd_mac_port_down_flush.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-mac-withdraw")
    {
        bd_mac_withdraw = value;
        bd_mac_withdraw.value_namespace = name_space;
        bd_mac_withdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-mac-withdraw-behavior")
    {
        bd_mac_withdraw_behavior = value;
        bd_mac_withdraw_behavior.value_namespace = name_space;
        bd_mac_withdraw_behavior.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-mac-learn")
    {
        bd_mac_learn = value;
        bd_mac_learn.value_namespace = name_space;
        bd_mac_learn.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-mac-withdraw-relay")
    {
        bd_mac_withdraw_relay.yfilter = yfilter;
    }
    if(value_path == "bd-mac-withdraw-access-pw-disable")
    {
        bd_mac_withdraw_access_pw_disable.yfilter = yfilter;
    }
    if(value_path == "bd-mac-port-down-flush")
    {
        bd_mac_port_down_flush.yfilter = yfilter;
    }
    if(value_path == "bd-mac-withdraw")
    {
        bd_mac_withdraw.yfilter = yfilter;
    }
    if(value_path == "bd-mac-withdraw-behavior")
    {
        bd_mac_withdraw_behavior.yfilter = yfilter;
    }
    if(value_path == "bd-mac-learn")
    {
        bd_mac_learn.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-mac-limit" || name == "bd-mac-filters" || name == "mac-secure" || name == "bd-mac-aging" || name == "bd-mac-withdraw-relay" || name == "bd-mac-withdraw-access-pw-disable" || name == "bd-mac-port-down-flush" || name == "bd-mac-withdraw" || name == "bd-mac-withdraw-behavior" || name == "bd-mac-learn")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::BdMacLimit()
    :
    bd_mac_limit_action{YType::enumeration, "bd-mac-limit-action"},
    bd_mac_limit_notif{YType::enumeration, "bd-mac-limit-notif"},
    bd_mac_limit_max{YType::uint32, "bd-mac-limit-max"}
{

    yang_name = "bd-mac-limit"; yang_parent_name = "bridge-domain-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::~BdMacLimit()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::has_data() const
{
    if (is_presence_container) return true;
    return bd_mac_limit_action.is_set
	|| bd_mac_limit_notif.is_set
	|| bd_mac_limit_max.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_mac_limit_action.yfilter)
	|| ydk::is_set(bd_mac_limit_notif.yfilter)
	|| ydk::is_set(bd_mac_limit_max.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-mac-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_mac_limit_action.is_set || is_set(bd_mac_limit_action.yfilter)) leaf_name_data.push_back(bd_mac_limit_action.get_name_leafdata());
    if (bd_mac_limit_notif.is_set || is_set(bd_mac_limit_notif.yfilter)) leaf_name_data.push_back(bd_mac_limit_notif.get_name_leafdata());
    if (bd_mac_limit_max.is_set || is_set(bd_mac_limit_max.yfilter)) leaf_name_data.push_back(bd_mac_limit_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-mac-limit-action")
    {
        bd_mac_limit_action = value;
        bd_mac_limit_action.value_namespace = name_space;
        bd_mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-mac-limit-notif")
    {
        bd_mac_limit_notif = value;
        bd_mac_limit_notif.value_namespace = name_space;
        bd_mac_limit_notif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-mac-limit-max")
    {
        bd_mac_limit_max = value;
        bd_mac_limit_max.value_namespace = name_space;
        bd_mac_limit_max.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-mac-limit-action")
    {
        bd_mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "bd-mac-limit-notif")
    {
        bd_mac_limit_notif.yfilter = yfilter;
    }
    if(value_path == "bd-mac-limit-max")
    {
        bd_mac_limit_max.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-mac-limit-action" || name == "bd-mac-limit-notif" || name == "bd-mac-limit-max")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilters()
    :
    bd_mac_filter(this, {"address"})
{

    yang_name = "bd-mac-filters"; yang_parent_name = "bridge-domain-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::~BdMacFilters()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bd_mac_filter.len(); index++)
    {
        if(bd_mac_filter[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::has_operation() const
{
    for (std::size_t index=0; index<bd_mac_filter.len(); index++)
    {
        if(bd_mac_filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-mac-filters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-mac-filter")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter>();
        ent_->parent = this;
        bd_mac_filter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bd_mac_filter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-mac-filter")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::BdMacFilter()
    :
    address{YType::str, "address"},
    drop{YType::empty, "drop"}
{

    yang_name = "bd-mac-filter"; yang_parent_name = "bd-mac-filters"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::~BdMacFilter()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| drop.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-mac-filter";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "drop")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::MacSecure()
    :
    logging{YType::empty, "logging"},
    action{YType::enumeration, "action"},
    enable{YType::empty, "enable"},
    threshold{YType::empty, "threshold"}
{

    yang_name = "mac-secure"; yang_parent_name = "bridge-domain-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::~MacSecure()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| action.is_set
	|| enable.is_set
	|| threshold.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-secure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "action" || name == "enable" || name == "threshold")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::BdMacAging()
    :
    bd_mac_aging_type{YType::enumeration, "bd-mac-aging-type"},
    bd_mac_aging_time{YType::uint32, "bd-mac-aging-time"}
{

    yang_name = "bd-mac-aging"; yang_parent_name = "bridge-domain-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::~BdMacAging()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::has_data() const
{
    if (is_presence_container) return true;
    return bd_mac_aging_type.is_set
	|| bd_mac_aging_time.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_mac_aging_type.yfilter)
	|| ydk::is_set(bd_mac_aging_time.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-mac-aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_mac_aging_type.is_set || is_set(bd_mac_aging_type.yfilter)) leaf_name_data.push_back(bd_mac_aging_type.get_name_leafdata());
    if (bd_mac_aging_time.is_set || is_set(bd_mac_aging_time.yfilter)) leaf_name_data.push_back(bd_mac_aging_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-mac-aging-type")
    {
        bd_mac_aging_type = value;
        bd_mac_aging_type.value_namespace = name_space;
        bd_mac_aging_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-mac-aging-time")
    {
        bd_mac_aging_time = value;
        bd_mac_aging_time.value_namespace = name_space;
        bd_mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-mac-aging-type")
    {
        bd_mac_aging_type.yfilter = yfilter;
    }
    if(value_path == "bd-mac-aging-time")
    {
        bd_mac_aging_time.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-mac-aging-type" || name == "bd-mac-aging-time")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::NvSatellite::NvSatellite()
    :
    offload_ipv4_multicast_enable{YType::empty, "offload-ipv4-multicast-enable"},
    enable{YType::empty, "enable"}
{

    yang_name = "nv-satellite"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::NvSatellite::~NvSatellite()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::NvSatellite::has_data() const
{
    if (is_presence_container) return true;
    return offload_ipv4_multicast_enable.is_set
	|| enable.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::NvSatellite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(offload_ipv4_multicast_enable.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::NvSatellite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nv-satellite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::NvSatellite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (offload_ipv4_multicast_enable.is_set || is_set(offload_ipv4_multicast_enable.yfilter)) leaf_name_data.push_back(offload_ipv4_multicast_enable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::NvSatellite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::NvSatellite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::NvSatellite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "offload-ipv4-multicast-enable")
    {
        offload_ipv4_multicast_enable = value;
        offload_ipv4_multicast_enable.value_namespace = name_space;
        offload_ipv4_multicast_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::NvSatellite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "offload-ipv4-multicast-enable")
    {
        offload_ipv4_multicast_enable.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::NvSatellite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "offload-ipv4-multicast-enable" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::BridgeDomainPbb()
    :
    pbb_edges(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges>())
    , pbb_core(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore>())
{
    pbb_edges->parent = this;
    pbb_core->parent = this;

    yang_name = "bridge-domain-pbb"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::~BridgeDomainPbb()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::has_data() const
{
    if (is_presence_container) return true;
    return (pbb_edges !=  nullptr && pbb_edges->has_data())
	|| (pbb_core !=  nullptr && pbb_core->has_data());
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::has_operation() const
{
    return is_set(yfilter)
	|| (pbb_edges !=  nullptr && pbb_edges->has_operation())
	|| (pbb_core !=  nullptr && pbb_core->has_operation());
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-pbb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbb-edges")
    {
        if(pbb_edges == nullptr)
        {
            pbb_edges = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges>();
        }
        return pbb_edges;
    }

    if(child_yang_name == "pbb-core")
    {
        if(pbb_core == nullptr)
        {
            pbb_core = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore>();
        }
        return pbb_core;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pbb_edges != nullptr)
    {
        _children["pbb-edges"] = pbb_edges;
    }

    if(pbb_core != nullptr)
    {
        _children["pbb-core"] = pbb_core;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-edges" || name == "pbb-core")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdges()
    :
    pbb_edge(this, {"isid", "core_bd_name"})
{

    yang_name = "pbb-edges"; yang_parent_name = "bridge-domain-pbb"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::~PbbEdges()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pbb_edge.len(); index++)
    {
        if(pbb_edge[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::has_operation() const
{
    for (std::size_t index=0; index<pbb_edge.len(); index++)
    {
        if(pbb_edge[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbb-edge")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge>();
        ent_->parent = this;
        pbb_edge.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pbb_edge.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-edge")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdge()
    :
    isid{YType::uint32, "isid"},
    core_bd_name{YType::str, "core-bd-name"},
    pbb_edge_igmp_profile{YType::str, "pbb-edge-igmp-profile"},
    unknown_unicast_bmac{YType::str, "unknown-unicast-bmac"}
        ,
    pbb_edge_split_horizon_group(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup>())
    , pbb_static_mac_mappings(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings>())
    , pbb_edge_dhcp_profile(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile>())
    , pbb_edge_mac(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac>())
{
    pbb_edge_split_horizon_group->parent = this;
    pbb_static_mac_mappings->parent = this;
    pbb_edge_dhcp_profile->parent = this;
    pbb_edge_mac->parent = this;

    yang_name = "pbb-edge"; yang_parent_name = "pbb-edges"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::~PbbEdge()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::has_data() const
{
    if (is_presence_container) return true;
    return isid.is_set
	|| core_bd_name.is_set
	|| pbb_edge_igmp_profile.is_set
	|| unknown_unicast_bmac.is_set
	|| (pbb_edge_split_horizon_group !=  nullptr && pbb_edge_split_horizon_group->has_data())
	|| (pbb_static_mac_mappings !=  nullptr && pbb_static_mac_mappings->has_data())
	|| (pbb_edge_dhcp_profile !=  nullptr && pbb_edge_dhcp_profile->has_data())
	|| (pbb_edge_mac !=  nullptr && pbb_edge_mac->has_data());
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isid.yfilter)
	|| ydk::is_set(core_bd_name.yfilter)
	|| ydk::is_set(pbb_edge_igmp_profile.yfilter)
	|| ydk::is_set(unknown_unicast_bmac.yfilter)
	|| (pbb_edge_split_horizon_group !=  nullptr && pbb_edge_split_horizon_group->has_operation())
	|| (pbb_static_mac_mappings !=  nullptr && pbb_static_mac_mappings->has_operation())
	|| (pbb_edge_dhcp_profile !=  nullptr && pbb_edge_dhcp_profile->has_operation())
	|| (pbb_edge_mac !=  nullptr && pbb_edge_mac->has_operation());
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge";
    ADD_KEY_TOKEN(isid, "isid");
    ADD_KEY_TOKEN(core_bd_name, "core-bd-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isid.is_set || is_set(isid.yfilter)) leaf_name_data.push_back(isid.get_name_leafdata());
    if (core_bd_name.is_set || is_set(core_bd_name.yfilter)) leaf_name_data.push_back(core_bd_name.get_name_leafdata());
    if (pbb_edge_igmp_profile.is_set || is_set(pbb_edge_igmp_profile.yfilter)) leaf_name_data.push_back(pbb_edge_igmp_profile.get_name_leafdata());
    if (unknown_unicast_bmac.is_set || is_set(unknown_unicast_bmac.yfilter)) leaf_name_data.push_back(unknown_unicast_bmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbb-edge-split-horizon-group")
    {
        if(pbb_edge_split_horizon_group == nullptr)
        {
            pbb_edge_split_horizon_group = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup>();
        }
        return pbb_edge_split_horizon_group;
    }

    if(child_yang_name == "pbb-static-mac-mappings")
    {
        if(pbb_static_mac_mappings == nullptr)
        {
            pbb_static_mac_mappings = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings>();
        }
        return pbb_static_mac_mappings;
    }

    if(child_yang_name == "pbb-edge-dhcp-profile")
    {
        if(pbb_edge_dhcp_profile == nullptr)
        {
            pbb_edge_dhcp_profile = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile>();
        }
        return pbb_edge_dhcp_profile;
    }

    if(child_yang_name == "pbb-edge-mac")
    {
        if(pbb_edge_mac == nullptr)
        {
            pbb_edge_mac = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac>();
        }
        return pbb_edge_mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pbb_edge_split_horizon_group != nullptr)
    {
        _children["pbb-edge-split-horizon-group"] = pbb_edge_split_horizon_group;
    }

    if(pbb_static_mac_mappings != nullptr)
    {
        _children["pbb-static-mac-mappings"] = pbb_static_mac_mappings;
    }

    if(pbb_edge_dhcp_profile != nullptr)
    {
        _children["pbb-edge-dhcp-profile"] = pbb_edge_dhcp_profile;
    }

    if(pbb_edge_mac != nullptr)
    {
        _children["pbb-edge-mac"] = pbb_edge_mac;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isid")
    {
        isid = value;
        isid.value_namespace = name_space;
        isid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-bd-name")
    {
        core_bd_name = value;
        core_bd_name.value_namespace = name_space;
        core_bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-edge-igmp-profile")
    {
        pbb_edge_igmp_profile = value;
        pbb_edge_igmp_profile.value_namespace = name_space;
        pbb_edge_igmp_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-unicast-bmac")
    {
        unknown_unicast_bmac = value;
        unknown_unicast_bmac.value_namespace = name_space;
        unknown_unicast_bmac.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isid")
    {
        isid.yfilter = yfilter;
    }
    if(value_path == "core-bd-name")
    {
        core_bd_name.yfilter = yfilter;
    }
    if(value_path == "pbb-edge-igmp-profile")
    {
        pbb_edge_igmp_profile.yfilter = yfilter;
    }
    if(value_path == "unknown-unicast-bmac")
    {
        unknown_unicast_bmac.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-edge-split-horizon-group" || name == "pbb-static-mac-mappings" || name == "pbb-edge-dhcp-profile" || name == "pbb-edge-mac" || name == "isid" || name == "core-bd-name" || name == "pbb-edge-igmp-profile" || name == "unknown-unicast-bmac")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::PbbEdgeSplitHorizonGroup()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "pbb-edge-split-horizon-group"; yang_parent_name = "pbb-edge"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::~PbbEdgeSplitHorizonGroup()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge-split-horizon-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMappings()
    :
    pbb_static_mac_mapping(this, {"address"})
{

    yang_name = "pbb-static-mac-mappings"; yang_parent_name = "pbb-edge"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::~PbbStaticMacMappings()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pbb_static_mac_mapping.len(); index++)
    {
        if(pbb_static_mac_mapping[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::has_operation() const
{
    for (std::size_t index=0; index<pbb_static_mac_mapping.len(); index++)
    {
        if(pbb_static_mac_mapping[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-static-mac-mappings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbb-static-mac-mapping")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping>();
        ent_->parent = this;
        pbb_static_mac_mapping.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pbb_static_mac_mapping.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-static-mac-mapping")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::PbbStaticMacMapping()
    :
    address{YType::str, "address"},
    pbb_static_mac_mapping_bmac{YType::str, "pbb-static-mac-mapping-bmac"}
{

    yang_name = "pbb-static-mac-mapping"; yang_parent_name = "pbb-static-mac-mappings"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::~PbbStaticMacMapping()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| pbb_static_mac_mapping_bmac.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(pbb_static_mac_mapping_bmac.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-static-mac-mapping";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (pbb_static_mac_mapping_bmac.is_set || is_set(pbb_static_mac_mapping_bmac.yfilter)) leaf_name_data.push_back(pbb_static_mac_mapping_bmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-static-mac-mapping-bmac")
    {
        pbb_static_mac_mapping_bmac = value;
        pbb_static_mac_mapping_bmac.value_namespace = name_space;
        pbb_static_mac_mapping_bmac.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "pbb-static-mac-mapping-bmac")
    {
        pbb_static_mac_mapping_bmac.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "pbb-static-mac-mapping-bmac")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::PbbEdgeDhcpProfile()
    :
    profile_id{YType::enumeration, "profile-id"},
    dhcp_snooping_id{YType::str, "dhcp-snooping-id"}
{

    yang_name = "pbb-edge-dhcp-profile"; yang_parent_name = "pbb-edge"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::~PbbEdgeDhcpProfile()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::has_data() const
{
    if (is_presence_container) return true;
    return profile_id.is_set
	|| dhcp_snooping_id.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_id.yfilter)
	|| ydk::is_set(dhcp_snooping_id.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge-dhcp-profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_id.is_set || is_set(profile_id.yfilter)) leaf_name_data.push_back(profile_id.get_name_leafdata());
    if (dhcp_snooping_id.is_set || is_set(dhcp_snooping_id.yfilter)) leaf_name_data.push_back(dhcp_snooping_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-id" || name == "dhcp-snooping-id")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMac()
    :
    pbb_edge_mac_learning{YType::enumeration, "pbb-edge-mac-learning"}
        ,
    pbb_edge_mac_limit(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit>())
    , pbb_edge_mac_aging(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging>())
    , pbb_edge_mac_secure(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure>())
{
    pbb_edge_mac_limit->parent = this;
    pbb_edge_mac_aging->parent = this;
    pbb_edge_mac_secure->parent = this;

    yang_name = "pbb-edge-mac"; yang_parent_name = "pbb-edge"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::~PbbEdgeMac()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::has_data() const
{
    if (is_presence_container) return true;
    return pbb_edge_mac_learning.is_set
	|| (pbb_edge_mac_limit !=  nullptr && pbb_edge_mac_limit->has_data())
	|| (pbb_edge_mac_aging !=  nullptr && pbb_edge_mac_aging->has_data())
	|| (pbb_edge_mac_secure !=  nullptr && pbb_edge_mac_secure->has_data());
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_edge_mac_learning.yfilter)
	|| (pbb_edge_mac_limit !=  nullptr && pbb_edge_mac_limit->has_operation())
	|| (pbb_edge_mac_aging !=  nullptr && pbb_edge_mac_aging->has_operation())
	|| (pbb_edge_mac_secure !=  nullptr && pbb_edge_mac_secure->has_operation());
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_edge_mac_learning.is_set || is_set(pbb_edge_mac_learning.yfilter)) leaf_name_data.push_back(pbb_edge_mac_learning.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbb-edge-mac-limit")
    {
        if(pbb_edge_mac_limit == nullptr)
        {
            pbb_edge_mac_limit = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit>();
        }
        return pbb_edge_mac_limit;
    }

    if(child_yang_name == "pbb-edge-mac-aging")
    {
        if(pbb_edge_mac_aging == nullptr)
        {
            pbb_edge_mac_aging = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging>();
        }
        return pbb_edge_mac_aging;
    }

    if(child_yang_name == "pbb-edge-mac-secure")
    {
        if(pbb_edge_mac_secure == nullptr)
        {
            pbb_edge_mac_secure = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure>();
        }
        return pbb_edge_mac_secure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pbb_edge_mac_limit != nullptr)
    {
        _children["pbb-edge-mac-limit"] = pbb_edge_mac_limit;
    }

    if(pbb_edge_mac_aging != nullptr)
    {
        _children["pbb-edge-mac-aging"] = pbb_edge_mac_aging;
    }

    if(pbb_edge_mac_secure != nullptr)
    {
        _children["pbb-edge-mac-secure"] = pbb_edge_mac_secure;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-edge-mac-learning")
    {
        pbb_edge_mac_learning = value;
        pbb_edge_mac_learning.value_namespace = name_space;
        pbb_edge_mac_learning.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-edge-mac-learning")
    {
        pbb_edge_mac_learning.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-edge-mac-limit" || name == "pbb-edge-mac-aging" || name == "pbb-edge-mac-secure" || name == "pbb-edge-mac-learning")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::PbbEdgeMacLimit()
    :
    pbb_edge_mac_limit_action{YType::enumeration, "pbb-edge-mac-limit-action"},
    pbb_edge_mac_limit_max{YType::uint32, "pbb-edge-mac-limit-max"},
    pbb_edge_mac_limit_notif{YType::enumeration, "pbb-edge-mac-limit-notif"}
{

    yang_name = "pbb-edge-mac-limit"; yang_parent_name = "pbb-edge-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::~PbbEdgeMacLimit()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::has_data() const
{
    if (is_presence_container) return true;
    return pbb_edge_mac_limit_action.is_set
	|| pbb_edge_mac_limit_max.is_set
	|| pbb_edge_mac_limit_notif.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_edge_mac_limit_action.yfilter)
	|| ydk::is_set(pbb_edge_mac_limit_max.yfilter)
	|| ydk::is_set(pbb_edge_mac_limit_notif.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge-mac-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_edge_mac_limit_action.is_set || is_set(pbb_edge_mac_limit_action.yfilter)) leaf_name_data.push_back(pbb_edge_mac_limit_action.get_name_leafdata());
    if (pbb_edge_mac_limit_max.is_set || is_set(pbb_edge_mac_limit_max.yfilter)) leaf_name_data.push_back(pbb_edge_mac_limit_max.get_name_leafdata());
    if (pbb_edge_mac_limit_notif.is_set || is_set(pbb_edge_mac_limit_notif.yfilter)) leaf_name_data.push_back(pbb_edge_mac_limit_notif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-edge-mac-limit-action")
    {
        pbb_edge_mac_limit_action = value;
        pbb_edge_mac_limit_action.value_namespace = name_space;
        pbb_edge_mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-edge-mac-limit-max")
    {
        pbb_edge_mac_limit_max = value;
        pbb_edge_mac_limit_max.value_namespace = name_space;
        pbb_edge_mac_limit_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-edge-mac-limit-notif")
    {
        pbb_edge_mac_limit_notif = value;
        pbb_edge_mac_limit_notif.value_namespace = name_space;
        pbb_edge_mac_limit_notif.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-edge-mac-limit-action")
    {
        pbb_edge_mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "pbb-edge-mac-limit-max")
    {
        pbb_edge_mac_limit_max.yfilter = yfilter;
    }
    if(value_path == "pbb-edge-mac-limit-notif")
    {
        pbb_edge_mac_limit_notif.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-edge-mac-limit-action" || name == "pbb-edge-mac-limit-max" || name == "pbb-edge-mac-limit-notif")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::PbbEdgeMacAging()
    :
    pbb_edge_mac_aging_type{YType::enumeration, "pbb-edge-mac-aging-type"},
    pbb_edge_mac_aging_time{YType::uint32, "pbb-edge-mac-aging-time"}
{

    yang_name = "pbb-edge-mac-aging"; yang_parent_name = "pbb-edge-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::~PbbEdgeMacAging()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::has_data() const
{
    if (is_presence_container) return true;
    return pbb_edge_mac_aging_type.is_set
	|| pbb_edge_mac_aging_time.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_edge_mac_aging_type.yfilter)
	|| ydk::is_set(pbb_edge_mac_aging_time.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge-mac-aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_edge_mac_aging_type.is_set || is_set(pbb_edge_mac_aging_type.yfilter)) leaf_name_data.push_back(pbb_edge_mac_aging_type.get_name_leafdata());
    if (pbb_edge_mac_aging_time.is_set || is_set(pbb_edge_mac_aging_time.yfilter)) leaf_name_data.push_back(pbb_edge_mac_aging_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-edge-mac-aging-type")
    {
        pbb_edge_mac_aging_type = value;
        pbb_edge_mac_aging_type.value_namespace = name_space;
        pbb_edge_mac_aging_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-edge-mac-aging-time")
    {
        pbb_edge_mac_aging_time = value;
        pbb_edge_mac_aging_time.value_namespace = name_space;
        pbb_edge_mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-edge-mac-aging-type")
    {
        pbb_edge_mac_aging_type.yfilter = yfilter;
    }
    if(value_path == "pbb-edge-mac-aging-time")
    {
        pbb_edge_mac_aging_time.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-edge-mac-aging-type" || name == "pbb-edge-mac-aging-time")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::PbbEdgeMacSecure()
    :
    logging{YType::enumeration, "logging"},
    disable{YType::empty, "disable"},
    action{YType::enumeration, "action"},
    enable{YType::empty, "enable"},
    accept_shutdown{YType::empty, "accept-shutdown"}
{

    yang_name = "pbb-edge-mac-secure"; yang_parent_name = "pbb-edge-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::~PbbEdgeMacSecure()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| disable.is_set
	|| action.is_set
	|| enable.is_set
	|| accept_shutdown.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(accept_shutdown.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge-mac-secure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (accept_shutdown.is_set || is_set(accept_shutdown.yfilter)) leaf_name_data.push_back(accept_shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "accept-shutdown")
    {
        accept_shutdown = value;
        accept_shutdown.value_namespace = name_space;
        accept_shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "accept-shutdown")
    {
        accept_shutdown.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "disable" || name == "action" || name == "enable" || name == "accept-shutdown")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCore()
    :
    pbb_core_mmrp_flood_optimization{YType::empty, "pbb-core-mmrp-flood-optimization"},
    vlan_id{YType::uint32, "vlan-id"},
    pbb_core_igmp_profile{YType::str, "pbb-core-igmp-profile"},
    enable{YType::empty, "enable"}
        ,
    pbb_core_mac(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac>())
    , pbb_core_evis(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis>())
    , pbb_core_dhcp_profile(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile>())
{
    pbb_core_mac->parent = this;
    pbb_core_evis->parent = this;
    pbb_core_dhcp_profile->parent = this;

    yang_name = "pbb-core"; yang_parent_name = "bridge-domain-pbb"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::~PbbCore()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::has_data() const
{
    if (is_presence_container) return true;
    return pbb_core_mmrp_flood_optimization.is_set
	|| vlan_id.is_set
	|| pbb_core_igmp_profile.is_set
	|| enable.is_set
	|| (pbb_core_mac !=  nullptr && pbb_core_mac->has_data())
	|| (pbb_core_evis !=  nullptr && pbb_core_evis->has_data())
	|| (pbb_core_dhcp_profile !=  nullptr && pbb_core_dhcp_profile->has_data());
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_core_mmrp_flood_optimization.yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(pbb_core_igmp_profile.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (pbb_core_mac !=  nullptr && pbb_core_mac->has_operation())
	|| (pbb_core_evis !=  nullptr && pbb_core_evis->has_operation())
	|| (pbb_core_dhcp_profile !=  nullptr && pbb_core_dhcp_profile->has_operation());
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_core_mmrp_flood_optimization.is_set || is_set(pbb_core_mmrp_flood_optimization.yfilter)) leaf_name_data.push_back(pbb_core_mmrp_flood_optimization.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (pbb_core_igmp_profile.is_set || is_set(pbb_core_igmp_profile.yfilter)) leaf_name_data.push_back(pbb_core_igmp_profile.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbb-core-mac")
    {
        if(pbb_core_mac == nullptr)
        {
            pbb_core_mac = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac>();
        }
        return pbb_core_mac;
    }

    if(child_yang_name == "pbb-core-evis")
    {
        if(pbb_core_evis == nullptr)
        {
            pbb_core_evis = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis>();
        }
        return pbb_core_evis;
    }

    if(child_yang_name == "pbb-core-dhcp-profile")
    {
        if(pbb_core_dhcp_profile == nullptr)
        {
            pbb_core_dhcp_profile = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile>();
        }
        return pbb_core_dhcp_profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pbb_core_mac != nullptr)
    {
        _children["pbb-core-mac"] = pbb_core_mac;
    }

    if(pbb_core_evis != nullptr)
    {
        _children["pbb-core-evis"] = pbb_core_evis;
    }

    if(pbb_core_dhcp_profile != nullptr)
    {
        _children["pbb-core-dhcp-profile"] = pbb_core_dhcp_profile;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-core-mmrp-flood-optimization")
    {
        pbb_core_mmrp_flood_optimization = value;
        pbb_core_mmrp_flood_optimization.value_namespace = name_space;
        pbb_core_mmrp_flood_optimization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-core-igmp-profile")
    {
        pbb_core_igmp_profile = value;
        pbb_core_igmp_profile.value_namespace = name_space;
        pbb_core_igmp_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-core-mmrp-flood-optimization")
    {
        pbb_core_mmrp_flood_optimization.yfilter = yfilter;
    }
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "pbb-core-igmp-profile")
    {
        pbb_core_igmp_profile.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-core-mac" || name == "pbb-core-evis" || name == "pbb-core-dhcp-profile" || name == "pbb-core-mmrp-flood-optimization" || name == "vlan-id" || name == "pbb-core-igmp-profile" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMac()
    :
    pbb_core_mac_learning{YType::enumeration, "pbb-core-mac-learning"}
        ,
    pbb_core_mac_aging(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging>())
    , pbb_core_mac_limit(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit>())
{
    pbb_core_mac_aging->parent = this;
    pbb_core_mac_limit->parent = this;

    yang_name = "pbb-core-mac"; yang_parent_name = "pbb-core"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::~PbbCoreMac()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::has_data() const
{
    if (is_presence_container) return true;
    return pbb_core_mac_learning.is_set
	|| (pbb_core_mac_aging !=  nullptr && pbb_core_mac_aging->has_data())
	|| (pbb_core_mac_limit !=  nullptr && pbb_core_mac_limit->has_data());
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_core_mac_learning.yfilter)
	|| (pbb_core_mac_aging !=  nullptr && pbb_core_mac_aging->has_operation())
	|| (pbb_core_mac_limit !=  nullptr && pbb_core_mac_limit->has_operation());
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_core_mac_learning.is_set || is_set(pbb_core_mac_learning.yfilter)) leaf_name_data.push_back(pbb_core_mac_learning.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbb-core-mac-aging")
    {
        if(pbb_core_mac_aging == nullptr)
        {
            pbb_core_mac_aging = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging>();
        }
        return pbb_core_mac_aging;
    }

    if(child_yang_name == "pbb-core-mac-limit")
    {
        if(pbb_core_mac_limit == nullptr)
        {
            pbb_core_mac_limit = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit>();
        }
        return pbb_core_mac_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pbb_core_mac_aging != nullptr)
    {
        _children["pbb-core-mac-aging"] = pbb_core_mac_aging;
    }

    if(pbb_core_mac_limit != nullptr)
    {
        _children["pbb-core-mac-limit"] = pbb_core_mac_limit;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-core-mac-learning")
    {
        pbb_core_mac_learning = value;
        pbb_core_mac_learning.value_namespace = name_space;
        pbb_core_mac_learning.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-core-mac-learning")
    {
        pbb_core_mac_learning.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-core-mac-aging" || name == "pbb-core-mac-limit" || name == "pbb-core-mac-learning")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::PbbCoreMacAging()
    :
    pbb_core_mac_aging_type{YType::enumeration, "pbb-core-mac-aging-type"},
    pbb_core_mac_aging_time{YType::uint32, "pbb-core-mac-aging-time"}
{

    yang_name = "pbb-core-mac-aging"; yang_parent_name = "pbb-core-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::~PbbCoreMacAging()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::has_data() const
{
    if (is_presence_container) return true;
    return pbb_core_mac_aging_type.is_set
	|| pbb_core_mac_aging_time.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_core_mac_aging_type.yfilter)
	|| ydk::is_set(pbb_core_mac_aging_time.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core-mac-aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_core_mac_aging_type.is_set || is_set(pbb_core_mac_aging_type.yfilter)) leaf_name_data.push_back(pbb_core_mac_aging_type.get_name_leafdata());
    if (pbb_core_mac_aging_time.is_set || is_set(pbb_core_mac_aging_time.yfilter)) leaf_name_data.push_back(pbb_core_mac_aging_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-core-mac-aging-type")
    {
        pbb_core_mac_aging_type = value;
        pbb_core_mac_aging_type.value_namespace = name_space;
        pbb_core_mac_aging_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-core-mac-aging-time")
    {
        pbb_core_mac_aging_time = value;
        pbb_core_mac_aging_time.value_namespace = name_space;
        pbb_core_mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-core-mac-aging-type")
    {
        pbb_core_mac_aging_type.yfilter = yfilter;
    }
    if(value_path == "pbb-core-mac-aging-time")
    {
        pbb_core_mac_aging_time.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-core-mac-aging-type" || name == "pbb-core-mac-aging-time")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::PbbCoreMacLimit()
    :
    pbb_core_mac_limit_max{YType::uint32, "pbb-core-mac-limit-max"},
    pbb_core_mac_limit_notif{YType::enumeration, "pbb-core-mac-limit-notif"},
    pbb_core_mac_limit_action{YType::enumeration, "pbb-core-mac-limit-action"}
{

    yang_name = "pbb-core-mac-limit"; yang_parent_name = "pbb-core-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::~PbbCoreMacLimit()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::has_data() const
{
    if (is_presence_container) return true;
    return pbb_core_mac_limit_max.is_set
	|| pbb_core_mac_limit_notif.is_set
	|| pbb_core_mac_limit_action.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_core_mac_limit_max.yfilter)
	|| ydk::is_set(pbb_core_mac_limit_notif.yfilter)
	|| ydk::is_set(pbb_core_mac_limit_action.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core-mac-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_core_mac_limit_max.is_set || is_set(pbb_core_mac_limit_max.yfilter)) leaf_name_data.push_back(pbb_core_mac_limit_max.get_name_leafdata());
    if (pbb_core_mac_limit_notif.is_set || is_set(pbb_core_mac_limit_notif.yfilter)) leaf_name_data.push_back(pbb_core_mac_limit_notif.get_name_leafdata());
    if (pbb_core_mac_limit_action.is_set || is_set(pbb_core_mac_limit_action.yfilter)) leaf_name_data.push_back(pbb_core_mac_limit_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-core-mac-limit-max")
    {
        pbb_core_mac_limit_max = value;
        pbb_core_mac_limit_max.value_namespace = name_space;
        pbb_core_mac_limit_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-core-mac-limit-notif")
    {
        pbb_core_mac_limit_notif = value;
        pbb_core_mac_limit_notif.value_namespace = name_space;
        pbb_core_mac_limit_notif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-core-mac-limit-action")
    {
        pbb_core_mac_limit_action = value;
        pbb_core_mac_limit_action.value_namespace = name_space;
        pbb_core_mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-core-mac-limit-max")
    {
        pbb_core_mac_limit_max.yfilter = yfilter;
    }
    if(value_path == "pbb-core-mac-limit-notif")
    {
        pbb_core_mac_limit_notif.yfilter = yfilter;
    }
    if(value_path == "pbb-core-mac-limit-action")
    {
        pbb_core_mac_limit_action.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-core-mac-limit-max" || name == "pbb-core-mac-limit-notif" || name == "pbb-core-mac-limit-action")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvis()
    :
    pbb_core_evi(this, {"eviid"})
{

    yang_name = "pbb-core-evis"; yang_parent_name = "pbb-core"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::~PbbCoreEvis()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pbb_core_evi.len(); index++)
    {
        if(pbb_core_evi[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::has_operation() const
{
    for (std::size_t index=0; index<pbb_core_evi.len(); index++)
    {
        if(pbb_core_evi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core-evis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbb-core-evi")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi>();
        ent_->parent = this;
        pbb_core_evi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pbb_core_evi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-core-evi")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::PbbCoreEvi()
    :
    eviid{YType::uint32, "eviid"}
{

    yang_name = "pbb-core-evi"; yang_parent_name = "pbb-core-evis"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::~PbbCoreEvi()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::has_data() const
{
    if (is_presence_container) return true;
    return eviid.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eviid.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core-evi";
    ADD_KEY_TOKEN(eviid, "eviid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eviid.is_set || is_set(eviid.yfilter)) leaf_name_data.push_back(eviid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eviid")
    {
        eviid = value;
        eviid.value_namespace = name_space;
        eviid.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eviid")
    {
        eviid.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eviid")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::PbbCoreDhcpProfile()
    :
    profile_id{YType::enumeration, "profile-id"},
    dhcp_snooping_id{YType::str, "dhcp-snooping-id"}
{

    yang_name = "pbb-core-dhcp-profile"; yang_parent_name = "pbb-core"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::~PbbCoreDhcpProfile()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::has_data() const
{
    if (is_presence_container) return true;
    return profile_id.is_set
	|| dhcp_snooping_id.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_id.yfilter)
	|| ydk::is_set(dhcp_snooping_id.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core-dhcp-profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_id.is_set || is_set(profile_id.yfilter)) leaf_name_data.push_back(profile_id.get_name_leafdata());
    if (dhcp_snooping_id.is_set || is_set(dhcp_snooping_id.yfilter)) leaf_name_data.push_back(dhcp_snooping_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-id" || name == "dhcp-snooping-id")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvis()
    :
    bridge_domain_evi(this, {"vpn_id"})
{

    yang_name = "bridge-domain-evis"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainEvis::~BridgeDomainEvis()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainEvis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bridge_domain_evi.len(); index++)
    {
        if(bridge_domain_evi[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainEvis::has_operation() const
{
    for (std::size_t index=0; index<bridge_domain_evi.len(); index++)
    {
        if(bridge_domain_evi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainEvis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-evis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainEvis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainEvis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domain-evi")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi>();
        ent_->parent = this;
        bridge_domain_evi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainEvis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bridge_domain_evi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainEvis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainEvis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainEvis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domain-evi")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::BridgeDomainEvi()
    :
    vpn_id{YType::uint32, "vpn-id"}
{

    yang_name = "bridge-domain-evi"; yang_parent_name = "bridge-domain-evis"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::~BridgeDomainEvi()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::has_data() const
{
    if (is_presence_container) return true;
    return vpn_id.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpn_id.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-evi";
    ADD_KEY_TOKEN(vpn_id, "vpn-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpn-id")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfis()
    :
    access_vfi(this, {"name"})
{

    yang_name = "access-vfis"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::~AccessVfis()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_vfi.len(); index++)
    {
        if(access_vfi[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::has_operation() const
{
    for (std::size_t index=0; index<access_vfi.len(); index++)
    {
        if(access_vfi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-vfis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-vfi")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi>();
        ent_->parent = this;
        access_vfi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_vfi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-vfi")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfi()
    :
    name{YType::str, "name"},
    access_vfi_shutdown{YType::empty, "access-vfi-shutdown"}
        ,
    access_vfi_pseudowires(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires>())
{
    access_vfi_pseudowires->parent = this;

    yang_name = "access-vfi"; yang_parent_name = "access-vfis"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::~AccessVfi()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| access_vfi_shutdown.is_set
	|| (access_vfi_pseudowires !=  nullptr && access_vfi_pseudowires->has_data());
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(access_vfi_shutdown.yfilter)
	|| (access_vfi_pseudowires !=  nullptr && access_vfi_pseudowires->has_operation());
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-vfi";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (access_vfi_shutdown.is_set || is_set(access_vfi_shutdown.yfilter)) leaf_name_data.push_back(access_vfi_shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-vfi-pseudowires")
    {
        if(access_vfi_pseudowires == nullptr)
        {
            access_vfi_pseudowires = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires>();
        }
        return access_vfi_pseudowires;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access_vfi_pseudowires != nullptr)
    {
        _children["access-vfi-pseudowires"] = access_vfi_pseudowires;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-vfi-shutdown")
    {
        access_vfi_shutdown = value;
        access_vfi_shutdown.value_namespace = name_space;
        access_vfi_shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "access-vfi-shutdown")
    {
        access_vfi_shutdown.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-vfi-pseudowires" || name == "name" || name == "access-vfi-shutdown")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowires()
    :
    access_vfi_pseudowire(this, {"neighbor", "pseudowire_id"})
{

    yang_name = "access-vfi-pseudowires"; yang_parent_name = "access-vfi"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::~AccessVfiPseudowires()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_vfi_pseudowire.len(); index++)
    {
        if(access_vfi_pseudowire[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::has_operation() const
{
    for (std::size_t index=0; index<access_vfi_pseudowire.len(); index++)
    {
        if(access_vfi_pseudowire[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-vfi-pseudowires";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-vfi-pseudowire")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire>();
        ent_->parent = this;
        access_vfi_pseudowire.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_vfi_pseudowire.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-vfi-pseudowire")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowire()
    :
    neighbor{YType::str, "neighbor"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    access_vfi_pw_class{YType::str, "access-vfi-pw-class"}
        ,
    access_vfi_pseudowire_static_mac_addresses(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses>())
{
    access_vfi_pseudowire_static_mac_addresses->parent = this;

    yang_name = "access-vfi-pseudowire"; yang_parent_name = "access-vfi-pseudowires"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::~AccessVfiPseudowire()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::has_data() const
{
    if (is_presence_container) return true;
    return neighbor.is_set
	|| pseudowire_id.is_set
	|| access_vfi_pw_class.is_set
	|| (access_vfi_pseudowire_static_mac_addresses !=  nullptr && access_vfi_pseudowire_static_mac_addresses->has_data());
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| ydk::is_set(access_vfi_pw_class.yfilter)
	|| (access_vfi_pseudowire_static_mac_addresses !=  nullptr && access_vfi_pseudowire_static_mac_addresses->has_operation());
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-vfi-pseudowire";
    ADD_KEY_TOKEN(neighbor, "neighbor");
    ADD_KEY_TOKEN(pseudowire_id, "pseudowire-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (access_vfi_pw_class.is_set || is_set(access_vfi_pw_class.yfilter)) leaf_name_data.push_back(access_vfi_pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-vfi-pseudowire-static-mac-addresses")
    {
        if(access_vfi_pseudowire_static_mac_addresses == nullptr)
        {
            access_vfi_pseudowire_static_mac_addresses = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses>();
        }
        return access_vfi_pseudowire_static_mac_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access_vfi_pseudowire_static_mac_addresses != nullptr)
    {
        _children["access-vfi-pseudowire-static-mac-addresses"] = access_vfi_pseudowire_static_mac_addresses;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "access-vfi-pw-class")
    {
        access_vfi_pw_class = value;
        access_vfi_pw_class.value_namespace = name_space;
        access_vfi_pw_class.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id.yfilter = yfilter;
    }
    if(value_path == "access-vfi-pw-class")
    {
        access_vfi_pw_class.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-vfi-pseudowire-static-mac-addresses" || name == "neighbor" || name == "pseudowire-id" || name == "access-vfi-pw-class")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddresses()
    :
    access_vfi_pseudowire_static_mac_address(this, {"address"})
{

    yang_name = "access-vfi-pseudowire-static-mac-addresses"; yang_parent_name = "access-vfi-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::~AccessVfiPseudowireStaticMacAddresses()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_vfi_pseudowire_static_mac_address.len(); index++)
    {
        if(access_vfi_pseudowire_static_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::has_operation() const
{
    for (std::size_t index=0; index<access_vfi_pseudowire_static_mac_address.len(); index++)
    {
        if(access_vfi_pseudowire_static_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-vfi-pseudowire-static-mac-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-vfi-pseudowire-static-mac-address")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress>();
        ent_->parent = this;
        access_vfi_pseudowire_static_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_vfi_pseudowire_static_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-vfi-pseudowire-static-mac-address")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::AccessVfiPseudowireStaticMacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "access-vfi-pseudowire-static-mac-address"; yang_parent_name = "access-vfi-pseudowire-static-mac-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::~AccessVfiPseudowireStaticMacAddress()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-vfi-pseudowire-static-mac-address";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowires()
    :
    bd_pseudowire(this, {"neighbor", "pseudowire_id"})
{

    yang_name = "bd-pseudowires"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::~BdPseudowires()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bd_pseudowire.len(); index++)
    {
        if(bd_pseudowire[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::has_operation() const
{
    for (std::size_t index=0; index<bd_pseudowire.len(); index++)
    {
        if(bd_pseudowire[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pseudowires";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-pseudowire")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire>();
        ent_->parent = this;
        bd_pseudowire.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bd_pseudowire.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-pseudowire")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPseudowire()
    :
    neighbor{YType::str, "neighbor"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    pseudowire_mld_snoop{YType::str, "pseudowire-mld-snoop"},
    pseudowire_igmp_snoop{YType::str, "pseudowire-igmp-snoop"},
    pseudowire_flooding{YType::enumeration, "pseudowire-flooding"},
    bd_pw_class{YType::str, "bd-pw-class"},
    pseudowire_flooding_unknown_unicast{YType::enumeration, "pseudowire-flooding-unknown-unicast"}
        ,
    pseudowire_dai(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai>())
    , bdpw_storm_control_types(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes>())
    , pseudowire_profile(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile>())
    , bd_pw_static_mac_addresses(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses>())
    , pseudowire_ip_source_guard(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard>())
    , pseudowire_mac(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac>())
    , bd_pw_split_horizon(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon>())
    , bd_pw_mpls_static_labels(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels>())
    , bridge_domain_backup_pseudowires(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires>())
{
    pseudowire_dai->parent = this;
    bdpw_storm_control_types->parent = this;
    pseudowire_profile->parent = this;
    bd_pw_static_mac_addresses->parent = this;
    pseudowire_ip_source_guard->parent = this;
    pseudowire_mac->parent = this;
    bd_pw_split_horizon->parent = this;
    bd_pw_mpls_static_labels->parent = this;
    bridge_domain_backup_pseudowires->parent = this;

    yang_name = "bd-pseudowire"; yang_parent_name = "bd-pseudowires"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::~BdPseudowire()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::has_data() const
{
    if (is_presence_container) return true;
    return neighbor.is_set
	|| pseudowire_id.is_set
	|| pseudowire_mld_snoop.is_set
	|| pseudowire_igmp_snoop.is_set
	|| pseudowire_flooding.is_set
	|| bd_pw_class.is_set
	|| pseudowire_flooding_unknown_unicast.is_set
	|| (pseudowire_dai !=  nullptr && pseudowire_dai->has_data())
	|| (bdpw_storm_control_types !=  nullptr && bdpw_storm_control_types->has_data())
	|| (pseudowire_profile !=  nullptr && pseudowire_profile->has_data())
	|| (bd_pw_static_mac_addresses !=  nullptr && bd_pw_static_mac_addresses->has_data())
	|| (pseudowire_ip_source_guard !=  nullptr && pseudowire_ip_source_guard->has_data())
	|| (pseudowire_mac !=  nullptr && pseudowire_mac->has_data())
	|| (bd_pw_split_horizon !=  nullptr && bd_pw_split_horizon->has_data())
	|| (bd_pw_mpls_static_labels !=  nullptr && bd_pw_mpls_static_labels->has_data())
	|| (bridge_domain_backup_pseudowires !=  nullptr && bridge_domain_backup_pseudowires->has_data());
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| ydk::is_set(pseudowire_mld_snoop.yfilter)
	|| ydk::is_set(pseudowire_igmp_snoop.yfilter)
	|| ydk::is_set(pseudowire_flooding.yfilter)
	|| ydk::is_set(bd_pw_class.yfilter)
	|| ydk::is_set(pseudowire_flooding_unknown_unicast.yfilter)
	|| (pseudowire_dai !=  nullptr && pseudowire_dai->has_operation())
	|| (bdpw_storm_control_types !=  nullptr && bdpw_storm_control_types->has_operation())
	|| (pseudowire_profile !=  nullptr && pseudowire_profile->has_operation())
	|| (bd_pw_static_mac_addresses !=  nullptr && bd_pw_static_mac_addresses->has_operation())
	|| (pseudowire_ip_source_guard !=  nullptr && pseudowire_ip_source_guard->has_operation())
	|| (pseudowire_mac !=  nullptr && pseudowire_mac->has_operation())
	|| (bd_pw_split_horizon !=  nullptr && bd_pw_split_horizon->has_operation())
	|| (bd_pw_mpls_static_labels !=  nullptr && bd_pw_mpls_static_labels->has_operation())
	|| (bridge_domain_backup_pseudowires !=  nullptr && bridge_domain_backup_pseudowires->has_operation());
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pseudowire";
    ADD_KEY_TOKEN(neighbor, "neighbor");
    ADD_KEY_TOKEN(pseudowire_id, "pseudowire-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (pseudowire_mld_snoop.is_set || is_set(pseudowire_mld_snoop.yfilter)) leaf_name_data.push_back(pseudowire_mld_snoop.get_name_leafdata());
    if (pseudowire_igmp_snoop.is_set || is_set(pseudowire_igmp_snoop.yfilter)) leaf_name_data.push_back(pseudowire_igmp_snoop.get_name_leafdata());
    if (pseudowire_flooding.is_set || is_set(pseudowire_flooding.yfilter)) leaf_name_data.push_back(pseudowire_flooding.get_name_leafdata());
    if (bd_pw_class.is_set || is_set(bd_pw_class.yfilter)) leaf_name_data.push_back(bd_pw_class.get_name_leafdata());
    if (pseudowire_flooding_unknown_unicast.is_set || is_set(pseudowire_flooding_unknown_unicast.yfilter)) leaf_name_data.push_back(pseudowire_flooding_unknown_unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire-dai")
    {
        if(pseudowire_dai == nullptr)
        {
            pseudowire_dai = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai>();
        }
        return pseudowire_dai;
    }

    if(child_yang_name == "bdpw-storm-control-types")
    {
        if(bdpw_storm_control_types == nullptr)
        {
            bdpw_storm_control_types = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes>();
        }
        return bdpw_storm_control_types;
    }

    if(child_yang_name == "pseudowire-profile")
    {
        if(pseudowire_profile == nullptr)
        {
            pseudowire_profile = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile>();
        }
        return pseudowire_profile;
    }

    if(child_yang_name == "bd-pw-static-mac-addresses")
    {
        if(bd_pw_static_mac_addresses == nullptr)
        {
            bd_pw_static_mac_addresses = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses>();
        }
        return bd_pw_static_mac_addresses;
    }

    if(child_yang_name == "pseudowire-ip-source-guard")
    {
        if(pseudowire_ip_source_guard == nullptr)
        {
            pseudowire_ip_source_guard = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard>();
        }
        return pseudowire_ip_source_guard;
    }

    if(child_yang_name == "pseudowire-mac")
    {
        if(pseudowire_mac == nullptr)
        {
            pseudowire_mac = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac>();
        }
        return pseudowire_mac;
    }

    if(child_yang_name == "bd-pw-split-horizon")
    {
        if(bd_pw_split_horizon == nullptr)
        {
            bd_pw_split_horizon = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon>();
        }
        return bd_pw_split_horizon;
    }

    if(child_yang_name == "bd-pw-mpls-static-labels")
    {
        if(bd_pw_mpls_static_labels == nullptr)
        {
            bd_pw_mpls_static_labels = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels>();
        }
        return bd_pw_mpls_static_labels;
    }

    if(child_yang_name == "bridge-domain-backup-pseudowires")
    {
        if(bridge_domain_backup_pseudowires == nullptr)
        {
            bridge_domain_backup_pseudowires = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires>();
        }
        return bridge_domain_backup_pseudowires;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pseudowire_dai != nullptr)
    {
        _children["pseudowire-dai"] = pseudowire_dai;
    }

    if(bdpw_storm_control_types != nullptr)
    {
        _children["bdpw-storm-control-types"] = bdpw_storm_control_types;
    }

    if(pseudowire_profile != nullptr)
    {
        _children["pseudowire-profile"] = pseudowire_profile;
    }

    if(bd_pw_static_mac_addresses != nullptr)
    {
        _children["bd-pw-static-mac-addresses"] = bd_pw_static_mac_addresses;
    }

    if(pseudowire_ip_source_guard != nullptr)
    {
        _children["pseudowire-ip-source-guard"] = pseudowire_ip_source_guard;
    }

    if(pseudowire_mac != nullptr)
    {
        _children["pseudowire-mac"] = pseudowire_mac;
    }

    if(bd_pw_split_horizon != nullptr)
    {
        _children["bd-pw-split-horizon"] = bd_pw_split_horizon;
    }

    if(bd_pw_mpls_static_labels != nullptr)
    {
        _children["bd-pw-mpls-static-labels"] = bd_pw_mpls_static_labels;
    }

    if(bridge_domain_backup_pseudowires != nullptr)
    {
        _children["bridge-domain-backup-pseudowires"] = bridge_domain_backup_pseudowires;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "pseudowire-mld-snoop")
    {
        pseudowire_mld_snoop = value;
        pseudowire_mld_snoop.value_namespace = name_space;
        pseudowire_mld_snoop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-igmp-snoop")
    {
        pseudowire_igmp_snoop = value;
        pseudowire_igmp_snoop.value_namespace = name_space;
        pseudowire_igmp_snoop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-flooding")
    {
        pseudowire_flooding = value;
        pseudowire_flooding.value_namespace = name_space;
        pseudowire_flooding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-pw-class")
    {
        bd_pw_class = value;
        bd_pw_class.value_namespace = name_space;
        bd_pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-flooding-unknown-unicast")
    {
        pseudowire_flooding_unknown_unicast = value;
        pseudowire_flooding_unknown_unicast.value_namespace = name_space;
        pseudowire_flooding_unknown_unicast.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id.yfilter = yfilter;
    }
    if(value_path == "pseudowire-mld-snoop")
    {
        pseudowire_mld_snoop.yfilter = yfilter;
    }
    if(value_path == "pseudowire-igmp-snoop")
    {
        pseudowire_igmp_snoop.yfilter = yfilter;
    }
    if(value_path == "pseudowire-flooding")
    {
        pseudowire_flooding.yfilter = yfilter;
    }
    if(value_path == "bd-pw-class")
    {
        bd_pw_class.yfilter = yfilter;
    }
    if(value_path == "pseudowire-flooding-unknown-unicast")
    {
        pseudowire_flooding_unknown_unicast.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-dai" || name == "bdpw-storm-control-types" || name == "pseudowire-profile" || name == "bd-pw-static-mac-addresses" || name == "pseudowire-ip-source-guard" || name == "pseudowire-mac" || name == "bd-pw-split-horizon" || name == "bd-pw-mpls-static-labels" || name == "bridge-domain-backup-pseudowires" || name == "neighbor" || name == "pseudowire-id" || name == "pseudowire-mld-snoop" || name == "pseudowire-igmp-snoop" || name == "pseudowire-flooding" || name == "bd-pw-class" || name == "pseudowire-flooding-unknown-unicast")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDai()
    :
    logging{YType::enumeration, "logging"},
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"}
        ,
    pseudowire_dai_address_validation(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation>())
{
    pseudowire_dai_address_validation->parent = this;

    yang_name = "pseudowire-dai"; yang_parent_name = "bd-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::~PseudowireDai()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| disable.is_set
	|| enable.is_set
	|| (pseudowire_dai_address_validation !=  nullptr && pseudowire_dai_address_validation->has_data());
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (pseudowire_dai_address_validation !=  nullptr && pseudowire_dai_address_validation->has_operation());
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-dai";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire-dai-address-validation")
    {
        if(pseudowire_dai_address_validation == nullptr)
        {
            pseudowire_dai_address_validation = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation>();
        }
        return pseudowire_dai_address_validation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pseudowire_dai_address_validation != nullptr)
    {
        _children["pseudowire-dai-address-validation"] = pseudowire_dai_address_validation;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-dai-address-validation" || name == "logging" || name == "disable" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::PseudowireDaiAddressValidation()
    :
    ipv4_verification{YType::enumeration, "ipv4-verification"},
    destination_mac_verification{YType::enumeration, "destination-mac-verification"},
    source_mac_verification{YType::enumeration, "source-mac-verification"}
{

    yang_name = "pseudowire-dai-address-validation"; yang_parent_name = "pseudowire-dai"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::~PseudowireDaiAddressValidation()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_verification.is_set
	|| destination_mac_verification.is_set
	|| source_mac_verification.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_verification.yfilter)
	|| ydk::is_set(destination_mac_verification.yfilter)
	|| ydk::is_set(source_mac_verification.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-dai-address-validation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_verification.is_set || is_set(ipv4_verification.yfilter)) leaf_name_data.push_back(ipv4_verification.get_name_leafdata());
    if (destination_mac_verification.is_set || is_set(destination_mac_verification.yfilter)) leaf_name_data.push_back(destination_mac_verification.get_name_leafdata());
    if (source_mac_verification.is_set || is_set(source_mac_verification.yfilter)) leaf_name_data.push_back(source_mac_verification.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-verification" || name == "destination-mac-verification" || name == "source-mac-verification")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlTypes()
    :
    bdpw_storm_control_type(this, {"sctype"})
{

    yang_name = "bdpw-storm-control-types"; yang_parent_name = "bd-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::~BdpwStormControlTypes()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bdpw_storm_control_type.len(); index++)
    {
        if(bdpw_storm_control_type[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::has_operation() const
{
    for (std::size_t index=0; index<bdpw_storm_control_type.len(); index++)
    {
        if(bdpw_storm_control_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdpw-storm-control-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bdpw-storm-control-type")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType>();
        ent_->parent = this;
        bdpw_storm_control_type.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bdpw_storm_control_type.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bdpw-storm-control-type")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::BdpwStormControlType()
    :
    sctype{YType::enumeration, "sctype"}
        ,
    storm_control_unit(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit>())
{
    storm_control_unit->parent = this;

    yang_name = "bdpw-storm-control-type"; yang_parent_name = "bdpw-storm-control-types"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::~BdpwStormControlType()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::has_data() const
{
    if (is_presence_container) return true;
    return sctype.is_set
	|| (storm_control_unit !=  nullptr && storm_control_unit->has_data());
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sctype.yfilter)
	|| (storm_control_unit !=  nullptr && storm_control_unit->has_operation());
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdpw-storm-control-type";
    ADD_KEY_TOKEN(sctype, "sctype");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sctype.is_set || is_set(sctype.yfilter)) leaf_name_data.push_back(sctype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "storm-control-unit")
    {
        if(storm_control_unit == nullptr)
        {
            storm_control_unit = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit>();
        }
        return storm_control_unit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(storm_control_unit != nullptr)
    {
        _children["storm-control-unit"] = storm_control_unit;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sctype")
    {
        sctype = value;
        sctype.value_namespace = name_space;
        sctype.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sctype")
    {
        sctype.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "storm-control-unit" || name == "sctype")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::StormControlUnit()
    :
    kbits_per_sec{YType::uint32, "kbits-per-sec"},
    pkts_per_sec{YType::uint32, "pkts-per-sec"}
{

    yang_name = "storm-control-unit"; yang_parent_name = "bdpw-storm-control-type"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::~StormControlUnit()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::has_data() const
{
    if (is_presence_container) return true;
    return kbits_per_sec.is_set
	|| pkts_per_sec.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kbits_per_sec.yfilter)
	|| ydk::is_set(pkts_per_sec.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control-unit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kbits_per_sec.is_set || is_set(kbits_per_sec.yfilter)) leaf_name_data.push_back(kbits_per_sec.get_name_leafdata());
    if (pkts_per_sec.is_set || is_set(pkts_per_sec.yfilter)) leaf_name_data.push_back(pkts_per_sec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kbits-per-sec" || name == "pkts-per-sec")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::PseudowireProfile()
    :
    profile_id{YType::enumeration, "profile-id"},
    dhcp_snooping_id{YType::str, "dhcp-snooping-id"}
{

    yang_name = "pseudowire-profile"; yang_parent_name = "bd-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::~PseudowireProfile()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::has_data() const
{
    if (is_presence_container) return true;
    return profile_id.is_set
	|| dhcp_snooping_id.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_id.yfilter)
	|| ydk::is_set(dhcp_snooping_id.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_id.is_set || is_set(profile_id.yfilter)) leaf_name_data.push_back(profile_id.get_name_leafdata());
    if (dhcp_snooping_id.is_set || is_set(dhcp_snooping_id.yfilter)) leaf_name_data.push_back(dhcp_snooping_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-id" || name == "dhcp-snooping-id")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddresses()
    :
    bd_pw_static_mac_address(this, {"address"})
{

    yang_name = "bd-pw-static-mac-addresses"; yang_parent_name = "bd-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::~BdPwStaticMacAddresses()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bd_pw_static_mac_address.len(); index++)
    {
        if(bd_pw_static_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::has_operation() const
{
    for (std::size_t index=0; index<bd_pw_static_mac_address.len(); index++)
    {
        if(bd_pw_static_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pw-static-mac-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-pw-static-mac-address")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress>();
        ent_->parent = this;
        bd_pw_static_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bd_pw_static_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-pw-static-mac-address")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::BdPwStaticMacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "bd-pw-static-mac-address"; yang_parent_name = "bd-pw-static-mac-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::~BdPwStaticMacAddress()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pw-static-mac-address";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::PseudowireIpSourceGuard()
    :
    logging{YType::enumeration, "logging"},
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"}
{

    yang_name = "pseudowire-ip-source-guard"; yang_parent_name = "bd-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::~PseudowireIpSourceGuard()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| disable.is_set
	|| enable.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ip-source-guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "disable" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMac()
    :
    pseudowire_mac_port_down_flush{YType::enumeration, "pseudowire-mac-port-down-flush"},
    enable{YType::empty, "enable"},
    pseudowire_mac_learning{YType::enumeration, "pseudowire-mac-learning"}
        ,
    pseudowire_mac_secure(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure>())
    , pseudowire_mac_aging(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging>())
    , pseudowire_mac_limit(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit>())
{
    pseudowire_mac_secure->parent = this;
    pseudowire_mac_aging->parent = this;
    pseudowire_mac_limit->parent = this;

    yang_name = "pseudowire-mac"; yang_parent_name = "bd-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::~PseudowireMac()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::has_data() const
{
    if (is_presence_container) return true;
    return pseudowire_mac_port_down_flush.is_set
	|| enable.is_set
	|| pseudowire_mac_learning.is_set
	|| (pseudowire_mac_secure !=  nullptr && pseudowire_mac_secure->has_data())
	|| (pseudowire_mac_aging !=  nullptr && pseudowire_mac_aging->has_data())
	|| (pseudowire_mac_limit !=  nullptr && pseudowire_mac_limit->has_data());
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pseudowire_mac_port_down_flush.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(pseudowire_mac_learning.yfilter)
	|| (pseudowire_mac_secure !=  nullptr && pseudowire_mac_secure->has_operation())
	|| (pseudowire_mac_aging !=  nullptr && pseudowire_mac_aging->has_operation())
	|| (pseudowire_mac_limit !=  nullptr && pseudowire_mac_limit->has_operation());
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pseudowire_mac_port_down_flush.is_set || is_set(pseudowire_mac_port_down_flush.yfilter)) leaf_name_data.push_back(pseudowire_mac_port_down_flush.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (pseudowire_mac_learning.is_set || is_set(pseudowire_mac_learning.yfilter)) leaf_name_data.push_back(pseudowire_mac_learning.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire-mac-secure")
    {
        if(pseudowire_mac_secure == nullptr)
        {
            pseudowire_mac_secure = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure>();
        }
        return pseudowire_mac_secure;
    }

    if(child_yang_name == "pseudowire-mac-aging")
    {
        if(pseudowire_mac_aging == nullptr)
        {
            pseudowire_mac_aging = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging>();
        }
        return pseudowire_mac_aging;
    }

    if(child_yang_name == "pseudowire-mac-limit")
    {
        if(pseudowire_mac_limit == nullptr)
        {
            pseudowire_mac_limit = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit>();
        }
        return pseudowire_mac_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pseudowire_mac_secure != nullptr)
    {
        _children["pseudowire-mac-secure"] = pseudowire_mac_secure;
    }

    if(pseudowire_mac_aging != nullptr)
    {
        _children["pseudowire-mac-aging"] = pseudowire_mac_aging;
    }

    if(pseudowire_mac_limit != nullptr)
    {
        _children["pseudowire-mac-limit"] = pseudowire_mac_limit;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pseudowire-mac-port-down-flush")
    {
        pseudowire_mac_port_down_flush = value;
        pseudowire_mac_port_down_flush.value_namespace = name_space;
        pseudowire_mac_port_down_flush.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-mac-learning")
    {
        pseudowire_mac_learning = value;
        pseudowire_mac_learning.value_namespace = name_space;
        pseudowire_mac_learning.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pseudowire-mac-port-down-flush")
    {
        pseudowire_mac_port_down_flush.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "pseudowire-mac-learning")
    {
        pseudowire_mac_learning.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-mac-secure" || name == "pseudowire-mac-aging" || name == "pseudowire-mac-limit" || name == "pseudowire-mac-port-down-flush" || name == "enable" || name == "pseudowire-mac-learning")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::PseudowireMacSecure()
    :
    logging{YType::enumeration, "logging"},
    disable{YType::empty, "disable"},
    action{YType::enumeration, "action"},
    enable{YType::empty, "enable"}
{

    yang_name = "pseudowire-mac-secure"; yang_parent_name = "pseudowire-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::~PseudowireMacSecure()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| disable.is_set
	|| action.is_set
	|| enable.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-mac-secure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "disable" || name == "action" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::PseudowireMacAging()
    :
    pseudowire_mac_aging_type{YType::enumeration, "pseudowire-mac-aging-type"},
    pseudowire_mac_aging_time{YType::uint32, "pseudowire-mac-aging-time"}
{

    yang_name = "pseudowire-mac-aging"; yang_parent_name = "pseudowire-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::~PseudowireMacAging()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::has_data() const
{
    if (is_presence_container) return true;
    return pseudowire_mac_aging_type.is_set
	|| pseudowire_mac_aging_time.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pseudowire_mac_aging_type.yfilter)
	|| ydk::is_set(pseudowire_mac_aging_time.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-mac-aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pseudowire_mac_aging_type.is_set || is_set(pseudowire_mac_aging_type.yfilter)) leaf_name_data.push_back(pseudowire_mac_aging_type.get_name_leafdata());
    if (pseudowire_mac_aging_time.is_set || is_set(pseudowire_mac_aging_time.yfilter)) leaf_name_data.push_back(pseudowire_mac_aging_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pseudowire-mac-aging-type")
    {
        pseudowire_mac_aging_type = value;
        pseudowire_mac_aging_type.value_namespace = name_space;
        pseudowire_mac_aging_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-mac-aging-time")
    {
        pseudowire_mac_aging_time = value;
        pseudowire_mac_aging_time.value_namespace = name_space;
        pseudowire_mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pseudowire-mac-aging-type")
    {
        pseudowire_mac_aging_type.yfilter = yfilter;
    }
    if(value_path == "pseudowire-mac-aging-time")
    {
        pseudowire_mac_aging_time.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-mac-aging-type" || name == "pseudowire-mac-aging-time")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::PseudowireMacLimit()
    :
    pseudowire_mac_limit_action{YType::enumeration, "pseudowire-mac-limit-action"},
    pseudowire_mac_limit_notif{YType::enumeration, "pseudowire-mac-limit-notif"},
    pseudowire_mac_limit_max{YType::uint32, "pseudowire-mac-limit-max"}
{

    yang_name = "pseudowire-mac-limit"; yang_parent_name = "pseudowire-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::~PseudowireMacLimit()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::has_data() const
{
    if (is_presence_container) return true;
    return pseudowire_mac_limit_action.is_set
	|| pseudowire_mac_limit_notif.is_set
	|| pseudowire_mac_limit_max.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pseudowire_mac_limit_action.yfilter)
	|| ydk::is_set(pseudowire_mac_limit_notif.yfilter)
	|| ydk::is_set(pseudowire_mac_limit_max.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-mac-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pseudowire_mac_limit_action.is_set || is_set(pseudowire_mac_limit_action.yfilter)) leaf_name_data.push_back(pseudowire_mac_limit_action.get_name_leafdata());
    if (pseudowire_mac_limit_notif.is_set || is_set(pseudowire_mac_limit_notif.yfilter)) leaf_name_data.push_back(pseudowire_mac_limit_notif.get_name_leafdata());
    if (pseudowire_mac_limit_max.is_set || is_set(pseudowire_mac_limit_max.yfilter)) leaf_name_data.push_back(pseudowire_mac_limit_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pseudowire-mac-limit-action")
    {
        pseudowire_mac_limit_action = value;
        pseudowire_mac_limit_action.value_namespace = name_space;
        pseudowire_mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-mac-limit-notif")
    {
        pseudowire_mac_limit_notif = value;
        pseudowire_mac_limit_notif.value_namespace = name_space;
        pseudowire_mac_limit_notif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-mac-limit-max")
    {
        pseudowire_mac_limit_max = value;
        pseudowire_mac_limit_max.value_namespace = name_space;
        pseudowire_mac_limit_max.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pseudowire-mac-limit-action")
    {
        pseudowire_mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "pseudowire-mac-limit-notif")
    {
        pseudowire_mac_limit_notif.yfilter = yfilter;
    }
    if(value_path == "pseudowire-mac-limit-max")
    {
        pseudowire_mac_limit_max.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-mac-limit-action" || name == "pseudowire-mac-limit-notif" || name == "pseudowire-mac-limit-max")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizon()
    :
    bd_pw_split_horizon_group(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup>())
{
    bd_pw_split_horizon_group->parent = this;

    yang_name = "bd-pw-split-horizon"; yang_parent_name = "bd-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::~BdPwSplitHorizon()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::has_data() const
{
    if (is_presence_container) return true;
    return (bd_pw_split_horizon_group !=  nullptr && bd_pw_split_horizon_group->has_data());
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::has_operation() const
{
    return is_set(yfilter)
	|| (bd_pw_split_horizon_group !=  nullptr && bd_pw_split_horizon_group->has_operation());
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pw-split-horizon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-pw-split-horizon-group")
    {
        if(bd_pw_split_horizon_group == nullptr)
        {
            bd_pw_split_horizon_group = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup>();
        }
        return bd_pw_split_horizon_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bd_pw_split_horizon_group != nullptr)
    {
        _children["bd-pw-split-horizon-group"] = bd_pw_split_horizon_group;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-pw-split-horizon-group")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::BdPwSplitHorizonGroup()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "bd-pw-split-horizon-group"; yang_parent_name = "bd-pw-split-horizon"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::~BdPwSplitHorizonGroup()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pw-split-horizon-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::BdPwMplsStaticLabels()
    :
    local_static_label{YType::uint32, "local-static-label"},
    remote_static_label{YType::uint32, "remote-static-label"}
{

    yang_name = "bd-pw-mpls-static-labels"; yang_parent_name = "bd-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::~BdPwMplsStaticLabels()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::has_data() const
{
    if (is_presence_container) return true;
    return local_static_label.is_set
	|| remote_static_label.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_static_label.yfilter)
	|| ydk::is_set(remote_static_label.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pw-mpls-static-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_static_label.is_set || is_set(local_static_label.yfilter)) leaf_name_data.push_back(local_static_label.get_name_leafdata());
    if (remote_static_label.is_set || is_set(remote_static_label.yfilter)) leaf_name_data.push_back(remote_static_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-static-label")
    {
        local_static_label = value;
        local_static_label.value_namespace = name_space;
        local_static_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label = value;
        remote_static_label.value_namespace = name_space;
        remote_static_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-static-label")
    {
        local_static_label.yfilter = yfilter;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-static-label" || name == "remote-static-label")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowires()
    :
    bridge_domain_backup_pseudowire(this, {"neighbor", "pseudowire_id"})
{

    yang_name = "bridge-domain-backup-pseudowires"; yang_parent_name = "bd-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::~BridgeDomainBackupPseudowires()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bridge_domain_backup_pseudowire.len(); index++)
    {
        if(bridge_domain_backup_pseudowire[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::has_operation() const
{
    for (std::size_t index=0; index<bridge_domain_backup_pseudowire.len(); index++)
    {
        if(bridge_domain_backup_pseudowire[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-backup-pseudowires";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domain-backup-pseudowire")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire>();
        ent_->parent = this;
        bridge_domain_backup_pseudowire.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bridge_domain_backup_pseudowire.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domain-backup-pseudowire")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::BridgeDomainBackupPseudowire()
    :
    neighbor{YType::str, "neighbor"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    bridge_domain_backup_pw_class{YType::str, "bridge-domain-backup-pw-class"}
{

    yang_name = "bridge-domain-backup-pseudowire"; yang_parent_name = "bridge-domain-backup-pseudowires"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::~BridgeDomainBackupPseudowire()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::has_data() const
{
    if (is_presence_container) return true;
    return neighbor.is_set
	|| pseudowire_id.is_set
	|| bridge_domain_backup_pw_class.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| ydk::is_set(bridge_domain_backup_pw_class.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-backup-pseudowire";
    ADD_KEY_TOKEN(neighbor, "neighbor");
    ADD_KEY_TOKEN(pseudowire_id, "pseudowire-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (bridge_domain_backup_pw_class.is_set || is_set(bridge_domain_backup_pw_class.yfilter)) leaf_name_data.push_back(bridge_domain_backup_pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "bridge-domain-backup-pw-class")
    {
        bridge_domain_backup_pw_class = value;
        bridge_domain_backup_pw_class.value_namespace = name_space;
        bridge_domain_backup_pw_class.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-backup-pw-class")
    {
        bridge_domain_backup_pw_class.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "pseudowire-id" || name == "bridge-domain-backup-pw-class")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfis()
    :
    vfi(this, {"name"})
{

    yang_name = "vfis"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::~Vfis()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vfi.len(); index++)
    {
        if(vfi[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::has_operation() const
{
    for (std::size_t index=0; index<vfi.len(); index++)
    {
        if(vfi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vfi")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi>();
        ent_->parent = this;
        vfi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vfi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vfi")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::Vfi()
    :
    name{YType::str, "name"},
    vfi_shutdown{YType::empty, "vfi-shutdown"},
    vpnid{YType::uint32, "vpnid"}
        ,
    multicast_p2mp(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp>())
    , vfi_pseudowires(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires>())
    , bgp_auto_discovery(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery>())
{
    multicast_p2mp->parent = this;
    vfi_pseudowires->parent = this;
    bgp_auto_discovery->parent = this;

    yang_name = "vfi"; yang_parent_name = "vfis"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::~Vfi()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| vfi_shutdown.is_set
	|| vpnid.is_set
	|| (multicast_p2mp !=  nullptr && multicast_p2mp->has_data())
	|| (vfi_pseudowires !=  nullptr && vfi_pseudowires->has_data())
	|| (bgp_auto_discovery !=  nullptr && bgp_auto_discovery->has_data());
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vfi_shutdown.yfilter)
	|| ydk::is_set(vpnid.yfilter)
	|| (multicast_p2mp !=  nullptr && multicast_p2mp->has_operation())
	|| (vfi_pseudowires !=  nullptr && vfi_pseudowires->has_operation())
	|| (bgp_auto_discovery !=  nullptr && bgp_auto_discovery->has_operation());
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfi";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vfi_shutdown.is_set || is_set(vfi_shutdown.yfilter)) leaf_name_data.push_back(vfi_shutdown.get_name_leafdata());
    if (vpnid.is_set || is_set(vpnid.yfilter)) leaf_name_data.push_back(vpnid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-p2mp")
    {
        if(multicast_p2mp == nullptr)
        {
            multicast_p2mp = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp>();
        }
        return multicast_p2mp;
    }

    if(child_yang_name == "vfi-pseudowires")
    {
        if(vfi_pseudowires == nullptr)
        {
            vfi_pseudowires = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires>();
        }
        return vfi_pseudowires;
    }

    if(child_yang_name == "bgp-auto-discovery")
    {
        if(bgp_auto_discovery == nullptr)
        {
            bgp_auto_discovery = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery>();
        }
        return bgp_auto_discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(multicast_p2mp != nullptr)
    {
        _children["multicast-p2mp"] = multicast_p2mp;
    }

    if(vfi_pseudowires != nullptr)
    {
        _children["vfi-pseudowires"] = vfi_pseudowires;
    }

    if(bgp_auto_discovery != nullptr)
    {
        _children["bgp-auto-discovery"] = bgp_auto_discovery;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vfi-shutdown")
    {
        vfi_shutdown = value;
        vfi_shutdown.value_namespace = name_space;
        vfi_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpnid")
    {
        vpnid = value;
        vpnid.value_namespace = name_space;
        vpnid.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vfi-shutdown")
    {
        vfi_shutdown.yfilter = yfilter;
    }
    if(value_path == "vpnid")
    {
        vpnid.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-p2mp" || name == "vfi-pseudowires" || name == "bgp-auto-discovery" || name == "name" || name == "vfi-shutdown" || name == "vpnid")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::MulticastP2mp()
    :
    enable{YType::empty, "enable"}
        ,
    transports(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports>())
    , signalings(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings>())
{
    transports->parent = this;
    signalings->parent = this;

    yang_name = "multicast-p2mp"; yang_parent_name = "vfi"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::~MulticastP2mp()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (transports !=  nullptr && transports->has_data())
	|| (signalings !=  nullptr && signalings->has_data());
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (transports !=  nullptr && transports->has_operation())
	|| (signalings !=  nullptr && signalings->has_operation());
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-p2mp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transports")
    {
        if(transports == nullptr)
        {
            transports = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports>();
        }
        return transports;
    }

    if(child_yang_name == "signalings")
    {
        if(signalings == nullptr)
        {
            signalings = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings>();
        }
        return signalings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(transports != nullptr)
    {
        _children["transports"] = transports;
    }

    if(signalings != nullptr)
    {
        _children["signalings"] = signalings;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transports" || name == "signalings" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transports()
    :
    transport(this, {"transport_name"})
{

    yang_name = "transports"; yang_parent_name = "multicast-p2mp"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::~Transports()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<transport.len(); index++)
    {
        if(transport[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::has_operation() const
{
    for (std::size_t index=0; index<transport.len(); index++)
    {
        if(transport[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transport>();
        ent_->parent = this;
        transport.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : transport.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transport::Transport()
    :
    transport_name{YType::str, "transport-name"},
    attribute_set_name{YType::str, "attribute-set-name"}
{

    yang_name = "transport"; yang_parent_name = "transports"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transport::~Transport()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transport::has_data() const
{
    if (is_presence_container) return true;
    return transport_name.is_set
	|| attribute_set_name.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transport_name.yfilter)
	|| ydk::is_set(attribute_set_name.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    ADD_KEY_TOKEN(transport_name, "transport-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport_name.is_set || is_set(transport_name.yfilter)) leaf_name_data.push_back(transport_name.get_name_leafdata());
    if (attribute_set_name.is_set || is_set(attribute_set_name.yfilter)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transport-name")
    {
        transport_name = value;
        transport_name.value_namespace = name_space;
        transport_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
        attribute_set_name.value_namespace = name_space;
        attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transport-name")
    {
        transport_name.yfilter = yfilter;
    }
    if(value_path == "attribute-set-name")
    {
        attribute_set_name.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport-name" || name == "attribute-set-name")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signalings()
    :
    signaling(this, {"signaling_name"})
{

    yang_name = "signalings"; yang_parent_name = "multicast-p2mp"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::~Signalings()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<signaling.len(); index++)
    {
        if(signaling[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::has_operation() const
{
    for (std::size_t index=0; index<signaling.len(); index++)
    {
        if(signaling[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signaling")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signaling>();
        ent_->parent = this;
        signaling.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : signaling.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signaling")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signaling::Signaling()
    :
    signaling_name{YType::str, "signaling-name"}
{

    yang_name = "signaling"; yang_parent_name = "signalings"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signaling::~Signaling()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signaling::has_data() const
{
    if (is_presence_container) return true;
    return signaling_name.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signaling::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(signaling_name.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signaling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signaling";
    ADD_KEY_TOKEN(signaling_name, "signaling-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signaling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signaling_name.is_set || is_set(signaling_name.yfilter)) leaf_name_data.push_back(signaling_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signaling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signaling::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signaling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "signaling-name")
    {
        signaling_name = value;
        signaling_name.value_namespace = name_space;
        signaling_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signaling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signaling-name")
    {
        signaling_name.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signaling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signaling-name")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowires()
    :
    vfi_pseudowire(this, {"neighbor", "pseudowire_id"})
{

    yang_name = "vfi-pseudowires"; yang_parent_name = "vfi"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::~VfiPseudowires()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vfi_pseudowire.len(); index++)
    {
        if(vfi_pseudowire[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::has_operation() const
{
    for (std::size_t index=0; index<vfi_pseudowire.len(); index++)
    {
        if(vfi_pseudowire[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfi-pseudowires";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vfi-pseudowire")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire>();
        ent_->parent = this;
        vfi_pseudowire.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vfi_pseudowire.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vfi-pseudowire")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPseudowire()
    :
    neighbor{YType::str, "neighbor"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    vfi_pw_class{YType::str, "vfi-pw-class"},
    vfi_pw_igmp_snoop{YType::str, "vfi-pw-igmp-snoop"},
    vfi_pw_mld_snoop{YType::str, "vfi-pw-mld-snoop"}
        ,
    vfi_pw_dhcp_snoop(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop>())
    , vfi_pw_mpls_static_labels(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels>())
    , pseudowire_static_mac_addresses(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses>())
{
    vfi_pw_dhcp_snoop->parent = this;
    vfi_pw_mpls_static_labels->parent = this;
    pseudowire_static_mac_addresses->parent = this;

    yang_name = "vfi-pseudowire"; yang_parent_name = "vfi-pseudowires"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::~VfiPseudowire()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::has_data() const
{
    if (is_presence_container) return true;
    return neighbor.is_set
	|| pseudowire_id.is_set
	|| vfi_pw_class.is_set
	|| vfi_pw_igmp_snoop.is_set
	|| vfi_pw_mld_snoop.is_set
	|| (vfi_pw_dhcp_snoop !=  nullptr && vfi_pw_dhcp_snoop->has_data())
	|| (vfi_pw_mpls_static_labels !=  nullptr && vfi_pw_mpls_static_labels->has_data())
	|| (pseudowire_static_mac_addresses !=  nullptr && pseudowire_static_mac_addresses->has_data());
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| ydk::is_set(vfi_pw_class.yfilter)
	|| ydk::is_set(vfi_pw_igmp_snoop.yfilter)
	|| ydk::is_set(vfi_pw_mld_snoop.yfilter)
	|| (vfi_pw_dhcp_snoop !=  nullptr && vfi_pw_dhcp_snoop->has_operation())
	|| (vfi_pw_mpls_static_labels !=  nullptr && vfi_pw_mpls_static_labels->has_operation())
	|| (pseudowire_static_mac_addresses !=  nullptr && pseudowire_static_mac_addresses->has_operation());
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfi-pseudowire";
    ADD_KEY_TOKEN(neighbor, "neighbor");
    ADD_KEY_TOKEN(pseudowire_id, "pseudowire-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (vfi_pw_class.is_set || is_set(vfi_pw_class.yfilter)) leaf_name_data.push_back(vfi_pw_class.get_name_leafdata());
    if (vfi_pw_igmp_snoop.is_set || is_set(vfi_pw_igmp_snoop.yfilter)) leaf_name_data.push_back(vfi_pw_igmp_snoop.get_name_leafdata());
    if (vfi_pw_mld_snoop.is_set || is_set(vfi_pw_mld_snoop.yfilter)) leaf_name_data.push_back(vfi_pw_mld_snoop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vfi-pw-dhcp-snoop")
    {
        if(vfi_pw_dhcp_snoop == nullptr)
        {
            vfi_pw_dhcp_snoop = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop>();
        }
        return vfi_pw_dhcp_snoop;
    }

    if(child_yang_name == "vfi-pw-mpls-static-labels")
    {
        if(vfi_pw_mpls_static_labels == nullptr)
        {
            vfi_pw_mpls_static_labels = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels>();
        }
        return vfi_pw_mpls_static_labels;
    }

    if(child_yang_name == "pseudowire-static-mac-addresses")
    {
        if(pseudowire_static_mac_addresses == nullptr)
        {
            pseudowire_static_mac_addresses = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses>();
        }
        return pseudowire_static_mac_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vfi_pw_dhcp_snoop != nullptr)
    {
        _children["vfi-pw-dhcp-snoop"] = vfi_pw_dhcp_snoop;
    }

    if(vfi_pw_mpls_static_labels != nullptr)
    {
        _children["vfi-pw-mpls-static-labels"] = vfi_pw_mpls_static_labels;
    }

    if(pseudowire_static_mac_addresses != nullptr)
    {
        _children["pseudowire-static-mac-addresses"] = pseudowire_static_mac_addresses;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "vfi-pw-class")
    {
        vfi_pw_class = value;
        vfi_pw_class.value_namespace = name_space;
        vfi_pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vfi-pw-igmp-snoop")
    {
        vfi_pw_igmp_snoop = value;
        vfi_pw_igmp_snoop.value_namespace = name_space;
        vfi_pw_igmp_snoop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vfi-pw-mld-snoop")
    {
        vfi_pw_mld_snoop = value;
        vfi_pw_mld_snoop.value_namespace = name_space;
        vfi_pw_mld_snoop.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id.yfilter = yfilter;
    }
    if(value_path == "vfi-pw-class")
    {
        vfi_pw_class.yfilter = yfilter;
    }
    if(value_path == "vfi-pw-igmp-snoop")
    {
        vfi_pw_igmp_snoop.yfilter = yfilter;
    }
    if(value_path == "vfi-pw-mld-snoop")
    {
        vfi_pw_mld_snoop.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vfi-pw-dhcp-snoop" || name == "vfi-pw-mpls-static-labels" || name == "pseudowire-static-mac-addresses" || name == "neighbor" || name == "pseudowire-id" || name == "vfi-pw-class" || name == "vfi-pw-igmp-snoop" || name == "vfi-pw-mld-snoop")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::VfiPwDhcpSnoop()
    :
    profile_id{YType::enumeration, "profile-id"},
    dhcp_snooping_id{YType::str, "dhcp-snooping-id"}
{

    yang_name = "vfi-pw-dhcp-snoop"; yang_parent_name = "vfi-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::~VfiPwDhcpSnoop()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::has_data() const
{
    if (is_presence_container) return true;
    return profile_id.is_set
	|| dhcp_snooping_id.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_id.yfilter)
	|| ydk::is_set(dhcp_snooping_id.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfi-pw-dhcp-snoop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_id.is_set || is_set(profile_id.yfilter)) leaf_name_data.push_back(profile_id.get_name_leafdata());
    if (dhcp_snooping_id.is_set || is_set(dhcp_snooping_id.yfilter)) leaf_name_data.push_back(dhcp_snooping_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-id" || name == "dhcp-snooping-id")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::VfiPwMplsStaticLabels()
    :
    local_static_label{YType::uint32, "local-static-label"},
    remote_static_label{YType::uint32, "remote-static-label"}
{

    yang_name = "vfi-pw-mpls-static-labels"; yang_parent_name = "vfi-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::~VfiPwMplsStaticLabels()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::has_data() const
{
    if (is_presence_container) return true;
    return local_static_label.is_set
	|| remote_static_label.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_static_label.yfilter)
	|| ydk::is_set(remote_static_label.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfi-pw-mpls-static-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_static_label.is_set || is_set(local_static_label.yfilter)) leaf_name_data.push_back(local_static_label.get_name_leafdata());
    if (remote_static_label.is_set || is_set(remote_static_label.yfilter)) leaf_name_data.push_back(remote_static_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-static-label")
    {
        local_static_label = value;
        local_static_label.value_namespace = name_space;
        local_static_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label = value;
        remote_static_label.value_namespace = name_space;
        remote_static_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-static-label")
    {
        local_static_label.yfilter = yfilter;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-static-label" || name == "remote-static-label")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddresses()
    :
    pseudowire_static_mac_address(this, {"address"})
{

    yang_name = "pseudowire-static-mac-addresses"; yang_parent_name = "vfi-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::~PseudowireStaticMacAddresses()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pseudowire_static_mac_address.len(); index++)
    {
        if(pseudowire_static_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::has_operation() const
{
    for (std::size_t index=0; index<pseudowire_static_mac_address.len(); index++)
    {
        if(pseudowire_static_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-static-mac-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire-static-mac-address")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress>();
        ent_->parent = this;
        pseudowire_static_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pseudowire_static_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-static-mac-address")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::PseudowireStaticMacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "pseudowire-static-mac-address"; yang_parent_name = "pseudowire-static-mac-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::~PseudowireStaticMacAddress()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-static-mac-address";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpAutoDiscovery()
    :
    table_policy{YType::str, "table-policy"},
    ad_control_word{YType::empty, "ad-control-word"},
    enable{YType::empty, "enable"}
        ,
    ldp_signaling_protocol(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol>())
    , bgp_route_policy(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy>())
    , route_distinguisher(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher>())
    , bgp_signaling_protocol(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol>())
    , route_targets(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets>())
{
    ldp_signaling_protocol->parent = this;
    bgp_route_policy->parent = this;
    route_distinguisher->parent = this;
    bgp_signaling_protocol->parent = this;
    route_targets->parent = this;

    yang_name = "bgp-auto-discovery"; yang_parent_name = "vfi"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::~BgpAutoDiscovery()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::has_data() const
{
    if (is_presence_container) return true;
    return table_policy.is_set
	|| ad_control_word.is_set
	|| enable.is_set
	|| (ldp_signaling_protocol !=  nullptr && ldp_signaling_protocol->has_data())
	|| (bgp_route_policy !=  nullptr && bgp_route_policy->has_data())
	|| (route_distinguisher !=  nullptr && route_distinguisher->has_data())
	|| (bgp_signaling_protocol !=  nullptr && bgp_signaling_protocol->has_data())
	|| (route_targets !=  nullptr && route_targets->has_data());
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_policy.yfilter)
	|| ydk::is_set(ad_control_word.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (ldp_signaling_protocol !=  nullptr && ldp_signaling_protocol->has_operation())
	|| (bgp_route_policy !=  nullptr && bgp_route_policy->has_operation())
	|| (route_distinguisher !=  nullptr && route_distinguisher->has_operation())
	|| (bgp_signaling_protocol !=  nullptr && bgp_signaling_protocol->has_operation())
	|| (route_targets !=  nullptr && route_targets->has_operation());
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-auto-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_policy.is_set || is_set(table_policy.yfilter)) leaf_name_data.push_back(table_policy.get_name_leafdata());
    if (ad_control_word.is_set || is_set(ad_control_word.yfilter)) leaf_name_data.push_back(ad_control_word.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp-signaling-protocol")
    {
        if(ldp_signaling_protocol == nullptr)
        {
            ldp_signaling_protocol = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol>();
        }
        return ldp_signaling_protocol;
    }

    if(child_yang_name == "bgp-route-policy")
    {
        if(bgp_route_policy == nullptr)
        {
            bgp_route_policy = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy>();
        }
        return bgp_route_policy;
    }

    if(child_yang_name == "route-distinguisher")
    {
        if(route_distinguisher == nullptr)
        {
            route_distinguisher = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher>();
        }
        return route_distinguisher;
    }

    if(child_yang_name == "bgp-signaling-protocol")
    {
        if(bgp_signaling_protocol == nullptr)
        {
            bgp_signaling_protocol = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol>();
        }
        return bgp_signaling_protocol;
    }

    if(child_yang_name == "route-targets")
    {
        if(route_targets == nullptr)
        {
            route_targets = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets>();
        }
        return route_targets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ldp_signaling_protocol != nullptr)
    {
        _children["ldp-signaling-protocol"] = ldp_signaling_protocol;
    }

    if(bgp_route_policy != nullptr)
    {
        _children["bgp-route-policy"] = bgp_route_policy;
    }

    if(route_distinguisher != nullptr)
    {
        _children["route-distinguisher"] = route_distinguisher;
    }

    if(bgp_signaling_protocol != nullptr)
    {
        _children["bgp-signaling-protocol"] = bgp_signaling_protocol;
    }

    if(route_targets != nullptr)
    {
        _children["route-targets"] = route_targets;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-policy")
    {
        table_policy = value;
        table_policy.value_namespace = name_space;
        table_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ad-control-word")
    {
        ad_control_word = value;
        ad_control_word.value_namespace = name_space;
        ad_control_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-policy")
    {
        table_policy.yfilter = yfilter;
    }
    if(value_path == "ad-control-word")
    {
        ad_control_word.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp-signaling-protocol" || name == "bgp-route-policy" || name == "route-distinguisher" || name == "bgp-signaling-protocol" || name == "route-targets" || name == "table-policy" || name == "ad-control-word" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::LdpSignalingProtocol()
    :
    enable{YType::empty, "enable"}
        ,
    vpls_id(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId>())
    , flow_label_load_balance(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance>())
{
    vpls_id->parent = this;
    flow_label_load_balance->parent = this;

    yang_name = "ldp-signaling-protocol"; yang_parent_name = "bgp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::~LdpSignalingProtocol()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (vpls_id !=  nullptr && vpls_id->has_data())
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_data());
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (vpls_id !=  nullptr && vpls_id->has_operation())
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_operation());
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-signaling-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vpls-id")
    {
        if(vpls_id == nullptr)
        {
            vpls_id = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId>();
        }
        return vpls_id;
    }

    if(child_yang_name == "flow-label-load-balance")
    {
        if(flow_label_load_balance == nullptr)
        {
            flow_label_load_balance = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance>();
        }
        return flow_label_load_balance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vpls_id != nullptr)
    {
        _children["vpls-id"] = vpls_id;
    }

    if(flow_label_load_balance != nullptr)
    {
        _children["flow-label-load-balance"] = flow_label_load_balance;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpls-id" || name == "flow-label-load-balance" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::VplsId()
    :
    type{YType::enumeration, "type"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    address{YType::str, "address"},
    address_index{YType::uint32, "address-index"}
{

    yang_name = "vpls-id"; yang_parent_name = "ldp-signaling-protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::~VplsId()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| as.is_set
	|| as_index.is_set
	|| address.is_set
	|| address_index.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(address_index.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpls-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_index.is_set || is_set(address_index.yfilter)) leaf_name_data.push_back(address_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "address-index")
    {
        address_index = value;
        address_index.value_namespace = name_space;
        address_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "address-index")
    {
        address_index.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "as" || name == "as-index" || name == "address" || name == "address-index")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::FlowLabelLoadBalance()
    :
    flow_label{YType::enumeration, "flow-label"},
    static_{YType::empty, "static"}
{

    yang_name = "flow-label-load-balance"; yang_parent_name = "ldp-signaling-protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::~FlowLabelLoadBalance()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::has_data() const
{
    if (is_presence_container) return true;
    return flow_label.is_set
	|| static_.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_label.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-label-load-balance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_label.is_set || is_set(flow_label.yfilter)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-label" || name == "static")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::BgpRoutePolicy()
    :
    export_{YType::str, "export"}
{

    yang_name = "bgp-route-policy"; yang_parent_name = "bgp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::~BgpRoutePolicy()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::has_data() const
{
    if (is_presence_container) return true;
    return export_.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(export_.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-route-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (export_.is_set || is_set(export_.yfilter)) leaf_name_data.push_back(export_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "export")
    {
        export_ = value;
        export_.value_namespace = name_space;
        export_.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "export")
    {
        export_.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "export")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::RouteDistinguisher()
    :
    type{YType::enumeration, "type"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    address{YType::str, "address"},
    addr_index{YType::uint32, "addr-index"}
{

    yang_name = "route-distinguisher"; yang_parent_name = "bgp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::~RouteDistinguisher()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| as.is_set
	|| as_index.is_set
	|| address.is_set
	|| addr_index.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(addr_index.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-distinguisher";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (addr_index.is_set || is_set(addr_index.yfilter)) leaf_name_data.push_back(addr_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "as" || name == "as-index" || name == "address" || name == "addr-index")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::BgpSignalingProtocol()
    :
    ve_range{YType::uint32, "ve-range"},
    veid{YType::uint32, "veid"},
    enable{YType::empty, "enable"}
        ,
    flow_label_load_balance(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance>())
{
    flow_label_load_balance->parent = this;

    yang_name = "bgp-signaling-protocol"; yang_parent_name = "bgp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::~BgpSignalingProtocol()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::has_data() const
{
    if (is_presence_container) return true;
    return ve_range.is_set
	|| veid.is_set
	|| enable.is_set
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_data());
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ve_range.yfilter)
	|| ydk::is_set(veid.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_operation());
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-signaling-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ve_range.is_set || is_set(ve_range.yfilter)) leaf_name_data.push_back(ve_range.get_name_leafdata());
    if (veid.is_set || is_set(veid.yfilter)) leaf_name_data.push_back(veid.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-label-load-balance")
    {
        if(flow_label_load_balance == nullptr)
        {
            flow_label_load_balance = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance>();
        }
        return flow_label_load_balance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flow_label_load_balance != nullptr)
    {
        _children["flow-label-load-balance"] = flow_label_load_balance;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-label-load-balance" || name == "ve-range" || name == "veid" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::FlowLabelLoadBalance()
    :
    flow_label{YType::enumeration, "flow-label"},
    static_{YType::empty, "static"}
{

    yang_name = "flow-label-load-balance"; yang_parent_name = "bgp-signaling-protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::~FlowLabelLoadBalance()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::has_data() const
{
    if (is_presence_container) return true;
    return flow_label.is_set
	|| static_.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_label.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-label-load-balance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_label.is_set || is_set(flow_label.yfilter)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-label" || name == "static")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTargets()
    :
    route_target(this, {"role", "format"})
{

    yang_name = "route-targets"; yang_parent_name = "bgp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::~RouteTargets()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_target.len(); index++)
    {
        if(route_target[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::has_operation() const
{
    for (std::size_t index=0; index<route_target.len(); index++)
    {
        if(route_target[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-targets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-target")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget>();
        ent_->parent = this;
        route_target.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route_target.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-target")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::RouteTarget()
    :
    role{YType::enumeration, "role"},
    format{YType::enumeration, "format"}
        ,
    two_byte_as_or_four_byte_as(this, {"as", "as_index"})
    , ipv4_address(this, {"address", "addr_index"})
{

    yang_name = "route-target"; yang_parent_name = "route-targets"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::~RouteTarget()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::has_data() const
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

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::has_operation() const
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

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";
    ADD_KEY_TOKEN(role, "role");
    ADD_KEY_TOKEN(format, "format");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "two-byte-as-or-four-byte-as")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs>();
        ent_->parent = this;
        two_byte_as_or_four_byte_as.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv4-address")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address>();
        ent_->parent = this;
        ipv4_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : two_byte_as_or_four_byte_as.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv4_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as-or-four-byte-as" || name == "ipv4-address" || name == "role" || name == "format")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::TwoByteAsOrFourByteAs()
    :
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"}
{

    yang_name = "two-byte-as-or-four-byte-as"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::~TwoByteAsOrFourByteAs()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| as_index.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as-or-four-byte-as";
    ADD_KEY_TOKEN(as, "as");
    ADD_KEY_TOKEN(as_index, "as-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "as-index")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::Ipv4Address()
    :
    address{YType::str, "address"},
    addr_index{YType::uint32, "addr-index"}
{

    yang_name = "ipv4-address"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::~Ipv4Address()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| addr_index.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(addr_index.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address";
    ADD_KEY_TOKEN(address, "address");
    ADD_KEY_TOKEN(addr_index, "addr-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (addr_index.is_set || is_set(addr_index.yfilter)) leaf_name_data.push_back(addr_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "addr-index")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainvnis::BridgeDomainvnis()
    :
    bridge_domainvni(this, {"vpn_id"})
{

    yang_name = "bridge-domainvnis"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainvnis::~BridgeDomainvnis()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainvnis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bridge_domainvni.len(); index++)
    {
        if(bridge_domainvni[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainvnis::has_operation() const
{
    for (std::size_t index=0; index<bridge_domainvni.len(); index++)
    {
        if(bridge_domainvni[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainvnis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domainvnis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainvnis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainvnis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domainvni")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainvnis::BridgeDomainvni>();
        ent_->parent = this;
        bridge_domainvni.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainvnis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bridge_domainvni.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainvnis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainvnis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainvnis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domainvni")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainvnis::BridgeDomainvni::BridgeDomainvni()
    :
    vpn_id{YType::uint32, "vpn-id"}
{

    yang_name = "bridge-domainvni"; yang_parent_name = "bridge-domainvnis"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainvnis::BridgeDomainvni::~BridgeDomainvni()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainvnis::BridgeDomainvni::has_data() const
{
    if (is_presence_container) return true;
    return vpn_id.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainvnis::BridgeDomainvni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpn_id.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainvnis::BridgeDomainvni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domainvni";
    ADD_KEY_TOKEN(vpn_id, "vpn-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainvnis::BridgeDomainvni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainvnis::BridgeDomainvni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainvnis::BridgeDomainvni::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainvnis::BridgeDomainvni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainvnis::BridgeDomainvni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BridgeDomainvnis::BridgeDomainvni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpn-id")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuits()
    :
    bd_attachment_circuit(this, {"name"})
{

    yang_name = "bd-attachment-circuits"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::~BdAttachmentCircuits()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bd_attachment_circuit.len(); index++)
    {
        if(bd_attachment_circuit[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::has_operation() const
{
    for (std::size_t index=0; index<bd_attachment_circuit.len(); index++)
    {
        if(bd_attachment_circuit[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-attachment-circuits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-attachment-circuit")
    {
        auto ent_ = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit>();
        ent_->parent = this;
        bd_attachment_circuit.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bd_attachment_circuit.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-attachment-circuit")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdAttachmentCircuit()
    :
    name{YType::str, "name"},
    interface_flooding{YType::enumeration, "interface-flooding"},
    interface_igmp_snoop{YType::str, "interface-igmp-snoop"},
    interface_flooding_unknown_unicast{YType::enumeration, "interface-flooding-unknown-unicast"},
    interface_mld_snoop{YType::str, "interface-mld-snoop"}
        ,
    interface_ip_source_guard(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard>())
    , interface_dai(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai>())
    , interface_profile(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile>())
    , bdac_storm_control_types(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes>())
    , split_horizon(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon>())
    , static_mac_addresses(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses>())
    , interface_mac(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac>())
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

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::~BdAttachmentCircuit()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::has_data() const
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

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::has_operation() const
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

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-attachment-circuit";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_flooding.is_set || is_set(interface_flooding.yfilter)) leaf_name_data.push_back(interface_flooding.get_name_leafdata());
    if (interface_igmp_snoop.is_set || is_set(interface_igmp_snoop.yfilter)) leaf_name_data.push_back(interface_igmp_snoop.get_name_leafdata());
    if (interface_flooding_unknown_unicast.is_set || is_set(interface_flooding_unknown_unicast.yfilter)) leaf_name_data.push_back(interface_flooding_unknown_unicast.get_name_leafdata());
    if (interface_mld_snoop.is_set || is_set(interface_mld_snoop.yfilter)) leaf_name_data.push_back(interface_mld_snoop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-ip-source-guard")
    {
        if(interface_ip_source_guard == nullptr)
        {
            interface_ip_source_guard = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard>();
        }
        return interface_ip_source_guard;
    }

    if(child_yang_name == "interface-dai")
    {
        if(interface_dai == nullptr)
        {
            interface_dai = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai>();
        }
        return interface_dai;
    }

    if(child_yang_name == "interface-profile")
    {
        if(interface_profile == nullptr)
        {
            interface_profile = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile>();
        }
        return interface_profile;
    }

    if(child_yang_name == "bdac-storm-control-types")
    {
        if(bdac_storm_control_types == nullptr)
        {
            bdac_storm_control_types = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes>();
        }
        return bdac_storm_control_types;
    }

    if(child_yang_name == "split-horizon")
    {
        if(split_horizon == nullptr)
        {
            split_horizon = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon>();
        }
        return split_horizon;
    }

    if(child_yang_name == "static-mac-addresses")
    {
        if(static_mac_addresses == nullptr)
        {
            static_mac_addresses = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses>();
        }
        return static_mac_addresses;
    }

    if(child_yang_name == "interface-mac")
    {
        if(interface_mac == nullptr)
        {
            interface_mac = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac>();
        }
        return interface_mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_ip_source_guard != nullptr)
    {
        _children["interface-ip-source-guard"] = interface_ip_source_guard;
    }

    if(interface_dai != nullptr)
    {
        _children["interface-dai"] = interface_dai;
    }

    if(interface_profile != nullptr)
    {
        _children["interface-profile"] = interface_profile;
    }

    if(bdac_storm_control_types != nullptr)
    {
        _children["bdac-storm-control-types"] = bdac_storm_control_types;
    }

    if(split_horizon != nullptr)
    {
        _children["split-horizon"] = split_horizon;
    }

    if(static_mac_addresses != nullptr)
    {
        _children["static-mac-addresses"] = static_mac_addresses;
    }

    if(interface_mac != nullptr)
    {
        _children["interface-mac"] = interface_mac;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-ip-source-guard" || name == "interface-dai" || name == "interface-profile" || name == "bdac-storm-control-types" || name == "split-horizon" || name == "static-mac-addresses" || name == "interface-mac" || name == "name" || name == "interface-flooding" || name == "interface-igmp-snoop" || name == "interface-flooding-unknown-unicast" || name == "interface-mld-snoop")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::InterfaceIpSourceGuard()
    :
    logging{YType::enumeration, "logging"},
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"}
{

    yang_name = "interface-ip-source-guard"; yang_parent_name = "bd-attachment-circuit"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::~InterfaceIpSourceGuard()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| disable.is_set
	|| enable.is_set;
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ip-source-guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "disable" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDai()
    :
    logging{YType::enumeration, "logging"},
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"}
        ,
    interface_dai_address_validation(std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation>())
{
    interface_dai_address_validation->parent = this;

    yang_name = "interface-dai"; yang_parent_name = "bd-attachment-circuit"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::~InterfaceDai()
{
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| disable.is_set
	|| enable.is_set
	|| (interface_dai_address_validation !=  nullptr && interface_dai_address_validation->has_data());
}

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (interface_dai_address_validation !=  nullptr && interface_dai_address_validation->has_operation());
}

std::string L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-dai";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-dai-address-validation")
    {
        if(interface_dai_address_validation == nullptr)
        {
            interface_dai_address_validation = std::make_shared<L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation>();
        }
        return interface_dai_address_validation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_dai_address_validation != nullptr)
    {
        _children["interface-dai-address-validation"] = interface_dai_address_validation;
    }

    return _children;
}

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2vpn::Database::VlanSwitches::VlanSwitch::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-dai-address-validation" || name == "logging" || name == "disable" || name == "enable")
        return true;
    return false;
}


}
}

