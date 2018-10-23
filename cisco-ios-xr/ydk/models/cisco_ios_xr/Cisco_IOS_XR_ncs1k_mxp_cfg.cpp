
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ncs1k_mxp_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs1k_mxp_cfg {

HardwareModule::HardwareModule()
    :
    node(this, {"location"})
{

    yang_name = "hardware-module"; yang_parent_name = "Cisco-IOS-XR-ncs1k-mxp-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

HardwareModule::~HardwareModule()
{
}

bool HardwareModule::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool HardwareModule::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HardwareModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1k-mxp-cfg:hardware-module";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<HardwareModule::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void HardwareModule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HardwareModule::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> HardwareModule::clone_ptr() const
{
    return std::make_shared<HardwareModule>();
}

std::string HardwareModule::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HardwareModule::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HardwareModule::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> HardwareModule::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool HardwareModule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

HardwareModule::Node::Node()
    :
    location{YType::str, "location"}
        ,
    slice(this, {"slice_id"})
{

    yang_name = "node"; yang_parent_name = "hardware-module"; is_top_level_class = false; has_list_ancestor = false; 
}

HardwareModule::Node::~Node()
{
}

bool HardwareModule::Node::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<slice.len(); index++)
    {
        if(slice[index]->has_data())
            return true;
    }
    return location.is_set;
}

bool HardwareModule::Node::has_operation() const
{
    for (std::size_t index=0; index<slice.len(); index++)
    {
        if(slice[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string HardwareModule::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1k-mxp-cfg:hardware-module/" << get_segment_path();
    return path_buffer.str();
}

std::string HardwareModule::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModule::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slice")
    {
        auto ent_ = std::make_shared<HardwareModule::Node::Slice>();
        ent_->parent = this;
        slice.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModule::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : slice.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void HardwareModule::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModule::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool HardwareModule::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slice" || name == "location")
        return true;
    return false;
}

HardwareModule::Node::Slice::Slice()
    :
    slice_id{YType::str, "slice-id"},
    lldp{YType::boolean, "lldp"}
        ,
    values(std::make_shared<HardwareModule::Node::Slice::Values>())
    , client_ains(std::make_shared<HardwareModule::Node::Slice::ClientAins>())
{
    values->parent = this;
    client_ains->parent = this;

    yang_name = "slice"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModule::Node::Slice::~Slice()
{
}

bool HardwareModule::Node::Slice::has_data() const
{
    if (is_presence_container) return true;
    return slice_id.is_set
	|| lldp.is_set
	|| (values !=  nullptr && values->has_data())
	|| (client_ains !=  nullptr && client_ains->has_data());
}

bool HardwareModule::Node::Slice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slice_id.yfilter)
	|| ydk::is_set(lldp.yfilter)
	|| (values !=  nullptr && values->has_operation())
	|| (client_ains !=  nullptr && client_ains->has_operation());
}

std::string HardwareModule::Node::Slice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slice";
    ADD_KEY_TOKEN(slice_id, "slice-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Node::Slice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slice_id.is_set || is_set(slice_id.yfilter)) leaf_name_data.push_back(slice_id.get_name_leafdata());
    if (lldp.is_set || is_set(lldp.yfilter)) leaf_name_data.push_back(lldp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModule::Node::Slice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "values")
    {
        if(values == nullptr)
        {
            values = std::make_shared<HardwareModule::Node::Slice::Values>();
        }
        return values;
    }

    if(child_yang_name == "client-ains")
    {
        if(client_ains == nullptr)
        {
            client_ains = std::make_shared<HardwareModule::Node::Slice::ClientAins>();
        }
        return client_ains;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModule::Node::Slice::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(values != nullptr)
    {
        _children["values"] = values;
    }

    if(client_ains != nullptr)
    {
        _children["client-ains"] = client_ains;
    }

    return _children;
}

void HardwareModule::Node::Slice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slice-id")
    {
        slice_id = value;
        slice_id.value_namespace = name_space;
        slice_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldp")
    {
        lldp = value;
        lldp.value_namespace = name_space;
        lldp.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModule::Node::Slice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slice-id")
    {
        slice_id.yfilter = yfilter;
    }
    if(value_path == "lldp")
    {
        lldp.yfilter = yfilter;
    }
}

bool HardwareModule::Node::Slice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "values" || name == "client-ains" || name == "slice-id" || name == "lldp")
        return true;
    return false;
}

HardwareModule::Node::Slice::Values::Values()
    :
    client_rate{YType::enumeration, "client-rate"},
    trunk_rate{YType::enumeration, "trunk-rate"},
    fec{YType::enumeration, "fec"},
    encrypted{YType::boolean, "encrypted"}
{

    yang_name = "values"; yang_parent_name = "slice"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModule::Node::Slice::Values::~Values()
{
}

bool HardwareModule::Node::Slice::Values::has_data() const
{
    if (is_presence_container) return true;
    return client_rate.is_set
	|| trunk_rate.is_set
	|| fec.is_set
	|| encrypted.is_set;
}

bool HardwareModule::Node::Slice::Values::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client_rate.yfilter)
	|| ydk::is_set(trunk_rate.yfilter)
	|| ydk::is_set(fec.yfilter)
	|| ydk::is_set(encrypted.yfilter);
}

std::string HardwareModule::Node::Slice::Values::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "values";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Node::Slice::Values::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_rate.is_set || is_set(client_rate.yfilter)) leaf_name_data.push_back(client_rate.get_name_leafdata());
    if (trunk_rate.is_set || is_set(trunk_rate.yfilter)) leaf_name_data.push_back(trunk_rate.get_name_leafdata());
    if (fec.is_set || is_set(fec.yfilter)) leaf_name_data.push_back(fec.get_name_leafdata());
    if (encrypted.is_set || is_set(encrypted.yfilter)) leaf_name_data.push_back(encrypted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModule::Node::Slice::Values::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModule::Node::Slice::Values::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HardwareModule::Node::Slice::Values::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-rate")
    {
        client_rate = value;
        client_rate.value_namespace = name_space;
        client_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-rate")
    {
        trunk_rate = value;
        trunk_rate.value_namespace = name_space;
        trunk_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec")
    {
        fec = value;
        fec.value_namespace = name_space;
        fec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encrypted")
    {
        encrypted = value;
        encrypted.value_namespace = name_space;
        encrypted.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModule::Node::Slice::Values::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-rate")
    {
        client_rate.yfilter = yfilter;
    }
    if(value_path == "trunk-rate")
    {
        trunk_rate.yfilter = yfilter;
    }
    if(value_path == "fec")
    {
        fec.yfilter = yfilter;
    }
    if(value_path == "encrypted")
    {
        encrypted.yfilter = yfilter;
    }
}

bool HardwareModule::Node::Slice::Values::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-rate" || name == "trunk-rate" || name == "fec" || name == "encrypted")
        return true;
    return false;
}

HardwareModule::Node::Slice::ClientAins::ClientAins()
    :
    hours{YType::uint32, "hours"},
    minutes{YType::uint32, "minutes"}
{

    yang_name = "client-ains"; yang_parent_name = "slice"; is_top_level_class = false; has_list_ancestor = true; 
}

HardwareModule::Node::Slice::ClientAins::~ClientAins()
{
}

bool HardwareModule::Node::Slice::ClientAins::has_data() const
{
    if (is_presence_container) return true;
    return hours.is_set
	|| minutes.is_set;
}

bool HardwareModule::Node::Slice::ClientAins::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter);
}

std::string HardwareModule::Node::Slice::ClientAins::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-ains";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HardwareModule::Node::Slice::ClientAins::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HardwareModule::Node::Slice::ClientAins::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HardwareModule::Node::Slice::ClientAins::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HardwareModule::Node::Slice::ClientAins::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
}

void HardwareModule::Node::Slice::ClientAins::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
}

bool HardwareModule::Node::Slice::ClientAins::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hours" || name == "minutes")
        return true;
    return false;
}

const Enum::YLeaf ClientDataRate::ten_gig {1, "ten-gig"};
const Enum::YLeaf ClientDataRate::forty_gig {2, "forty-gig"};
const Enum::YLeaf ClientDataRate::hundred_gig {3, "hundred-gig"};
const Enum::YLeaf ClientDataRate::ten_and_hundred_gig {4, "ten-and-hundred-gig"};

const Enum::YLeaf Fec::sd7 {1, "sd7"};
const Enum::YLeaf Fec::sd20 {2, "sd20"};

const Enum::YLeaf TrunkDataRate::hundred_gig {2, "hundred-gig"};
const Enum::YLeaf TrunkDataRate::two_hundred_gig {3, "two-hundred-gig"};
const Enum::YLeaf TrunkDataRate::two_hundred_fifty_gig {4, "two-hundred-fifty-gig"};


}
}

