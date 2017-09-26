
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_50.hpp"
#include "Cisco_IOS_XE_native_51.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::PortChannel::Mab::Mab()
    :
    eap{YType::empty, "eap"}
{

    yang_name = "mab"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Mab::~Mab()
{
}

bool Native::Interface::PortChannel::Mab::has_data() const
{
    return eap.is_set;
}

bool Native::Interface::PortChannel::Mab::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eap.yfilter);
}

std::string Native::Interface::PortChannel::Mab::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sanet:mab";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Mab::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eap.is_set || is_set(eap.yfilter)) leaf_name_data.push_back(eap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Mab::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Mab::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Mab::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eap")
    {
        eap = value;
        eap.value_namespace = name_space;
        eap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Mab::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eap")
    {
        eap.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Mab::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eap")
        return true;
    return false;
}

Native::Interface::PortChannel::Mac::Mac()
    :
    access_group(std::make_shared<Native::Interface::PortChannel::Mac::AccessGroup>())
{
    access_group->parent = this;

    yang_name = "mac"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Mac::~Mac()
{
}

bool Native::Interface::PortChannel::Mac::has_data() const
{
    return (access_group !=  nullptr && access_group->has_data());
}

bool Native::Interface::PortChannel::Mac::has_operation() const
{
    return is_set(yfilter)
	|| (access_group !=  nullptr && access_group->has_operation());
}

std::string Native::Interface::PortChannel::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Interface::PortChannel::Mac::AccessGroup>();
        }
        return access_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_group != nullptr)
    {
        children["access-group"] = access_group;
    }

    return children;
}

void Native::Interface::PortChannel::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group")
        return true;
    return false;
}

Native::Interface::PortChannel::Mac::AccessGroup::AccessGroup()
    :
    acl_name(std::make_shared<Native::Interface::PortChannel::Mac::AccessGroup::ACLName>())
{
    acl_name->parent = this;

    yang_name = "access-group"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Mac::AccessGroup::~AccessGroup()
{
}

bool Native::Interface::PortChannel::Mac::AccessGroup::has_data() const
{
    return (acl_name !=  nullptr && acl_name->has_data());
}

bool Native::Interface::PortChannel::Mac::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| (acl_name !=  nullptr && acl_name->has_operation());
}

std::string Native::Interface::PortChannel::Mac::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Mac::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Mac::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ACL-name")
    {
        if(acl_name == nullptr)
        {
            acl_name = std::make_shared<Native::Interface::PortChannel::Mac::AccessGroup::ACLName>();
        }
        return acl_name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Mac::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl_name != nullptr)
    {
        children["ACL-name"] = acl_name;
    }

    return children;
}

void Native::Interface::PortChannel::Mac::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Mac::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Mac::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ACL-name")
        return true;
    return false;
}

Native::Interface::PortChannel::Mac::AccessGroup::ACLName::ACLName()
    :
    acl_name{YType::str, "acl-name"},
    apply_to{YType::enumeration, "apply-to"}
{

    yang_name = "ACL-name"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Mac::AccessGroup::ACLName::~ACLName()
{
}

bool Native::Interface::PortChannel::Mac::AccessGroup::ACLName::has_data() const
{
    return acl_name.is_set
	|| apply_to.is_set;
}

bool Native::Interface::PortChannel::Mac::AccessGroup::ACLName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(apply_to.yfilter);
}

std::string Native::Interface::PortChannel::Mac::AccessGroup::ACLName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ACL-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Mac::AccessGroup::ACLName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (apply_to.is_set || is_set(apply_to.yfilter)) leaf_name_data.push_back(apply_to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Mac::AccessGroup::ACLName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Mac::AccessGroup::ACLName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Mac::AccessGroup::ACLName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "apply-to")
    {
        apply_to = value;
        apply_to.value_namespace = name_space;
        apply_to.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Mac::AccessGroup::ACLName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "apply-to")
    {
        apply_to.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Mac::AccessGroup::ACLName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "apply-to")
        return true;
    return false;
}

Native::Interface::PortChannel::Macro::Macro()
    :
    description{YType::str, "description"}
    	,
    auto_(std::make_shared<Native::Interface::PortChannel::Macro::Auto_>())
{
    auto_->parent = this;

    yang_name = "macro"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Macro::~Macro()
{
}

bool Native::Interface::PortChannel::Macro::has_data() const
{
    return description.is_set
	|| (auto_ !=  nullptr && auto_->has_data());
}

bool Native::Interface::PortChannel::Macro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation());
}

std::string Native::Interface::PortChannel::Macro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:macro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Macro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Macro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<Native::Interface::PortChannel::Macro::Auto_>();
        }
        return auto_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Macro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    return children;
}

void Native::Interface::PortChannel::Macro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Macro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Macro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "description")
        return true;
    return false;
}

Native::Interface::PortChannel::Macro::Auto_::Auto_()
    :
    processing{YType::boolean, "processing"}
{

    yang_name = "auto"; yang_parent_name = "macro"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Macro::Auto_::~Auto_()
{
}

bool Native::Interface::PortChannel::Macro::Auto_::has_data() const
{
    return processing.is_set;
}

bool Native::Interface::PortChannel::Macro::Auto_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processing.yfilter);
}

std::string Native::Interface::PortChannel::Macro::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Macro::Auto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processing.is_set || is_set(processing.yfilter)) leaf_name_data.push_back(processing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Macro::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Macro::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Macro::Auto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processing")
    {
        processing = value;
        processing.value_namespace = name_space;
        processing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Macro::Auto_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processing")
    {
        processing.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Macro::Auto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processing")
        return true;
    return false;
}

Native::Interface::PortChannel::Macsec::Macsec()
    :
    network_link{YType::empty, "network-link"}
{

    yang_name = "macsec"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Macsec::~Macsec()
{
}

bool Native::Interface::PortChannel::Macsec::has_data() const
{
    return network_link.is_set;
}

bool Native::Interface::PortChannel::Macsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(network_link.yfilter);
}

std::string Native::Interface::PortChannel::Macsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:macsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Macsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_link.is_set || is_set(network_link.yfilter)) leaf_name_data.push_back(network_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Macsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Macsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Macsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-link")
    {
        network_link = value;
        network_link.value_namespace = name_space;
        network_link.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Macsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-link")
    {
        network_link.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Macsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-link")
        return true;
    return false;
}

Native::Interface::PortChannel::Mdix::Mdix()
    :
    auto_{YType::boolean, "auto"}
{

    yang_name = "mdix"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Mdix::~Mdix()
{
}

bool Native::Interface::PortChannel::Mdix::has_data() const
{
    return auto_.is_set;
}

bool Native::Interface::PortChannel::Mdix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter);
}

std::string Native::Interface::PortChannel::Mdix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Mdix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Mdix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Mdix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Mdix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Mdix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Mdix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto")
        return true;
    return false;
}

Native::Interface::PortChannel::Mop::Mop()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "mop"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Mop::~Mop()
{
}

bool Native::Interface::PortChannel::Mop::has_data() const
{
    return enabled.is_set;
}

bool Native::Interface::PortChannel::Mop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Native::Interface::PortChannel::Mop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Mop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Mop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Mop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Mop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Mop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Mop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Native::Interface::PortChannel::Mpls::Mpls()
    :
    ip{YType::empty, "Cisco-IOS-XE-mpls:ip"},
    mtu{YType::str, "Cisco-IOS-XE-mpls:mtu"}
    	,
    accounting(std::make_shared<Native::Interface::PortChannel::Mpls::Accounting>())
	,bgp(std::make_shared<Native::Interface::PortChannel::Mpls::Bgp>())
	,label(std::make_shared<Native::Interface::PortChannel::Mpls::Label>())
	,ldp(std::make_shared<Native::Interface::PortChannel::Mpls::Ldp>())
	,traffic_eng(std::make_shared<Native::Interface::PortChannel::Mpls::TrafficEng>())
{
    accounting->parent = this;
    bgp->parent = this;
    label->parent = this;
    ldp->parent = this;
    traffic_eng->parent = this;

    yang_name = "mpls"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Mpls::~Mpls()
{
}

bool Native::Interface::PortChannel::Mpls::has_data() const
{
    return ip.is_set
	|| mtu.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (label !=  nullptr && label->has_data())
	|| (ldp !=  nullptr && ldp->has_data())
	|| (traffic_eng !=  nullptr && traffic_eng->has_data());
}

bool Native::Interface::PortChannel::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (label !=  nullptr && label->has_operation())
	|| (ldp !=  nullptr && ldp->has_operation())
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation());
}

std::string Native::Interface::PortChannel::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Interface::PortChannel::Mpls::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Interface::PortChannel::Mpls::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<Native::Interface::PortChannel::Mpls::Label>();
        }
        return label;
    }

    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Native::Interface::PortChannel::Mpls::Ldp>();
        }
        return ldp;
    }

    if(child_yang_name == "traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::Interface::PortChannel::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(label != nullptr)
    {
        children["label"] = label;
    }

    if(ldp != nullptr)
    {
        children["ldp"] = ldp;
    }

    if(traffic_eng != nullptr)
    {
        children["traffic-eng"] = traffic_eng;
    }

    return children;
}

void Native::Interface::PortChannel::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "bgp" || name == "label" || name == "ldp" || name == "traffic-eng" || name == "ip" || name == "mtu")
        return true;
    return false;
}

Native::Interface::PortChannel::Mpls::Accounting::Accounting()
    :
    experimental(std::make_shared<Native::Interface::PortChannel::Mpls::Accounting::Experimental>())
{
    experimental->parent = this;

    yang_name = "accounting"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Mpls::Accounting::~Accounting()
{
}

bool Native::Interface::PortChannel::Mpls::Accounting::has_data() const
{
    return (experimental !=  nullptr && experimental->has_data());
}

bool Native::Interface::PortChannel::Mpls::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| (experimental !=  nullptr && experimental->has_operation());
}

std::string Native::Interface::PortChannel::Mpls::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Mpls::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Mpls::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "experimental")
    {
        if(experimental == nullptr)
        {
            experimental = std::make_shared<Native::Interface::PortChannel::Mpls::Accounting::Experimental>();
        }
        return experimental;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Mpls::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(experimental != nullptr)
    {
        children["experimental"] = experimental;
    }

    return children;
}

void Native::Interface::PortChannel::Mpls::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Mpls::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Mpls::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "experimental")
        return true;
    return false;
}

Native::Interface::PortChannel::Mpls::Accounting::Experimental::Experimental()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{

    yang_name = "experimental"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Mpls::Accounting::Experimental::~Experimental()
{
}

bool Native::Interface::PortChannel::Mpls::Accounting::Experimental::has_data() const
{
    return input.is_set
	|| output.is_set;
}

bool Native::Interface::PortChannel::Mpls::Accounting::Experimental::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Interface::PortChannel::Mpls::Accounting::Experimental::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "experimental";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Mpls::Accounting::Experimental::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Mpls::Accounting::Experimental::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Mpls::Accounting::Experimental::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Mpls::Accounting::Experimental::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void Native::Interface::PortChannel::Mpls::Accounting::Experimental::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Mpls::Accounting::Experimental::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::PortChannel::Mpls::Bgp::Bgp()
    :
    forwarding{YType::empty, "forwarding"}
{

    yang_name = "bgp"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Mpls::Bgp::~Bgp()
{
}

bool Native::Interface::PortChannel::Mpls::Bgp::has_data() const
{
    return forwarding.is_set;
}

bool Native::Interface::PortChannel::Mpls::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Interface::PortChannel::Mpls::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Mpls::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Mpls::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Mpls::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Mpls::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Mpls::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Mpls::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Interface::PortChannel::Mpls::Label::Label()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "label"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Mpls::Label::~Label()
{
}

bool Native::Interface::PortChannel::Mpls::Label::has_data() const
{
    return protocol.is_set;
}

bool Native::Interface::PortChannel::Mpls::Label::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::PortChannel::Mpls::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Mpls::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Mpls::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Mpls::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Mpls::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Mpls::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Mpls::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::PortChannel::Mpls::Ldp::Ldp()
    :
    discovery(std::make_shared<Native::Interface::PortChannel::Mpls::Ldp::Discovery>())
{
    discovery->parent = this;

    yang_name = "ldp"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Mpls::Ldp::~Ldp()
{
}

bool Native::Interface::PortChannel::Mpls::Ldp::has_data() const
{
    return (discovery !=  nullptr && discovery->has_data());
}

bool Native::Interface::PortChannel::Mpls::Ldp::has_operation() const
{
    return is_set(yfilter)
	|| (discovery !=  nullptr && discovery->has_operation());
}

std::string Native::Interface::PortChannel::Mpls::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Mpls::Ldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Mpls::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery")
    {
        if(discovery == nullptr)
        {
            discovery = std::make_shared<Native::Interface::PortChannel::Mpls::Ldp::Discovery>();
        }
        return discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Mpls::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(discovery != nullptr)
    {
        children["discovery"] = discovery;
    }

    return children;
}

void Native::Interface::PortChannel::Mpls::Ldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Mpls::Ldp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Mpls::Ldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovery")
        return true;
    return false;
}

Native::Interface::PortChannel::Mpls::Ldp::Discovery::Discovery()
    :
    transport_address{YType::str, "transport-address"}
{

    yang_name = "discovery"; yang_parent_name = "ldp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Mpls::Ldp::Discovery::~Discovery()
{
}

bool Native::Interface::PortChannel::Mpls::Ldp::Discovery::has_data() const
{
    return transport_address.is_set;
}

bool Native::Interface::PortChannel::Mpls::Ldp::Discovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transport_address.yfilter);
}

std::string Native::Interface::PortChannel::Mpls::Ldp::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Mpls::Ldp::Discovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport_address.is_set || is_set(transport_address.yfilter)) leaf_name_data.push_back(transport_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Mpls::Ldp::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Mpls::Ldp::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Mpls::Ldp::Discovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transport-address")
    {
        transport_address = value;
        transport_address.value_namespace = name_space;
        transport_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Mpls::Ldp::Discovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transport-address")
    {
        transport_address.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Mpls::Ldp::Discovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport-address")
        return true;
    return false;
}

Native::Interface::PortChannel::Mpls::TrafficEng::TrafficEng()
    :
    administrative_weight{YType::uint32, "administrative-weight"},
    attribute_flags{YType::str, "attribute-flags"},
    tunnels{YType::empty, "tunnels"}
    	,
    backup_path(std::make_shared<Native::Interface::PortChannel::Mpls::TrafficEng::BackupPath>())
	,flooding(std::make_shared<Native::Interface::PortChannel::Mpls::TrafficEng::Flooding>())
	,passive_interface(std::make_shared<Native::Interface::PortChannel::Mpls::TrafficEng::PassiveInterface>())
{
    backup_path->parent = this;
    flooding->parent = this;
    passive_interface->parent = this;

    yang_name = "traffic-eng"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Mpls::TrafficEng::~TrafficEng()
{
}

bool Native::Interface::PortChannel::Mpls::TrafficEng::has_data() const
{
    return administrative_weight.is_set
	|| attribute_flags.is_set
	|| tunnels.is_set
	|| (backup_path !=  nullptr && backup_path->has_data())
	|| (flooding !=  nullptr && flooding->has_data())
	|| (passive_interface !=  nullptr && passive_interface->has_data());
}

bool Native::Interface::PortChannel::Mpls::TrafficEng::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(administrative_weight.yfilter)
	|| ydk::is_set(attribute_flags.yfilter)
	|| ydk::is_set(tunnels.yfilter)
	|| (backup_path !=  nullptr && backup_path->has_operation())
	|| (flooding !=  nullptr && flooding->has_operation())
	|| (passive_interface !=  nullptr && passive_interface->has_operation());
}

std::string Native::Interface::PortChannel::Mpls::TrafficEng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:traffic-eng";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Mpls::TrafficEng::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (administrative_weight.is_set || is_set(administrative_weight.yfilter)) leaf_name_data.push_back(administrative_weight.get_name_leafdata());
    if (attribute_flags.is_set || is_set(attribute_flags.yfilter)) leaf_name_data.push_back(attribute_flags.get_name_leafdata());
    if (tunnels.is_set || is_set(tunnels.yfilter)) leaf_name_data.push_back(tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-path")
    {
        if(backup_path == nullptr)
        {
            backup_path = std::make_shared<Native::Interface::PortChannel::Mpls::TrafficEng::BackupPath>();
        }
        return backup_path;
    }

    if(child_yang_name == "flooding")
    {
        if(flooding == nullptr)
        {
            flooding = std::make_shared<Native::Interface::PortChannel::Mpls::TrafficEng::Flooding>();
        }
        return flooding;
    }

    if(child_yang_name == "passive-interface")
    {
        if(passive_interface == nullptr)
        {
            passive_interface = std::make_shared<Native::Interface::PortChannel::Mpls::TrafficEng::PassiveInterface>();
        }
        return passive_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Mpls::TrafficEng::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_path != nullptr)
    {
        children["backup-path"] = backup_path;
    }

    if(flooding != nullptr)
    {
        children["flooding"] = flooding;
    }

    if(passive_interface != nullptr)
    {
        children["passive-interface"] = passive_interface;
    }

    return children;
}

void Native::Interface::PortChannel::Mpls::TrafficEng::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "administrative-weight")
    {
        administrative_weight = value;
        administrative_weight.value_namespace = name_space;
        administrative_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-flags")
    {
        attribute_flags = value;
        attribute_flags.value_namespace = name_space;
        attribute_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnels")
    {
        tunnels = value;
        tunnels.value_namespace = name_space;
        tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Mpls::TrafficEng::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "administrative-weight")
    {
        administrative_weight.yfilter = yfilter;
    }
    if(value_path == "attribute-flags")
    {
        attribute_flags.yfilter = yfilter;
    }
    if(value_path == "tunnels")
    {
        tunnels.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Mpls::TrafficEng::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-path" || name == "flooding" || name == "passive-interface" || name == "administrative-weight" || name == "attribute-flags" || name == "tunnels")
        return true;
    return false;
}

Native::Interface::PortChannel::Mpls::TrafficEng::BackupPath::BackupPath()
    :
    tunnel{YType::uint32, "Tunnel"}
{

    yang_name = "backup-path"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Mpls::TrafficEng::BackupPath::~BackupPath()
{
}

bool Native::Interface::PortChannel::Mpls::TrafficEng::BackupPath::has_data() const
{
    return tunnel.is_set;
}

bool Native::Interface::PortChannel::Mpls::TrafficEng::BackupPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Native::Interface::PortChannel::Mpls::TrafficEng::BackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Mpls::TrafficEng::BackupPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Mpls::TrafficEng::BackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Mpls::TrafficEng::BackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Mpls::TrafficEng::BackupPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Mpls::TrafficEng::BackupPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Mpls::TrafficEng::BackupPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Tunnel")
        return true;
    return false;
}

Native::Interface::PortChannel::Mpls::TrafficEng::Flooding::Flooding()
    :
    thresholds(std::make_shared<Native::Interface::PortChannel::Mpls::TrafficEng::Flooding::Thresholds>())
{
    thresholds->parent = this;

    yang_name = "flooding"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Mpls::TrafficEng::Flooding::~Flooding()
{
}

bool Native::Interface::PortChannel::Mpls::TrafficEng::Flooding::has_data() const
{
    return (thresholds !=  nullptr && thresholds->has_data());
}

bool Native::Interface::PortChannel::Mpls::TrafficEng::Flooding::has_operation() const
{
    return is_set(yfilter)
	|| (thresholds !=  nullptr && thresholds->has_operation());
}

std::string Native::Interface::PortChannel::Mpls::TrafficEng::Flooding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Mpls::TrafficEng::Flooding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Mpls::TrafficEng::Flooding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresholds")
    {
        if(thresholds == nullptr)
        {
            thresholds = std::make_shared<Native::Interface::PortChannel::Mpls::TrafficEng::Flooding::Thresholds>();
        }
        return thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Mpls::TrafficEng::Flooding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresholds != nullptr)
    {
        children["thresholds"] = thresholds;
    }

    return children;
}

void Native::Interface::PortChannel::Mpls::TrafficEng::Flooding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Mpls::TrafficEng::Flooding::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Mpls::TrafficEng::Flooding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresholds")
        return true;
    return false;
}

Native::Interface::PortChannel::Mpls::TrafficEng::Flooding::Thresholds::Thresholds()
    :
    down{YType::uint8, "down"},
    up{YType::uint8, "up"}
{

    yang_name = "thresholds"; yang_parent_name = "flooding"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Mpls::TrafficEng::Flooding::Thresholds::~Thresholds()
{
}

bool Native::Interface::PortChannel::Mpls::TrafficEng::Flooding::Thresholds::has_data() const
{
    for (auto const & leaf : down.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : up.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::PortChannel::Mpls::TrafficEng::Flooding::Thresholds::has_operation() const
{
    for (auto const & leaf : down.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : up.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(up.yfilter);
}

std::string Native::Interface::PortChannel::Mpls::TrafficEng::Flooding::Thresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Mpls::TrafficEng::Flooding::Thresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto down_name_datas = down.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), down_name_datas.begin(), down_name_datas.end());
    auto up_name_datas = up.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_name_datas.begin(), up_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Mpls::TrafficEng::Flooding::Thresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Mpls::TrafficEng::Flooding::Thresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Mpls::TrafficEng::Flooding::Thresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down.append(value);
    }
    if(value_path == "up")
    {
        up.append(value);
    }
}

void Native::Interface::PortChannel::Mpls::TrafficEng::Flooding::Thresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Mpls::TrafficEng::Flooding::Thresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "up")
        return true;
    return false;
}

Native::Interface::PortChannel::Mpls::TrafficEng::PassiveInterface::PassiveInterface()
    :
    nbr_if_addr{YType::str, "nbr-if-addr"},
    nbr_te_id{YType::str, "nbr-te-id"}
    	,
    nbr_igp_id(std::make_shared<Native::Interface::PortChannel::Mpls::TrafficEng::PassiveInterface::NbrIgpId>())
{
    nbr_igp_id->parent = this;

    yang_name = "passive-interface"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Mpls::TrafficEng::PassiveInterface::~PassiveInterface()
{
}

bool Native::Interface::PortChannel::Mpls::TrafficEng::PassiveInterface::has_data() const
{
    return nbr_if_addr.is_set
	|| nbr_te_id.is_set
	|| (nbr_igp_id !=  nullptr && nbr_igp_id->has_data());
}

bool Native::Interface::PortChannel::Mpls::TrafficEng::PassiveInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nbr_if_addr.yfilter)
	|| ydk::is_set(nbr_te_id.yfilter)
	|| (nbr_igp_id !=  nullptr && nbr_igp_id->has_operation());
}

std::string Native::Interface::PortChannel::Mpls::TrafficEng::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Mpls::TrafficEng::PassiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbr_if_addr.is_set || is_set(nbr_if_addr.yfilter)) leaf_name_data.push_back(nbr_if_addr.get_name_leafdata());
    if (nbr_te_id.is_set || is_set(nbr_te_id.yfilter)) leaf_name_data.push_back(nbr_te_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Mpls::TrafficEng::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nbr-igp-id")
    {
        if(nbr_igp_id == nullptr)
        {
            nbr_igp_id = std::make_shared<Native::Interface::PortChannel::Mpls::TrafficEng::PassiveInterface::NbrIgpId>();
        }
        return nbr_igp_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Mpls::TrafficEng::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nbr_igp_id != nullptr)
    {
        children["nbr-igp-id"] = nbr_igp_id;
    }

    return children;
}

void Native::Interface::PortChannel::Mpls::TrafficEng::PassiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nbr-if-addr")
    {
        nbr_if_addr = value;
        nbr_if_addr.value_namespace = name_space;
        nbr_if_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-te-id")
    {
        nbr_te_id = value;
        nbr_te_id.value_namespace = name_space;
        nbr_te_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Mpls::TrafficEng::PassiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nbr-if-addr")
    {
        nbr_if_addr.yfilter = yfilter;
    }
    if(value_path == "nbr-te-id")
    {
        nbr_te_id.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Mpls::TrafficEng::PassiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbr-igp-id" || name == "nbr-if-addr" || name == "nbr-te-id")
        return true;
    return false;
}

Native::Interface::PortChannel::Mpls::TrafficEng::PassiveInterface::NbrIgpId::NbrIgpId()
    :
    isis{YType::str, "isis"},
    ospf{YType::str, "ospf"}
{

    yang_name = "nbr-igp-id"; yang_parent_name = "passive-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Mpls::TrafficEng::PassiveInterface::NbrIgpId::~NbrIgpId()
{
}

bool Native::Interface::PortChannel::Mpls::TrafficEng::PassiveInterface::NbrIgpId::has_data() const
{
    return isis.is_set
	|| ospf.is_set;
}

bool Native::Interface::PortChannel::Mpls::TrafficEng::PassiveInterface::NbrIgpId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis.yfilter)
	|| ydk::is_set(ospf.yfilter);
}

std::string Native::Interface::PortChannel::Mpls::TrafficEng::PassiveInterface::NbrIgpId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-igp-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Mpls::TrafficEng::PassiveInterface::NbrIgpId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis.is_set || is_set(isis.yfilter)) leaf_name_data.push_back(isis.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.yfilter)) leaf_name_data.push_back(ospf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Mpls::TrafficEng::PassiveInterface::NbrIgpId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Mpls::TrafficEng::PassiveInterface::NbrIgpId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Mpls::TrafficEng::PassiveInterface::NbrIgpId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis")
    {
        isis = value;
        isis.value_namespace = name_space;
        isis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf")
    {
        ospf = value;
        ospf.value_namespace = name_space;
        ospf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Mpls::TrafficEng::PassiveInterface::NbrIgpId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis")
    {
        isis.yfilter = yfilter;
    }
    if(value_path == "ospf")
    {
        ospf.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Mpls::TrafficEng::PassiveInterface::NbrIgpId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf")
        return true;
    return false;
}

Native::Interface::PortChannel::Negotiation::Negotiation()
    :
    auto_{YType::boolean, "auto"}
{

    yang_name = "negotiation"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Negotiation::~Negotiation()
{
}

bool Native::Interface::PortChannel::Negotiation::has_data() const
{
    return auto_.is_set;
}

bool Native::Interface::PortChannel::Negotiation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter);
}

std::string Native::Interface::PortChannel::Negotiation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:negotiation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Negotiation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Negotiation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Negotiation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Negotiation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Negotiation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Negotiation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Ospfv3()
    :
    dead_interval{YType::uint16, "dead-interval"},
    flood_reduction{YType::empty, "flood-reduction"},
    hello_interval{YType::uint32, "hello-interval"},
    mtu_ignore{YType::empty, "mtu-ignore"},
    priority{YType::uint8, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    shutdown{YType::empty, "shutdown"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication>())
	,bfd(nullptr) // presence node
	,cost(std::make_shared<Native::Interface::PortChannel::Ospfv3::Cost>())
	,database_filter(std::make_shared<Native::Interface::PortChannel::Ospfv3::DatabaseFilter>())
	,demand_circuit(nullptr) // presence node
	,encryption(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption>())
	,manet(std::make_shared<Native::Interface::PortChannel::Ospfv3::Manet>())
	,multi_area(std::make_shared<Native::Interface::PortChannel::Ospfv3::MultiArea>())
	,network(std::make_shared<Native::Interface::PortChannel::Ospfv3::Network>())
	,prefix_suppression(nullptr) // presence node
{
    authentication->parent = this;
    cost->parent = this;
    database_filter->parent = this;
    encryption->parent = this;
    manet->parent = this;
    multi_area->parent = this;
    network->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::~Ospfv3()
{
}

bool Native::Interface::PortChannel::Ospfv3::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<process_id.size(); index++)
    {
        if(process_id[index]->has_data())
            return true;
    }
    return dead_interval.is_set
	|| flood_reduction.is_set
	|| hello_interval.is_set
	|| mtu_ignore.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| shutdown.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost !=  nullptr && cost->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (encryption !=  nullptr && encryption->has_data())
	|| (manet !=  nullptr && manet->has_data())
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<process_id.size(); index++)
    {
        if(process_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(flood_reduction.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost !=  nullptr && cost->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (manet !=  nullptr && manet->has_operation())
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ospfv3:ospfv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.yfilter)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::PortChannel::Ospfv3::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::PortChannel::Ospfv3::Cost>();
        }
        return cost;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::PortChannel::Ospfv3::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::PortChannel::Ospfv3::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "manet")
    {
        if(manet == nullptr)
        {
            manet = std::make_shared<Native::Interface::PortChannel::Ospfv3::Manet>();
        }
        return manet;
    }

    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<Native::Interface::PortChannel::Ospfv3::MultiArea>();
        }
        return multi_area;
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::PortChannel::Ospfv3::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Interface::PortChannel::Ospfv3::Network>();
        }
        return network;
    }

    if(child_yang_name == "prefix-suppression")
    {
        if(prefix_suppression == nullptr)
        {
            prefix_suppression = std::make_shared<Native::Interface::PortChannel::Ospfv3::PrefixSuppression>();
        }
        return prefix_suppression;
    }

    if(child_yang_name == "process-id")
    {
        for(auto const & c : process_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId>();
        c->parent = this;
        process_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    if(demand_circuit != nullptr)
    {
        children["demand-circuit"] = demand_circuit;
    }

    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    if(manet != nullptr)
    {
        children["manet"] = manet;
    }

    if(multi_area != nullptr)
    {
        children["multi-area"] = multi_area;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(prefix_suppression != nullptr)
    {
        children["prefix-suppression"] = prefix_suppression;
    }

    for (auto const & c : process_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
        flood_reduction.value_namespace = name_space;
        flood_reduction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "bfd" || name == "cost" || name == "database-filter" || name == "demand-circuit" || name == "encryption" || name == "manet" || name == "multi-area" || name == "neighbor" || name == "network" || name == "prefix-suppression" || name == "process-id" || name == "dead-interval" || name == "flood-reduction" || name == "hello-interval" || name == "mtu-ignore" || name == "priority" || name == "retransmit-interval" || name == "shutdown" || name == "transmit-delay")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    null{YType::empty, "null"}
    	,
    ipsec(std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec>())
{
    ipsec->parent = this;

    yang_name = "authentication"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Authentication::~Authentication()
{
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::has_data() const
{
    return key_chain.is_set
	|| null.is_set
	|| (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(null.yfilter)
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsec" || name == "key-chain" || name == "null")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Ipsec()
    :
    spi{YType::uint64, "spi"}
    	,
    md5(std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5>())
	,sha1(std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1>())
{
    md5->parent = this;
    sha1->parent = this;

    yang_name = "ipsec"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::~Ipsec()
{
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::has_data() const
{
    return spi.is_set
	|| (md5 !=  nullptr && md5->has_data())
	|| (sha1 !=  nullptr && sha1->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spi.yfilter)
	|| (md5 !=  nullptr && md5->has_operation())
	|| (sha1 !=  nullptr && sha1->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5>();
        }
        return md5;
    }

    if(child_yang_name == "sha1")
    {
        if(sha1 == nullptr)
        {
            sha1 = std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1>();
        }
        return sha1;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    if(sha1 != nullptr)
    {
        children["sha1"] = sha1;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "sha1" || name == "spi")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::Md5()
    :
    key_string(std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::~Md5()
{
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "md5"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::Sha1()
    :
    key_string(std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString>())
{
    key_string->parent = this;

    yang_name = "sha1"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::~Sha1()
{
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sha1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "sha1"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::~KeyString()
{
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "bfd"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Bfd::~Bfd()
{
}

bool Native::Interface::PortChannel::Ospfv3::Bfd::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Cost::Cost()
    :
    value_{YType::uint32, "value"}
    	,
    dynamic(nullptr) // presence node
{

    yang_name = "cost"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Cost::~Cost()
{
}

bool Native::Interface::PortChannel::Ospfv3::Cost::has_data() const
{
    return value_.is_set
	|| (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Interface::PortChannel::Ospfv3::Cost::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Dynamic()
    :
    default_{YType::uint32, "default"}
    	,
    hysteresis(nullptr) // presence node
	,weight(std::make_shared<Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight>())
{
    weight->parent = this;

    yang_name = "dynamic"; yang_parent_name = "cost"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::~Dynamic()
{
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::has_data() const
{
    return default_.is_set
	|| (hysteresis !=  nullptr && hysteresis->has_data())
	|| (weight !=  nullptr && weight->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (hysteresis !=  nullptr && hysteresis->has_operation())
	|| (weight !=  nullptr && weight->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hysteresis")
    {
        if(hysteresis == nullptr)
        {
            hysteresis = std::make_shared<Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis>();
        }
        return hysteresis;
    }

    if(child_yang_name == "weight")
    {
        if(weight == nullptr)
        {
            weight = std::make_shared<Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight>();
        }
        return weight;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hysteresis != nullptr)
    {
        children["hysteresis"] = hysteresis;
    }

    if(weight != nullptr)
    {
        children["weight"] = weight;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hysteresis" || name == "weight" || name == "default")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::Hysteresis()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "hysteresis"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::~Hysteresis()
{
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hysteresis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Weight()
    :
    l2_factor(nullptr) // presence node
	,latency(nullptr) // presence node
	,resources(nullptr) // presence node
	,throughput(nullptr) // presence node
{

    yang_name = "weight"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::~Weight()
{
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::has_data() const
{
    return (l2_factor !=  nullptr && l2_factor->has_data())
	|| (latency !=  nullptr && latency->has_data())
	|| (resources !=  nullptr && resources->has_data())
	|| (throughput !=  nullptr && throughput->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::has_operation() const
{
    return is_set(yfilter)
	|| (l2_factor !=  nullptr && l2_factor->has_operation())
	|| (latency !=  nullptr && latency->has_operation())
	|| (resources !=  nullptr && resources->has_operation())
	|| (throughput !=  nullptr && throughput->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "L2-factor")
    {
        if(l2_factor == nullptr)
        {
            l2_factor = std::make_shared<Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor>();
        }
        return l2_factor;
    }

    if(child_yang_name == "latency")
    {
        if(latency == nullptr)
        {
            latency = std::make_shared<Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency>();
        }
        return latency;
    }

    if(child_yang_name == "resources")
    {
        if(resources == nullptr)
        {
            resources = std::make_shared<Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources>();
        }
        return resources;
    }

    if(child_yang_name == "throughput")
    {
        if(throughput == nullptr)
        {
            throughput = std::make_shared<Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput>();
        }
        return throughput;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2_factor != nullptr)
    {
        children["L2-factor"] = l2_factor;
    }

    if(latency != nullptr)
    {
        children["latency"] = latency;
    }

    if(resources != nullptr)
    {
        children["resources"] = resources;
    }

    if(throughput != nullptr)
    {
        children["throughput"] = throughput;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "L2-factor" || name == "latency" || name == "resources" || name == "throughput")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::L2Factor()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "L2-factor"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::~L2Factor()
{
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "L2-factor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::Latency()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "latency"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::~Latency()
{
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "latency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::Resources()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "resources"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::~Resources()
{
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::Throughput()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "throughput"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::~Throughput()
{
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throughput";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{

    yang_name = "database-filter"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::PortChannel::Ospfv3::DatabaseFilter::has_data() const
{
    return all.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::DemandCircuit::DemandCircuit()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "demand-circuit"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::PortChannel::Ospfv3::DemandCircuit::has_data() const
{
    return ignore.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::DemandCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::DemandCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::DemandCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::DemandCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::DemandCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Encryption()
    :
    null{YType::empty, "null"}
    	,
    ipsec(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec>())
{
    ipsec->parent = this;

    yang_name = "encryption"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Encryption::~Encryption()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::has_data() const
{
    return null.is_set
	|| (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(null.yfilter)
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsec" || name == "null")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec()
    :
    esp{YType::empty, "esp"},
    spi{YType::uint64, "spi"}
    	,
    aes_cbc(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc>())
	,ipsec_3des(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des>())
{
    aes_cbc->parent = this;
    ipsec_3des->parent = this;

    yang_name = "ipsec"; yang_parent_name = "encryption"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::~Ipsec()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::has_data() const
{
    return esp.is_set
	|| spi.is_set
	|| (aes_cbc !=  nullptr && aes_cbc->has_data())
	|| (ipsec_3des !=  nullptr && ipsec_3des->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(esp.yfilter)
	|| ydk::is_set(spi.yfilter)
	|| (aes_cbc !=  nullptr && aes_cbc->has_operation())
	|| (ipsec_3des !=  nullptr && ipsec_3des->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (esp.is_set || is_set(esp.yfilter)) leaf_name_data.push_back(esp.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aes-cbc")
    {
        if(aes_cbc == nullptr)
        {
            aes_cbc = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc>();
        }
        return aes_cbc;
    }

    if(child_yang_name == "ipsec_3des")
    {
        if(ipsec_3des == nullptr)
        {
            ipsec_3des = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des>();
        }
        return ipsec_3des;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aes_cbc != nullptr)
    {
        children["aes-cbc"] = aes_cbc;
    }

    if(ipsec_3des != nullptr)
    {
        children["ipsec_3des"] = ipsec_3des;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "esp")
    {
        esp = value;
        esp.value_namespace = name_space;
        esp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "esp")
    {
        esp.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes-cbc" || name == "ipsec_3des" || name == "esp" || name == "spi")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc()
    :
    aes_192(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192>())
	,aes_256(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256>())
	,aes_cbc_128(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128>())
{
    aes_192->parent = this;
    aes_256->parent = this;
    aes_cbc_128->parent = this;

    yang_name = "aes-cbc"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::~AesCbc()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::has_data() const
{
    return (aes_192 !=  nullptr && aes_192->has_data())
	|| (aes_256 !=  nullptr && aes_256->has_data())
	|| (aes_cbc_128 !=  nullptr && aes_cbc_128->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::has_operation() const
{
    return is_set(yfilter)
	|| (aes_192 !=  nullptr && aes_192->has_operation())
	|| (aes_256 !=  nullptr && aes_256->has_operation())
	|| (aes_cbc_128 !=  nullptr && aes_cbc_128->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-cbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aes-192")
    {
        if(aes_192 == nullptr)
        {
            aes_192 = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192>();
        }
        return aes_192;
    }

    if(child_yang_name == "aes-256")
    {
        if(aes_256 == nullptr)
        {
            aes_256 = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256>();
        }
        return aes_256;
    }

    if(child_yang_name == "aes-cbc-128")
    {
        if(aes_cbc_128 == nullptr)
        {
            aes_cbc_128 = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128>();
        }
        return aes_cbc_128;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aes_192 != nullptr)
    {
        children["aes-192"] = aes_192;
    }

    if(aes_256 != nullptr)
    {
        children["aes-256"] = aes_256;
    }

    if(aes_cbc_128 != nullptr)
    {
        children["aes-cbc-128"] = aes_cbc_128;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes-192" || name == "aes-256" || name == "aes-cbc-128")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::Aes192()
    :
    key_string(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString>())
{
    key_string->parent = this;

    yang_name = "aes-192"; yang_parent_name = "aes-cbc"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::~Aes192()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-192";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "aes-192"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::~KeyString()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::Aes256()
    :
    key_string(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString>())
{
    key_string->parent = this;

    yang_name = "aes-256"; yang_parent_name = "aes-cbc"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::~Aes256()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-256";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "aes-256"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::~KeyString()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::AesCbc128()
    :
    key_string(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString>())
{
    key_string->parent = this;

    yang_name = "aes-cbc-128"; yang_parent_name = "aes-cbc"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::~AesCbc128()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-cbc-128";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "aes-cbc-128"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::~KeyString()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des::Ipsec3Des()
    :
    key_string(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString>())
{
    key_string->parent = this;

    yang_name = "ipsec_3des"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des::~Ipsec3Des()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec_3des";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "ipsec_3des"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::~KeyString()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Manet::Manet()
    :
    peering(std::make_shared<Native::Interface::PortChannel::Ospfv3::Manet::Peering>())
{
    peering->parent = this;

    yang_name = "manet"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Manet::~Manet()
{
}

bool Native::Interface::PortChannel::Ospfv3::Manet::has_data() const
{
    return (peering !=  nullptr && peering->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Manet::has_operation() const
{
    return is_set(yfilter)
	|| (peering !=  nullptr && peering->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Manet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Manet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Manet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peering")
    {
        if(peering == nullptr)
        {
            peering = std::make_shared<Native::Interface::PortChannel::Ospfv3::Manet::Peering>();
        }
        return peering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Manet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peering != nullptr)
    {
        children["peering"] = peering;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Manet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::Manet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::Manet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peering")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Manet::Peering::Peering()
    :
    link_metrics{YType::uint32, "link-metrics"}
    	,
    cost(std::make_shared<Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost>())
{
    cost->parent = this;

    yang_name = "peering"; yang_parent_name = "manet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Manet::Peering::~Peering()
{
}

bool Native::Interface::PortChannel::Ospfv3::Manet::Peering::has_data() const
{
    return link_metrics.is_set
	|| (cost !=  nullptr && cost->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Manet::Peering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_metrics.yfilter)
	|| (cost !=  nullptr && cost->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Manet::Peering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Manet::Peering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_metrics.is_set || is_set(link_metrics.yfilter)) leaf_name_data.push_back(link_metrics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Manet::Peering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost>();
        }
        return cost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Manet::Peering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Manet::Peering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-metrics")
    {
        link_metrics = value;
        link_metrics.value_namespace = name_space;
        link_metrics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Manet::Peering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-metrics")
    {
        link_metrics.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Manet::Peering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "link-metrics")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::Cost()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "cost"; yang_parent_name = "peering"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::~Cost()
{
}

bool Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::MultiArea::MultiArea()
    :
    cost{YType::uint32, "cost"},
    id{YType::str, "id"}
{

    yang_name = "multi-area"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::MultiArea::~MultiArea()
{
}

bool Native::Interface::PortChannel::Ospfv3::MultiArea::has_data() const
{
    return cost.is_set
	|| id.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::MultiArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::MultiArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::MultiArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::MultiArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::MultiArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "id")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint8, "priority"}
    	,
    database_filter(std::make_shared<Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter>())
{
    database_filter->parent = this;

    yang_name = "neighbor"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Neighbor::~Neighbor()
{
}

bool Native::Interface::PortChannel::Ospfv3::Neighbor::has_data() const
{
    return id.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| (database_filter !=  nullptr && database_filter->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (database_filter !=  nullptr && database_filter->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter>();
        }
        return database_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-filter" || name == "id" || name == "cost" || name == "poll-interval" || name == "priority")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{

    yang_name = "database-filter"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::has_data() const
{
    return all.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Network::Network()
    :
    broadcast{YType::empty, "broadcast"},
    manet{YType::empty, "manet"},
    non_broadcast{YType::empty, "non-broadcast"},
    point_to_point{YType::empty, "point-to-point"}
    	,
    point_to_multipoint(nullptr) // presence node
{

    yang_name = "network"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Network::~Network()
{
}

bool Native::Interface::PortChannel::Ospfv3::Network::has_data() const
{
    return broadcast.is_set
	|| manet.is_set
	|| non_broadcast.is_set
	|| point_to_point.is_set
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(manet.yfilter)
	|| ydk::is_set(non_broadcast.yfilter)
	|| ydk::is_set(point_to_point.yfilter)
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (manet.is_set || is_set(manet.yfilter)) leaf_name_data.push_back(manet.get_name_leafdata());
    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.yfilter)) leaf_name_data.push_back(point_to_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "point-to-multipoint")
    {
        if(point_to_multipoint == nullptr)
        {
            point_to_multipoint = std::make_shared<Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint>();
        }
        return point_to_multipoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(point_to_multipoint != nullptr)
    {
        children["point-to-multipoint"] = point_to_multipoint;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manet")
    {
        manet = value;
        manet.value_namespace = name_space;
        manet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
        point_to_point.value_namespace = name_space;
        point_to_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "manet")
    {
        manet.yfilter = yfilter;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
    if(value_path == "point-to-point")
    {
        point_to_point.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "point-to-multipoint" || name == "broadcast" || name == "manet" || name == "non-broadcast" || name == "point-to-point")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::PointToMultipoint()
    :
    non_broadcast{YType::empty, "non-broadcast"}
{

    yang_name = "point-to-multipoint"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::~PointToMultipoint()
{
}

bool Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::has_data() const
{
    return non_broadcast.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_broadcast.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "point-to-multipoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-broadcast")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::PrefixSuppression::PrefixSuppression()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "prefix-suppression"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::PrefixSuppression::~PrefixSuppression()
{
}

bool Native::Interface::PortChannel::Ospfv3::PrefixSuppression::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::PrefixSuppression::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::PrefixSuppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-suppression";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::PrefixSuppression::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::PrefixSuppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::PrefixSuppression::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::PrefixSuppression::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::PrefixSuppression::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::PrefixSuppression::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::ProcessId()
    :
    id{YType::uint16, "id"},
    dead_interval{YType::uint16, "dead-interval"},
    hello_interval{YType::uint32, "hello-interval"},
    priority{YType::uint8, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Authentication>())
	,bfd(nullptr) // presence node
	,cost(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Cost>())
	,database_filter(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::DatabaseFilter>())
	,demand_circuit(nullptr) // presence node
	,flood_reduction(nullptr) // presence node
	,ipv4(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4>())
	,ipv6(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6>())
	,manet(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Manet>())
	,mtu_ignore(nullptr) // presence node
	,multi_area(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::MultiArea>())
	,network(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Network>())
	,prefix_suppression(nullptr) // presence node
	,shutdown(nullptr) // presence node
{
    authentication->parent = this;
    cost->parent = this;
    database_filter->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;
    manet->parent = this;
    multi_area->parent = this;
    network->parent = this;

    yang_name = "process-id"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::~ProcessId()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return id.is_set
	|| dead_interval.is_set
	|| hello_interval.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost !=  nullptr && cost->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (flood_reduction !=  nullptr && flood_reduction->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (manet !=  nullptr && manet->has_data())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_data())
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost !=  nullptr && cost->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (flood_reduction !=  nullptr && flood_reduction->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (manet !=  nullptr && manet->has_operation())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_operation())
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-id" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Cost>();
        }
        return cost;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "flood-reduction")
    {
        if(flood_reduction == nullptr)
        {
            flood_reduction = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::FloodReduction>();
        }
        return flood_reduction;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "manet")
    {
        if(manet == nullptr)
        {
            manet = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Manet>();
        }
        return manet;
    }

    if(child_yang_name == "mtu-ignore")
    {
        if(mtu_ignore == nullptr)
        {
            mtu_ignore = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::MtuIgnore>();
        }
        return mtu_ignore;
    }

    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::MultiArea>();
        }
        return multi_area;
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Network>();
        }
        return network;
    }

    if(child_yang_name == "prefix-suppression")
    {
        if(prefix_suppression == nullptr)
        {
            prefix_suppression = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::PrefixSuppression>();
        }
        return prefix_suppression;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Shutdown>();
        }
        return shutdown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    if(demand_circuit != nullptr)
    {
        children["demand-circuit"] = demand_circuit;
    }

    if(flood_reduction != nullptr)
    {
        children["flood-reduction"] = flood_reduction;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(manet != nullptr)
    {
        children["manet"] = manet;
    }

    if(mtu_ignore != nullptr)
    {
        children["mtu-ignore"] = mtu_ignore;
    }

    if(multi_area != nullptr)
    {
        children["multi-area"] = multi_area;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(prefix_suppression != nullptr)
    {
        children["prefix-suppression"] = prefix_suppression;
    }

    if(shutdown != nullptr)
    {
        children["shutdown"] = shutdown;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "bfd" || name == "cost" || name == "database-filter" || name == "demand-circuit" || name == "flood-reduction" || name == "ipv4" || name == "ipv6" || name == "manet" || name == "mtu-ignore" || name == "multi-area" || name == "neighbor" || name == "network" || name == "prefix-suppression" || name == "shutdown" || name == "id" || name == "dead-interval" || name == "hello-interval" || name == "priority" || name == "retransmit-interval" || name == "transmit-delay")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    null{YType::empty, "null"}
{

    yang_name = "authentication"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Authentication::~Authentication()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Authentication::has_data() const
{
    return key_chain.is_set
	|| null.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(null.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "null")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "bfd"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Bfd::~Bfd()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Bfd::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Cost()
    :
    value_{YType::uint32, "value"}
    	,
    dynamic(nullptr) // presence node
{

    yang_name = "cost"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::~Cost()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::has_data() const
{
    return value_.is_set
	|| (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Dynamic()
    :
    default_{YType::uint32, "default"}
    	,
    hysteresis(nullptr) // presence node
	,weight(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight>())
{
    weight->parent = this;

    yang_name = "dynamic"; yang_parent_name = "cost"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::~Dynamic()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::has_data() const
{
    return default_.is_set
	|| (hysteresis !=  nullptr && hysteresis->has_data())
	|| (weight !=  nullptr && weight->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (hysteresis !=  nullptr && hysteresis->has_operation())
	|| (weight !=  nullptr && weight->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hysteresis")
    {
        if(hysteresis == nullptr)
        {
            hysteresis = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis>();
        }
        return hysteresis;
    }

    if(child_yang_name == "weight")
    {
        if(weight == nullptr)
        {
            weight = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight>();
        }
        return weight;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hysteresis != nullptr)
    {
        children["hysteresis"] = hysteresis;
    }

    if(weight != nullptr)
    {
        children["weight"] = weight;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hysteresis" || name == "weight" || name == "default")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::Hysteresis()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "hysteresis"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::~Hysteresis()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hysteresis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Weight()
    :
    l2_factor(nullptr) // presence node
	,latency(nullptr) // presence node
	,resources(nullptr) // presence node
	,throughput(nullptr) // presence node
{

    yang_name = "weight"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::~Weight()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::has_data() const
{
    return (l2_factor !=  nullptr && l2_factor->has_data())
	|| (latency !=  nullptr && latency->has_data())
	|| (resources !=  nullptr && resources->has_data())
	|| (throughput !=  nullptr && throughput->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::has_operation() const
{
    return is_set(yfilter)
	|| (l2_factor !=  nullptr && l2_factor->has_operation())
	|| (latency !=  nullptr && latency->has_operation())
	|| (resources !=  nullptr && resources->has_operation())
	|| (throughput !=  nullptr && throughput->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "L2-factor")
    {
        if(l2_factor == nullptr)
        {
            l2_factor = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor>();
        }
        return l2_factor;
    }

    if(child_yang_name == "latency")
    {
        if(latency == nullptr)
        {
            latency = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency>();
        }
        return latency;
    }

    if(child_yang_name == "resources")
    {
        if(resources == nullptr)
        {
            resources = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources>();
        }
        return resources;
    }

    if(child_yang_name == "throughput")
    {
        if(throughput == nullptr)
        {
            throughput = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput>();
        }
        return throughput;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2_factor != nullptr)
    {
        children["L2-factor"] = l2_factor;
    }

    if(latency != nullptr)
    {
        children["latency"] = latency;
    }

    if(resources != nullptr)
    {
        children["resources"] = resources;
    }

    if(throughput != nullptr)
    {
        children["throughput"] = throughput;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "L2-factor" || name == "latency" || name == "resources" || name == "throughput")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::L2Factor()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "L2-factor"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::~L2Factor()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "L2-factor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::Latency()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "latency"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::~Latency()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "latency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::Resources()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "resources"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::~Resources()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::Throughput()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "throughput"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::~Throughput()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throughput";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"},
    disable{YType::empty, "disable"}
{

    yang_name = "database-filter"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::DatabaseFilter::has_data() const
{
    return all.is_set
	|| disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::DemandCircuit::DemandCircuit()
    :
    disable{YType::empty, "disable"},
    ignore{YType::empty, "ignore"}
{

    yang_name = "demand-circuit"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::DemandCircuit::has_data() const
{
    return disable.is_set
	|| ignore.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::DemandCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::DemandCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::DemandCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::DemandCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::DemandCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "ignore")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::FloodReduction::FloodReduction()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "flood-reduction"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::FloodReduction::~FloodReduction()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::FloodReduction::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::FloodReduction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::FloodReduction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-reduction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::FloodReduction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::FloodReduction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::FloodReduction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::FloodReduction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::FloodReduction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::FloodReduction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Ipv4()
    :
    dead_interval{YType::uint16, "dead-interval"},
    hello_interval{YType::uint32, "hello-interval"},
    priority{YType::uint8, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Authentication>())
	,bfd(nullptr) // presence node
	,cost(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost>())
	,database_filter(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter>())
	,demand_circuit(nullptr) // presence node
	,flood_reduction(nullptr) // presence node
	,manet(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet>())
	,mtu_ignore(nullptr) // presence node
	,multi_area(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MultiArea>())
	,network(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network>())
	,prefix_suppression(nullptr) // presence node
	,shutdown(nullptr) // presence node
{
    authentication->parent = this;
    cost->parent = this;
    database_filter->parent = this;
    manet->parent = this;
    multi_area->parent = this;
    network->parent = this;

    yang_name = "ipv4"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::~Ipv4()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return dead_interval.is_set
	|| hello_interval.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost !=  nullptr && cost->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (flood_reduction !=  nullptr && flood_reduction->has_data())
	|| (manet !=  nullptr && manet->has_data())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_data())
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost !=  nullptr && cost->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (flood_reduction !=  nullptr && flood_reduction->has_operation())
	|| (manet !=  nullptr && manet->has_operation())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_operation())
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        for(auto const & c : area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Area>();
        c->parent = this;
        area.push_back(c);
        return c;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost>();
        }
        return cost;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "flood-reduction")
    {
        if(flood_reduction == nullptr)
        {
            flood_reduction = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::FloodReduction>();
        }
        return flood_reduction;
    }

    if(child_yang_name == "manet")
    {
        if(manet == nullptr)
        {
            manet = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet>();
        }
        return manet;
    }

    if(child_yang_name == "mtu-ignore")
    {
        if(mtu_ignore == nullptr)
        {
            mtu_ignore = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MtuIgnore>();
        }
        return mtu_ignore;
    }

    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MultiArea>();
        }
        return multi_area;
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network>();
        }
        return network;
    }

    if(child_yang_name == "prefix-suppression")
    {
        if(prefix_suppression == nullptr)
        {
            prefix_suppression = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::PrefixSuppression>();
        }
        return prefix_suppression;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Shutdown>();
        }
        return shutdown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area)
    {
        children[c->get_segment_path()] = c;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    if(demand_circuit != nullptr)
    {
        children["demand-circuit"] = demand_circuit;
    }

    if(flood_reduction != nullptr)
    {
        children["flood-reduction"] = flood_reduction;
    }

    if(manet != nullptr)
    {
        children["manet"] = manet;
    }

    if(mtu_ignore != nullptr)
    {
        children["mtu-ignore"] = mtu_ignore;
    }

    if(multi_area != nullptr)
    {
        children["multi-area"] = multi_area;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(prefix_suppression != nullptr)
    {
        children["prefix-suppression"] = prefix_suppression;
    }

    if(shutdown != nullptr)
    {
        children["shutdown"] = shutdown;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "authentication" || name == "bfd" || name == "cost" || name == "database-filter" || name == "demand-circuit" || name == "flood-reduction" || name == "manet" || name == "mtu-ignore" || name == "multi-area" || name == "neighbor" || name == "network" || name == "prefix-suppression" || name == "shutdown" || name == "dead-interval" || name == "hello-interval" || name == "priority" || name == "retransmit-interval" || name == "transmit-delay")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Area::Area()
    :
    id{YType::str, "id"},
    instance{YType::uint8, "instance"}
{

    yang_name = "area"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Area::~Area()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Area::has_data() const
{
    return id.is_set
	|| instance.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Area::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(instance.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "instance")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    null{YType::empty, "null"}
{

    yang_name = "authentication"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Authentication::~Authentication()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Authentication::has_data() const
{
    return key_chain.is_set
	|| null.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(null.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "null")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "bfd"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Bfd::~Bfd()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Bfd::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Cost()
    :
    value_{YType::uint32, "value"}
    	,
    dynamic(nullptr) // presence node
{

    yang_name = "cost"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::~Cost()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::has_data() const
{
    return value_.is_set
	|| (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Dynamic()
    :
    default_{YType::uint32, "default"}
    	,
    hysteresis(nullptr) // presence node
	,weight(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight>())
{
    weight->parent = this;

    yang_name = "dynamic"; yang_parent_name = "cost"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::~Dynamic()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::has_data() const
{
    return default_.is_set
	|| (hysteresis !=  nullptr && hysteresis->has_data())
	|| (weight !=  nullptr && weight->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (hysteresis !=  nullptr && hysteresis->has_operation())
	|| (weight !=  nullptr && weight->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hysteresis")
    {
        if(hysteresis == nullptr)
        {
            hysteresis = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis>();
        }
        return hysteresis;
    }

    if(child_yang_name == "weight")
    {
        if(weight == nullptr)
        {
            weight = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight>();
        }
        return weight;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hysteresis != nullptr)
    {
        children["hysteresis"] = hysteresis;
    }

    if(weight != nullptr)
    {
        children["weight"] = weight;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hysteresis" || name == "weight" || name == "default")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::Hysteresis()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "hysteresis"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::~Hysteresis()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hysteresis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Weight()
    :
    l2_factor(nullptr) // presence node
	,latency(nullptr) // presence node
	,resources(nullptr) // presence node
	,throughput(nullptr) // presence node
{

    yang_name = "weight"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::~Weight()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::has_data() const
{
    return (l2_factor !=  nullptr && l2_factor->has_data())
	|| (latency !=  nullptr && latency->has_data())
	|| (resources !=  nullptr && resources->has_data())
	|| (throughput !=  nullptr && throughput->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::has_operation() const
{
    return is_set(yfilter)
	|| (l2_factor !=  nullptr && l2_factor->has_operation())
	|| (latency !=  nullptr && latency->has_operation())
	|| (resources !=  nullptr && resources->has_operation())
	|| (throughput !=  nullptr && throughput->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "L2-factor")
    {
        if(l2_factor == nullptr)
        {
            l2_factor = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor>();
        }
        return l2_factor;
    }

    if(child_yang_name == "latency")
    {
        if(latency == nullptr)
        {
            latency = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency>();
        }
        return latency;
    }

    if(child_yang_name == "resources")
    {
        if(resources == nullptr)
        {
            resources = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources>();
        }
        return resources;
    }

    if(child_yang_name == "throughput")
    {
        if(throughput == nullptr)
        {
            throughput = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput>();
        }
        return throughput;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2_factor != nullptr)
    {
        children["L2-factor"] = l2_factor;
    }

    if(latency != nullptr)
    {
        children["latency"] = latency;
    }

    if(resources != nullptr)
    {
        children["resources"] = resources;
    }

    if(throughput != nullptr)
    {
        children["throughput"] = throughput;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "L2-factor" || name == "latency" || name == "resources" || name == "throughput")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::L2Factor()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "L2-factor"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::~L2Factor()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "L2-factor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::Latency()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "latency"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::~Latency()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "latency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::Resources()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "resources"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::~Resources()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::Throughput()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "throughput"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::~Throughput()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throughput";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"},
    disable{YType::empty, "disable"}
{

    yang_name = "database-filter"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::has_data() const
{
    return all.is_set
	|| disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DemandCircuit::DemandCircuit()
    :
    disable{YType::empty, "disable"},
    ignore{YType::empty, "ignore"}
{

    yang_name = "demand-circuit"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DemandCircuit::has_data() const
{
    return disable.is_set
	|| ignore.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DemandCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DemandCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DemandCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DemandCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DemandCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "ignore")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::FloodReduction::FloodReduction()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "flood-reduction"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::FloodReduction::~FloodReduction()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::FloodReduction::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::FloodReduction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::FloodReduction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-reduction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::FloodReduction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::FloodReduction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::FloodReduction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::FloodReduction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::FloodReduction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::FloodReduction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Manet()
    :
    peering(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering>())
{
    peering->parent = this;

    yang_name = "manet"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::~Manet()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::has_data() const
{
    return (peering !=  nullptr && peering->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::has_operation() const
{
    return is_set(yfilter)
	|| (peering !=  nullptr && peering->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peering")
    {
        if(peering == nullptr)
        {
            peering = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering>();
        }
        return peering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peering != nullptr)
    {
        children["peering"] = peering;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peering")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Peering()
    :
    link_metrics{YType::uint32, "link-metrics"}
    	,
    cost(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost>())
{
    cost->parent = this;

    yang_name = "peering"; yang_parent_name = "manet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::~Peering()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::has_data() const
{
    return link_metrics.is_set
	|| (cost !=  nullptr && cost->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_metrics.yfilter)
	|| (cost !=  nullptr && cost->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_metrics.is_set || is_set(link_metrics.yfilter)) leaf_name_data.push_back(link_metrics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost>();
        }
        return cost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-metrics")
    {
        link_metrics = value;
        link_metrics.value_namespace = name_space;
        link_metrics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-metrics")
    {
        link_metrics.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "link-metrics")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::Cost()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "cost"; yang_parent_name = "peering"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::~Cost()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MtuIgnore::MtuIgnore()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "mtu-ignore"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MtuIgnore::~MtuIgnore()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MtuIgnore::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MtuIgnore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MtuIgnore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MtuIgnore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MtuIgnore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MtuIgnore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MtuIgnore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MtuIgnore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MtuIgnore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MultiArea::MultiArea()
    :
    cost{YType::uint32, "cost"},
    disable{YType::empty, "disable"},
    id{YType::str, "id"}
{

    yang_name = "multi-area"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MultiArea::~MultiArea()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MultiArea::has_data() const
{
    return cost.is_set
	|| disable.is_set
	|| id.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MultiArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MultiArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MultiArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MultiArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MultiArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "disable" || name == "id")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint8, "priority"}
    	,
    database_filter(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter>())
{
    database_filter->parent = this;

    yang_name = "neighbor"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::~Neighbor()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::has_data() const
{
    return id.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| (database_filter !=  nullptr && database_filter->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (database_filter !=  nullptr && database_filter->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter>();
        }
        return database_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-filter" || name == "id" || name == "cost" || name == "poll-interval" || name == "priority")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{

    yang_name = "database-filter"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::has_data() const
{
    return all.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::Network()
    :
    broadcast{YType::empty, "broadcast"},
    manet{YType::empty, "manet"},
    non_broadcast{YType::empty, "non-broadcast"},
    point_to_point{YType::empty, "point-to-point"}
    	,
    point_to_multipoint(nullptr) // presence node
{

    yang_name = "network"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::~Network()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::has_data() const
{
    return broadcast.is_set
	|| manet.is_set
	|| non_broadcast.is_set
	|| point_to_point.is_set
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(manet.yfilter)
	|| ydk::is_set(non_broadcast.yfilter)
	|| ydk::is_set(point_to_point.yfilter)
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (manet.is_set || is_set(manet.yfilter)) leaf_name_data.push_back(manet.get_name_leafdata());
    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.yfilter)) leaf_name_data.push_back(point_to_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "point-to-multipoint")
    {
        if(point_to_multipoint == nullptr)
        {
            point_to_multipoint = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint>();
        }
        return point_to_multipoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(point_to_multipoint != nullptr)
    {
        children["point-to-multipoint"] = point_to_multipoint;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manet")
    {
        manet = value;
        manet.value_namespace = name_space;
        manet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
        point_to_point.value_namespace = name_space;
        point_to_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "manet")
    {
        manet.yfilter = yfilter;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
    if(value_path == "point-to-point")
    {
        point_to_point.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "point-to-multipoint" || name == "broadcast" || name == "manet" || name == "non-broadcast" || name == "point-to-point")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::PointToMultipoint()
    :
    non_broadcast{YType::empty, "non-broadcast"}
{

    yang_name = "point-to-multipoint"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::~PointToMultipoint()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::has_data() const
{
    return non_broadcast.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_broadcast.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "point-to-multipoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-broadcast")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::PrefixSuppression()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "prefix-suppression"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::~PrefixSuppression()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-suppression";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Shutdown::Shutdown()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "shutdown"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Shutdown::~Shutdown()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Shutdown::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Shutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Shutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Ipv6()
    :
    dead_interval{YType::uint16, "dead-interval"},
    hello_interval{YType::uint32, "hello-interval"},
    priority{YType::uint8, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Authentication>())
	,bfd(nullptr) // presence node
	,cost(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost>())
	,database_filter(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter>())
	,demand_circuit(nullptr) // presence node
	,flood_reduction(nullptr) // presence node
	,manet(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet>())
	,mtu_ignore(nullptr) // presence node
	,multi_area(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea>())
	,network(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network>())
	,prefix_suppression(nullptr) // presence node
	,shutdown(nullptr) // presence node
{
    authentication->parent = this;
    cost->parent = this;
    database_filter->parent = this;
    manet->parent = this;
    multi_area->parent = this;
    network->parent = this;

    yang_name = "ipv6"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::~Ipv6()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return dead_interval.is_set
	|| hello_interval.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost !=  nullptr && cost->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (flood_reduction !=  nullptr && flood_reduction->has_data())
	|| (manet !=  nullptr && manet->has_data())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_data())
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost !=  nullptr && cost->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (flood_reduction !=  nullptr && flood_reduction->has_operation())
	|| (manet !=  nullptr && manet->has_operation())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_operation())
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        for(auto const & c : area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Area>();
        c->parent = this;
        area.push_back(c);
        return c;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost>();
        }
        return cost;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "flood-reduction")
    {
        if(flood_reduction == nullptr)
        {
            flood_reduction = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::FloodReduction>();
        }
        return flood_reduction;
    }

    if(child_yang_name == "manet")
    {
        if(manet == nullptr)
        {
            manet = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet>();
        }
        return manet;
    }

    if(child_yang_name == "mtu-ignore")
    {
        if(mtu_ignore == nullptr)
        {
            mtu_ignore = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore>();
        }
        return mtu_ignore;
    }

    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea>();
        }
        return multi_area;
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network>();
        }
        return network;
    }

    if(child_yang_name == "prefix-suppression")
    {
        if(prefix_suppression == nullptr)
        {
            prefix_suppression = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression>();
        }
        return prefix_suppression;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown>();
        }
        return shutdown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area)
    {
        children[c->get_segment_path()] = c;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    if(demand_circuit != nullptr)
    {
        children["demand-circuit"] = demand_circuit;
    }

    if(flood_reduction != nullptr)
    {
        children["flood-reduction"] = flood_reduction;
    }

    if(manet != nullptr)
    {
        children["manet"] = manet;
    }

    if(mtu_ignore != nullptr)
    {
        children["mtu-ignore"] = mtu_ignore;
    }

    if(multi_area != nullptr)
    {
        children["multi-area"] = multi_area;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(prefix_suppression != nullptr)
    {
        children["prefix-suppression"] = prefix_suppression;
    }

    if(shutdown != nullptr)
    {
        children["shutdown"] = shutdown;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "authentication" || name == "bfd" || name == "cost" || name == "database-filter" || name == "demand-circuit" || name == "flood-reduction" || name == "manet" || name == "mtu-ignore" || name == "multi-area" || name == "neighbor" || name == "network" || name == "prefix-suppression" || name == "shutdown" || name == "dead-interval" || name == "hello-interval" || name == "priority" || name == "retransmit-interval" || name == "transmit-delay")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Area::Area()
    :
    id{YType::str, "id"},
    instance{YType::uint8, "instance"}
{

    yang_name = "area"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Area::~Area()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Area::has_data() const
{
    return id.is_set
	|| instance.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Area::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(instance.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "instance")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    null{YType::empty, "null"}
{

    yang_name = "authentication"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Authentication::~Authentication()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Authentication::has_data() const
{
    return key_chain.is_set
	|| null.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(null.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "null")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "bfd"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Bfd::~Bfd()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Bfd::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Cost()
    :
    value_{YType::uint32, "value"}
    	,
    dynamic(nullptr) // presence node
{

    yang_name = "cost"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::~Cost()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::has_data() const
{
    return value_.is_set
	|| (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Dynamic()
    :
    default_{YType::uint32, "default"}
    	,
    hysteresis(nullptr) // presence node
	,weight(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight>())
{
    weight->parent = this;

    yang_name = "dynamic"; yang_parent_name = "cost"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::~Dynamic()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::has_data() const
{
    return default_.is_set
	|| (hysteresis !=  nullptr && hysteresis->has_data())
	|| (weight !=  nullptr && weight->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (hysteresis !=  nullptr && hysteresis->has_operation())
	|| (weight !=  nullptr && weight->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hysteresis")
    {
        if(hysteresis == nullptr)
        {
            hysteresis = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis>();
        }
        return hysteresis;
    }

    if(child_yang_name == "weight")
    {
        if(weight == nullptr)
        {
            weight = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight>();
        }
        return weight;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hysteresis != nullptr)
    {
        children["hysteresis"] = hysteresis;
    }

    if(weight != nullptr)
    {
        children["weight"] = weight;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hysteresis" || name == "weight" || name == "default")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::Hysteresis()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "hysteresis"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::~Hysteresis()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hysteresis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Weight()
    :
    l2_factor(nullptr) // presence node
	,latency(nullptr) // presence node
	,resources(nullptr) // presence node
	,throughput(nullptr) // presence node
{

    yang_name = "weight"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::~Weight()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::has_data() const
{
    return (l2_factor !=  nullptr && l2_factor->has_data())
	|| (latency !=  nullptr && latency->has_data())
	|| (resources !=  nullptr && resources->has_data())
	|| (throughput !=  nullptr && throughput->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::has_operation() const
{
    return is_set(yfilter)
	|| (l2_factor !=  nullptr && l2_factor->has_operation())
	|| (latency !=  nullptr && latency->has_operation())
	|| (resources !=  nullptr && resources->has_operation())
	|| (throughput !=  nullptr && throughput->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "L2-factor")
    {
        if(l2_factor == nullptr)
        {
            l2_factor = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor>();
        }
        return l2_factor;
    }

    if(child_yang_name == "latency")
    {
        if(latency == nullptr)
        {
            latency = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency>();
        }
        return latency;
    }

    if(child_yang_name == "resources")
    {
        if(resources == nullptr)
        {
            resources = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources>();
        }
        return resources;
    }

    if(child_yang_name == "throughput")
    {
        if(throughput == nullptr)
        {
            throughput = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput>();
        }
        return throughput;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2_factor != nullptr)
    {
        children["L2-factor"] = l2_factor;
    }

    if(latency != nullptr)
    {
        children["latency"] = latency;
    }

    if(resources != nullptr)
    {
        children["resources"] = resources;
    }

    if(throughput != nullptr)
    {
        children["throughput"] = throughput;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "L2-factor" || name == "latency" || name == "resources" || name == "throughput")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::L2Factor()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "L2-factor"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::~L2Factor()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "L2-factor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::Latency()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "latency"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::~Latency()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "latency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::Resources()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "resources"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::~Resources()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::Throughput()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "throughput"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::~Throughput()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throughput";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"},
    disable{YType::empty, "disable"}
{

    yang_name = "database-filter"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::has_data() const
{
    return all.is_set
	|| disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DemandCircuit::DemandCircuit()
    :
    disable{YType::empty, "disable"},
    ignore{YType::empty, "ignore"}
{

    yang_name = "demand-circuit"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DemandCircuit::has_data() const
{
    return disable.is_set
	|| ignore.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DemandCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DemandCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DemandCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DemandCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DemandCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "ignore")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::FloodReduction::FloodReduction()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "flood-reduction"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::FloodReduction::~FloodReduction()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::FloodReduction::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::FloodReduction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::FloodReduction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-reduction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::FloodReduction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::FloodReduction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::FloodReduction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::FloodReduction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::FloodReduction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::FloodReduction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Manet()
    :
    peering(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering>())
{
    peering->parent = this;

    yang_name = "manet"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::~Manet()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::has_data() const
{
    return (peering !=  nullptr && peering->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::has_operation() const
{
    return is_set(yfilter)
	|| (peering !=  nullptr && peering->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peering")
    {
        if(peering == nullptr)
        {
            peering = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering>();
        }
        return peering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peering != nullptr)
    {
        children["peering"] = peering;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peering")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Peering()
    :
    link_metrics{YType::uint32, "link-metrics"}
    	,
    cost(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost>())
{
    cost->parent = this;

    yang_name = "peering"; yang_parent_name = "manet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::~Peering()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::has_data() const
{
    return link_metrics.is_set
	|| (cost !=  nullptr && cost->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_metrics.yfilter)
	|| (cost !=  nullptr && cost->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_metrics.is_set || is_set(link_metrics.yfilter)) leaf_name_data.push_back(link_metrics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost>();
        }
        return cost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-metrics")
    {
        link_metrics = value;
        link_metrics.value_namespace = name_space;
        link_metrics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-metrics")
    {
        link_metrics.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "link-metrics")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::Cost()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "cost"; yang_parent_name = "peering"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::~Cost()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::MtuIgnore()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "mtu-ignore"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::~MtuIgnore()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::MultiArea()
    :
    cost{YType::uint32, "cost"},
    disable{YType::empty, "disable"},
    id{YType::str, "id"}
{

    yang_name = "multi-area"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::~MultiArea()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::has_data() const
{
    return cost.is_set
	|| disable.is_set
	|| id.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "disable" || name == "id")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint8, "priority"}
    	,
    database_filter(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter>())
{
    database_filter->parent = this;

    yang_name = "neighbor"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::~Neighbor()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::has_data() const
{
    return id.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| (database_filter !=  nullptr && database_filter->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (database_filter !=  nullptr && database_filter->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter>();
        }
        return database_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-filter" || name == "id" || name == "cost" || name == "poll-interval" || name == "priority")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{

    yang_name = "database-filter"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::has_data() const
{
    return all.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::Network()
    :
    broadcast{YType::empty, "broadcast"},
    manet{YType::empty, "manet"},
    non_broadcast{YType::empty, "non-broadcast"},
    point_to_point{YType::empty, "point-to-point"}
    	,
    point_to_multipoint(nullptr) // presence node
{

    yang_name = "network"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::~Network()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::has_data() const
{
    return broadcast.is_set
	|| manet.is_set
	|| non_broadcast.is_set
	|| point_to_point.is_set
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(manet.yfilter)
	|| ydk::is_set(non_broadcast.yfilter)
	|| ydk::is_set(point_to_point.yfilter)
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (manet.is_set || is_set(manet.yfilter)) leaf_name_data.push_back(manet.get_name_leafdata());
    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.yfilter)) leaf_name_data.push_back(point_to_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "point-to-multipoint")
    {
        if(point_to_multipoint == nullptr)
        {
            point_to_multipoint = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint>();
        }
        return point_to_multipoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(point_to_multipoint != nullptr)
    {
        children["point-to-multipoint"] = point_to_multipoint;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manet")
    {
        manet = value;
        manet.value_namespace = name_space;
        manet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
        point_to_point.value_namespace = name_space;
        point_to_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "manet")
    {
        manet.yfilter = yfilter;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
    if(value_path == "point-to-point")
    {
        point_to_point.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "point-to-multipoint" || name == "broadcast" || name == "manet" || name == "non-broadcast" || name == "point-to-point")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::PointToMultipoint()
    :
    non_broadcast{YType::empty, "non-broadcast"}
{

    yang_name = "point-to-multipoint"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::~PointToMultipoint()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::has_data() const
{
    return non_broadcast.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_broadcast.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "point-to-multipoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-broadcast")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::PrefixSuppression()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "prefix-suppression"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::~PrefixSuppression()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-suppression";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::Shutdown()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "shutdown"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::~Shutdown()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Manet()
    :
    peering(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering>())
{
    peering->parent = this;

    yang_name = "manet"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::~Manet()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::has_data() const
{
    return (peering !=  nullptr && peering->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::has_operation() const
{
    return is_set(yfilter)
	|| (peering !=  nullptr && peering->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peering")
    {
        if(peering == nullptr)
        {
            peering = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering>();
        }
        return peering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peering != nullptr)
    {
        children["peering"] = peering;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peering")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Peering()
    :
    link_metrics{YType::uint32, "link-metrics"}
    	,
    cost(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Cost>())
{
    cost->parent = this;

    yang_name = "peering"; yang_parent_name = "manet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::~Peering()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::has_data() const
{
    return link_metrics.is_set
	|| (cost !=  nullptr && cost->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_metrics.yfilter)
	|| (cost !=  nullptr && cost->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_metrics.is_set || is_set(link_metrics.yfilter)) leaf_name_data.push_back(link_metrics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Cost>();
        }
        return cost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-metrics")
    {
        link_metrics = value;
        link_metrics.value_namespace = name_space;
        link_metrics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-metrics")
    {
        link_metrics.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "link-metrics")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Cost::Cost()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "cost"; yang_parent_name = "peering"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Cost::~Cost()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Cost::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::MtuIgnore::MtuIgnore()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "mtu-ignore"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::MtuIgnore::~MtuIgnore()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::MtuIgnore::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::MtuIgnore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::MtuIgnore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::MtuIgnore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::MtuIgnore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::MtuIgnore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::MtuIgnore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::MtuIgnore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::MtuIgnore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::MultiArea::MultiArea()
    :
    cost{YType::uint32, "cost"},
    disable{YType::empty, "disable"},
    id{YType::str, "id"}
{

    yang_name = "multi-area"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::MultiArea::~MultiArea()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::MultiArea::has_data() const
{
    return cost.is_set
	|| disable.is_set
	|| id.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::MultiArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::MultiArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::MultiArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::MultiArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::MultiArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "disable" || name == "id")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint8, "priority"}
    	,
    database_filter(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter>())
{
    database_filter->parent = this;

    yang_name = "neighbor"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::~Neighbor()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::has_data() const
{
    return id.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| (database_filter !=  nullptr && database_filter->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (database_filter !=  nullptr && database_filter->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter>();
        }
        return database_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-filter" || name == "id" || name == "cost" || name == "poll-interval" || name == "priority")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{

    yang_name = "database-filter"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::has_data() const
{
    return all.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Network::Network()
    :
    broadcast{YType::empty, "broadcast"},
    manet{YType::empty, "manet"},
    non_broadcast{YType::empty, "non-broadcast"},
    point_to_point{YType::empty, "point-to-point"}
    	,
    point_to_multipoint(nullptr) // presence node
{

    yang_name = "network"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Network::~Network()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Network::has_data() const
{
    return broadcast.is_set
	|| manet.is_set
	|| non_broadcast.is_set
	|| point_to_point.is_set
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(manet.yfilter)
	|| ydk::is_set(non_broadcast.yfilter)
	|| ydk::is_set(point_to_point.yfilter)
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (manet.is_set || is_set(manet.yfilter)) leaf_name_data.push_back(manet.get_name_leafdata());
    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.yfilter)) leaf_name_data.push_back(point_to_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "point-to-multipoint")
    {
        if(point_to_multipoint == nullptr)
        {
            point_to_multipoint = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Network::PointToMultipoint>();
        }
        return point_to_multipoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(point_to_multipoint != nullptr)
    {
        children["point-to-multipoint"] = point_to_multipoint;
    }

    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manet")
    {
        manet = value;
        manet.value_namespace = name_space;
        manet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
        point_to_point.value_namespace = name_space;
        point_to_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "manet")
    {
        manet.yfilter = yfilter;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
    if(value_path == "point-to-point")
    {
        point_to_point.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "point-to-multipoint" || name == "broadcast" || name == "manet" || name == "non-broadcast" || name == "point-to-point")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Network::PointToMultipoint::PointToMultipoint()
    :
    non_broadcast{YType::empty, "non-broadcast"}
{

    yang_name = "point-to-multipoint"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Network::PointToMultipoint::~PointToMultipoint()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Network::PointToMultipoint::has_data() const
{
    return non_broadcast.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Network::PointToMultipoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_broadcast.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Network::PointToMultipoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "point-to-multipoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Network::PointToMultipoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Network::PointToMultipoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Network::PointToMultipoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Network::PointToMultipoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Network::PointToMultipoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Network::PointToMultipoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-broadcast")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::PrefixSuppression::PrefixSuppression()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "prefix-suppression"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::PrefixSuppression::~PrefixSuppression()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::PrefixSuppression::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::PrefixSuppression::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::PrefixSuppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-suppression";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::PrefixSuppression::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::PrefixSuppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::PrefixSuppression::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::PrefixSuppression::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::PrefixSuppression::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::PrefixSuppression::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Shutdown::Shutdown()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "shutdown"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Shutdown::~Shutdown()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Shutdown::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Shutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Shutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Peer::Peer()
    :
    default_(std::make_shared<Native::Interface::PortChannel::Peer::Default_>())
{
    default_->parent = this;

    yang_name = "peer"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Peer::~Peer()
{
}

bool Native::Interface::PortChannel::Peer::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Interface::PortChannel::Peer::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Interface::PortChannel::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Interface::PortChannel::Peer::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Interface::PortChannel::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Interface::PortChannel::Peer::Default_::Default_()
    :
    ip(std::make_shared<Native::Interface::PortChannel::Peer::Default_::Ip>())
{
    ip->parent = this;

    yang_name = "default"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Peer::Default_::~Default_()
{
}

bool Native::Interface::PortChannel::Peer::Default_::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::PortChannel::Peer::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::PortChannel::Peer::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Peer::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Peer::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::PortChannel::Peer::Default_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Peer::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Interface::PortChannel::Peer::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Peer::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Peer::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Interface::PortChannel::Peer::Default_::Ip::Ip()
    :
    address(std::make_shared<Native::Interface::PortChannel::Peer::Default_::Ip::Address>())
{
    address->parent = this;

    yang_name = "ip"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Peer::Default_::Ip::~Ip()
{
}

bool Native::Interface::PortChannel::Peer::Default_::Ip::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Interface::PortChannel::Peer::Default_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Interface::PortChannel::Peer::Default_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Peer::Default_::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Peer::Default_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::PortChannel::Peer::Default_::Ip::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Peer::Default_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Interface::PortChannel::Peer::Default_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Peer::Default_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Peer::Default_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Interface::PortChannel::Peer::Default_::Ip::Address::Address()
    :
    dhcp{YType::empty, "dhcp"}
    	,
    dhcp_pool(nullptr) // presence node
	,pool(nullptr) // presence node
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Peer::Default_::Ip::Address::~Address()
{
}

bool Native::Interface::PortChannel::Peer::Default_::Ip::Address::has_data() const
{
    return dhcp.is_set
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_data())
	|| (pool !=  nullptr && pool->has_data());
}

bool Native::Interface::PortChannel::Peer::Default_::Ip::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_operation())
	|| (pool !=  nullptr && pool->has_operation());
}

std::string Native::Interface::PortChannel::Peer::Default_::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Peer::Default_::Ip::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Peer::Default_::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp-pool")
    {
        if(dhcp_pool == nullptr)
        {
            dhcp_pool = std::make_shared<Native::Interface::PortChannel::Peer::Default_::Ip::Address::DhcpPool>();
        }
        return dhcp_pool;
    }

    if(child_yang_name == "pool")
    {
        if(pool == nullptr)
        {
            pool = std::make_shared<Native::Interface::PortChannel::Peer::Default_::Ip::Address::Pool>();
        }
        return pool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Peer::Default_::Ip::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp_pool != nullptr)
    {
        children["dhcp-pool"] = dhcp_pool;
    }

    if(pool != nullptr)
    {
        children["pool"] = pool;
    }

    return children;
}

void Native::Interface::PortChannel::Peer::Default_::Ip::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Peer::Default_::Ip::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Peer::Default_::Ip::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp-pool" || name == "pool" || name == "dhcp")
        return true;
    return false;
}

Native::Interface::PortChannel::Peer::Default_::Ip::Address::DhcpPool::DhcpPool()
    :
    pools{YType::str, "pools"}
{

    yang_name = "dhcp-pool"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Peer::Default_::Ip::Address::DhcpPool::~DhcpPool()
{
}

bool Native::Interface::PortChannel::Peer::Default_::Ip::Address::DhcpPool::has_data() const
{
    return pools.is_set;
}

bool Native::Interface::PortChannel::Peer::Default_::Ip::Address::DhcpPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pools.yfilter);
}

std::string Native::Interface::PortChannel::Peer::Default_::Ip::Address::DhcpPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Peer::Default_::Ip::Address::DhcpPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.yfilter)) leaf_name_data.push_back(pools.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Peer::Default_::Ip::Address::DhcpPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Peer::Default_::Ip::Address::DhcpPool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Peer::Default_::Ip::Address::DhcpPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pools")
    {
        pools = value;
        pools.value_namespace = name_space;
        pools.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Peer::Default_::Ip::Address::DhcpPool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pools")
    {
        pools.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Peer::Default_::Ip::Address::DhcpPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pools")
        return true;
    return false;
}

Native::Interface::PortChannel::Peer::Default_::Ip::Address::Pool::Pool()
    :
    pools{YType::str, "pools"}
{

    yang_name = "pool"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Peer::Default_::Ip::Address::Pool::~Pool()
{
}

bool Native::Interface::PortChannel::Peer::Default_::Ip::Address::Pool::has_data() const
{
    return pools.is_set;
}

bool Native::Interface::PortChannel::Peer::Default_::Ip::Address::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pools.yfilter);
}

std::string Native::Interface::PortChannel::Peer::Default_::Ip::Address::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Peer::Default_::Ip::Address::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.yfilter)) leaf_name_data.push_back(pools.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Peer::Default_::Ip::Address::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Peer::Default_::Ip::Address::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Peer::Default_::Ip::Address::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pools")
    {
        pools = value;
        pools.value_namespace = name_space;
        pools.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Peer::Default_::Ip::Address::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pools")
    {
        pools.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Peer::Default_::Ip::Address::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pools")
        return true;
    return false;
}

Native::Interface::PortChannel::Plim::Plim()
    :
    ethernet(std::make_shared<Native::Interface::PortChannel::Plim::Ethernet>())
	,qos(std::make_shared<Native::Interface::PortChannel::Plim::Qos>())
{
    ethernet->parent = this;
    qos->parent = this;

    yang_name = "plim"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Plim::~Plim()
{
}

bool Native::Interface::PortChannel::Plim::has_data() const
{
    return (ethernet !=  nullptr && ethernet->has_data())
	|| (qos !=  nullptr && qos->has_data());
}

bool Native::Interface::PortChannel::Plim::has_operation() const
{
    return is_set(yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (qos !=  nullptr && qos->has_operation());
}

std::string Native::Interface::PortChannel::Plim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:plim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Plim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Plim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::PortChannel::Plim::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Interface::PortChannel::Plim::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Plim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    return children;
}

void Native::Interface::PortChannel::Plim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Plim::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Plim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "qos")
        return true;
    return false;
}

Native::Interface::PortChannel::Plim::Ethernet::Ethernet()
    :
    vlan(std::make_shared<Native::Interface::PortChannel::Plim::Ethernet::Vlan>())
{
    vlan->parent = this;

    yang_name = "ethernet"; yang_parent_name = "plim"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Plim::Ethernet::~Ethernet()
{
}

bool Native::Interface::PortChannel::Plim::Ethernet::has_data() const
{
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::PortChannel::Plim::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::PortChannel::Plim::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Plim::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Plim::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::PortChannel::Plim::Ethernet::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Plim::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Interface::PortChannel::Plim::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Plim::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Plim::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::PortChannel::Plim::Ethernet::Vlan::Vlan()
    :
    filter(std::make_shared<Native::Interface::PortChannel::Plim::Ethernet::Vlan::Filter>())
{
    filter->parent = this;

    yang_name = "vlan"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Plim::Ethernet::Vlan::~Vlan()
{
}

bool Native::Interface::PortChannel::Plim::Ethernet::Vlan::has_data() const
{
    return (filter !=  nullptr && filter->has_data());
}

bool Native::Interface::PortChannel::Plim::Ethernet::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| (filter !=  nullptr && filter->has_operation());
}

std::string Native::Interface::PortChannel::Plim::Ethernet::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Plim::Ethernet::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Plim::Ethernet::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Interface::PortChannel::Plim::Ethernet::Vlan::Filter>();
        }
        return filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Plim::Ethernet::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(filter != nullptr)
    {
        children["filter"] = filter;
    }

    return children;
}

void Native::Interface::PortChannel::Plim::Ethernet::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Plim::Ethernet::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Plim::Ethernet::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter")
        return true;
    return false;
}

Native::Interface::PortChannel::Plim::Ethernet::Vlan::Filter::Filter()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "filter"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Plim::Ethernet::Vlan::Filter::~Filter()
{
}

bool Native::Interface::PortChannel::Plim::Ethernet::Vlan::Filter::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannel::Plim::Ethernet::Vlan::Filter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Plim::Ethernet::Vlan::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Plim::Ethernet::Vlan::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Plim::Ethernet::Vlan::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Plim::Ethernet::Vlan::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Plim::Ethernet::Vlan::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Plim::Ethernet::Vlan::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Plim::Ethernet::Vlan::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Plim::Qos::Qos()
    :
    input(std::make_shared<Native::Interface::PortChannel::Plim::Qos::Input>())
{
    input->parent = this;

    yang_name = "qos"; yang_parent_name = "plim"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Plim::Qos::~Qos()
{
}

bool Native::Interface::PortChannel::Plim::Qos::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool Native::Interface::PortChannel::Plim::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string Native::Interface::PortChannel::Plim::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Plim::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Plim::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Interface::PortChannel::Plim::Qos::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Plim::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void Native::Interface::PortChannel::Plim::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Plim::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Plim::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

Native::Interface::PortChannel::Plim::Qos::Input::Input()
    :
    queue(std::make_shared<Native::Interface::PortChannel::Plim::Qos::Input::Queue>())
{
    queue->parent = this;

    yang_name = "input"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::PortChannel::Plim::Qos::Input::~Input()
{
}

bool Native::Interface::PortChannel::Plim::Qos::Input::has_data() const
{
    return (queue !=  nullptr && queue->has_data());
}

bool Native::Interface::PortChannel::Plim::Qos::Input::has_operation() const
{
    return is_set(yfilter)
	|| (queue !=  nullptr && queue->has_operation());
}

std::string Native::Interface::PortChannel::Plim::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Plim::Qos::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Plim::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<Native::Interface::PortChannel::Plim::Qos::Input::Queue>();
        }
        return queue;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Plim::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(queue != nullptr)
    {
        children["queue"] = queue;
    }

    return children;
}

void Native::Interface::PortChannel::Plim::Qos::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Plim::Qos::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Plim::Qos::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::PortChannel::Mac::AccessGroup::ACLName::ApplyTo::in {0, "in"};
const Enum::YLeaf Native::Interface::PortChannel::Mac::AccessGroup::ACLName::ApplyTo::out {1, "out"};

const Enum::YLeaf Native::Interface::PortChannel::Mpls::Label::Protocol::both {0, "both"};
const Enum::YLeaf Native::Interface::PortChannel::Mpls::Label::Protocol::ldp {1, "ldp"};
const Enum::YLeaf Native::Interface::PortChannel::Mpls::Label::Protocol::tdp {2, "tdp"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3Des::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::ProcessId::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::All::out {0, "out"};


}
}

