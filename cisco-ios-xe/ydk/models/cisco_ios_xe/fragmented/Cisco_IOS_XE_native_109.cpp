
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_109.hpp"
#include "Cisco_IOS_XE_native_110.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex::Ifindex()
    :
    persist{YType::empty, "persist"}
{

    yang_name = "ifindex"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex::~Ifindex()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex::has_data() const
{
    if (is_presence_container) return true;
    return persist.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(persist.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifindex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (persist.is_set || is_set(persist.yfilter)) leaf_name_data.push_back(persist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "persist")
    {
        persist = value;
        persist.value_namespace = name_space;
        persist.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "persist")
    {
        persist.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::Snmp::Ifindex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persist")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::BridgeDomain()
    :
    bridge_id{YType::uint16, "bridge-id"},
    from_encapsulation{YType::empty, "from-encapsulation"}
        ,
    split_horizon(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon>())
{
    split_horizon->parent = this;

    yang_name = "bridge-domain"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::~BridgeDomain()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::has_data() const
{
    if (is_presence_container) return true;
    return bridge_id.is_set
	|| from_encapsulation.is_set
	|| (split_horizon !=  nullptr && split_horizon->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(from_encapsulation.yfilter)
	|| (split_horizon !=  nullptr && split_horizon->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (from_encapsulation.is_set || is_set(from_encapsulation.yfilter)) leaf_name_data.push_back(from_encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "split-horizon")
    {
        if(split_horizon == nullptr)
        {
            split_horizon = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon>();
        }
        return split_horizon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(split_horizon != nullptr)
    {
        _children["split-horizon"] = split_horizon;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "from-encapsulation")
    {
        from_encapsulation = value;
        from_encapsulation.value_namespace = name_space;
        from_encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "from-encapsulation")
    {
        from_encapsulation.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "split-horizon" || name == "bridge-id" || name == "from-encapsulation")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon::SplitHorizon()
    :
    group{YType::uint8, "group"}
{

    yang_name = "split-horizon"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon::~SplitHorizon()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-horizon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::BridgeDomain::SplitHorizon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Mac::Mac()
    :
    security(nullptr) // presence node
    , access_group(this, {"acl_name"})
{

    yang_name = "mac"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Service::Instance::Mac::~Mac()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_group.len(); index++)
    {
        if(access_group[index]->has_data())
            return true;
    }
    return (security !=  nullptr && security->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::Mac::has_operation() const
{
    for (std::size_t index=0; index<access_group.len(); index++)
    {
        if(access_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (security !=  nullptr && security->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Service::Instance::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Mac::Security>();
        }
        return security;
    }

    if(child_yang_name == "access-group")
    {
        auto ent_ = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Mac::AccessGroup>();
        ent_->parent = this;
        access_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Service::Instance::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(security != nullptr)
    {
        _children["security"] = security;
    }

    count_ = 0;
    for (auto ent_ : access_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::Instance::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security" || name == "access-group")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Security()
    :
    violation{YType::enumeration, "violation"}
        ,
    maximum(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum>())
{
    maximum->parent = this;

    yang_name = "security"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::~Security()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::has_data() const
{
    if (is_presence_container) return true;
    return violation.is_set
	|| (maximum !=  nullptr && maximum->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(violation.yfilter)
	|| (maximum !=  nullptr && maximum->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (violation.is_set || is_set(violation.yfilter)) leaf_name_data.push_back(violation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum>();
        }
        return maximum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(maximum != nullptr)
    {
        _children["maximum"] = maximum;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "violation")
    {
        violation = value;
        violation.value_namespace = name_space;
        violation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "violation")
    {
        violation.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::Maximum()
    :
    addresses{YType::uint16, "addresses"}
{

    yang_name = "maximum"; yang_parent_name = "security"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::~Maximum()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::has_data() const
{
    if (is_presence_container) return true;
    return addresses.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addresses.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addresses.is_set || is_set(addresses.yfilter)) leaf_name_data.push_back(addresses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addresses")
    {
        addresses = value;
        addresses.value_namespace = name_space;
        addresses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addresses")
    {
        addresses.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Mac::AccessGroup::AccessGroup()
    :
    acl_name{YType::str, "acl-name"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "access-group"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Service::Instance::Mac::AccessGroup::~AccessGroup()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Mac::AccessGroup::has_data() const
{
    if (is_presence_container) return true;
    return acl_name.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Mac::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Mac::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    ADD_KEY_TOKEN(acl_name, "acl-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Mac::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Service::Instance::Mac::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Service::Instance::Mac::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Mac::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::Mac::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::Mac::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::ServicePolicy()
    :
    input(this, {"name"})
    , output(this, {"name"})
{

    yang_name = "service-policy"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<input.len(); index++)
    {
        if(input[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<output.len(); index++)
    {
        if(output[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::has_operation() const
{
    for (std::size_t index=0; index<input.len(); index++)
    {
        if(input[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<output.len(); index++)
    {
        if(output[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        auto ent_ = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input>();
        ent_->parent = this;
        input.append(ent_);
        return ent_;
    }

    if(child_yang_name == "output")
    {
        auto ent_ = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output>();
        ent_->parent = this;
        output.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : input.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : output.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::Input()
    :
    name{YType::str, "name"}
{

    yang_name = "input"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::~Input()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::Output()
    :
    name{YType::str, "name"}
{

    yang_name = "output"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::~Output()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Cfm()
    :
    encapsulation(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation>())
    , mep(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep>())
    , mip(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip>())
{
    encapsulation->parent = this;
    mep->parent = this;
    mip->parent = this;

    yang_name = "cfm"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::~Cfm()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::has_data() const
{
    if (is_presence_container) return true;
    return (encapsulation !=  nullptr && encapsulation->has_data())
	|| (mep !=  nullptr && mep->has_data())
	|| (mip !=  nullptr && mip->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::has_operation() const
{
    return is_set(yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (mep !=  nullptr && mep->has_operation())
	|| (mip !=  nullptr && mip->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Cfm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Service::Instance::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "mep")
    {
        if(mep == nullptr)
        {
            mep = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep>();
        }
        return mep;
    }

    if(child_yang_name == "mip")
    {
        if(mip == nullptr)
        {
            mip = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip>();
        }
        return mip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Service::Instance::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(encapsulation != nullptr)
    {
        _children["encapsulation"] = encapsulation;
    }

    if(mep != nullptr)
    {
        _children["mep"] = mep;
    }

    if(mip != nullptr)
    {
        _children["mip"] = mip;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation" || name == "mep" || name == "mip")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Encapsulation()
    :
    dot1ad(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1ad>())
    , dot1q(std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1q>())
{
    dot1ad->parent = this;
    dot1q->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::has_data() const
{
    if (is_presence_container) return true;
    return (dot1ad !=  nullptr && dot1ad->has_data())
	|| (dot1q !=  nullptr && dot1q->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| (dot1ad !=  nullptr && dot1ad->has_operation())
	|| (dot1q !=  nullptr && dot1q->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1ad")
    {
        if(dot1ad == nullptr)
        {
            dot1ad = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1ad>();
        }
        return dot1ad;
    }

    if(child_yang_name == "dot1q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1q>();
        }
        return dot1q;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dot1ad != nullptr)
    {
        _children["dot1ad"] = dot1ad;
    }

    if(dot1q != nullptr)
    {
        _children["dot1q"] = dot1q;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1ad" || name == "dot1q")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1ad::Dot1ad()
    :
    vlan_id{YType::uint16, "vlan-id"},
    cos{YType::uint8, "cos"},
    dot1q{YType::uint16, "dot1q"}
{

    yang_name = "dot1ad"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1ad::~Dot1ad()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1ad::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set
	|| cos.is_set
	|| dot1q.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1ad::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(dot1q.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1ad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1ad";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1ad::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1ad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1ad::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1ad::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1ad::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1ad::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "cos" || name == "dot1q")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1q::Dot1q()
    :
    vlan_id{YType::uint16, "vlan-id"},
    cos{YType::uint8, "cos"},
    second_dot1q{YType::uint16, "second-dot1q"}
{

    yang_name = "dot1q"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1q::~Dot1q()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1q::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set
	|| cos.is_set
	|| second_dot1q.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(second_dot1q.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.yfilter)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1q::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q = value;
        second_dot1q.value_namespace = name_space;
        second_dot1q.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Encapsulation::Dot1q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "cos" || name == "second-dot1q")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::Mep()
    :
    domain{YType::str, "domain"},
    mpid{YType::uint16, "mpid"}
{

    yang_name = "mep"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::~Mep()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::has_data() const
{
    if (is_presence_container) return true;
    return domain.is_set
	|| mpid.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(mpid.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mep";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (mpid.is_set || is_set(mpid.yfilter)) leaf_name_data.push_back(mpid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpid")
    {
        mpid = value;
        mpid.value_namespace = name_space;
        mpid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "mpid")
    {
        mpid.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "mpid")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::Mip()
    :
    level{YType::uint8, "level"}
{

    yang_name = "mip"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::~Mip()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set;
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::Cfm::Mip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::L2protocol::L2protocol()
    :
    discard(nullptr) // presence node
    , peer(nullptr) // presence node
    , forward(nullptr) // presence node
    , tunnel(nullptr) // presence node
{

    yang_name = "l2protocol"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Service::Instance::L2protocol::~L2protocol()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2protocol::has_data() const
{
    if (is_presence_container) return true;
    return (discard !=  nullptr && discard->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (forward !=  nullptr && forward->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2protocol::has_operation() const
{
    return is_set(yfilter)
	|| (discard !=  nullptr && discard->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (forward !=  nullptr && forward->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::Interface::VirtualTemplate::Service::Instance::L2protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::L2protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Service::Instance::L2protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discard")
    {
        if(discard == nullptr)
        {
            discard = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard>();
        }
        return discard;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "forward")
    {
        if(forward == nullptr)
        {
            forward = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward>();
        }
        return forward;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Service::Instance::L2protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(discard != nullptr)
    {
        _children["discard"] = discard;
    }

    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(forward != nullptr)
    {
        _children["forward"] = forward;
    }

    if(tunnel != nullptr)
    {
        _children["tunnel"] = tunnel;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Service::Instance::L2protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Service::Instance::L2protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discard" || name == "peer" || name == "forward" || name == "tunnel")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::Discard()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "discard"; yang_parent_name = "l2protocol"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::~Discard()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::Peer()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "peer"; yang_parent_name = "l2protocol"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::~Peer()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::Forward()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "forward"; yang_parent_name = "l2protocol"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::~Forward()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::Tunnel()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "tunnel"; yang_parent_name = "l2protocol"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::~Tunnel()
{
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::has_operation() const
{
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
}

void Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Lacp::Lacp()
    :
    port_priority{YType::uint32, "port-priority"},
    rate{YType::enumeration, "rate"}
{

    yang_name = "lacp"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Lacp::~Lacp()
{
}

bool Native::Interface::VirtualTemplate::Lacp::has_data() const
{
    if (is_presence_container) return true;
    return port_priority.is_set
	|| rate.is_set;
}

bool Native::Interface::VirtualTemplate::Lacp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Interface::VirtualTemplate::Lacp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:lacp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Lacp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Lacp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Lacp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Lacp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Lacp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Lacp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-priority" || name == "rate")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::ServicePolicy::ServicePolicy()
    :
    history{YType::empty, "history"},
    input{YType::str, "input"},
    output{YType::str, "output"}
        ,
    type(std::make_shared<Native::Interface::VirtualTemplate::ServicePolicy::Type>())
{
    type->parent = this;

    yang_name = "service-policy"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::VirtualTemplate::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    return history.is_set
	|| input.is_set
	|| output.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::Interface::VirtualTemplate::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history.yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Interface::VirtualTemplate::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history.is_set || is_set(history.yfilter)) leaf_name_data.push_back(history.get_name_leafdata());
    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Interface::VirtualTemplate::ServicePolicy::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(type != nullptr)
    {
        _children["type"] = type;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history")
    {
        history = value;
        history.value_namespace = name_space;
        history.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history")
    {
        history.yfilter = yfilter;
    }
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "history" || name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::ServicePolicy::Type::Type()
    :
    control(std::make_shared<Native::Interface::VirtualTemplate::ServicePolicy::Type::Control>())
    , performance_monitor(std::make_shared<Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor>())
    , service_chain(std::make_shared<Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain>())
{
    control->parent = this;
    performance_monitor->parent = this;
    service_chain->parent = this;

    yang_name = "type"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::ServicePolicy::Type::~Type()
{
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::has_data() const
{
    if (is_presence_container) return true;
    return (control !=  nullptr && control->has_data())
	|| (performance_monitor !=  nullptr && performance_monitor->has_data())
	|| (service_chain !=  nullptr && service_chain->has_data());
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::has_operation() const
{
    return is_set(yfilter)
	|| (control !=  nullptr && control->has_operation())
	|| (performance_monitor !=  nullptr && performance_monitor->has_operation())
	|| (service_chain !=  nullptr && service_chain->has_operation());
}

std::string Native::Interface::VirtualTemplate::ServicePolicy::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::ServicePolicy::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::ServicePolicy::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "control")
    {
        if(control == nullptr)
        {
            control = std::make_shared<Native::Interface::VirtualTemplate::ServicePolicy::Type::Control>();
        }
        return control;
    }

    if(child_yang_name == "performance-monitor")
    {
        if(performance_monitor == nullptr)
        {
            performance_monitor = std::make_shared<Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor>();
        }
        return performance_monitor;
    }

    if(child_yang_name == "service-chain")
    {
        if(service_chain == nullptr)
        {
            service_chain = std::make_shared<Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain>();
        }
        return service_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::ServicePolicy::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(control != nullptr)
    {
        _children["control"] = control;
    }

    if(performance_monitor != nullptr)
    {
        _children["performance-monitor"] = performance_monitor;
    }

    if(service_chain != nullptr)
    {
        _children["service-chain"] = service_chain;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::ServicePolicy::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::ServicePolicy::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "control" || name == "performance-monitor" || name == "service-chain")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::ServicePolicy::Type::Control::Control()
    :
    subscriber{YType::str, "subscriber"}
{

    yang_name = "control"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::ServicePolicy::Type::Control::~Control()
{
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::Control::has_data() const
{
    if (is_presence_container) return true;
    return subscriber.is_set;
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::Control::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber.yfilter);
}

std::string Native::Interface::VirtualTemplate::ServicePolicy::Type::Control::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::ServicePolicy::Type::Control::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber.is_set || is_set(subscriber.yfilter)) leaf_name_data.push_back(subscriber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::ServicePolicy::Type::Control::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::ServicePolicy::Type::Control::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::ServicePolicy::Type::Control::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber")
    {
        subscriber = value;
        subscriber.value_namespace = name_space;
        subscriber.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::ServicePolicy::Type::Control::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber")
    {
        subscriber.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::Control::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor::PerformanceMonitor()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"}
{

    yang_name = "performance-monitor"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor::~PerformanceMonitor()
{
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| name.is_set;
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "name")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::ServiceChain()
    :
    input(std::make_shared<Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input>())
    , output(std::make_shared<Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "service-chain"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::~ServiceChain()
{
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input::Input()
    :
    name{YType::str, "name"}
{

    yang_name = "input"; yang_parent_name = "service-chain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input::~Input()
{
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output::Output()
    :
    name{YType::str, "name"}
{

    yang_name = "output"; yang_parent_name = "service-chain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output::~Output()
{
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::ServicePolicy::Type::ServiceChain::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Snmp::Snmp()
    :
    ifindex(std::make_shared<Native::Interface::VirtualTemplate::Snmp::Ifindex>())
    , trap(std::make_shared<Native::Interface::VirtualTemplate::Snmp::Trap>())
{
    ifindex->parent = this;
    trap->parent = this;

    yang_name = "snmp"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Snmp::~Snmp()
{
}

bool Native::Interface::VirtualTemplate::Snmp::has_data() const
{
    if (is_presence_container) return true;
    return (ifindex !=  nullptr && ifindex->has_data())
	|| (trap !=  nullptr && trap->has_data());
}

bool Native::Interface::VirtualTemplate::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (ifindex !=  nullptr && ifindex->has_operation())
	|| (trap !=  nullptr && trap->has_operation());
}

std::string Native::Interface::VirtualTemplate::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifindex")
    {
        if(ifindex == nullptr)
        {
            ifindex = std::make_shared<Native::Interface::VirtualTemplate::Snmp::Ifindex>();
        }
        return ifindex;
    }

    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Native::Interface::VirtualTemplate::Snmp::Trap>();
        }
        return trap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ifindex != nullptr)
    {
        _children["ifindex"] = ifindex;
    }

    if(trap != nullptr)
    {
        _children["trap"] = trap;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifindex" || name == "trap")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Snmp::Ifindex::Ifindex()
    :
    persist{YType::empty, "persist"},
    clear{YType::boolean, "clear"}
{

    yang_name = "ifindex"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Snmp::Ifindex::~Ifindex()
{
}

bool Native::Interface::VirtualTemplate::Snmp::Ifindex::has_data() const
{
    if (is_presence_container) return true;
    return persist.is_set
	|| clear.is_set;
}

bool Native::Interface::VirtualTemplate::Snmp::Ifindex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(persist.yfilter)
	|| ydk::is_set(clear.yfilter);
}

std::string Native::Interface::VirtualTemplate::Snmp::Ifindex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifindex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Snmp::Ifindex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (persist.is_set || is_set(persist.yfilter)) leaf_name_data.push_back(persist.get_name_leafdata());
    if (clear.is_set || is_set(clear.yfilter)) leaf_name_data.push_back(clear.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Snmp::Ifindex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Snmp::Ifindex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Snmp::Ifindex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "persist")
    {
        persist = value;
        persist.value_namespace = name_space;
        persist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear")
    {
        clear = value;
        clear.value_namespace = name_space;
        clear.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Snmp::Ifindex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "persist")
    {
        persist.yfilter = yfilter;
    }
    if(value_path == "clear")
    {
        clear.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Snmp::Ifindex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persist" || name == "clear")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Snmp::Trap::Trap()
    :
    link_status{YType::boolean, "link-status"}
        ,
    link_status_capas(std::make_shared<Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas>())
{
    link_status_capas->parent = this;

    yang_name = "trap"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Snmp::Trap::~Trap()
{
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::has_data() const
{
    if (is_presence_container) return true;
    return link_status.is_set
	|| (link_status_capas !=  nullptr && link_status_capas->has_data());
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_status.yfilter)
	|| (link_status_capas !=  nullptr && link_status_capas->has_operation());
}

std::string Native::Interface::VirtualTemplate::Snmp::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Snmp::Trap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_status.is_set || is_set(link_status.yfilter)) leaf_name_data.push_back(link_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Snmp::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-status-capas")
    {
        if(link_status_capas == nullptr)
        {
            link_status_capas = std::make_shared<Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas>();
        }
        return link_status_capas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Snmp::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(link_status_capas != nullptr)
    {
        _children["link-status-capas"] = link_status_capas;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Snmp::Trap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-status")
    {
        link_status = value;
        link_status.value_namespace = name_space;
        link_status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Snmp::Trap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-status")
    {
        link_status.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status-capas" || name == "link-status")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatusCapas()
    :
    link_status(std::make_shared<Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus>())
{
    link_status->parent = this;

    yang_name = "link-status-capas"; yang_parent_name = "trap"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::~LinkStatusCapas()
{
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::has_data() const
{
    if (is_presence_container) return true;
    return (link_status !=  nullptr && link_status->has_data());
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::has_operation() const
{
    return is_set(yfilter)
	|| (link_status !=  nullptr && link_status->has_operation());
}

std::string Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-status-capas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-status")
    {
        if(link_status == nullptr)
        {
            link_status = std::make_shared<Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus>();
        }
        return link_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(link_status != nullptr)
    {
        _children["link-status"] = link_status;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-status")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::LinkStatus()
    :
    permit(std::make_shared<Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit>())
{
    permit->parent = this;

    yang_name = "link-status"; yang_parent_name = "link-status-capas"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::~LinkStatus()
{
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::has_data() const
{
    if (is_presence_container) return true;
    return (permit !=  nullptr && permit->has_data());
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::has_operation() const
{
    return is_set(yfilter)
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(permit != nullptr)
    {
        _children["permit"] = permit;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::Permit()
    :
    duplicates{YType::empty, "duplicates"}
{

    yang_name = "permit"; yang_parent_name = "link-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::~Permit()
{
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::has_data() const
{
    if (is_presence_container) return true;
    return duplicates.is_set;
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duplicates.yfilter);
}

std::string Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duplicates.is_set || is_set(duplicates.yfilter)) leaf_name_data.push_back(duplicates.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duplicates")
    {
        duplicates = value;
        duplicates.value_namespace = name_space;
        duplicates.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duplicates")
    {
        duplicates.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duplicates")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Nhrp::Nhrp()
    :
    group{YType::str, "group"},
    route_watch{YType::boolean, "route-watch"}
        ,
    event_publisher(std::make_shared<Native::Interface::VirtualTemplate::Nhrp::EventPublisher>())
    , map(std::make_shared<Native::Interface::VirtualTemplate::Nhrp::Map>())
{
    event_publisher->parent = this;
    map->parent = this;

    yang_name = "nhrp"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Nhrp::~Nhrp()
{
}

bool Native::Interface::VirtualTemplate::Nhrp::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set
	|| route_watch.is_set
	|| (event_publisher !=  nullptr && event_publisher->has_data())
	|| (map !=  nullptr && map->has_data());
}

bool Native::Interface::VirtualTemplate::Nhrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(route_watch.yfilter)
	|| (event_publisher !=  nullptr && event_publisher->has_operation())
	|| (map !=  nullptr && map->has_operation());
}

std::string Native::Interface::VirtualTemplate::Nhrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-tunnel:nhrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Nhrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (route_watch.is_set || is_set(route_watch.yfilter)) leaf_name_data.push_back(route_watch.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Nhrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-publisher")
    {
        if(event_publisher == nullptr)
        {
            event_publisher = std::make_shared<Native::Interface::VirtualTemplate::Nhrp::EventPublisher>();
        }
        return event_publisher;
    }

    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Interface::VirtualTemplate::Nhrp::Map>();
        }
        return map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Nhrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(event_publisher != nullptr)
    {
        _children["event-publisher"] = event_publisher;
    }

    if(map != nullptr)
    {
        _children["map"] = map;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Nhrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-watch")
    {
        route_watch = value;
        route_watch.value_namespace = name_space;
        route_watch.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Nhrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "route-watch")
    {
        route_watch.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Nhrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-publisher" || name == "map" || name == "group" || name == "route-watch")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Nhrp::EventPublisher::EventPublisher()
    :
    max_event_timeout{YType::uint8, "max-event-timeout"}
{

    yang_name = "event-publisher"; yang_parent_name = "nhrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Nhrp::EventPublisher::~EventPublisher()
{
}

bool Native::Interface::VirtualTemplate::Nhrp::EventPublisher::has_data() const
{
    if (is_presence_container) return true;
    return max_event_timeout.is_set;
}

bool Native::Interface::VirtualTemplate::Nhrp::EventPublisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_event_timeout.yfilter);
}

std::string Native::Interface::VirtualTemplate::Nhrp::EventPublisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-publisher";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Nhrp::EventPublisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_event_timeout.is_set || is_set(max_event_timeout.yfilter)) leaf_name_data.push_back(max_event_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Nhrp::EventPublisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Nhrp::EventPublisher::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Nhrp::EventPublisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-event-timeout")
    {
        max_event_timeout = value;
        max_event_timeout.value_namespace = name_space;
        max_event_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Nhrp::EventPublisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-event-timeout")
    {
        max_event_timeout.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Nhrp::EventPublisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-event-timeout")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Nhrp::Map::Map()
    :
    group(std::make_shared<Native::Interface::VirtualTemplate::Nhrp::Map::Group>())
{
    group->parent = this;

    yang_name = "map"; yang_parent_name = "nhrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Nhrp::Map::~Map()
{
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::has_data() const
{
    if (is_presence_container) return true;
    return (group !=  nullptr && group->has_data());
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::has_operation() const
{
    return is_set(yfilter)
	|| (group !=  nullptr && group->has_operation());
}

std::string Native::Interface::VirtualTemplate::Nhrp::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Nhrp::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Nhrp::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Interface::VirtualTemplate::Nhrp::Map::Group>();
        }
        return group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Nhrp::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group != nullptr)
    {
        _children["group"] = group;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Nhrp::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Nhrp::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Nhrp::Map::Group::Group()
    :
    nhrp_name(this, {"nhrp_name"})
{

    yang_name = "group"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Nhrp::Map::Group::~Group()
{
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::Group::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nhrp_name.len(); index++)
    {
        if(nhrp_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::Group::has_operation() const
{
    for (std::size_t index=0; index<nhrp_name.len(); index++)
    {
        if(nhrp_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::VirtualTemplate::Nhrp::Map::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Nhrp::Map::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Nhrp::Map::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhrp-name")
    {
        auto ent_ = std::make_shared<Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName>();
        ent_->parent = this;
        nhrp_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Nhrp::Map::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nhrp_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Nhrp::Map::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Nhrp::Map::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhrp-name")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::NhrpName()
    :
    nhrp_name{YType::str, "nhrp-name"}
        ,
    service_policy(std::make_shared<Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "nhrp-name"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::~NhrpName()
{
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::has_data() const
{
    if (is_presence_container) return true;
    return nhrp_name.is_set
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nhrp_name.yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrp-name";
    ADD_KEY_TOKEN(nhrp_name, "nhrp-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhrp_name.is_set || is_set(nhrp_name.yfilter)) leaf_name_data.push_back(nhrp_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_policy != nullptr)
    {
        _children["service-policy"] = service_policy;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nhrp-name")
    {
        nhrp_name = value;
        nhrp_name.value_namespace = name_space;
        nhrp_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nhrp-name")
    {
        nhrp_name.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "nhrp-name")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::ServicePolicy()
    :
    output{YType::str, "output"}
{

    yang_name = "service-policy"; yang_parent_name = "nhrp-name"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    return output.is_set;
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Nhrp::Map::Group::NhrpName::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Tunnel()
    :
    checksum{YType::empty, "checksum"},
    source{YType::str, "source"},
    entropy{YType::empty, "entropy"},
    key{YType::uint64, "key"},
    raw_packet_interface{YType::str, "raw-packet-interface"},
    snooping{YType::enumeration, "snooping"},
    tos{YType::uint8, "tos"},
    ttl{YType::uint8, "ttl"},
    vrf{YType::str, "vrf"}
        ,
    tun_6rd(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Tun6rd>())
    , bandwidth(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Bandwidth>())
    , destination(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Destination>())
    , dst_port(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::DstPort>())
    , endpoint(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Endpoint>())
    , fixup(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Fixup>())
    , flow(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Flow>())
    , mode(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode>())
    , network_id(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::NetworkId>())
    , path_mtu_discovery(nullptr) // presence node
    , protection(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Protection>())
    , mpls(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls>())
    , rbscp(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Rbscp>())
    , src_port(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::SrcPort>())
    , udlr(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Udlr>())
    , vlan(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Vlan>())
{
    tun_6rd->parent = this;
    bandwidth->parent = this;
    destination->parent = this;
    dst_port->parent = this;
    endpoint->parent = this;
    fixup->parent = this;
    flow->parent = this;
    mode->parent = this;
    network_id->parent = this;
    protection->parent = this;
    mpls->parent = this;
    rbscp->parent = this;
    src_port->parent = this;
    udlr->parent = this;
    vlan->parent = this;

    yang_name = "tunnel"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::~Tunnel()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return checksum.is_set
	|| source.is_set
	|| entropy.is_set
	|| key.is_set
	|| raw_packet_interface.is_set
	|| snooping.is_set
	|| tos.is_set
	|| ttl.is_set
	|| vrf.is_set
	|| (tun_6rd !=  nullptr && tun_6rd->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (destination !=  nullptr && destination->has_data())
	|| (dst_port !=  nullptr && dst_port->has_data())
	|| (endpoint !=  nullptr && endpoint->has_data())
	|| (fixup !=  nullptr && fixup->has_data())
	|| (flow !=  nullptr && flow->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (network_id !=  nullptr && network_id->has_data())
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (rbscp !=  nullptr && rbscp->has_data())
	|| (src_port !=  nullptr && src_port->has_data())
	|| (udlr !=  nullptr && udlr->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(entropy.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(raw_packet_interface.yfilter)
	|| ydk::is_set(snooping.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (tun_6rd !=  nullptr && tun_6rd->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (destination !=  nullptr && destination->has_operation())
	|| (dst_port !=  nullptr && dst_port->has_operation())
	|| (endpoint !=  nullptr && endpoint->has_operation())
	|| (fixup !=  nullptr && fixup->has_operation())
	|| (flow !=  nullptr && flow->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (network_id !=  nullptr && network_id->has_operation())
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_operation())
	|| (protection !=  nullptr && protection->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (rbscp !=  nullptr && rbscp->has_operation())
	|| (src_port !=  nullptr && src_port->has_operation())
	|| (udlr !=  nullptr && udlr->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-tunnel:tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (entropy.is_set || is_set(entropy.yfilter)) leaf_name_data.push_back(entropy.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (raw_packet_interface.is_set || is_set(raw_packet_interface.yfilter)) leaf_name_data.push_back(raw_packet_interface.get_name_leafdata());
    if (snooping.is_set || is_set(snooping.yfilter)) leaf_name_data.push_back(snooping.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tun-6rd")
    {
        if(tun_6rd == nullptr)
        {
            tun_6rd = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Tun6rd>();
        }
        return tun_6rd;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "dst-port")
    {
        if(dst_port == nullptr)
        {
            dst_port = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::DstPort>();
        }
        return dst_port;
    }

    if(child_yang_name == "endpoint")
    {
        if(endpoint == nullptr)
        {
            endpoint = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Endpoint>();
        }
        return endpoint;
    }

    if(child_yang_name == "fixup")
    {
        if(fixup == nullptr)
        {
            fixup = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Fixup>();
        }
        return fixup;
    }

    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Flow>();
        }
        return flow;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "network-id")
    {
        if(network_id == nullptr)
        {
            network_id = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::NetworkId>();
        }
        return network_id;
    }

    if(child_yang_name == "path-mtu-discovery")
    {
        if(path_mtu_discovery == nullptr)
        {
            path_mtu_discovery = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery>();
        }
        return path_mtu_discovery;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Protection>();
        }
        return protection;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "rbscp")
    {
        if(rbscp == nullptr)
        {
            rbscp = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Rbscp>();
        }
        return rbscp;
    }

    if(child_yang_name == "src-port")
    {
        if(src_port == nullptr)
        {
            src_port = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::SrcPort>();
        }
        return src_port;
    }

    if(child_yang_name == "udlr")
    {
        if(udlr == nullptr)
        {
            udlr = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Udlr>();
        }
        return udlr;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tun_6rd != nullptr)
    {
        _children["tun-6rd"] = tun_6rd;
    }

    if(bandwidth != nullptr)
    {
        _children["bandwidth"] = bandwidth;
    }

    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    if(dst_port != nullptr)
    {
        _children["dst-port"] = dst_port;
    }

    if(endpoint != nullptr)
    {
        _children["endpoint"] = endpoint;
    }

    if(fixup != nullptr)
    {
        _children["fixup"] = fixup;
    }

    if(flow != nullptr)
    {
        _children["flow"] = flow;
    }

    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    if(network_id != nullptr)
    {
        _children["network-id"] = network_id;
    }

    if(path_mtu_discovery != nullptr)
    {
        _children["path-mtu-discovery"] = path_mtu_discovery;
    }

    if(protection != nullptr)
    {
        _children["protection"] = protection;
    }

    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    if(rbscp != nullptr)
    {
        _children["rbscp"] = rbscp;
    }

    if(src_port != nullptr)
    {
        _children["src-port"] = src_port;
    }

    if(udlr != nullptr)
    {
        _children["udlr"] = udlr;
    }

    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entropy")
    {
        entropy = value;
        entropy.value_namespace = name_space;
        entropy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raw-packet-interface")
    {
        raw_packet_interface = value;
        raw_packet_interface.value_namespace = name_space;
        raw_packet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snooping")
    {
        snooping = value;
        snooping.value_namespace = name_space;
        snooping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "entropy")
    {
        entropy.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "raw-packet-interface")
    {
        raw_packet_interface.yfilter = yfilter;
    }
    if(value_path == "snooping")
    {
        snooping.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tun-6rd" || name == "bandwidth" || name == "destination" || name == "dst-port" || name == "endpoint" || name == "fixup" || name == "flow" || name == "mode" || name == "network-id" || name == "path-mtu-discovery" || name == "protection" || name == "mpls" || name == "rbscp" || name == "src-port" || name == "udlr" || name == "vlan" || name == "checksum" || name == "source" || name == "entropy" || name == "key" || name == "raw-packet-interface" || name == "snooping" || name == "tos" || name == "ttl" || name == "vrf")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Tun6rd()
    :
    br{YType::str, "br"},
    prefix{YType::str, "prefix"},
    reverse_map_check{YType::empty, "reverse-map-check"}
        ,
    ipv4(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "tun-6rd"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Tun6rd::~Tun6rd()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Tun6rd::has_data() const
{
    if (is_presence_container) return true;
    return br.is_set
	|| prefix.is_set
	|| reverse_map_check.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Tun6rd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(br.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(reverse_map_check.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Tun6rd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tun-6rd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Tun6rd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (br.is_set || is_set(br.yfilter)) leaf_name_data.push_back(br.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (reverse_map_check.is_set || is_set(reverse_map_check.yfilter)) leaf_name_data.push_back(reverse_map_check.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Tun6rd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Tun6rd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Tun6rd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "br")
    {
        br = value;
        br.value_namespace = name_space;
        br.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-map-check")
    {
        reverse_map_check = value;
        reverse_map_check.value_namespace = name_space;
        reverse_map_check.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Tun6rd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "br")
    {
        br.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "reverse-map-check")
    {
        reverse_map_check.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Tun6rd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "br" || name == "prefix" || name == "reverse-map-check")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::Ipv4()
    :
    prefix_len{YType::uint8, "prefix-len"},
    suffix_len{YType::uint8, "suffix-len"}
{

    yang_name = "ipv4"; yang_parent_name = "tun-6rd"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::~Ipv4()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return prefix_len.is_set
	|| suffix_len.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(suffix_len.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (suffix_len.is_set || is_set(suffix_len.yfilter)) leaf_name_data.push_back(suffix_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suffix-len")
    {
        suffix_len = value;
        suffix_len.value_namespace = name_space;
        suffix_len.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "suffix-len")
    {
        suffix_len.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-len" || name == "suffix-len")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Bandwidth::Bandwidth()
    :
    receive{YType::uint32, "receive"},
    transmit{YType::uint32, "transmit"}
{

    yang_name = "bandwidth"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return receive.is_set
	|| transmit.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(transmit.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "transmit")
    {
        transmit.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "transmit")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Destination::Destination()
    :
    ipaddress_or_host{YType::str, "ipaddress-or-host"}
        ,
    list(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Destination::List>())
{
    list->parent = this;

    yang_name = "destination"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Destination::~Destination()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Destination::has_data() const
{
    if (is_presence_container) return true;
    return ipaddress_or_host.is_set
	|| (list !=  nullptr && list->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipaddress_or_host.yfilter)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipaddress_or_host.is_set || is_set(ipaddress_or_host.yfilter)) leaf_name_data.push_back(ipaddress_or_host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Destination::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(list != nullptr)
    {
        _children["list"] = list;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipaddress-or-host")
    {
        ipaddress_or_host = value;
        ipaddress_or_host.value_namespace = name_space;
        ipaddress_or_host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipaddress-or-host")
    {
        ipaddress_or_host.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "ipaddress-or-host")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Destination::List::List()
    :
    mpls(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Destination::List::Mpls>())
{
    mpls->parent = this;

    yang_name = "list"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Destination::List::~List()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Destination::List::has_data() const
{
    if (is_presence_container) return true;
    return (mpls !=  nullptr && mpls->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Destination::List::has_operation() const
{
    return is_set(yfilter)
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Destination::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Destination::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Destination::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Destination::List::Mpls>();
        }
        return mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Destination::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Destination::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Tunnel::Destination::List::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Destination::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Destination::List::Mpls::Mpls()
    :
    traffic_eng(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Destination::List::Mpls::TrafficEng>())
{
    traffic_eng->parent = this;

    yang_name = "mpls"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Destination::List::Mpls::~Mpls()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Destination::List::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return (traffic_eng !=  nullptr && traffic_eng->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Destination::List::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Destination::List::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Destination::List::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Destination::List::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Destination::List::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Destination::List::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(traffic_eng != nullptr)
    {
        _children["traffic-eng"] = traffic_eng;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Destination::List::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Tunnel::Destination::List::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Destination::List::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-eng")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Destination::List::Mpls::TrafficEng::TrafficEng()
    :
    name{YType::str, "name"}
{

    yang_name = "traffic-eng"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Destination::List::Mpls::TrafficEng::~TrafficEng()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Destination::List::Mpls::TrafficEng::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Destination::List::Mpls::TrafficEng::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Destination::List::Mpls::TrafficEng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-eng";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Destination::List::Mpls::TrafficEng::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Destination::List::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Destination::List::Mpls::TrafficEng::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Destination::List::Mpls::TrafficEng::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Destination::List::Mpls::TrafficEng::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Destination::List::Mpls::TrafficEng::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::DstPort::DstPort()
    :
    port_num{YType::uint16, "port-num"},
    dynamic{YType::empty, "dynamic"}
{

    yang_name = "dst-port"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::DstPort::~DstPort()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::DstPort::has_data() const
{
    if (is_presence_container) return true;
    return port_num.is_set
	|| dynamic.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::DstPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_num.yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::DstPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::DstPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_num.is_set || is_set(port_num.yfilter)) leaf_name_data.push_back(port_num.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::DstPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::DstPort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::DstPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-num")
    {
        port_num = value;
        port_num.value_namespace = name_space;
        port_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::DstPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-num")
    {
        port_num.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::DstPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-num" || name == "dynamic")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Endpoint::Endpoint()
    :
    service_policy(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "endpoint"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Endpoint::~Endpoint()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Endpoint::has_data() const
{
    if (is_presence_container) return true;
    return (service_policy !=  nullptr && service_policy->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Endpoint::has_operation() const
{
    return is_set(yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Endpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "endpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Endpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Endpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Endpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_policy != nullptr)
    {
        _children["service-policy"] = service_policy;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Endpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Tunnel::Endpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Endpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::ServicePolicy()
    :
    output{YType::str, "output"}
{

    yang_name = "service-policy"; yang_parent_name = "endpoint"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    return output.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Endpoint::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Fixup::Fixup()
    :
    nat{YType::empty, "nat"}
{

    yang_name = "fixup"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Fixup::~Fixup()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Fixup::has_data() const
{
    if (is_presence_container) return true;
    return nat.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Fixup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nat.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Fixup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Fixup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nat.is_set || is_set(nat.yfilter)) leaf_name_data.push_back(nat.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Fixup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Fixup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Fixup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nat")
    {
        nat = value;
        nat.value_namespace = name_space;
        nat.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Fixup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nat")
    {
        nat.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Fixup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nat")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Flow::Flow()
    :
    egress_records{YType::empty, "egress-records"}
{

    yang_name = "flow"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Flow::~Flow()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Flow::has_data() const
{
    if (is_presence_container) return true;
    return egress_records.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Flow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(egress_records.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_records.is_set || is_set(egress_records.yfilter)) leaf_name_data.push_back(egress_records.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "egress-records")
    {
        egress_records = value;
        egress_records.value_namespace = name_space;
        egress_records.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "egress-records")
    {
        egress_records.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress-records")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Mode()
    :
    ipv6{YType::empty, "ipv6"},
    udp{YType::enumeration, "udp"}
        ,
    ipsec(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec>())
    , mpls(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls>())
    , ethernet(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet>())
    , gre(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Gre>())
    , ipip(nullptr) // presence node
    , ipv6ip(nullptr) // presence node
{
    ipsec->parent = this;
    mpls->parent = this;
    ethernet->parent = this;
    gre->parent = this;

    yang_name = "mode"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mode::~Mode()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::has_data() const
{
    if (is_presence_container) return true;
    return ipv6.is_set
	|| udp.is_set
	|| (ipsec !=  nullptr && ipsec->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (gre !=  nullptr && gre->has_data())
	|| (ipip !=  nullptr && ipip->has_data())
	|| (ipv6ip !=  nullptr && ipv6ip->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(udp.yfilter)
	|| (ipsec !=  nullptr && ipsec->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (gre !=  nullptr && gre->has_operation())
	|| (ipip !=  nullptr && ipip->has_operation())
	|| (ipv6ip !=  nullptr && ipv6ip->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (udp.is_set || is_set(udp.yfilter)) leaf_name_data.push_back(udp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec>();
        }
        return ipsec;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "gre")
    {
        if(gre == nullptr)
        {
            gre = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Gre>();
        }
        return gre;
    }

    if(child_yang_name == "ipip")
    {
        if(ipip == nullptr)
        {
            ipip = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip>();
        }
        return ipip;
    }

    if(child_yang_name == "ipv6ip")
    {
        if(ipv6ip == nullptr)
        {
            ipv6ip = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6ip>();
        }
        return ipv6ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipsec != nullptr)
    {
        _children["ipsec"] = ipsec;
    }

    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    if(ethernet != nullptr)
    {
        _children["ethernet"] = ethernet;
    }

    if(gre != nullptr)
    {
        _children["gre"] = gre;
    }

    if(ipip != nullptr)
    {
        _children["ipip"] = ipip;
    }

    if(ipv6ip != nullptr)
    {
        _children["ipv6ip"] = ipv6ip;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp")
    {
        udp = value;
        udp.value_namespace = name_space;
        udp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "udp")
    {
        udp.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsec" || name == "mpls" || name == "ethernet" || name == "gre" || name == "ipip" || name == "ipv6ip" || name == "ipv6" || name == "udp")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipsec()
    :
    ipv4(nullptr) // presence node
    , ipv6(nullptr) // presence node
{

    yang_name = "ipsec"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::~Ipsec()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::Ipv4()
{

    yang_name = "ipv4"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::~Ipv4()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::Ipv6()
{

    yang_name = "ipv6"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::~Ipv6()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipsec::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::Mpls()
    :
    traffic_eng(nullptr) // presence node
{

    yang_name = "mpls"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::~Mpls()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return (traffic_eng !=  nullptr && traffic_eng->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(traffic_eng != nullptr)
    {
        _children["traffic-eng"] = traffic_eng;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-eng")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::TrafficEng()
    :
    multilsp{YType::empty, "multilsp"},
    point_to_multipoint{YType::empty, "point-to-multipoint"}
{

    yang_name = "traffic-eng"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::~TrafficEng()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::has_data() const
{
    if (is_presence_container) return true;
    return multilsp.is_set
	|| point_to_multipoint.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multilsp.yfilter)
	|| ydk::is_set(point_to_multipoint.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-eng";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multilsp.is_set || is_set(multilsp.yfilter)) leaf_name_data.push_back(multilsp.get_name_leafdata());
    if (point_to_multipoint.is_set || is_set(point_to_multipoint.yfilter)) leaf_name_data.push_back(point_to_multipoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multilsp")
    {
        multilsp = value;
        multilsp.value_namespace = name_space;
        multilsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "point-to-multipoint")
    {
        point_to_multipoint = value;
        point_to_multipoint.value_namespace = name_space;
        point_to_multipoint.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multilsp")
    {
        multilsp.yfilter = yfilter;
    }
    if(value_path == "point-to-multipoint")
    {
        point_to_multipoint.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Mpls::TrafficEng::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multilsp" || name == "point-to-multipoint")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::Ethernet()
    :
    gre{YType::enumeration, "gre"}
{

    yang_name = "ethernet"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::~Ethernet()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::has_data() const
{
    if (is_presence_container) return true;
    return gre.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gre.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gre.is_set || is_set(gre.yfilter)) leaf_name_data.push_back(gre.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gre")
    {
        gre = value;
        gre.value_namespace = name_space;
        gre.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gre")
    {
        gre.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Gre()
    :
    ip{YType::empty, "ip"},
    ipv6{YType::empty, "ipv6"}
        ,
    multipoint(nullptr) // presence node
{

    yang_name = "gre"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::~Gre()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| ipv6.is_set
	|| (multipoint !=  nullptr && multipoint->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| (multipoint !=  nullptr && multipoint->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multipoint")
    {
        if(multipoint == nullptr)
        {
            multipoint = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint>();
        }
        return multipoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(multipoint != nullptr)
    {
        _children["multipoint"] = multipoint;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multipoint" || name == "ip" || name == "ipv6")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::Multipoint()
    :
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "multipoint"; yang_parent_name = "gre"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::~Multipoint()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::has_data() const
{
    if (is_presence_container) return true;
    return ipv6.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multipoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Gre::Multipoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::Ipip()
    :
    decapsulate_any{YType::empty, "decapsulate-any"}
{

    yang_name = "ipip"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::~Ipip()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::has_data() const
{
    if (is_presence_container) return true;
    return decapsulate_any.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(decapsulate_any.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (decapsulate_any.is_set || is_set(decapsulate_any.yfilter)) leaf_name_data.push_back(decapsulate_any.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "decapsulate-any")
    {
        decapsulate_any = value;
        decapsulate_any.value_namespace = name_space;
        decapsulate_any.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "decapsulate-any")
    {
        decapsulate_any.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "decapsulate-any")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6ip::Ipv6ip()
    :
    auto_6rd{YType::empty, "auto-6rd"},
    auto_6to4{YType::empty, "auto-6to4"},
    isatap{YType::empty, "isatap"}
{

    yang_name = "ipv6ip"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6ip::~Ipv6ip()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6ip::has_data() const
{
    if (is_presence_container) return true;
    return auto_6rd.is_set
	|| auto_6to4.is_set
	|| isatap.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_6rd.yfilter)
	|| ydk::is_set(auto_6to4.yfilter)
	|| ydk::is_set(isatap.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_6rd.is_set || is_set(auto_6rd.yfilter)) leaf_name_data.push_back(auto_6rd.get_name_leafdata());
    if (auto_6to4.is_set || is_set(auto_6to4.yfilter)) leaf_name_data.push_back(auto_6to4.get_name_leafdata());
    if (isatap.is_set || is_set(isatap.yfilter)) leaf_name_data.push_back(isatap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-6rd")
    {
        auto_6rd = value;
        auto_6rd.value_namespace = name_space;
        auto_6rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-6to4")
    {
        auto_6to4 = value;
        auto_6to4.value_namespace = name_space;
        auto_6to4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isatap")
    {
        isatap = value;
        isatap.value_namespace = name_space;
        isatap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-6rd")
    {
        auto_6rd.yfilter = yfilter;
    }
    if(value_path == "auto-6to4")
    {
        auto_6to4.yfilter = yfilter;
    }
    if(value_path == "isatap")
    {
        isatap.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mode::Ipv6ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-6rd" || name == "auto-6to4" || name == "isatap")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::NetworkId::NetworkId()
    :
    id{YType::uint16, "id"},
    nexthop{YType::str, "nexthop"},
    qos{YType::str, "qos"},
    weight{YType::uint16, "weight"}
{

    yang_name = "network-id"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::NetworkId::~NetworkId()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::NetworkId::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| nexthop.is_set
	|| qos.is_set
	|| weight.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::NetworkId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(nexthop.yfilter)
	|| ydk::is_set(qos.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::NetworkId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::NetworkId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (nexthop.is_set || is_set(nexthop.yfilter)) leaf_name_data.push_back(nexthop.get_name_leafdata());
    if (qos.is_set || is_set(qos.yfilter)) leaf_name_data.push_back(qos.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::NetworkId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::NetworkId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::NetworkId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop")
    {
        nexthop = value;
        nexthop.value_namespace = name_space;
        nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos")
    {
        qos = value;
        qos.value_namespace = name_space;
        qos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::NetworkId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "nexthop")
    {
        nexthop.yfilter = yfilter;
    }
    if(value_path == "qos")
    {
        qos.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::NetworkId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "nexthop" || name == "qos" || name == "weight")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::PathMtuDiscovery()
{

    yang_name = "path-mtu-discovery"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::~PathMtuDiscovery()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-mtu-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Protection::Protection()
{

    yang_name = "protection"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Protection::~Protection()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Protection::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::VirtualTemplate::Tunnel::Protection::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Tunnel::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::Mpls()
    :
    traffic_eng(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng>())
{
    traffic_eng->parent = this;

    yang_name = "mpls"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::~Mpls()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return (traffic_eng !=  nullptr && traffic_eng->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(traffic_eng != nullptr)
    {
        _children["traffic-eng"] = traffic_eng;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-eng")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::TrafficEng()
    :
    load_share{YType::uint32, "load-share"},
    name{YType::str, "name"}
        ,
    affinity_mask(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AffinityMask>())
    , auto_bw(nullptr) // presence node
    , autoroute(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute>())
    , backup_bw(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw>())
    , bandwidth(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth>())
    , bfd(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd>())
    , binding_sid(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid>())
    , exp(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp>())
    , exp_bundle(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle>())
    , fast_reroute(nullptr) // presence node
    , forwarding_adjacency(nullptr) // presence node
    , interface(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_>())
    , path_option(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption>())
    , path_selection(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection>())
    , priority(nullptr) // presence node
    , record_route(nullptr) // presence node
{
    affinity_mask->parent = this;
    autoroute->parent = this;
    backup_bw->parent = this;
    bandwidth->parent = this;
    bfd->parent = this;
    binding_sid->parent = this;
    exp->parent = this;
    exp_bundle->parent = this;
    interface->parent = this;
    path_option->parent = this;
    path_selection->parent = this;

    yang_name = "traffic-eng"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::~TrafficEng()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::has_data() const
{
    if (is_presence_container) return true;
    return load_share.is_set
	|| name.is_set
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (auto_bw !=  nullptr && auto_bw->has_data())
	|| (autoroute !=  nullptr && autoroute->has_data())
	|| (backup_bw !=  nullptr && backup_bw->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (binding_sid !=  nullptr && binding_sid->has_data())
	|| (exp !=  nullptr && exp->has_data())
	|| (exp_bundle !=  nullptr && exp_bundle->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (forwarding_adjacency !=  nullptr && forwarding_adjacency->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (path_option !=  nullptr && path_option->has_data())
	|| (path_selection !=  nullptr && path_selection->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (record_route !=  nullptr && record_route->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_share.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (auto_bw !=  nullptr && auto_bw->has_operation())
	|| (autoroute !=  nullptr && autoroute->has_operation())
	|| (backup_bw !=  nullptr && backup_bw->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (binding_sid !=  nullptr && binding_sid->has_operation())
	|| (exp !=  nullptr && exp->has_operation())
	|| (exp_bundle !=  nullptr && exp_bundle->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (forwarding_adjacency !=  nullptr && forwarding_adjacency->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (path_option !=  nullptr && path_option->has_operation())
	|| (path_selection !=  nullptr && path_selection->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (record_route !=  nullptr && record_route->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-eng";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_share.is_set || is_set(load_share.yfilter)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask == nullptr)
        {
            affinity_mask = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AffinityMask>();
        }
        return affinity_mask;
    }

    if(child_yang_name == "auto-bw")
    {
        if(auto_bw == nullptr)
        {
            auto_bw = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw>();
        }
        return auto_bw;
    }

    if(child_yang_name == "autoroute")
    {
        if(autoroute == nullptr)
        {
            autoroute = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute>();
        }
        return autoroute;
    }

    if(child_yang_name == "backup-bw")
    {
        if(backup_bw == nullptr)
        {
            backup_bw = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw>();
        }
        return backup_bw;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "binding-sid")
    {
        if(binding_sid == nullptr)
        {
            binding_sid = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid>();
        }
        return binding_sid;
    }

    if(child_yang_name == "exp")
    {
        if(exp == nullptr)
        {
            exp = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp>();
        }
        return exp;
    }

    if(child_yang_name == "exp-bundle")
    {
        if(exp_bundle == nullptr)
        {
            exp_bundle = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle>();
        }
        return exp_bundle;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "forwarding-adjacency")
    {
        if(forwarding_adjacency == nullptr)
        {
            forwarding_adjacency = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency>();
        }
        return forwarding_adjacency;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_>();
        }
        return interface;
    }

    if(child_yang_name == "path-option")
    {
        if(path_option == nullptr)
        {
            path_option = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption>();
        }
        return path_option;
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection == nullptr)
        {
            path_selection = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection>();
        }
        return path_selection;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "record-route")
    {
        if(record_route == nullptr)
        {
            record_route = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute>();
        }
        return record_route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(affinity_mask != nullptr)
    {
        _children["affinity-mask"] = affinity_mask;
    }

    if(auto_bw != nullptr)
    {
        _children["auto-bw"] = auto_bw;
    }

    if(autoroute != nullptr)
    {
        _children["autoroute"] = autoroute;
    }

    if(backup_bw != nullptr)
    {
        _children["backup-bw"] = backup_bw;
    }

    if(bandwidth != nullptr)
    {
        _children["bandwidth"] = bandwidth;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(binding_sid != nullptr)
    {
        _children["binding-sid"] = binding_sid;
    }

    if(exp != nullptr)
    {
        _children["exp"] = exp;
    }

    if(exp_bundle != nullptr)
    {
        _children["exp-bundle"] = exp_bundle;
    }

    if(fast_reroute != nullptr)
    {
        _children["fast-reroute"] = fast_reroute;
    }

    if(forwarding_adjacency != nullptr)
    {
        _children["forwarding-adjacency"] = forwarding_adjacency;
    }

    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    if(path_option != nullptr)
    {
        _children["path-option"] = path_option;
    }

    if(path_selection != nullptr)
    {
        _children["path-selection"] = path_selection;
    }

    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    if(record_route != nullptr)
    {
        _children["record-route"] = record_route;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-share")
    {
        load_share = value;
        load_share.value_namespace = name_space;
        load_share.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-share")
    {
        load_share.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-mask" || name == "auto-bw" || name == "autoroute" || name == "backup-bw" || name == "bandwidth" || name == "bfd" || name == "binding-sid" || name == "exp" || name == "exp-bundle" || name == "fast-reroute" || name == "forwarding-adjacency" || name == "interface" || name == "path-option" || name == "path-selection" || name == "priority" || name == "record-route" || name == "load-share" || name == "name")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{

    yang_name = "affinity-mask"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AffinityMask::~AffinityMask()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AffinityMask::has_data() const
{
    if (is_presence_container) return true;
    return affinity.is_set
	|| mask.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AffinityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AffinityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AffinityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AffinityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AffinityMask::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AffinityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "mask")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::AutoBw()
    :
    frequency{YType::uint32, "frequency"},
    collect_bw{YType::empty, "collect-bw"},
    adjustment_threshold{YType::uint8, "adjustment-threshold"},
    max_bw{YType::uint32, "max-bw"},
    min_bw{YType::uint32, "min-bw"}
        ,
    overflow_limit(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::OverflowLimit>())
{
    overflow_limit->parent = this;

    yang_name = "auto-bw"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::~AutoBw()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::has_data() const
{
    if (is_presence_container) return true;
    return frequency.is_set
	|| collect_bw.is_set
	|| adjustment_threshold.is_set
	|| max_bw.is_set
	|| min_bw.is_set
	|| (overflow_limit !=  nullptr && overflow_limit->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(collect_bw.yfilter)
	|| ydk::is_set(adjustment_threshold.yfilter)
	|| ydk::is_set(max_bw.yfilter)
	|| ydk::is_set(min_bw.yfilter)
	|| (overflow_limit !=  nullptr && overflow_limit->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (collect_bw.is_set || is_set(collect_bw.yfilter)) leaf_name_data.push_back(collect_bw.get_name_leafdata());
    if (adjustment_threshold.is_set || is_set(adjustment_threshold.yfilter)) leaf_name_data.push_back(adjustment_threshold.get_name_leafdata());
    if (max_bw.is_set || is_set(max_bw.yfilter)) leaf_name_data.push_back(max_bw.get_name_leafdata());
    if (min_bw.is_set || is_set(min_bw.yfilter)) leaf_name_data.push_back(min_bw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "overflow-limit")
    {
        if(overflow_limit == nullptr)
        {
            overflow_limit = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::OverflowLimit>();
        }
        return overflow_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(overflow_limit != nullptr)
    {
        _children["overflow-limit"] = overflow_limit;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collect-bw")
    {
        collect_bw = value;
        collect_bw.value_namespace = name_space;
        collect_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjustment-threshold")
    {
        adjustment_threshold = value;
        adjustment_threshold.value_namespace = name_space;
        adjustment_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bw")
    {
        max_bw = value;
        max_bw.value_namespace = name_space;
        max_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-bw")
    {
        min_bw = value;
        min_bw.value_namespace = name_space;
        min_bw.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "collect-bw")
    {
        collect_bw.yfilter = yfilter;
    }
    if(value_path == "adjustment-threshold")
    {
        adjustment_threshold.yfilter = yfilter;
    }
    if(value_path == "max-bw")
    {
        max_bw.yfilter = yfilter;
    }
    if(value_path == "min-bw")
    {
        min_bw.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "overflow-limit" || name == "frequency" || name == "collect-bw" || name == "adjustment-threshold" || name == "max-bw" || name == "min-bw")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::OverflowLimit::OverflowLimit()
    :
    limit{YType::uint8, "limit"},
    overflow_threshold{YType::uint8, "overflow-threshold"}
{

    yang_name = "overflow-limit"; yang_parent_name = "auto-bw"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::OverflowLimit::~OverflowLimit()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::OverflowLimit::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| overflow_threshold.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::OverflowLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(overflow_threshold.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::OverflowLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overflow-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::OverflowLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (overflow_threshold.is_set || is_set(overflow_threshold.yfilter)) leaf_name_data.push_back(overflow_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::OverflowLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::OverflowLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::OverflowLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-threshold")
    {
        overflow_threshold = value;
        overflow_threshold.value_namespace = name_space;
        overflow_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::OverflowLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "overflow-threshold")
    {
        overflow_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::AutoBw::OverflowLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "overflow-threshold")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Autoroute()
    :
    announce{YType::empty, "announce"},
    destination{YType::empty, "destination"}
        ,
    metric(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric>())
{
    metric->parent = this;

    yang_name = "autoroute"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::~Autoroute()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::has_data() const
{
    if (is_presence_container) return true;
    return announce.is_set
	|| destination.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(announce.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announce.is_set || is_set(announce.yfilter)) leaf_name_data.push_back(announce.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "announce")
    {
        announce = value;
        announce.value_namespace = name_space;
        announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "announce")
    {
        announce.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "announce" || name == "destination")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::Metric()
    :
    range{YType::uint32, "range"},
    absolute{YType::uint32, "absolute"},
    relative{YType::int8, "relative"}
{

    yang_name = "metric"; yang_parent_name = "autoroute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::~Metric()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| absolute.is_set
	|| relative.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(absolute.yfilter)
	|| ydk::is_set(relative.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (absolute.is_set || is_set(absolute.yfilter)) leaf_name_data.push_back(absolute.get_name_leafdata());
    if (relative.is_set || is_set(relative.yfilter)) leaf_name_data.push_back(relative.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absolute")
    {
        absolute = value;
        absolute.value_namespace = name_space;
        absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "relative")
    {
        relative = value;
        relative.value_namespace = name_space;
        relative.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "absolute")
    {
        absolute.yfilter = yfilter;
    }
    if(value_path == "relative")
    {
        relative.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "absolute" || name == "relative")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::BackupBw()
    :
    bandwidth{YType::uint32, "bandwidth"}
        ,
    sub_pool(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool>())
    , class_type(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType>())
    , global_pool(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool>())
{
    sub_pool->parent = this;
    class_type->parent = this;
    global_pool->parent = this;

    yang_name = "backup-bw"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::~BackupBw()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::has_data() const
{
    if (is_presence_container) return true;
    return bandwidth.is_set
	|| (sub_pool !=  nullptr && sub_pool->has_data())
	|| (class_type !=  nullptr && class_type->has_data())
	|| (global_pool !=  nullptr && global_pool->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| (sub_pool !=  nullptr && sub_pool->has_operation())
	|| (class_type !=  nullptr && class_type->has_operation())
	|| (global_pool !=  nullptr && global_pool->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-bw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sub-pool")
    {
        if(sub_pool == nullptr)
        {
            sub_pool = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool>();
        }
        return sub_pool;
    }

    if(child_yang_name == "class-type")
    {
        if(class_type == nullptr)
        {
            class_type = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType>();
        }
        return class_type;
    }

    if(child_yang_name == "global-pool")
    {
        if(global_pool == nullptr)
        {
            global_pool = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool>();
        }
        return global_pool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sub_pool != nullptr)
    {
        _children["sub-pool"] = sub_pool;
    }

    if(class_type != nullptr)
    {
        _children["class-type"] = class_type;
    }

    if(global_pool != nullptr)
    {
        _children["global-pool"] = global_pool;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-pool" || name == "class-type" || name == "global-pool" || name == "bandwidth")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPool()
    :
    unlimited{YType::empty, "unlimited"}
        ,
    sub_pool_config(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig>())
{
    sub_pool_config->parent = this;

    yang_name = "sub-pool"; yang_parent_name = "backup-bw"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::~SubPool()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::has_data() const
{
    if (is_presence_container) return true;
    return unlimited.is_set
	|| (sub_pool_config !=  nullptr && sub_pool_config->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unlimited.yfilter)
	|| (sub_pool_config !=  nullptr && sub_pool_config->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unlimited.is_set || is_set(unlimited.yfilter)) leaf_name_data.push_back(unlimited.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sub-pool-config")
    {
        if(sub_pool_config == nullptr)
        {
            sub_pool_config = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig>();
        }
        return sub_pool_config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sub_pool_config != nullptr)
    {
        _children["sub-pool-config"] = sub_pool_config;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unlimited")
    {
        unlimited = value;
        unlimited.value_namespace = name_space;
        unlimited.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unlimited")
    {
        unlimited.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-pool-config" || name == "unlimited")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::SubPoolConfig()
    :
    bandwidth{YType::uint32, "bandwidth"}
        ,
    class_type(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType>())
    , global_pool(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool>())
{
    class_type->parent = this;
    global_pool->parent = this;

    yang_name = "sub-pool-config"; yang_parent_name = "sub-pool"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::~SubPoolConfig()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::has_data() const
{
    if (is_presence_container) return true;
    return bandwidth.is_set
	|| (class_type !=  nullptr && class_type->has_data())
	|| (global_pool !=  nullptr && global_pool->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| (class_type !=  nullptr && class_type->has_operation())
	|| (global_pool !=  nullptr && global_pool->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-pool-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-type")
    {
        if(class_type == nullptr)
        {
            class_type = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType>();
        }
        return class_type;
    }

    if(child_yang_name == "global-pool")
    {
        if(global_pool == nullptr)
        {
            global_pool = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool>();
        }
        return global_pool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(class_type != nullptr)
    {
        _children["class-type"] = class_type;
    }

    if(global_pool != nullptr)
    {
        _children["global-pool"] = global_pool;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-type" || name == "global-pool" || name == "bandwidth")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::ClassType()
    :
    class_type_num{YType::uint8, "class-type-num"},
    bandwidth{YType::uint32, "bandwidth"},
    unlimited{YType::empty, "unlimited"}
{

    yang_name = "class-type"; yang_parent_name = "sub-pool-config"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::~ClassType()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::has_data() const
{
    if (is_presence_container) return true;
    return class_type_num.is_set
	|| bandwidth.is_set
	|| unlimited.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_type_num.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(unlimited.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_type_num.is_set || is_set(class_type_num.yfilter)) leaf_name_data.push_back(class_type_num.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (unlimited.is_set || is_set(unlimited.yfilter)) leaf_name_data.push_back(unlimited.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-type-num")
    {
        class_type_num = value;
        class_type_num.value_namespace = name_space;
        class_type_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unlimited")
    {
        unlimited = value;
        unlimited.value_namespace = name_space;
        unlimited.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-type-num")
    {
        class_type_num.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "unlimited")
    {
        unlimited.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-type-num" || name == "bandwidth" || name == "unlimited")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::GlobalPool()
    :
    bandwidth{YType::uint32, "bandwidth"},
    unlimited{YType::empty, "unlimited"}
{

    yang_name = "global-pool"; yang_parent_name = "sub-pool-config"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::~GlobalPool()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::has_data() const
{
    if (is_presence_container) return true;
    return bandwidth.is_set
	|| unlimited.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(unlimited.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (unlimited.is_set || is_set(unlimited.yfilter)) leaf_name_data.push_back(unlimited.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unlimited")
    {
        unlimited = value;
        unlimited.value_namespace = name_space;
        unlimited.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "unlimited")
    {
        unlimited.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "unlimited")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::ClassType()
    :
    class_type_num{YType::uint8, "class-type-num"},
    bandwidth{YType::uint32, "bandwidth"},
    unlimited{YType::empty, "unlimited"}
{

    yang_name = "class-type"; yang_parent_name = "backup-bw"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::~ClassType()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::has_data() const
{
    if (is_presence_container) return true;
    return class_type_num.is_set
	|| bandwidth.is_set
	|| unlimited.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_type_num.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(unlimited.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_type_num.is_set || is_set(class_type_num.yfilter)) leaf_name_data.push_back(class_type_num.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (unlimited.is_set || is_set(unlimited.yfilter)) leaf_name_data.push_back(unlimited.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-type-num")
    {
        class_type_num = value;
        class_type_num.value_namespace = name_space;
        class_type_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unlimited")
    {
        unlimited = value;
        unlimited.value_namespace = name_space;
        unlimited.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-type-num")
    {
        class_type_num.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "unlimited")
    {
        unlimited.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-type-num" || name == "bandwidth" || name == "unlimited")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::GlobalPool()
    :
    bandwidth{YType::uint32, "bandwidth"},
    unlimited{YType::empty, "unlimited"}
{

    yang_name = "global-pool"; yang_parent_name = "backup-bw"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::~GlobalPool()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::has_data() const
{
    if (is_presence_container) return true;
    return bandwidth.is_set
	|| unlimited.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(unlimited.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (unlimited.is_set || is_set(unlimited.yfilter)) leaf_name_data.push_back(unlimited.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unlimited")
    {
        unlimited = value;
        unlimited.value_namespace = name_space;
        unlimited.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "unlimited")
    {
        unlimited.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "unlimited")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::Bandwidth()
    :
    bw{YType::uint32, "bw"},
    class_type{YType::uint8, "class-type"},
    sub_pool{YType::uint32, "sub-pool"}
{

    yang_name = "bandwidth"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return bw.is_set
	|| class_type.is_set
	|| sub_pool.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bw.yfilter)
	|| ydk::is_set(class_type.yfilter)
	|| ydk::is_set(sub_pool.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw.is_set || is_set(bw.yfilter)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (class_type.is_set || is_set(class_type.yfilter)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (sub_pool.is_set || is_set(sub_pool.yfilter)) leaf_name_data.push_back(sub_pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bw")
    {
        bw = value;
        bw.value_namespace = name_space;
        bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-type")
    {
        class_type = value;
        class_type.value_namespace = name_space;
        class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-pool")
    {
        sub_pool = value;
        sub_pool.value_namespace = name_space;
        sub_pool.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bw")
    {
        bw.yfilter = yfilter;
    }
    if(value_path == "class-type")
    {
        class_type.yfilter = yfilter;
    }
    if(value_path == "sub-pool")
    {
        sub_pool.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw" || name == "class-type" || name == "sub-pool")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::Bfd()
    :
    sbfd{YType::str, "sbfd"}
{

    yang_name = "bfd"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::~Bfd()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return sbfd.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sbfd.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sbfd.is_set || is_set(sbfd.yfilter)) leaf_name_data.push_back(sbfd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sbfd")
    {
        sbfd = value;
        sbfd.value_namespace = name_space;
        sbfd.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sbfd")
    {
        sbfd.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sbfd")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::BindingSid()
    :
    label{YType::uint32, "label"}
{

    yang_name = "binding-sid"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::~BindingSid()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::Exp()
    :
    exp_value{YType::uint8, "exp-value"},
    default_{YType::empty, "default"}
{

    yang_name = "exp"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::~Exp()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : exp_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::has_operation() const
{
    for (auto const & leaf : exp_value.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(exp_value.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    auto exp_value_name_datas = exp_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), exp_value_name_datas.begin(), exp_value_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exp-value")
    {
        exp_value.append(value);
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exp-value")
    {
        exp_value.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exp-value" || name == "default")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::ExpBundle()
    :
    master{YType::empty, "master"}
        ,
    member(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member>())
{
    member->parent = this;

    yang_name = "exp-bundle"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::~ExpBundle()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::has_data() const
{
    if (is_presence_container) return true;
    return master.is_set
	|| (member !=  nullptr && member->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(master.yfilter)
	|| (member !=  nullptr && member->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exp-bundle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master.is_set || is_set(master.yfilter)) leaf_name_data.push_back(master.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member")
    {
        if(member == nullptr)
        {
            member = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member>();
        }
        return member;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(member != nullptr)
    {
        _children["member"] = member;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "master")
    {
        master = value;
        master.value_namespace = name_space;
        master.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "master")
    {
        master.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member" || name == "master")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member::Member()
    :
    tunnel{YType::uint32, "Tunnel"}
{

    yang_name = "member"; yang_parent_name = "exp-bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member::~Member()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member::has_data() const
{
    if (is_presence_container) return true;
    return tunnel.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Tunnel")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::FastReroute()
    :
    bw_protect{YType::empty, "bw-protect"},
    node_protect{YType::empty, "node-protect"}
{

    yang_name = "fast-reroute"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::~FastReroute()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::has_data() const
{
    if (is_presence_container) return true;
    return bw_protect.is_set
	|| node_protect.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bw_protect.yfilter)
	|| ydk::is_set(node_protect.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw_protect.is_set || is_set(bw_protect.yfilter)) leaf_name_data.push_back(bw_protect.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.yfilter)) leaf_name_data.push_back(node_protect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bw-protect")
    {
        bw_protect = value;
        bw_protect.value_namespace = name_space;
        bw_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
        node_protect.value_namespace = name_space;
        node_protect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bw-protect")
    {
        bw_protect.yfilter = yfilter;
    }
    if(value_path == "node-protect")
    {
        node_protect.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-protect" || name == "node-protect")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency::ForwardingAdjacency()
    :
    holdtime{YType::uint32, "holdtime"}
{

    yang_name = "forwarding-adjacency"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency::~ForwardingAdjacency()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency::has_data() const
{
    if (is_presence_container) return true;
    return holdtime.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holdtime.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-adjacency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holdtime")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Interface_()
    :
    down(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down>())
{
    down->parent = this;

    yang_name = "interface"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::~Interface_()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::has_data() const
{
    if (is_presence_container) return true;
    return (down !=  nullptr && down->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::has_operation() const
{
    return is_set(yfilter)
	|| (down !=  nullptr && down->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "down")
    {
        if(down == nullptr)
        {
            down = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down>();
        }
        return down;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(down != nullptr)
    {
        _children["down"] = down;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down::Down()
    :
    delay{YType::uint32, "delay"}
{

    yang_name = "down"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down::~Down()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down::has_data() const
{
    if (is_presence_container) return true;
    return delay.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::PathOption()
    :
    working(this, {"id"})
    , protect(this, {"id"})
{

    yang_name = "path-option"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::~PathOption()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<working.len(); index++)
    {
        if(working[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<protect.len(); index++)
    {
        if(protect[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::has_operation() const
{
    for (std::size_t index=0; index<working.len(); index++)
    {
        if(working[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<protect.len(); index++)
    {
        if(protect[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "working")
    {
        auto ent_ = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working>();
        ent_->parent = this;
        working.append(ent_);
        return ent_;
    }

    if(child_yang_name == "protect")
    {
        auto ent_ = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect>();
        ent_->parent = this;
        protect.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : working.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : protect.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "working" || name == "protect")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Working()
    :
    id{YType::uint32, "id"}
        ,
    dynamic(nullptr) // presence node
    , explicit_(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit>())
    , segment_routing(nullptr) // presence node
{
    explicit_->parent = this;

    yang_name = "working"; yang_parent_name = "path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::~Working()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (dynamic !=  nullptr && dynamic->has_data())
	|| (explicit_ !=  nullptr && explicit_->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation())
	|| (explicit_ !=  nullptr && explicit_->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "working";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic>();
        }
        return dynamic;
    }

    if(child_yang_name == "explicit")
    {
        if(explicit_ == nullptr)
        {
            explicit_ = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit>();
        }
        return explicit_;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting>();
        }
        return segment_routing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dynamic != nullptr)
    {
        _children["dynamic"] = dynamic;
    }

    if(explicit_ != nullptr)
    {
        _children["explicit"] = explicit_;
    }

    if(segment_routing != nullptr)
    {
        _children["segment-routing"] = segment_routing;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "explicit" || name == "segment-routing" || name == "id")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Dynamic()
    :
    pce{YType::empty, "pce"},
    address{YType::str, "address"},
    verbatim{YType::empty, "verbatim"},
    lockdown{YType::empty, "lockdown"},
    sticky{YType::empty, "sticky"},
    attributes{YType::str, "attributes"}
        ,
    segment_routing(nullptr) // presence node
    , bandwidth(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth>())
{
    bandwidth->parent = this;

    yang_name = "dynamic"; yang_parent_name = "working"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::~Dynamic()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return pce.is_set
	|| address.is_set
	|| verbatim.is_set
	|| lockdown.is_set
	|| sticky.is_set
	|| attributes.is_set
	|| (segment_routing !=  nullptr && segment_routing->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pce.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(verbatim.yfilter)
	|| ydk::is_set(lockdown.yfilter)
	|| ydk::is_set(sticky.yfilter)
	|| ydk::is_set(attributes.yfilter)
	|| (segment_routing !=  nullptr && segment_routing->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pce.is_set || is_set(pce.yfilter)) leaf_name_data.push_back(pce.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.yfilter)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (sticky.is_set || is_set(sticky.yfilter)) leaf_name_data.push_back(sticky.get_name_leafdata());
    if (attributes.is_set || is_set(attributes.yfilter)) leaf_name_data.push_back(attributes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting>();
        }
        return segment_routing;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth>();
        }
        return bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(segment_routing != nullptr)
    {
        _children["segment-routing"] = segment_routing;
    }

    if(bandwidth != nullptr)
    {
        _children["bandwidth"] = bandwidth;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pce")
    {
        pce = value;
        pce.value_namespace = name_space;
        pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
        lockdown.value_namespace = name_space;
        lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sticky")
    {
        sticky = value;
        sticky.value_namespace = name_space;
        sticky.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attributes")
    {
        attributes = value;
        attributes.value_namespace = name_space;
        attributes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pce")
    {
        pce.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
    if(value_path == "lockdown")
    {
        lockdown.yfilter = yfilter;
    }
    if(value_path == "sticky")
    {
        sticky.yfilter = yfilter;
    }
    if(value_path == "attributes")
    {
        attributes.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing" || name == "bandwidth" || name == "pce" || name == "address" || name == "verbatim" || name == "lockdown" || name == "sticky" || name == "attributes")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::SegmentRouting()
    :
    attributes{YType::str, "attributes"},
    lockdown{YType::empty, "lockdown"},
    sticky{YType::empty, "sticky"},
    pce{YType::empty, "pce"},
    address{YType::str, "address"},
    verbatim{YType::empty, "verbatim"}
{

    yang_name = "segment-routing"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::~SegmentRouting()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::has_data() const
{
    if (is_presence_container) return true;
    return attributes.is_set
	|| lockdown.is_set
	|| sticky.is_set
	|| pce.is_set
	|| address.is_set
	|| verbatim.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attributes.yfilter)
	|| ydk::is_set(lockdown.yfilter)
	|| ydk::is_set(sticky.yfilter)
	|| ydk::is_set(pce.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(verbatim.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attributes.is_set || is_set(attributes.yfilter)) leaf_name_data.push_back(attributes.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.yfilter)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (sticky.is_set || is_set(sticky.yfilter)) leaf_name_data.push_back(sticky.get_name_leafdata());
    if (pce.is_set || is_set(pce.yfilter)) leaf_name_data.push_back(pce.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attributes")
    {
        attributes = value;
        attributes.value_namespace = name_space;
        attributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
        lockdown.value_namespace = name_space;
        lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sticky")
    {
        sticky = value;
        sticky.value_namespace = name_space;
        sticky.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce")
    {
        pce = value;
        pce.value_namespace = name_space;
        pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attributes")
    {
        attributes.yfilter = yfilter;
    }
    if(value_path == "lockdown")
    {
        lockdown.yfilter = yfilter;
    }
    if(value_path == "sticky")
    {
        sticky.yfilter = yfilter;
    }
    if(value_path == "pce")
    {
        pce.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "lockdown" || name == "sticky" || name == "pce" || name == "address" || name == "verbatim")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    sub_pool{YType::uint32, "sub-pool"}
{

    yang_name = "bandwidth"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return bandwidth.is_set
	|| sub_pool.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(sub_pool.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (sub_pool.is_set || is_set(sub_pool.yfilter)) leaf_name_data.push_back(sub_pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-pool")
    {
        sub_pool = value;
        sub_pool.value_namespace = name_space;
        sub_pool.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "sub-pool")
    {
        sub_pool.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "sub-pool")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit::Explicit()
    :
    identifier{YType::uint16, "identifier"},
    name{YType::str, "name"},
    segment_routing{YType::empty, "segment-routing"},
    verbatim{YType::empty, "verbatim"},
    attributes{YType::str, "attributes"},
    lockdown{YType::empty, "lockdown"},
    sticky{YType::empty, "sticky"}
        ,
    bandwidth(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit::Bandwidth>())
{
    bandwidth->parent = this;

    yang_name = "explicit"; yang_parent_name = "working"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit::~Explicit()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit::has_data() const
{
    if (is_presence_container) return true;
    return identifier.is_set
	|| name.is_set
	|| segment_routing.is_set
	|| verbatim.is_set
	|| attributes.is_set
	|| lockdown.is_set
	|| sticky.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(segment_routing.yfilter)
	|| ydk::is_set(verbatim.yfilter)
	|| ydk::is_set(attributes.yfilter)
	|| ydk::is_set(lockdown.yfilter)
	|| ydk::is_set(sticky.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.yfilter)) leaf_name_data.push_back(segment_routing.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());
    if (attributes.is_set || is_set(attributes.yfilter)) leaf_name_data.push_back(attributes.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.yfilter)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (sticky.is_set || is_set(sticky.yfilter)) leaf_name_data.push_back(sticky.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit::Bandwidth>();
        }
        return bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bandwidth != nullptr)
    {
        _children["bandwidth"] = bandwidth;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
        segment_routing.value_namespace = name_space;
        segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attributes")
    {
        attributes = value;
        attributes.value_namespace = name_space;
        attributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
        lockdown.value_namespace = name_space;
        lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sticky")
    {
        sticky = value;
        sticky.value_namespace = name_space;
        sticky.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "segment-routing")
    {
        segment_routing.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
    if(value_path == "attributes")
    {
        attributes.yfilter = yfilter;
    }
    if(value_path == "lockdown")
    {
        lockdown.yfilter = yfilter;
    }
    if(value_path == "sticky")
    {
        sticky.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "identifier" || name == "name" || name == "segment-routing" || name == "verbatim" || name == "attributes" || name == "lockdown" || name == "sticky")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    sub_pool{YType::uint32, "sub-pool"}
{

    yang_name = "bandwidth"; yang_parent_name = "explicit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return bandwidth.is_set
	|| sub_pool.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(sub_pool.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (sub_pool.is_set || is_set(sub_pool.yfilter)) leaf_name_data.push_back(sub_pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-pool")
    {
        sub_pool = value;
        sub_pool.value_namespace = name_space;
        sub_pool.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "sub-pool")
    {
        sub_pool.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "sub-pool")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting::SegmentRouting()
    :
    lockdown{YType::empty, "lockdown"},
    sticky{YType::empty, "sticky"}
{

    yang_name = "segment-routing"; yang_parent_name = "working"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting::~SegmentRouting()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting::has_data() const
{
    if (is_presence_container) return true;
    return lockdown.is_set
	|| sticky.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lockdown.yfilter)
	|| ydk::is_set(sticky.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lockdown.is_set || is_set(lockdown.yfilter)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (sticky.is_set || is_set(sticky.yfilter)) leaf_name_data.push_back(sticky.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lockdown")
    {
        lockdown = value;
        lockdown.value_namespace = name_space;
        lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sticky")
    {
        sticky = value;
        sticky.value_namespace = name_space;
        sticky.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lockdown")
    {
        lockdown.yfilter = yfilter;
    }
    if(value_path == "sticky")
    {
        sticky.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lockdown" || name == "sticky")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Protect()
    :
    id{YType::str, "id"}
        ,
    diverse(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse>())
    , explicit_(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit>())
    , list(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List>())
{
    diverse->parent = this;
    explicit_->parent = this;
    list->parent = this;

    yang_name = "protect"; yang_parent_name = "path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::~Protect()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (diverse !=  nullptr && diverse->has_data())
	|| (explicit_ !=  nullptr && explicit_->has_data())
	|| (list !=  nullptr && list->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (diverse !=  nullptr && diverse->has_operation())
	|| (explicit_ !=  nullptr && explicit_->has_operation())
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diverse")
    {
        if(diverse == nullptr)
        {
            diverse = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse>();
        }
        return diverse;
    }

    if(child_yang_name == "explicit")
    {
        if(explicit_ == nullptr)
        {
            explicit_ = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit>();
        }
        return explicit_;
    }

    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(diverse != nullptr)
    {
        _children["diverse"] = diverse;
    }

    if(explicit_ != nullptr)
    {
        _children["explicit"] = explicit_;
    }

    if(list != nullptr)
    {
        _children["list"] = list;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diverse" || name == "explicit" || name == "list" || name == "id")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Diverse()
    :
    node{YType::empty, "node"},
    srlg{YType::empty, "srlg"},
    segment_routing{YType::empty, "segment-routing"},
    non_revertive{YType::empty, "non-revertive"},
    pce{YType::empty, "pce"},
    address{YType::str, "address"},
    verbatim{YType::empty, "verbatim"},
    lockdown{YType::empty, "lockdown"},
    attributes{YType::str, "attributes"}
        ,
    bandwidth(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth>())
{
    bandwidth->parent = this;

    yang_name = "diverse"; yang_parent_name = "protect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::~Diverse()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::has_data() const
{
    if (is_presence_container) return true;
    return node.is_set
	|| srlg.is_set
	|| segment_routing.is_set
	|| non_revertive.is_set
	|| pce.is_set
	|| address.is_set
	|| verbatim.is_set
	|| lockdown.is_set
	|| attributes.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(srlg.yfilter)
	|| ydk::is_set(segment_routing.yfilter)
	|| ydk::is_set(non_revertive.yfilter)
	|| ydk::is_set(pce.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(verbatim.yfilter)
	|| ydk::is_set(lockdown.yfilter)
	|| ydk::is_set(attributes.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diverse";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (srlg.is_set || is_set(srlg.yfilter)) leaf_name_data.push_back(srlg.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.yfilter)) leaf_name_data.push_back(segment_routing.get_name_leafdata());
    if (non_revertive.is_set || is_set(non_revertive.yfilter)) leaf_name_data.push_back(non_revertive.get_name_leafdata());
    if (pce.is_set || is_set(pce.yfilter)) leaf_name_data.push_back(pce.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.yfilter)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (attributes.is_set || is_set(attributes.yfilter)) leaf_name_data.push_back(attributes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth>();
        }
        return bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bandwidth != nullptr)
    {
        _children["bandwidth"] = bandwidth;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg")
    {
        srlg = value;
        srlg.value_namespace = name_space;
        srlg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
        segment_routing.value_namespace = name_space;
        segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-revertive")
    {
        non_revertive = value;
        non_revertive.value_namespace = name_space;
        non_revertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce")
    {
        pce = value;
        pce.value_namespace = name_space;
        pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
        lockdown.value_namespace = name_space;
        lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attributes")
    {
        attributes = value;
        attributes.value_namespace = name_space;
        attributes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "srlg")
    {
        srlg.yfilter = yfilter;
    }
    if(value_path == "segment-routing")
    {
        segment_routing.yfilter = yfilter;
    }
    if(value_path == "non-revertive")
    {
        non_revertive.yfilter = yfilter;
    }
    if(value_path == "pce")
    {
        pce.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
    if(value_path == "lockdown")
    {
        lockdown.yfilter = yfilter;
    }
    if(value_path == "attributes")
    {
        attributes.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "node" || name == "srlg" || name == "segment-routing" || name == "non-revertive" || name == "pce" || name == "address" || name == "verbatim" || name == "lockdown" || name == "attributes")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    sub_pool{YType::uint32, "sub-pool"}
{

    yang_name = "bandwidth"; yang_parent_name = "diverse"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return bandwidth.is_set
	|| sub_pool.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(sub_pool.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (sub_pool.is_set || is_set(sub_pool.yfilter)) leaf_name_data.push_back(sub_pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-pool")
    {
        sub_pool = value;
        sub_pool.value_namespace = name_space;
        sub_pool.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "sub-pool")
    {
        sub_pool.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "sub-pool")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit::Explicit()
    :
    identifier{YType::uint16, "identifier"},
    name{YType::str, "name"},
    segment_routing{YType::empty, "segment-routing"},
    non_revertive{YType::empty, "non-revertive"},
    verbatim{YType::empty, "verbatim"},
    attributes{YType::str, "attributes"}
        ,
    bandwidth(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit::Bandwidth>())
{
    bandwidth->parent = this;

    yang_name = "explicit"; yang_parent_name = "protect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit::~Explicit()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit::has_data() const
{
    if (is_presence_container) return true;
    return identifier.is_set
	|| name.is_set
	|| segment_routing.is_set
	|| non_revertive.is_set
	|| verbatim.is_set
	|| attributes.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(segment_routing.yfilter)
	|| ydk::is_set(non_revertive.yfilter)
	|| ydk::is_set(verbatim.yfilter)
	|| ydk::is_set(attributes.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.yfilter)) leaf_name_data.push_back(segment_routing.get_name_leafdata());
    if (non_revertive.is_set || is_set(non_revertive.yfilter)) leaf_name_data.push_back(non_revertive.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());
    if (attributes.is_set || is_set(attributes.yfilter)) leaf_name_data.push_back(attributes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit::Bandwidth>();
        }
        return bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bandwidth != nullptr)
    {
        _children["bandwidth"] = bandwidth;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
        segment_routing.value_namespace = name_space;
        segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-revertive")
    {
        non_revertive = value;
        non_revertive.value_namespace = name_space;
        non_revertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attributes")
    {
        attributes = value;
        attributes.value_namespace = name_space;
        attributes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "segment-routing")
    {
        segment_routing.yfilter = yfilter;
    }
    if(value_path == "non-revertive")
    {
        non_revertive.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
    if(value_path == "attributes")
    {
        attributes.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "identifier" || name == "name" || name == "segment-routing" || name == "non-revertive" || name == "verbatim" || name == "attributes")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    sub_pool{YType::uint32, "sub-pool"}
{

    yang_name = "bandwidth"; yang_parent_name = "explicit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return bandwidth.is_set
	|| sub_pool.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(sub_pool.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (sub_pool.is_set || is_set(sub_pool.yfilter)) leaf_name_data.push_back(sub_pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-pool")
    {
        sub_pool = value;
        sub_pool.value_namespace = name_space;
        sub_pool.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "sub-pool")
    {
        sub_pool.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "sub-pool")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::List()
    :
    identifier{YType::uint16, "identifier"},
    name{YType::str, "name"},
    segment_routing{YType::empty, "segment-routing"},
    non_revertive{YType::empty, "non-revertive"},
    attributes{YType::str, "attributes"},
    pce{YType::empty, "pce"},
    address{YType::str, "address"},
    verbatim{YType::empty, "verbatim"}
        ,
    bandwidth(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth>())
{
    bandwidth->parent = this;

    yang_name = "list"; yang_parent_name = "protect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::~List()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::has_data() const
{
    if (is_presence_container) return true;
    return identifier.is_set
	|| name.is_set
	|| segment_routing.is_set
	|| non_revertive.is_set
	|| attributes.is_set
	|| pce.is_set
	|| address.is_set
	|| verbatim.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(segment_routing.yfilter)
	|| ydk::is_set(non_revertive.yfilter)
	|| ydk::is_set(attributes.yfilter)
	|| ydk::is_set(pce.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(verbatim.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.yfilter)) leaf_name_data.push_back(segment_routing.get_name_leafdata());
    if (non_revertive.is_set || is_set(non_revertive.yfilter)) leaf_name_data.push_back(non_revertive.get_name_leafdata());
    if (attributes.is_set || is_set(attributes.yfilter)) leaf_name_data.push_back(attributes.get_name_leafdata());
    if (pce.is_set || is_set(pce.yfilter)) leaf_name_data.push_back(pce.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth>();
        }
        return bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bandwidth != nullptr)
    {
        _children["bandwidth"] = bandwidth;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
        segment_routing.value_namespace = name_space;
        segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-revertive")
    {
        non_revertive = value;
        non_revertive.value_namespace = name_space;
        non_revertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attributes")
    {
        attributes = value;
        attributes.value_namespace = name_space;
        attributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce")
    {
        pce = value;
        pce.value_namespace = name_space;
        pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "segment-routing")
    {
        segment_routing.yfilter = yfilter;
    }
    if(value_path == "non-revertive")
    {
        non_revertive.yfilter = yfilter;
    }
    if(value_path == "attributes")
    {
        attributes.yfilter = yfilter;
    }
    if(value_path == "pce")
    {
        pce.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "identifier" || name == "name" || name == "segment-routing" || name == "non-revertive" || name == "attributes" || name == "pce" || name == "address" || name == "verbatim")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    sub_pool{YType::uint32, "sub-pool"}
{

    yang_name = "bandwidth"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return bandwidth.is_set
	|| sub_pool.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(sub_pool.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (sub_pool.is_set || is_set(sub_pool.yfilter)) leaf_name_data.push_back(sub_pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-pool")
    {
        sub_pool = value;
        sub_pool.value_namespace = name_space;
        sub_pool.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "sub-pool")
    {
        sub_pool.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "sub-pool")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::PathSelection()
    :
    metric{YType::enumeration, "metric"},
    cost_limit{YType::uint32, "cost-limit"},
    hop_limit{YType::uint8, "hop-limit"},
    tiebreaker{YType::enumeration, "tiebreaker"}
        ,
    invalidation(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation>())
    , segment_routing(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting>())
{
    invalidation->parent = this;
    segment_routing->parent = this;

    yang_name = "path-selection"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::~PathSelection()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| cost_limit.is_set
	|| hop_limit.is_set
	|| tiebreaker.is_set
	|| (invalidation !=  nullptr && invalidation->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(cost_limit.yfilter)
	|| ydk::is_set(hop_limit.yfilter)
	|| ydk::is_set(tiebreaker.yfilter)
	|| (invalidation !=  nullptr && invalidation->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (cost_limit.is_set || is_set(cost_limit.yfilter)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (hop_limit.is_set || is_set(hop_limit.yfilter)) leaf_name_data.push_back(hop_limit.get_name_leafdata());
    if (tiebreaker.is_set || is_set(tiebreaker.yfilter)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalidation")
    {
        if(invalidation == nullptr)
        {
            invalidation = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation>();
        }
        return invalidation;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting>();
        }
        return segment_routing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(invalidation != nullptr)
    {
        _children["invalidation"] = invalidation;
    }

    if(segment_routing != nullptr)
    {
        _children["segment-routing"] = segment_routing;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-limit")
    {
        cost_limit = value;
        cost_limit.value_namespace = name_space;
        cost_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-limit")
    {
        hop_limit = value;
        hop_limit.value_namespace = name_space;
        hop_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker = value;
        tiebreaker.value_namespace = name_space;
        tiebreaker.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "cost-limit")
    {
        cost_limit.yfilter = yfilter;
    }
    if(value_path == "hop-limit")
    {
        hop_limit.yfilter = yfilter;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalidation" || name == "segment-routing" || name == "metric" || name == "cost-limit" || name == "hop-limit" || name == "tiebreaker")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::Invalidation()
    :
    value_{YType::int32, "value"},
    drop{YType::empty, "drop"}
{

    yang_name = "invalidation"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::~Invalidation()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| drop.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "drop")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::SegmentRouting()
    :
    adjacency{YType::enumeration, "adjacency"}
{

    yang_name = "segment-routing"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::~SegmentRouting()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::has_data() const
{
    if (is_presence_container) return true;
    return adjacency.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency.is_set || is_set(adjacency.yfilter)) leaf_name_data.push_back(adjacency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency")
    {
        adjacency = value;
        adjacency.value_namespace = name_space;
        adjacency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency")
    {
        adjacency.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::Priority()
    :
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"}
{

    yang_name = "priority"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::~Priority()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::has_data() const
{
    if (is_presence_container) return true;
    return setup_priority.is_set
	|| hold_priority.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-priority" || name == "hold-priority")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute::RecordRoute()
{

    yang_name = "record-route"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute::~RecordRoute()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "record-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Rbscp::Rbscp()
    :
    ack_split{YType::uint8, "ack-split"},
    delay{YType::empty, "delay"},
    input_drop{YType::uint8, "input-drop"},
    long_drop{YType::empty, "long-drop"},
    report{YType::empty, "report"},
    window_stuff{YType::uint8, "window-stuff"}
{

    yang_name = "rbscp"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Rbscp::~Rbscp()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Rbscp::has_data() const
{
    if (is_presence_container) return true;
    return ack_split.is_set
	|| delay.is_set
	|| input_drop.is_set
	|| long_drop.is_set
	|| report.is_set
	|| window_stuff.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Rbscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ack_split.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(input_drop.yfilter)
	|| ydk::is_set(long_drop.yfilter)
	|| ydk::is_set(report.yfilter)
	|| ydk::is_set(window_stuff.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Rbscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rbscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Rbscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack_split.is_set || is_set(ack_split.yfilter)) leaf_name_data.push_back(ack_split.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (input_drop.is_set || is_set(input_drop.yfilter)) leaf_name_data.push_back(input_drop.get_name_leafdata());
    if (long_drop.is_set || is_set(long_drop.yfilter)) leaf_name_data.push_back(long_drop.get_name_leafdata());
    if (report.is_set || is_set(report.yfilter)) leaf_name_data.push_back(report.get_name_leafdata());
    if (window_stuff.is_set || is_set(window_stuff.yfilter)) leaf_name_data.push_back(window_stuff.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Rbscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Rbscp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Rbscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack-split")
    {
        ack_split = value;
        ack_split.value_namespace = name_space;
        ack_split.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-drop")
    {
        input_drop = value;
        input_drop.value_namespace = name_space;
        input_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "long-drop")
    {
        long_drop = value;
        long_drop.value_namespace = name_space;
        long_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report")
    {
        report = value;
        report.value_namespace = name_space;
        report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-stuff")
    {
        window_stuff = value;
        window_stuff.value_namespace = name_space;
        window_stuff.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Rbscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack-split")
    {
        ack_split.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "input-drop")
    {
        input_drop.yfilter = yfilter;
    }
    if(value_path == "long-drop")
    {
        long_drop.yfilter = yfilter;
    }
    if(value_path == "report")
    {
        report.yfilter = yfilter;
    }
    if(value_path == "window-stuff")
    {
        window_stuff.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Rbscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack-split" || name == "delay" || name == "input-drop" || name == "long-drop" || name == "report" || name == "window-stuff")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::SrcPort::SrcPort()
    :
    port_num{YType::uint16, "port-num"},
    dynamic{YType::empty, "dynamic"}
{

    yang_name = "src-port"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::SrcPort::~SrcPort()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::SrcPort::has_data() const
{
    if (is_presence_container) return true;
    return port_num.is_set
	|| dynamic.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::SrcPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_num.yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::SrcPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::SrcPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_num.is_set || is_set(port_num.yfilter)) leaf_name_data.push_back(port_num.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::SrcPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::SrcPort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::SrcPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-num")
    {
        port_num = value;
        port_num.value_namespace = name_space;
        port_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::SrcPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-num")
    {
        port_num.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::SrcPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-num" || name == "dynamic")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Udlr::Udlr()
    :
    address_resolution{YType::empty, "address-resolution"},
    receive_only{YType::str, "receive-only"},
    send_only{YType::str, "send-only"}
{

    yang_name = "udlr"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Udlr::~Udlr()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Udlr::has_data() const
{
    if (is_presence_container) return true;
    return address_resolution.is_set
	|| receive_only.is_set
	|| send_only.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Udlr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_resolution.yfilter)
	|| ydk::is_set(receive_only.yfilter)
	|| ydk::is_set(send_only.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Udlr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udlr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Udlr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_resolution.is_set || is_set(address_resolution.yfilter)) leaf_name_data.push_back(address_resolution.get_name_leafdata());
    if (receive_only.is_set || is_set(receive_only.yfilter)) leaf_name_data.push_back(receive_only.get_name_leafdata());
    if (send_only.is_set || is_set(send_only.yfilter)) leaf_name_data.push_back(send_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Udlr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Udlr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Udlr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-resolution")
    {
        address_resolution = value;
        address_resolution.value_namespace = name_space;
        address_resolution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-only")
    {
        receive_only = value;
        receive_only.value_namespace = name_space;
        receive_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-only")
    {
        send_only = value;
        send_only.value_namespace = name_space;
        send_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Udlr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-resolution")
    {
        address_resolution.yfilter = yfilter;
    }
    if(value_path == "receive-only")
    {
        receive_only.yfilter = yfilter;
    }
    if(value_path == "send-only")
    {
        send_only.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Udlr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-resolution" || name == "receive-only" || name == "send-only")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Vlan::Vlan()
    :
    id1{YType::uint16, "id1"},
    hyphen{YType::empty, "hyphen"},
    id2{YType::uint16, "id2"}
{

    yang_name = "vlan"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Tunnel::Vlan::~Vlan()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return id1.is_set
	|| hyphen.is_set
	|| id2.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id1.yfilter)
	|| ydk::is_set(hyphen.yfilter)
	|| ydk::is_set(id2.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id1.is_set || is_set(id1.yfilter)) leaf_name_data.push_back(id1.get_name_leafdata());
    if (hyphen.is_set || is_set(hyphen.yfilter)) leaf_name_data.push_back(hyphen.get_name_leafdata());
    if (id2.is_set || is_set(id2.yfilter)) leaf_name_data.push_back(id2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Tunnel::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Tunnel::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Tunnel::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id1")
    {
        id1 = value;
        id1.value_namespace = name_space;
        id1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hyphen")
    {
        hyphen = value;
        hyphen.value_namespace = name_space;
        hyphen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id2")
    {
        id2 = value;
        id2.value_namespace = name_space;
        id2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id1")
    {
        id1.yfilter = yfilter;
    }
    if(value_path == "hyphen")
    {
        hyphen.yfilter = yfilter;
    }
    if(value_path == "id2")
    {
        id2.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id1" || name == "hyphen" || name == "id2")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Crypto::Crypto()
    :
    map(std::make_shared<Native::Interface::VirtualTemplate::Crypto::Map>())
    , ipsec(std::make_shared<Native::Interface::VirtualTemplate::Crypto::Ipsec>())
{
    map->parent = this;
    ipsec->parent = this;

    yang_name = "crypto"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Crypto::~Crypto()
{
}

bool Native::Interface::VirtualTemplate::Crypto::has_data() const
{
    if (is_presence_container) return true;
    return (map !=  nullptr && map->has_data())
	|| (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Interface::VirtualTemplate::Crypto::has_operation() const
{
    return is_set(yfilter)
	|| (map !=  nullptr && map->has_operation())
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Interface::VirtualTemplate::Crypto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:crypto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Crypto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Crypto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Interface::VirtualTemplate::Crypto::Map>();
        }
        return map;
    }

    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::VirtualTemplate::Crypto::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Crypto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map != nullptr)
    {
        _children["map"] = map;
    }

    if(ipsec != nullptr)
    {
        _children["ipsec"] = ipsec;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Crypto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Crypto::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Crypto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map" || name == "ipsec")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Crypto::Map::Map()
    :
    tag{YType::str, "tag"},
    redundancy{YType::str, "redundancy"},
    stateful{YType::empty, "stateful"}
{

    yang_name = "map"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Crypto::Map::~Map()
{
}

bool Native::Interface::VirtualTemplate::Crypto::Map::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set
	|| redundancy.is_set
	|| stateful.is_set;
}

bool Native::Interface::VirtualTemplate::Crypto::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(stateful.yfilter);
}

std::string Native::Interface::VirtualTemplate::Crypto::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Crypto::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Crypto::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Crypto::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Crypto::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful")
    {
        stateful = value;
        stateful.value_namespace = name_space;
        stateful.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Crypto::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Crypto::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag" || name == "redundancy" || name == "stateful")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Crypto::Ipsec::Ipsec()
    :
    df_bit{YType::enumeration, "df-bit"},
    fragmentation{YType::enumeration, "fragmentation"}
{

    yang_name = "ipsec"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Crypto::Ipsec::~Ipsec()
{
}

bool Native::Interface::VirtualTemplate::Crypto::Ipsec::has_data() const
{
    if (is_presence_container) return true;
    return df_bit.is_set
	|| fragmentation.is_set;
}

bool Native::Interface::VirtualTemplate::Crypto::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(df_bit.yfilter)
	|| ydk::is_set(fragmentation.yfilter);
}

std::string Native::Interface::VirtualTemplate::Crypto::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Crypto::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (df_bit.is_set || is_set(df_bit.yfilter)) leaf_name_data.push_back(df_bit.get_name_leafdata());
    if (fragmentation.is_set || is_set(fragmentation.yfilter)) leaf_name_data.push_back(fragmentation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Crypto::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Crypto::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Crypto::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "df-bit")
    {
        df_bit = value;
        df_bit.value_namespace = name_space;
        df_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragmentation")
    {
        fragmentation = value;
        fragmentation.value_namespace = name_space;
        fragmentation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Crypto::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "df-bit")
    {
        df_bit.yfilter = yfilter;
    }
    if(value_path == "fragmentation")
    {
        fragmentation.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Crypto::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "df-bit" || name == "fragmentation")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::EtAnalytics::EtAnalytics()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "et-analytics"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::EtAnalytics::~EtAnalytics()
{
}

bool Native::Interface::VirtualTemplate::EtAnalytics::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Interface::VirtualTemplate::EtAnalytics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::VirtualTemplate::EtAnalytics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eta:et-analytics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::EtAnalytics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::EtAnalytics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::EtAnalytics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::EtAnalytics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::EtAnalytics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::EtAnalytics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::ZoneMember::ZoneMember()
    :
    security{YType::str, "security"}
{

    yang_name = "zone-member"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::ZoneMember::~ZoneMember()
{
}

bool Native::Interface::VirtualTemplate::ZoneMember::has_data() const
{
    if (is_presence_container) return true;
    return security.is_set;
}

bool Native::Interface::VirtualTemplate::ZoneMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(security.yfilter);
}

std::string Native::Interface::VirtualTemplate::ZoneMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-zone:zone-member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::ZoneMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (security.is_set || is_set(security.yfilter)) leaf_name_data.push_back(security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::ZoneMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::ZoneMember::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::ZoneMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "security")
    {
        security = value;
        security.value_namespace = name_space;
        security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::ZoneMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "security")
    {
        security.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::ZoneMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Utd::Utd()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "utd"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Utd::~Utd()
{
}

bool Native::Interface::VirtualTemplate::Utd::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Interface::VirtualTemplate::Utd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::VirtualTemplate::Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-utd:utd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Utd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Utd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Utd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Utd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Utd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Utd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Cdp::Cdp()
    :
    enable{YType::boolean, "enable"}
        ,
    tlv(std::make_shared<Native::Interface::VirtualTemplate::Cdp::Tlv>())
{
    tlv->parent = this;

    yang_name = "cdp"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Cdp::~Cdp()
{
}

bool Native::Interface::VirtualTemplate::Cdp::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (tlv !=  nullptr && tlv->has_data());
}

bool Native::Interface::VirtualTemplate::Cdp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (tlv !=  nullptr && tlv->has_operation());
}

std::string Native::Interface::VirtualTemplate::Cdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cdp:cdp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Cdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Cdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        if(tlv == nullptr)
        {
            tlv = std::make_shared<Native::Interface::VirtualTemplate::Cdp::Tlv>();
        }
        return tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Cdp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tlv != nullptr)
    {
        _children["tlv"] = tlv;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Cdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Cdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Cdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv" || name == "enable")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Cdp::Tlv::Tlv()
    :
    server_location{YType::empty, "server-location"},
    location{YType::empty, "location"}
        ,
    app(nullptr) // presence node
{

    yang_name = "tlv"; yang_parent_name = "cdp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Cdp::Tlv::~Tlv()
{
}

bool Native::Interface::VirtualTemplate::Cdp::Tlv::has_data() const
{
    if (is_presence_container) return true;
    return server_location.is_set
	|| location.is_set
	|| (app !=  nullptr && app->has_data());
}

bool Native::Interface::VirtualTemplate::Cdp::Tlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server_location.yfilter)
	|| ydk::is_set(location.yfilter)
	|| (app !=  nullptr && app->has_operation());
}

std::string Native::Interface::VirtualTemplate::Cdp::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Cdp::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_location.is_set || is_set(server_location.yfilter)) leaf_name_data.push_back(server_location.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Cdp::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "app")
    {
        if(app == nullptr)
        {
            app = std::make_shared<Native::Interface::VirtualTemplate::Cdp::Tlv::App>();
        }
        return app;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Cdp::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(app != nullptr)
    {
        _children["app"] = app;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Cdp::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-location")
    {
        server_location = value;
        server_location.value_namespace = name_space;
        server_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Cdp::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-location")
    {
        server_location.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Cdp::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app" || name == "server-location" || name == "location")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Cdp::Tlv::App::App()
    :
    tlvtype{YType::uint16, "tlvtype"},
    value_{YType::str, "value"}
{

    yang_name = "app"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Cdp::Tlv::App::~App()
{
}

bool Native::Interface::VirtualTemplate::Cdp::Tlv::App::has_data() const
{
    if (is_presence_container) return true;
    return tlvtype.is_set
	|| value_.is_set;
}

bool Native::Interface::VirtualTemplate::Cdp::Tlv::App::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tlvtype.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::VirtualTemplate::Cdp::Tlv::App::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Cdp::Tlv::App::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlvtype.is_set || is_set(tlvtype.yfilter)) leaf_name_data.push_back(tlvtype.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Cdp::Tlv::App::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Cdp::Tlv::App::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Cdp::Tlv::App::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlvtype")
    {
        tlvtype = value;
        tlvtype.value_namespace = name_space;
        tlvtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Cdp::Tlv::App::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlvtype")
    {
        tlvtype.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Cdp::Tlv::App::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlvtype" || name == "value")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ntp::Ntp()
    :
    broadcast{YType::empty, "broadcast"}
        ,
    broadcast_option(std::make_shared<Native::Interface::VirtualTemplate::Ntp::BroadcastOption>())
{
    broadcast_option->parent = this;

    yang_name = "ntp"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ntp::~Ntp()
{
}

bool Native::Interface::VirtualTemplate::Ntp::has_data() const
{
    if (is_presence_container) return true;
    return broadcast.is_set
	|| (broadcast_option !=  nullptr && broadcast_option->has_data());
}

bool Native::Interface::VirtualTemplate::Ntp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| (broadcast_option !=  nullptr && broadcast_option->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:ntp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ntp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ntp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-option")
    {
        if(broadcast_option == nullptr)
        {
            broadcast_option = std::make_shared<Native::Interface::VirtualTemplate::Ntp::BroadcastOption>();
        }
        return broadcast_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ntp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(broadcast_option != nullptr)
    {
        _children["broadcast-option"] = broadcast_option;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Ntp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ntp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ntp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-option" || name == "broadcast")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ntp::BroadcastOption::BroadcastOption()
    :
    broadcast(std::make_shared<Native::Interface::VirtualTemplate::Ntp::BroadcastOption::Broadcast>())
{
    broadcast->parent = this;

    yang_name = "broadcast-option"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ntp::BroadcastOption::~BroadcastOption()
{
}

bool Native::Interface::VirtualTemplate::Ntp::BroadcastOption::has_data() const
{
    if (is_presence_container) return true;
    return (broadcast !=  nullptr && broadcast->has_data());
}

bool Native::Interface::VirtualTemplate::Ntp::BroadcastOption::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast !=  nullptr && broadcast->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ntp::BroadcastOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ntp::BroadcastOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ntp::BroadcastOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Interface::VirtualTemplate::Ntp::BroadcastOption::Broadcast>();
        }
        return broadcast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ntp::BroadcastOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(broadcast != nullptr)
    {
        _children["broadcast"] = broadcast;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Ntp::BroadcastOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Ntp::BroadcastOption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Ntp::BroadcastOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ntp::BroadcastOption::Broadcast::Broadcast()
    :
    client{YType::empty, "client"}
{

    yang_name = "broadcast"; yang_parent_name = "broadcast-option"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ntp::BroadcastOption::Broadcast::~Broadcast()
{
}

bool Native::Interface::VirtualTemplate::Ntp::BroadcastOption::Broadcast::has_data() const
{
    if (is_presence_container) return true;
    return client.is_set;
}

bool Native::Interface::VirtualTemplate::Ntp::BroadcastOption::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ntp::BroadcastOption::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ntp::BroadcastOption::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ntp::BroadcastOption::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ntp::BroadcastOption::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Ntp::BroadcastOption::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ntp::BroadcastOption::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ntp::BroadcastOption::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Mab::Mab()
    :
    eap{YType::empty, "eap"}
{

    yang_name = "mab"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Mab::~Mab()
{
}

bool Native::Interface::VirtualTemplate::Mab::has_data() const
{
    if (is_presence_container) return true;
    return eap.is_set;
}

bool Native::Interface::VirtualTemplate::Mab::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eap.yfilter);
}

std::string Native::Interface::VirtualTemplate::Mab::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sanet:mab";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Mab::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eap.is_set || is_set(eap.yfilter)) leaf_name_data.push_back(eap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Mab::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Mab::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Mab::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eap")
    {
        eap = value;
        eap.value_namespace = name_space;
        eap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Mab::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eap")
    {
        eap.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Mab::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eap")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Umbrella::Umbrella()
    :
    out{YType::empty, "out"},
    in{YType::str, "in"}
{

    yang_name = "umbrella"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Umbrella::~Umbrella()
{
}

bool Native::Interface::VirtualTemplate::Umbrella::has_data() const
{
    if (is_presence_container) return true;
    return out.is_set
	|| in.is_set;
}

bool Native::Interface::VirtualTemplate::Umbrella::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::VirtualTemplate::Umbrella::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-umbrella:umbrella";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Umbrella::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Umbrella::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Umbrella::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Umbrella::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Umbrella::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Umbrella::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out" || name == "in")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ppp::Ppp()
    :
    accounting{YType::str, "accounting"},
    authorization{YType::str, "authorization"}
        ,
    chap(std::make_shared<Native::Interface::VirtualTemplate::Ppp::Chap>())
    , authentication(std::make_shared<Native::Interface::VirtualTemplate::Ppp::Authentication>())
    , ipcp(std::make_shared<Native::Interface::VirtualTemplate::Ppp::Ipcp>())
    , multilink(nullptr) // presence node
{
    chap->parent = this;
    authentication->parent = this;
    ipcp->parent = this;

    yang_name = "ppp"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ppp::~Ppp()
{
}

bool Native::Interface::VirtualTemplate::Ppp::has_data() const
{
    if (is_presence_container) return true;
    return accounting.is_set
	|| authorization.is_set
	|| (chap !=  nullptr && chap->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (ipcp !=  nullptr && ipcp->has_data())
	|| (multilink !=  nullptr && multilink->has_data());
}

bool Native::Interface::VirtualTemplate::Ppp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accounting.yfilter)
	|| ydk::is_set(authorization.yfilter)
	|| (chap !=  nullptr && chap->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (ipcp !=  nullptr && ipcp->has_operation())
	|| (multilink !=  nullptr && multilink->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ppp:ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());
    if (authorization.is_set || is_set(authorization.yfilter)) leaf_name_data.push_back(authorization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "chap")
    {
        if(chap == nullptr)
        {
            chap = std::make_shared<Native::Interface::VirtualTemplate::Ppp::Chap>();
        }
        return chap;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::VirtualTemplate::Ppp::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "ipcp")
    {
        if(ipcp == nullptr)
        {
            ipcp = std::make_shared<Native::Interface::VirtualTemplate::Ppp::Ipcp>();
        }
        return ipcp;
    }

    if(child_yang_name == "multilink")
    {
        if(multilink == nullptr)
        {
            multilink = std::make_shared<Native::Interface::VirtualTemplate::Ppp::Multilink>();
        }
        return multilink;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(chap != nullptr)
    {
        _children["chap"] = chap;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(ipcp != nullptr)
    {
        _children["ipcp"] = ipcp;
    }

    if(multilink != nullptr)
    {
        _children["multilink"] = multilink;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Ppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authorization")
    {
        authorization = value;
        authorization.value_namespace = name_space;
        authorization.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ppp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
    if(value_path == "authorization")
    {
        authorization.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ppp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chap" || name == "authentication" || name == "ipcp" || name == "multilink" || name == "accounting" || name == "authorization")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ppp::Chap::Chap()
    :
    hostname{YType::str, "hostname"},
    challenge_length{YType::uint8, "challenge-length"}
{

    yang_name = "chap"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ppp::Chap::~Chap()
{
}

bool Native::Interface::VirtualTemplate::Ppp::Chap::has_data() const
{
    if (is_presence_container) return true;
    return hostname.is_set
	|| challenge_length.is_set;
}

bool Native::Interface::VirtualTemplate::Ppp::Chap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| ydk::is_set(challenge_length.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ppp::Chap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ppp::Chap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());
    if (challenge_length.is_set || is_set(challenge_length.yfilter)) leaf_name_data.push_back(challenge_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ppp::Chap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ppp::Chap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Ppp::Chap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge-length")
    {
        challenge_length = value;
        challenge_length.value_namespace = name_space;
        challenge_length.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ppp::Chap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
    if(value_path == "challenge-length")
    {
        challenge_length.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ppp::Chap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostname" || name == "challenge-length")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ppp::Authentication::Authentication()
    :
    method{YType::enumeration, "method"},
    list_name{YType::str, "list-name"},
    chap{YType::empty, "chap"},
    callback{YType::empty, "callback"},
    callin{YType::empty, "callin"},
    callout{YType::empty, "callout"},
    default_{YType::empty, "default"},
    eap{YType::empty, "eap"},
    ms_chap{YType::empty, "ms-chap"},
    ms_chap_v2{YType::empty, "ms-chap-v2"},
    one_time{YType::empty, "one-time"},
    optional{YType::empty, "optional"},
    pap{YType::empty, "pap"}
{

    yang_name = "authentication"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ppp::Authentication::~Authentication()
{
}

bool Native::Interface::VirtualTemplate::Ppp::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return method.is_set
	|| list_name.is_set
	|| chap.is_set
	|| callback.is_set
	|| callin.is_set
	|| callout.is_set
	|| default_.is_set
	|| eap.is_set
	|| ms_chap.is_set
	|| ms_chap_v2.is_set
	|| one_time.is_set
	|| optional.is_set
	|| pap.is_set;
}

bool Native::Interface::VirtualTemplate::Ppp::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method.yfilter)
	|| ydk::is_set(list_name.yfilter)
	|| ydk::is_set(chap.yfilter)
	|| ydk::is_set(callback.yfilter)
	|| ydk::is_set(callin.yfilter)
	|| ydk::is_set(callout.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(eap.yfilter)
	|| ydk::is_set(ms_chap.yfilter)
	|| ydk::is_set(ms_chap_v2.yfilter)
	|| ydk::is_set(one_time.yfilter)
	|| ydk::is_set(optional.yfilter)
	|| ydk::is_set(pap.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ppp::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ppp::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method.is_set || is_set(method.yfilter)) leaf_name_data.push_back(method.get_name_leafdata());
    if (list_name.is_set || is_set(list_name.yfilter)) leaf_name_data.push_back(list_name.get_name_leafdata());
    if (chap.is_set || is_set(chap.yfilter)) leaf_name_data.push_back(chap.get_name_leafdata());
    if (callback.is_set || is_set(callback.yfilter)) leaf_name_data.push_back(callback.get_name_leafdata());
    if (callin.is_set || is_set(callin.yfilter)) leaf_name_data.push_back(callin.get_name_leafdata());
    if (callout.is_set || is_set(callout.yfilter)) leaf_name_data.push_back(callout.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (eap.is_set || is_set(eap.yfilter)) leaf_name_data.push_back(eap.get_name_leafdata());
    if (ms_chap.is_set || is_set(ms_chap.yfilter)) leaf_name_data.push_back(ms_chap.get_name_leafdata());
    if (ms_chap_v2.is_set || is_set(ms_chap_v2.yfilter)) leaf_name_data.push_back(ms_chap_v2.get_name_leafdata());
    if (one_time.is_set || is_set(one_time.yfilter)) leaf_name_data.push_back(one_time.get_name_leafdata());
    if (optional.is_set || is_set(optional.yfilter)) leaf_name_data.push_back(optional.get_name_leafdata());
    if (pap.is_set || is_set(pap.yfilter)) leaf_name_data.push_back(pap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ppp::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ppp::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Ppp::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method")
    {
        method = value;
        method.value_namespace = name_space;
        method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list-name")
    {
        list_name = value;
        list_name.value_namespace = name_space;
        list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chap")
    {
        chap = value;
        chap.value_namespace = name_space;
        chap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callback")
    {
        callback = value;
        callback.value_namespace = name_space;
        callback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callin")
    {
        callin = value;
        callin.value_namespace = name_space;
        callin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "callout")
    {
        callout = value;
        callout.value_namespace = name_space;
        callout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eap")
    {
        eap = value;
        eap.value_namespace = name_space;
        eap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms-chap")
    {
        ms_chap = value;
        ms_chap.value_namespace = name_space;
        ms_chap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms-chap-v2")
    {
        ms_chap_v2 = value;
        ms_chap_v2.value_namespace = name_space;
        ms_chap_v2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-time")
    {
        one_time = value;
        one_time.value_namespace = name_space;
        one_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optional")
    {
        optional = value;
        optional.value_namespace = name_space;
        optional.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pap")
    {
        pap = value;
        pap.value_namespace = name_space;
        pap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ppp::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
    if(value_path == "list-name")
    {
        list_name.yfilter = yfilter;
    }
    if(value_path == "chap")
    {
        chap.yfilter = yfilter;
    }
    if(value_path == "callback")
    {
        callback.yfilter = yfilter;
    }
    if(value_path == "callin")
    {
        callin.yfilter = yfilter;
    }
    if(value_path == "callout")
    {
        callout.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "eap")
    {
        eap.yfilter = yfilter;
    }
    if(value_path == "ms-chap")
    {
        ms_chap.yfilter = yfilter;
    }
    if(value_path == "ms-chap-v2")
    {
        ms_chap_v2.yfilter = yfilter;
    }
    if(value_path == "one-time")
    {
        one_time.yfilter = yfilter;
    }
    if(value_path == "optional")
    {
        optional.yfilter = yfilter;
    }
    if(value_path == "pap")
    {
        pap.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ppp::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method" || name == "list-name" || name == "chap" || name == "callback" || name == "callin" || name == "callout" || name == "default" || name == "eap" || name == "ms-chap" || name == "ms-chap-v2" || name == "one-time" || name == "optional" || name == "pap")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ppp::Ipcp::Ipcp()
    :
    dns(std::make_shared<Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns>())
{
    dns->parent = this;

    yang_name = "ipcp"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ppp::Ipcp::~Ipcp()
{
}

bool Native::Interface::VirtualTemplate::Ppp::Ipcp::has_data() const
{
    if (is_presence_container) return true;
    return (dns !=  nullptr && dns->has_data());
}

bool Native::Interface::VirtualTemplate::Ppp::Ipcp::has_operation() const
{
    return is_set(yfilter)
	|| (dns !=  nullptr && dns->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ppp::Ipcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ppp::Ipcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ppp::Ipcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns>();
        }
        return dns;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ppp::Ipcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dns != nullptr)
    {
        _children["dns"] = dns;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Ppp::Ipcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Ppp::Ipcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Ppp::Ipcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns::Dns()
    :
    primary{YType::str, "primary"}
{

    yang_name = "dns"; yang_parent_name = "ipcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns::~Dns()
{
}

bool Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns::has_data() const
{
    if (is_presence_container) return true;
    return primary.is_set;
}

bool Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ppp::Ipcp::Dns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ppp::Multilink::Multilink()
    :
    group{YType::uint32, "group"}
        ,
    links(std::make_shared<Native::Interface::VirtualTemplate::Ppp::Multilink::Links>())
    , endpoint(std::make_shared<Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint>())
    , fragment(std::make_shared<Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment>())
{
    links->parent = this;
    endpoint->parent = this;
    fragment->parent = this;

    yang_name = "multilink"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Ppp::Multilink::~Multilink()
{
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set
	|| (links !=  nullptr && links->has_data())
	|| (endpoint !=  nullptr && endpoint->has_data())
	|| (fragment !=  nullptr && fragment->has_data());
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| (links !=  nullptr && links->has_operation())
	|| (endpoint !=  nullptr && endpoint->has_operation())
	|| (fragment !=  nullptr && fragment->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ppp::Multilink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multilink";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ppp::Multilink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ppp::Multilink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "links")
    {
        if(links == nullptr)
        {
            links = std::make_shared<Native::Interface::VirtualTemplate::Ppp::Multilink::Links>();
        }
        return links;
    }

    if(child_yang_name == "endpoint")
    {
        if(endpoint == nullptr)
        {
            endpoint = std::make_shared<Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint>();
        }
        return endpoint;
    }

    if(child_yang_name == "fragment")
    {
        if(fragment == nullptr)
        {
            fragment = std::make_shared<Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment>();
        }
        return fragment;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ppp::Multilink::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(links != nullptr)
    {
        _children["links"] = links;
    }

    if(endpoint != nullptr)
    {
        _children["endpoint"] = endpoint;
    }

    if(fragment != nullptr)
    {
        _children["fragment"] = fragment;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Ppp::Multilink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ppp::Multilink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "links" || name == "endpoint" || name == "fragment" || name == "group")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Links()
    :
    minimum(std::make_shared<Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum>())
{
    minimum->parent = this;

    yang_name = "links"; yang_parent_name = "multilink"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ppp::Multilink::Links::~Links()
{
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::Links::has_data() const
{
    if (is_presence_container) return true;
    return (minimum !=  nullptr && minimum->has_data());
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::Links::has_operation() const
{
    return is_set(yfilter)
	|| (minimum !=  nullptr && minimum->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ppp::Multilink::Links::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ppp::Multilink::Links::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ppp::Multilink::Links::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minimum")
    {
        if(minimum == nullptr)
        {
            minimum = std::make_shared<Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum>();
        }
        return minimum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ppp::Multilink::Links::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(minimum != nullptr)
    {
        _children["minimum"] = minimum;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Ppp::Multilink::Links::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Ppp::Multilink::Links::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::Links::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum::Minimum()
    :
    minimum_value{YType::uint8, "minimum-value"},
    mandatory{YType::empty, "mandatory"}
{

    yang_name = "minimum"; yang_parent_name = "links"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum::~Minimum()
{
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum::has_data() const
{
    if (is_presence_container) return true;
    return minimum_value.is_set
	|| mandatory.is_set;
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_value.yfilter)
	|| ydk::is_set(mandatory.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minimum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_value.is_set || is_set(minimum_value.yfilter)) leaf_name_data.push_back(minimum_value.get_name_leafdata());
    if (mandatory.is_set || is_set(mandatory.yfilter)) leaf_name_data.push_back(mandatory.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-value")
    {
        minimum_value = value;
        minimum_value.value_namespace = name_space;
        minimum_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mandatory")
    {
        mandatory = value;
        mandatory.value_namespace = name_space;
        mandatory.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-value")
    {
        minimum_value.yfilter = yfilter;
    }
    if(value_path == "mandatory")
    {
        mandatory.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::Links::Minimum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-value" || name == "mandatory")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint::Endpoint()
    :
    string{YType::str, "string"}
{

    yang_name = "endpoint"; yang_parent_name = "multilink"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint::~Endpoint()
{
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint::has_data() const
{
    if (is_presence_container) return true;
    return string.is_set;
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "endpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::Endpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Fragment()
    :
    disable{YType::empty, "disable"}
        ,
    delay(std::make_shared<Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay>())
{
    delay->parent = this;

    yang_name = "fragment"; yang_parent_name = "multilink"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::~Fragment()
{
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fragment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "disable")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay::Delay()
    :
    delay_value{YType::uint16, "delay-value"},
    additional_delay_value{YType::uint16, "additional-delay-value"}
{

    yang_name = "delay"; yang_parent_name = "fragment"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay::~Delay()
{
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay::has_data() const
{
    if (is_presence_container) return true;
    return delay_value.is_set
	|| additional_delay_value.is_set;
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay_value.yfilter)
	|| ydk::is_set(additional_delay_value.yfilter);
}

std::string Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay_value.is_set || is_set(delay_value.yfilter)) leaf_name_data.push_back(delay_value.get_name_leafdata());
    if (additional_delay_value.is_set || is_set(additional_delay_value.yfilter)) leaf_name_data.push_back(additional_delay_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay-value")
    {
        delay_value = value;
        delay_value.value_namespace = name_space;
        delay_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-delay-value")
    {
        additional_delay_value = value;
        additional_delay_value.value_namespace = name_space;
        additional_delay_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay-value")
    {
        delay_value.yfilter = yfilter;
    }
    if(value_path == "additional-delay-value")
    {
        additional_delay_value.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Ppp::Multilink::Fragment::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay-value" || name == "additional-delay-value")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Cts::Cts()
    :
    manual(nullptr) // presence node
{

    yang_name = "cts"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Cts::~Cts()
{
}

bool Native::Interface::VirtualTemplate::Cts::has_data() const
{
    if (is_presence_container) return true;
    return (manual !=  nullptr && manual->has_data());
}

bool Native::Interface::VirtualTemplate::Cts::has_operation() const
{
    return is_set(yfilter)
	|| (manual !=  nullptr && manual->has_operation());
}

std::string Native::Interface::VirtualTemplate::Cts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cts:cts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Cts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Cts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "manual")
    {
        if(manual == nullptr)
        {
            manual = std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual>();
        }
        return manual;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Cts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(manual != nullptr)
    {
        _children["manual"] = manual;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Cts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Cts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Cts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "manual")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Cts::Manual::Manual()
    :
    policy(std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Policy>())
    , sap(std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Sap>())
    , propagate(std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Propagate>())
{
    policy->parent = this;
    sap->parent = this;
    propagate->parent = this;

    yang_name = "manual"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Cts::Manual::~Manual()
{
}

bool Native::Interface::VirtualTemplate::Cts::Manual::has_data() const
{
    if (is_presence_container) return true;
    return (policy !=  nullptr && policy->has_data())
	|| (sap !=  nullptr && sap->has_data())
	|| (propagate !=  nullptr && propagate->has_data());
}

bool Native::Interface::VirtualTemplate::Cts::Manual::has_operation() const
{
    return is_set(yfilter)
	|| (policy !=  nullptr && policy->has_operation())
	|| (sap !=  nullptr && sap->has_operation())
	|| (propagate !=  nullptr && propagate->has_operation());
}

std::string Native::Interface::VirtualTemplate::Cts::Manual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Cts::Manual::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Cts::Manual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "sap")
    {
        if(sap == nullptr)
        {
            sap = std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Sap>();
        }
        return sap;
    }

    if(child_yang_name == "propagate")
    {
        if(propagate == nullptr)
        {
            propagate = std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Propagate>();
        }
        return propagate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Cts::Manual::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy != nullptr)
    {
        _children["policy"] = policy;
    }

    if(sap != nullptr)
    {
        _children["sap"] = sap;
    }

    if(propagate != nullptr)
    {
        _children["propagate"] = propagate;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Cts::Manual::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Cts::Manual::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Cts::Manual::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "sap" || name == "propagate")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Cts::Manual::Policy::Policy()
    :
    static_(std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static>())
{
    static_->parent = this;

    yang_name = "policy"; yang_parent_name = "manual"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Cts::Manual::Policy::~Policy()
{
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Policy::has_data() const
{
    if (is_presence_container) return true;
    return (static_ !=  nullptr && static_->has_data());
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Policy::has_operation() const
{
    return is_set(yfilter)
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Interface::VirtualTemplate::Cts::Manual::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Cts::Manual::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Cts::Manual::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Cts::Manual::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Cts::Manual::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Cts::Manual::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static::Static()
    :
    sgt{YType::uint16, "sgt"},
    trusted{YType::empty, "trusted"}
{

    yang_name = "static"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static::~Static()
{
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static::has_data() const
{
    if (is_presence_container) return true;
    return sgt.is_set
	|| trusted.is_set;
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(trusted.yfilter);
}

std::string Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (trusted.is_set || is_set(trusted.yfilter)) leaf_name_data.push_back(trusted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trusted")
    {
        trusted = value;
        trusted.value_namespace = name_space;
        trusted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "trusted")
    {
        trusted.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Policy::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt" || name == "trusted")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Cts::Manual::Sap::Sap()
    :
    pmk(this, {"word"})
{

    yang_name = "sap"; yang_parent_name = "manual"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Cts::Manual::Sap::~Sap()
{
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pmk.len(); index++)
    {
        if(pmk[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::has_operation() const
{
    for (std::size_t index=0; index<pmk.len(); index++)
    {
        if(pmk[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::VirtualTemplate::Cts::Manual::Sap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Cts::Manual::Sap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Cts::Manual::Sap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmk")
    {
        auto ent_ = std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk>();
        ent_->parent = this;
        pmk.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Cts::Manual::Sap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pmk.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Cts::Manual::Sap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Cts::Manual::Sap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmk")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::Pmk()
    :
    word{YType::str, "word"}
        ,
    mode_list(std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList>())
{
    mode_list->parent = this;

    yang_name = "pmk"; yang_parent_name = "sap"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::~Pmk()
{
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| (mode_list !=  nullptr && mode_list->has_data());
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| (mode_list !=  nullptr && mode_list->has_operation());
}

std::string Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmk";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode-list")
    {
        if(mode_list == nullptr)
        {
            mode_list = std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList>();
        }
        return mode_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode_list != nullptr)
    {
        _children["mode-list"] = mode_list;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode-list" || name == "word")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::ModeList()
    :
    gcm_encrypt(nullptr) // presence node
    , no_encap(nullptr) // presence node
{

    yang_name = "mode-list"; yang_parent_name = "pmk"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::~ModeList()
{
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::has_data() const
{
    if (is_presence_container) return true;
    return (gcm_encrypt !=  nullptr && gcm_encrypt->has_data())
	|| (no_encap !=  nullptr && no_encap->has_data());
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::has_operation() const
{
    return is_set(yfilter)
	|| (gcm_encrypt !=  nullptr && gcm_encrypt->has_operation())
	|| (no_encap !=  nullptr && no_encap->has_operation());
}

std::string Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gcm-encrypt")
    {
        if(gcm_encrypt == nullptr)
        {
            gcm_encrypt = std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt>();
        }
        return gcm_encrypt;
    }

    if(child_yang_name == "no-encap")
    {
        if(no_encap == nullptr)
        {
            no_encap = std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::NoEncap>();
        }
        return no_encap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(gcm_encrypt != nullptr)
    {
        _children["gcm-encrypt"] = gcm_encrypt;
    }

    if(no_encap != nullptr)
    {
        _children["no-encap"] = no_encap;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gcm-encrypt" || name == "no-encap")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::GcmEncrypt()
    :
    gmac(nullptr) // presence node
{

    yang_name = "gcm-encrypt"; yang_parent_name = "mode-list"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::~GcmEncrypt()
{
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_data() const
{
    if (is_presence_container) return true;
    return (gmac !=  nullptr && gmac->has_data());
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_operation() const
{
    return is_set(yfilter)
	|| (gmac !=  nullptr && gmac->has_operation());
}

std::string Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gcm-encrypt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gmac")
    {
        if(gmac == nullptr)
        {
            gmac = std::make_shared<Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac>();
        }
        return gmac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(gmac != nullptr)
    {
        _children["gmac"] = gmac;
    }

    return _children;
}

void Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gmac")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::Gmac()
    :
    null{YType::empty, "null"}
{

    yang_name = "gmac"; yang_parent_name = "gcm-encrypt"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::~Gmac()
{
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_data() const
{
    if (is_presence_container) return true;
    return null.is_set;
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(null.yfilter);
}

std::string Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "null")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Violation::protect {0, "protect"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::Mac::Security::Violation::restrict {1, "restrict"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Discard::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Peer::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Forward::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::Protocol::R4 {0, "R4"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::Protocol::R5 {1, "R5"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::Protocol::R6 {2, "R6"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::Protocol::R8 {3, "R8"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::Protocol::R9 {4, "R9"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::Protocol::RA {5, "RA"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::Protocol::RB {6, "RB"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::Protocol::RC {7, "RC"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::Protocol::RD {8, "RD"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::Protocol::RF {9, "RF"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::Protocol::cdp {10, "cdp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::Protocol::dtp {11, "dtp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::Protocol::elmi {12, "elmi"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::Protocol::esmc {13, "esmc"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::Protocol::lacp {14, "lacp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::Protocol::lldp {15, "lldp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::Protocol::loam {16, "loam"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::Protocol::pagp {17, "pagp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::Protocol::ptppd {18, "ptppd"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::Protocol::stp {19, "stp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::Protocol::udld {20, "udld"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Service::Instance::L2protocol::Tunnel::Protocol::vtp {21, "vtp"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Lacp::Rate::fast {0, "fast"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Lacp::Rate::normal {1, "normal"};

const Enum::YLeaf Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor::Direction::input {0, "input"};
const Enum::YLeaf Native::Interface::VirtualTemplate::ServicePolicy::Type::PerformanceMonitor::Direction::output {1, "output"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Tunnel::Snooping::enable {0, "enable"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Tunnel::Mode::Udp::ip {0, "ip"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Tunnel::Mode::Udp::multipoint {1, "multipoint"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::Gre::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Tunnel::Mode::Ethernet::Gre::ipv6 {1, "ipv6"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Metric::igp {0, "igp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Metric::te {1, "te"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::Adjacency::protected_ {0, "protected"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::Adjacency::unprotected {1, "unprotected"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Crypto::Ipsec::DfBit::clear {0, "clear"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Crypto::Ipsec::DfBit::copy {1, "copy"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Crypto::Ipsec::DfBit::set {2, "set"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Crypto::Ipsec::Fragmentation::after_encryption {0, "after-encryption"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Crypto::Ipsec::Fragmentation::before_encryption {1, "before-encryption"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Ppp::Accounting::default_ {0, "default"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Ppp::Authorization::default_ {0, "default"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Ppp::Authentication::Method::chap {0, "chap"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Ppp::Authentication::Method::eap {1, "eap"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Ppp::Authentication::Method::ms_chap {2, "ms-chap"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Ppp::Authentication::Method::ms_chap_v2 {3, "ms-chap-v2"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Ppp::Authentication::Method::pap {4, "pap"};


}
}

