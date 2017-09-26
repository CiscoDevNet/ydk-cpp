
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_lpts_lib_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lpts_lib_cfg {

Lpts::Lpts()
    :
    ipolicer(nullptr) // presence node
	,punt(std::make_shared<Lpts::Punt>())
{
    punt->parent = this;

    yang_name = "lpts"; yang_parent_name = "Cisco-IOS-XR-lpts-lib-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Lpts::~Lpts()
{
}

bool Lpts::has_data() const
{
    return (ipolicer !=  nullptr && ipolicer->has_data())
	|| (punt !=  nullptr && punt->has_data());
}

bool Lpts::has_operation() const
{
    return is_set(yfilter)
	|| (ipolicer !=  nullptr && ipolicer->has_operation())
	|| (punt !=  nullptr && punt->has_operation());
}

std::string Lpts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lpts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lpts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipolicer")
    {
        if(ipolicer == nullptr)
        {
            ipolicer = std::make_shared<Lpts::Ipolicer>();
        }
        return ipolicer;
    }

    if(child_yang_name == "punt")
    {
        if(punt == nullptr)
        {
            punt = std::make_shared<Lpts::Punt>();
        }
        return punt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipolicer != nullptr)
    {
        children["ipolicer"] = ipolicer;
    }

    if(punt != nullptr)
    {
        children["punt"] = punt;
    }

    return children;
}

void Lpts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lpts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Lpts::clone_ptr() const
{
    return std::make_shared<Lpts>();
}

std::string Lpts::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Lpts::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Lpts::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Lpts::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Lpts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipolicer" || name == "punt")
        return true;
    return false;
}

Lpts::Ipolicer::Ipolicer()
    :
    enable{YType::empty, "enable"}
    	,
    flows(std::make_shared<Lpts::Ipolicer::Flows>())
	,ipv4acls(std::make_shared<Lpts::Ipolicer::Ipv4Acls>())
{
    flows->parent = this;
    ipv4acls->parent = this;

    yang_name = "ipolicer"; yang_parent_name = "lpts"; is_top_level_class = false; has_list_ancestor = false;
}

Lpts::Ipolicer::~Ipolicer()
{
}

bool Lpts::Ipolicer::has_data() const
{
    return enable.is_set
	|| (flows !=  nullptr && flows->has_data())
	|| (ipv4acls !=  nullptr && ipv4acls->has_data());
}

bool Lpts::Ipolicer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (flows !=  nullptr && flows->has_operation())
	|| (ipv4acls !=  nullptr && ipv4acls->has_operation());
}

std::string Lpts::Ipolicer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/" << get_segment_path();
    return path_buffer.str();
}

std::string Lpts::Ipolicer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-pre-ifib-cfg:ipolicer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lpts::Ipolicer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lpts::Ipolicer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flows")
    {
        if(flows == nullptr)
        {
            flows = std::make_shared<Lpts::Ipolicer::Flows>();
        }
        return flows;
    }

    if(child_yang_name == "ipv4acls")
    {
        if(ipv4acls == nullptr)
        {
            ipv4acls = std::make_shared<Lpts::Ipolicer::Ipv4Acls>();
        }
        return ipv4acls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Ipolicer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flows != nullptr)
    {
        children["flows"] = flows;
    }

    if(ipv4acls != nullptr)
    {
        children["ipv4acls"] = ipv4acls;
    }

    return children;
}

void Lpts::Ipolicer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Lpts::Ipolicer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Lpts::Ipolicer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flows" || name == "ipv4acls" || name == "enable")
        return true;
    return false;
}

Lpts::Ipolicer::Flows::Flows()
{

    yang_name = "flows"; yang_parent_name = "ipolicer"; is_top_level_class = false; has_list_ancestor = false;
}

Lpts::Ipolicer::Flows::~Flows()
{
}

bool Lpts::Ipolicer::Flows::has_data() const
{
    for (std::size_t index=0; index<flow.size(); index++)
    {
        if(flow[index]->has_data())
            return true;
    }
    return false;
}

bool Lpts::Ipolicer::Flows::has_operation() const
{
    for (std::size_t index=0; index<flow.size(); index++)
    {
        if(flow[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lpts::Ipolicer::Flows::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-pre-ifib-cfg:ipolicer/" << get_segment_path();
    return path_buffer.str();
}

std::string Lpts::Ipolicer::Flows::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flows";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lpts::Ipolicer::Flows::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lpts::Ipolicer::Flows::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        for(auto const & c : flow)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lpts::Ipolicer::Flows::Flow>();
        c->parent = this;
        flow.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Ipolicer::Flows::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lpts::Ipolicer::Flows::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lpts::Ipolicer::Flows::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lpts::Ipolicer::Flows::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow")
        return true;
    return false;
}

Lpts::Ipolicer::Flows::Flow::Flow()
    :
    flow_type{YType::enumeration, "flow-type"},
    rate{YType::int32, "rate"}
    	,
    precedences(std::make_shared<Lpts::Ipolicer::Flows::Flow::Precedences>())
{
    precedences->parent = this;

    yang_name = "flow"; yang_parent_name = "flows"; is_top_level_class = false; has_list_ancestor = false;
}

Lpts::Ipolicer::Flows::Flow::~Flow()
{
}

bool Lpts::Ipolicer::Flows::Flow::has_data() const
{
    return flow_type.is_set
	|| rate.is_set
	|| (precedences !=  nullptr && precedences->has_data());
}

bool Lpts::Ipolicer::Flows::Flow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_type.yfilter)
	|| ydk::is_set(rate.yfilter)
	|| (precedences !=  nullptr && precedences->has_operation());
}

std::string Lpts::Ipolicer::Flows::Flow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-pre-ifib-cfg:ipolicer/flows/" << get_segment_path();
    return path_buffer.str();
}

std::string Lpts::Ipolicer::Flows::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow" <<"[flow-type='" <<flow_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lpts::Ipolicer::Flows::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_type.is_set || is_set(flow_type.yfilter)) leaf_name_data.push_back(flow_type.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lpts::Ipolicer::Flows::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "precedences")
    {
        if(precedences == nullptr)
        {
            precedences = std::make_shared<Lpts::Ipolicer::Flows::Flow::Precedences>();
        }
        return precedences;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Ipolicer::Flows::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(precedences != nullptr)
    {
        children["precedences"] = precedences;
    }

    return children;
}

void Lpts::Ipolicer::Flows::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-type")
    {
        flow_type = value;
        flow_type.value_namespace = name_space;
        flow_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Lpts::Ipolicer::Flows::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-type")
    {
        flow_type.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Lpts::Ipolicer::Flows::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "precedences" || name == "flow-type" || name == "rate")
        return true;
    return false;
}

Lpts::Ipolicer::Flows::Flow::Precedences::Precedences()
    :
    precedence{YType::str, "precedence"}
{

    yang_name = "precedences"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = true;
}

Lpts::Ipolicer::Flows::Flow::Precedences::~Precedences()
{
}

bool Lpts::Ipolicer::Flows::Flow::Precedences::has_data() const
{
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Lpts::Ipolicer::Flows::Flow::Precedences::has_operation() const
{
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(precedence.yfilter);
}

std::string Lpts::Ipolicer::Flows::Flow::Precedences::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "precedences";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lpts::Ipolicer::Flows::Flow::Precedences::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Lpts::Ipolicer::Flows::Flow::Precedences::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Ipolicer::Flows::Flow::Precedences::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Lpts::Ipolicer::Flows::Flow::Precedences::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
}

void Lpts::Ipolicer::Flows::Flow::Precedences::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
}

bool Lpts::Ipolicer::Flows::Flow::Precedences::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "precedence")
        return true;
    return false;
}

Lpts::Ipolicer::Ipv4Acls::Ipv4Acls()
{

    yang_name = "ipv4acls"; yang_parent_name = "ipolicer"; is_top_level_class = false; has_list_ancestor = false;
}

Lpts::Ipolicer::Ipv4Acls::~Ipv4Acls()
{
}

bool Lpts::Ipolicer::Ipv4Acls::has_data() const
{
    for (std::size_t index=0; index<ipv4acl.size(); index++)
    {
        if(ipv4acl[index]->has_data())
            return true;
    }
    return false;
}

bool Lpts::Ipolicer::Ipv4Acls::has_operation() const
{
    for (std::size_t index=0; index<ipv4acl.size(); index++)
    {
        if(ipv4acl[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lpts::Ipolicer::Ipv4Acls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-pre-ifib-cfg:ipolicer/" << get_segment_path();
    return path_buffer.str();
}

std::string Lpts::Ipolicer::Ipv4Acls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4acls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lpts::Ipolicer::Ipv4Acls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lpts::Ipolicer::Ipv4Acls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4acl")
    {
        for(auto const & c : ipv4acl)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lpts::Ipolicer::Ipv4Acls::Ipv4Acl>();
        c->parent = this;
        ipv4acl.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Ipolicer::Ipv4Acls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4acl)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lpts::Ipolicer::Ipv4Acls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lpts::Ipolicer::Ipv4Acls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lpts::Ipolicer::Ipv4Acls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4acl")
        return true;
    return false;
}

Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4Acl()
    :
    acl_name{YType::str, "acl-name"}
    	,
    ipv4vrf_names(std::make_shared<Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames>())
{
    ipv4vrf_names->parent = this;

    yang_name = "ipv4acl"; yang_parent_name = "ipv4acls"; is_top_level_class = false; has_list_ancestor = false;
}

Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::~Ipv4Acl()
{
}

bool Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::has_data() const
{
    return acl_name.is_set
	|| (ipv4vrf_names !=  nullptr && ipv4vrf_names->has_data());
}

bool Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| (ipv4vrf_names !=  nullptr && ipv4vrf_names->has_operation());
}

std::string Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-pre-ifib-cfg:ipolicer/ipv4acls/" << get_segment_path();
    return path_buffer.str();
}

std::string Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4acl" <<"[acl-name='" <<acl_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4vrf-names")
    {
        if(ipv4vrf_names == nullptr)
        {
            ipv4vrf_names = std::make_shared<Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames>();
        }
        return ipv4vrf_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4vrf_names != nullptr)
    {
        children["ipv4vrf-names"] = ipv4vrf_names;
    }

    return children;
}

void Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4vrf-names" || name == "acl-name")
        return true;
    return false;
}

Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfNames()
{

    yang_name = "ipv4vrf-names"; yang_parent_name = "ipv4acl"; is_top_level_class = false; has_list_ancestor = true;
}

Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::~Ipv4VrfNames()
{
}

bool Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::has_data() const
{
    for (std::size_t index=0; index<ipv4vrf_name.size(); index++)
    {
        if(ipv4vrf_name[index]->has_data())
            return true;
    }
    return false;
}

bool Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::has_operation() const
{
    for (std::size_t index=0; index<ipv4vrf_name.size(); index++)
    {
        if(ipv4vrf_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4vrf-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4vrf-name")
    {
        for(auto const & c : ipv4vrf_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName>();
        c->parent = this;
        ipv4vrf_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4vrf_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4vrf-name")
        return true;
    return false;
}

Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName::Ipv4VrfName()
    :
    vrf_name{YType::str, "vrf-name"},
    acl_rate{YType::uint32, "acl-rate"}
{

    yang_name = "ipv4vrf-name"; yang_parent_name = "ipv4vrf-names"; is_top_level_class = false; has_list_ancestor = true;
}

Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName::~Ipv4VrfName()
{
}

bool Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName::has_data() const
{
    return vrf_name.is_set
	|| acl_rate.is_set;
}

bool Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(acl_rate.yfilter);
}

std::string Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4vrf-name" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (acl_rate.is_set || is_set(acl_rate.yfilter)) leaf_name_data.push_back(acl_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-rate")
    {
        acl_rate = value;
        acl_rate.value_namespace = name_space;
        acl_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "acl-rate")
    {
        acl_rate.yfilter = yfilter;
    }
}

bool Lpts::Ipolicer::Ipv4Acls::Ipv4Acl::Ipv4VrfNames::Ipv4VrfName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "acl-rate")
        return true;
    return false;
}

Lpts::Punt::Punt()
    :
    flowtrap(std::make_shared<Lpts::Punt::Flowtrap>())
{
    flowtrap->parent = this;

    yang_name = "punt"; yang_parent_name = "lpts"; is_top_level_class = false; has_list_ancestor = false;
}

Lpts::Punt::~Punt()
{
}

bool Lpts::Punt::has_data() const
{
    return (flowtrap !=  nullptr && flowtrap->has_data());
}

bool Lpts::Punt::has_operation() const
{
    return is_set(yfilter)
	|| (flowtrap !=  nullptr && flowtrap->has_operation());
}

std::string Lpts::Punt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/" << get_segment_path();
    return path_buffer.str();
}

std::string Lpts::Punt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-punt-flowtrap-cfg:punt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lpts::Punt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lpts::Punt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flowtrap")
    {
        if(flowtrap == nullptr)
        {
            flowtrap = std::make_shared<Lpts::Punt::Flowtrap>();
        }
        return flowtrap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Punt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flowtrap != nullptr)
    {
        children["flowtrap"] = flowtrap;
    }

    return children;
}

void Lpts::Punt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lpts::Punt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lpts::Punt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flowtrap")
        return true;
    return false;
}

Lpts::Punt::Flowtrap::Flowtrap()
    :
    dampening{YType::uint32, "dampening"},
    et_size{YType::uint32, "et-size"},
    eviction_search_limit{YType::uint32, "eviction-search-limit"},
    eviction_threshold{YType::uint32, "eviction-threshold"},
    interface_based_flow{YType::boolean, "interface-based-flow"},
    max_flow_gap{YType::uint32, "max-flow-gap"},
    non_subscriber_interfaces{YType::int32, "non-subscriber-interfaces"},
    report_threshold{YType::uint16, "report-threshold"},
    routing_protocols_enable{YType::boolean, "routing-protocols-enable"},
    sample_prob{YType::str, "sample-prob"},
    subscriber_interfaces{YType::boolean, "subscriber-interfaces"}
    	,
    exclude(std::make_shared<Lpts::Punt::Flowtrap::Exclude>())
	,penalty_rates(std::make_shared<Lpts::Punt::Flowtrap::PenaltyRates>())
	,penalty_timeouts(std::make_shared<Lpts::Punt::Flowtrap::PenaltyTimeouts>())
{
    exclude->parent = this;
    penalty_rates->parent = this;
    penalty_timeouts->parent = this;

    yang_name = "flowtrap"; yang_parent_name = "punt"; is_top_level_class = false; has_list_ancestor = false;
}

Lpts::Punt::Flowtrap::~Flowtrap()
{
}

bool Lpts::Punt::Flowtrap::has_data() const
{
    return dampening.is_set
	|| et_size.is_set
	|| eviction_search_limit.is_set
	|| eviction_threshold.is_set
	|| interface_based_flow.is_set
	|| max_flow_gap.is_set
	|| non_subscriber_interfaces.is_set
	|| report_threshold.is_set
	|| routing_protocols_enable.is_set
	|| sample_prob.is_set
	|| subscriber_interfaces.is_set
	|| (exclude !=  nullptr && exclude->has_data())
	|| (penalty_rates !=  nullptr && penalty_rates->has_data())
	|| (penalty_timeouts !=  nullptr && penalty_timeouts->has_data());
}

bool Lpts::Punt::Flowtrap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dampening.yfilter)
	|| ydk::is_set(et_size.yfilter)
	|| ydk::is_set(eviction_search_limit.yfilter)
	|| ydk::is_set(eviction_threshold.yfilter)
	|| ydk::is_set(interface_based_flow.yfilter)
	|| ydk::is_set(max_flow_gap.yfilter)
	|| ydk::is_set(non_subscriber_interfaces.yfilter)
	|| ydk::is_set(report_threshold.yfilter)
	|| ydk::is_set(routing_protocols_enable.yfilter)
	|| ydk::is_set(sample_prob.yfilter)
	|| ydk::is_set(subscriber_interfaces.yfilter)
	|| (exclude !=  nullptr && exclude->has_operation())
	|| (penalty_rates !=  nullptr && penalty_rates->has_operation())
	|| (penalty_timeouts !=  nullptr && penalty_timeouts->has_operation());
}

std::string Lpts::Punt::Flowtrap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-punt-flowtrap-cfg:punt/" << get_segment_path();
    return path_buffer.str();
}

std::string Lpts::Punt::Flowtrap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowtrap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lpts::Punt::Flowtrap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dampening.is_set || is_set(dampening.yfilter)) leaf_name_data.push_back(dampening.get_name_leafdata());
    if (et_size.is_set || is_set(et_size.yfilter)) leaf_name_data.push_back(et_size.get_name_leafdata());
    if (eviction_search_limit.is_set || is_set(eviction_search_limit.yfilter)) leaf_name_data.push_back(eviction_search_limit.get_name_leafdata());
    if (eviction_threshold.is_set || is_set(eviction_threshold.yfilter)) leaf_name_data.push_back(eviction_threshold.get_name_leafdata());
    if (interface_based_flow.is_set || is_set(interface_based_flow.yfilter)) leaf_name_data.push_back(interface_based_flow.get_name_leafdata());
    if (max_flow_gap.is_set || is_set(max_flow_gap.yfilter)) leaf_name_data.push_back(max_flow_gap.get_name_leafdata());
    if (non_subscriber_interfaces.is_set || is_set(non_subscriber_interfaces.yfilter)) leaf_name_data.push_back(non_subscriber_interfaces.get_name_leafdata());
    if (report_threshold.is_set || is_set(report_threshold.yfilter)) leaf_name_data.push_back(report_threshold.get_name_leafdata());
    if (routing_protocols_enable.is_set || is_set(routing_protocols_enable.yfilter)) leaf_name_data.push_back(routing_protocols_enable.get_name_leafdata());
    if (sample_prob.is_set || is_set(sample_prob.yfilter)) leaf_name_data.push_back(sample_prob.get_name_leafdata());
    if (subscriber_interfaces.is_set || is_set(subscriber_interfaces.yfilter)) leaf_name_data.push_back(subscriber_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lpts::Punt::Flowtrap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude")
    {
        if(exclude == nullptr)
        {
            exclude = std::make_shared<Lpts::Punt::Flowtrap::Exclude>();
        }
        return exclude;
    }

    if(child_yang_name == "penalty-rates")
    {
        if(penalty_rates == nullptr)
        {
            penalty_rates = std::make_shared<Lpts::Punt::Flowtrap::PenaltyRates>();
        }
        return penalty_rates;
    }

    if(child_yang_name == "penalty-timeouts")
    {
        if(penalty_timeouts == nullptr)
        {
            penalty_timeouts = std::make_shared<Lpts::Punt::Flowtrap::PenaltyTimeouts>();
        }
        return penalty_timeouts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Punt::Flowtrap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exclude != nullptr)
    {
        children["exclude"] = exclude;
    }

    if(penalty_rates != nullptr)
    {
        children["penalty-rates"] = penalty_rates;
    }

    if(penalty_timeouts != nullptr)
    {
        children["penalty-timeouts"] = penalty_timeouts;
    }

    return children;
}

void Lpts::Punt::Flowtrap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dampening")
    {
        dampening = value;
        dampening.value_namespace = name_space;
        dampening.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "et-size")
    {
        et_size = value;
        et_size.value_namespace = name_space;
        et_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eviction-search-limit")
    {
        eviction_search_limit = value;
        eviction_search_limit.value_namespace = name_space;
        eviction_search_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eviction-threshold")
    {
        eviction_threshold = value;
        eviction_threshold.value_namespace = name_space;
        eviction_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-based-flow")
    {
        interface_based_flow = value;
        interface_based_flow.value_namespace = name_space;
        interface_based_flow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-flow-gap")
    {
        max_flow_gap = value;
        max_flow_gap.value_namespace = name_space;
        max_flow_gap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-subscriber-interfaces")
    {
        non_subscriber_interfaces = value;
        non_subscriber_interfaces.value_namespace = name_space;
        non_subscriber_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-threshold")
    {
        report_threshold = value;
        report_threshold.value_namespace = name_space;
        report_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-protocols-enable")
    {
        routing_protocols_enable = value;
        routing_protocols_enable.value_namespace = name_space;
        routing_protocols_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-prob")
    {
        sample_prob = value;
        sample_prob.value_namespace = name_space;
        sample_prob.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-interfaces")
    {
        subscriber_interfaces = value;
        subscriber_interfaces.value_namespace = name_space;
        subscriber_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Lpts::Punt::Flowtrap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dampening")
    {
        dampening.yfilter = yfilter;
    }
    if(value_path == "et-size")
    {
        et_size.yfilter = yfilter;
    }
    if(value_path == "eviction-search-limit")
    {
        eviction_search_limit.yfilter = yfilter;
    }
    if(value_path == "eviction-threshold")
    {
        eviction_threshold.yfilter = yfilter;
    }
    if(value_path == "interface-based-flow")
    {
        interface_based_flow.yfilter = yfilter;
    }
    if(value_path == "max-flow-gap")
    {
        max_flow_gap.yfilter = yfilter;
    }
    if(value_path == "non-subscriber-interfaces")
    {
        non_subscriber_interfaces.yfilter = yfilter;
    }
    if(value_path == "report-threshold")
    {
        report_threshold.yfilter = yfilter;
    }
    if(value_path == "routing-protocols-enable")
    {
        routing_protocols_enable.yfilter = yfilter;
    }
    if(value_path == "sample-prob")
    {
        sample_prob.yfilter = yfilter;
    }
    if(value_path == "subscriber-interfaces")
    {
        subscriber_interfaces.yfilter = yfilter;
    }
}

bool Lpts::Punt::Flowtrap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude" || name == "penalty-rates" || name == "penalty-timeouts" || name == "dampening" || name == "et-size" || name == "eviction-search-limit" || name == "eviction-threshold" || name == "interface-based-flow" || name == "max-flow-gap" || name == "non-subscriber-interfaces" || name == "report-threshold" || name == "routing-protocols-enable" || name == "sample-prob" || name == "subscriber-interfaces")
        return true;
    return false;
}

Lpts::Punt::Flowtrap::Exclude::Exclude()
    :
    interface_names(std::make_shared<Lpts::Punt::Flowtrap::Exclude::InterfaceNames>())
{
    interface_names->parent = this;

    yang_name = "exclude"; yang_parent_name = "flowtrap"; is_top_level_class = false; has_list_ancestor = false;
}

Lpts::Punt::Flowtrap::Exclude::~Exclude()
{
}

bool Lpts::Punt::Flowtrap::Exclude::has_data() const
{
    return (interface_names !=  nullptr && interface_names->has_data());
}

bool Lpts::Punt::Flowtrap::Exclude::has_operation() const
{
    return is_set(yfilter)
	|| (interface_names !=  nullptr && interface_names->has_operation());
}

std::string Lpts::Punt::Flowtrap::Exclude::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-punt-flowtrap-cfg:punt/flowtrap/" << get_segment_path();
    return path_buffer.str();
}

std::string Lpts::Punt::Flowtrap::Exclude::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lpts::Punt::Flowtrap::Exclude::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lpts::Punt::Flowtrap::Exclude::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-names")
    {
        if(interface_names == nullptr)
        {
            interface_names = std::make_shared<Lpts::Punt::Flowtrap::Exclude::InterfaceNames>();
        }
        return interface_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Punt::Flowtrap::Exclude::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_names != nullptr)
    {
        children["interface-names"] = interface_names;
    }

    return children;
}

void Lpts::Punt::Flowtrap::Exclude::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lpts::Punt::Flowtrap::Exclude::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lpts::Punt::Flowtrap::Exclude::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-names")
        return true;
    return false;
}

Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceNames()
{

    yang_name = "interface-names"; yang_parent_name = "exclude"; is_top_level_class = false; has_list_ancestor = false;
}

Lpts::Punt::Flowtrap::Exclude::InterfaceNames::~InterfaceNames()
{
}

bool Lpts::Punt::Flowtrap::Exclude::InterfaceNames::has_data() const
{
    for (std::size_t index=0; index<interface_name.size(); index++)
    {
        if(interface_name[index]->has_data())
            return true;
    }
    return false;
}

bool Lpts::Punt::Flowtrap::Exclude::InterfaceNames::has_operation() const
{
    for (std::size_t index=0; index<interface_name.size(); index++)
    {
        if(interface_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lpts::Punt::Flowtrap::Exclude::InterfaceNames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-punt-flowtrap-cfg:punt/flowtrap/exclude/" << get_segment_path();
    return path_buffer.str();
}

std::string Lpts::Punt::Flowtrap::Exclude::InterfaceNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lpts::Punt::Flowtrap::Exclude::InterfaceNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lpts::Punt::Flowtrap::Exclude::InterfaceNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-name")
    {
        for(auto const & c : interface_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName>();
        c->parent = this;
        interface_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Punt::Flowtrap::Exclude::InterfaceNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lpts::Punt::Flowtrap::Exclude::InterfaceNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lpts::Punt::Flowtrap::Exclude::InterfaceNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lpts::Punt::Flowtrap::Exclude::InterfaceNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName::InterfaceName()
    :
    ifname{YType::str, "ifname"},
    id1{YType::boolean, "id1"}
{

    yang_name = "interface-name"; yang_parent_name = "interface-names"; is_top_level_class = false; has_list_ancestor = false;
}

Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName::~InterfaceName()
{
}

bool Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName::has_data() const
{
    return ifname.is_set
	|| id1.is_set;
}

bool Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifname.yfilter)
	|| ydk::is_set(id1.yfilter);
}

std::string Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-punt-flowtrap-cfg:punt/flowtrap/exclude/interface-names/" << get_segment_path();
    return path_buffer.str();
}

std::string Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-name" <<"[ifname='" <<ifname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (id1.is_set || is_set(id1.yfilter)) leaf_name_data.push_back(id1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifname")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id1")
    {
        id1 = value;
        id1.value_namespace = name_space;
        id1.value_namespace_prefix = name_space_prefix;
    }
}

void Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifname")
    {
        ifname.yfilter = yfilter;
    }
    if(value_path == "id1")
    {
        id1.yfilter = yfilter;
    }
}

bool Lpts::Punt::Flowtrap::Exclude::InterfaceNames::InterfaceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifname" || name == "id1")
        return true;
    return false;
}

Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRates()
{

    yang_name = "penalty-rates"; yang_parent_name = "flowtrap"; is_top_level_class = false; has_list_ancestor = false;
}

Lpts::Punt::Flowtrap::PenaltyRates::~PenaltyRates()
{
}

bool Lpts::Punt::Flowtrap::PenaltyRates::has_data() const
{
    for (std::size_t index=0; index<penalty_rate.size(); index++)
    {
        if(penalty_rate[index]->has_data())
            return true;
    }
    return false;
}

bool Lpts::Punt::Flowtrap::PenaltyRates::has_operation() const
{
    for (std::size_t index=0; index<penalty_rate.size(); index++)
    {
        if(penalty_rate[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lpts::Punt::Flowtrap::PenaltyRates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-punt-flowtrap-cfg:punt/flowtrap/" << get_segment_path();
    return path_buffer.str();
}

std::string Lpts::Punt::Flowtrap::PenaltyRates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "penalty-rates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lpts::Punt::Flowtrap::PenaltyRates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lpts::Punt::Flowtrap::PenaltyRates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "penalty-rate")
    {
        for(auto const & c : penalty_rate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate>();
        c->parent = this;
        penalty_rate.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Punt::Flowtrap::PenaltyRates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : penalty_rate)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lpts::Punt::Flowtrap::PenaltyRates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lpts::Punt::Flowtrap::PenaltyRates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lpts::Punt::Flowtrap::PenaltyRates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "penalty-rate")
        return true;
    return false;
}

Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate::PenaltyRate()
    :
    protocol_name{YType::enumeration, "protocol-name"},
    rate{YType::uint32, "rate"}
{

    yang_name = "penalty-rate"; yang_parent_name = "penalty-rates"; is_top_level_class = false; has_list_ancestor = false;
}

Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate::~PenaltyRate()
{
}

bool Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate::has_data() const
{
    return protocol_name.is_set
	|| rate.is_set;
}

bool Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-punt-flowtrap-cfg:punt/flowtrap/penalty-rates/" << get_segment_path();
    return path_buffer.str();
}

std::string Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "penalty-rate" <<"[protocol-name='" <<protocol_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Lpts::Punt::Flowtrap::PenaltyRates::PenaltyRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-name" || name == "rate")
        return true;
    return false;
}

Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeouts()
{

    yang_name = "penalty-timeouts"; yang_parent_name = "flowtrap"; is_top_level_class = false; has_list_ancestor = false;
}

Lpts::Punt::Flowtrap::PenaltyTimeouts::~PenaltyTimeouts()
{
}

bool Lpts::Punt::Flowtrap::PenaltyTimeouts::has_data() const
{
    for (std::size_t index=0; index<penalty_timeout.size(); index++)
    {
        if(penalty_timeout[index]->has_data())
            return true;
    }
    return false;
}

bool Lpts::Punt::Flowtrap::PenaltyTimeouts::has_operation() const
{
    for (std::size_t index=0; index<penalty_timeout.size(); index++)
    {
        if(penalty_timeout[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Lpts::Punt::Flowtrap::PenaltyTimeouts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-punt-flowtrap-cfg:punt/flowtrap/" << get_segment_path();
    return path_buffer.str();
}

std::string Lpts::Punt::Flowtrap::PenaltyTimeouts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "penalty-timeouts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lpts::Punt::Flowtrap::PenaltyTimeouts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Lpts::Punt::Flowtrap::PenaltyTimeouts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "penalty-timeout")
    {
        for(auto const & c : penalty_timeout)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout>();
        c->parent = this;
        penalty_timeout.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Punt::Flowtrap::PenaltyTimeouts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : penalty_timeout)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Lpts::Punt::Flowtrap::PenaltyTimeouts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Lpts::Punt::Flowtrap::PenaltyTimeouts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Lpts::Punt::Flowtrap::PenaltyTimeouts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "penalty-timeout")
        return true;
    return false;
}

Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout::PenaltyTimeout()
    :
    protocol_name{YType::enumeration, "protocol-name"},
    timeout{YType::uint32, "timeout"}
{

    yang_name = "penalty-timeout"; yang_parent_name = "penalty-timeouts"; is_top_level_class = false; has_list_ancestor = false;
}

Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout::~PenaltyTimeout()
{
}

bool Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout::has_data() const
{
    return protocol_name.is_set
	|| timeout.is_set;
}

bool Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-lib-cfg:lpts/Cisco-IOS-XR-lpts-punt-flowtrap-cfg:punt/flowtrap/penalty-timeouts/" << get_segment_path();
    return path_buffer.str();
}

std::string Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "penalty-timeout" <<"[protocol-name='" <<protocol_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Lpts::Punt::Flowtrap::PenaltyTimeouts::PenaltyTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-name" || name == "timeout")
        return true;
    return false;
}


}
}

