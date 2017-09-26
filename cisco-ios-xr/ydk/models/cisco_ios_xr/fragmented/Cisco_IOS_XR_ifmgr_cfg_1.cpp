
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_1.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ifmgr_cfg {

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::Primary()
    :
    address{YType::str, "address"},
    netmask{YType::str, "netmask"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "primary"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::~Primary()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::has_data() const
{
    return address.is_set
	|| netmask.is_set
	|| route_tag.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "netmask" || name == "route-tag")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondaries()
{

    yang_name = "secondaries"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::~Secondaries()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::has_data() const
{
    for (std::size_t index=0; index<secondary.size(); index++)
    {
        if(secondary[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::has_operation() const
{
    for (std::size_t index=0; index<secondary.size(); index++)
    {
        if(secondary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary")
    {
        for(auto const & c : secondary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary>();
        c->parent = this;
        secondary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : secondary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::Secondary()
    :
    address{YType::str, "address"},
    netmask{YType::str, "netmask"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "secondary"; yang_parent_name = "secondaries"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::~Secondary()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::has_data() const
{
    return address.is_set
	|| netmask.is_set
	|| route_tag.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "netmask" || name == "route-tag")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Bgp()
    :
    flow_tag(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag>())
	,qppb(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb>())
{
    flow_tag->parent = this;
    qppb->parent = this;

    yang_name = "bgp"; yang_parent_name = "ipv4-network"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::~Bgp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::has_data() const
{
    return (flow_tag !=  nullptr && flow_tag->has_data())
	|| (qppb !=  nullptr && qppb->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (flow_tag !=  nullptr && flow_tag->has_operation())
	|| (qppb !=  nullptr && qppb->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-tag")
    {
        if(flow_tag == nullptr)
        {
            flow_tag = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag>();
        }
        return flow_tag;
    }

    if(child_yang_name == "qppb")
    {
        if(qppb == nullptr)
        {
            qppb = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb>();
        }
        return qppb;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_tag != nullptr)
    {
        children["flow-tag"] = flow_tag;
    }

    if(qppb != nullptr)
    {
        children["qppb"] = qppb;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-tag" || name == "qppb")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTag()
    :
    flow_tag_input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput>())
{
    flow_tag_input->parent = this;

    yang_name = "flow-tag"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::~FlowTag()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::has_data() const
{
    return (flow_tag_input !=  nullptr && flow_tag_input->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::has_operation() const
{
    return is_set(yfilter)
	|| (flow_tag_input !=  nullptr && flow_tag_input->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-tag-input")
    {
        if(flow_tag_input == nullptr)
        {
            flow_tag_input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput>();
        }
        return flow_tag_input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_tag_input != nullptr)
    {
        children["flow-tag-input"] = flow_tag_input;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-tag-input")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::FlowTagInput()
    :
    destination{YType::boolean, "destination"},
    source{YType::boolean, "source"}
{

    yang_name = "flow-tag-input"; yang_parent_name = "flow-tag"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::~FlowTagInput()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::has_data() const
{
    return destination.is_set
	|| source.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-tag-input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Qppb()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input>())
{
    input->parent = this;

    yang_name = "qppb"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::~Qppb()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qppb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::Input()
    :
    destination{YType::enumeration, "destination"},
    source{YType::enumeration, "source"}
{

    yang_name = "input"; yang_parent_name = "qppb"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::has_data() const
{
    return destination.is_set
	|| source.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::BgpPa()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input>())
	,output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "bgp-pa"; yang_parent_name = "ipv4-network"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::~BgpPa()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-pa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::Input()
    :
    destination_accounting{YType::boolean, "destination-accounting"},
    source_accounting{YType::boolean, "source-accounting"}
{

    yang_name = "input"; yang_parent_name = "bgp-pa"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::has_data() const
{
    return destination_accounting.is_set
	|| source_accounting.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_accounting.yfilter)
	|| ydk::is_set(source_accounting.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_accounting.is_set || is_set(destination_accounting.yfilter)) leaf_name_data.push_back(destination_accounting.get_name_leafdata());
    if (source_accounting.is_set || is_set(source_accounting.yfilter)) leaf_name_data.push_back(source_accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-accounting")
    {
        destination_accounting = value;
        destination_accounting.value_namespace = name_space;
        destination_accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-accounting")
    {
        source_accounting = value;
        source_accounting.value_namespace = name_space;
        source_accounting.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-accounting")
    {
        destination_accounting.yfilter = yfilter;
    }
    if(value_path == "source-accounting")
    {
        source_accounting.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-accounting" || name == "source-accounting")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::Output()
    :
    destination_accounting{YType::boolean, "destination-accounting"},
    source_accounting{YType::boolean, "source-accounting"}
{

    yang_name = "output"; yang_parent_name = "bgp-pa"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::has_data() const
{
    return destination_accounting.is_set
	|| source_accounting.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_accounting.yfilter)
	|| ydk::is_set(source_accounting.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_accounting.is_set || is_set(destination_accounting.yfilter)) leaf_name_data.push_back(destination_accounting.get_name_leafdata());
    if (source_accounting.is_set || is_set(source_accounting.yfilter)) leaf_name_data.push_back(source_accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-accounting")
    {
        destination_accounting = value;
        destination_accounting.value_namespace = name_space;
        destination_accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-accounting")
    {
        source_accounting = value;
        source_accounting.value_namespace = name_space;
        source_accounting.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-accounting")
    {
        destination_accounting.yfilter = yfilter;
    }
    if(value_path == "source-accounting")
    {
        source_accounting.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-accounting" || name == "source-accounting")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddresses()
{

    yang_name = "helper-addresses"; yang_parent_name = "ipv4-network"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::~HelperAddresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::has_data() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::has_operation() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper-address")
    {
        for(auto const & c : helper_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress>();
        c->parent = this;
        helper_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : helper_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper-address")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::HelperAddress()
    :
    address{YType::str, "address"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "helper-address"; yang_parent_name = "helper-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::~HelperAddress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::has_data() const
{
    return address.is_set
	|| vrf_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address" <<"[address='" <<address <<"']" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "vrf-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::Verify()
    :
    default_ping{YType::enumeration, "default-ping"},
    reachable{YType::enumeration, "reachable"},
    self_ping{YType::enumeration, "self-ping"}
{

    yang_name = "verify"; yang_parent_name = "ipv4-network"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::~Verify()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::has_data() const
{
    return default_ping.is_set
	|| reachable.is_set
	|| self_ping.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_ping.yfilter)
	|| ydk::is_set(reachable.yfilter)
	|| ydk::is_set(self_ping.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_ping.is_set || is_set(default_ping.yfilter)) leaf_name_data.push_back(default_ping.get_name_leafdata());
    if (reachable.is_set || is_set(reachable.yfilter)) leaf_name_data.push_back(reachable.get_name_leafdata());
    if (self_ping.is_set || is_set(self_ping.yfilter)) leaf_name_data.push_back(self_ping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-ping")
    {
        default_ping = value;
        default_ping.value_namespace = name_space;
        default_ping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachable")
    {
        reachable = value;
        reachable.value_namespace = name_space;
        reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "self-ping")
    {
        self_ping = value;
        self_ping.value_namespace = name_space;
        self_ping.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-ping")
    {
        default_ping.yfilter = yfilter;
    }
    if(value_path == "reachable")
    {
        reachable.yfilter = yfilter;
    }
    if(value_path == "self-ping")
    {
        self_ping.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-ping" || name == "reachable" || name == "self-ping")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::Ipv4NetworkForwarding()
    :
    directed_broadcast{YType::empty, "directed-broadcast"},
    redirects{YType::empty, "redirects"},
    unreachables{YType::empty, "unreachables"}
{

    yang_name = "ipv4-network-forwarding"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::~Ipv4NetworkForwarding()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::has_data() const
{
    return directed_broadcast.is_set
	|| redirects.is_set
	|| unreachables.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(directed_broadcast.yfilter)
	|| ydk::is_set(redirects.yfilter)
	|| ydk::is_set(unreachables.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-io-cfg:ipv4-network-forwarding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (directed_broadcast.is_set || is_set(directed_broadcast.yfilter)) leaf_name_data.push_back(directed_broadcast.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.yfilter)) leaf_name_data.push_back(redirects.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "directed-broadcast")
    {
        directed_broadcast = value;
        directed_broadcast.value_namespace = name_space;
        directed_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirects")
    {
        redirects = value;
        redirects.value_namespace = name_space;
        redirects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "directed-broadcast")
    {
        directed_broadcast.yfilter = yfilter;
    }
    if(value_path == "redirects")
    {
        redirects.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "directed-broadcast" || name == "redirects" || name == "unreachables")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Ipv4PacketFilter()
    :
    inbound(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound>())
	,outbound(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound>())
{
    inbound->parent = this;
    outbound->parent = this;

    yang_name = "ipv4-packet-filter"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::~Ipv4PacketFilter()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::has_data() const
{
    return (inbound !=  nullptr && inbound->has_data())
	|| (outbound !=  nullptr && outbound->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::has_operation() const
{
    return is_set(yfilter)
	|| (inbound !=  nullptr && inbound->has_operation())
	|| (outbound !=  nullptr && outbound->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-cfg:ipv4-packet-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inbound")
    {
        if(inbound == nullptr)
        {
            inbound = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound>();
        }
        return inbound;
    }

    if(child_yang_name == "outbound")
    {
        if(outbound == nullptr)
        {
            outbound = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound>();
        }
        return outbound;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inbound != nullptr)
    {
        children["inbound"] = inbound;
    }

    if(outbound != nullptr)
    {
        children["outbound"] = outbound;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inbound" || name == "outbound")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::Inbound()
    :
    acl_name_array{YType::str, "acl-name-array"},
    common_acl_name{YType::str, "common-acl-name"},
    compression_level{YType::uint32, "compression-level"},
    hardware_count{YType::empty, "hardware-count"},
    interface_statistics{YType::empty, "interface-statistics"},
    is_common_array{YType::boolean, "is-common-array"},
    name{YType::str, "name"}
{

    yang_name = "inbound"; yang_parent_name = "ipv4-packet-filter"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::~Inbound()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::has_data() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return common_acl_name.is_set
	|| compression_level.is_set
	|| hardware_count.is_set
	|| interface_statistics.is_set
	|| name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::has_operation() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(acl_name_array.yfilter)
	|| ydk::is_set(common_acl_name.yfilter)
	|| ydk::is_set(compression_level.yfilter)
	|| ydk::is_set(hardware_count.yfilter)
	|| ydk::is_set(interface_statistics.yfilter)
	|| ydk::is_set(is_common_array.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.yfilter)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (compression_level.is_set || is_set(compression_level.yfilter)) leaf_name_data.push_back(compression_level.get_name_leafdata());
    if (hardware_count.is_set || is_set(hardware_count.yfilter)) leaf_name_data.push_back(hardware_count.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    auto acl_name_array_name_datas = acl_name_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), acl_name_array_name_datas.begin(), acl_name_array_name_datas.end());
    auto is_common_array_name_datas = is_common_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), is_common_array_name_datas.begin(), is_common_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name-array")
    {
        acl_name_array.append(value);
    }
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
        common_acl_name.value_namespace = name_space;
        common_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compression-level")
    {
        compression_level = value;
        compression_level.value_namespace = name_space;
        compression_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-count")
    {
        hardware_count = value;
        hardware_count.value_namespace = name_space;
        hardware_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
        interface_statistics.value_namespace = name_space;
        interface_statistics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.append(value);
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name-array")
    {
        acl_name_array.yfilter = yfilter;
    }
    if(value_path == "common-acl-name")
    {
        common_acl_name.yfilter = yfilter;
    }
    if(value_path == "compression-level")
    {
        compression_level.yfilter = yfilter;
    }
    if(value_path == "hardware-count")
    {
        hardware_count.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name-array" || name == "common-acl-name" || name == "compression-level" || name == "hardware-count" || name == "interface-statistics" || name == "is-common-array" || name == "name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::Outbound()
    :
    acl_name_array{YType::str, "acl-name-array"},
    compression_level{YType::uint32, "compression-level"},
    do_not_use{YType::str, "do-not-use"},
    hardware_count{YType::empty, "hardware-count"},
    interface_statistics{YType::empty, "interface-statistics"},
    is_common_array{YType::boolean, "is-common-array"},
    name{YType::str, "name"}
{

    yang_name = "outbound"; yang_parent_name = "ipv4-packet-filter"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::~Outbound()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::has_data() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return compression_level.is_set
	|| do_not_use.is_set
	|| hardware_count.is_set
	|| interface_statistics.is_set
	|| name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::has_operation() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(acl_name_array.yfilter)
	|| ydk::is_set(compression_level.yfilter)
	|| ydk::is_set(do_not_use.yfilter)
	|| ydk::is_set(hardware_count.yfilter)
	|| ydk::is_set(interface_statistics.yfilter)
	|| ydk::is_set(is_common_array.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (compression_level.is_set || is_set(compression_level.yfilter)) leaf_name_data.push_back(compression_level.get_name_leafdata());
    if (do_not_use.is_set || is_set(do_not_use.yfilter)) leaf_name_data.push_back(do_not_use.get_name_leafdata());
    if (hardware_count.is_set || is_set(hardware_count.yfilter)) leaf_name_data.push_back(hardware_count.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    auto acl_name_array_name_datas = acl_name_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), acl_name_array_name_datas.begin(), acl_name_array_name_datas.end());
    auto is_common_array_name_datas = is_common_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), is_common_array_name_datas.begin(), is_common_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name-array")
    {
        acl_name_array.append(value);
    }
    if(value_path == "compression-level")
    {
        compression_level = value;
        compression_level.value_namespace = name_space;
        compression_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "do-not-use")
    {
        do_not_use = value;
        do_not_use.value_namespace = name_space;
        do_not_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-count")
    {
        hardware_count = value;
        hardware_count.value_namespace = name_space;
        hardware_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
        interface_statistics.value_namespace = name_space;
        interface_statistics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.append(value);
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name-array")
    {
        acl_name_array.yfilter = yfilter;
    }
    if(value_path == "compression-level")
    {
        compression_level.yfilter = yfilter;
    }
    if(value_path == "do-not-use")
    {
        do_not_use.yfilter = yfilter;
    }
    if(value_path == "hardware-count")
    {
        hardware_count.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name-array" || name == "compression-level" || name == "do-not-use" || name == "hardware-count" || name == "interface-statistics" || name == "is-common-array" || name == "name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Neighbor()
    :
    cache_limit{YType::uint32, "cache-limit"},
    dad_attempts{YType::uint32, "dad-attempts"},
    managed_config{YType::empty, "managed-config"},
    ns_interval{YType::uint32, "ns-interval"},
    other_config{YType::empty, "other-config"},
    ra_lifetime{YType::uint32, "ra-lifetime"},
    ra_suppress{YType::empty, "ra-suppress"},
    ra_unicast{YType::empty, "ra-unicast"},
    ra_unspecify_hoplimit{YType::empty, "ra-unspecify-hoplimit"},
    ramtu_suppress{YType::empty, "ramtu-suppress"},
    reachable_time{YType::uint32, "reachable-time"},
    redirect{YType::empty, "redirect"},
    router_preference{YType::enumeration, "router-preference"},
    srp_multicast_encapsulation{YType::enumeration, "srp-multicast-encapsulation"},
    srp_unicast_encapsulation{YType::enumeration, "srp-unicast-encapsulation"}
    	,
    ipv6_prefixes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes>())
	,ra_interval(nullptr) // presence node
	,radns_searches(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches>())
	,radns_servers(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers>())
	,raspecific_route_s(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS>())
{
    ipv6_prefixes->parent = this;
    radns_searches->parent = this;
    radns_servers->parent = this;
    raspecific_route_s->parent = this;

    yang_name = "ipv6-neighbor"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::~Ipv6Neighbor()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::has_data() const
{
    return cache_limit.is_set
	|| dad_attempts.is_set
	|| managed_config.is_set
	|| ns_interval.is_set
	|| other_config.is_set
	|| ra_lifetime.is_set
	|| ra_suppress.is_set
	|| ra_unicast.is_set
	|| ra_unspecify_hoplimit.is_set
	|| ramtu_suppress.is_set
	|| reachable_time.is_set
	|| redirect.is_set
	|| router_preference.is_set
	|| srp_multicast_encapsulation.is_set
	|| srp_unicast_encapsulation.is_set
	|| (ipv6_prefixes !=  nullptr && ipv6_prefixes->has_data())
	|| (ra_interval !=  nullptr && ra_interval->has_data())
	|| (radns_searches !=  nullptr && radns_searches->has_data())
	|| (radns_servers !=  nullptr && radns_servers->has_data())
	|| (raspecific_route_s !=  nullptr && raspecific_route_s->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_limit.yfilter)
	|| ydk::is_set(dad_attempts.yfilter)
	|| ydk::is_set(managed_config.yfilter)
	|| ydk::is_set(ns_interval.yfilter)
	|| ydk::is_set(other_config.yfilter)
	|| ydk::is_set(ra_lifetime.yfilter)
	|| ydk::is_set(ra_suppress.yfilter)
	|| ydk::is_set(ra_unicast.yfilter)
	|| ydk::is_set(ra_unspecify_hoplimit.yfilter)
	|| ydk::is_set(ramtu_suppress.yfilter)
	|| ydk::is_set(reachable_time.yfilter)
	|| ydk::is_set(redirect.yfilter)
	|| ydk::is_set(router_preference.yfilter)
	|| ydk::is_set(srp_multicast_encapsulation.yfilter)
	|| ydk::is_set(srp_unicast_encapsulation.yfilter)
	|| (ipv6_prefixes !=  nullptr && ipv6_prefixes->has_operation())
	|| (ra_interval !=  nullptr && ra_interval->has_operation())
	|| (radns_searches !=  nullptr && radns_searches->has_operation())
	|| (radns_servers !=  nullptr && radns_servers->has_operation())
	|| (raspecific_route_s !=  nullptr && raspecific_route_s->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-nd-cfg:ipv6-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_limit.is_set || is_set(cache_limit.yfilter)) leaf_name_data.push_back(cache_limit.get_name_leafdata());
    if (dad_attempts.is_set || is_set(dad_attempts.yfilter)) leaf_name_data.push_back(dad_attempts.get_name_leafdata());
    if (managed_config.is_set || is_set(managed_config.yfilter)) leaf_name_data.push_back(managed_config.get_name_leafdata());
    if (ns_interval.is_set || is_set(ns_interval.yfilter)) leaf_name_data.push_back(ns_interval.get_name_leafdata());
    if (other_config.is_set || is_set(other_config.yfilter)) leaf_name_data.push_back(other_config.get_name_leafdata());
    if (ra_lifetime.is_set || is_set(ra_lifetime.yfilter)) leaf_name_data.push_back(ra_lifetime.get_name_leafdata());
    if (ra_suppress.is_set || is_set(ra_suppress.yfilter)) leaf_name_data.push_back(ra_suppress.get_name_leafdata());
    if (ra_unicast.is_set || is_set(ra_unicast.yfilter)) leaf_name_data.push_back(ra_unicast.get_name_leafdata());
    if (ra_unspecify_hoplimit.is_set || is_set(ra_unspecify_hoplimit.yfilter)) leaf_name_data.push_back(ra_unspecify_hoplimit.get_name_leafdata());
    if (ramtu_suppress.is_set || is_set(ramtu_suppress.yfilter)) leaf_name_data.push_back(ramtu_suppress.get_name_leafdata());
    if (reachable_time.is_set || is_set(reachable_time.yfilter)) leaf_name_data.push_back(reachable_time.get_name_leafdata());
    if (redirect.is_set || is_set(redirect.yfilter)) leaf_name_data.push_back(redirect.get_name_leafdata());
    if (router_preference.is_set || is_set(router_preference.yfilter)) leaf_name_data.push_back(router_preference.get_name_leafdata());
    if (srp_multicast_encapsulation.is_set || is_set(srp_multicast_encapsulation.yfilter)) leaf_name_data.push_back(srp_multicast_encapsulation.get_name_leafdata());
    if (srp_unicast_encapsulation.is_set || is_set(srp_unicast_encapsulation.yfilter)) leaf_name_data.push_back(srp_unicast_encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-prefixes")
    {
        if(ipv6_prefixes == nullptr)
        {
            ipv6_prefixes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes>();
        }
        return ipv6_prefixes;
    }

    if(child_yang_name == "ra-interval")
    {
        if(ra_interval == nullptr)
        {
            ra_interval = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval>();
        }
        return ra_interval;
    }

    if(child_yang_name == "radns-searches")
    {
        if(radns_searches == nullptr)
        {
            radns_searches = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches>();
        }
        return radns_searches;
    }

    if(child_yang_name == "radns-servers")
    {
        if(radns_servers == nullptr)
        {
            radns_servers = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers>();
        }
        return radns_servers;
    }

    if(child_yang_name == "raspecific-route-s")
    {
        if(raspecific_route_s == nullptr)
        {
            raspecific_route_s = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS>();
        }
        return raspecific_route_s;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6_prefixes != nullptr)
    {
        children["ipv6-prefixes"] = ipv6_prefixes;
    }

    if(ra_interval != nullptr)
    {
        children["ra-interval"] = ra_interval;
    }

    if(radns_searches != nullptr)
    {
        children["radns-searches"] = radns_searches;
    }

    if(radns_servers != nullptr)
    {
        children["radns-servers"] = radns_servers;
    }

    if(raspecific_route_s != nullptr)
    {
        children["raspecific-route-s"] = raspecific_route_s;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-limit")
    {
        cache_limit = value;
        cache_limit.value_namespace = name_space;
        cache_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dad-attempts")
    {
        dad_attempts = value;
        dad_attempts.value_namespace = name_space;
        dad_attempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managed-config")
    {
        managed_config = value;
        managed_config.value_namespace = name_space;
        managed_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ns-interval")
    {
        ns_interval = value;
        ns_interval.value_namespace = name_space;
        ns_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-config")
    {
        other_config = value;
        other_config.value_namespace = name_space;
        other_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ra-lifetime")
    {
        ra_lifetime = value;
        ra_lifetime.value_namespace = name_space;
        ra_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ra-suppress")
    {
        ra_suppress = value;
        ra_suppress.value_namespace = name_space;
        ra_suppress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ra-unicast")
    {
        ra_unicast = value;
        ra_unicast.value_namespace = name_space;
        ra_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ra-unspecify-hoplimit")
    {
        ra_unspecify_hoplimit = value;
        ra_unspecify_hoplimit.value_namespace = name_space;
        ra_unspecify_hoplimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ramtu-suppress")
    {
        ramtu_suppress = value;
        ramtu_suppress.value_namespace = name_space;
        ramtu_suppress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachable-time")
    {
        reachable_time = value;
        reachable_time.value_namespace = name_space;
        reachable_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirect")
    {
        redirect = value;
        redirect.value_namespace = name_space;
        redirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-preference")
    {
        router_preference = value;
        router_preference.value_namespace = name_space;
        router_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srp-multicast-encapsulation")
    {
        srp_multicast_encapsulation = value;
        srp_multicast_encapsulation.value_namespace = name_space;
        srp_multicast_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srp-unicast-encapsulation")
    {
        srp_unicast_encapsulation = value;
        srp_unicast_encapsulation.value_namespace = name_space;
        srp_unicast_encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-limit")
    {
        cache_limit.yfilter = yfilter;
    }
    if(value_path == "dad-attempts")
    {
        dad_attempts.yfilter = yfilter;
    }
    if(value_path == "managed-config")
    {
        managed_config.yfilter = yfilter;
    }
    if(value_path == "ns-interval")
    {
        ns_interval.yfilter = yfilter;
    }
    if(value_path == "other-config")
    {
        other_config.yfilter = yfilter;
    }
    if(value_path == "ra-lifetime")
    {
        ra_lifetime.yfilter = yfilter;
    }
    if(value_path == "ra-suppress")
    {
        ra_suppress.yfilter = yfilter;
    }
    if(value_path == "ra-unicast")
    {
        ra_unicast.yfilter = yfilter;
    }
    if(value_path == "ra-unspecify-hoplimit")
    {
        ra_unspecify_hoplimit.yfilter = yfilter;
    }
    if(value_path == "ramtu-suppress")
    {
        ramtu_suppress.yfilter = yfilter;
    }
    if(value_path == "reachable-time")
    {
        reachable_time.yfilter = yfilter;
    }
    if(value_path == "redirect")
    {
        redirect.yfilter = yfilter;
    }
    if(value_path == "router-preference")
    {
        router_preference.yfilter = yfilter;
    }
    if(value_path == "srp-multicast-encapsulation")
    {
        srp_multicast_encapsulation.yfilter = yfilter;
    }
    if(value_path == "srp-unicast-encapsulation")
    {
        srp_unicast_encapsulation.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-prefixes" || name == "ra-interval" || name == "radns-searches" || name == "radns-servers" || name == "raspecific-route-s" || name == "cache-limit" || name == "dad-attempts" || name == "managed-config" || name == "ns-interval" || name == "other-config" || name == "ra-lifetime" || name == "ra-suppress" || name == "ra-unicast" || name == "ra-unspecify-hoplimit" || name == "ramtu-suppress" || name == "reachable-time" || name == "redirect" || name == "router-preference" || name == "srp-multicast-encapsulation" || name == "srp-unicast-encapsulation")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefixes()
{

    yang_name = "ipv6-prefixes"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::~Ipv6Prefixes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::has_data() const
{
    for (std::size_t index=0; index<ipv6_prefix.size(); index++)
    {
        if(ipv6_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::has_operation() const
{
    for (std::size_t index=0; index<ipv6_prefix.size(); index++)
    {
        if(ipv6_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-prefix")
    {
        for(auto const & c : ipv6_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix>();
        c->parent = this;
        ipv6_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-prefix")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::Ipv6Prefix()
    :
    prefix{YType::str, "prefix"},
    expiry_date{YType::uint32, "expiry-date"},
    expiry_hour{YType::uint32, "expiry-hour"},
    expiry_minute{YType::uint32, "expiry-minute"},
    expiry_month{YType::enumeration, "expiry-month"},
    expiry_year{YType::uint32, "expiry-year"},
    no_advertize{YType::boolean, "no-advertize"},
    no_auto_config{YType::boolean, "no-auto-config"},
    off_link{YType::boolean, "off-link"},
    pref_expiry_date{YType::uint32, "pref-expiry-date"},
    pref_expiry_hour{YType::uint32, "pref-expiry-hour"},
    pref_expiry_minute{YType::uint32, "pref-expiry-minute"},
    pref_expiry_month{YType::enumeration, "pref-expiry-month"},
    pref_expiry_year{YType::uint32, "pref-expiry-year"},
    preferred_lifetime{YType::uint32, "preferred-lifetime"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_zone{YType::str, "prefix-zone"},
    valid_lifetime{YType::uint32, "valid-lifetime"}
{

    yang_name = "ipv6-prefix"; yang_parent_name = "ipv6-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::~Ipv6Prefix()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::has_data() const
{
    return prefix.is_set
	|| expiry_date.is_set
	|| expiry_hour.is_set
	|| expiry_minute.is_set
	|| expiry_month.is_set
	|| expiry_year.is_set
	|| no_advertize.is_set
	|| no_auto_config.is_set
	|| off_link.is_set
	|| pref_expiry_date.is_set
	|| pref_expiry_hour.is_set
	|| pref_expiry_minute.is_set
	|| pref_expiry_month.is_set
	|| pref_expiry_year.is_set
	|| preferred_lifetime.is_set
	|| prefix_length.is_set
	|| prefix_zone.is_set
	|| valid_lifetime.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(expiry_date.yfilter)
	|| ydk::is_set(expiry_hour.yfilter)
	|| ydk::is_set(expiry_minute.yfilter)
	|| ydk::is_set(expiry_month.yfilter)
	|| ydk::is_set(expiry_year.yfilter)
	|| ydk::is_set(no_advertize.yfilter)
	|| ydk::is_set(no_auto_config.yfilter)
	|| ydk::is_set(off_link.yfilter)
	|| ydk::is_set(pref_expiry_date.yfilter)
	|| ydk::is_set(pref_expiry_hour.yfilter)
	|| ydk::is_set(pref_expiry_minute.yfilter)
	|| ydk::is_set(pref_expiry_month.yfilter)
	|| ydk::is_set(pref_expiry_year.yfilter)
	|| ydk::is_set(preferred_lifetime.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix_zone.yfilter)
	|| ydk::is_set(valid_lifetime.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-prefix" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (expiry_date.is_set || is_set(expiry_date.yfilter)) leaf_name_data.push_back(expiry_date.get_name_leafdata());
    if (expiry_hour.is_set || is_set(expiry_hour.yfilter)) leaf_name_data.push_back(expiry_hour.get_name_leafdata());
    if (expiry_minute.is_set || is_set(expiry_minute.yfilter)) leaf_name_data.push_back(expiry_minute.get_name_leafdata());
    if (expiry_month.is_set || is_set(expiry_month.yfilter)) leaf_name_data.push_back(expiry_month.get_name_leafdata());
    if (expiry_year.is_set || is_set(expiry_year.yfilter)) leaf_name_data.push_back(expiry_year.get_name_leafdata());
    if (no_advertize.is_set || is_set(no_advertize.yfilter)) leaf_name_data.push_back(no_advertize.get_name_leafdata());
    if (no_auto_config.is_set || is_set(no_auto_config.yfilter)) leaf_name_data.push_back(no_auto_config.get_name_leafdata());
    if (off_link.is_set || is_set(off_link.yfilter)) leaf_name_data.push_back(off_link.get_name_leafdata());
    if (pref_expiry_date.is_set || is_set(pref_expiry_date.yfilter)) leaf_name_data.push_back(pref_expiry_date.get_name_leafdata());
    if (pref_expiry_hour.is_set || is_set(pref_expiry_hour.yfilter)) leaf_name_data.push_back(pref_expiry_hour.get_name_leafdata());
    if (pref_expiry_minute.is_set || is_set(pref_expiry_minute.yfilter)) leaf_name_data.push_back(pref_expiry_minute.get_name_leafdata());
    if (pref_expiry_month.is_set || is_set(pref_expiry_month.yfilter)) leaf_name_data.push_back(pref_expiry_month.get_name_leafdata());
    if (pref_expiry_year.is_set || is_set(pref_expiry_year.yfilter)) leaf_name_data.push_back(pref_expiry_year.get_name_leafdata());
    if (preferred_lifetime.is_set || is_set(preferred_lifetime.yfilter)) leaf_name_data.push_back(preferred_lifetime.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_zone.is_set || is_set(prefix_zone.yfilter)) leaf_name_data.push_back(prefix_zone.get_name_leafdata());
    if (valid_lifetime.is_set || is_set(valid_lifetime.yfilter)) leaf_name_data.push_back(valid_lifetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-date")
    {
        expiry_date = value;
        expiry_date.value_namespace = name_space;
        expiry_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-hour")
    {
        expiry_hour = value;
        expiry_hour.value_namespace = name_space;
        expiry_hour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-minute")
    {
        expiry_minute = value;
        expiry_minute.value_namespace = name_space;
        expiry_minute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-month")
    {
        expiry_month = value;
        expiry_month.value_namespace = name_space;
        expiry_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-year")
    {
        expiry_year = value;
        expiry_year.value_namespace = name_space;
        expiry_year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-advertize")
    {
        no_advertize = value;
        no_advertize.value_namespace = name_space;
        no_advertize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-auto-config")
    {
        no_auto_config = value;
        no_auto_config.value_namespace = name_space;
        no_auto_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "off-link")
    {
        off_link = value;
        off_link.value_namespace = name_space;
        off_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-expiry-date")
    {
        pref_expiry_date = value;
        pref_expiry_date.value_namespace = name_space;
        pref_expiry_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-expiry-hour")
    {
        pref_expiry_hour = value;
        pref_expiry_hour.value_namespace = name_space;
        pref_expiry_hour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-expiry-minute")
    {
        pref_expiry_minute = value;
        pref_expiry_minute.value_namespace = name_space;
        pref_expiry_minute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-expiry-month")
    {
        pref_expiry_month = value;
        pref_expiry_month.value_namespace = name_space;
        pref_expiry_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-expiry-year")
    {
        pref_expiry_year = value;
        pref_expiry_year.value_namespace = name_space;
        pref_expiry_year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-lifetime")
    {
        preferred_lifetime = value;
        preferred_lifetime.value_namespace = name_space;
        preferred_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-zone")
    {
        prefix_zone = value;
        prefix_zone.value_namespace = name_space;
        prefix_zone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-lifetime")
    {
        valid_lifetime = value;
        valid_lifetime.value_namespace = name_space;
        valid_lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "expiry-date")
    {
        expiry_date.yfilter = yfilter;
    }
    if(value_path == "expiry-hour")
    {
        expiry_hour.yfilter = yfilter;
    }
    if(value_path == "expiry-minute")
    {
        expiry_minute.yfilter = yfilter;
    }
    if(value_path == "expiry-month")
    {
        expiry_month.yfilter = yfilter;
    }
    if(value_path == "expiry-year")
    {
        expiry_year.yfilter = yfilter;
    }
    if(value_path == "no-advertize")
    {
        no_advertize.yfilter = yfilter;
    }
    if(value_path == "no-auto-config")
    {
        no_auto_config.yfilter = yfilter;
    }
    if(value_path == "off-link")
    {
        off_link.yfilter = yfilter;
    }
    if(value_path == "pref-expiry-date")
    {
        pref_expiry_date.yfilter = yfilter;
    }
    if(value_path == "pref-expiry-hour")
    {
        pref_expiry_hour.yfilter = yfilter;
    }
    if(value_path == "pref-expiry-minute")
    {
        pref_expiry_minute.yfilter = yfilter;
    }
    if(value_path == "pref-expiry-month")
    {
        pref_expiry_month.yfilter = yfilter;
    }
    if(value_path == "pref-expiry-year")
    {
        pref_expiry_year.yfilter = yfilter;
    }
    if(value_path == "preferred-lifetime")
    {
        preferred_lifetime.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix-zone")
    {
        prefix_zone.yfilter = yfilter;
    }
    if(value_path == "valid-lifetime")
    {
        valid_lifetime.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "expiry-date" || name == "expiry-hour" || name == "expiry-minute" || name == "expiry-month" || name == "expiry-year" || name == "no-advertize" || name == "no-auto-config" || name == "off-link" || name == "pref-expiry-date" || name == "pref-expiry-hour" || name == "pref-expiry-minute" || name == "pref-expiry-month" || name == "pref-expiry-year" || name == "preferred-lifetime" || name == "prefix-length" || name == "prefix-zone" || name == "valid-lifetime")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::RaInterval()
    :
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"}
{

    yang_name = "ra-interval"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::~RaInterval()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::has_data() const
{
    return maximum.is_set
	|| minimum.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ra-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "minimum")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearches()
{

    yang_name = "radns-searches"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::~RadnsSearches()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::has_data() const
{
    for (std::size_t index=0; index<radns_search.size(); index++)
    {
        if(radns_search[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::has_operation() const
{
    for (std::size_t index=0; index<radns_search.size(); index++)
    {
        if(radns_search[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radns-searches";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radns-search")
    {
        for(auto const & c : radns_search)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch>();
        c->parent = this;
        radns_search.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : radns_search)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radns-search")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::RadnsSearch()
    :
    dns_search_list{YType::str, "dns-search-list"},
    lifetime{YType::uint32, "lifetime"}
{

    yang_name = "radns-search"; yang_parent_name = "radns-searches"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::~RadnsSearch()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::has_data() const
{
    return dns_search_list.is_set
	|| lifetime.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dns_search_list.yfilter)
	|| ydk::is_set(lifetime.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radns-search" <<"[dns-search-list='" <<dns_search_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dns_search_list.is_set || is_set(dns_search_list.yfilter)) leaf_name_data.push_back(dns_search_list.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dns-search-list")
    {
        dns_search_list = value;
        dns_search_list.value_namespace = name_space;
        dns_search_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dns-search-list")
    {
        dns_search_list.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns-search-list" || name == "lifetime")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServers()
{

    yang_name = "radns-servers"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::~RadnsServers()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::has_data() const
{
    for (std::size_t index=0; index<radns_server.size(); index++)
    {
        if(radns_server[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::has_operation() const
{
    for (std::size_t index=0; index<radns_server.size(); index++)
    {
        if(radns_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radns-servers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radns-server")
    {
        for(auto const & c : radns_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer>();
        c->parent = this;
        radns_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : radns_server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radns-server")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::RadnsServer()
    :
    dns_server{YType::str, "dns-server"},
    lifetime{YType::uint32, "lifetime"}
{

    yang_name = "radns-server"; yang_parent_name = "radns-servers"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::~RadnsServer()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::has_data() const
{
    return dns_server.is_set
	|| lifetime.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dns_server.yfilter)
	|| ydk::is_set(lifetime.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radns-server" <<"[dns-server='" <<dns_server <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dns_server.is_set || is_set(dns_server.yfilter)) leaf_name_data.push_back(dns_server.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dns-server")
    {
        dns_server = value;
        dns_server.value_namespace = name_space;
        dns_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dns-server")
    {
        dns_server.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns-server" || name == "lifetime")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRouteS()
{

    yang_name = "raspecific-route-s"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::~RaspecificRouteS()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::has_data() const
{
    for (std::size_t index=0; index<raspecific_route.size(); index++)
    {
        if(raspecific_route[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::has_operation() const
{
    for (std::size_t index=0; index<raspecific_route.size(); index++)
    {
        if(raspecific_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "raspecific-route-s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "raspecific-route")
    {
        for(auto const & c : raspecific_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute>();
        c->parent = this;
        raspecific_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : raspecific_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "raspecific-route")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::RaspecificRoute()
    :
    specific_route{YType::str, "specific-route"},
    lifetime{YType::uint32, "lifetime"},
    preference{YType::enumeration, "preference"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "raspecific-route"; yang_parent_name = "raspecific-route-s"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::~RaspecificRoute()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::has_data() const
{
    return specific_route.is_set
	|| lifetime.is_set
	|| preference.is_set
	|| prefix_length.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(specific_route.yfilter)
	|| ydk::is_set(lifetime.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "raspecific-route" <<"[specific-route='" <<specific_route <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (specific_route.is_set || is_set(specific_route.yfilter)) leaf_name_data.push_back(specific_route.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "specific-route")
    {
        specific_route = value;
        specific_route.value_namespace = name_space;
        specific_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "specific-route")
    {
        specific_route.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "specific-route" || name == "lifetime" || name == "preference" || name == "prefix-length")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Ipv6Network()
    :
    mtu{YType::uint32, "mtu"},
    tcp_mss_adjust_enable{YType::empty, "tcp-mss-adjust-enable"},
    ttl_propagate_disable{YType::empty, "ttl-propagate-disable"},
    unnumbered{YType::str, "unnumbered"},
    unreachables{YType::empty, "unreachables"}
    	,
    addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses>())
	,bgp_flow_tag_policy_table(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable>())
	,bgp_policy_accountings(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings>())
	,bgp_qos_policy_propagation(nullptr) // presence node
	,verify(nullptr) // presence node
{
    addresses->parent = this;
    bgp_flow_tag_policy_table->parent = this;
    bgp_policy_accountings->parent = this;

    yang_name = "ipv6-network"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::~Ipv6Network()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::has_data() const
{
    return mtu.is_set
	|| tcp_mss_adjust_enable.is_set
	|| ttl_propagate_disable.is_set
	|| unnumbered.is_set
	|| unreachables.is_set
	|| (addresses !=  nullptr && addresses->has_data())
	|| (bgp_flow_tag_policy_table !=  nullptr && bgp_flow_tag_policy_table->has_data())
	|| (bgp_policy_accountings !=  nullptr && bgp_policy_accountings->has_data())
	|| (bgp_qos_policy_propagation !=  nullptr && bgp_qos_policy_propagation->has_data())
	|| (verify !=  nullptr && verify->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(tcp_mss_adjust_enable.yfilter)
	|| ydk::is_set(ttl_propagate_disable.yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| (addresses !=  nullptr && addresses->has_operation())
	|| (bgp_flow_tag_policy_table !=  nullptr && bgp_flow_tag_policy_table->has_operation())
	|| (bgp_policy_accountings !=  nullptr && bgp_policy_accountings->has_operation())
	|| (bgp_qos_policy_propagation !=  nullptr && bgp_qos_policy_propagation->has_operation())
	|| (verify !=  nullptr && verify->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ma-cfg:ipv6-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (tcp_mss_adjust_enable.is_set || is_set(tcp_mss_adjust_enable.yfilter)) leaf_name_data.push_back(tcp_mss_adjust_enable.get_name_leafdata());
    if (ttl_propagate_disable.is_set || is_set(ttl_propagate_disable.yfilter)) leaf_name_data.push_back(ttl_propagate_disable.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addresses")
    {
        if(addresses == nullptr)
        {
            addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses>();
        }
        return addresses;
    }

    if(child_yang_name == "bgp-flow-tag-policy-table")
    {
        if(bgp_flow_tag_policy_table == nullptr)
        {
            bgp_flow_tag_policy_table = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable>();
        }
        return bgp_flow_tag_policy_table;
    }

    if(child_yang_name == "bgp-policy-accountings")
    {
        if(bgp_policy_accountings == nullptr)
        {
            bgp_policy_accountings = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings>();
        }
        return bgp_policy_accountings;
    }

    if(child_yang_name == "bgp-qos-policy-propagation")
    {
        if(bgp_qos_policy_propagation == nullptr)
        {
            bgp_qos_policy_propagation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation>();
        }
        return bgp_qos_policy_propagation;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify>();
        }
        return verify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addresses != nullptr)
    {
        children["addresses"] = addresses;
    }

    if(bgp_flow_tag_policy_table != nullptr)
    {
        children["bgp-flow-tag-policy-table"] = bgp_flow_tag_policy_table;
    }

    if(bgp_policy_accountings != nullptr)
    {
        children["bgp-policy-accountings"] = bgp_policy_accountings;
    }

    if(bgp_qos_policy_propagation != nullptr)
    {
        children["bgp-qos-policy-propagation"] = bgp_qos_policy_propagation;
    }

    if(verify != nullptr)
    {
        children["verify"] = verify;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-mss-adjust-enable")
    {
        tcp_mss_adjust_enable = value;
        tcp_mss_adjust_enable.value_namespace = name_space;
        tcp_mss_adjust_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-propagate-disable")
    {
        ttl_propagate_disable = value;
        ttl_propagate_disable.value_namespace = name_space;
        ttl_propagate_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "tcp-mss-adjust-enable")
    {
        tcp_mss_adjust_enable.yfilter = yfilter;
    }
    if(value_path == "ttl-propagate-disable")
    {
        ttl_propagate_disable.yfilter = yfilter;
    }
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses" || name == "bgp-flow-tag-policy-table" || name == "bgp-policy-accountings" || name == "bgp-qos-policy-propagation" || name == "verify" || name == "mtu" || name == "tcp-mss-adjust-enable" || name == "ttl-propagate-disable" || name == "unnumbered" || name == "unreachables")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Addresses()
    :
    auto_configuration(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration>())
	,eui64_addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses>())
	,link_local_address(nullptr) // presence node
	,regular_addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses>())
	,segment_routings(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings>())
{
    auto_configuration->parent = this;
    eui64_addresses->parent = this;
    regular_addresses->parent = this;
    segment_routings->parent = this;

    yang_name = "addresses"; yang_parent_name = "ipv6-network"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::~Addresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::has_data() const
{
    return (auto_configuration !=  nullptr && auto_configuration->has_data())
	|| (eui64_addresses !=  nullptr && eui64_addresses->has_data())
	|| (link_local_address !=  nullptr && link_local_address->has_data())
	|| (regular_addresses !=  nullptr && regular_addresses->has_data())
	|| (segment_routings !=  nullptr && segment_routings->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::has_operation() const
{
    return is_set(yfilter)
	|| (auto_configuration !=  nullptr && auto_configuration->has_operation())
	|| (eui64_addresses !=  nullptr && eui64_addresses->has_operation())
	|| (link_local_address !=  nullptr && link_local_address->has_operation())
	|| (regular_addresses !=  nullptr && regular_addresses->has_operation())
	|| (segment_routings !=  nullptr && segment_routings->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-configuration")
    {
        if(auto_configuration == nullptr)
        {
            auto_configuration = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration>();
        }
        return auto_configuration;
    }

    if(child_yang_name == "eui64-addresses")
    {
        if(eui64_addresses == nullptr)
        {
            eui64_addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses>();
        }
        return eui64_addresses;
    }

    if(child_yang_name == "link-local-address")
    {
        if(link_local_address == nullptr)
        {
            link_local_address = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress>();
        }
        return link_local_address;
    }

    if(child_yang_name == "regular-addresses")
    {
        if(regular_addresses == nullptr)
        {
            regular_addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses>();
        }
        return regular_addresses;
    }

    if(child_yang_name == "segment-routings")
    {
        if(segment_routings == nullptr)
        {
            segment_routings = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings>();
        }
        return segment_routings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_configuration != nullptr)
    {
        children["auto-configuration"] = auto_configuration;
    }

    if(eui64_addresses != nullptr)
    {
        children["eui64-addresses"] = eui64_addresses;
    }

    if(link_local_address != nullptr)
    {
        children["link-local-address"] = link_local_address;
    }

    if(regular_addresses != nullptr)
    {
        children["regular-addresses"] = regular_addresses;
    }

    if(segment_routings != nullptr)
    {
        children["segment-routings"] = segment_routings;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-configuration" || name == "eui64-addresses" || name == "link-local-address" || name == "regular-addresses" || name == "segment-routings")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::AutoConfiguration()
    :
    auto_config_slaac{YType::empty, "auto-config-slaac"},
    enable{YType::empty, "enable"}
{

    yang_name = "auto-configuration"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::~AutoConfiguration()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::has_data() const
{
    return auto_config_slaac.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_config_slaac.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_config_slaac.is_set || is_set(auto_config_slaac.yfilter)) leaf_name_data.push_back(auto_config_slaac.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-config-slaac")
    {
        auto_config_slaac = value;
        auto_config_slaac.value_namespace = name_space;
        auto_config_slaac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-config-slaac")
    {
        auto_config_slaac.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-config-slaac" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Addresses()
{

    yang_name = "eui64-addresses"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::~Eui64Addresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::has_data() const
{
    for (std::size_t index=0; index<eui64_address.size(); index++)
    {
        if(eui64_address[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::has_operation() const
{
    for (std::size_t index=0; index<eui64_address.size(); index++)
    {
        if(eui64_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eui64-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eui64-address")
    {
        for(auto const & c : eui64_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address>();
        c->parent = this;
        eui64_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eui64_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eui64-address")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::Eui64Address()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint32, "prefix-length"},
    route_tag{YType::uint32, "route-tag"},
    zone{YType::str, "zone"}
{

    yang_name = "eui64-address"; yang_parent_name = "eui64-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::~Eui64Address()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| route_tag.is_set
	|| zone.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_tag.yfilter)
	|| ydk::is_set(zone.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eui64-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());
    if (zone.is_set || is_set(zone.yfilter)) leaf_name_data.push_back(zone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zone")
    {
        zone = value;
        zone.value_namespace = name_space;
        zone.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
    if(value_path == "zone")
    {
        zone.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length" || name == "route-tag" || name == "zone")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::LinkLocalAddress()
    :
    address{YType::str, "address"},
    route_tag{YType::uint32, "route-tag"},
    zone{YType::str, "zone"}
{

    yang_name = "link-local-address"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::~LinkLocalAddress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::has_data() const
{
    return address.is_set
	|| route_tag.is_set
	|| zone.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(route_tag.yfilter)
	|| ydk::is_set(zone.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());
    if (zone.is_set || is_set(zone.yfilter)) leaf_name_data.push_back(zone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zone")
    {
        zone = value;
        zone.value_namespace = name_space;
        zone.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
    if(value_path == "zone")
    {
        zone.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "route-tag" || name == "zone")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddresses()
{

    yang_name = "regular-addresses"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::~RegularAddresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::has_data() const
{
    for (std::size_t index=0; index<regular_address.size(); index++)
    {
        if(regular_address[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::has_operation() const
{
    for (std::size_t index=0; index<regular_address.size(); index++)
    {
        if(regular_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "regular-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "regular-address")
    {
        for(auto const & c : regular_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress>();
        c->parent = this;
        regular_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : regular_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "regular-address")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::RegularAddress()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint32, "prefix-length"},
    route_tag{YType::uint32, "route-tag"},
    zone{YType::str, "zone"}
{

    yang_name = "regular-address"; yang_parent_name = "regular-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::~RegularAddress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| route_tag.is_set
	|| zone.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_tag.yfilter)
	|| ydk::is_set(zone.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "regular-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());
    if (zone.is_set || is_set(zone.yfilter)) leaf_name_data.push_back(zone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zone")
    {
        zone = value;
        zone.value_namespace = name_space;
        zone.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
    if(value_path == "zone")
    {
        zone.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length" || name == "route-tag" || name == "zone")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRoutings()
{

    yang_name = "segment-routings"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::~SegmentRoutings()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::has_data() const
{
    for (std::size_t index=0; index<segment_routing.size(); index++)
    {
        if(segment_routing[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::has_operation() const
{
    for (std::size_t index=0; index<segment_routing.size(); index++)
    {
        if(segment_routing[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing")
    {
        for(auto const & c : segment_routing)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting>();
        c->parent = this;
        segment_routing.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : segment_routing)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::SegmentRouting()
    :
    address{YType::str, "address"},
    enable{YType::empty, "enable"}
    	,
    ipv6_prefix_sid(nullptr) // presence node
{

    yang_name = "segment-routing"; yang_parent_name = "segment-routings"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::~SegmentRouting()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::has_data() const
{
    return address.is_set
	|| enable.is_set
	|| (ipv6_prefix_sid !=  nullptr && ipv6_prefix_sid->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (ipv6_prefix_sid !=  nullptr && ipv6_prefix_sid->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-prefix-sid")
    {
        if(ipv6_prefix_sid == nullptr)
        {
            ipv6_prefix_sid = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid>();
        }
        return ipv6_prefix_sid;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6_prefix_sid != nullptr)
    {
        children["ipv6-prefix-sid"] = ipv6_prefix_sid;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-prefix-sid" || name == "address" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::Ipv6PrefixSid()
    :
    prefix_length{YType::uint32, "prefix-length"},
    route_tag{YType::uint32, "route-tag"},
    zone{YType::str, "zone"}
{

    yang_name = "ipv6-prefix-sid"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::~Ipv6PrefixSid()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::has_data() const
{
    return prefix_length.is_set
	|| route_tag.is_set
	|| zone.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_tag.yfilter)
	|| ydk::is_set(zone.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-prefix-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());
    if (zone.is_set || is_set(zone.yfilter)) leaf_name_data.push_back(zone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zone")
    {
        zone = value;
        zone.value_namespace = name_space;
        zone.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
    if(value_path == "zone")
    {
        zone.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-length" || name == "route-tag" || name == "zone")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicyTable()
    :
    bgp_flow_tag_policy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy>())
{
    bgp_flow_tag_policy->parent = this;

    yang_name = "bgp-flow-tag-policy-table"; yang_parent_name = "ipv6-network"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::~BgpFlowTagPolicyTable()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::has_data() const
{
    return (bgp_flow_tag_policy !=  nullptr && bgp_flow_tag_policy->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::has_operation() const
{
    return is_set(yfilter)
	|| (bgp_flow_tag_policy !=  nullptr && bgp_flow_tag_policy->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-flow-tag-policy-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-flow-tag-policy")
    {
        if(bgp_flow_tag_policy == nullptr)
        {
            bgp_flow_tag_policy = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy>();
        }
        return bgp_flow_tag_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp_flow_tag_policy != nullptr)
    {
        children["bgp-flow-tag-policy"] = bgp_flow_tag_policy;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-flow-tag-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::BgpFlowTagPolicy()
    :
    destination{YType::boolean, "destination"},
    source{YType::boolean, "source"}
{

    yang_name = "bgp-flow-tag-policy"; yang_parent_name = "bgp-flow-tag-policy-table"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::~BgpFlowTagPolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::has_data() const
{
    return destination.is_set
	|| source.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-flow-tag-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccountings()
{

    yang_name = "bgp-policy-accountings"; yang_parent_name = "ipv6-network"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::~BgpPolicyAccountings()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::has_data() const
{
    for (std::size_t index=0; index<bgp_policy_accounting.size(); index++)
    {
        if(bgp_policy_accounting[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::has_operation() const
{
    for (std::size_t index=0; index<bgp_policy_accounting.size(); index++)
    {
        if(bgp_policy_accounting[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-policy-accountings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-policy-accounting")
    {
        for(auto const & c : bgp_policy_accounting)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting>();
        c->parent = this;
        bgp_policy_accounting.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_policy_accounting)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-policy-accounting")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::BgpPolicyAccounting()
    :
    direction{YType::str, "direction"},
    destination_accounting{YType::boolean, "destination-accounting"},
    source_accounting{YType::boolean, "source-accounting"}
{

    yang_name = "bgp-policy-accounting"; yang_parent_name = "bgp-policy-accountings"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::~BgpPolicyAccounting()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::has_data() const
{
    return direction.is_set
	|| destination_accounting.is_set
	|| source_accounting.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(destination_accounting.yfilter)
	|| ydk::is_set(source_accounting.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-policy-accounting" <<"[direction='" <<direction <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (destination_accounting.is_set || is_set(destination_accounting.yfilter)) leaf_name_data.push_back(destination_accounting.get_name_leafdata());
    if (source_accounting.is_set || is_set(source_accounting.yfilter)) leaf_name_data.push_back(source_accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-accounting")
    {
        destination_accounting = value;
        destination_accounting.value_namespace = name_space;
        destination_accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-accounting")
    {
        source_accounting = value;
        source_accounting.value_namespace = name_space;
        source_accounting.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "destination-accounting")
    {
        destination_accounting.yfilter = yfilter;
    }
    if(value_path == "source-accounting")
    {
        source_accounting.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "destination-accounting" || name == "source-accounting")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::BgpQosPolicyPropagation()
    :
    destination{YType::enumeration, "destination"},
    source{YType::enumeration, "source"}
{

    yang_name = "bgp-qos-policy-propagation"; yang_parent_name = "ipv6-network"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::~BgpQosPolicyPropagation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::has_data() const
{
    return destination.is_set
	|| source.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-qos-policy-propagation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::Verify()
    :
    default_ping{YType::enumeration, "default-ping"},
    reachable{YType::enumeration, "reachable"},
    self_ping{YType::enumeration, "self-ping"}
{

    yang_name = "verify"; yang_parent_name = "ipv6-network"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::~Verify()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::has_data() const
{
    return default_ping.is_set
	|| reachable.is_set
	|| self_ping.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_ping.yfilter)
	|| ydk::is_set(reachable.yfilter)
	|| ydk::is_set(self_ping.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_ping.is_set || is_set(default_ping.yfilter)) leaf_name_data.push_back(default_ping.get_name_leafdata());
    if (reachable.is_set || is_set(reachable.yfilter)) leaf_name_data.push_back(reachable.get_name_leafdata());
    if (self_ping.is_set || is_set(self_ping.yfilter)) leaf_name_data.push_back(self_ping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-ping")
    {
        default_ping = value;
        default_ping.value_namespace = name_space;
        default_ping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachable")
    {
        reachable = value;
        reachable.value_namespace = name_space;
        reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "self-ping")
    {
        self_ping = value;
        self_ping.value_namespace = name_space;
        self_ping.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-ping")
    {
        default_ping.yfilter = yfilter;
    }
    if(value_path == "reachable")
    {
        reachable.yfilter = yfilter;
    }
    if(value_path == "self-ping")
    {
        self_ping.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-ping" || name == "reachable" || name == "self-ping")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Ipv6PacketFilter()
    :
    inbound(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound>())
	,outbound(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound>())
{
    inbound->parent = this;
    outbound->parent = this;

    yang_name = "ipv6-packet-filter"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::~Ipv6PacketFilter()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::has_data() const
{
    return (inbound !=  nullptr && inbound->has_data())
	|| (outbound !=  nullptr && outbound->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::has_operation() const
{
    return is_set(yfilter)
	|| (inbound !=  nullptr && inbound->has_operation())
	|| (outbound !=  nullptr && outbound->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-cfg:ipv6-packet-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inbound")
    {
        if(inbound == nullptr)
        {
            inbound = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound>();
        }
        return inbound;
    }

    if(child_yang_name == "outbound")
    {
        if(outbound == nullptr)
        {
            outbound = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound>();
        }
        return outbound;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inbound != nullptr)
    {
        children["inbound"] = inbound;
    }

    if(outbound != nullptr)
    {
        children["outbound"] = outbound;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inbound" || name == "outbound")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::Inbound()
    :
    acl_name_array{YType::str, "acl-name-array"},
    common_acl_name{YType::str, "common-acl-name"},
    compression_level{YType::uint32, "compression-level"},
    interface_statistics{YType::empty, "interface-statistics"},
    is_common_array{YType::boolean, "is-common-array"},
    name{YType::str, "name"}
{

    yang_name = "inbound"; yang_parent_name = "ipv6-packet-filter"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::~Inbound()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::has_data() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return common_acl_name.is_set
	|| compression_level.is_set
	|| interface_statistics.is_set
	|| name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::has_operation() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(acl_name_array.yfilter)
	|| ydk::is_set(common_acl_name.yfilter)
	|| ydk::is_set(compression_level.yfilter)
	|| ydk::is_set(interface_statistics.yfilter)
	|| ydk::is_set(is_common_array.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.yfilter)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (compression_level.is_set || is_set(compression_level.yfilter)) leaf_name_data.push_back(compression_level.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    auto acl_name_array_name_datas = acl_name_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), acl_name_array_name_datas.begin(), acl_name_array_name_datas.end());
    auto is_common_array_name_datas = is_common_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), is_common_array_name_datas.begin(), is_common_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name-array")
    {
        acl_name_array.append(value);
    }
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
        common_acl_name.value_namespace = name_space;
        common_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compression-level")
    {
        compression_level = value;
        compression_level.value_namespace = name_space;
        compression_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
        interface_statistics.value_namespace = name_space;
        interface_statistics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.append(value);
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name-array")
    {
        acl_name_array.yfilter = yfilter;
    }
    if(value_path == "common-acl-name")
    {
        common_acl_name.yfilter = yfilter;
    }
    if(value_path == "compression-level")
    {
        compression_level.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name-array" || name == "common-acl-name" || name == "compression-level" || name == "interface-statistics" || name == "is-common-array" || name == "name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::Outbound()
    :
    acl_name_array{YType::str, "acl-name-array"},
    compression_level{YType::uint32, "compression-level"},
    do_not_use{YType::str, "do-not-use"},
    interface_statistics{YType::empty, "interface-statistics"},
    is_common_array{YType::boolean, "is-common-array"},
    name{YType::str, "name"}
{

    yang_name = "outbound"; yang_parent_name = "ipv6-packet-filter"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::~Outbound()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::has_data() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return compression_level.is_set
	|| do_not_use.is_set
	|| interface_statistics.is_set
	|| name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::has_operation() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(acl_name_array.yfilter)
	|| ydk::is_set(compression_level.yfilter)
	|| ydk::is_set(do_not_use.yfilter)
	|| ydk::is_set(interface_statistics.yfilter)
	|| ydk::is_set(is_common_array.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (compression_level.is_set || is_set(compression_level.yfilter)) leaf_name_data.push_back(compression_level.get_name_leafdata());
    if (do_not_use.is_set || is_set(do_not_use.yfilter)) leaf_name_data.push_back(do_not_use.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    auto acl_name_array_name_datas = acl_name_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), acl_name_array_name_datas.begin(), acl_name_array_name_datas.end());
    auto is_common_array_name_datas = is_common_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), is_common_array_name_datas.begin(), is_common_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name-array")
    {
        acl_name_array.append(value);
    }
    if(value_path == "compression-level")
    {
        compression_level = value;
        compression_level.value_namespace = name_space;
        compression_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "do-not-use")
    {
        do_not_use = value;
        do_not_use.value_namespace = name_space;
        do_not_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
        interface_statistics.value_namespace = name_space;
        interface_statistics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.append(value);
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name-array")
    {
        acl_name_array.yfilter = yfilter;
    }
    if(value_path == "compression-level")
    {
        compression_level.yfilter = yfilter;
    }
    if(value_path == "do-not-use")
    {
        do_not_use.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name-array" || name == "compression-level" || name == "do-not-use" || name == "interface-statistics" || name == "is-common-array" || name == "name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Transport()
    :
    enabled{YType::empty, "enabled"},
    propagate_remote_status{YType::empty, "Cisco-IOS-XR-l2-eth-infra-cfg:propagate-remote-status"}
    	,
    atm_port_mode_parameters(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters>())
	,cac(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac>())
	,l2_ethernet_features(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures>())
	,l2_protocols(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols>())
	,pac(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac>())
	,span_monitor_sessions(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions>())
{
    atm_port_mode_parameters->parent = this;
    cac->parent = this;
    l2_ethernet_features->parent = this;
    l2_protocols->parent = this;
    pac->parent = this;
    span_monitor_sessions->parent = this;

    yang_name = "l2-transport"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::~L2Transport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::has_data() const
{
    return enabled.is_set
	|| propagate_remote_status.is_set
	|| (atm_port_mode_parameters !=  nullptr && atm_port_mode_parameters->has_data())
	|| (cac !=  nullptr && cac->has_data())
	|| (l2_ethernet_features !=  nullptr && l2_ethernet_features->has_data())
	|| (l2_protocols !=  nullptr && l2_protocols->has_data())
	|| (pac !=  nullptr && pac->has_data())
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(propagate_remote_status.yfilter)
	|| (atm_port_mode_parameters !=  nullptr && atm_port_mode_parameters->has_operation())
	|| (cac !=  nullptr && cac->has_operation())
	|| (l2_ethernet_features !=  nullptr && l2_ethernet_features->has_operation())
	|| (l2_protocols !=  nullptr && l2_protocols->has_operation())
	|| (pac !=  nullptr && pac->has_operation())
	|| (span_monitor_sessions !=  nullptr && span_monitor_sessions->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2-transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (propagate_remote_status.is_set || is_set(propagate_remote_status.yfilter)) leaf_name_data.push_back(propagate_remote_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atm-port-mode-parameters")
    {
        if(atm_port_mode_parameters == nullptr)
        {
            atm_port_mode_parameters = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters>();
        }
        return atm_port_mode_parameters;
    }

    if(child_yang_name == "cac")
    {
        if(cac == nullptr)
        {
            cac = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac>();
        }
        return cac;
    }

    if(child_yang_name == "l2-ethernet-features")
    {
        if(l2_ethernet_features == nullptr)
        {
            l2_ethernet_features = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures>();
        }
        return l2_ethernet_features;
    }

    if(child_yang_name == "l2-protocols")
    {
        if(l2_protocols == nullptr)
        {
            l2_protocols = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols>();
        }
        return l2_protocols;
    }

    if(child_yang_name == "pac")
    {
        if(pac == nullptr)
        {
            pac = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac>();
        }
        return pac;
    }

    if(child_yang_name == "span-monitor-sessions")
    {
        if(span_monitor_sessions == nullptr)
        {
            span_monitor_sessions = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions>();
        }
        return span_monitor_sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_port_mode_parameters != nullptr)
    {
        children["atm-port-mode-parameters"] = atm_port_mode_parameters;
    }

    if(cac != nullptr)
    {
        children["cac"] = cac;
    }

    if(l2_ethernet_features != nullptr)
    {
        children["l2-ethernet-features"] = l2_ethernet_features;
    }

    if(l2_protocols != nullptr)
    {
        children["l2-protocols"] = l2_protocols;
    }

    if(pac != nullptr)
    {
        children["pac"] = pac;
    }

    if(span_monitor_sessions != nullptr)
    {
        children["span-monitor-sessions"] = span_monitor_sessions;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagate-remote-status")
    {
        propagate_remote_status = value;
        propagate_remote_status.value_namespace = name_space;
        propagate_remote_status.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "propagate-remote-status")
    {
        propagate_remote_status.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atm-port-mode-parameters" || name == "cac" || name == "l2-ethernet-features" || name == "l2-protocols" || name == "pac" || name == "span-monitor-sessions" || name == "enabled" || name == "propagate-remote-status")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::AtmPortModeParameters()
    :
    cell_packing(nullptr) // presence node
{

    yang_name = "atm-port-mode-parameters"; yang_parent_name = "l2-transport"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::~AtmPortModeParameters()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::has_data() const
{
    return (cell_packing !=  nullptr && cell_packing->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::has_operation() const
{
    return is_set(yfilter)
	|| (cell_packing !=  nullptr && cell_packing->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-atm-vcm-cfg:atm-port-mode-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cell-packing")
    {
        if(cell_packing == nullptr)
        {
            cell_packing = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking>();
        }
        return cell_packing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cell_packing != nullptr)
    {
        children["cell-packing"] = cell_packing;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cell-packing")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::CellPacking()
    :
    cell_packing_timer_id{YType::uint32, "cell-packing-timer-id"},
    maximum_cells_packed{YType::uint32, "maximum-cells-packed"}
{

    yang_name = "cell-packing"; yang_parent_name = "atm-port-mode-parameters"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::~CellPacking()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::has_data() const
{
    return cell_packing_timer_id.is_set
	|| maximum_cells_packed.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cell_packing_timer_id.yfilter)
	|| ydk::is_set(maximum_cells_packed.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cell-packing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cell_packing_timer_id.is_set || is_set(cell_packing_timer_id.yfilter)) leaf_name_data.push_back(cell_packing_timer_id.get_name_leafdata());
    if (maximum_cells_packed.is_set || is_set(maximum_cells_packed.yfilter)) leaf_name_data.push_back(maximum_cells_packed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cell-packing-timer-id")
    {
        cell_packing_timer_id = value;
        cell_packing_timer_id.value_namespace = name_space;
        cell_packing_timer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-cells-packed")
    {
        maximum_cells_packed = value;
        maximum_cells_packed.value_namespace = name_space;
        maximum_cells_packed.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cell-packing-timer-id")
    {
        cell_packing_timer_id.yfilter = yfilter;
    }
    if(value_path == "maximum-cells-packed")
    {
        maximum_cells_packed.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::AtmPortModeParameters::CellPacking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cell-packing-timer-id" || name == "maximum-cells-packed")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Cac()
    :
    qos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos>())
{
    qos->parent = this;

    yang_name = "cac"; yang_parent_name = "l2-transport"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::~Cac()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::has_data() const
{
    return (qos !=  nullptr && qos->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::has_operation() const
{
    return is_set(yfilter)
	|| (qos !=  nullptr && qos->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-cfg:cac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Qos()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input>())
	,output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "qos"; yang_parent_name = "cac"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::~Qos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::Input()
{

    yang_name = "input"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    if(child_yang_name == "service-policy-qos")
    {
        for(auto const & c : service_policy_qos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos>();
        c->parent = this;
        service_policy_qos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : service_policy_qos)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "service-policy-qos")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{

    yang_name = "service-policy"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::has_data() const
{
    return service_policy_name.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name" || name == "account-type" || name == "l1-user-defined" || name == "resource-id" || name == "service-fragment-parent-policy" || name == "spi-name" || name == "subscriber-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::ServicePolicyQos()
    :
    service_policy_name{YType::str, "service-policy-name"}
    	,
    subscriber_group_names(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames>())
	,subscriber_parent(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent>())
{
    subscriber_group_names->parent = this;
    subscriber_parent->parent = this;

    yang_name = "service-policy-qos"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::~ServicePolicyQos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::has_data() const
{
    return service_policy_name.is_set
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_data())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_operation())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-qos" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-names")
    {
        if(subscriber_group_names == nullptr)
        {
            subscriber_group_names = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames>();
        }
        return subscriber_group_names;
    }

    if(child_yang_name == "subscriber-parent")
    {
        if(subscriber_parent == nullptr)
        {
            subscriber_parent = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent>();
        }
        return subscriber_parent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(subscriber_group_names != nullptr)
    {
        children["subscriber-group-names"] = subscriber_group_names;
    }

    if(subscriber_parent != nullptr)
    {
        children["subscriber-parent"] = subscriber_parent;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-names" || name == "subscriber-parent" || name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupNames()
{

    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::~SubscriberGroupNames()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_data() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_operation() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-name")
    {
        for(auto const & c : subscriber_group_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        c->parent = this;
        subscriber_group_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subscriber_group_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::SubscriberGroupName()
    :
    subscriber_group_string{YType::str, "subscriber-group-string"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{

    yang_name = "subscriber-group-name"; yang_parent_name = "subscriber-group-names"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::~SubscriberGroupName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_data() const
{
    return subscriber_group_string.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_group_string.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-name" <<"[subscriber-group-string='" <<subscriber_group_string <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_group_string.is_set || is_set(subscriber_group_string.yfilter)) leaf_name_data.push_back(subscriber_group_string.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string = value;
        subscriber_group_string.value_namespace = name_space;
        subscriber_group_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string.yfilter = yfilter;
    }
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-string" || name == "account-type" || name == "l1-user-defined" || name == "policy-merge" || name == "resource-id" || name == "service-fragment-parent-policy" || name == "spi-name" || name == "subscriber-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::SubscriberParent()
    :
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{

    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::has_data() const
{
    return account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Input::ServicePolicyQos::SubscriberParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-type" || name == "l1-user-defined" || name == "policy-merge" || name == "resource-id" || name == "service-fragment-parent-policy" || name == "spi-name" || name == "subscriber-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::Output()
{

    yang_name = "output"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    if(child_yang_name == "service-policy-qos")
    {
        for(auto const & c : service_policy_qos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos>();
        c->parent = this;
        service_policy_qos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : service_policy_qos)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "service-policy-qos")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{

    yang_name = "service-policy"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::has_data() const
{
    return service_policy_name.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name" || name == "account-type" || name == "l1-user-defined" || name == "resource-id" || name == "service-fragment-parent-policy" || name == "spi-name" || name == "subscriber-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::ServicePolicyQos()
    :
    service_policy_name{YType::str, "service-policy-name"}
    	,
    subscriber_group_names(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames>())
	,subscriber_parent(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent>())
{
    subscriber_group_names->parent = this;
    subscriber_parent->parent = this;

    yang_name = "service-policy-qos"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::~ServicePolicyQos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::has_data() const
{
    return service_policy_name.is_set
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_data())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_operation())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-qos" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-names")
    {
        if(subscriber_group_names == nullptr)
        {
            subscriber_group_names = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames>();
        }
        return subscriber_group_names;
    }

    if(child_yang_name == "subscriber-parent")
    {
        if(subscriber_parent == nullptr)
        {
            subscriber_parent = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent>();
        }
        return subscriber_parent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(subscriber_group_names != nullptr)
    {
        children["subscriber-group-names"] = subscriber_group_names;
    }

    if(subscriber_parent != nullptr)
    {
        children["subscriber-parent"] = subscriber_parent;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-names" || name == "subscriber-parent" || name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupNames()
{

    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::~SubscriberGroupNames()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_data() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_operation() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-name")
    {
        for(auto const & c : subscriber_group_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        c->parent = this;
        subscriber_group_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subscriber_group_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::SubscriberGroupName()
    :
    subscriber_group_string{YType::str, "subscriber-group-string"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{

    yang_name = "subscriber-group-name"; yang_parent_name = "subscriber-group-names"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::~SubscriberGroupName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_data() const
{
    return subscriber_group_string.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_group_string.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-name" <<"[subscriber-group-string='" <<subscriber_group_string <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_group_string.is_set || is_set(subscriber_group_string.yfilter)) leaf_name_data.push_back(subscriber_group_string.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string = value;
        subscriber_group_string.value_namespace = name_space;
        subscriber_group_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string.yfilter = yfilter;
    }
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-string" || name == "account-type" || name == "l1-user-defined" || name == "policy-merge" || name == "resource-id" || name == "service-fragment-parent-policy" || name == "spi-name" || name == "subscriber-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::SubscriberParent()
    :
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{

    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::has_data() const
{
    return account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Cac::Qos::Output::ServicePolicyQos::SubscriberParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-type" || name == "l1-user-defined" || name == "policy-merge" || name == "resource-id" || name == "service-fragment-parent-policy" || name == "spi-name" || name == "subscriber-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::L2EthernetFeatures()
    :
    egress_filtering{YType::enumeration, "egress-filtering"},
    source_bypass_egress_filtering{YType::empty, "source-bypass-egress-filtering"}
{

    yang_name = "l2-ethernet-features"; yang_parent_name = "l2-transport"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::~L2EthernetFeatures()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::has_data() const
{
    return egress_filtering.is_set
	|| source_bypass_egress_filtering.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(egress_filtering.yfilter)
	|| ydk::is_set(source_bypass_egress_filtering.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:l2-ethernet-features";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_filtering.is_set || is_set(egress_filtering.yfilter)) leaf_name_data.push_back(egress_filtering.get_name_leafdata());
    if (source_bypass_egress_filtering.is_set || is_set(source_bypass_egress_filtering.yfilter)) leaf_name_data.push_back(source_bypass_egress_filtering.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "egress-filtering")
    {
        egress_filtering = value;
        egress_filtering.value_namespace = name_space;
        egress_filtering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-bypass-egress-filtering")
    {
        source_bypass_egress_filtering = value;
        source_bypass_egress_filtering.value_namespace = name_space;
        source_bypass_egress_filtering.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "egress-filtering")
    {
        egress_filtering.yfilter = yfilter;
    }
    if(value_path == "source-bypass-egress-filtering")
    {
        source_bypass_egress_filtering.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2EthernetFeatures::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress-filtering" || name == "source-bypass-egress-filtering")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocols()
{

    yang_name = "l2-protocols"; yang_parent_name = "l2-transport"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::~L2Protocols()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::has_data() const
{
    for (std::size_t index=0; index<l2_protocol.size(); index++)
    {
        if(l2_protocol[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::has_operation() const
{
    for (std::size_t index=0; index<l2_protocol.size(); index++)
    {
        if(l2_protocol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:l2-protocols";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2-protocol")
    {
        for(auto const & c : l2_protocol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol>();
        c->parent = this;
        l2_protocol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : l2_protocol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2-protocol")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::L2Protocol()
    :
    l2_protocol_name{YType::enumeration, "l2-protocol-name"},
    mode{YType::enumeration, "mode"},
    mpls_exp_bits_value{YType::uint32, "mpls-exp-bits-value"}
{

    yang_name = "l2-protocol"; yang_parent_name = "l2-protocols"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::~L2Protocol()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::has_data() const
{
    return l2_protocol_name.is_set
	|| mode.is_set
	|| mpls_exp_bits_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2_protocol_name.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(mpls_exp_bits_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2-protocol" <<"[l2-protocol-name='" <<l2_protocol_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2_protocol_name.is_set || is_set(l2_protocol_name.yfilter)) leaf_name_data.push_back(l2_protocol_name.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (mpls_exp_bits_value.is_set || is_set(mpls_exp_bits_value.yfilter)) leaf_name_data.push_back(mpls_exp_bits_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2-protocol-name")
    {
        l2_protocol_name = value;
        l2_protocol_name.value_namespace = name_space;
        l2_protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-exp-bits-value")
    {
        mpls_exp_bits_value = value;
        mpls_exp_bits_value.value_namespace = name_space;
        mpls_exp_bits_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2-protocol-name")
    {
        l2_protocol_name.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "mpls-exp-bits-value")
    {
        mpls_exp_bits_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::L2Protocols::L2Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2-protocol-name" || name == "mode" || name == "mpls-exp-bits-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Pac()
    :
    qos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos>())
{
    qos->parent = this;

    yang_name = "pac"; yang_parent_name = "l2-transport"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::~Pac()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::has_data() const
{
    return (qos !=  nullptr && qos->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::has_operation() const
{
    return is_set(yfilter)
	|| (qos !=  nullptr && qos->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-cfg:pac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Qos()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input>())
	,output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "qos"; yang_parent_name = "pac"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::~Qos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::Input()
{

    yang_name = "input"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    if(child_yang_name == "service-policy-qos")
    {
        for(auto const & c : service_policy_qos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos>();
        c->parent = this;
        service_policy_qos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : service_policy_qos)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "service-policy-qos")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{

    yang_name = "service-policy"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::has_data() const
{
    return service_policy_name.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name" || name == "account-type" || name == "l1-user-defined" || name == "resource-id" || name == "service-fragment-parent-policy" || name == "spi-name" || name == "subscriber-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::ServicePolicyQos()
    :
    service_policy_name{YType::str, "service-policy-name"}
    	,
    subscriber_group_names(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames>())
	,subscriber_parent(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent>())
{
    subscriber_group_names->parent = this;
    subscriber_parent->parent = this;

    yang_name = "service-policy-qos"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::~ServicePolicyQos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::has_data() const
{
    return service_policy_name.is_set
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_data())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_operation())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-qos" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-names")
    {
        if(subscriber_group_names == nullptr)
        {
            subscriber_group_names = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames>();
        }
        return subscriber_group_names;
    }

    if(child_yang_name == "subscriber-parent")
    {
        if(subscriber_parent == nullptr)
        {
            subscriber_parent = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent>();
        }
        return subscriber_parent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(subscriber_group_names != nullptr)
    {
        children["subscriber-group-names"] = subscriber_group_names;
    }

    if(subscriber_parent != nullptr)
    {
        children["subscriber-parent"] = subscriber_parent;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-names" || name == "subscriber-parent" || name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupNames()
{

    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::~SubscriberGroupNames()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_data() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_operation() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-name")
    {
        for(auto const & c : subscriber_group_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        c->parent = this;
        subscriber_group_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subscriber_group_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::SubscriberGroupName()
    :
    subscriber_group_string{YType::str, "subscriber-group-string"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{

    yang_name = "subscriber-group-name"; yang_parent_name = "subscriber-group-names"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::~SubscriberGroupName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_data() const
{
    return subscriber_group_string.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_group_string.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-name" <<"[subscriber-group-string='" <<subscriber_group_string <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_group_string.is_set || is_set(subscriber_group_string.yfilter)) leaf_name_data.push_back(subscriber_group_string.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string = value;
        subscriber_group_string.value_namespace = name_space;
        subscriber_group_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string.yfilter = yfilter;
    }
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-string" || name == "account-type" || name == "l1-user-defined" || name == "policy-merge" || name == "resource-id" || name == "service-fragment-parent-policy" || name == "spi-name" || name == "subscriber-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::SubscriberParent()
    :
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{

    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::has_data() const
{
    return account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Input::ServicePolicyQos::SubscriberParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-type" || name == "l1-user-defined" || name == "policy-merge" || name == "resource-id" || name == "service-fragment-parent-policy" || name == "spi-name" || name == "subscriber-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::Output()
{

    yang_name = "output"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    if(child_yang_name == "service-policy-qos")
    {
        for(auto const & c : service_policy_qos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos>();
        c->parent = this;
        service_policy_qos.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : service_policy_qos)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "service-policy-qos")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{

    yang_name = "service-policy"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::has_data() const
{
    return service_policy_name.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name" || name == "account-type" || name == "l1-user-defined" || name == "resource-id" || name == "service-fragment-parent-policy" || name == "spi-name" || name == "subscriber-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::ServicePolicyQos()
    :
    service_policy_name{YType::str, "service-policy-name"}
    	,
    subscriber_group_names(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames>())
	,subscriber_parent(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent>())
{
    subscriber_group_names->parent = this;
    subscriber_parent->parent = this;

    yang_name = "service-policy-qos"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::~ServicePolicyQos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::has_data() const
{
    return service_policy_name.is_set
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_data())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_operation())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-qos" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-names")
    {
        if(subscriber_group_names == nullptr)
        {
            subscriber_group_names = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames>();
        }
        return subscriber_group_names;
    }

    if(child_yang_name == "subscriber-parent")
    {
        if(subscriber_parent == nullptr)
        {
            subscriber_parent = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent>();
        }
        return subscriber_parent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(subscriber_group_names != nullptr)
    {
        children["subscriber-group-names"] = subscriber_group_names;
    }

    if(subscriber_parent != nullptr)
    {
        children["subscriber-parent"] = subscriber_parent;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-names" || name == "subscriber-parent" || name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupNames()
{

    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::~SubscriberGroupNames()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_data() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_operation() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-name")
    {
        for(auto const & c : subscriber_group_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        c->parent = this;
        subscriber_group_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : subscriber_group_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::SubscriberGroupName()
    :
    subscriber_group_string{YType::str, "subscriber-group-string"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{

    yang_name = "subscriber-group-name"; yang_parent_name = "subscriber-group-names"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::~SubscriberGroupName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_data() const
{
    return subscriber_group_string.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_group_string.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-name" <<"[subscriber-group-string='" <<subscriber_group_string <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_group_string.is_set || is_set(subscriber_group_string.yfilter)) leaf_name_data.push_back(subscriber_group_string.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string = value;
        subscriber_group_string.value_namespace = name_space;
        subscriber_group_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string.yfilter = yfilter;
    }
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-string" || name == "account-type" || name == "l1-user-defined" || name == "policy-merge" || name == "resource-id" || name == "service-fragment-parent-policy" || name == "spi-name" || name == "subscriber-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::SubscriberParent()
    :
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{

    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::has_data() const
{
    return account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "account-type")
    {
        account_type = value;
        account_type.value_namespace = name_space;
        account_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
        l1_user_defined.value_namespace = name_space;
        l1_user_defined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
        resource_id.value_namespace = name_space;
        resource_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
        service_fragment_parent_policy.value_namespace = name_space;
        service_fragment_parent_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::Pac::Qos::Output::ServicePolicyQos::SubscriberParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-type" || name == "l1-user-defined" || name == "policy-merge" || name == "resource-id" || name == "service-fragment-parent-policy" || name == "spi-name" || name == "subscriber-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSessions()
{

    yang_name = "span-monitor-sessions"; yang_parent_name = "l2-transport"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::~SpanMonitorSessions()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::has_data() const
{
    for (std::size_t index=0; index<span_monitor_session.size(); index++)
    {
        if(span_monitor_session[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::has_operation() const
{
    for (std::size_t index=0; index<span_monitor_session.size(); index++)
    {
        if(span_monitor_session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "span-monitor-session")
    {
        for(auto const & c : span_monitor_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession>();
        c->parent = this;
        span_monitor_session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : span_monitor_session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "span-monitor-session")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::SpanMonitorSession()
    :
    session_class{YType::enumeration, "session-class"},
    mirror_first{YType::uint32, "mirror-first"},
    mirror_interval{YType::enumeration, "mirror-interval"}
    	,
    acl(nullptr) // presence node
	,attachment(nullptr) // presence node
{

    yang_name = "span-monitor-session"; yang_parent_name = "span-monitor-sessions"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::~SpanMonitorSession()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::has_data() const
{
    return session_class.is_set
	|| mirror_first.is_set
	|| mirror_interval.is_set
	|| (acl !=  nullptr && acl->has_data())
	|| (attachment !=  nullptr && attachment->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_class.yfilter)
	|| ydk::is_set(mirror_first.yfilter)
	|| ydk::is_set(mirror_interval.yfilter)
	|| (acl !=  nullptr && acl->has_operation())
	|| (attachment !=  nullptr && attachment->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "span-monitor-session" <<"[session-class='" <<session_class <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_class.is_set || is_set(session_class.yfilter)) leaf_name_data.push_back(session_class.get_name_leafdata());
    if (mirror_first.is_set || is_set(mirror_first.yfilter)) leaf_name_data.push_back(mirror_first.get_name_leafdata());
    if (mirror_interval.is_set || is_set(mirror_interval.yfilter)) leaf_name_data.push_back(mirror_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "attachment")
    {
        if(attachment == nullptr)
        {
            attachment = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment>();
        }
        return attachment;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    if(attachment != nullptr)
    {
        children["attachment"] = attachment;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-class")
    {
        session_class = value;
        session_class.value_namespace = name_space;
        session_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirror-first")
    {
        mirror_first = value;
        mirror_first.value_namespace = name_space;
        mirror_first.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval = value;
        mirror_interval.value_namespace = name_space;
        mirror_interval.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-class")
    {
        session_class.yfilter = yfilter;
    }
    if(value_path == "mirror-first")
    {
        mirror_first.yfilter = yfilter;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "attachment" || name == "session-class" || name == "mirror-first" || name == "mirror-interval")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl::Acl()
    :
    acl_enable{YType::empty, "acl-enable"},
    acl_name{YType::str, "acl-name"}
{

    yang_name = "acl"; yang_parent_name = "span-monitor-session"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl::~Acl()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl::has_data() const
{
    return acl_enable.is_set
	|| acl_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_enable.yfilter)
	|| ydk::is_set(acl_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_enable.is_set || is_set(acl_enable.yfilter)) leaf_name_data.push_back(acl_enable.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-enable")
    {
        acl_enable = value;
        acl_enable.value_namespace = name_space;
        acl_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-enable")
    {
        acl_enable.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-enable" || name == "acl-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::Attachment()
    :
    direction{YType::enumeration, "direction"},
    port_level_enable{YType::empty, "port-level-enable"},
    session_name{YType::str, "session-name"}
{

    yang_name = "attachment"; yang_parent_name = "span-monitor-session"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::~Attachment()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::has_data() const
{
    return direction.is_set
	|| port_level_enable.is_set
	|| session_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(port_level_enable.yfilter)
	|| ydk::is_set(session_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (port_level_enable.is_set || is_set(port_level_enable.yfilter)) leaf_name_data.push_back(port_level_enable.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-level-enable")
    {
        port_level_enable = value;
        port_level_enable.value_namespace = name_space;
        port_level_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "port-level-enable")
    {
        port_level_enable.yfilter = yfilter;
    }
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::L2Transport::SpanMonitorSessions::SpanMonitorSession::Attachment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "port-level-enable" || name == "session-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::Lacp()
    :
    churn_logging{YType::enumeration, "churn-logging"},
    collector_max_delay{YType::uint32, "collector-max-delay"},
    fast_switchover{YType::empty, "fast-switchover"},
    lacp_nonrevertive{YType::empty, "lacp-nonrevertive"},
    mode{YType::enumeration, "mode"},
    period{YType::str, "period"},
    period_short{YType::str, "period-short"},
    suppress_flaps{YType::uint32, "suppress-flaps"},
    system_mac{YType::str, "system-mac"},
    system_priority{YType::uint32, "system-priority"}
    	,
    cisco_extensions(nullptr) // presence node
	,timeout(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout>())
{
    timeout->parent = this;

    yang_name = "lacp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::~Lacp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::has_data() const
{
    return churn_logging.is_set
	|| collector_max_delay.is_set
	|| fast_switchover.is_set
	|| lacp_nonrevertive.is_set
	|| mode.is_set
	|| period.is_set
	|| period_short.is_set
	|| suppress_flaps.is_set
	|| system_mac.is_set
	|| system_priority.is_set
	|| (cisco_extensions !=  nullptr && cisco_extensions->has_data())
	|| (timeout !=  nullptr && timeout->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(churn_logging.yfilter)
	|| ydk::is_set(collector_max_delay.yfilter)
	|| ydk::is_set(fast_switchover.yfilter)
	|| ydk::is_set(lacp_nonrevertive.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(period_short.yfilter)
	|| ydk::is_set(suppress_flaps.yfilter)
	|| ydk::is_set(system_mac.yfilter)
	|| ydk::is_set(system_priority.yfilter)
	|| (cisco_extensions !=  nullptr && cisco_extensions->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Lacp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-cfg:lacp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Lacp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (churn_logging.is_set || is_set(churn_logging.yfilter)) leaf_name_data.push_back(churn_logging.get_name_leafdata());
    if (collector_max_delay.is_set || is_set(collector_max_delay.yfilter)) leaf_name_data.push_back(collector_max_delay.get_name_leafdata());
    if (fast_switchover.is_set || is_set(fast_switchover.yfilter)) leaf_name_data.push_back(fast_switchover.get_name_leafdata());
    if (lacp_nonrevertive.is_set || is_set(lacp_nonrevertive.yfilter)) leaf_name_data.push_back(lacp_nonrevertive.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (period_short.is_set || is_set(period_short.yfilter)) leaf_name_data.push_back(period_short.get_name_leafdata());
    if (suppress_flaps.is_set || is_set(suppress_flaps.yfilter)) leaf_name_data.push_back(suppress_flaps.get_name_leafdata());
    if (system_mac.is_set || is_set(system_mac.yfilter)) leaf_name_data.push_back(system_mac.get_name_leafdata());
    if (system_priority.is_set || is_set(system_priority.yfilter)) leaf_name_data.push_back(system_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Lacp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cisco-extensions")
    {
        if(cisco_extensions == nullptr)
        {
            cisco_extensions = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions>();
        }
        return cisco_extensions;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Lacp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cisco_extensions != nullptr)
    {
        children["cisco-extensions"] = cisco_extensions;
    }

    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lacp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "churn-logging")
    {
        churn_logging = value;
        churn_logging.value_namespace = name_space;
        churn_logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay = value;
        collector_max_delay.value_namespace = name_space;
        collector_max_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-switchover")
    {
        fast_switchover = value;
        fast_switchover.value_namespace = name_space;
        fast_switchover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive = value;
        lacp_nonrevertive.value_namespace = name_space;
        lacp_nonrevertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-short")
    {
        period_short = value;
        period_short.value_namespace = name_space;
        period_short.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-flaps")
    {
        suppress_flaps = value;
        suppress_flaps.value_namespace = name_space;
        suppress_flaps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-mac")
    {
        system_mac = value;
        system_mac.value_namespace = name_space;
        system_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-priority")
    {
        system_priority = value;
        system_priority.value_namespace = name_space;
        system_priority.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Lacp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "churn-logging")
    {
        churn_logging.yfilter = yfilter;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay.yfilter = yfilter;
    }
    if(value_path == "fast-switchover")
    {
        fast_switchover.yfilter = yfilter;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "period-short")
    {
        period_short.yfilter = yfilter;
    }
    if(value_path == "suppress-flaps")
    {
        suppress_flaps.yfilter = yfilter;
    }
    if(value_path == "system-mac")
    {
        system_mac.yfilter = yfilter;
    }
    if(value_path == "system-priority")
    {
        system_priority.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco-extensions" || name == "timeout" || name == "churn-logging" || name == "collector-max-delay" || name == "fast-switchover" || name == "lacp-nonrevertive" || name == "mode" || name == "period" || name == "period-short" || name == "suppress-flaps" || name == "system-mac" || name == "system-priority")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::CiscoExtensions()
    :
    cisco_ext{YType::empty, "cisco-ext"},
    cisco_ext_type{YType::enumeration, "cisco-ext-type"}
{

    yang_name = "cisco-extensions"; yang_parent_name = "lacp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::~CiscoExtensions()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::has_data() const
{
    return cisco_ext.is_set
	|| cisco_ext_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cisco_ext.yfilter)
	|| ydk::is_set(cisco_ext_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-extensions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco_ext.is_set || is_set(cisco_ext.yfilter)) leaf_name_data.push_back(cisco_ext.get_name_leafdata());
    if (cisco_ext_type.is_set || is_set(cisco_ext_type.yfilter)) leaf_name_data.push_back(cisco_ext_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cisco-ext")
    {
        cisco_ext = value;
        cisco_ext.value_namespace = name_space;
        cisco_ext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cisco-ext-type")
    {
        cisco_ext_type = value;
        cisco_ext_type.value_namespace = name_space;
        cisco_ext_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cisco-ext")
    {
        cisco_ext.yfilter = yfilter;
    }
    if(value_path == "cisco-ext-type")
    {
        cisco_ext_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco-ext" || name == "cisco-ext-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::Timeout()
    :
    actor_churn{YType::uint32, "actor-churn"},
    partner_churn{YType::uint32, "partner-churn"},
    rx_default{YType::uint32, "rx-default"}
{

    yang_name = "timeout"; yang_parent_name = "lacp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::~Timeout()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::has_data() const
{
    return actor_churn.is_set
	|| partner_churn.is_set
	|| rx_default.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(actor_churn.yfilter)
	|| ydk::is_set(partner_churn.yfilter)
	|| ydk::is_set(rx_default.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_churn.is_set || is_set(actor_churn.yfilter)) leaf_name_data.push_back(actor_churn.get_name_leafdata());
    if (partner_churn.is_set || is_set(partner_churn.yfilter)) leaf_name_data.push_back(partner_churn.get_name_leafdata());
    if (rx_default.is_set || is_set(rx_default.yfilter)) leaf_name_data.push_back(rx_default.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "actor-churn")
    {
        actor_churn = value;
        actor_churn.value_namespace = name_space;
        actor_churn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-churn")
    {
        partner_churn = value;
        partner_churn.value_namespace = name_space;
        partner_churn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-default")
    {
        rx_default = value;
        rx_default.value_namespace = name_space;
        rx_default.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "actor-churn")
    {
        actor_churn.yfilter = yfilter;
    }
    if(value_path == "partner-churn")
    {
        partner_churn.yfilter = yfilter;
    }
    if(value_path == "rx-default")
    {
        rx_default.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actor-churn" || name == "partner-churn" || name == "rx-default")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Lldp::Lldp()
    :
    lldp_intf_enter{YType::boolean, "lldp-intf-enter"}
    	,
    receive(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive>())
	,transmit(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit>())
{
    receive->parent = this;
    transmit->parent = this;

    yang_name = "lldp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Lldp::~Lldp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::has_data() const
{
    return lldp_intf_enter.is_set
	|| (receive !=  nullptr && receive->has_data())
	|| (transmit !=  nullptr && transmit->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldp_intf_enter.yfilter)
	|| (receive !=  nullptr && receive->has_operation())
	|| (transmit !=  nullptr && transmit->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Lldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-lldp-cfg:lldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Lldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldp_intf_enter.is_set || is_set(lldp_intf_enter.yfilter)) leaf_name_data.push_back(lldp_intf_enter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Lldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive>();
        }
        return receive;
    }

    if(child_yang_name == "transmit")
    {
        if(transmit == nullptr)
        {
            transmit = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit>();
        }
        return transmit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Lldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(receive != nullptr)
    {
        children["receive"] = receive;
    }

    if(transmit != nullptr)
    {
        children["transmit"] = transmit;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lldp-intf-enter")
    {
        lldp_intf_enter = value;
        lldp_intf_enter.value_namespace = name_space;
        lldp_intf_enter.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Lldp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lldp-intf-enter")
    {
        lldp_intf_enter.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "transmit" || name == "lldp-intf-enter")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::Receive()
    :
    disable{YType::boolean, "disable"}
{

    yang_name = "receive"; yang_parent_name = "lldp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::~Receive()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::has_data() const
{
    return disable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::Transmit()
    :
    disable{YType::boolean, "disable"}
{

    yang_name = "transmit"; yang_parent_name = "lldp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::~Transmit()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::has_data() const
{
    return disable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopbacks()
{

    yang_name = "loopbacks"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Loopbacks::~Loopbacks()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Loopbacks::has_data() const
{
    for (std::size_t index=0; index<loopback.size(); index++)
    {
        if(loopback[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Loopbacks::has_operation() const
{
    for (std::size_t index=0; index<loopback.size(); index++)
    {
        if(loopback[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Loopbacks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-drivers-icpe-ethernet-cfg:loopbacks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Loopbacks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Loopbacks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "loopback")
    {
        for(auto const & c : loopback)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback>();
        c->parent = this;
        loopback.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Loopbacks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : loopback)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Loopbacks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Loopbacks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Loopbacks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loopback")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::Loopback()
    :
    level{YType::uint32, "level"},
    loopback{YType::enumeration, "loopback"}
{

    yang_name = "loopback"; yang_parent_name = "loopbacks"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::~Loopback()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::has_data() const
{
    return level.is_set
	|| loopback.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(loopback.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loopback" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "loopback")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MacAccounting::MacAccounting()
    :
    egress{YType::empty, "egress"},
    ingress{YType::empty, "ingress"}
{

    yang_name = "mac-accounting"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::MacAccounting::~MacAccounting()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MacAccounting::has_data() const
{
    return egress.is_set
	|| ingress.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MacAccounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(egress.yfilter)
	|| ydk::is_set(ingress.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MacAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:mac-accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MacAccounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress.is_set || is_set(egress.yfilter)) leaf_name_data.push_back(egress.get_name_leafdata());
    if (ingress.is_set || is_set(ingress.yfilter)) leaf_name_data.push_back(ingress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MacAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::MacAccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MacAccounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "egress")
    {
        egress = value;
        egress.value_namespace = name_space;
        egress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress")
    {
        ingress = value;
        ingress.value_namespace = name_space;
        ingress.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MacAccounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "egress")
    {
        egress.yfilter = yfilter;
    }
    if(value_path == "ingress")
    {
        ingress.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MacAccounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress" || name == "ingress")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::Macsec()
    :
    eap(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap>())
	,macsec_service(nullptr) // presence node
	,psk_key_chain(nullptr) // presence node
{
    eap->parent = this;

    yang_name = "macsec"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::~Macsec()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::has_data() const
{
    return (eap !=  nullptr && eap->has_data())
	|| (macsec_service !=  nullptr && macsec_service->has_data())
	|| (psk_key_chain !=  nullptr && psk_key_chain->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::has_operation() const
{
    return is_set(yfilter)
	|| (eap !=  nullptr && eap->has_operation())
	|| (macsec_service !=  nullptr && macsec_service->has_operation())
	|| (psk_key_chain !=  nullptr && psk_key_chain->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Macsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-macsec-mka-if-cfg:macsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Macsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Macsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap>();
        }
        return eap;
    }

    if(child_yang_name == "macsec-service")
    {
        if(macsec_service == nullptr)
        {
            macsec_service = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService>();
        }
        return macsec_service;
    }

    if(child_yang_name == "psk-key-chain")
    {
        if(psk_key_chain == nullptr)
        {
            psk_key_chain = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain>();
        }
        return psk_key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Macsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eap != nullptr)
    {
        children["eap"] = eap;
    }

    if(macsec_service != nullptr)
    {
        children["macsec-service"] = macsec_service;
    }

    if(psk_key_chain != nullptr)
    {
        children["psk-key-chain"] = psk_key_chain;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eap" || name == "macsec-service" || name == "psk-key-chain")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::Eap()
    :
    eap_config{YType::str, "eap-config"},
    policy_name{YType::str, "policy-name"}
{

    yang_name = "eap"; yang_parent_name = "macsec"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::~Eap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::has_data() const
{
    return eap_config.is_set
	|| policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eap_config.yfilter)
	|| ydk::is_set(policy_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eap_config.is_set || is_set(eap_config.yfilter)) leaf_name_data.push_back(eap_config.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eap-config")
    {
        eap_config = value;
        eap_config.value_namespace = name_space;
        eap_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eap-config")
    {
        eap_config.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eap-config" || name == "policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::MacsecService()
    :
    decrypt_port{YType::str, "decrypt-port"},
    key_chain{YType::str, "key-chain"},
    policy{YType::str, "policy"}
{

    yang_name = "macsec-service"; yang_parent_name = "macsec"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::~MacsecService()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::has_data() const
{
    return decrypt_port.is_set
	|| key_chain.is_set
	|| policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(decrypt_port.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (decrypt_port.is_set || is_set(decrypt_port.yfilter)) leaf_name_data.push_back(decrypt_port.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "decrypt-port")
    {
        decrypt_port = value;
        decrypt_port.value_namespace = name_space;
        decrypt_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "decrypt-port")
    {
        decrypt_port.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "decrypt-port" || name == "key-chain" || name == "policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::PskKeyChain()
    :
    fallback_key_chain{YType::str, "fallback-key-chain"},
    key_chain_name{YType::str, "key-chain-name"},
    policy_name{YType::str, "policy-name"}
{

    yang_name = "psk-key-chain"; yang_parent_name = "macsec"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::~PskKeyChain()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::has_data() const
{
    return fallback_key_chain.is_set
	|| key_chain_name.is_set
	|| policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fallback_key_chain.yfilter)
	|| ydk::is_set(key_chain_name.yfilter)
	|| ydk::is_set(policy_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psk-key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fallback_key_chain.is_set || is_set(fallback_key_chain.yfilter)) leaf_name_data.push_back(fallback_key_chain.get_name_leafdata());
    if (key_chain_name.is_set || is_set(key_chain_name.yfilter)) leaf_name_data.push_back(key_chain_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fallback-key-chain")
    {
        fallback_key_chain = value;
        fallback_key_chain.value_namespace = name_space;
        fallback_key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain-name")
    {
        key_chain_name = value;
        key_chain_name.value_namespace = name_space;
        key_chain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fallback-key-chain")
    {
        fallback_key_chain.yfilter = yfilter;
    }
    if(value_path == "key-chain-name")
    {
        key_chain_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fallback-key-chain" || name == "key-chain-name" || name == "policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Mlacp::Mlacp()
    :
    iccp_group{YType::uint32, "iccp-group"},
    port_priority{YType::uint16, "port-priority"},
    recovery_delay{YType::uint32, "recovery-delay"},
    switchover_type{YType::enumeration, "switchover-type"}
    	,
    maximize(nullptr) // presence node
{

    yang_name = "mlacp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Mlacp::~Mlacp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Mlacp::has_data() const
{
    return iccp_group.is_set
	|| port_priority.is_set
	|| recovery_delay.is_set
	|| switchover_type.is_set
	|| (maximize !=  nullptr && maximize->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Mlacp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group.yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| ydk::is_set(recovery_delay.yfilter)
	|| ydk::is_set(switchover_type.yfilter)
	|| (maximize !=  nullptr && maximize->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Mlacp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-cfg:mlacp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Mlacp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.yfilter)) leaf_name_data.push_back(iccp_group.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.yfilter)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (switchover_type.is_set || is_set(switchover_type.yfilter)) leaf_name_data.push_back(switchover_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Mlacp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximize")
    {
        if(maximize == nullptr)
        {
            maximize = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize>();
        }
        return maximize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Mlacp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maximize != nullptr)
    {
        children["maximize"] = maximize;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Mlacp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
        iccp_group.value_namespace = name_space;
        iccp_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
        recovery_delay.value_namespace = name_space;
        recovery_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-type")
    {
        switchover_type = value;
        switchover_type.value_namespace = name_space;
        switchover_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Mlacp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group")
    {
        iccp_group.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay.yfilter = yfilter;
    }
    if(value_path == "switchover-type")
    {
        switchover_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Mlacp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximize" || name == "iccp-group" || name == "port-priority" || name == "recovery-delay" || name == "switchover-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::Maximize()
    :
    bandwidth_threshold{YType::uint32, "bandwidth-threshold"},
    link_threshold{YType::uint32, "link-threshold"},
    maximize_by{YType::enumeration, "maximize-by"}
{

    yang_name = "maximize"; yang_parent_name = "mlacp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::~Maximize()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::has_data() const
{
    return bandwidth_threshold.is_set
	|| link_threshold.is_set
	|| maximize_by.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_threshold.yfilter)
	|| ydk::is_set(link_threshold.yfilter)
	|| ydk::is_set(maximize_by.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_threshold.is_set || is_set(bandwidth_threshold.yfilter)) leaf_name_data.push_back(bandwidth_threshold.get_name_leafdata());
    if (link_threshold.is_set || is_set(link_threshold.yfilter)) leaf_name_data.push_back(link_threshold.get_name_leafdata());
    if (maximize_by.is_set || is_set(maximize_by.yfilter)) leaf_name_data.push_back(maximize_by.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-threshold")
    {
        bandwidth_threshold = value;
        bandwidth_threshold.value_namespace = name_space;
        bandwidth_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-threshold")
    {
        link_threshold = value;
        link_threshold.value_namespace = name_space;
        link_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximize-by")
    {
        maximize_by = value;
        maximize_by.value_namespace = name_space;
        maximize_by.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-threshold")
    {
        bandwidth_threshold.yfilter = yfilter;
    }
    if(value_path == "link-threshold")
    {
        link_threshold.yfilter = yfilter;
    }
    if(value_path == "maximize-by")
    {
        maximize_by.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-threshold" || name == "link-threshold" || name == "maximize-by")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Mpls::Mpls()
    :
    mtu{YType::uint32, "mtu"}
    	,
    label_security(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity>())
{
    label_security->parent = this;

    yang_name = "mpls"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Mpls::~Mpls()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Mpls::has_data() const
{
    return mtu.is_set
	|| (label_security !=  nullptr && label_security->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| (label_security !=  nullptr && label_security->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-io-cfg:mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-security")
    {
        if(label_security == nullptr)
        {
            label_security = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity>();
        }
        return label_security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(label_security != nullptr)
    {
        children["label-security"] = label_security;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-security" || name == "mtu")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::LabelSecurity()
    :
    multi_label_drop{YType::empty, "multi-label-drop"},
    rpf{YType::empty, "rpf"}
{

    yang_name = "label-security"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::~LabelSecurity()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::has_data() const
{
    return multi_label_drop.is_set
	|| rpf.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multi_label_drop.yfilter)
	|| ydk::is_set(rpf.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multi_label_drop.is_set || is_set(multi_label_drop.yfilter)) leaf_name_data.push_back(multi_label_drop.get_name_leafdata());
    if (rpf.is_set || is_set(rpf.yfilter)) leaf_name_data.push_back(rpf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multi-label-drop")
    {
        multi_label_drop = value;
        multi_label_drop.value_namespace = name_space;
        multi_label_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf")
    {
        rpf = value;
        rpf.value_namespace = name_space;
        rpf.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multi-label-drop")
    {
        multi_label_drop.yfilter = yfilter;
    }
    if(value_path == "rpf")
    {
        rpf.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multi-label-drop" || name == "rpf")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::MteTunnelAttributes()
    :
    fast_reroute{YType::empty, "fast-reroute"},
    impose_explicit_null{YType::empty, "impose-explicit-null"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    record_route{YType::empty, "record-route"},
    signalled_name{YType::str, "signalled-name"},
    signalled_payload{YType::str, "signalled-payload"}
    	,
    affinity_mask(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask>())
	,bandwidth(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth>())
	,destination_leafs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs>())
	,logging(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging>())
	,new_style_affinities(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities>())
	,priority(nullptr) // presence node
{
    affinity_mask->parent = this;
    bandwidth->parent = this;
    destination_leafs->parent = this;
    logging->parent = this;
    new_style_affinities->parent = this;

    yang_name = "mte-tunnel-attributes"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::~MteTunnelAttributes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::has_data() const
{
    return fast_reroute.is_set
	|| impose_explicit_null.is_set
	|| path_selection_metric.is_set
	|| record_route.is_set
	|| signalled_name.is_set
	|| signalled_payload.is_set
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (destination_leafs !=  nullptr && destination_leafs->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (new_style_affinities !=  nullptr && new_style_affinities->has_data())
	|| (priority !=  nullptr && priority->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute.yfilter)
	|| ydk::is_set(impose_explicit_null.yfilter)
	|| ydk::is_set(path_selection_metric.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| ydk::is_set(signalled_name.yfilter)
	|| ydk::is_set(signalled_payload.yfilter)
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (destination_leafs !=  nullptr && destination_leafs->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (new_style_affinities !=  nullptr && new_style_affinities->has_operation())
	|| (priority !=  nullptr && priority->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mte-tunnel-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute.is_set || is_set(fast_reroute.yfilter)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (impose_explicit_null.is_set || is_set(impose_explicit_null.yfilter)) leaf_name_data.push_back(impose_explicit_null.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.yfilter)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (signalled_name.is_set || is_set(signalled_name.yfilter)) leaf_name_data.push_back(signalled_name.get_name_leafdata());
    if (signalled_payload.is_set || is_set(signalled_payload.yfilter)) leaf_name_data.push_back(signalled_payload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask == nullptr)
        {
            affinity_mask = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask>();
        }
        return affinity_mask;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "destination-leafs")
    {
        if(destination_leafs == nullptr)
        {
            destination_leafs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs>();
        }
        return destination_leafs;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "new-style-affinities")
    {
        if(new_style_affinities == nullptr)
        {
            new_style_affinities = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities>();
        }
        return new_style_affinities;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity_mask != nullptr)
    {
        children["affinity-mask"] = affinity_mask;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(destination_leafs != nullptr)
    {
        children["destination-leafs"] = destination_leafs;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(new_style_affinities != nullptr)
    {
        children["new-style-affinities"] = new_style_affinities;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
        fast_reroute.value_namespace = name_space;
        fast_reroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "impose-explicit-null")
    {
        impose_explicit_null = value;
        impose_explicit_null.value_namespace = name_space;
        impose_explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
        path_selection_metric.value_namespace = name_space;
        path_selection_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalled-name")
    {
        signalled_name = value;
        signalled_name.value_namespace = name_space;
        signalled_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalled-payload")
    {
        signalled_payload = value;
        signalled_payload.value_namespace = name_space;
        signalled_payload.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute")
    {
        fast_reroute.yfilter = yfilter;
    }
    if(value_path == "impose-explicit-null")
    {
        impose_explicit_null.yfilter = yfilter;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
    if(value_path == "signalled-name")
    {
        signalled_name.yfilter = yfilter;
    }
    if(value_path == "signalled-payload")
    {
        signalled_payload.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-mask" || name == "bandwidth" || name == "destination-leafs" || name == "logging" || name == "new-style-affinities" || name == "priority" || name == "fast-reroute" || name == "impose-explicit-null" || name == "path-selection-metric" || name == "record-route" || name == "signalled-name" || name == "signalled-payload")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{

    yang_name = "affinity-mask"; yang_parent_name = "mte-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::~AffinityMask()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::has_data() const
{
    return affinity.is_set
	|| mask.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "mask")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    class_or_pool_type{YType::uint32, "class-or-pool-type"},
    dste_type{YType::enumeration, "dste-type"}
{

    yang_name = "bandwidth"; yang_parent_name = "mte-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::~Bandwidth()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::has_data() const
{
    return bandwidth.is_set
	|| class_or_pool_type.is_set
	|| dste_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(class_or_pool_type.yfilter)
	|| ydk::is_set(dste_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (class_or_pool_type.is_set || is_set(class_or_pool_type.yfilter)) leaf_name_data.push_back(class_or_pool_type.get_name_leafdata());
    if (dste_type.is_set || is_set(dste_type.yfilter)) leaf_name_data.push_back(dste_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type = value;
        class_or_pool_type.value_namespace = name_space;
        class_or_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-type")
    {
        dste_type = value;
        dste_type.value_namespace = name_space;
        dste_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type.yfilter = yfilter;
    }
    if(value_path == "dste-type")
    {
        dste_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "class-or-pool-type" || name == "dste-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeafs()
{

    yang_name = "destination-leafs"; yang_parent_name = "mte-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::~DestinationLeafs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::has_data() const
{
    for (std::size_t index=0; index<destination_leaf.size(); index++)
    {
        if(destination_leaf[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::has_operation() const
{
    for (std::size_t index=0; index<destination_leaf.size(); index++)
    {
        if(destination_leaf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-leafs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-leaf")
    {
        for(auto const & c : destination_leaf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf>();
        c->parent = this;
        destination_leaf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : destination_leaf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-leaf")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::DestinationLeaf()
    :
    address{YType::str, "address"},
    destination{YType::empty, "destination"},
    destination_disable{YType::empty, "destination-disable"}
    	,
    path_options(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions>())
	,s2l_logging(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging>())
{
    path_options->parent = this;
    s2l_logging->parent = this;

    yang_name = "destination-leaf"; yang_parent_name = "destination-leafs"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::~DestinationLeaf()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::has_data() const
{
    return address.is_set
	|| destination.is_set
	|| destination_disable.is_set
	|| (path_options !=  nullptr && path_options->has_data())
	|| (s2l_logging !=  nullptr && s2l_logging->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(destination_disable.yfilter)
	|| (path_options !=  nullptr && path_options->has_operation())
	|| (s2l_logging !=  nullptr && s2l_logging->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-leaf" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (destination_disable.is_set || is_set(destination_disable.yfilter)) leaf_name_data.push_back(destination_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-options")
    {
        if(path_options == nullptr)
        {
            path_options = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions>();
        }
        return path_options;
    }

    if(child_yang_name == "s2l-logging")
    {
        if(s2l_logging == nullptr)
        {
            s2l_logging = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging>();
        }
        return s2l_logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_options != nullptr)
    {
        children["path-options"] = path_options;
    }

    if(s2l_logging != nullptr)
    {
        children["s2l-logging"] = s2l_logging;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-disable")
    {
        destination_disable = value;
        destination_disable.value_namespace = name_space;
        destination_disable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "destination-disable")
    {
        destination_disable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-options" || name == "s2l-logging" || name == "address" || name == "destination" || name == "destination-disable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOptions()
{

    yang_name = "path-options"; yang_parent_name = "destination-leaf"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::~PathOptions()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::has_data() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::has_operation() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option")
    {
        for(auto const & c : path_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption>();
        c->parent = this;
        path_option.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_option)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::PathOption()
    :
    preference_level{YType::uint32, "preference-level"},
    lockdown{YType::enumeration, "lockdown"},
    path_id{YType::uint32, "path-id"},
    path_name{YType::str, "path-name"},
    path_type{YType::enumeration, "path-type"},
    verbatim{YType::enumeration, "verbatim"}
{

    yang_name = "path-option"; yang_parent_name = "path-options"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::~PathOption()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::has_data() const
{
    return preference_level.is_set
	|| lockdown.is_set
	|| path_id.is_set
	|| path_name.is_set
	|| path_type.is_set
	|| verbatim.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preference_level.yfilter)
	|| ydk::is_set(lockdown.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_name.yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(verbatim.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option" <<"[preference-level='" <<preference_level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preference_level.is_set || is_set(preference_level.yfilter)) leaf_name_data.push_back(preference_level.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.yfilter)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_name.is_set || is_set(path_name.yfilter)) leaf_name_data.push_back(path_name.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preference-level")
    {
        preference_level = value;
        preference_level.value_namespace = name_space;
        preference_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
        lockdown.value_namespace = name_space;
        lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-name")
    {
        path_name = value;
        path_name.value_namespace = name_space;
        path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preference-level")
    {
        preference_level.yfilter = yfilter;
    }
    if(value_path == "lockdown")
    {
        lockdown.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "path-name")
    {
        path_name.yfilter = yfilter;
    }
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preference-level" || name == "lockdown" || name == "path-id" || name == "path-name" || name == "path-type" || name == "verbatim")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::S2LLogging()
    :
    s2l_insufficient_bw_messsage{YType::empty, "s2l-insufficient-bw-messsage"},
    s2l_pcalc_failure_message{YType::empty, "s2l-pcalc-failure-message"},
    s2l_reroute_messsage{YType::empty, "s2l-reroute-messsage"},
    s2l_state_message{YType::empty, "s2l-state-message"}
{

    yang_name = "s2l-logging"; yang_parent_name = "destination-leaf"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::~S2LLogging()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::has_data() const
{
    return s2l_insufficient_bw_messsage.is_set
	|| s2l_pcalc_failure_message.is_set
	|| s2l_reroute_messsage.is_set
	|| s2l_state_message.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_insufficient_bw_messsage.yfilter)
	|| ydk::is_set(s2l_pcalc_failure_message.yfilter)
	|| ydk::is_set(s2l_reroute_messsage.yfilter)
	|| ydk::is_set(s2l_state_message.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_insufficient_bw_messsage.is_set || is_set(s2l_insufficient_bw_messsage.yfilter)) leaf_name_data.push_back(s2l_insufficient_bw_messsage.get_name_leafdata());
    if (s2l_pcalc_failure_message.is_set || is_set(s2l_pcalc_failure_message.yfilter)) leaf_name_data.push_back(s2l_pcalc_failure_message.get_name_leafdata());
    if (s2l_reroute_messsage.is_set || is_set(s2l_reroute_messsage.yfilter)) leaf_name_data.push_back(s2l_reroute_messsage.get_name_leafdata());
    if (s2l_state_message.is_set || is_set(s2l_state_message.yfilter)) leaf_name_data.push_back(s2l_state_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-insufficient-bw-messsage")
    {
        s2l_insufficient_bw_messsage = value;
        s2l_insufficient_bw_messsage.value_namespace = name_space;
        s2l_insufficient_bw_messsage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-pcalc-failure-message")
    {
        s2l_pcalc_failure_message = value;
        s2l_pcalc_failure_message.value_namespace = name_space;
        s2l_pcalc_failure_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-reroute-messsage")
    {
        s2l_reroute_messsage = value;
        s2l_reroute_messsage.value_namespace = name_space;
        s2l_reroute_messsage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-state-message")
    {
        s2l_state_message = value;
        s2l_state_message.value_namespace = name_space;
        s2l_state_message.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-insufficient-bw-messsage")
    {
        s2l_insufficient_bw_messsage.yfilter = yfilter;
    }
    if(value_path == "s2l-pcalc-failure-message")
    {
        s2l_pcalc_failure_message.yfilter = yfilter;
    }
    if(value_path == "s2l-reroute-messsage")
    {
        s2l_reroute_messsage.yfilter = yfilter;
    }
    if(value_path == "s2l-state-message")
    {
        s2l_state_message.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2LLogging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-insufficient-bw-messsage" || name == "s2l-pcalc-failure-message" || name == "s2l-reroute-messsage" || name == "s2l-state-message")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::Logging()
    :
    all{YType::empty, "all"},
    bandwidth_change_message{YType::empty, "bandwidth-change-message"},
    insufficient_bw_message{YType::empty, "insufficient-bw-message"},
    pcalc_failure_message{YType::empty, "pcalc-failure-message"},
    reoptimize_attempts_message{YType::empty, "reoptimize-attempts-message"},
    reoptimized_message{YType::empty, "reoptimized-message"},
    reroute_messsage{YType::empty, "reroute-messsage"},
    state_message{YType::empty, "state-message"},
    sub_lsp_state_message{YType::empty, "sub-lsp-state-message"}
{

    yang_name = "logging"; yang_parent_name = "mte-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::~Logging()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::has_data() const
{
    return all.is_set
	|| bandwidth_change_message.is_set
	|| insufficient_bw_message.is_set
	|| pcalc_failure_message.is_set
	|| reoptimize_attempts_message.is_set
	|| reoptimized_message.is_set
	|| reroute_messsage.is_set
	|| state_message.is_set
	|| sub_lsp_state_message.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(bandwidth_change_message.yfilter)
	|| ydk::is_set(insufficient_bw_message.yfilter)
	|| ydk::is_set(pcalc_failure_message.yfilter)
	|| ydk::is_set(reoptimize_attempts_message.yfilter)
	|| ydk::is_set(reoptimized_message.yfilter)
	|| ydk::is_set(reroute_messsage.yfilter)
	|| ydk::is_set(state_message.yfilter)
	|| ydk::is_set(sub_lsp_state_message.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (bandwidth_change_message.is_set || is_set(bandwidth_change_message.yfilter)) leaf_name_data.push_back(bandwidth_change_message.get_name_leafdata());
    if (insufficient_bw_message.is_set || is_set(insufficient_bw_message.yfilter)) leaf_name_data.push_back(insufficient_bw_message.get_name_leafdata());
    if (pcalc_failure_message.is_set || is_set(pcalc_failure_message.yfilter)) leaf_name_data.push_back(pcalc_failure_message.get_name_leafdata());
    if (reoptimize_attempts_message.is_set || is_set(reoptimize_attempts_message.yfilter)) leaf_name_data.push_back(reoptimize_attempts_message.get_name_leafdata());
    if (reoptimized_message.is_set || is_set(reoptimized_message.yfilter)) leaf_name_data.push_back(reoptimized_message.get_name_leafdata());
    if (reroute_messsage.is_set || is_set(reroute_messsage.yfilter)) leaf_name_data.push_back(reroute_messsage.get_name_leafdata());
    if (state_message.is_set || is_set(state_message.yfilter)) leaf_name_data.push_back(state_message.get_name_leafdata());
    if (sub_lsp_state_message.is_set || is_set(sub_lsp_state_message.yfilter)) leaf_name_data.push_back(sub_lsp_state_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message = value;
        bandwidth_change_message.value_namespace = name_space;
        bandwidth_change_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message = value;
        insufficient_bw_message.value_namespace = name_space;
        insufficient_bw_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message = value;
        pcalc_failure_message.value_namespace = name_space;
        pcalc_failure_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message = value;
        reoptimize_attempts_message.value_namespace = name_space;
        reoptimize_attempts_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message = value;
        reoptimized_message.value_namespace = name_space;
        reoptimized_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage = value;
        reroute_messsage.value_namespace = name_space;
        reroute_messsage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-message")
    {
        state_message = value;
        state_message.value_namespace = name_space;
        state_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-lsp-state-message")
    {
        sub_lsp_state_message = value;
        sub_lsp_state_message.value_namespace = name_space;
        sub_lsp_state_message.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message.yfilter = yfilter;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message.yfilter = yfilter;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message.yfilter = yfilter;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message.yfilter = yfilter;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message.yfilter = yfilter;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage.yfilter = yfilter;
    }
    if(value_path == "state-message")
    {
        state_message.yfilter = yfilter;
    }
    if(value_path == "sub-lsp-state-message")
    {
        sub_lsp_state_message.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "bandwidth-change-message" || name == "insufficient-bw-message" || name == "pcalc-failure-message" || name == "reoptimize-attempts-message" || name == "reoptimized-message" || name == "reroute-messsage" || name == "state-message" || name == "sub-lsp-state-message")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinities()
{

    yang_name = "new-style-affinities"; yang_parent_name = "mte-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::~NewStyleAffinities()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::has_data() const
{
    for (std::size_t index=0; index<new_style_affinity.size(); index++)
    {
        if(new_style_affinity[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::has_operation() const
{
    for (std::size_t index=0; index<new_style_affinity.size(); index++)
    {
        if(new_style_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "new-style-affinity")
    {
        for(auto const & c : new_style_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity>();
        c->parent = this;
        new_style_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : new_style_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "new-style-affinity")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::NewStyleAffinity()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity10{YType::str, "affinity10"}
{

    yang_name = "new-style-affinity"; yang_parent_name = "new-style-affinities"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::~NewStyleAffinity()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::has_data() const
{
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity10.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter)
	|| ydk::is_set(affinity10.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity" <<"[affinity-type='" <<affinity_type <<"']" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity10='" <<affinity10 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity10.is_set || is_set(affinity10.yfilter)) leaf_name_data.push_back(affinity10.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity10")
    {
        affinity10 = value;
        affinity10.value_namespace = name_space;
        affinity10.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
    if(value_path == "affinity10")
    {
        affinity10.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9" || name == "affinity10")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::Priority()
    :
    hold_priority{YType::uint32, "hold-priority"},
    setup_priority{YType::uint32, "setup-priority"}
{

    yang_name = "priority"; yang_parent_name = "mte-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::~Priority()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::has_data() const
{
    return hold_priority.is_set
	|| setup_priority.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(setup_priority.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-priority" || name == "setup-priority")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtus()
{

    yang_name = "mtus"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Mtus::~Mtus()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Mtus::has_data() const
{
    for (std::size_t index=0; index<mtu.size(); index++)
    {
        if(mtu[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Mtus::has_operation() const
{
    for (std::size_t index=0; index<mtu.size(); index++)
    {
        if(mtu[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Mtus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtus";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Mtus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Mtus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mtu")
    {
        for(auto const & c : mtu)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu>();
        c->parent = this;
        mtu.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Mtus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mtu)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Mtus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Mtus::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Mtus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mtu")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::Mtu()
    :
    owner{YType::str, "owner"},
    mtu{YType::uint32, "mtu"}
{

    yang_name = "mtu"; yang_parent_name = "mtus"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::~Mtu()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::has_data() const
{
    return owner.is_set
	|| mtu.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu" <<"[owner='" <<owner <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Mtus::Mtu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "owner" || name == "mtu")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::NetFlow()
    :
    data_link_frame_section(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection>())
	,ipv4(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4>())
	,ipv6(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6>())
	,mpls(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls>())
{
    data_link_frame_section->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;
    mpls->parent = this;

    yang_name = "net-flow"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::~NetFlow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::has_data() const
{
    return (data_link_frame_section !=  nullptr && data_link_frame_section->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (mpls !=  nullptr && mpls->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::has_operation() const
{
    return is_set(yfilter)
	|| (data_link_frame_section !=  nullptr && data_link_frame_section->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-link-frame-section")
    {
        if(data_link_frame_section == nullptr)
        {
            data_link_frame_section = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection>();
        }
        return data_link_frame_section;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls>();
        }
        return mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data_link_frame_section != nullptr)
    {
        children["data-link-frame-section"] = data_link_frame_section;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-link-frame-section" || name == "ipv4" || name == "ipv6" || name == "mpls")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::DataLinkFrameSection()
    :
    flow_monitor_map(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap>())
{
    flow_monitor_map->parent = this;

    yang_name = "data-link-frame-section"; yang_parent_name = "net-flow"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::~DataLinkFrameSection()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::has_data() const
{
    return (flow_monitor_map !=  nullptr && flow_monitor_map->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::has_operation() const
{
    return is_set(yfilter)
	|| (flow_monitor_map !=  nullptr && flow_monitor_map->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-link-frame-section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-map")
    {
        if(flow_monitor_map == nullptr)
        {
            flow_monitor_map = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap>();
        }
        return flow_monitor_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_monitor_map != nullptr)
    {
        children["flow-monitor-map"] = flow_monitor_map;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-map")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::FlowMonitorMap()
    :
    egress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress>())
	,ingress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress>())
{
    egress->parent = this;
    ingress->parent = this;

    yang_name = "flow-monitor-map"; yang_parent_name = "data-link-frame-section"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::~FlowMonitorMap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::has_data() const
{
    return (egress !=  nullptr && egress->has_data())
	|| (ingress !=  nullptr && ingress->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::has_operation() const
{
    return is_set(yfilter)
	|| (egress !=  nullptr && egress->has_operation())
	|| (ingress !=  nullptr && ingress->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "egress")
    {
        if(egress == nullptr)
        {
            egress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress>();
        }
        return egress;
    }

    if(child_yang_name == "ingress")
    {
        if(ingress == nullptr)
        {
            ingress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress>();
        }
        return ingress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(egress != nullptr)
    {
        children["egress"] = egress;
    }

    if(ingress != nullptr)
    {
        children["ingress"] = ingress;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress" || name == "ingress")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::Egress()
{

    yang_name = "egress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::~Egress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-name")
    {
        for(auto const & c : flow_monitor_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow_monitor_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{

    yang_name = "flow-monitor-name"; yang_parent_name = "egress"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::has_data() const
{
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_map_name.yfilter)
	|| ydk::is_set(sampler_map_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name" <<"[monitor-map-name='" <<monitor_map_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.yfilter)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.yfilter)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
        monitor_map_name.value_namespace = name_space;
        monitor_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
        sampler_map_name.value_namespace = name_space;
        sampler_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name.yfilter = yfilter;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-map-name" || name == "sampler-map-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::Ingress()
{

    yang_name = "ingress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::~Ingress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-name")
    {
        for(auto const & c : flow_monitor_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow_monitor_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{

    yang_name = "flow-monitor-name"; yang_parent_name = "ingress"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::has_data() const
{
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_map_name.yfilter)
	|| ydk::is_set(sampler_map_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name" <<"[monitor-map-name='" <<monitor_map_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.yfilter)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.yfilter)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
        monitor_map_name.value_namespace = name_space;
        monitor_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
        sampler_map_name.value_namespace = name_space;
        sampler_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name.yfilter = yfilter;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-map-name" || name == "sampler-map-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::Ipv4()
    :
    flow_monitor_map(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap>())
{
    flow_monitor_map->parent = this;

    yang_name = "ipv4"; yang_parent_name = "net-flow"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::~Ipv4()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::has_data() const
{
    return (flow_monitor_map !=  nullptr && flow_monitor_map->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (flow_monitor_map !=  nullptr && flow_monitor_map->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-map")
    {
        if(flow_monitor_map == nullptr)
        {
            flow_monitor_map = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap>();
        }
        return flow_monitor_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_monitor_map != nullptr)
    {
        children["flow-monitor-map"] = flow_monitor_map;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-map")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::FlowMonitorMap()
    :
    egress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress>())
	,ingress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress>())
{
    egress->parent = this;
    ingress->parent = this;

    yang_name = "flow-monitor-map"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::~FlowMonitorMap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::has_data() const
{
    return (egress !=  nullptr && egress->has_data())
	|| (ingress !=  nullptr && ingress->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::has_operation() const
{
    return is_set(yfilter)
	|| (egress !=  nullptr && egress->has_operation())
	|| (ingress !=  nullptr && ingress->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "egress")
    {
        if(egress == nullptr)
        {
            egress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress>();
        }
        return egress;
    }

    if(child_yang_name == "ingress")
    {
        if(ingress == nullptr)
        {
            ingress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress>();
        }
        return ingress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(egress != nullptr)
    {
        children["egress"] = egress;
    }

    if(ingress != nullptr)
    {
        children["ingress"] = ingress;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress" || name == "ingress")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::Egress()
{

    yang_name = "egress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::~Egress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-name")
    {
        for(auto const & c : flow_monitor_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow_monitor_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{

    yang_name = "flow-monitor-name"; yang_parent_name = "egress"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::has_data() const
{
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_map_name.yfilter)
	|| ydk::is_set(sampler_map_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name" <<"[monitor-map-name='" <<monitor_map_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.yfilter)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.yfilter)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
        monitor_map_name.value_namespace = name_space;
        monitor_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
        sampler_map_name.value_namespace = name_space;
        sampler_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name.yfilter = yfilter;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-map-name" || name == "sampler-map-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::Ingress()
{

    yang_name = "ingress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::~Ingress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-name")
    {
        for(auto const & c : flow_monitor_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow_monitor_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{

    yang_name = "flow-monitor-name"; yang_parent_name = "ingress"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::has_data() const
{
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_map_name.yfilter)
	|| ydk::is_set(sampler_map_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name" <<"[monitor-map-name='" <<monitor_map_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.yfilter)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.yfilter)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
        monitor_map_name.value_namespace = name_space;
        monitor_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
        sampler_map_name.value_namespace = name_space;
        sampler_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name.yfilter = yfilter;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-map-name" || name == "sampler-map-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::Ipv6()
    :
    flow_monitor_map(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap>())
{
    flow_monitor_map->parent = this;

    yang_name = "ipv6"; yang_parent_name = "net-flow"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::~Ipv6()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::has_data() const
{
    return (flow_monitor_map !=  nullptr && flow_monitor_map->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (flow_monitor_map !=  nullptr && flow_monitor_map->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-map")
    {
        if(flow_monitor_map == nullptr)
        {
            flow_monitor_map = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap>();
        }
        return flow_monitor_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_monitor_map != nullptr)
    {
        children["flow-monitor-map"] = flow_monitor_map;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-map")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::FlowMonitorMap()
    :
    egress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress>())
	,ingress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress>())
{
    egress->parent = this;
    ingress->parent = this;

    yang_name = "flow-monitor-map"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::~FlowMonitorMap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::has_data() const
{
    return (egress !=  nullptr && egress->has_data())
	|| (ingress !=  nullptr && ingress->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::has_operation() const
{
    return is_set(yfilter)
	|| (egress !=  nullptr && egress->has_operation())
	|| (ingress !=  nullptr && ingress->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "egress")
    {
        if(egress == nullptr)
        {
            egress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress>();
        }
        return egress;
    }

    if(child_yang_name == "ingress")
    {
        if(ingress == nullptr)
        {
            ingress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress>();
        }
        return ingress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(egress != nullptr)
    {
        children["egress"] = egress;
    }

    if(ingress != nullptr)
    {
        children["ingress"] = ingress;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress" || name == "ingress")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::Egress()
{

    yang_name = "egress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::~Egress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-name")
    {
        for(auto const & c : flow_monitor_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow_monitor_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{

    yang_name = "flow-monitor-name"; yang_parent_name = "egress"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::has_data() const
{
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_map_name.yfilter)
	|| ydk::is_set(sampler_map_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name" <<"[monitor-map-name='" <<monitor_map_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.yfilter)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.yfilter)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
        monitor_map_name.value_namespace = name_space;
        monitor_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
        sampler_map_name.value_namespace = name_space;
        sampler_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name.yfilter = yfilter;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-map-name" || name == "sampler-map-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::Ingress()
{

    yang_name = "ingress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::~Ingress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-name")
    {
        for(auto const & c : flow_monitor_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow_monitor_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{

    yang_name = "flow-monitor-name"; yang_parent_name = "ingress"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::has_data() const
{
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_map_name.yfilter)
	|| ydk::is_set(sampler_map_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name" <<"[monitor-map-name='" <<monitor_map_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.yfilter)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.yfilter)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
        monitor_map_name.value_namespace = name_space;
        monitor_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
        sampler_map_name.value_namespace = name_space;
        sampler_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name.yfilter = yfilter;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-map-name" || name == "sampler-map-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::Mpls()
    :
    flow_monitor_map(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap>())
{
    flow_monitor_map->parent = this;

    yang_name = "mpls"; yang_parent_name = "net-flow"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::~Mpls()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::has_data() const
{
    return (flow_monitor_map !=  nullptr && flow_monitor_map->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (flow_monitor_map !=  nullptr && flow_monitor_map->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-map")
    {
        if(flow_monitor_map == nullptr)
        {
            flow_monitor_map = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap>();
        }
        return flow_monitor_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_monitor_map != nullptr)
    {
        children["flow-monitor-map"] = flow_monitor_map;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-map")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::FlowMonitorMap()
    :
    egress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress>())
	,ingress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress>())
{
    egress->parent = this;
    ingress->parent = this;

    yang_name = "flow-monitor-map"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::~FlowMonitorMap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::has_data() const
{
    return (egress !=  nullptr && egress->has_data())
	|| (ingress !=  nullptr && ingress->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::has_operation() const
{
    return is_set(yfilter)
	|| (egress !=  nullptr && egress->has_operation())
	|| (ingress !=  nullptr && ingress->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "egress")
    {
        if(egress == nullptr)
        {
            egress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress>();
        }
        return egress;
    }

    if(child_yang_name == "ingress")
    {
        if(ingress == nullptr)
        {
            ingress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress>();
        }
        return ingress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(egress != nullptr)
    {
        children["egress"] = egress;
    }

    if(ingress != nullptr)
    {
        children["ingress"] = ingress;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress" || name == "ingress")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::Egress()
{

    yang_name = "egress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::~Egress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-name")
    {
        for(auto const & c : flow_monitor_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow_monitor_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{

    yang_name = "flow-monitor-name"; yang_parent_name = "egress"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::has_data() const
{
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_map_name.yfilter)
	|| ydk::is_set(sampler_map_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name" <<"[monitor-map-name='" <<monitor_map_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.yfilter)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.yfilter)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
        monitor_map_name.value_namespace = name_space;
        monitor_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
        sampler_map_name.value_namespace = name_space;
        sampler_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name.yfilter = yfilter;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-map-name" || name == "sampler-map-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::Ingress()
{

    yang_name = "ingress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::~Ingress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::has_data() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.size(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-name")
    {
        for(auto const & c : flow_monitor_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName>();
        c->parent = this;
        flow_monitor_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flow_monitor_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{

    yang_name = "flow-monitor-name"; yang_parent_name = "ingress"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::has_data() const
{
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_map_name.yfilter)
	|| ydk::is_set(sampler_map_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name" <<"[monitor-map-name='" <<monitor_map_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.yfilter)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.yfilter)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
        monitor_map_name.value_namespace = name_space;
        monitor_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
        sampler_map_name.value_namespace = name_space;
        sampler_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name.yfilter = yfilter;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-map-name" || name == "sampler-map-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::NvSatelliteAccess()
    :
    qos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos>())
{
    qos->parent = this;

    yang_name = "nv-satellite-access"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::~NvSatelliteAccess()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::has_data() const
{
    return (qos !=  nullptr && qos->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::has_operation() const
{
    return is_set(yfilter)
	|| (qos !=  nullptr && qos->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Qos()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input>())
	,output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "qos"; yang_parent_name = "nv-satellite-access"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::~Qos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-sat-cfg:qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::Input()
{

    yang_name = "input"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{

    yang_name = "service-policy"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::Output()
{

    yang_name = "output"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{

    yang_name = "service-policy"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::NvSatelliteFabricLink()
    :
    minimum_required_links{YType::uint32, "minimum-required-links"},
    satellite{YType::uint32, "satellite"}
    	,
    ethernet_features(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures>())
	,frequency_synchronization(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization>())
	,qos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos>())
	,redundancy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy>())
	,remote_ports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts>())
{
    ethernet_features->parent = this;
    frequency_synchronization->parent = this;
    qos->parent = this;
    redundancy->parent = this;
    remote_ports->parent = this;

    yang_name = "nv-satellite-fabric-link"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::~NvSatelliteFabricLink()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::has_data() const
{
    return minimum_required_links.is_set
	|| satellite.is_set
	|| (ethernet_features !=  nullptr && ethernet_features->has_data())
	|| (frequency_synchronization !=  nullptr && frequency_synchronization->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (remote_ports !=  nullptr && remote_ports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_required_links.yfilter)
	|| ydk::is_set(satellite.yfilter)
	|| (ethernet_features !=  nullptr && ethernet_features->has_operation())
	|| (frequency_synchronization !=  nullptr && frequency_synchronization->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (remote_ports !=  nullptr && remote_ports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-fabric-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_required_links.is_set || is_set(minimum_required_links.yfilter)) leaf_name_data.push_back(minimum_required_links.get_name_leafdata());
    if (satellite.is_set || is_set(satellite.yfilter)) leaf_name_data.push_back(satellite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-features")
    {
        if(ethernet_features == nullptr)
        {
            ethernet_features = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures>();
        }
        return ethernet_features;
    }

    if(child_yang_name == "frequency-synchronization")
    {
        if(frequency_synchronization == nullptr)
        {
            frequency_synchronization = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization>();
        }
        return frequency_synchronization;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "remote-ports")
    {
        if(remote_ports == nullptr)
        {
            remote_ports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts>();
        }
        return remote_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet_features != nullptr)
    {
        children["ethernet-features"] = ethernet_features;
    }

    if(frequency_synchronization != nullptr)
    {
        children["frequency-synchronization"] = frequency_synchronization;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    if(remote_ports != nullptr)
    {
        children["remote-ports"] = remote_ports;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-required-links")
    {
        minimum_required_links = value;
        minimum_required_links.value_namespace = name_space;
        minimum_required_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "satellite")
    {
        satellite = value;
        satellite.value_namespace = name_space;
        satellite.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-required-links")
    {
        minimum_required_links.yfilter = yfilter;
    }
    if(value_path == "satellite")
    {
        satellite.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-features" || name == "frequency-synchronization" || name == "qos" || name == "redundancy" || name == "remote-ports" || name == "minimum-required-links" || name == "satellite")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::EthernetFeatures()
    :
    cfm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm>())
{
    cfm->parent = this;

    yang_name = "ethernet-features"; yang_parent_name = "nv-satellite-fabric-link"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::~EthernetFeatures()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::has_data() const
{
    return (cfm !=  nullptr && cfm->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::has_operation() const
{
    return is_set(yfilter)
	|| (cfm !=  nullptr && cfm->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-cfm-sat-cfg:ethernet-features";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm>();
        }
        return cfm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cfm != nullptr)
    {
        children["cfm"] = cfm;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfm")
        return true;
    return false;
}


}
}

