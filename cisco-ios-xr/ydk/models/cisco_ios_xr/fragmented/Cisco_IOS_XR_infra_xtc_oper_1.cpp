
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_xtc_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_xtc_oper {

PceTopology::PrefixInfos::PrefixInfo::PrefixInfo()
    :
    node_identifier{YType::int32, "node-identifier"},
    node_identifier_xr{YType::uint32, "node-identifier-xr"}
    	,
    node_protocol_identifier(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier>())
{
    node_protocol_identifier->parent = this;

    yang_name = "prefix-info"; yang_parent_name = "prefix-infos"; is_top_level_class = false; has_list_ancestor = false;
}

PceTopology::PrefixInfos::PrefixInfo::~PrefixInfo()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return node_identifier.is_set
	|| node_identifier_xr.is_set
	|| (node_protocol_identifier !=  nullptr && node_protocol_identifier->has_data());
}

bool PceTopology::PrefixInfos::PrefixInfo::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_identifier.yfilter)
	|| ydk::is_set(node_identifier_xr.yfilter)
	|| (node_protocol_identifier !=  nullptr && node_protocol_identifier->has_operation());
}

std::string PceTopology::PrefixInfos::PrefixInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-topology/prefix-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string PceTopology::PrefixInfos::PrefixInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-info" <<"[node-identifier='" <<node_identifier <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());
    if (node_identifier_xr.is_set || is_set(node_identifier_xr.yfilter)) leaf_name_data.push_back(node_identifier_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::PrefixInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    if(child_yang_name == "node-protocol-identifier")
    {
        if(node_protocol_identifier == nullptr)
        {
            node_protocol_identifier = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier>();
        }
        return node_protocol_identifier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::PrefixInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address)
    {
        children[c->get_segment_path()] = c;
    }

    if(node_protocol_identifier != nullptr)
    {
        children["node-protocol-identifier"] = node_protocol_identifier;
    }

    return children;
}

void PceTopology::PrefixInfos::PrefixInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-identifier-xr")
    {
        node_identifier_xr = value;
        node_identifier_xr.value_namespace = name_space;
        node_identifier_xr.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
    if(value_path == "node-identifier-xr")
    {
        node_identifier_xr.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "node-protocol-identifier" || name == "node-identifier" || name == "node-identifier-xr")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "address"; yang_parent_name = "prefix-info"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::PrefixInfos::PrefixInfo::Address::~Address()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::Address::has_data() const
{
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceTopology::PrefixInfos::PrefixInfo::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceTopology::PrefixInfos::PrefixInfo::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::PrefixInfo::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::PrefixInfo::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::PrefixInfos::PrefixInfo::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PceTopology::PrefixInfos::PrefixInfo::Address::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PceTopology::PrefixInfos::PrefixInfo::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::NodeProtocolIdentifier()
    :
    ipv4_bgp_router_id{YType::str, "ipv4-bgp-router-id"},
    ipv4_bgp_router_id_set{YType::boolean, "ipv4-bgp-router-id-set"},
    ipv4te_router_id{YType::str, "ipv4te-router-id"},
    ipv4te_router_id_set{YType::boolean, "ipv4te-router-id-set"},
    node_name{YType::str, "node-name"}
{

    yang_name = "node-protocol-identifier"; yang_parent_name = "prefix-info"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::~NodeProtocolIdentifier()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::has_data() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.size(); index++)
    {
        if(srgb_information[index]->has_data())
            return true;
    }
    return ipv4_bgp_router_id.is_set
	|| ipv4_bgp_router_id_set.is_set
	|| ipv4te_router_id.is_set
	|| ipv4te_router_id_set.is_set
	|| node_name.is_set;
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::has_operation() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.size(); index++)
    {
        if(srgb_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4_bgp_router_id.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id_set.yfilter)
	|| ydk::is_set(ipv4te_router_id.yfilter)
	|| ydk::is_set(ipv4te_router_id_set.yfilter)
	|| ydk::is_set(node_name.yfilter);
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-protocol-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_bgp_router_id.is_set || is_set(ipv4_bgp_router_id.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id.get_name_leafdata());
    if (ipv4_bgp_router_id_set.is_set || is_set(ipv4_bgp_router_id_set.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id_set.get_name_leafdata());
    if (ipv4te_router_id.is_set || is_set(ipv4te_router_id.yfilter)) leaf_name_data.push_back(ipv4te_router_id.get_name_leafdata());
    if (ipv4te_router_id_set.is_set || is_set(ipv4te_router_id_set.yfilter)) leaf_name_data.push_back(ipv4te_router_id_set.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-information")
    {
        for(auto const & c : igp_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation>();
        c->parent = this;
        igp_information.push_back(c);
        return c;
    }

    if(child_yang_name == "srgb-information")
    {
        for(auto const & c : srgb_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation>();
        c->parent = this;
        srgb_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : igp_information)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : srgb_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id = value;
        ipv4_bgp_router_id.value_namespace = name_space;
        ipv4_bgp_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set = value;
        ipv4_bgp_router_id_set.value_namespace = name_space;
        ipv4_bgp_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id = value;
        ipv4te_router_id.value_namespace = name_space;
        ipv4te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set = value;
        ipv4te_router_id_set.value_namespace = name_space;
        ipv4te_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-information" || name == "srgb-information" || name == "ipv4-bgp-router-id" || name == "ipv4-bgp-router-id-set" || name == "ipv4te-router-id" || name == "ipv4te-router-id-set" || name == "node-name")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::IgpInformation()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    domain_identifier{YType::uint64, "domain-identifier"}
    	,
    igp(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp>())
{
    igp->parent = this;

    yang_name = "igp-information"; yang_parent_name = "node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::~IgpInformation()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::has_data() const
{
    return autonomous_system_number.is_set
	|| domain_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    return children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "domain-identifier")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    bgp(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp>())
	,isis(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis>())
	,ospf(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf>())
{
    bgp->parent = this;
    isis->parent = this;
    ospf->parent = this;

    yang_name = "igp"; yang_parent_name = "igp-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::~Igp()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::has_data() const
{
    return igp_id.is_set
	|| (bgp !=  nullptr && bgp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data());
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation());
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf>();
        }
        return ospf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    return children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "isis" || name == "ospf" || name == "igp-id")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::Bgp()
    :
    confed_asn{YType::uint32, "confed-asn"},
    router_id{YType::str, "router-id"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::~Bgp()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_data() const
{
    return confed_asn.is_set
	|| router_id.is_set;
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(confed_asn.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "confed-asn" || name == "router-id")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::Isis()
    :
    level{YType::uint32, "level"},
    system_id{YType::str, "system-id"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::~Isis()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::has_data() const
{
    return level.is_set
	|| system_id.is_set;
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(system_id.yfilter);
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "system-id")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::Ospf()
    :
    area{YType::uint32, "area"},
    router_id{YType::str, "router-id"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::~Ospf()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_data() const
{
    return area.is_set
	|| router_id.is_set;
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "router-id")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::SrgbInformation()
    :
    size{YType::uint32, "size"},
    start{YType::uint32, "start"}
    	,
    igp_srgb(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb>())
{
    igp_srgb->parent = this;

    yang_name = "srgb-information"; yang_parent_name = "node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::~SrgbInformation()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::has_data() const
{
    return size.is_set
	|| start.is_set
	|| (igp_srgb !=  nullptr && igp_srgb->has_data());
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(start.yfilter)
	|| (igp_srgb !=  nullptr && igp_srgb->has_operation());
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-srgb")
    {
        if(igp_srgb == nullptr)
        {
            igp_srgb = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb>();
        }
        return igp_srgb;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igp_srgb != nullptr)
    {
        children["igp-srgb"] = igp_srgb;
    }

    return children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-srgb" || name == "size" || name == "start")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::IgpSrgb()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    bgp(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp>())
	,isis(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis>())
	,ospf(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf>())
{
    bgp->parent = this;
    isis->parent = this;
    ospf->parent = this;

    yang_name = "igp-srgb"; yang_parent_name = "srgb-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::~IgpSrgb()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_data() const
{
    return igp_id.is_set
	|| (bgp !=  nullptr && bgp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data());
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation());
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-srgb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf>();
        }
        return ospf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    return children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "isis" || name == "ospf" || name == "igp-id")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::Bgp()
    :
    confed_asn{YType::uint32, "confed-asn"},
    router_id{YType::str, "router-id"}
{

    yang_name = "bgp"; yang_parent_name = "igp-srgb"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::~Bgp()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_data() const
{
    return confed_asn.is_set
	|| router_id.is_set;
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(confed_asn.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "confed-asn" || name == "router-id")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::Isis()
    :
    level{YType::uint32, "level"},
    system_id{YType::str, "system-id"}
{

    yang_name = "isis"; yang_parent_name = "igp-srgb"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::~Isis()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_data() const
{
    return level.is_set
	|| system_id.is_set;
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(system_id.yfilter);
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "system-id")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::Ospf()
    :
    area{YType::uint32, "area"},
    router_id{YType::str, "router-id"}
{

    yang_name = "ospf"; yang_parent_name = "igp-srgb"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::~Ospf()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_data() const
{
    return area.is_set
	|| router_id.is_set;
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "router-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNodes()
{

    yang_name = "topology-nodes"; yang_parent_name = "pce-topology"; is_top_level_class = false; has_list_ancestor = false;
}

PceTopology::TopologyNodes::~TopologyNodes()
{
}

bool PceTopology::TopologyNodes::has_data() const
{
    for (std::size_t index=0; index<topology_node.size(); index++)
    {
        if(topology_node[index]->has_data())
            return true;
    }
    return false;
}

bool PceTopology::TopologyNodes::has_operation() const
{
    for (std::size_t index=0; index<topology_node.size(); index++)
    {
        if(topology_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PceTopology::TopologyNodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-topology/" << get_segment_path();
    return path_buffer.str();
}

std::string PceTopology::TopologyNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-node")
    {
        for(auto const & c : topology_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PceTopology::TopologyNodes::TopologyNode>();
        c->parent = this;
        topology_node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology_node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PceTopology::TopologyNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PceTopology::TopologyNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PceTopology::TopologyNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-node")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::TopologyNode()
    :
    node_identifier{YType::int32, "node-identifier"},
    node_identifier_xr{YType::uint32, "node-identifier-xr"},
    overload{YType::boolean, "overload"}
    	,
    node_protocol_identifier(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier>())
{
    node_protocol_identifier->parent = this;

    yang_name = "topology-node"; yang_parent_name = "topology-nodes"; is_top_level_class = false; has_list_ancestor = false;
}

PceTopology::TopologyNodes::TopologyNode::~TopologyNode()
{
}

bool PceTopology::TopologyNodes::TopologyNode::has_data() const
{
    for (std::size_t index=0; index<ipv4_link.size(); index++)
    {
        if(ipv4_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_link.size(); index++)
    {
        if(ipv6_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<prefix_sid.size(); index++)
    {
        if(prefix_sid[index]->has_data())
            return true;
    }
    return node_identifier.is_set
	|| node_identifier_xr.is_set
	|| overload.is_set
	|| (node_protocol_identifier !=  nullptr && node_protocol_identifier->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::has_operation() const
{
    for (std::size_t index=0; index<ipv4_link.size(); index++)
    {
        if(ipv4_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_link.size(); index++)
    {
        if(ipv6_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<prefix_sid.size(); index++)
    {
        if(prefix_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_identifier.yfilter)
	|| ydk::is_set(node_identifier_xr.yfilter)
	|| ydk::is_set(overload.yfilter)
	|| (node_protocol_identifier !=  nullptr && node_protocol_identifier->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-topology/topology-nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string PceTopology::TopologyNodes::TopologyNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-node" <<"[node-identifier='" <<node_identifier <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());
    if (node_identifier_xr.is_set || is_set(node_identifier_xr.yfilter)) leaf_name_data.push_back(node_identifier_xr.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-link")
    {
        for(auto const & c : ipv4_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link>();
        c->parent = this;
        ipv4_link.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6-link")
    {
        for(auto const & c : ipv6_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link>();
        c->parent = this;
        ipv6_link.push_back(c);
        return c;
    }

    if(child_yang_name == "node-protocol-identifier")
    {
        if(node_protocol_identifier == nullptr)
        {
            node_protocol_identifier = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier>();
        }
        return node_protocol_identifier;
    }

    if(child_yang_name == "prefix-sid")
    {
        for(auto const & c : prefix_sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PceTopology::TopologyNodes::TopologyNode::PrefixSid>();
        c->parent = this;
        prefix_sid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_link)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6_link)
    {
        children[c->get_segment_path()] = c;
    }

    if(node_protocol_identifier != nullptr)
    {
        children["node-protocol-identifier"] = node_protocol_identifier;
    }

    for (auto const & c : prefix_sid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-identifier-xr")
    {
        node_identifier_xr = value;
        node_identifier_xr.value_namespace = name_space;
        node_identifier_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
    if(value_path == "node-identifier-xr")
    {
        node_identifier_xr.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-link" || name == "ipv6-link" || name == "node-protocol-identifier" || name == "prefix-sid" || name == "node-identifier" || name == "node-identifier-xr" || name == "overload")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::Ipv4Link()
    :
    igp_metric{YType::uint32, "igp-metric"},
    local_ipv4_address{YType::str, "local-ipv4-address"},
    max_reservable_bandwidth{YType::uint64, "max-reservable-bandwidth"},
    maximum_link_bandwidth{YType::uint64, "maximum-link-bandwidth"},
    remote_ipv4_address{YType::str, "remote-ipv4-address"},
    srlgs{YType::uint32, "srlgs"},
    te_metric{YType::uint32, "te-metric"}
    	,
    local_igp_information(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation>())
	,remote_node_protocol_identifier(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier>())
{
    local_igp_information->parent = this;
    remote_node_protocol_identifier->parent = this;

    yang_name = "ipv4-link"; yang_parent_name = "topology-node"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::~Ipv4Link()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::has_data() const
{
    for (std::size_t index=0; index<adjacency_sid.size(); index++)
    {
        if(adjacency_sid[index]->has_data())
            return true;
    }
    for (auto const & leaf : srlgs.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return igp_metric.is_set
	|| local_ipv4_address.is_set
	|| max_reservable_bandwidth.is_set
	|| maximum_link_bandwidth.is_set
	|| remote_ipv4_address.is_set
	|| te_metric.is_set
	|| (local_igp_information !=  nullptr && local_igp_information->has_data())
	|| (remote_node_protocol_identifier !=  nullptr && remote_node_protocol_identifier->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::has_operation() const
{
    for (std::size_t index=0; index<adjacency_sid.size(); index++)
    {
        if(adjacency_sid[index]->has_operation())
            return true;
    }
    for (auto const & leaf : srlgs.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(local_ipv4_address.yfilter)
	|| ydk::is_set(max_reservable_bandwidth.yfilter)
	|| ydk::is_set(maximum_link_bandwidth.yfilter)
	|| ydk::is_set(remote_ipv4_address.yfilter)
	|| ydk::is_set(srlgs.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| (local_igp_information !=  nullptr && local_igp_information->has_operation())
	|| (remote_node_protocol_identifier !=  nullptr && remote_node_protocol_identifier->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (local_ipv4_address.is_set || is_set(local_ipv4_address.yfilter)) leaf_name_data.push_back(local_ipv4_address.get_name_leafdata());
    if (max_reservable_bandwidth.is_set || is_set(max_reservable_bandwidth.yfilter)) leaf_name_data.push_back(max_reservable_bandwidth.get_name_leafdata());
    if (maximum_link_bandwidth.is_set || is_set(maximum_link_bandwidth.yfilter)) leaf_name_data.push_back(maximum_link_bandwidth.get_name_leafdata());
    if (remote_ipv4_address.is_set || is_set(remote_ipv4_address.yfilter)) leaf_name_data.push_back(remote_ipv4_address.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());

    auto srlgs_name_datas = srlgs.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlgs_name_datas.begin(), srlgs_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid")
    {
        for(auto const & c : adjacency_sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid>();
        c->parent = this;
        adjacency_sid.push_back(c);
        return c;
    }

    if(child_yang_name == "local-igp-information")
    {
        if(local_igp_information == nullptr)
        {
            local_igp_information = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation>();
        }
        return local_igp_information;
    }

    if(child_yang_name == "remote-node-protocol-identifier")
    {
        if(remote_node_protocol_identifier == nullptr)
        {
            remote_node_protocol_identifier = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier>();
        }
        return remote_node_protocol_identifier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : adjacency_sid)
    {
        children[c->get_segment_path()] = c;
    }

    if(local_igp_information != nullptr)
    {
        children["local-igp-information"] = local_igp_information;
    }

    if(remote_node_protocol_identifier != nullptr)
    {
        children["remote-node-protocol-identifier"] = remote_node_protocol_identifier;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ipv4-address")
    {
        local_ipv4_address = value;
        local_ipv4_address.value_namespace = name_space;
        local_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth = value;
        max_reservable_bandwidth.value_namespace = name_space;
        max_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-link-bandwidth")
    {
        maximum_link_bandwidth = value;
        maximum_link_bandwidth.value_namespace = name_space;
        maximum_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ipv4-address")
    {
        remote_ipv4_address = value;
        remote_ipv4_address.value_namespace = name_space;
        remote_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlgs")
    {
        srlgs.append(value);
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "local-ipv4-address")
    {
        local_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "maximum-link-bandwidth")
    {
        maximum_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "remote-ipv4-address")
    {
        remote_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "srlgs")
    {
        srlgs.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid" || name == "local-igp-information" || name == "remote-node-protocol-identifier" || name == "igp-metric" || name == "local-ipv4-address" || name == "max-reservable-bandwidth" || name == "maximum-link-bandwidth" || name == "remote-ipv4-address" || name == "srlgs" || name == "te-metric")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::AdjacencySid()
    :
    domain_identifier{YType::uint64, "domain-identifier"},
    eflag{YType::boolean, "eflag"},
    lflag{YType::boolean, "lflag"},
    mpls_label{YType::uint32, "mpls-label"},
    nflag{YType::boolean, "nflag"},
    pflag{YType::boolean, "pflag"},
    rflag{YType::boolean, "rflag"},
    sid_type{YType::enumeration, "sid-type"},
    vflag{YType::boolean, "vflag"}
    	,
    sid_prefix(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix>())
{
    sid_prefix->parent = this;

    yang_name = "adjacency-sid"; yang_parent_name = "ipv4-link"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::~AdjacencySid()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::has_data() const
{
    return domain_identifier.is_set
	|| eflag.is_set
	|| lflag.is_set
	|| mpls_label.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| rflag.is_set
	|| sid_type.is_set
	|| vflag.is_set
	|| (sid_prefix !=  nullptr && sid_prefix->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| ydk::is_set(eflag.yfilter)
	|| ydk::is_set(lflag.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(nflag.yfilter)
	|| ydk::is_set(pflag.yfilter)
	|| ydk::is_set(rflag.yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(vflag.yfilter)
	|| (sid_prefix !=  nullptr && sid_prefix->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.yfilter)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.yfilter)) leaf_name_data.push_back(lflag.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.yfilter)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.yfilter)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.yfilter)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.yfilter)) leaf_name_data.push_back(vflag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-prefix")
    {
        if(sid_prefix == nullptr)
        {
            sid_prefix = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix>();
        }
        return sid_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sid_prefix != nullptr)
    {
        children["sid-prefix"] = sid_prefix;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eflag")
    {
        eflag = value;
        eflag.value_namespace = name_space;
        eflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lflag")
    {
        lflag = value;
        lflag.value_namespace = name_space;
        lflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag")
    {
        nflag = value;
        nflag.value_namespace = name_space;
        nflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pflag")
    {
        pflag = value;
        pflag.value_namespace = name_space;
        pflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rflag")
    {
        rflag = value;
        rflag.value_namespace = name_space;
        rflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vflag")
    {
        vflag = value;
        vflag.value_namespace = name_space;
        vflag.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
    if(value_path == "eflag")
    {
        eflag.yfilter = yfilter;
    }
    if(value_path == "lflag")
    {
        lflag.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "nflag")
    {
        nflag.yfilter = yfilter;
    }
    if(value_path == "pflag")
    {
        pflag.yfilter = yfilter;
    }
    if(value_path == "rflag")
    {
        rflag.yfilter = yfilter;
    }
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "vflag")
    {
        vflag.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-prefix" || name == "domain-identifier" || name == "eflag" || name == "lflag" || name == "mpls-label" || name == "nflag" || name == "pflag" || name == "rflag" || name == "sid-type" || name == "vflag")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::SidPrefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "sid-prefix"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::~SidPrefix()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::has_data() const
{
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::LocalIgpInformation()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    domain_identifier{YType::uint64, "domain-identifier"}
    	,
    igp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp>())
{
    igp->parent = this;

    yang_name = "local-igp-information"; yang_parent_name = "ipv4-link"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::~LocalIgpInformation()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::has_data() const
{
    return autonomous_system_number.is_set
	|| domain_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-igp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "domain-identifier")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    bgp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp>())
	,isis(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis>())
	,ospf(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf>())
{
    bgp->parent = this;
    isis->parent = this;
    ospf->parent = this;

    yang_name = "igp"; yang_parent_name = "local-igp-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::~Igp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::has_data() const
{
    return igp_id.is_set
	|| (bgp !=  nullptr && bgp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf>();
        }
        return ospf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "isis" || name == "ospf" || name == "igp-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::Bgp()
    :
    confed_asn{YType::uint32, "confed-asn"},
    router_id{YType::str, "router-id"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::~Bgp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::has_data() const
{
    return confed_asn.is_set
	|| router_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(confed_asn.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "confed-asn" || name == "router-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::Isis()
    :
    level{YType::uint32, "level"},
    system_id{YType::str, "system-id"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::~Isis()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::has_data() const
{
    return level.is_set
	|| system_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(system_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "system-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::Ospf()
    :
    area{YType::uint32, "area"},
    router_id{YType::str, "router-id"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::~Ospf()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::has_data() const
{
    return area.is_set
	|| router_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "router-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::RemoteNodeProtocolIdentifier()
    :
    ipv4_bgp_router_id{YType::str, "ipv4-bgp-router-id"},
    ipv4_bgp_router_id_set{YType::boolean, "ipv4-bgp-router-id-set"},
    ipv4te_router_id{YType::str, "ipv4te-router-id"},
    ipv4te_router_id_set{YType::boolean, "ipv4te-router-id-set"},
    node_name{YType::str, "node-name"}
{

    yang_name = "remote-node-protocol-identifier"; yang_parent_name = "ipv4-link"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::~RemoteNodeProtocolIdentifier()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::has_data() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.size(); index++)
    {
        if(srgb_information[index]->has_data())
            return true;
    }
    return ipv4_bgp_router_id.is_set
	|| ipv4_bgp_router_id_set.is_set
	|| ipv4te_router_id.is_set
	|| ipv4te_router_id_set.is_set
	|| node_name.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::has_operation() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.size(); index++)
    {
        if(srgb_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4_bgp_router_id.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id_set.yfilter)
	|| ydk::is_set(ipv4te_router_id.yfilter)
	|| ydk::is_set(ipv4te_router_id_set.yfilter)
	|| ydk::is_set(node_name.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-node-protocol-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_bgp_router_id.is_set || is_set(ipv4_bgp_router_id.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id.get_name_leafdata());
    if (ipv4_bgp_router_id_set.is_set || is_set(ipv4_bgp_router_id_set.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id_set.get_name_leafdata());
    if (ipv4te_router_id.is_set || is_set(ipv4te_router_id.yfilter)) leaf_name_data.push_back(ipv4te_router_id.get_name_leafdata());
    if (ipv4te_router_id_set.is_set || is_set(ipv4te_router_id_set.yfilter)) leaf_name_data.push_back(ipv4te_router_id_set.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-information")
    {
        for(auto const & c : igp_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation>();
        c->parent = this;
        igp_information.push_back(c);
        return c;
    }

    if(child_yang_name == "srgb-information")
    {
        for(auto const & c : srgb_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation>();
        c->parent = this;
        srgb_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : igp_information)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : srgb_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id = value;
        ipv4_bgp_router_id.value_namespace = name_space;
        ipv4_bgp_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set = value;
        ipv4_bgp_router_id_set.value_namespace = name_space;
        ipv4_bgp_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id = value;
        ipv4te_router_id.value_namespace = name_space;
        ipv4te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set = value;
        ipv4te_router_id_set.value_namespace = name_space;
        ipv4te_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-information" || name == "srgb-information" || name == "ipv4-bgp-router-id" || name == "ipv4-bgp-router-id-set" || name == "ipv4te-router-id" || name == "ipv4te-router-id-set" || name == "node-name")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::IgpInformation()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    domain_identifier{YType::uint64, "domain-identifier"}
    	,
    igp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp>())
{
    igp->parent = this;

    yang_name = "igp-information"; yang_parent_name = "remote-node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::~IgpInformation()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::has_data() const
{
    return autonomous_system_number.is_set
	|| domain_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "domain-identifier")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    bgp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp>())
	,isis(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis>())
	,ospf(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf>())
{
    bgp->parent = this;
    isis->parent = this;
    ospf->parent = this;

    yang_name = "igp"; yang_parent_name = "igp-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::~Igp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::has_data() const
{
    return igp_id.is_set
	|| (bgp !=  nullptr && bgp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf>();
        }
        return ospf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "isis" || name == "ospf" || name == "igp-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::Bgp()
    :
    confed_asn{YType::uint32, "confed-asn"},
    router_id{YType::str, "router-id"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::~Bgp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_data() const
{
    return confed_asn.is_set
	|| router_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(confed_asn.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "confed-asn" || name == "router-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::Isis()
    :
    level{YType::uint32, "level"},
    system_id{YType::str, "system-id"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::~Isis()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::has_data() const
{
    return level.is_set
	|| system_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(system_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "system-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::Ospf()
    :
    area{YType::uint32, "area"},
    router_id{YType::str, "router-id"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::~Ospf()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_data() const
{
    return area.is_set
	|| router_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "router-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::SrgbInformation()
    :
    size{YType::uint32, "size"},
    start{YType::uint32, "start"}
    	,
    igp_srgb(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb>())
{
    igp_srgb->parent = this;

    yang_name = "srgb-information"; yang_parent_name = "remote-node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::~SrgbInformation()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::has_data() const
{
    return size.is_set
	|| start.is_set
	|| (igp_srgb !=  nullptr && igp_srgb->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(start.yfilter)
	|| (igp_srgb !=  nullptr && igp_srgb->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-srgb")
    {
        if(igp_srgb == nullptr)
        {
            igp_srgb = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb>();
        }
        return igp_srgb;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igp_srgb != nullptr)
    {
        children["igp-srgb"] = igp_srgb;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-srgb" || name == "size" || name == "start")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::IgpSrgb()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    bgp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp>())
	,isis(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis>())
	,ospf(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf>())
{
    bgp->parent = this;
    isis->parent = this;
    ospf->parent = this;

    yang_name = "igp-srgb"; yang_parent_name = "srgb-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::~IgpSrgb()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_data() const
{
    return igp_id.is_set
	|| (bgp !=  nullptr && bgp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-srgb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf>();
        }
        return ospf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "isis" || name == "ospf" || name == "igp-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::Bgp()
    :
    confed_asn{YType::uint32, "confed-asn"},
    router_id{YType::str, "router-id"}
{

    yang_name = "bgp"; yang_parent_name = "igp-srgb"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::~Bgp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_data() const
{
    return confed_asn.is_set
	|| router_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(confed_asn.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "confed-asn" || name == "router-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::Isis()
    :
    level{YType::uint32, "level"},
    system_id{YType::str, "system-id"}
{

    yang_name = "isis"; yang_parent_name = "igp-srgb"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::~Isis()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_data() const
{
    return level.is_set
	|| system_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(system_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "system-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::Ospf()
    :
    area{YType::uint32, "area"},
    router_id{YType::str, "router-id"}
{

    yang_name = "ospf"; yang_parent_name = "igp-srgb"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::~Ospf()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_data() const
{
    return area.is_set
	|| router_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "router-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::Ipv6Link()
    :
    igp_metric{YType::uint32, "igp-metric"},
    local_ipv6_address{YType::str, "local-ipv6-address"},
    max_reservable_bandwidth{YType::uint64, "max-reservable-bandwidth"},
    maximum_link_bandwidth{YType::uint64, "maximum-link-bandwidth"},
    remote_ipv6_address{YType::str, "remote-ipv6-address"},
    te_metric{YType::uint32, "te-metric"}
    	,
    local_igp_information(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation>())
	,remote_node_protocol_identifier(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier>())
{
    local_igp_information->parent = this;
    remote_node_protocol_identifier->parent = this;

    yang_name = "ipv6-link"; yang_parent_name = "topology-node"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::~Ipv6Link()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::has_data() const
{
    for (std::size_t index=0; index<adjacency_sid.size(); index++)
    {
        if(adjacency_sid[index]->has_data())
            return true;
    }
    return igp_metric.is_set
	|| local_ipv6_address.is_set
	|| max_reservable_bandwidth.is_set
	|| maximum_link_bandwidth.is_set
	|| remote_ipv6_address.is_set
	|| te_metric.is_set
	|| (local_igp_information !=  nullptr && local_igp_information->has_data())
	|| (remote_node_protocol_identifier !=  nullptr && remote_node_protocol_identifier->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::has_operation() const
{
    for (std::size_t index=0; index<adjacency_sid.size(); index++)
    {
        if(adjacency_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(local_ipv6_address.yfilter)
	|| ydk::is_set(max_reservable_bandwidth.yfilter)
	|| ydk::is_set(maximum_link_bandwidth.yfilter)
	|| ydk::is_set(remote_ipv6_address.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| (local_igp_information !=  nullptr && local_igp_information->has_operation())
	|| (remote_node_protocol_identifier !=  nullptr && remote_node_protocol_identifier->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (local_ipv6_address.is_set || is_set(local_ipv6_address.yfilter)) leaf_name_data.push_back(local_ipv6_address.get_name_leafdata());
    if (max_reservable_bandwidth.is_set || is_set(max_reservable_bandwidth.yfilter)) leaf_name_data.push_back(max_reservable_bandwidth.get_name_leafdata());
    if (maximum_link_bandwidth.is_set || is_set(maximum_link_bandwidth.yfilter)) leaf_name_data.push_back(maximum_link_bandwidth.get_name_leafdata());
    if (remote_ipv6_address.is_set || is_set(remote_ipv6_address.yfilter)) leaf_name_data.push_back(remote_ipv6_address.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid")
    {
        for(auto const & c : adjacency_sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid>();
        c->parent = this;
        adjacency_sid.push_back(c);
        return c;
    }

    if(child_yang_name == "local-igp-information")
    {
        if(local_igp_information == nullptr)
        {
            local_igp_information = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation>();
        }
        return local_igp_information;
    }

    if(child_yang_name == "remote-node-protocol-identifier")
    {
        if(remote_node_protocol_identifier == nullptr)
        {
            remote_node_protocol_identifier = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier>();
        }
        return remote_node_protocol_identifier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : adjacency_sid)
    {
        children[c->get_segment_path()] = c;
    }

    if(local_igp_information != nullptr)
    {
        children["local-igp-information"] = local_igp_information;
    }

    if(remote_node_protocol_identifier != nullptr)
    {
        children["remote-node-protocol-identifier"] = remote_node_protocol_identifier;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ipv6-address")
    {
        local_ipv6_address = value;
        local_ipv6_address.value_namespace = name_space;
        local_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth = value;
        max_reservable_bandwidth.value_namespace = name_space;
        max_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-link-bandwidth")
    {
        maximum_link_bandwidth = value;
        maximum_link_bandwidth.value_namespace = name_space;
        maximum_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ipv6-address")
    {
        remote_ipv6_address = value;
        remote_ipv6_address.value_namespace = name_space;
        remote_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "local-ipv6-address")
    {
        local_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "maximum-link-bandwidth")
    {
        maximum_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "remote-ipv6-address")
    {
        remote_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid" || name == "local-igp-information" || name == "remote-node-protocol-identifier" || name == "igp-metric" || name == "local-ipv6-address" || name == "max-reservable-bandwidth" || name == "maximum-link-bandwidth" || name == "remote-ipv6-address" || name == "te-metric")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::AdjacencySid()
    :
    domain_identifier{YType::uint64, "domain-identifier"},
    eflag{YType::boolean, "eflag"},
    lflag{YType::boolean, "lflag"},
    mpls_label{YType::uint32, "mpls-label"},
    nflag{YType::boolean, "nflag"},
    pflag{YType::boolean, "pflag"},
    rflag{YType::boolean, "rflag"},
    sid_type{YType::enumeration, "sid-type"},
    vflag{YType::boolean, "vflag"}
    	,
    sid_prefix(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix>())
{
    sid_prefix->parent = this;

    yang_name = "adjacency-sid"; yang_parent_name = "ipv6-link"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::~AdjacencySid()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::has_data() const
{
    return domain_identifier.is_set
	|| eflag.is_set
	|| lflag.is_set
	|| mpls_label.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| rflag.is_set
	|| sid_type.is_set
	|| vflag.is_set
	|| (sid_prefix !=  nullptr && sid_prefix->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| ydk::is_set(eflag.yfilter)
	|| ydk::is_set(lflag.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(nflag.yfilter)
	|| ydk::is_set(pflag.yfilter)
	|| ydk::is_set(rflag.yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(vflag.yfilter)
	|| (sid_prefix !=  nullptr && sid_prefix->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.yfilter)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.yfilter)) leaf_name_data.push_back(lflag.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.yfilter)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.yfilter)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.yfilter)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.yfilter)) leaf_name_data.push_back(vflag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-prefix")
    {
        if(sid_prefix == nullptr)
        {
            sid_prefix = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix>();
        }
        return sid_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sid_prefix != nullptr)
    {
        children["sid-prefix"] = sid_prefix;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eflag")
    {
        eflag = value;
        eflag.value_namespace = name_space;
        eflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lflag")
    {
        lflag = value;
        lflag.value_namespace = name_space;
        lflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag")
    {
        nflag = value;
        nflag.value_namespace = name_space;
        nflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pflag")
    {
        pflag = value;
        pflag.value_namespace = name_space;
        pflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rflag")
    {
        rflag = value;
        rflag.value_namespace = name_space;
        rflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vflag")
    {
        vflag = value;
        vflag.value_namespace = name_space;
        vflag.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
    if(value_path == "eflag")
    {
        eflag.yfilter = yfilter;
    }
    if(value_path == "lflag")
    {
        lflag.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "nflag")
    {
        nflag.yfilter = yfilter;
    }
    if(value_path == "pflag")
    {
        pflag.yfilter = yfilter;
    }
    if(value_path == "rflag")
    {
        rflag.yfilter = yfilter;
    }
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "vflag")
    {
        vflag.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-prefix" || name == "domain-identifier" || name == "eflag" || name == "lflag" || name == "mpls-label" || name == "nflag" || name == "pflag" || name == "rflag" || name == "sid-type" || name == "vflag")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::SidPrefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "sid-prefix"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::~SidPrefix()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::has_data() const
{
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::LocalIgpInformation()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    domain_identifier{YType::uint64, "domain-identifier"}
    	,
    igp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp>())
{
    igp->parent = this;

    yang_name = "local-igp-information"; yang_parent_name = "ipv6-link"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::~LocalIgpInformation()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::has_data() const
{
    return autonomous_system_number.is_set
	|| domain_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-igp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "domain-identifier")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    bgp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp>())
	,isis(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis>())
	,ospf(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf>())
{
    bgp->parent = this;
    isis->parent = this;
    ospf->parent = this;

    yang_name = "igp"; yang_parent_name = "local-igp-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::~Igp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::has_data() const
{
    return igp_id.is_set
	|| (bgp !=  nullptr && bgp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf>();
        }
        return ospf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "isis" || name == "ospf" || name == "igp-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::Bgp()
    :
    confed_asn{YType::uint32, "confed-asn"},
    router_id{YType::str, "router-id"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::~Bgp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::has_data() const
{
    return confed_asn.is_set
	|| router_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(confed_asn.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "confed-asn" || name == "router-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::Isis()
    :
    level{YType::uint32, "level"},
    system_id{YType::str, "system-id"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::~Isis()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::has_data() const
{
    return level.is_set
	|| system_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(system_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "system-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::Ospf()
    :
    area{YType::uint32, "area"},
    router_id{YType::str, "router-id"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::~Ospf()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::has_data() const
{
    return area.is_set
	|| router_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "router-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::RemoteNodeProtocolIdentifier()
    :
    ipv4_bgp_router_id{YType::str, "ipv4-bgp-router-id"},
    ipv4_bgp_router_id_set{YType::boolean, "ipv4-bgp-router-id-set"},
    ipv4te_router_id{YType::str, "ipv4te-router-id"},
    ipv4te_router_id_set{YType::boolean, "ipv4te-router-id-set"},
    node_name{YType::str, "node-name"}
{

    yang_name = "remote-node-protocol-identifier"; yang_parent_name = "ipv6-link"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::~RemoteNodeProtocolIdentifier()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::has_data() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.size(); index++)
    {
        if(srgb_information[index]->has_data())
            return true;
    }
    return ipv4_bgp_router_id.is_set
	|| ipv4_bgp_router_id_set.is_set
	|| ipv4te_router_id.is_set
	|| ipv4te_router_id_set.is_set
	|| node_name.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::has_operation() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.size(); index++)
    {
        if(srgb_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4_bgp_router_id.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id_set.yfilter)
	|| ydk::is_set(ipv4te_router_id.yfilter)
	|| ydk::is_set(ipv4te_router_id_set.yfilter)
	|| ydk::is_set(node_name.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-node-protocol-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_bgp_router_id.is_set || is_set(ipv4_bgp_router_id.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id.get_name_leafdata());
    if (ipv4_bgp_router_id_set.is_set || is_set(ipv4_bgp_router_id_set.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id_set.get_name_leafdata());
    if (ipv4te_router_id.is_set || is_set(ipv4te_router_id.yfilter)) leaf_name_data.push_back(ipv4te_router_id.get_name_leafdata());
    if (ipv4te_router_id_set.is_set || is_set(ipv4te_router_id_set.yfilter)) leaf_name_data.push_back(ipv4te_router_id_set.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-information")
    {
        for(auto const & c : igp_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation>();
        c->parent = this;
        igp_information.push_back(c);
        return c;
    }

    if(child_yang_name == "srgb-information")
    {
        for(auto const & c : srgb_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation>();
        c->parent = this;
        srgb_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : igp_information)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : srgb_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id = value;
        ipv4_bgp_router_id.value_namespace = name_space;
        ipv4_bgp_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set = value;
        ipv4_bgp_router_id_set.value_namespace = name_space;
        ipv4_bgp_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id = value;
        ipv4te_router_id.value_namespace = name_space;
        ipv4te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set = value;
        ipv4te_router_id_set.value_namespace = name_space;
        ipv4te_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-information" || name == "srgb-information" || name == "ipv4-bgp-router-id" || name == "ipv4-bgp-router-id-set" || name == "ipv4te-router-id" || name == "ipv4te-router-id-set" || name == "node-name")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::IgpInformation()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    domain_identifier{YType::uint64, "domain-identifier"}
    	,
    igp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp>())
{
    igp->parent = this;

    yang_name = "igp-information"; yang_parent_name = "remote-node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::~IgpInformation()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::has_data() const
{
    return autonomous_system_number.is_set
	|| domain_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "domain-identifier")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    bgp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp>())
	,isis(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis>())
	,ospf(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf>())
{
    bgp->parent = this;
    isis->parent = this;
    ospf->parent = this;

    yang_name = "igp"; yang_parent_name = "igp-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::~Igp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::has_data() const
{
    return igp_id.is_set
	|| (bgp !=  nullptr && bgp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf>();
        }
        return ospf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "isis" || name == "ospf" || name == "igp-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::Bgp()
    :
    confed_asn{YType::uint32, "confed-asn"},
    router_id{YType::str, "router-id"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::~Bgp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_data() const
{
    return confed_asn.is_set
	|| router_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(confed_asn.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "confed-asn" || name == "router-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::Isis()
    :
    level{YType::uint32, "level"},
    system_id{YType::str, "system-id"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::~Isis()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::has_data() const
{
    return level.is_set
	|| system_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(system_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "system-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::Ospf()
    :
    area{YType::uint32, "area"},
    router_id{YType::str, "router-id"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::~Ospf()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_data() const
{
    return area.is_set
	|| router_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "router-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::SrgbInformation()
    :
    size{YType::uint32, "size"},
    start{YType::uint32, "start"}
    	,
    igp_srgb(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb>())
{
    igp_srgb->parent = this;

    yang_name = "srgb-information"; yang_parent_name = "remote-node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::~SrgbInformation()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::has_data() const
{
    return size.is_set
	|| start.is_set
	|| (igp_srgb !=  nullptr && igp_srgb->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(start.yfilter)
	|| (igp_srgb !=  nullptr && igp_srgb->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-srgb")
    {
        if(igp_srgb == nullptr)
        {
            igp_srgb = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb>();
        }
        return igp_srgb;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igp_srgb != nullptr)
    {
        children["igp-srgb"] = igp_srgb;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-srgb" || name == "size" || name == "start")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::IgpSrgb()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    bgp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp>())
	,isis(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis>())
	,ospf(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf>())
{
    bgp->parent = this;
    isis->parent = this;
    ospf->parent = this;

    yang_name = "igp-srgb"; yang_parent_name = "srgb-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::~IgpSrgb()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_data() const
{
    return igp_id.is_set
	|| (bgp !=  nullptr && bgp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-srgb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf>();
        }
        return ospf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "isis" || name == "ospf" || name == "igp-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::Bgp()
    :
    confed_asn{YType::uint32, "confed-asn"},
    router_id{YType::str, "router-id"}
{

    yang_name = "bgp"; yang_parent_name = "igp-srgb"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::~Bgp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_data() const
{
    return confed_asn.is_set
	|| router_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(confed_asn.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "confed-asn" || name == "router-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::Isis()
    :
    level{YType::uint32, "level"},
    system_id{YType::str, "system-id"}
{

    yang_name = "isis"; yang_parent_name = "igp-srgb"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::~Isis()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_data() const
{
    return level.is_set
	|| system_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(system_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "system-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::Ospf()
    :
    area{YType::uint32, "area"},
    router_id{YType::str, "router-id"}
{

    yang_name = "ospf"; yang_parent_name = "igp-srgb"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::~Ospf()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_data() const
{
    return area.is_set
	|| router_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "router-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::NodeProtocolIdentifier()
    :
    ipv4_bgp_router_id{YType::str, "ipv4-bgp-router-id"},
    ipv4_bgp_router_id_set{YType::boolean, "ipv4-bgp-router-id-set"},
    ipv4te_router_id{YType::str, "ipv4te-router-id"},
    ipv4te_router_id_set{YType::boolean, "ipv4te-router-id-set"},
    node_name{YType::str, "node-name"}
{

    yang_name = "node-protocol-identifier"; yang_parent_name = "topology-node"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::~NodeProtocolIdentifier()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::has_data() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.size(); index++)
    {
        if(srgb_information[index]->has_data())
            return true;
    }
    return ipv4_bgp_router_id.is_set
	|| ipv4_bgp_router_id_set.is_set
	|| ipv4te_router_id.is_set
	|| ipv4te_router_id_set.is_set
	|| node_name.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::has_operation() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.size(); index++)
    {
        if(srgb_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4_bgp_router_id.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id_set.yfilter)
	|| ydk::is_set(ipv4te_router_id.yfilter)
	|| ydk::is_set(ipv4te_router_id_set.yfilter)
	|| ydk::is_set(node_name.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-protocol-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_bgp_router_id.is_set || is_set(ipv4_bgp_router_id.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id.get_name_leafdata());
    if (ipv4_bgp_router_id_set.is_set || is_set(ipv4_bgp_router_id_set.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id_set.get_name_leafdata());
    if (ipv4te_router_id.is_set || is_set(ipv4te_router_id.yfilter)) leaf_name_data.push_back(ipv4te_router_id.get_name_leafdata());
    if (ipv4te_router_id_set.is_set || is_set(ipv4te_router_id_set.yfilter)) leaf_name_data.push_back(ipv4te_router_id_set.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-information")
    {
        for(auto const & c : igp_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation>();
        c->parent = this;
        igp_information.push_back(c);
        return c;
    }

    if(child_yang_name == "srgb-information")
    {
        for(auto const & c : srgb_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation>();
        c->parent = this;
        srgb_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : igp_information)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : srgb_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id = value;
        ipv4_bgp_router_id.value_namespace = name_space;
        ipv4_bgp_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set = value;
        ipv4_bgp_router_id_set.value_namespace = name_space;
        ipv4_bgp_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id = value;
        ipv4te_router_id.value_namespace = name_space;
        ipv4te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set = value;
        ipv4te_router_id_set.value_namespace = name_space;
        ipv4te_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-information" || name == "srgb-information" || name == "ipv4-bgp-router-id" || name == "ipv4-bgp-router-id-set" || name == "ipv4te-router-id" || name == "ipv4te-router-id-set" || name == "node-name")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::IgpInformation()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    domain_identifier{YType::uint64, "domain-identifier"}
    	,
    igp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp>())
{
    igp->parent = this;

    yang_name = "igp-information"; yang_parent_name = "node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::~IgpInformation()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::has_data() const
{
    return autonomous_system_number.is_set
	|| domain_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "domain-identifier")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    bgp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp>())
	,isis(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis>())
	,ospf(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf>())
{
    bgp->parent = this;
    isis->parent = this;
    ospf->parent = this;

    yang_name = "igp"; yang_parent_name = "igp-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::~Igp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::has_data() const
{
    return igp_id.is_set
	|| (bgp !=  nullptr && bgp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf>();
        }
        return ospf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "isis" || name == "ospf" || name == "igp-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::Bgp()
    :
    confed_asn{YType::uint32, "confed-asn"},
    router_id{YType::str, "router-id"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::~Bgp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_data() const
{
    return confed_asn.is_set
	|| router_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(confed_asn.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "confed-asn" || name == "router-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::Isis()
    :
    level{YType::uint32, "level"},
    system_id{YType::str, "system-id"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::~Isis()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::has_data() const
{
    return level.is_set
	|| system_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(system_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "system-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::Ospf()
    :
    area{YType::uint32, "area"},
    router_id{YType::str, "router-id"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::~Ospf()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_data() const
{
    return area.is_set
	|| router_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "router-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::SrgbInformation()
    :
    size{YType::uint32, "size"},
    start{YType::uint32, "start"}
    	,
    igp_srgb(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb>())
{
    igp_srgb->parent = this;

    yang_name = "srgb-information"; yang_parent_name = "node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::~SrgbInformation()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::has_data() const
{
    return size.is_set
	|| start.is_set
	|| (igp_srgb !=  nullptr && igp_srgb->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(start.yfilter)
	|| (igp_srgb !=  nullptr && igp_srgb->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-srgb")
    {
        if(igp_srgb == nullptr)
        {
            igp_srgb = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb>();
        }
        return igp_srgb;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igp_srgb != nullptr)
    {
        children["igp-srgb"] = igp_srgb;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-srgb" || name == "size" || name == "start")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::IgpSrgb()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    bgp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp>())
	,isis(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis>())
	,ospf(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf>())
{
    bgp->parent = this;
    isis->parent = this;
    ospf->parent = this;

    yang_name = "igp-srgb"; yang_parent_name = "srgb-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::~IgpSrgb()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_data() const
{
    return igp_id.is_set
	|| (bgp !=  nullptr && bgp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-srgb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf>();
        }
        return ospf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "isis" || name == "ospf" || name == "igp-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::Bgp()
    :
    confed_asn{YType::uint32, "confed-asn"},
    router_id{YType::str, "router-id"}
{

    yang_name = "bgp"; yang_parent_name = "igp-srgb"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::~Bgp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_data() const
{
    return confed_asn.is_set
	|| router_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(confed_asn.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "confed-asn" || name == "router-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::Isis()
    :
    level{YType::uint32, "level"},
    system_id{YType::str, "system-id"}
{

    yang_name = "isis"; yang_parent_name = "igp-srgb"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::~Isis()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_data() const
{
    return level.is_set
	|| system_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(system_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "system-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::Ospf()
    :
    area{YType::uint32, "area"},
    router_id{YType::str, "router-id"}
{

    yang_name = "ospf"; yang_parent_name = "igp-srgb"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::~Ospf()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_data() const
{
    return area.is_set
	|| router_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "router-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::PrefixSid::PrefixSid()
    :
    domain_identifier{YType::uint64, "domain-identifier"},
    eflag{YType::boolean, "eflag"},
    lflag{YType::boolean, "lflag"},
    mpls_label{YType::uint32, "mpls-label"},
    nflag{YType::boolean, "nflag"},
    pflag{YType::boolean, "pflag"},
    rflag{YType::boolean, "rflag"},
    sid_type{YType::enumeration, "sid-type"},
    vflag{YType::boolean, "vflag"}
    	,
    sid_prefix(std::make_shared<PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix>())
{
    sid_prefix->parent = this;

    yang_name = "prefix-sid"; yang_parent_name = "topology-node"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::PrefixSid::~PrefixSid()
{
}

bool PceTopology::TopologyNodes::TopologyNode::PrefixSid::has_data() const
{
    return domain_identifier.is_set
	|| eflag.is_set
	|| lflag.is_set
	|| mpls_label.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| rflag.is_set
	|| sid_type.is_set
	|| vflag.is_set
	|| (sid_prefix !=  nullptr && sid_prefix->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::PrefixSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| ydk::is_set(eflag.yfilter)
	|| ydk::is_set(lflag.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(nflag.yfilter)
	|| ydk::is_set(pflag.yfilter)
	|| ydk::is_set(rflag.yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(vflag.yfilter)
	|| (sid_prefix !=  nullptr && sid_prefix->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::PrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::PrefixSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.yfilter)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.yfilter)) leaf_name_data.push_back(lflag.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.yfilter)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.yfilter)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.yfilter)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.yfilter)) leaf_name_data.push_back(vflag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::PrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-prefix")
    {
        if(sid_prefix == nullptr)
        {
            sid_prefix = std::make_shared<PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix>();
        }
        return sid_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::PrefixSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sid_prefix != nullptr)
    {
        children["sid-prefix"] = sid_prefix;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::PrefixSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eflag")
    {
        eflag = value;
        eflag.value_namespace = name_space;
        eflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lflag")
    {
        lflag = value;
        lflag.value_namespace = name_space;
        lflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag")
    {
        nflag = value;
        nflag.value_namespace = name_space;
        nflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pflag")
    {
        pflag = value;
        pflag.value_namespace = name_space;
        pflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rflag")
    {
        rflag = value;
        rflag.value_namespace = name_space;
        rflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vflag")
    {
        vflag = value;
        vflag.value_namespace = name_space;
        vflag.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::PrefixSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
    if(value_path == "eflag")
    {
        eflag.yfilter = yfilter;
    }
    if(value_path == "lflag")
    {
        lflag.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "nflag")
    {
        nflag.yfilter = yfilter;
    }
    if(value_path == "pflag")
    {
        pflag.yfilter = yfilter;
    }
    if(value_path == "rflag")
    {
        rflag.yfilter = yfilter;
    }
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "vflag")
    {
        vflag.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::PrefixSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-prefix" || name == "domain-identifier" || name == "eflag" || name == "lflag" || name == "mpls-label" || name == "nflag" || name == "pflag" || name == "rflag" || name == "sid-type" || name == "vflag")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::SidPrefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "sid-prefix"; yang_parent_name = "prefix-sid"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::~SidPrefix()
{
}

bool PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::has_data() const
{
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PceTopology::TopologySummary::TopologySummary()
    :
    adjacency_sids{YType::uint32, "adjacency-sids"},
    epe_links{YType::uint32, "epe-links"},
    epesids{YType::uint32, "epesids"},
    links{YType::uint32, "links"},
    lookup_nodes{YType::uint32, "lookup-nodes"},
    nodes{YType::uint32, "nodes"},
    prefix_sids{YType::uint32, "prefix-sids"},
    prefixes{YType::uint32, "prefixes"},
    protected_adjacency_sids{YType::uint32, "protected-adjacency-sids"},
    regular_prefix_sids{YType::uint32, "regular-prefix-sids"},
    strict_prefix_sids{YType::uint32, "strict-prefix-sids"},
    topology_consistent{YType::boolean, "topology-consistent"},
    un_protected_adjacency_sids{YType::uint32, "un-protected-adjacency-sids"}
    	,
    stats_topology_update(std::make_shared<PceTopology::TopologySummary::StatsTopologyUpdate>())
{
    stats_topology_update->parent = this;

    yang_name = "topology-summary"; yang_parent_name = "pce-topology"; is_top_level_class = false; has_list_ancestor = false;
}

PceTopology::TopologySummary::~TopologySummary()
{
}

bool PceTopology::TopologySummary::has_data() const
{
    return adjacency_sids.is_set
	|| epe_links.is_set
	|| epesids.is_set
	|| links.is_set
	|| lookup_nodes.is_set
	|| nodes.is_set
	|| prefix_sids.is_set
	|| prefixes.is_set
	|| protected_adjacency_sids.is_set
	|| regular_prefix_sids.is_set
	|| strict_prefix_sids.is_set
	|| topology_consistent.is_set
	|| un_protected_adjacency_sids.is_set
	|| (stats_topology_update !=  nullptr && stats_topology_update->has_data());
}

bool PceTopology::TopologySummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_sids.yfilter)
	|| ydk::is_set(epe_links.yfilter)
	|| ydk::is_set(epesids.yfilter)
	|| ydk::is_set(links.yfilter)
	|| ydk::is_set(lookup_nodes.yfilter)
	|| ydk::is_set(nodes.yfilter)
	|| ydk::is_set(prefix_sids.yfilter)
	|| ydk::is_set(prefixes.yfilter)
	|| ydk::is_set(protected_adjacency_sids.yfilter)
	|| ydk::is_set(regular_prefix_sids.yfilter)
	|| ydk::is_set(strict_prefix_sids.yfilter)
	|| ydk::is_set(topology_consistent.yfilter)
	|| ydk::is_set(un_protected_adjacency_sids.yfilter)
	|| (stats_topology_update !=  nullptr && stats_topology_update->has_operation());
}

std::string PceTopology::TopologySummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-topology/" << get_segment_path();
    return path_buffer.str();
}

std::string PceTopology::TopologySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sids.is_set || is_set(adjacency_sids.yfilter)) leaf_name_data.push_back(adjacency_sids.get_name_leafdata());
    if (epe_links.is_set || is_set(epe_links.yfilter)) leaf_name_data.push_back(epe_links.get_name_leafdata());
    if (epesids.is_set || is_set(epesids.yfilter)) leaf_name_data.push_back(epesids.get_name_leafdata());
    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());
    if (lookup_nodes.is_set || is_set(lookup_nodes.yfilter)) leaf_name_data.push_back(lookup_nodes.get_name_leafdata());
    if (nodes.is_set || is_set(nodes.yfilter)) leaf_name_data.push_back(nodes.get_name_leafdata());
    if (prefix_sids.is_set || is_set(prefix_sids.yfilter)) leaf_name_data.push_back(prefix_sids.get_name_leafdata());
    if (prefixes.is_set || is_set(prefixes.yfilter)) leaf_name_data.push_back(prefixes.get_name_leafdata());
    if (protected_adjacency_sids.is_set || is_set(protected_adjacency_sids.yfilter)) leaf_name_data.push_back(protected_adjacency_sids.get_name_leafdata());
    if (regular_prefix_sids.is_set || is_set(regular_prefix_sids.yfilter)) leaf_name_data.push_back(regular_prefix_sids.get_name_leafdata());
    if (strict_prefix_sids.is_set || is_set(strict_prefix_sids.yfilter)) leaf_name_data.push_back(strict_prefix_sids.get_name_leafdata());
    if (topology_consistent.is_set || is_set(topology_consistent.yfilter)) leaf_name_data.push_back(topology_consistent.get_name_leafdata());
    if (un_protected_adjacency_sids.is_set || is_set(un_protected_adjacency_sids.yfilter)) leaf_name_data.push_back(un_protected_adjacency_sids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats-topology-update")
    {
        if(stats_topology_update == nullptr)
        {
            stats_topology_update = std::make_shared<PceTopology::TopologySummary::StatsTopologyUpdate>();
        }
        return stats_topology_update;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stats_topology_update != nullptr)
    {
        children["stats-topology-update"] = stats_topology_update;
    }

    return children;
}

void PceTopology::TopologySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-sids")
    {
        adjacency_sids = value;
        adjacency_sids.value_namespace = name_space;
        adjacency_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epe-links")
    {
        epe_links = value;
        epe_links.value_namespace = name_space;
        epe_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epesids")
    {
        epesids = value;
        epesids.value_namespace = name_space;
        epesids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "links")
    {
        links = value;
        links.value_namespace = name_space;
        links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lookup-nodes")
    {
        lookup_nodes = value;
        lookup_nodes.value_namespace = name_space;
        lookup_nodes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodes")
    {
        nodes = value;
        nodes.value_namespace = name_space;
        nodes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-sids")
    {
        prefix_sids = value;
        prefix_sids.value_namespace = name_space;
        prefix_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes")
    {
        prefixes = value;
        prefixes.value_namespace = name_space;
        prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-adjacency-sids")
    {
        protected_adjacency_sids = value;
        protected_adjacency_sids.value_namespace = name_space;
        protected_adjacency_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regular-prefix-sids")
    {
        regular_prefix_sids = value;
        regular_prefix_sids.value_namespace = name_space;
        regular_prefix_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict-prefix-sids")
    {
        strict_prefix_sids = value;
        strict_prefix_sids.value_namespace = name_space;
        strict_prefix_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-consistent")
    {
        topology_consistent = value;
        topology_consistent.value_namespace = name_space;
        topology_consistent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "un-protected-adjacency-sids")
    {
        un_protected_adjacency_sids = value;
        un_protected_adjacency_sids.value_namespace = name_space;
        un_protected_adjacency_sids.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-sids")
    {
        adjacency_sids.yfilter = yfilter;
    }
    if(value_path == "epe-links")
    {
        epe_links.yfilter = yfilter;
    }
    if(value_path == "epesids")
    {
        epesids.yfilter = yfilter;
    }
    if(value_path == "links")
    {
        links.yfilter = yfilter;
    }
    if(value_path == "lookup-nodes")
    {
        lookup_nodes.yfilter = yfilter;
    }
    if(value_path == "nodes")
    {
        nodes.yfilter = yfilter;
    }
    if(value_path == "prefix-sids")
    {
        prefix_sids.yfilter = yfilter;
    }
    if(value_path == "prefixes")
    {
        prefixes.yfilter = yfilter;
    }
    if(value_path == "protected-adjacency-sids")
    {
        protected_adjacency_sids.yfilter = yfilter;
    }
    if(value_path == "regular-prefix-sids")
    {
        regular_prefix_sids.yfilter = yfilter;
    }
    if(value_path == "strict-prefix-sids")
    {
        strict_prefix_sids.yfilter = yfilter;
    }
    if(value_path == "topology-consistent")
    {
        topology_consistent.yfilter = yfilter;
    }
    if(value_path == "un-protected-adjacency-sids")
    {
        un_protected_adjacency_sids.yfilter = yfilter;
    }
}

bool PceTopology::TopologySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats-topology-update" || name == "adjacency-sids" || name == "epe-links" || name == "epesids" || name == "links" || name == "lookup-nodes" || name == "nodes" || name == "prefix-sids" || name == "prefixes" || name == "protected-adjacency-sids" || name == "regular-prefix-sids" || name == "strict-prefix-sids" || name == "topology-consistent" || name == "un-protected-adjacency-sids")
        return true;
    return false;
}

PceTopology::TopologySummary::StatsTopologyUpdate::StatsTopologyUpdate()
    :
    num_links_added{YType::uint32, "num-links-added"},
    num_links_deleted{YType::uint32, "num-links-deleted"},
    num_nodes_added{YType::uint32, "num-nodes-added"},
    num_nodes_deleted{YType::uint32, "num-nodes-deleted"},
    num_prefixes_added{YType::uint32, "num-prefixes-added"},
    num_prefixes_deleted{YType::uint32, "num-prefixes-deleted"}
{

    yang_name = "stats-topology-update"; yang_parent_name = "topology-summary"; is_top_level_class = false; has_list_ancestor = false;
}

PceTopology::TopologySummary::StatsTopologyUpdate::~StatsTopologyUpdate()
{
}

bool PceTopology::TopologySummary::StatsTopologyUpdate::has_data() const
{
    return num_links_added.is_set
	|| num_links_deleted.is_set
	|| num_nodes_added.is_set
	|| num_nodes_deleted.is_set
	|| num_prefixes_added.is_set
	|| num_prefixes_deleted.is_set;
}

bool PceTopology::TopologySummary::StatsTopologyUpdate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_links_added.yfilter)
	|| ydk::is_set(num_links_deleted.yfilter)
	|| ydk::is_set(num_nodes_added.yfilter)
	|| ydk::is_set(num_nodes_deleted.yfilter)
	|| ydk::is_set(num_prefixes_added.yfilter)
	|| ydk::is_set(num_prefixes_deleted.yfilter);
}

std::string PceTopology::TopologySummary::StatsTopologyUpdate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-topology/topology-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string PceTopology::TopologySummary::StatsTopologyUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats-topology-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologySummary::StatsTopologyUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_links_added.is_set || is_set(num_links_added.yfilter)) leaf_name_data.push_back(num_links_added.get_name_leafdata());
    if (num_links_deleted.is_set || is_set(num_links_deleted.yfilter)) leaf_name_data.push_back(num_links_deleted.get_name_leafdata());
    if (num_nodes_added.is_set || is_set(num_nodes_added.yfilter)) leaf_name_data.push_back(num_nodes_added.get_name_leafdata());
    if (num_nodes_deleted.is_set || is_set(num_nodes_deleted.yfilter)) leaf_name_data.push_back(num_nodes_deleted.get_name_leafdata());
    if (num_prefixes_added.is_set || is_set(num_prefixes_added.yfilter)) leaf_name_data.push_back(num_prefixes_added.get_name_leafdata());
    if (num_prefixes_deleted.is_set || is_set(num_prefixes_deleted.yfilter)) leaf_name_data.push_back(num_prefixes_deleted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologySummary::StatsTopologyUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologySummary::StatsTopologyUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PceTopology::TopologySummary::StatsTopologyUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-links-added")
    {
        num_links_added = value;
        num_links_added.value_namespace = name_space;
        num_links_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-links-deleted")
    {
        num_links_deleted = value;
        num_links_deleted.value_namespace = name_space;
        num_links_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-nodes-added")
    {
        num_nodes_added = value;
        num_nodes_added.value_namespace = name_space;
        num_nodes_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-nodes-deleted")
    {
        num_nodes_deleted = value;
        num_nodes_deleted.value_namespace = name_space;
        num_nodes_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-prefixes-added")
    {
        num_prefixes_added = value;
        num_prefixes_added.value_namespace = name_space;
        num_prefixes_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-prefixes-deleted")
    {
        num_prefixes_deleted = value;
        num_prefixes_deleted.value_namespace = name_space;
        num_prefixes_deleted.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologySummary::StatsTopologyUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-links-added")
    {
        num_links_added.yfilter = yfilter;
    }
    if(value_path == "num-links-deleted")
    {
        num_links_deleted.yfilter = yfilter;
    }
    if(value_path == "num-nodes-added")
    {
        num_nodes_added.yfilter = yfilter;
    }
    if(value_path == "num-nodes-deleted")
    {
        num_nodes_deleted.yfilter = yfilter;
    }
    if(value_path == "num-prefixes-added")
    {
        num_prefixes_added.yfilter = yfilter;
    }
    if(value_path == "num-prefixes-deleted")
    {
        num_prefixes_deleted.yfilter = yfilter;
    }
}

bool PceTopology::TopologySummary::StatsTopologyUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-links-added" || name == "num-links-deleted" || name == "num-nodes-added" || name == "num-nodes-deleted" || name == "num-prefixes-added" || name == "num-prefixes-deleted")
        return true;
    return false;
}


}
}

