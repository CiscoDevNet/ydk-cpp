
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "common_mpls_static.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace common_mpls_static {

LspType::LspType()
     : Identity("urn:ietf:params:xml:ns:yang:common-mpls-static", "common-mpls-static", "common-mpls-static:lsp-type")
{

}

LspType::~LspType()
{
}

NexthopResolutionType::NexthopResolutionType()
     : Identity("urn:ietf:params:xml:ns:yang:common-mpls-static", "common-mpls-static", "common-mpls-static:nexthop-resolution-type")
{

}

NexthopResolutionType::~NexthopResolutionType()
{
}

MplsStatic::MplsStatic()
    :
    mpls_static_cfg(std::make_shared<MplsStatic::MplsStaticCfg>())
	,mpls_static_state(std::make_shared<MplsStatic::MplsStaticState>())
{
    mpls_static_cfg->parent = this;
    mpls_static_state->parent = this;

    yang_name = "mpls-static"; yang_parent_name = "common-mpls-static"; is_top_level_class = true; has_list_ancestor = false;
}

MplsStatic::~MplsStatic()
{
}

bool MplsStatic::has_data() const
{
    return (mpls_static_cfg !=  nullptr && mpls_static_cfg->has_data())
	|| (mpls_static_state !=  nullptr && mpls_static_state->has_data());
}

bool MplsStatic::has_operation() const
{
    return is_set(yfilter)
	|| (mpls_static_cfg !=  nullptr && mpls_static_cfg->has_operation())
	|| (mpls_static_state !=  nullptr && mpls_static_state->has_operation());
}

std::string MplsStatic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mpls-static:mpls-static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-static-cfg")
    {
        if(mpls_static_cfg == nullptr)
        {
            mpls_static_cfg = std::make_shared<MplsStatic::MplsStaticCfg>();
        }
        return mpls_static_cfg;
    }

    if(child_yang_name == "mpls-static-state")
    {
        if(mpls_static_state == nullptr)
        {
            mpls_static_state = std::make_shared<MplsStatic::MplsStaticState>();
        }
        return mpls_static_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mpls_static_cfg != nullptr)
    {
        children["mpls-static-cfg"] = mpls_static_cfg;
    }

    if(mpls_static_state != nullptr)
    {
        children["mpls-static-state"] = mpls_static_state;
    }

    return children;
}

void MplsStatic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MplsStatic::clone_ptr() const
{
    return std::make_shared<MplsStatic>();
}

std::string MplsStatic::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string MplsStatic::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function MplsStatic::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsStatic::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool MplsStatic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-static-cfg" || name == "mpls-static-state")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::MplsStaticCfg()
    :
    interfaces(std::make_shared<MplsStatic::MplsStaticCfg::Interfaces>())
	,named_lsps(std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps>())
	,ipv4_ingress_lsps(std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps>())
	,in_label_lsps(std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps>())
	,ipv6_ingress_lsps(std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps>())
{
    interfaces->parent = this;
    named_lsps->parent = this;
    ipv4_ingress_lsps->parent = this;
    in_label_lsps->parent = this;
    ipv6_ingress_lsps->parent = this;

    yang_name = "mpls-static-cfg"; yang_parent_name = "mpls-static"; is_top_level_class = false; has_list_ancestor = false;
}

MplsStatic::MplsStaticCfg::~MplsStaticCfg()
{
}

bool MplsStatic::MplsStaticCfg::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data())
	|| (named_lsps !=  nullptr && named_lsps->has_data())
	|| (ipv4_ingress_lsps !=  nullptr && ipv4_ingress_lsps->has_data())
	|| (in_label_lsps !=  nullptr && in_label_lsps->has_data())
	|| (ipv6_ingress_lsps !=  nullptr && ipv6_ingress_lsps->has_data());
}

bool MplsStatic::MplsStaticCfg::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (named_lsps !=  nullptr && named_lsps->has_operation())
	|| (ipv4_ingress_lsps !=  nullptr && ipv4_ingress_lsps->has_operation())
	|| (in_label_lsps !=  nullptr && in_label_lsps->has_operation())
	|| (ipv6_ingress_lsps !=  nullptr && ipv6_ingress_lsps->has_operation());
}

std::string MplsStatic::MplsStaticCfg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mpls-static:mpls-static/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsStatic::MplsStaticCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-static-cfg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<MplsStatic::MplsStaticCfg::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "named-lsps")
    {
        if(named_lsps == nullptr)
        {
            named_lsps = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps>();
        }
        return named_lsps;
    }

    if(child_yang_name == "ipv4-ingress-lsps")
    {
        if(ipv4_ingress_lsps == nullptr)
        {
            ipv4_ingress_lsps = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps>();
        }
        return ipv4_ingress_lsps;
    }

    if(child_yang_name == "in-label-lsps")
    {
        if(in_label_lsps == nullptr)
        {
            in_label_lsps = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps>();
        }
        return in_label_lsps;
    }

    if(child_yang_name == "ipv6-ingress-lsps")
    {
        if(ipv6_ingress_lsps == nullptr)
        {
            ipv6_ingress_lsps = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps>();
        }
        return ipv6_ingress_lsps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(named_lsps != nullptr)
    {
        children["named-lsps"] = named_lsps;
    }

    if(ipv4_ingress_lsps != nullptr)
    {
        children["ipv4-ingress-lsps"] = ipv4_ingress_lsps;
    }

    if(in_label_lsps != nullptr)
    {
        children["in-label-lsps"] = in_label_lsps;
    }

    if(ipv6_ingress_lsps != nullptr)
    {
        children["ipv6-ingress-lsps"] = ipv6_ingress_lsps;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "named-lsps" || name == "ipv4-ingress-lsps" || name == "in-label-lsps" || name == "ipv6-ingress-lsps")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "mpls-static-cfg"; is_top_level_class = false; has_list_ancestor = false;
}

MplsStatic::MplsStaticCfg::Interfaces::~Interfaces()
{
}

bool MplsStatic::MplsStaticCfg::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::MplsStaticCfg::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mpls-static:mpls-static/mpls-static-cfg/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsStatic::MplsStaticCfg::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<MplsStatic::MplsStaticCfg::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticCfg::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticCfg::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Interfaces::Interface::Interface()
    :
    name{YType::str, "name"},
    enabled{YType::uint32, "enabled"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

MplsStatic::MplsStaticCfg::Interfaces::Interface::~Interface()
{
}

bool MplsStatic::MplsStaticCfg::Interfaces::Interface::has_data() const
{
    return name.is_set
	|| enabled.is_set;
}

bool MplsStatic::MplsStaticCfg::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string MplsStatic::MplsStaticCfg::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mpls-static:mpls-static/mpls-static-cfg/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsStatic::MplsStaticCfg::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticCfg::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticCfg::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "enabled")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsps()
{

    yang_name = "named-lsps"; yang_parent_name = "mpls-static-cfg"; is_top_level_class = false; has_list_ancestor = false;
}

MplsStatic::MplsStaticCfg::NamedLsps::~NamedLsps()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::has_data() const
{
    for (std::size_t index=0; index<named_lsp.size(); index++)
    {
        if(named_lsp[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::NamedLsps::has_operation() const
{
    for (std::size_t index=0; index<named_lsp.size(); index++)
    {
        if(named_lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mpls-static:mpls-static/mpls-static-cfg/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-lsps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::NamedLsps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-lsp")
    {
        auto c = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp>();
        c->parent = this;
        named_lsp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : named_lsp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticCfg::NamedLsps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-lsp")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::NamedLsp()
    :
    vrf_name{YType::str, "vrf-name"},
    name{YType::str, "name"},
    lsp_type{YType::identityref, "lsp-type"},
    in_label{YType::str, "in-label"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
    	,
    path(std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path>())
{
    path->parent = this;

    yang_name = "named-lsp"; yang_parent_name = "named-lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::~NamedLsp()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::has_data() const
{
    return vrf_name.is_set
	|| name.is_set
	|| lsp_type.is_set
	|| in_label.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set
	|| (path !=  nullptr && path->has_data());
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(lsp_type.yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter)
	|| (path !=  nullptr && path->has_operation());
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mpls-static:mpls-static/mpls-static-cfg/named-lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-lsp" <<"[vrf-name='" <<vrf_name <<"']" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (lsp_type.is_set || is_set(lsp_type.yfilter)) leaf_name_data.push_back(lsp_type.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path>();
        }
        return path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path != nullptr)
    {
        children["path"] = path;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-type")
    {
        lsp_type = value;
        lsp_type.value_namespace = name_space;
        lsp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "lsp-type")
    {
        lsp_type.yfilter = yfilter;
    }
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "vrf-name" || name == "name" || name == "lsp-type" || name == "in-label" || name == "ipv4-prefix" || name == "ipv6-prefix")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Path()
    :
    auto_protect{YType::boolean, "auto-protect"}
    	,
    operations(std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations>())
{
    operations->parent = this;

    yang_name = "path"; yang_parent_name = "named-lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::~Path()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::has_data() const
{
    for (std::size_t index=0; index<next_hop.size(); index++)
    {
        if(next_hop[index]->has_data())
            return true;
    }
    return auto_protect.is_set
	|| (operations !=  nullptr && operations->has_data());
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::has_operation() const
{
    for (std::size_t index=0; index<next_hop.size(); index++)
    {
        if(next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(auto_protect.yfilter)
	|| (operations !=  nullptr && operations->has_operation());
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_protect.is_set || is_set(auto_protect.yfilter)) leaf_name_data.push_back(auto_protect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operations")
    {
        if(operations == nullptr)
        {
            operations = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations>();
        }
        return operations;
    }

    if(child_yang_name == "next-hop")
    {
        auto c = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop>();
        c->parent = this;
        next_hop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(operations != nullptr)
    {
        children["operations"] = operations;
    }

    count = 0;
    for (auto const & c : next_hop)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-protect")
    {
        auto_protect = value;
        auto_protect.value_namespace = name_space;
        auto_protect.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-protect")
    {
        auto_protect.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operations" || name == "next-hop" || name == "auto-protect")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Operations()
    :
    preserve{YType::empty, "preserve"},
    pop_and_forward{YType::empty, "pop-and-forward"}
    	,
    swap(std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap>())
	,push(std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push>())
{
    swap->parent = this;
    push->parent = this;

    yang_name = "operations"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::~Operations()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::has_data() const
{
    return preserve.is_set
	|| pop_and_forward.is_set
	|| (swap !=  nullptr && swap->has_data())
	|| (push !=  nullptr && push->has_data());
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preserve.yfilter)
	|| ydk::is_set(pop_and_forward.yfilter)
	|| (swap !=  nullptr && swap->has_operation())
	|| (push !=  nullptr && push->has_operation());
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preserve.is_set || is_set(preserve.yfilter)) leaf_name_data.push_back(preserve.get_name_leafdata());
    if (pop_and_forward.is_set || is_set(pop_and_forward.yfilter)) leaf_name_data.push_back(pop_and_forward.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "swap")
    {
        if(swap == nullptr)
        {
            swap = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap>();
        }
        return swap;
    }

    if(child_yang_name == "push")
    {
        if(push == nullptr)
        {
            push = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push>();
        }
        return push;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(swap != nullptr)
    {
        children["swap"] = swap;
    }

    if(push != nullptr)
    {
        children["push"] = push;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preserve")
    {
        preserve = value;
        preserve.value_namespace = name_space;
        preserve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pop-and-forward")
    {
        pop_and_forward = value;
        pop_and_forward.value_namespace = name_space;
        pop_and_forward.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preserve")
    {
        preserve.yfilter = yfilter;
    }
    if(value_path == "pop-and-forward")
    {
        pop_and_forward.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "swap" || name == "push" || name == "preserve" || name == "pop-and-forward")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Swap()
    :
    stack(std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack>())
{
    stack->parent = this;

    yang_name = "swap"; yang_parent_name = "operations"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::~Swap()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::has_data() const
{
    return (stack !=  nullptr && stack->has_data());
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::has_operation() const
{
    return is_set(yfilter)
	|| (stack !=  nullptr && stack->has_operation());
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "swap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack == nullptr)
        {
            stack = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack>();
        }
        return stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stack != nullptr)
    {
        children["stack"] = stack;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{

    yang_name = "stack"; yang_parent_name = "swap"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_stack.yfilter);
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-stack")
    {
        label_stack.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Push()
    :
    stack(std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack>())
{
    stack->parent = this;

    yang_name = "push"; yang_parent_name = "operations"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::~Push()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::has_data() const
{
    return (stack !=  nullptr && stack->has_data());
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::has_operation() const
{
    return is_set(yfilter)
	|| (stack !=  nullptr && stack->has_operation());
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack == nullptr)
        {
            stack = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack>();
        }
        return stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stack != nullptr)
    {
        children["stack"] = stack;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{

    yang_name = "stack"; yang_parent_name = "push"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_stack.yfilter);
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-stack")
    {
        label_stack.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHop()
    :
    index_{YType::uint32, "index"},
    type{YType::enumeration, "type"},
    protected_by{YType::uint32, "protected-by"}
    	,
    next_hop_type(std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType>())
	,operations(std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations>())
{
    next_hop_type->parent = this;
    operations->parent = this;

    yang_name = "next-hop"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::~NextHop()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::has_data() const
{
    return index_.is_set
	|| type.is_set
	|| protected_by.is_set
	|| (next_hop_type !=  nullptr && next_hop_type->has_data())
	|| (operations !=  nullptr && operations->has_data());
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(protected_by.yfilter)
	|| (next_hop_type !=  nullptr && next_hop_type->has_operation())
	|| (operations !=  nullptr && operations->has_operation());
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop" <<"[index='" <<index_ <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (protected_by.is_set || is_set(protected_by.yfilter)) leaf_name_data.push_back(protected_by.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-type")
    {
        if(next_hop_type == nullptr)
        {
            next_hop_type = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType>();
        }
        return next_hop_type;
    }

    if(child_yang_name == "operations")
    {
        if(operations == nullptr)
        {
            operations = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations>();
        }
        return operations;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(next_hop_type != nullptr)
    {
        children["next-hop-type"] = next_hop_type;
    }

    if(operations != nullptr)
    {
        children["operations"] = operations;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-by")
    {
        protected_by = value;
        protected_by.value_namespace = name_space;
        protected_by.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "protected-by")
    {
        protected_by.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-type" || name == "operations" || name == "index" || name == "type" || name == "protected-by")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType::NextHopType()
    :
    if_index{YType::uint32, "if-index"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    mac_address{YType::str, "mac-address"},
    out_interface_name{YType::str, "out-interface-name"}
{

    yang_name = "next-hop-type"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType::~NextHopType()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType::has_data() const
{
    return if_index.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| mac_address.is_set
	|| out_interface_name.is_set;
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_index.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(out_interface_name.yfilter);
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_index.is_set || is_set(if_index.yfilter)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (out_interface_name.is_set || is_set(out_interface_name.yfilter)) leaf_name_data.push_back(out_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-index")
    {
        if_index = value;
        if_index.value_namespace = name_space;
        if_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface-name")
    {
        out_interface_name = value;
        out_interface_name.value_namespace = name_space;
        out_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-index")
    {
        if_index.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "out-interface-name")
    {
        out_interface_name.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-index" || name == "ipv4-address" || name == "ipv6-address" || name == "mac-address" || name == "out-interface-name")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Operations()
    :
    preserve{YType::empty, "preserve"},
    pop_and_forward{YType::empty, "pop-and-forward"}
    	,
    swap(std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap>())
	,push(std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push>())
{
    swap->parent = this;
    push->parent = this;

    yang_name = "operations"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::~Operations()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::has_data() const
{
    return preserve.is_set
	|| pop_and_forward.is_set
	|| (swap !=  nullptr && swap->has_data())
	|| (push !=  nullptr && push->has_data());
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preserve.yfilter)
	|| ydk::is_set(pop_and_forward.yfilter)
	|| (swap !=  nullptr && swap->has_operation())
	|| (push !=  nullptr && push->has_operation());
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preserve.is_set || is_set(preserve.yfilter)) leaf_name_data.push_back(preserve.get_name_leafdata());
    if (pop_and_forward.is_set || is_set(pop_and_forward.yfilter)) leaf_name_data.push_back(pop_and_forward.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "swap")
    {
        if(swap == nullptr)
        {
            swap = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap>();
        }
        return swap;
    }

    if(child_yang_name == "push")
    {
        if(push == nullptr)
        {
            push = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push>();
        }
        return push;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(swap != nullptr)
    {
        children["swap"] = swap;
    }

    if(push != nullptr)
    {
        children["push"] = push;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preserve")
    {
        preserve = value;
        preserve.value_namespace = name_space;
        preserve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pop-and-forward")
    {
        pop_and_forward = value;
        pop_and_forward.value_namespace = name_space;
        pop_and_forward.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preserve")
    {
        preserve.yfilter = yfilter;
    }
    if(value_path == "pop-and-forward")
    {
        pop_and_forward.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "swap" || name == "push" || name == "preserve" || name == "pop-and-forward")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Swap()
    :
    stack(std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack>())
{
    stack->parent = this;

    yang_name = "swap"; yang_parent_name = "operations"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::~Swap()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::has_data() const
{
    return (stack !=  nullptr && stack->has_data());
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::has_operation() const
{
    return is_set(yfilter)
	|| (stack !=  nullptr && stack->has_operation());
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "swap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack == nullptr)
        {
            stack = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack>();
        }
        return stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stack != nullptr)
    {
        children["stack"] = stack;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{

    yang_name = "stack"; yang_parent_name = "swap"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_stack.yfilter);
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-stack")
    {
        label_stack.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Push()
    :
    stack(std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack>())
{
    stack->parent = this;

    yang_name = "push"; yang_parent_name = "operations"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::~Push()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::has_data() const
{
    return (stack !=  nullptr && stack->has_data());
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::has_operation() const
{
    return is_set(yfilter)
	|| (stack !=  nullptr && stack->has_operation());
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack == nullptr)
        {
            stack = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack>();
        }
        return stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stack != nullptr)
    {
        children["stack"] = stack;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{

    yang_name = "stack"; yang_parent_name = "push"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_stack.yfilter);
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-stack")
    {
        label_stack.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsps()
{

    yang_name = "ipv4-ingress-lsps"; yang_parent_name = "mpls-static-cfg"; is_top_level_class = false; has_list_ancestor = false;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::~Ipv4IngressLsps()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::has_data() const
{
    for (std::size_t index=0; index<ipv4_ingress_lsp.size(); index++)
    {
        if(ipv4_ingress_lsp[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::has_operation() const
{
    for (std::size_t index=0; index<ipv4_ingress_lsp.size(); index++)
    {
        if(ipv4_ingress_lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mpls-static:mpls-static/mpls-static-cfg/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-ingress-lsps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv4IngressLsps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-ingress-lsp")
    {
        auto c = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp>();
        c->parent = this;
        ipv4_ingress_lsp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ipv4_ingress_lsp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-ingress-lsp")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Ipv4IngressLsp()
    :
    vrf_name{YType::str, "vrf-name"},
    prefix{YType::str, "prefix"},
    name{YType::str, "name"},
    in_label{YType::str, "in-label"}
    	,
    path(std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path>())
{
    path->parent = this;

    yang_name = "ipv4-ingress-lsp"; yang_parent_name = "ipv4-ingress-lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::~Ipv4IngressLsp()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::has_data() const
{
    return vrf_name.is_set
	|| prefix.is_set
	|| name.is_set
	|| in_label.is_set
	|| (path !=  nullptr && path->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| (path !=  nullptr && path->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mpls-static:mpls-static/mpls-static-cfg/ipv4-ingress-lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-ingress-lsp" <<"[vrf-name='" <<vrf_name <<"']" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path>();
        }
        return path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path != nullptr)
    {
        children["path"] = path;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "vrf-name" || name == "prefix" || name == "name" || name == "in-label")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Path()
    :
    auto_protect{YType::boolean, "auto-protect"}
    	,
    operations(std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations>())
{
    operations->parent = this;

    yang_name = "path"; yang_parent_name = "ipv4-ingress-lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::~Path()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::has_data() const
{
    for (std::size_t index=0; index<next_hop.size(); index++)
    {
        if(next_hop[index]->has_data())
            return true;
    }
    return auto_protect.is_set
	|| (operations !=  nullptr && operations->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::has_operation() const
{
    for (std::size_t index=0; index<next_hop.size(); index++)
    {
        if(next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(auto_protect.yfilter)
	|| (operations !=  nullptr && operations->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_protect.is_set || is_set(auto_protect.yfilter)) leaf_name_data.push_back(auto_protect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        auto c = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop>();
        c->parent = this;
        next_hop.push_back(c);
        return c;
    }

    if(child_yang_name == "operations")
    {
        if(operations == nullptr)
        {
            operations = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations>();
        }
        return operations;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : next_hop)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(operations != nullptr)
    {
        children["operations"] = operations;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-protect")
    {
        auto_protect = value;
        auto_protect.value_namespace = name_space;
        auto_protect.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-protect")
    {
        auto_protect.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "operations" || name == "auto-protect")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHop()
    :
    index_{YType::uint32, "index"},
    protected_by{YType::uint32, "protected-by"},
    type{YType::enumeration, "type"}
    	,
    next_hop_type(std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType>())
	,operations(std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations>())
{
    next_hop_type->parent = this;
    operations->parent = this;

    yang_name = "next-hop"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::~NextHop()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::has_data() const
{
    return index_.is_set
	|| protected_by.is_set
	|| type.is_set
	|| (next_hop_type !=  nullptr && next_hop_type->has_data())
	|| (operations !=  nullptr && operations->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(protected_by.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (next_hop_type !=  nullptr && next_hop_type->has_operation())
	|| (operations !=  nullptr && operations->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop" <<"[index='" <<index_ <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (protected_by.is_set || is_set(protected_by.yfilter)) leaf_name_data.push_back(protected_by.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-type")
    {
        if(next_hop_type == nullptr)
        {
            next_hop_type = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType>();
        }
        return next_hop_type;
    }

    if(child_yang_name == "operations")
    {
        if(operations == nullptr)
        {
            operations = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations>();
        }
        return operations;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(next_hop_type != nullptr)
    {
        children["next-hop-type"] = next_hop_type;
    }

    if(operations != nullptr)
    {
        children["operations"] = operations;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-by")
    {
        protected_by = value;
        protected_by.value_namespace = name_space;
        protected_by.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "protected-by")
    {
        protected_by.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-type" || name == "operations" || name == "index" || name == "protected-by" || name == "type")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType::NextHopType()
    :
    out_interface_name{YType::str, "out-interface-name"},
    ipv4_address{YType::str, "ipv4-address"},
    if_index{YType::uint32, "if-index"},
    ipv6_address{YType::str, "ipv6-address"},
    mac_address{YType::str, "mac-address"}
{

    yang_name = "next-hop-type"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType::~NextHopType()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType::has_data() const
{
    return out_interface_name.is_set
	|| ipv4_address.is_set
	|| if_index.is_set
	|| ipv6_address.is_set
	|| mac_address.is_set;
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_interface_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(if_index.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_interface_name.is_set || is_set(out_interface_name.yfilter)) leaf_name_data.push_back(out_interface_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.yfilter)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-interface-name")
    {
        out_interface_name = value;
        out_interface_name.value_namespace = name_space;
        out_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-index")
    {
        if_index = value;
        if_index.value_namespace = name_space;
        if_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-interface-name")
    {
        out_interface_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "if-index")
    {
        if_index.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-interface-name" || name == "ipv4-address" || name == "if-index" || name == "ipv6-address" || name == "mac-address")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Operations()
    :
    pop_and_forward{YType::empty, "pop-and-forward"},
    preserve{YType::empty, "preserve"}
    	,
    push(std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push>())
	,swap(std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap>())
{
    push->parent = this;
    swap->parent = this;

    yang_name = "operations"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::~Operations()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::has_data() const
{
    return pop_and_forward.is_set
	|| preserve.is_set
	|| (push !=  nullptr && push->has_data())
	|| (swap !=  nullptr && swap->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pop_and_forward.yfilter)
	|| ydk::is_set(preserve.yfilter)
	|| (push !=  nullptr && push->has_operation())
	|| (swap !=  nullptr && swap->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pop_and_forward.is_set || is_set(pop_and_forward.yfilter)) leaf_name_data.push_back(pop_and_forward.get_name_leafdata());
    if (preserve.is_set || is_set(preserve.yfilter)) leaf_name_data.push_back(preserve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "push")
    {
        if(push == nullptr)
        {
            push = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push>();
        }
        return push;
    }

    if(child_yang_name == "swap")
    {
        if(swap == nullptr)
        {
            swap = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap>();
        }
        return swap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(push != nullptr)
    {
        children["push"] = push;
    }

    if(swap != nullptr)
    {
        children["swap"] = swap;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pop-and-forward")
    {
        pop_and_forward = value;
        pop_and_forward.value_namespace = name_space;
        pop_and_forward.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preserve")
    {
        preserve = value;
        preserve.value_namespace = name_space;
        preserve.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pop-and-forward")
    {
        pop_and_forward.yfilter = yfilter;
    }
    if(value_path == "preserve")
    {
        preserve.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "push" || name == "swap" || name == "pop-and-forward" || name == "preserve")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Push()
    :
    stack(std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack>())
{
    stack->parent = this;

    yang_name = "push"; yang_parent_name = "operations"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::~Push()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::has_data() const
{
    return (stack !=  nullptr && stack->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::has_operation() const
{
    return is_set(yfilter)
	|| (stack !=  nullptr && stack->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack == nullptr)
        {
            stack = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack>();
        }
        return stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stack != nullptr)
    {
        children["stack"] = stack;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{

    yang_name = "stack"; yang_parent_name = "push"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_stack.yfilter);
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-stack")
    {
        label_stack.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Swap()
    :
    stack(std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack>())
{
    stack->parent = this;

    yang_name = "swap"; yang_parent_name = "operations"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::~Swap()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::has_data() const
{
    return (stack !=  nullptr && stack->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::has_operation() const
{
    return is_set(yfilter)
	|| (stack !=  nullptr && stack->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "swap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack == nullptr)
        {
            stack = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack>();
        }
        return stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stack != nullptr)
    {
        children["stack"] = stack;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{

    yang_name = "stack"; yang_parent_name = "swap"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_stack.yfilter);
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-stack")
    {
        label_stack.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Operations()
    :
    preserve{YType::empty, "preserve"},
    pop_and_forward{YType::empty, "pop-and-forward"}
    	,
    swap(std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap>())
	,push(std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push>())
{
    swap->parent = this;
    push->parent = this;

    yang_name = "operations"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::~Operations()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::has_data() const
{
    return preserve.is_set
	|| pop_and_forward.is_set
	|| (swap !=  nullptr && swap->has_data())
	|| (push !=  nullptr && push->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preserve.yfilter)
	|| ydk::is_set(pop_and_forward.yfilter)
	|| (swap !=  nullptr && swap->has_operation())
	|| (push !=  nullptr && push->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preserve.is_set || is_set(preserve.yfilter)) leaf_name_data.push_back(preserve.get_name_leafdata());
    if (pop_and_forward.is_set || is_set(pop_and_forward.yfilter)) leaf_name_data.push_back(pop_and_forward.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "swap")
    {
        if(swap == nullptr)
        {
            swap = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap>();
        }
        return swap;
    }

    if(child_yang_name == "push")
    {
        if(push == nullptr)
        {
            push = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push>();
        }
        return push;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(swap != nullptr)
    {
        children["swap"] = swap;
    }

    if(push != nullptr)
    {
        children["push"] = push;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preserve")
    {
        preserve = value;
        preserve.value_namespace = name_space;
        preserve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pop-and-forward")
    {
        pop_and_forward = value;
        pop_and_forward.value_namespace = name_space;
        pop_and_forward.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preserve")
    {
        preserve.yfilter = yfilter;
    }
    if(value_path == "pop-and-forward")
    {
        pop_and_forward.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "swap" || name == "push" || name == "preserve" || name == "pop-and-forward")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Swap()
    :
    stack(std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack>())
{
    stack->parent = this;

    yang_name = "swap"; yang_parent_name = "operations"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::~Swap()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::has_data() const
{
    return (stack !=  nullptr && stack->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::has_operation() const
{
    return is_set(yfilter)
	|| (stack !=  nullptr && stack->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "swap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack == nullptr)
        {
            stack = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack>();
        }
        return stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stack != nullptr)
    {
        children["stack"] = stack;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{

    yang_name = "stack"; yang_parent_name = "swap"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_stack.yfilter);
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-stack")
    {
        label_stack.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Push()
    :
    stack(std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack>())
{
    stack->parent = this;

    yang_name = "push"; yang_parent_name = "operations"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::~Push()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::has_data() const
{
    return (stack !=  nullptr && stack->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::has_operation() const
{
    return is_set(yfilter)
	|| (stack !=  nullptr && stack->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack == nullptr)
        {
            stack = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack>();
        }
        return stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stack != nullptr)
    {
        children["stack"] = stack;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{

    yang_name = "stack"; yang_parent_name = "push"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_stack.yfilter);
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-stack")
    {
        label_stack.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsps()
{

    yang_name = "in-label-lsps"; yang_parent_name = "mpls-static-cfg"; is_top_level_class = false; has_list_ancestor = false;
}

MplsStatic::MplsStaticCfg::InLabelLsps::~InLabelLsps()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::has_data() const
{
    for (std::size_t index=0; index<in_label_lsp.size(); index++)
    {
        if(in_label_lsp[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::has_operation() const
{
    for (std::size_t index=0; index<in_label_lsp.size(); index++)
    {
        if(in_label_lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mpls-static:mpls-static/mpls-static-cfg/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-label-lsps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::InLabelLsps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in-label-lsp")
    {
        auto c = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp>();
        c->parent = this;
        in_label_lsp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : in_label_lsp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticCfg::InLabelLsps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-label-lsp")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::InLabelLsp()
    :
    vrf_name{YType::str, "vrf-name"},
    in_label{YType::str, "in-label"}
    	,
    path(std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path>())
{
    path->parent = this;

    yang_name = "in-label-lsp"; yang_parent_name = "in-label-lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::~InLabelLsp()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::has_data() const
{
    return vrf_name.is_set
	|| in_label.is_set
	|| (path !=  nullptr && path->has_data());
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| (path !=  nullptr && path->has_operation());
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mpls-static:mpls-static/mpls-static-cfg/in-label-lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-label-lsp" <<"[vrf-name='" <<vrf_name <<"']" <<"[in-label='" <<in_label <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path>();
        }
        return path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path != nullptr)
    {
        children["path"] = path;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "vrf-name" || name == "in-label")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Path()
    :
    auto_protect{YType::boolean, "auto-protect"}
    	,
    operations(std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations>())
{
    operations->parent = this;

    yang_name = "path"; yang_parent_name = "in-label-lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::~Path()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::has_data() const
{
    for (std::size_t index=0; index<next_hop.size(); index++)
    {
        if(next_hop[index]->has_data())
            return true;
    }
    return auto_protect.is_set
	|| (operations !=  nullptr && operations->has_data());
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::has_operation() const
{
    for (std::size_t index=0; index<next_hop.size(); index++)
    {
        if(next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(auto_protect.yfilter)
	|| (operations !=  nullptr && operations->has_operation());
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_protect.is_set || is_set(auto_protect.yfilter)) leaf_name_data.push_back(auto_protect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operations")
    {
        if(operations == nullptr)
        {
            operations = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations>();
        }
        return operations;
    }

    if(child_yang_name == "next-hop")
    {
        auto c = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop>();
        c->parent = this;
        next_hop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(operations != nullptr)
    {
        children["operations"] = operations;
    }

    count = 0;
    for (auto const & c : next_hop)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-protect")
    {
        auto_protect = value;
        auto_protect.value_namespace = name_space;
        auto_protect.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-protect")
    {
        auto_protect.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operations" || name == "next-hop" || name == "auto-protect")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Operations()
    :
    preserve{YType::empty, "preserve"},
    pop_and_forward{YType::empty, "pop-and-forward"}
    	,
    swap(std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap>())
	,push(std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push>())
{
    swap->parent = this;
    push->parent = this;

    yang_name = "operations"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::~Operations()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::has_data() const
{
    return preserve.is_set
	|| pop_and_forward.is_set
	|| (swap !=  nullptr && swap->has_data())
	|| (push !=  nullptr && push->has_data());
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preserve.yfilter)
	|| ydk::is_set(pop_and_forward.yfilter)
	|| (swap !=  nullptr && swap->has_operation())
	|| (push !=  nullptr && push->has_operation());
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preserve.is_set || is_set(preserve.yfilter)) leaf_name_data.push_back(preserve.get_name_leafdata());
    if (pop_and_forward.is_set || is_set(pop_and_forward.yfilter)) leaf_name_data.push_back(pop_and_forward.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "swap")
    {
        if(swap == nullptr)
        {
            swap = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap>();
        }
        return swap;
    }

    if(child_yang_name == "push")
    {
        if(push == nullptr)
        {
            push = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push>();
        }
        return push;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(swap != nullptr)
    {
        children["swap"] = swap;
    }

    if(push != nullptr)
    {
        children["push"] = push;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preserve")
    {
        preserve = value;
        preserve.value_namespace = name_space;
        preserve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pop-and-forward")
    {
        pop_and_forward = value;
        pop_and_forward.value_namespace = name_space;
        pop_and_forward.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preserve")
    {
        preserve.yfilter = yfilter;
    }
    if(value_path == "pop-and-forward")
    {
        pop_and_forward.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "swap" || name == "push" || name == "preserve" || name == "pop-and-forward")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Swap()
    :
    stack(std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack>())
{
    stack->parent = this;

    yang_name = "swap"; yang_parent_name = "operations"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::~Swap()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::has_data() const
{
    return (stack !=  nullptr && stack->has_data());
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::has_operation() const
{
    return is_set(yfilter)
	|| (stack !=  nullptr && stack->has_operation());
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "swap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack == nullptr)
        {
            stack = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack>();
        }
        return stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stack != nullptr)
    {
        children["stack"] = stack;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{

    yang_name = "stack"; yang_parent_name = "swap"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_stack.yfilter);
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-stack")
    {
        label_stack.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Push()
    :
    stack(std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack>())
{
    stack->parent = this;

    yang_name = "push"; yang_parent_name = "operations"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::~Push()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::has_data() const
{
    return (stack !=  nullptr && stack->has_data());
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::has_operation() const
{
    return is_set(yfilter)
	|| (stack !=  nullptr && stack->has_operation());
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack == nullptr)
        {
            stack = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack>();
        }
        return stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stack != nullptr)
    {
        children["stack"] = stack;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{

    yang_name = "stack"; yang_parent_name = "push"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_stack.yfilter);
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-stack")
    {
        label_stack.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHop()
    :
    index_{YType::uint32, "index"},
    type{YType::enumeration, "type"},
    protected_by{YType::uint32, "protected-by"}
    	,
    next_hop_type(std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType>())
	,operations(std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations>())
{
    next_hop_type->parent = this;
    operations->parent = this;

    yang_name = "next-hop"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::~NextHop()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::has_data() const
{
    return index_.is_set
	|| type.is_set
	|| protected_by.is_set
	|| (next_hop_type !=  nullptr && next_hop_type->has_data())
	|| (operations !=  nullptr && operations->has_data());
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(protected_by.yfilter)
	|| (next_hop_type !=  nullptr && next_hop_type->has_operation())
	|| (operations !=  nullptr && operations->has_operation());
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop" <<"[index='" <<index_ <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (protected_by.is_set || is_set(protected_by.yfilter)) leaf_name_data.push_back(protected_by.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-type")
    {
        if(next_hop_type == nullptr)
        {
            next_hop_type = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType>();
        }
        return next_hop_type;
    }

    if(child_yang_name == "operations")
    {
        if(operations == nullptr)
        {
            operations = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations>();
        }
        return operations;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(next_hop_type != nullptr)
    {
        children["next-hop-type"] = next_hop_type;
    }

    if(operations != nullptr)
    {
        children["operations"] = operations;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-by")
    {
        protected_by = value;
        protected_by.value_namespace = name_space;
        protected_by.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "protected-by")
    {
        protected_by.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-type" || name == "operations" || name == "index" || name == "type" || name == "protected-by")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType::NextHopType()
    :
    if_index{YType::uint32, "if-index"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    mac_address{YType::str, "mac-address"},
    out_interface_name{YType::str, "out-interface-name"}
{

    yang_name = "next-hop-type"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType::~NextHopType()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType::has_data() const
{
    return if_index.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| mac_address.is_set
	|| out_interface_name.is_set;
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_index.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(out_interface_name.yfilter);
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_index.is_set || is_set(if_index.yfilter)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (out_interface_name.is_set || is_set(out_interface_name.yfilter)) leaf_name_data.push_back(out_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-index")
    {
        if_index = value;
        if_index.value_namespace = name_space;
        if_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface-name")
    {
        out_interface_name = value;
        out_interface_name.value_namespace = name_space;
        out_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-index")
    {
        if_index.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "out-interface-name")
    {
        out_interface_name.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-index" || name == "ipv4-address" || name == "ipv6-address" || name == "mac-address" || name == "out-interface-name")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Operations()
    :
    preserve{YType::empty, "preserve"},
    pop_and_forward{YType::empty, "pop-and-forward"}
    	,
    swap(std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap>())
	,push(std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push>())
{
    swap->parent = this;
    push->parent = this;

    yang_name = "operations"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::~Operations()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::has_data() const
{
    return preserve.is_set
	|| pop_and_forward.is_set
	|| (swap !=  nullptr && swap->has_data())
	|| (push !=  nullptr && push->has_data());
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preserve.yfilter)
	|| ydk::is_set(pop_and_forward.yfilter)
	|| (swap !=  nullptr && swap->has_operation())
	|| (push !=  nullptr && push->has_operation());
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preserve.is_set || is_set(preserve.yfilter)) leaf_name_data.push_back(preserve.get_name_leafdata());
    if (pop_and_forward.is_set || is_set(pop_and_forward.yfilter)) leaf_name_data.push_back(pop_and_forward.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "swap")
    {
        if(swap == nullptr)
        {
            swap = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap>();
        }
        return swap;
    }

    if(child_yang_name == "push")
    {
        if(push == nullptr)
        {
            push = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push>();
        }
        return push;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(swap != nullptr)
    {
        children["swap"] = swap;
    }

    if(push != nullptr)
    {
        children["push"] = push;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preserve")
    {
        preserve = value;
        preserve.value_namespace = name_space;
        preserve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pop-and-forward")
    {
        pop_and_forward = value;
        pop_and_forward.value_namespace = name_space;
        pop_and_forward.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preserve")
    {
        preserve.yfilter = yfilter;
    }
    if(value_path == "pop-and-forward")
    {
        pop_and_forward.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "swap" || name == "push" || name == "preserve" || name == "pop-and-forward")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Swap()
    :
    stack(std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack>())
{
    stack->parent = this;

    yang_name = "swap"; yang_parent_name = "operations"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::~Swap()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::has_data() const
{
    return (stack !=  nullptr && stack->has_data());
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::has_operation() const
{
    return is_set(yfilter)
	|| (stack !=  nullptr && stack->has_operation());
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "swap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack == nullptr)
        {
            stack = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack>();
        }
        return stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stack != nullptr)
    {
        children["stack"] = stack;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{

    yang_name = "stack"; yang_parent_name = "swap"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_stack.yfilter);
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-stack")
    {
        label_stack.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Push()
    :
    stack(std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack>())
{
    stack->parent = this;

    yang_name = "push"; yang_parent_name = "operations"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::~Push()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::has_data() const
{
    return (stack !=  nullptr && stack->has_data());
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::has_operation() const
{
    return is_set(yfilter)
	|| (stack !=  nullptr && stack->has_operation());
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack == nullptr)
        {
            stack = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack>();
        }
        return stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stack != nullptr)
    {
        children["stack"] = stack;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{

    yang_name = "stack"; yang_parent_name = "push"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_stack.yfilter);
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-stack")
    {
        label_stack.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsps()
{

    yang_name = "ipv6-ingress-lsps"; yang_parent_name = "mpls-static-cfg"; is_top_level_class = false; has_list_ancestor = false;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::~Ipv6IngressLsps()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::has_data() const
{
    for (std::size_t index=0; index<ipv6_ingress_lsp.size(); index++)
    {
        if(ipv6_ingress_lsp[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::has_operation() const
{
    for (std::size_t index=0; index<ipv6_ingress_lsp.size(); index++)
    {
        if(ipv6_ingress_lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mpls-static:mpls-static/mpls-static-cfg/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-ingress-lsps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv6IngressLsps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-ingress-lsp")
    {
        auto c = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp>();
        c->parent = this;
        ipv6_ingress_lsp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ipv6_ingress_lsp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-ingress-lsp")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Ipv6IngressLsp()
    :
    vrf_name{YType::str, "vrf-name"},
    prefix{YType::str, "prefix"},
    name{YType::str, "name"},
    in_label{YType::str, "in-label"}
    	,
    path(std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path>())
{
    path->parent = this;

    yang_name = "ipv6-ingress-lsp"; yang_parent_name = "ipv6-ingress-lsps"; is_top_level_class = false; has_list_ancestor = false;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::~Ipv6IngressLsp()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::has_data() const
{
    return vrf_name.is_set
	|| prefix.is_set
	|| name.is_set
	|| in_label.is_set
	|| (path !=  nullptr && path->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| (path !=  nullptr && path->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mpls-static:mpls-static/mpls-static-cfg/ipv6-ingress-lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-ingress-lsp" <<"[vrf-name='" <<vrf_name <<"']" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path>();
        }
        return path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path != nullptr)
    {
        children["path"] = path;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "vrf-name" || name == "prefix" || name == "name" || name == "in-label")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Path()
    :
    auto_protect{YType::boolean, "auto-protect"}
    	,
    operations(std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations>())
{
    operations->parent = this;

    yang_name = "path"; yang_parent_name = "ipv6-ingress-lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::~Path()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::has_data() const
{
    for (std::size_t index=0; index<next_hop.size(); index++)
    {
        if(next_hop[index]->has_data())
            return true;
    }
    return auto_protect.is_set
	|| (operations !=  nullptr && operations->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::has_operation() const
{
    for (std::size_t index=0; index<next_hop.size(); index++)
    {
        if(next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(auto_protect.yfilter)
	|| (operations !=  nullptr && operations->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_protect.is_set || is_set(auto_protect.yfilter)) leaf_name_data.push_back(auto_protect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operations")
    {
        if(operations == nullptr)
        {
            operations = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations>();
        }
        return operations;
    }

    if(child_yang_name == "next-hop")
    {
        auto c = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop>();
        c->parent = this;
        next_hop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(operations != nullptr)
    {
        children["operations"] = operations;
    }

    count = 0;
    for (auto const & c : next_hop)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-protect")
    {
        auto_protect = value;
        auto_protect.value_namespace = name_space;
        auto_protect.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-protect")
    {
        auto_protect.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operations" || name == "next-hop" || name == "auto-protect")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Operations()
    :
    preserve{YType::empty, "preserve"},
    pop_and_forward{YType::empty, "pop-and-forward"}
    	,
    swap(std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap>())
	,push(std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push>())
{
    swap->parent = this;
    push->parent = this;

    yang_name = "operations"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::~Operations()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::has_data() const
{
    return preserve.is_set
	|| pop_and_forward.is_set
	|| (swap !=  nullptr && swap->has_data())
	|| (push !=  nullptr && push->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preserve.yfilter)
	|| ydk::is_set(pop_and_forward.yfilter)
	|| (swap !=  nullptr && swap->has_operation())
	|| (push !=  nullptr && push->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preserve.is_set || is_set(preserve.yfilter)) leaf_name_data.push_back(preserve.get_name_leafdata());
    if (pop_and_forward.is_set || is_set(pop_and_forward.yfilter)) leaf_name_data.push_back(pop_and_forward.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "swap")
    {
        if(swap == nullptr)
        {
            swap = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap>();
        }
        return swap;
    }

    if(child_yang_name == "push")
    {
        if(push == nullptr)
        {
            push = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push>();
        }
        return push;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(swap != nullptr)
    {
        children["swap"] = swap;
    }

    if(push != nullptr)
    {
        children["push"] = push;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preserve")
    {
        preserve = value;
        preserve.value_namespace = name_space;
        preserve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pop-and-forward")
    {
        pop_and_forward = value;
        pop_and_forward.value_namespace = name_space;
        pop_and_forward.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preserve")
    {
        preserve.yfilter = yfilter;
    }
    if(value_path == "pop-and-forward")
    {
        pop_and_forward.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "swap" || name == "push" || name == "preserve" || name == "pop-and-forward")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Swap()
    :
    stack(std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack>())
{
    stack->parent = this;

    yang_name = "swap"; yang_parent_name = "operations"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::~Swap()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::has_data() const
{
    return (stack !=  nullptr && stack->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::has_operation() const
{
    return is_set(yfilter)
	|| (stack !=  nullptr && stack->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "swap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack == nullptr)
        {
            stack = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack>();
        }
        return stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stack != nullptr)
    {
        children["stack"] = stack;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{

    yang_name = "stack"; yang_parent_name = "swap"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_stack.yfilter);
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-stack")
    {
        label_stack.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Push()
    :
    stack(std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack>())
{
    stack->parent = this;

    yang_name = "push"; yang_parent_name = "operations"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::~Push()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::has_data() const
{
    return (stack !=  nullptr && stack->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::has_operation() const
{
    return is_set(yfilter)
	|| (stack !=  nullptr && stack->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack == nullptr)
        {
            stack = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack>();
        }
        return stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stack != nullptr)
    {
        children["stack"] = stack;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{

    yang_name = "stack"; yang_parent_name = "push"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_stack.yfilter);
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-stack")
    {
        label_stack.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHop()
    :
    index_{YType::uint32, "index"},
    type{YType::enumeration, "type"},
    protected_by{YType::uint32, "protected-by"}
    	,
    next_hop_type(std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType>())
	,operations(std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations>())
{
    next_hop_type->parent = this;
    operations->parent = this;

    yang_name = "next-hop"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::~NextHop()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::has_data() const
{
    return index_.is_set
	|| type.is_set
	|| protected_by.is_set
	|| (next_hop_type !=  nullptr && next_hop_type->has_data())
	|| (operations !=  nullptr && operations->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(protected_by.yfilter)
	|| (next_hop_type !=  nullptr && next_hop_type->has_operation())
	|| (operations !=  nullptr && operations->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop" <<"[index='" <<index_ <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (protected_by.is_set || is_set(protected_by.yfilter)) leaf_name_data.push_back(protected_by.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-type")
    {
        if(next_hop_type == nullptr)
        {
            next_hop_type = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType>();
        }
        return next_hop_type;
    }

    if(child_yang_name == "operations")
    {
        if(operations == nullptr)
        {
            operations = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations>();
        }
        return operations;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(next_hop_type != nullptr)
    {
        children["next-hop-type"] = next_hop_type;
    }

    if(operations != nullptr)
    {
        children["operations"] = operations;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-by")
    {
        protected_by = value;
        protected_by.value_namespace = name_space;
        protected_by.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "protected-by")
    {
        protected_by.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-type" || name == "operations" || name == "index" || name == "type" || name == "protected-by")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType::NextHopType()
    :
    if_index{YType::uint32, "if-index"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    mac_address{YType::str, "mac-address"},
    out_interface_name{YType::str, "out-interface-name"}
{

    yang_name = "next-hop-type"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType::~NextHopType()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType::has_data() const
{
    return if_index.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| mac_address.is_set
	|| out_interface_name.is_set;
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_index.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(out_interface_name.yfilter);
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_index.is_set || is_set(if_index.yfilter)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (out_interface_name.is_set || is_set(out_interface_name.yfilter)) leaf_name_data.push_back(out_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-index")
    {
        if_index = value;
        if_index.value_namespace = name_space;
        if_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface-name")
    {
        out_interface_name = value;
        out_interface_name.value_namespace = name_space;
        out_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-index")
    {
        if_index.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "out-interface-name")
    {
        out_interface_name.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-index" || name == "ipv4-address" || name == "ipv6-address" || name == "mac-address" || name == "out-interface-name")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Operations()
    :
    preserve{YType::empty, "preserve"},
    pop_and_forward{YType::empty, "pop-and-forward"}
    	,
    swap(std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap>())
	,push(std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push>())
{
    swap->parent = this;
    push->parent = this;

    yang_name = "operations"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::~Operations()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::has_data() const
{
    return preserve.is_set
	|| pop_and_forward.is_set
	|| (swap !=  nullptr && swap->has_data())
	|| (push !=  nullptr && push->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preserve.yfilter)
	|| ydk::is_set(pop_and_forward.yfilter)
	|| (swap !=  nullptr && swap->has_operation())
	|| (push !=  nullptr && push->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preserve.is_set || is_set(preserve.yfilter)) leaf_name_data.push_back(preserve.get_name_leafdata());
    if (pop_and_forward.is_set || is_set(pop_and_forward.yfilter)) leaf_name_data.push_back(pop_and_forward.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "swap")
    {
        if(swap == nullptr)
        {
            swap = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap>();
        }
        return swap;
    }

    if(child_yang_name == "push")
    {
        if(push == nullptr)
        {
            push = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push>();
        }
        return push;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(swap != nullptr)
    {
        children["swap"] = swap;
    }

    if(push != nullptr)
    {
        children["push"] = push;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preserve")
    {
        preserve = value;
        preserve.value_namespace = name_space;
        preserve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pop-and-forward")
    {
        pop_and_forward = value;
        pop_and_forward.value_namespace = name_space;
        pop_and_forward.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preserve")
    {
        preserve.yfilter = yfilter;
    }
    if(value_path == "pop-and-forward")
    {
        pop_and_forward.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "swap" || name == "push" || name == "preserve" || name == "pop-and-forward")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Swap()
    :
    stack(std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack>())
{
    stack->parent = this;

    yang_name = "swap"; yang_parent_name = "operations"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::~Swap()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::has_data() const
{
    return (stack !=  nullptr && stack->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::has_operation() const
{
    return is_set(yfilter)
	|| (stack !=  nullptr && stack->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "swap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack == nullptr)
        {
            stack = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack>();
        }
        return stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stack != nullptr)
    {
        children["stack"] = stack;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{

    yang_name = "stack"; yang_parent_name = "swap"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_stack.yfilter);
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-stack")
    {
        label_stack.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Push()
    :
    stack(std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack>())
{
    stack->parent = this;

    yang_name = "push"; yang_parent_name = "operations"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::~Push()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::has_data() const
{
    return (stack !=  nullptr && stack->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::has_operation() const
{
    return is_set(yfilter)
	|| (stack !=  nullptr && stack->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack == nullptr)
        {
            stack = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack>();
        }
        return stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stack != nullptr)
    {
        children["stack"] = stack;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack")
        return true;
    return false;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{

    yang_name = "stack"; yang_parent_name = "push"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_stack.yfilter);
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-stack")
    {
        label_stack.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack")
        return true;
    return false;
}

MplsStatic::MplsStaticState::MplsStaticState()
    :
    label_switched_paths(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths>())
{
    label_switched_paths->parent = this;

    yang_name = "mpls-static-state"; yang_parent_name = "mpls-static"; is_top_level_class = false; has_list_ancestor = false;
}

MplsStatic::MplsStaticState::~MplsStaticState()
{
}

bool MplsStatic::MplsStaticState::has_data() const
{
    return (label_switched_paths !=  nullptr && label_switched_paths->has_data());
}

bool MplsStatic::MplsStaticState::has_operation() const
{
    return is_set(yfilter)
	|| (label_switched_paths !=  nullptr && label_switched_paths->has_operation());
}

std::string MplsStatic::MplsStaticState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mpls-static:mpls-static/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsStatic::MplsStaticState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-static-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-switched-paths")
    {
        if(label_switched_paths == nullptr)
        {
            label_switched_paths = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths>();
        }
        return label_switched_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(label_switched_paths != nullptr)
    {
        children["label-switched-paths"] = label_switched_paths;
    }

    return children;
}

void MplsStatic::MplsStaticState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticState::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-switched-paths")
        return true;
    return false;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPaths()
{

    yang_name = "label-switched-paths"; yang_parent_name = "mpls-static-state"; is_top_level_class = false; has_list_ancestor = false;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::~LabelSwitchedPaths()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::has_data() const
{
    for (std::size_t index=0; index<label_switched_path.size(); index++)
    {
        if(label_switched_path[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::has_operation() const
{
    for (std::size_t index=0; index<label_switched_path.size(); index++)
    {
        if(label_switched_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mpls-static:mpls-static/mpls-static-state/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-switched-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticState::LabelSwitchedPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-switched-path")
    {
        auto c = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath>();
        c->parent = this;
        label_switched_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : label_switched_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-switched-path")
        return true;
    return false;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::LabelSwitchedPath()
    :
    vrf_name{YType::str, "vrf-name"},
    prefix{YType::str, "prefix"},
    name{YType::str, "name"},
    in_label_value{YType::str, "in-label-value"}
    	,
    ingress_stats(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats>())
	,egress_stats(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats>())
	,path(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path>())
{
    ingress_stats->parent = this;
    egress_stats->parent = this;
    path->parent = this;

    yang_name = "label-switched-path"; yang_parent_name = "label-switched-paths"; is_top_level_class = false; has_list_ancestor = false;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::~LabelSwitchedPath()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::has_data() const
{
    return vrf_name.is_set
	|| prefix.is_set
	|| name.is_set
	|| in_label_value.is_set
	|| (ingress_stats !=  nullptr && ingress_stats->has_data())
	|| (egress_stats !=  nullptr && egress_stats->has_data())
	|| (path !=  nullptr && path->has_data());
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(in_label_value.yfilter)
	|| (ingress_stats !=  nullptr && ingress_stats->has_operation())
	|| (egress_stats !=  nullptr && egress_stats->has_operation())
	|| (path !=  nullptr && path->has_operation());
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mpls-static:mpls-static/mpls-static-state/label-switched-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-switched-path" <<"[vrf-name='" <<vrf_name <<"']" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (in_label_value.is_set || is_set(in_label_value.yfilter)) leaf_name_data.push_back(in_label_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress-stats")
    {
        if(ingress_stats == nullptr)
        {
            ingress_stats = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats>();
        }
        return ingress_stats;
    }

    if(child_yang_name == "egress-stats")
    {
        if(egress_stats == nullptr)
        {
            egress_stats = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats>();
        }
        return egress_stats;
    }

    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path>();
        }
        return path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ingress_stats != nullptr)
    {
        children["ingress-stats"] = ingress_stats;
    }

    if(egress_stats != nullptr)
    {
        children["egress-stats"] = egress_stats;
    }

    if(path != nullptr)
    {
        children["path"] = path;
    }

    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-label-value")
    {
        in_label_value = value;
        in_label_value.value_namespace = name_space;
        in_label_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "in-label-value")
    {
        in_label_value.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress-stats" || name == "egress-stats" || name == "path" || name == "vrf-name" || name == "prefix" || name == "name" || name == "in-label-value")
        return true;
    return false;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::IngressStats()
    :
    stats(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats>())
{
    stats->parent = this;

    yang_name = "ingress-stats"; yang_parent_name = "label-switched-path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::~IngressStats()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::has_data() const
{
    return (stats !=  nullptr && stats->has_data());
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::has_operation() const
{
    return is_set(yfilter)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats")
        return true;
    return false;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats::Stats()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"},
    dropped_packets{YType::uint64, "dropped-packets"},
    dropped_bytes{YType::uint64, "dropped-bytes"}
{

    yang_name = "stats"; yang_parent_name = "ingress-stats"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats::~Stats()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats::has_data() const
{
    return packets.is_set
	|| bytes.is_set
	|| dropped_packets.is_set
	|| dropped_bytes.is_set;
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(dropped_bytes.yfilter);
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (dropped_bytes.is_set || is_set(dropped_bytes.yfilter)) leaf_name_data.push_back(dropped_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-bytes")
    {
        dropped_bytes = value;
        dropped_bytes.value_namespace = name_space;
        dropped_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "dropped-bytes")
    {
        dropped_bytes.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes" || name == "dropped-packets" || name == "dropped-bytes")
        return true;
    return false;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::EgressStats()
    :
    stats(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats>())
{
    stats->parent = this;

    yang_name = "egress-stats"; yang_parent_name = "label-switched-path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::~EgressStats()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::has_data() const
{
    return (stats !=  nullptr && stats->has_data());
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::has_operation() const
{
    return is_set(yfilter)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats")
        return true;
    return false;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats::Stats()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"},
    dropped_packets{YType::uint64, "dropped-packets"},
    dropped_bytes{YType::uint64, "dropped-bytes"}
{

    yang_name = "stats"; yang_parent_name = "egress-stats"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats::~Stats()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats::has_data() const
{
    return packets.is_set
	|| bytes.is_set
	|| dropped_packets.is_set
	|| dropped_bytes.is_set;
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(dropped_bytes.yfilter);
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (dropped_bytes.is_set || is_set(dropped_bytes.yfilter)) leaf_name_data.push_back(dropped_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-bytes")
    {
        dropped_bytes = value;
        dropped_bytes.value_namespace = name_space;
        dropped_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "dropped-bytes")
    {
        dropped_bytes.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes" || name == "dropped-packets" || name == "dropped-bytes")
        return true;
    return false;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Path()
    :
    auto_protect{YType::boolean, "auto-protect"}
    	,
    operations(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations>())
{
    operations->parent = this;

    yang_name = "path"; yang_parent_name = "label-switched-path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::~Path()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::has_data() const
{
    for (std::size_t index=0; index<next_hop.size(); index++)
    {
        if(next_hop[index]->has_data())
            return true;
    }
    return auto_protect.is_set
	|| (operations !=  nullptr && operations->has_data());
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::has_operation() const
{
    for (std::size_t index=0; index<next_hop.size(); index++)
    {
        if(next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(auto_protect.yfilter)
	|| (operations !=  nullptr && operations->has_operation());
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_protect.is_set || is_set(auto_protect.yfilter)) leaf_name_data.push_back(auto_protect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "operations")
    {
        if(operations == nullptr)
        {
            operations = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations>();
        }
        return operations;
    }

    if(child_yang_name == "next-hop")
    {
        auto c = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop>();
        c->parent = this;
        next_hop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(operations != nullptr)
    {
        children["operations"] = operations;
    }

    count = 0;
    for (auto const & c : next_hop)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-protect")
    {
        auto_protect = value;
        auto_protect.value_namespace = name_space;
        auto_protect.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-protect")
    {
        auto_protect.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operations" || name == "next-hop" || name == "auto-protect")
        return true;
    return false;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Operations()
    :
    preserve{YType::empty, "preserve"},
    pop_and_forward{YType::empty, "pop-and-forward"}
    	,
    swap(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap>())
	,push(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push>())
{
    swap->parent = this;
    push->parent = this;

    yang_name = "operations"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::~Operations()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::has_data() const
{
    return preserve.is_set
	|| pop_and_forward.is_set
	|| (swap !=  nullptr && swap->has_data())
	|| (push !=  nullptr && push->has_data());
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preserve.yfilter)
	|| ydk::is_set(pop_and_forward.yfilter)
	|| (swap !=  nullptr && swap->has_operation())
	|| (push !=  nullptr && push->has_operation());
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preserve.is_set || is_set(preserve.yfilter)) leaf_name_data.push_back(preserve.get_name_leafdata());
    if (pop_and_forward.is_set || is_set(pop_and_forward.yfilter)) leaf_name_data.push_back(pop_and_forward.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "swap")
    {
        if(swap == nullptr)
        {
            swap = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap>();
        }
        return swap;
    }

    if(child_yang_name == "push")
    {
        if(push == nullptr)
        {
            push = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push>();
        }
        return push;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(swap != nullptr)
    {
        children["swap"] = swap;
    }

    if(push != nullptr)
    {
        children["push"] = push;
    }

    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preserve")
    {
        preserve = value;
        preserve.value_namespace = name_space;
        preserve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pop-and-forward")
    {
        pop_and_forward = value;
        pop_and_forward.value_namespace = name_space;
        pop_and_forward.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preserve")
    {
        preserve.yfilter = yfilter;
    }
    if(value_path == "pop-and-forward")
    {
        pop_and_forward.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "swap" || name == "push" || name == "preserve" || name == "pop-and-forward")
        return true;
    return false;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Swap()
    :
    stack(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack>())
{
    stack->parent = this;

    yang_name = "swap"; yang_parent_name = "operations"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::~Swap()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::has_data() const
{
    return (stack !=  nullptr && stack->has_data());
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::has_operation() const
{
    return is_set(yfilter)
	|| (stack !=  nullptr && stack->has_operation());
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "swap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack == nullptr)
        {
            stack = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack>();
        }
        return stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stack != nullptr)
    {
        children["stack"] = stack;
    }

    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack")
        return true;
    return false;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{

    yang_name = "stack"; yang_parent_name = "swap"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_stack.yfilter);
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-stack")
    {
        label_stack.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack")
        return true;
    return false;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Push()
    :
    stack(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack>())
{
    stack->parent = this;

    yang_name = "push"; yang_parent_name = "operations"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::~Push()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::has_data() const
{
    return (stack !=  nullptr && stack->has_data());
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::has_operation() const
{
    return is_set(yfilter)
	|| (stack !=  nullptr && stack->has_operation());
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack == nullptr)
        {
            stack = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack>();
        }
        return stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stack != nullptr)
    {
        children["stack"] = stack;
    }

    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack")
        return true;
    return false;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{

    yang_name = "stack"; yang_parent_name = "push"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_stack.yfilter);
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-stack")
    {
        label_stack.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack")
        return true;
    return false;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHop()
    :
    index_{YType::uint32, "index"},
    type{YType::enumeration, "type"},
    protected_by{YType::uint32, "protected-by"},
    origin{YType::identityref, "origin"}
    	,
    next_hop_type(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType>())
	,operations(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations>())
	,nexthop_stats(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats>())
{
    next_hop_type->parent = this;
    operations->parent = this;
    nexthop_stats->parent = this;

    yang_name = "next-hop"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::~NextHop()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::has_data() const
{
    return index_.is_set
	|| type.is_set
	|| protected_by.is_set
	|| origin.is_set
	|| (next_hop_type !=  nullptr && next_hop_type->has_data())
	|| (operations !=  nullptr && operations->has_data())
	|| (nexthop_stats !=  nullptr && nexthop_stats->has_data());
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(protected_by.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| (next_hop_type !=  nullptr && next_hop_type->has_operation())
	|| (operations !=  nullptr && operations->has_operation())
	|| (nexthop_stats !=  nullptr && nexthop_stats->has_operation());
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop" <<"[index='" <<index_ <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (protected_by.is_set || is_set(protected_by.yfilter)) leaf_name_data.push_back(protected_by.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-type")
    {
        if(next_hop_type == nullptr)
        {
            next_hop_type = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType>();
        }
        return next_hop_type;
    }

    if(child_yang_name == "operations")
    {
        if(operations == nullptr)
        {
            operations = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations>();
        }
        return operations;
    }

    if(child_yang_name == "nexthop-stats")
    {
        if(nexthop_stats == nullptr)
        {
            nexthop_stats = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats>();
        }
        return nexthop_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(next_hop_type != nullptr)
    {
        children["next-hop-type"] = next_hop_type;
    }

    if(operations != nullptr)
    {
        children["operations"] = operations;
    }

    if(nexthop_stats != nullptr)
    {
        children["nexthop-stats"] = nexthop_stats;
    }

    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-by")
    {
        protected_by = value;
        protected_by.value_namespace = name_space;
        protected_by.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "protected-by")
    {
        protected_by.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-type" || name == "operations" || name == "nexthop-stats" || name == "index" || name == "type" || name == "protected-by" || name == "origin")
        return true;
    return false;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType::NextHopType()
    :
    if_index{YType::uint32, "if-index"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    mac_address{YType::str, "mac-address"},
    out_interface_name{YType::str, "out-interface-name"}
{

    yang_name = "next-hop-type"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType::~NextHopType()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType::has_data() const
{
    return if_index.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| mac_address.is_set
	|| out_interface_name.is_set;
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_index.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(out_interface_name.yfilter);
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_index.is_set || is_set(if_index.yfilter)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (out_interface_name.is_set || is_set(out_interface_name.yfilter)) leaf_name_data.push_back(out_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-index")
    {
        if_index = value;
        if_index.value_namespace = name_space;
        if_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-interface-name")
    {
        out_interface_name = value;
        out_interface_name.value_namespace = name_space;
        out_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-index")
    {
        if_index.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "out-interface-name")
    {
        out_interface_name.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-index" || name == "ipv4-address" || name == "ipv6-address" || name == "mac-address" || name == "out-interface-name")
        return true;
    return false;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Operations()
    :
    preserve{YType::empty, "preserve"},
    pop_and_forward{YType::empty, "pop-and-forward"}
    	,
    swap(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap>())
	,push(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push>())
{
    swap->parent = this;
    push->parent = this;

    yang_name = "operations"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::~Operations()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::has_data() const
{
    return preserve.is_set
	|| pop_and_forward.is_set
	|| (swap !=  nullptr && swap->has_data())
	|| (push !=  nullptr && push->has_data());
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preserve.yfilter)
	|| ydk::is_set(pop_and_forward.yfilter)
	|| (swap !=  nullptr && swap->has_operation())
	|| (push !=  nullptr && push->has_operation());
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preserve.is_set || is_set(preserve.yfilter)) leaf_name_data.push_back(preserve.get_name_leafdata());
    if (pop_and_forward.is_set || is_set(pop_and_forward.yfilter)) leaf_name_data.push_back(pop_and_forward.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "swap")
    {
        if(swap == nullptr)
        {
            swap = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap>();
        }
        return swap;
    }

    if(child_yang_name == "push")
    {
        if(push == nullptr)
        {
            push = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push>();
        }
        return push;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(swap != nullptr)
    {
        children["swap"] = swap;
    }

    if(push != nullptr)
    {
        children["push"] = push;
    }

    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preserve")
    {
        preserve = value;
        preserve.value_namespace = name_space;
        preserve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pop-and-forward")
    {
        pop_and_forward = value;
        pop_and_forward.value_namespace = name_space;
        pop_and_forward.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preserve")
    {
        preserve.yfilter = yfilter;
    }
    if(value_path == "pop-and-forward")
    {
        pop_and_forward.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "swap" || name == "push" || name == "preserve" || name == "pop-and-forward")
        return true;
    return false;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Swap()
    :
    stack(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack>())
{
    stack->parent = this;

    yang_name = "swap"; yang_parent_name = "operations"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::~Swap()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::has_data() const
{
    return (stack !=  nullptr && stack->has_data());
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::has_operation() const
{
    return is_set(yfilter)
	|| (stack !=  nullptr && stack->has_operation());
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "swap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack == nullptr)
        {
            stack = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack>();
        }
        return stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stack != nullptr)
    {
        children["stack"] = stack;
    }

    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack")
        return true;
    return false;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{

    yang_name = "stack"; yang_parent_name = "swap"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_stack.yfilter);
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-stack")
    {
        label_stack.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack")
        return true;
    return false;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Push()
    :
    stack(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack>())
{
    stack->parent = this;

    yang_name = "push"; yang_parent_name = "operations"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::~Push()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::has_data() const
{
    return (stack !=  nullptr && stack->has_data());
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::has_operation() const
{
    return is_set(yfilter)
	|| (stack !=  nullptr && stack->has_operation());
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack == nullptr)
        {
            stack = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack>();
        }
        return stack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stack != nullptr)
    {
        children["stack"] = stack;
    }

    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stack")
        return true;
    return false;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{

    yang_name = "stack"; yang_parent_name = "push"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_stack.yfilter);
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-stack")
    {
        label_stack.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack")
        return true;
    return false;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::NexthopStats()
    :
    stats(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats>())
{
    stats->parent = this;

    yang_name = "nexthop-stats"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::~NexthopStats()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::has_data() const
{
    return (stats !=  nullptr && stats->has_data());
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::has_operation() const
{
    return is_set(yfilter)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats")
        return true;
    return false;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats::Stats()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"},
    dropped_packets{YType::uint64, "dropped-packets"},
    dropped_bytes{YType::uint64, "dropped-bytes"}
{

    yang_name = "stats"; yang_parent_name = "nexthop-stats"; is_top_level_class = false; has_list_ancestor = true;
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats::~Stats()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats::has_data() const
{
    return packets.is_set
	|| bytes.is_set
	|| dropped_packets.is_set
	|| dropped_bytes.is_set;
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| ydk::is_set(dropped_bytes.yfilter);
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (dropped_bytes.is_set || is_set(dropped_bytes.yfilter)) leaf_name_data.push_back(dropped_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-bytes")
    {
        dropped_bytes = value;
        dropped_bytes.value_namespace = name_space;
        dropped_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
    if(value_path == "dropped-bytes")
    {
        dropped_bytes.yfilter = yfilter;
    }
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes" || name == "dropped-packets" || name == "dropped-bytes")
        return true;
    return false;
}

LspIPv4::LspIPv4()
     : Identity("urn:ietf:params:xml:ns:yang:common-mpls-static", "common-mpls-static", "common-mpls-static:lsp-IPv4")
{

}

LspIPv4::~LspIPv4()
{
}

LspIPv6::LspIPv6()
     : Identity("urn:ietf:params:xml:ns:yang:common-mpls-static", "common-mpls-static", "common-mpls-static:lsp-IPv6")
{

}

LspIPv6::~LspIPv6()
{
}

LspVrf::LspVrf()
     : Identity("urn:ietf:params:xml:ns:yang:common-mpls-static", "common-mpls-static", "common-mpls-static:lsp-vrf")
{

}

LspVrf::~LspVrf()
{
}

Lsp::Lsp()
     : Identity("urn:ietf:params:xml:ns:yang:common-mpls-static", "common-mpls-static", "common-mpls-static:lsp")
{

}

Lsp::~Lsp()
{
}

StaticNexthop::StaticNexthop()
     : Identity("urn:ietf:params:xml:ns:yang:common-mpls-static", "common-mpls-static", "common-mpls-static:static-nexthop")
{

}

StaticNexthop::~StaticNexthop()
{
}

BgpRouteNexthop::BgpRouteNexthop()
     : Identity("urn:ietf:params:xml:ns:yang:common-mpls-static", "common-mpls-static", "common-mpls-static:bgp-route-nexthop")
{

}

BgpRouteNexthop::~BgpRouteNexthop()
{
}

OspfRouteNexthop::OspfRouteNexthop()
     : Identity("urn:ietf:params:xml:ns:yang:common-mpls-static", "common-mpls-static", "common-mpls-static:ospf-route-nexthop")
{

}

OspfRouteNexthop::~OspfRouteNexthop()
{
}

IsisRouteNexthop::IsisRouteNexthop()
     : Identity("urn:ietf:params:xml:ns:yang:common-mpls-static", "common-mpls-static", "common-mpls-static:isis-route-nexthop")
{

}

IsisRouteNexthop::~IsisRouteNexthop()
{
}

const Enum::YLeaf Hoptype::PRIMARY {0, "PRIMARY"};
const Enum::YLeaf Hoptype::BACKUP {1, "BACKUP"};


}
}

