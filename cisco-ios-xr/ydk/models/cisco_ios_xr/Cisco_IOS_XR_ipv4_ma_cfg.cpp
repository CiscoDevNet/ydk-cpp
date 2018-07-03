
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ma_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ma_cfg {

Ipv4NetworkGlobal::Ipv4NetworkGlobal()
    :
    source_route{YType::boolean, "source-route"},
    reassemble_max_packets{YType::uint32, "reassemble-max-packets"},
    reassemble_time_out{YType::uint32, "reassemble-time-out"}
        ,
    unnumbered(std::make_shared<Ipv4NetworkGlobal::Unnumbered>())
    , qppb(std::make_shared<Ipv4NetworkGlobal::Qppb>())
{
    unnumbered->parent = this;
    qppb->parent = this;

    yang_name = "ipv4-network-global"; yang_parent_name = "Cisco-IOS-XR-ipv4-ma-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Ipv4NetworkGlobal::~Ipv4NetworkGlobal()
{
}

bool Ipv4NetworkGlobal::has_data() const
{
    if (is_presence_container) return true;
    return source_route.is_set
	|| reassemble_max_packets.is_set
	|| reassemble_time_out.is_set
	|| (unnumbered !=  nullptr && unnumbered->has_data())
	|| (qppb !=  nullptr && qppb->has_data());
}

bool Ipv4NetworkGlobal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_route.yfilter)
	|| ydk::is_set(reassemble_max_packets.yfilter)
	|| ydk::is_set(reassemble_time_out.yfilter)
	|| (unnumbered !=  nullptr && unnumbered->has_operation())
	|| (qppb !=  nullptr && qppb->has_operation());
}

std::string Ipv4NetworkGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ma-cfg:ipv4-network-global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4NetworkGlobal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_route.is_set || is_set(source_route.yfilter)) leaf_name_data.push_back(source_route.get_name_leafdata());
    if (reassemble_max_packets.is_set || is_set(reassemble_max_packets.yfilter)) leaf_name_data.push_back(reassemble_max_packets.get_name_leafdata());
    if (reassemble_time_out.is_set || is_set(reassemble_time_out.yfilter)) leaf_name_data.push_back(reassemble_time_out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4NetworkGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unnumbered")
    {
        if(unnumbered == nullptr)
        {
            unnumbered = std::make_shared<Ipv4NetworkGlobal::Unnumbered>();
        }
        return unnumbered;
    }

    if(child_yang_name == "qppb")
    {
        if(qppb == nullptr)
        {
            qppb = std::make_shared<Ipv4NetworkGlobal::Qppb>();
        }
        return qppb;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4NetworkGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(unnumbered != nullptr)
    {
        children["unnumbered"] = unnumbered;
    }

    if(qppb != nullptr)
    {
        children["qppb"] = qppb;
    }

    return children;
}

void Ipv4NetworkGlobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-route")
    {
        source_route = value;
        source_route.value_namespace = name_space;
        source_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reassemble-max-packets")
    {
        reassemble_max_packets = value;
        reassemble_max_packets.value_namespace = name_space;
        reassemble_max_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reassemble-time-out")
    {
        reassemble_time_out = value;
        reassemble_time_out.value_namespace = name_space;
        reassemble_time_out.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4NetworkGlobal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-route")
    {
        source_route.yfilter = yfilter;
    }
    if(value_path == "reassemble-max-packets")
    {
        reassemble_max_packets.yfilter = yfilter;
    }
    if(value_path == "reassemble-time-out")
    {
        reassemble_time_out.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Ipv4NetworkGlobal::clone_ptr() const
{
    return std::make_shared<Ipv4NetworkGlobal>();
}

std::string Ipv4NetworkGlobal::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ipv4NetworkGlobal::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ipv4NetworkGlobal::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ipv4NetworkGlobal::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ipv4NetworkGlobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unnumbered" || name == "qppb" || name == "source-route" || name == "reassemble-max-packets" || name == "reassemble-time-out")
        return true;
    return false;
}

Ipv4NetworkGlobal::Unnumbered::Unnumbered()
    :
    mpls(std::make_shared<Ipv4NetworkGlobal::Unnumbered::Mpls>())
{
    mpls->parent = this;

    yang_name = "unnumbered"; yang_parent_name = "ipv4-network-global"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv4NetworkGlobal::Unnumbered::~Unnumbered()
{
}

bool Ipv4NetworkGlobal::Unnumbered::has_data() const
{
    if (is_presence_container) return true;
    return (mpls !=  nullptr && mpls->has_data());
}

bool Ipv4NetworkGlobal::Unnumbered::has_operation() const
{
    return is_set(yfilter)
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string Ipv4NetworkGlobal::Unnumbered::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ma-cfg:ipv4-network-global/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4NetworkGlobal::Unnumbered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4NetworkGlobal::Unnumbered::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4NetworkGlobal::Unnumbered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Ipv4NetworkGlobal::Unnumbered::Mpls>();
        }
        return mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4NetworkGlobal::Unnumbered::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    return children;
}

void Ipv4NetworkGlobal::Unnumbered::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4NetworkGlobal::Unnumbered::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4NetworkGlobal::Unnumbered::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls")
        return true;
    return false;
}

Ipv4NetworkGlobal::Unnumbered::Mpls::Mpls()
    :
    te(std::make_shared<Ipv4NetworkGlobal::Unnumbered::Mpls::Te>())
{
    te->parent = this;

    yang_name = "mpls"; yang_parent_name = "unnumbered"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv4NetworkGlobal::Unnumbered::Mpls::~Mpls()
{
}

bool Ipv4NetworkGlobal::Unnumbered::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return (te !=  nullptr && te->has_data());
}

bool Ipv4NetworkGlobal::Unnumbered::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (te !=  nullptr && te->has_operation());
}

std::string Ipv4NetworkGlobal::Unnumbered::Mpls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ma-cfg:ipv4-network-global/unnumbered/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4NetworkGlobal::Unnumbered::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4NetworkGlobal::Unnumbered::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4NetworkGlobal::Unnumbered::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te")
    {
        if(te == nullptr)
        {
            te = std::make_shared<Ipv4NetworkGlobal::Unnumbered::Mpls::Te>();
        }
        return te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4NetworkGlobal::Unnumbered::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(te != nullptr)
    {
        children["te"] = te;
    }

    return children;
}

void Ipv4NetworkGlobal::Unnumbered::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4NetworkGlobal::Unnumbered::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4NetworkGlobal::Unnumbered::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te")
        return true;
    return false;
}

Ipv4NetworkGlobal::Unnumbered::Mpls::Te::Te()
    :
    interface{YType::str, "interface"}
{

    yang_name = "te"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv4NetworkGlobal::Unnumbered::Mpls::Te::~Te()
{
}

bool Ipv4NetworkGlobal::Unnumbered::Mpls::Te::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set;
}

bool Ipv4NetworkGlobal::Unnumbered::Mpls::Te::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Ipv4NetworkGlobal::Unnumbered::Mpls::Te::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ma-cfg:ipv4-network-global/unnumbered/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4NetworkGlobal::Unnumbered::Mpls::Te::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4NetworkGlobal::Unnumbered::Mpls::Te::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4NetworkGlobal::Unnumbered::Mpls::Te::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4NetworkGlobal::Unnumbered::Mpls::Te::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv4NetworkGlobal::Unnumbered::Mpls::Te::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4NetworkGlobal::Unnumbered::Mpls::Te::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Ipv4NetworkGlobal::Unnumbered::Mpls::Te::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Ipv4NetworkGlobal::Qppb::Qppb()
    :
    source{YType::enumeration, "source"},
    destination{YType::enumeration, "destination"}
{

    yang_name = "qppb"; yang_parent_name = "ipv4-network-global"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv4NetworkGlobal::Qppb::~Qppb()
{
}

bool Ipv4NetworkGlobal::Qppb::has_data() const
{
    if (is_presence_container) return true;
    return source.is_set
	|| destination.is_set;
}

bool Ipv4NetworkGlobal::Qppb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string Ipv4NetworkGlobal::Qppb::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ma-cfg:ipv4-network-global/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4NetworkGlobal::Qppb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qppb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4NetworkGlobal::Qppb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4NetworkGlobal::Qppb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4NetworkGlobal::Qppb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv4NetworkGlobal::Qppb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4NetworkGlobal::Qppb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool Ipv4NetworkGlobal::Qppb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination")
        return true;
    return false;
}

SubscriberPta::SubscriberPta()
    :
    tcp_mss_adjust{YType::uint32, "tcp-mss-adjust"}
{

    yang_name = "subscriber-pta"; yang_parent_name = "Cisco-IOS-XR-ipv4-ma-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

SubscriberPta::~SubscriberPta()
{
}

bool SubscriberPta::has_data() const
{
    if (is_presence_container) return true;
    return tcp_mss_adjust.is_set;
}

bool SubscriberPta::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcp_mss_adjust.yfilter);
}

std::string SubscriberPta::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ma-cfg:subscriber-pta";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SubscriberPta::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcp_mss_adjust.is_set || is_set(tcp_mss_adjust.yfilter)) leaf_name_data.push_back(tcp_mss_adjust.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SubscriberPta::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberPta::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SubscriberPta::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcp-mss-adjust")
    {
        tcp_mss_adjust = value;
        tcp_mss_adjust.value_namespace = name_space;
        tcp_mss_adjust.value_namespace_prefix = name_space_prefix;
    }
}

void SubscriberPta::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcp-mss-adjust")
    {
        tcp_mss_adjust.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> SubscriberPta::clone_ptr() const
{
    return std::make_shared<SubscriberPta>();
}

std::string SubscriberPta::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SubscriberPta::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SubscriberPta::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SubscriberPta::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SubscriberPta::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-mss-adjust")
        return true;
    return false;
}

const Enum::YLeaf Ipv4Qppb::none {0, "none"};
const Enum::YLeaf Ipv4Qppb::ip_prec {1, "ip-prec"};
const Enum::YLeaf Ipv4Qppb::qos_grp {2, "qos-grp"};
const Enum::YLeaf Ipv4Qppb::both {3, "both"};


}
}

