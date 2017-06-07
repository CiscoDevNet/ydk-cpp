
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ma_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_ma_cfg {

Ipv4NetworkGlobal::Ipv4NetworkGlobal()
    :
    reassemble_max_packets{YType::uint32, "reassemble-max-packets"},
    reassemble_time_out{YType::uint32, "reassemble-time-out"},
    source_route{YType::boolean, "source-route"}
    	,
    qppb(std::make_shared<Ipv4NetworkGlobal::Qppb>())
	,unnumbered(std::make_shared<Ipv4NetworkGlobal::Unnumbered>())
{
    qppb->parent = this;

    unnumbered->parent = this;

    yang_name = "ipv4-network-global"; yang_parent_name = "Cisco-IOS-XR-ipv4-ma-cfg";
}

Ipv4NetworkGlobal::~Ipv4NetworkGlobal()
{
}

bool Ipv4NetworkGlobal::has_data() const
{
    return reassemble_max_packets.is_set
	|| reassemble_time_out.is_set
	|| source_route.is_set
	|| (qppb !=  nullptr && qppb->has_data())
	|| (unnumbered !=  nullptr && unnumbered->has_data());
}

bool Ipv4NetworkGlobal::has_operation() const
{
    return is_set(operation)
	|| is_set(reassemble_max_packets.operation)
	|| is_set(reassemble_time_out.operation)
	|| is_set(source_route.operation)
	|| (qppb !=  nullptr && qppb->has_operation())
	|| (unnumbered !=  nullptr && unnumbered->has_operation());
}

std::string Ipv4NetworkGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ma-cfg:ipv4-network-global";

    return path_buffer.str();

}

const EntityPath Ipv4NetworkGlobal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reassemble_max_packets.is_set || is_set(reassemble_max_packets.operation)) leaf_name_data.push_back(reassemble_max_packets.get_name_leafdata());
    if (reassemble_time_out.is_set || is_set(reassemble_time_out.operation)) leaf_name_data.push_back(reassemble_time_out.get_name_leafdata());
    if (source_route.is_set || is_set(source_route.operation)) leaf_name_data.push_back(source_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4NetworkGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qppb")
    {
        if(qppb == nullptr)
        {
            qppb = std::make_shared<Ipv4NetworkGlobal::Qppb>();
        }
        return qppb;
    }

    if(child_yang_name == "unnumbered")
    {
        if(unnumbered == nullptr)
        {
            unnumbered = std::make_shared<Ipv4NetworkGlobal::Unnumbered>();
        }
        return unnumbered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4NetworkGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(qppb != nullptr)
    {
        children["qppb"] = qppb;
    }

    if(unnumbered != nullptr)
    {
        children["unnumbered"] = unnumbered;
    }

    return children;
}

void Ipv4NetworkGlobal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reassemble-max-packets")
    {
        reassemble_max_packets = value;
    }
    if(value_path == "reassemble-time-out")
    {
        reassemble_time_out = value;
    }
    if(value_path == "source-route")
    {
        source_route = value;
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

Ipv4NetworkGlobal::Unnumbered::Unnumbered()
    :
    mpls(std::make_shared<Ipv4NetworkGlobal::Unnumbered::Mpls>())
{
    mpls->parent = this;

    yang_name = "unnumbered"; yang_parent_name = "ipv4-network-global";
}

Ipv4NetworkGlobal::Unnumbered::~Unnumbered()
{
}

bool Ipv4NetworkGlobal::Unnumbered::has_data() const
{
    return (mpls !=  nullptr && mpls->has_data());
}

bool Ipv4NetworkGlobal::Unnumbered::has_operation() const
{
    return is_set(operation)
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string Ipv4NetworkGlobal::Unnumbered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered";

    return path_buffer.str();

}

const EntityPath Ipv4NetworkGlobal::Unnumbered::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ma-cfg:ipv4-network-global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    return children;
}

void Ipv4NetworkGlobal::Unnumbered::set_value(const std::string & value_path, std::string value)
{
}

Ipv4NetworkGlobal::Unnumbered::Mpls::Mpls()
    :
    te(std::make_shared<Ipv4NetworkGlobal::Unnumbered::Mpls::Te>())
{
    te->parent = this;

    yang_name = "mpls"; yang_parent_name = "unnumbered";
}

Ipv4NetworkGlobal::Unnumbered::Mpls::~Mpls()
{
}

bool Ipv4NetworkGlobal::Unnumbered::Mpls::has_data() const
{
    return (te !=  nullptr && te->has_data());
}

bool Ipv4NetworkGlobal::Unnumbered::Mpls::has_operation() const
{
    return is_set(operation)
	|| (te !=  nullptr && te->has_operation());
}

std::string Ipv4NetworkGlobal::Unnumbered::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath Ipv4NetworkGlobal::Unnumbered::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ma-cfg:ipv4-network-global/unnumbered/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(te != nullptr)
    {
        children["te"] = te;
    }

    return children;
}

void Ipv4NetworkGlobal::Unnumbered::Mpls::set_value(const std::string & value_path, std::string value)
{
}

Ipv4NetworkGlobal::Unnumbered::Mpls::Te::Te()
    :
    interface{YType::str, "interface"}
{
    yang_name = "te"; yang_parent_name = "mpls";
}

Ipv4NetworkGlobal::Unnumbered::Mpls::Te::~Te()
{
}

bool Ipv4NetworkGlobal::Unnumbered::Mpls::Te::has_data() const
{
    return interface.is_set;
}

bool Ipv4NetworkGlobal::Unnumbered::Mpls::Te::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string Ipv4NetworkGlobal::Unnumbered::Mpls::Te::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te";

    return path_buffer.str();

}

const EntityPath Ipv4NetworkGlobal::Unnumbered::Mpls::Te::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ma-cfg:ipv4-network-global/unnumbered/mpls/" << get_segment_path();
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

std::shared_ptr<Entity> Ipv4NetworkGlobal::Unnumbered::Mpls::Te::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4NetworkGlobal::Unnumbered::Mpls::Te::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4NetworkGlobal::Unnumbered::Mpls::Te::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

Ipv4NetworkGlobal::Qppb::Qppb()
    :
    destination{YType::enumeration, "destination"},
    source{YType::enumeration, "source"}
{
    yang_name = "qppb"; yang_parent_name = "ipv4-network-global";
}

Ipv4NetworkGlobal::Qppb::~Qppb()
{
}

bool Ipv4NetworkGlobal::Qppb::has_data() const
{
    return destination.is_set
	|| source.is_set;
}

bool Ipv4NetworkGlobal::Qppb::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(source.operation);
}

std::string Ipv4NetworkGlobal::Qppb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qppb";

    return path_buffer.str();

}

const EntityPath Ipv4NetworkGlobal::Qppb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-ma-cfg:ipv4-network-global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4NetworkGlobal::Qppb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4NetworkGlobal::Qppb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4NetworkGlobal::Qppb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}

SubscriberPta::SubscriberPta()
    :
    tcp_mss_adjust{YType::uint32, "tcp-mss-adjust"}
{
    yang_name = "subscriber-pta"; yang_parent_name = "Cisco-IOS-XR-ipv4-ma-cfg";
}

SubscriberPta::~SubscriberPta()
{
}

bool SubscriberPta::has_data() const
{
    return tcp_mss_adjust.is_set;
}

bool SubscriberPta::has_operation() const
{
    return is_set(operation)
	|| is_set(tcp_mss_adjust.operation);
}

std::string SubscriberPta::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ma-cfg:subscriber-pta";

    return path_buffer.str();

}

const EntityPath SubscriberPta::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcp_mss_adjust.is_set || is_set(tcp_mss_adjust.operation)) leaf_name_data.push_back(tcp_mss_adjust.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberPta::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SubscriberPta::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SubscriberPta::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tcp-mss-adjust")
    {
        tcp_mss_adjust = value;
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

const Enum::YLeaf Ipv4QppbEnum::none {0, "none"};
const Enum::YLeaf Ipv4QppbEnum::ip_prec {1, "ip-prec"};
const Enum::YLeaf Ipv4QppbEnum::qos_grp {2, "qos-grp"};
const Enum::YLeaf Ipv4QppbEnum::both {3, "both"};


}
}

