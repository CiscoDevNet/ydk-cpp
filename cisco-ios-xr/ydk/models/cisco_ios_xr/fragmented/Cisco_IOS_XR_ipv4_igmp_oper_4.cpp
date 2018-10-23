
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_igmp_oper_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_igmp_oper {

Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "update"; is_top_level_class = false; has_list_ancestor = true; 
}

Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::~SourceAddress()
{
}

bool Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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
}

void Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::GroupAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address"; yang_parent_name = "update"; is_top_level_class = false; has_list_ancestor = true; 
}

Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::~GroupAddress()
{
}

bool Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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
}

void Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::Ranges::Ranges()
    :
    range(this, {})
{

    yang_name = "ranges"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Igmp::Active::DefaultContext::Ranges::~Ranges()
{
}

bool Igmp::Active::DefaultContext::Ranges::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Active::DefaultContext::Ranges::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Igmp::Active::DefaultContext::Ranges::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::Active::DefaultContext::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::Ranges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::Ranges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<Igmp::Active::DefaultContext::Ranges::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::Ranges::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Igmp::Active::DefaultContext::Ranges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Igmp::Active::DefaultContext::Ranges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Igmp::Active::DefaultContext::Ranges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Igmp::Active::DefaultContext::Ranges::Range::Range()
    :
    group_address{YType::str, "group-address"},
    group_mask{YType::uint32, "group-mask"},
    prefix_length{YType::uint32, "prefix-length"},
    protocol{YType::enumeration, "protocol"},
    is_stale{YType::boolean, "is-stale"}
        ,
    group_address_xr(std::make_shared<Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr>())
{
    group_address_xr->parent = this;

    yang_name = "range"; yang_parent_name = "ranges"; is_top_level_class = false; has_list_ancestor = false; 
}

Igmp::Active::DefaultContext::Ranges::Range::~Range()
{
}

bool Igmp::Active::DefaultContext::Ranges::Range::has_data() const
{
    if (is_presence_container) return true;
    return group_address.is_set
	|| group_mask.is_set
	|| prefix_length.is_set
	|| protocol.is_set
	|| is_stale.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data());
}

bool Igmp::Active::DefaultContext::Ranges::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_mask.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(is_stale.yfilter)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation());
}

std::string Igmp::Active::DefaultContext::Ranges::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/ranges/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::Active::DefaultContext::Ranges::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::Ranges::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_mask.is_set || is_set(group_mask.yfilter)) leaf_name_data.push_back(group_mask.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.yfilter)) leaf_name_data.push_back(is_stale.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::Ranges::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr>();
        }
        return group_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::Ranges::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group_address_xr != nullptr)
    {
        _children["group-address-xr"] = group_address_xr;
    }

    return _children;
}

void Igmp::Active::DefaultContext::Ranges::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-mask")
    {
        group_mask = value;
        group_mask.value_namespace = name_space;
        group_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
        is_stale.value_namespace = name_space;
        is_stale.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Active::DefaultContext::Ranges::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "group-mask")
    {
        group_mask.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "is-stale")
    {
        is_stale.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::Ranges::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "group-address" || name == "group-mask" || name == "prefix-length" || name == "protocol" || name == "is-stale")
        return true;
    return false;
}

Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-xr"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = false; 
}

Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr::~GroupAddressXr()
{
}

bool Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/ranges/range/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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
}

void Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterfaces()
    :
    ifrs_interface(this, {"interface_name"})
{

    yang_name = "ifrs-interfaces"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Igmp::Active::DefaultContext::IfrsInterfaces::~IfrsInterfaces()
{
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ifrs_interface.len(); index++)
    {
        if(ifrs_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::has_operation() const
{
    for (std::size_t index=0; index<ifrs_interface.len(); index++)
    {
        if(ifrs_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Igmp::Active::DefaultContext::IfrsInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::Active::DefaultContext::IfrsInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::IfrsInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::IfrsInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifrs-interface")
    {
        auto ent_ = std::make_shared<Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface>();
        ent_->parent = this;
        ifrs_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::IfrsInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ifrs_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Igmp::Active::DefaultContext::IfrsInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Igmp::Active::DefaultContext::IfrsInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifrs-interface")
        return true;
    return false;
}

Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IfrsInterface()
    :
    interface_name{YType::str, "interface-name"},
    join_group_count{YType::uint32, "join-group-count"}
        ,
    igmp_interface_entry(std::make_shared<Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry>())
{
    igmp_interface_entry->parent = this;

    yang_name = "ifrs-interface"; yang_parent_name = "ifrs-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::~IfrsInterface()
{
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| join_group_count.is_set
	|| (igmp_interface_entry !=  nullptr && igmp_interface_entry->has_data());
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(join_group_count.yfilter)
	|| (igmp_interface_entry !=  nullptr && igmp_interface_entry->has_operation());
}

std::string Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/ifrs-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (join_group_count.is_set || is_set(join_group_count.yfilter)) leaf_name_data.push_back(join_group_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igmp-interface-entry")
    {
        if(igmp_interface_entry == nullptr)
        {
            igmp_interface_entry = std::make_shared<Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry>();
        }
        return igmp_interface_entry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igmp_interface_entry != nullptr)
    {
        _children["igmp-interface-entry"] = igmp_interface_entry;
    }

    return _children;
}

void Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-group-count")
    {
        join_group_count = value;
        join_group_count.value_namespace = name_space;
        join_group_count.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "join-group-count")
    {
        join_group_count.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igmp-interface-entry" || name == "interface-name" || name == "join-group-count")
        return true;
    return false;
}

Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::IgmpInterfaceEntry()
    :
    interface_name_xr{YType::str, "interface-name-xr"},
    state{YType::uint32, "state"},
    prefix_length{YType::uint32, "prefix-length"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    igmp_version{YType::uint8, "igmp-version"},
    host_version{YType::uint8, "host-version"},
    query_interval{YType::uint16, "query-interval"},
    query_timeout{YType::uint16, "query-timeout"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    is_querier{YType::boolean, "is-querier"},
    total_active_groups{YType::uint32, "total-active-groups"},
    robustness{YType::uint32, "robustness"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_update_count{YType::uint32, "las-update-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    is_las_request{YType::boolean, "is-las-request"},
    is_las_registered{YType::boolean, "is-las-registered"},
    vrf_id{YType::uint32, "vrf-id"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    location{YType::uint32, "location"},
    mtu{YType::uint32, "mtu"},
    vrf_state{YType::uint32, "vrf-state"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_subscriber{YType::boolean, "is-subscriber"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    is_identity_present{YType::boolean, "is-identity-present"},
    subscriber_id{YType::str, "subscriber-id"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"}
        ,
    address(std::make_shared<Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address>())
    , querier_address(std::make_shared<Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress>())
    , subscriber_address(std::make_shared<Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress>())
{
    address->parent = this;
    querier_address->parent = this;
    subscriber_address->parent = this;

    yang_name = "igmp-interface-entry"; yang_parent_name = "ifrs-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::~IgmpInterfaceEntry()
{
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::has_data() const
{
    if (is_presence_container) return true;
    return interface_name_xr.is_set
	|| state.is_set
	|| prefix_length.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_router_enabled.is_set
	|| igmp_version.is_set
	|| host_version.is_set
	|| query_interval.is_set
	|| query_timeout.is_set
	|| query_maximum_response_time.is_set
	|| last_member_query_interval.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| is_querier.is_set
	|| total_active_groups.is_set
	|| robustness.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| las_ll_registration_count.is_set
	|| las_get_address_count.is_set
	|| las_update_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| is_las_request.is_set
	|| is_las_registered.is_set
	|| vrf_id.is_set
	|| mte_vrf_id.is_set
	|| location.is_set
	|| mtu.is_set
	|| vrf_state.is_set
	|| is_configurationverify.is_set
	|| configurationvrf_set.is_set
	|| configurationvrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configuration_mcast_vrf_error.is_set
	|| is_im_state_registered.is_set
	|| is_subscriber.is_set
	|| subscriber_mode.is_set
	|| is_identity_present.is_set
	|| subscriber_id.is_set
	|| parent_ifhandle.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| router_uptime_in_seconds.is_set
	|| mte_tuple_count.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(is_interface_up.yfilter)
	|| ydk::is_set(is_ip_enabled.yfilter)
	|| ydk::is_set(is_router_enabled.yfilter)
	|| ydk::is_set(igmp_version.yfilter)
	|| ydk::is_set(host_version.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| ydk::is_set(query_timeout.yfilter)
	|| ydk::is_set(query_maximum_response_time.yfilter)
	|| ydk::is_set(last_member_query_interval.yfilter)
	|| ydk::is_set(group_joins.yfilter)
	|| ydk::is_set(group_leaves.yfilter)
	|| ydk::is_set(is_querier.yfilter)
	|| ydk::is_set(total_active_groups.yfilter)
	|| ydk::is_set(robustness.yfilter)
	|| ydk::is_set(proxy_interface.yfilter)
	|| ydk::is_set(querier_uptime.yfilter)
	|| ydk::is_set(las_ll_registration_count.yfilter)
	|| ydk::is_set(las_get_address_count.yfilter)
	|| ydk::is_set(las_update_count.yfilter)
	|| ydk::is_set(las_ll_remove_update_count.yfilter)
	|| ydk::is_set(las_ll_add_update_count.yfilter)
	|| ydk::is_set(las_null_update_count.yfilter)
	|| ydk::is_set(las_unregistration_count.yfilter)
	|| ydk::is_set(is_las_request.yfilter)
	|| ydk::is_set(is_las_registered.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(mte_vrf_id.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(vrf_state.yfilter)
	|| ydk::is_set(is_configurationverify.yfilter)
	|| ydk::is_set(configurationvrf_set.yfilter)
	|| ydk::is_set(configurationvrf_error.yfilter)
	|| ydk::is_set(configuration_mcast_vrf_set.yfilter)
	|| ydk::is_set(configuration_mcast_vrf_error.yfilter)
	|| ydk::is_set(is_im_state_registered.yfilter)
	|| ydk::is_set(is_subscriber.yfilter)
	|| ydk::is_set(subscriber_mode.yfilter)
	|| ydk::is_set(is_identity_present.yfilter)
	|| ydk::is_set(subscriber_id.yfilter)
	|| ydk::is_set(parent_ifhandle.yfilter)
	|| ydk::is_set(time_since_last_query_in_seconds.yfilter)
	|| ydk::is_set(time_since_last_report_in_seconds.yfilter)
	|| ydk::is_set(router_uptime_in_seconds.yfilter)
	|| ydk::is_set(mte_tuple_count.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp-interface-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.yfilter)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.yfilter)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.yfilter)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.yfilter)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.yfilter)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.yfilter)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.yfilter)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.yfilter)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.yfilter)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.yfilter)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.yfilter)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.yfilter)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.yfilter)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.yfilter)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.yfilter)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.yfilter)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.yfilter)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.yfilter)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.yfilter)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.yfilter)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.yfilter)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.yfilter)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.yfilter)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.yfilter)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.yfilter)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.yfilter)) leaf_name_data.push_back(vrf_state.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.yfilter)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.yfilter)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.yfilter)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.yfilter)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.yfilter)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.yfilter)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.yfilter)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.yfilter)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.yfilter)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.yfilter)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.yfilter)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.yfilter)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.yfilter)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.yfilter)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.yfilter)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(querier_address != nullptr)
    {
        _children["querier-address"] = querier_address;
    }

    if(subscriber_address != nullptr)
    {
        _children["subscriber-address"] = subscriber_address;
    }

    return _children;
}

void Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
        is_interface_up.value_namespace = name_space;
        is_interface_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
        is_ip_enabled.value_namespace = name_space;
        is_ip_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
        is_router_enabled.value_namespace = name_space;
        is_router_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
        igmp_version.value_namespace = name_space;
        igmp_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-version")
    {
        host_version = value;
        host_version.value_namespace = name_space;
        host_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
        query_timeout.value_namespace = name_space;
        query_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
        query_maximum_response_time.value_namespace = name_space;
        query_maximum_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
        last_member_query_interval.value_namespace = name_space;
        last_member_query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
        group_joins.value_namespace = name_space;
        group_joins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
        group_leaves.value_namespace = name_space;
        group_leaves.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
        is_querier.value_namespace = name_space;
        is_querier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
        total_active_groups.value_namespace = name_space;
        total_active_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustness")
    {
        robustness = value;
        robustness.value_namespace = name_space;
        robustness.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
        proxy_interface.value_namespace = name_space;
        proxy_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
        querier_uptime.value_namespace = name_space;
        querier_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
        las_ll_registration_count.value_namespace = name_space;
        las_ll_registration_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
        las_get_address_count.value_namespace = name_space;
        las_get_address_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
        las_update_count.value_namespace = name_space;
        las_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
        las_ll_remove_update_count.value_namespace = name_space;
        las_ll_remove_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
        las_ll_add_update_count.value_namespace = name_space;
        las_ll_add_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
        las_null_update_count.value_namespace = name_space;
        las_null_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
        las_unregistration_count.value_namespace = name_space;
        las_unregistration_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
        is_las_request.value_namespace = name_space;
        is_las_request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
        is_las_registered.value_namespace = name_space;
        is_las_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
        mte_vrf_id.value_namespace = name_space;
        mte_vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
        vrf_state.value_namespace = name_space;
        vrf_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
        is_configurationverify.value_namespace = name_space;
        is_configurationverify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
        configurationvrf_set.value_namespace = name_space;
        configurationvrf_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
        configurationvrf_error.value_namespace = name_space;
        configurationvrf_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
        configuration_mcast_vrf_set.value_namespace = name_space;
        configuration_mcast_vrf_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
        configuration_mcast_vrf_error.value_namespace = name_space;
        configuration_mcast_vrf_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
        is_im_state_registered.value_namespace = name_space;
        is_im_state_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
        is_subscriber.value_namespace = name_space;
        is_subscriber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
        subscriber_mode.value_namespace = name_space;
        subscriber_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
        is_identity_present.value_namespace = name_space;
        is_identity_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
        subscriber_id.value_namespace = name_space;
        subscriber_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
        parent_ifhandle.value_namespace = name_space;
        parent_ifhandle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
        time_since_last_query_in_seconds.value_namespace = name_space;
        time_since_last_query_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
        time_since_last_report_in_seconds.value_namespace = name_space;
        time_since_last_report_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
        router_uptime_in_seconds.value_namespace = name_space;
        router_uptime_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
        mte_tuple_count.value_namespace = name_space;
        mte_tuple_count.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up.yfilter = yfilter;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled.yfilter = yfilter;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-version")
    {
        igmp_version.yfilter = yfilter;
    }
    if(value_path == "host-version")
    {
        host_version.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
    if(value_path == "query-timeout")
    {
        query_timeout.yfilter = yfilter;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time.yfilter = yfilter;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval.yfilter = yfilter;
    }
    if(value_path == "group-joins")
    {
        group_joins.yfilter = yfilter;
    }
    if(value_path == "group-leaves")
    {
        group_leaves.yfilter = yfilter;
    }
    if(value_path == "is-querier")
    {
        is_querier.yfilter = yfilter;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups.yfilter = yfilter;
    }
    if(value_path == "robustness")
    {
        robustness.yfilter = yfilter;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface.yfilter = yfilter;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime.yfilter = yfilter;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count.yfilter = yfilter;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count.yfilter = yfilter;
    }
    if(value_path == "las-update-count")
    {
        las_update_count.yfilter = yfilter;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count.yfilter = yfilter;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count.yfilter = yfilter;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count.yfilter = yfilter;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count.yfilter = yfilter;
    }
    if(value_path == "is-las-request")
    {
        is_las_request.yfilter = yfilter;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "vrf-state")
    {
        vrf_state.yfilter = yfilter;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify.yfilter = yfilter;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set.yfilter = yfilter;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error.yfilter = yfilter;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set.yfilter = yfilter;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error.yfilter = yfilter;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered.yfilter = yfilter;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber.yfilter = yfilter;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode.yfilter = yfilter;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present.yfilter = yfilter;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id.yfilter = yfilter;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle.yfilter = yfilter;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds.yfilter = yfilter;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds.yfilter = yfilter;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "querier-address" || name == "subscriber-address" || name == "interface-name-xr" || name == "state" || name == "prefix-length" || name == "is-interface-up" || name == "is-ip-enabled" || name == "is-router-enabled" || name == "igmp-version" || name == "host-version" || name == "query-interval" || name == "query-timeout" || name == "query-maximum-response-time" || name == "last-member-query-interval" || name == "group-joins" || name == "group-leaves" || name == "is-querier" || name == "total-active-groups" || name == "robustness" || name == "proxy-interface" || name == "querier-uptime" || name == "las-ll-registration-count" || name == "las-get-address-count" || name == "las-update-count" || name == "las-ll-remove-update-count" || name == "las-ll-add-update-count" || name == "las-null-update-count" || name == "las-unregistration-count" || name == "is-las-request" || name == "is-las-registered" || name == "vrf-id" || name == "mte-vrf-id" || name == "location" || name == "mtu" || name == "vrf-state" || name == "is-configurationverify" || name == "configurationvrf-set" || name == "configurationvrf-error" || name == "configuration-mcast-vrf-set" || name == "configuration-mcast-vrf-error" || name == "is-im-state-registered" || name == "is-subscriber" || name == "subscriber-mode" || name == "is-identity-present" || name == "subscriber-id" || name == "parent-ifhandle" || name == "time-since-last-query-in-seconds" || name == "time-since-last-report-in-seconds" || name == "router-uptime-in-seconds" || name == "mte-tuple-count")
        return true;
    return false;
}

Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "igmp-interface-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::~Address()
{
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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
}

void Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "querier-address"; yang_parent_name = "igmp-interface-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::~QuerierAddress()
{
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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
}

void Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "subscriber-address"; yang_parent_name = "igmp-interface-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::~SubscriberAddress()
{
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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
}

void Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::TrafficCounters::TrafficCounters()
    :
    elapsed_time{YType::uint32, "elapsed-time"},
    packets_in{YType::uint32, "packets-in"},
    packets_out{YType::uint32, "packets-out"},
    format_errors{YType::uint32, "format-errors"},
    packet_manager_input_errors{YType::uint32, "packet-manager-input-errors"},
    packet_manager_output_errors{YType::uint32, "packet-manager-output-errors"},
    checksum_errors{YType::uint32, "checksum-errors"},
    receive_socket_errors{YType::uint32, "receive-socket-errors"},
    socket_errors{YType::uint32, "socket-errors"},
    bad_scope_errors{YType::uint32, "bad-scope-errors"},
    auxillary_data_length_errors{YType::uint32, "auxillary-data-length-errors"},
    invalid_source_address_errors{YType::uint32, "invalid-source-address-errors"},
    no_socket_connection{YType::uint32, "no-socket-connection"},
    miscellaneous_errors{YType::uint32, "miscellaneous-errors"},
    input_queries{YType::uint32, "input-queries"},
    input_reports{YType::uint32, "input-reports"},
    input_leaves{YType::uint32, "input-leaves"},
    input_mtrace{YType::uint32, "input-mtrace"},
    input_dvmrp{YType::uint32, "input-dvmrp"},
    input_pim{YType::uint32, "input-pim"},
    output_queries{YType::uint32, "output-queries"},
    output_reports{YType::uint32, "output-reports"},
    output_leaves{YType::uint32, "output-leaves"},
    output_mtrace{YType::uint32, "output-mtrace"},
    output_dvmrp{YType::uint32, "output-dvmrp"},
    output_pim{YType::uint32, "output-pim"},
    get_packet_failure{YType::uint32, "get-packet-failure"},
    output_no_parent_interface_handle{YType::uint32, "output-no-parent-interface-handle"},
    input_no_idb{YType::uint32, "input-no-idb"},
    input_no_vrf_in_idb{YType::uint32, "input-no-vrf-in-idb"},
    input_disabled_idb{YType::uint32, "input-disabled-idb"},
    input_martian_address{YType::uint32, "input-martian-address"},
    input_no_assigned_vrf_id{YType::uint32, "input-no-assigned-vrf-id"},
    input_no_vrf_mtrace{YType::uint32, "input-no-vrf-mtrace"},
    input_no_platform_support_mtrace{YType::uint32, "input-no-platform-support-mtrace"}
{

    yang_name = "traffic-counters"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Igmp::Active::DefaultContext::TrafficCounters::~TrafficCounters()
{
}

bool Igmp::Active::DefaultContext::TrafficCounters::has_data() const
{
    if (is_presence_container) return true;
    return elapsed_time.is_set
	|| packets_in.is_set
	|| packets_out.is_set
	|| format_errors.is_set
	|| packet_manager_input_errors.is_set
	|| packet_manager_output_errors.is_set
	|| checksum_errors.is_set
	|| receive_socket_errors.is_set
	|| socket_errors.is_set
	|| bad_scope_errors.is_set
	|| auxillary_data_length_errors.is_set
	|| invalid_source_address_errors.is_set
	|| no_socket_connection.is_set
	|| miscellaneous_errors.is_set
	|| input_queries.is_set
	|| input_reports.is_set
	|| input_leaves.is_set
	|| input_mtrace.is_set
	|| input_dvmrp.is_set
	|| input_pim.is_set
	|| output_queries.is_set
	|| output_reports.is_set
	|| output_leaves.is_set
	|| output_mtrace.is_set
	|| output_dvmrp.is_set
	|| output_pim.is_set
	|| get_packet_failure.is_set
	|| output_no_parent_interface_handle.is_set
	|| input_no_idb.is_set
	|| input_no_vrf_in_idb.is_set
	|| input_disabled_idb.is_set
	|| input_martian_address.is_set
	|| input_no_assigned_vrf_id.is_set
	|| input_no_vrf_mtrace.is_set
	|| input_no_platform_support_mtrace.is_set;
}

bool Igmp::Active::DefaultContext::TrafficCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(elapsed_time.yfilter)
	|| ydk::is_set(packets_in.yfilter)
	|| ydk::is_set(packets_out.yfilter)
	|| ydk::is_set(format_errors.yfilter)
	|| ydk::is_set(packet_manager_input_errors.yfilter)
	|| ydk::is_set(packet_manager_output_errors.yfilter)
	|| ydk::is_set(checksum_errors.yfilter)
	|| ydk::is_set(receive_socket_errors.yfilter)
	|| ydk::is_set(socket_errors.yfilter)
	|| ydk::is_set(bad_scope_errors.yfilter)
	|| ydk::is_set(auxillary_data_length_errors.yfilter)
	|| ydk::is_set(invalid_source_address_errors.yfilter)
	|| ydk::is_set(no_socket_connection.yfilter)
	|| ydk::is_set(miscellaneous_errors.yfilter)
	|| ydk::is_set(input_queries.yfilter)
	|| ydk::is_set(input_reports.yfilter)
	|| ydk::is_set(input_leaves.yfilter)
	|| ydk::is_set(input_mtrace.yfilter)
	|| ydk::is_set(input_dvmrp.yfilter)
	|| ydk::is_set(input_pim.yfilter)
	|| ydk::is_set(output_queries.yfilter)
	|| ydk::is_set(output_reports.yfilter)
	|| ydk::is_set(output_leaves.yfilter)
	|| ydk::is_set(output_mtrace.yfilter)
	|| ydk::is_set(output_dvmrp.yfilter)
	|| ydk::is_set(output_pim.yfilter)
	|| ydk::is_set(get_packet_failure.yfilter)
	|| ydk::is_set(output_no_parent_interface_handle.yfilter)
	|| ydk::is_set(input_no_idb.yfilter)
	|| ydk::is_set(input_no_vrf_in_idb.yfilter)
	|| ydk::is_set(input_disabled_idb.yfilter)
	|| ydk::is_set(input_martian_address.yfilter)
	|| ydk::is_set(input_no_assigned_vrf_id.yfilter)
	|| ydk::is_set(input_no_vrf_mtrace.yfilter)
	|| ydk::is_set(input_no_platform_support_mtrace.yfilter);
}

std::string Igmp::Active::DefaultContext::TrafficCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::Active::DefaultContext::TrafficCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::TrafficCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (elapsed_time.is_set || is_set(elapsed_time.yfilter)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (packets_in.is_set || is_set(packets_in.yfilter)) leaf_name_data.push_back(packets_in.get_name_leafdata());
    if (packets_out.is_set || is_set(packets_out.yfilter)) leaf_name_data.push_back(packets_out.get_name_leafdata());
    if (format_errors.is_set || is_set(format_errors.yfilter)) leaf_name_data.push_back(format_errors.get_name_leafdata());
    if (packet_manager_input_errors.is_set || is_set(packet_manager_input_errors.yfilter)) leaf_name_data.push_back(packet_manager_input_errors.get_name_leafdata());
    if (packet_manager_output_errors.is_set || is_set(packet_manager_output_errors.yfilter)) leaf_name_data.push_back(packet_manager_output_errors.get_name_leafdata());
    if (checksum_errors.is_set || is_set(checksum_errors.yfilter)) leaf_name_data.push_back(checksum_errors.get_name_leafdata());
    if (receive_socket_errors.is_set || is_set(receive_socket_errors.yfilter)) leaf_name_data.push_back(receive_socket_errors.get_name_leafdata());
    if (socket_errors.is_set || is_set(socket_errors.yfilter)) leaf_name_data.push_back(socket_errors.get_name_leafdata());
    if (bad_scope_errors.is_set || is_set(bad_scope_errors.yfilter)) leaf_name_data.push_back(bad_scope_errors.get_name_leafdata());
    if (auxillary_data_length_errors.is_set || is_set(auxillary_data_length_errors.yfilter)) leaf_name_data.push_back(auxillary_data_length_errors.get_name_leafdata());
    if (invalid_source_address_errors.is_set || is_set(invalid_source_address_errors.yfilter)) leaf_name_data.push_back(invalid_source_address_errors.get_name_leafdata());
    if (no_socket_connection.is_set || is_set(no_socket_connection.yfilter)) leaf_name_data.push_back(no_socket_connection.get_name_leafdata());
    if (miscellaneous_errors.is_set || is_set(miscellaneous_errors.yfilter)) leaf_name_data.push_back(miscellaneous_errors.get_name_leafdata());
    if (input_queries.is_set || is_set(input_queries.yfilter)) leaf_name_data.push_back(input_queries.get_name_leafdata());
    if (input_reports.is_set || is_set(input_reports.yfilter)) leaf_name_data.push_back(input_reports.get_name_leafdata());
    if (input_leaves.is_set || is_set(input_leaves.yfilter)) leaf_name_data.push_back(input_leaves.get_name_leafdata());
    if (input_mtrace.is_set || is_set(input_mtrace.yfilter)) leaf_name_data.push_back(input_mtrace.get_name_leafdata());
    if (input_dvmrp.is_set || is_set(input_dvmrp.yfilter)) leaf_name_data.push_back(input_dvmrp.get_name_leafdata());
    if (input_pim.is_set || is_set(input_pim.yfilter)) leaf_name_data.push_back(input_pim.get_name_leafdata());
    if (output_queries.is_set || is_set(output_queries.yfilter)) leaf_name_data.push_back(output_queries.get_name_leafdata());
    if (output_reports.is_set || is_set(output_reports.yfilter)) leaf_name_data.push_back(output_reports.get_name_leafdata());
    if (output_leaves.is_set || is_set(output_leaves.yfilter)) leaf_name_data.push_back(output_leaves.get_name_leafdata());
    if (output_mtrace.is_set || is_set(output_mtrace.yfilter)) leaf_name_data.push_back(output_mtrace.get_name_leafdata());
    if (output_dvmrp.is_set || is_set(output_dvmrp.yfilter)) leaf_name_data.push_back(output_dvmrp.get_name_leafdata());
    if (output_pim.is_set || is_set(output_pim.yfilter)) leaf_name_data.push_back(output_pim.get_name_leafdata());
    if (get_packet_failure.is_set || is_set(get_packet_failure.yfilter)) leaf_name_data.push_back(get_packet_failure.get_name_leafdata());
    if (output_no_parent_interface_handle.is_set || is_set(output_no_parent_interface_handle.yfilter)) leaf_name_data.push_back(output_no_parent_interface_handle.get_name_leafdata());
    if (input_no_idb.is_set || is_set(input_no_idb.yfilter)) leaf_name_data.push_back(input_no_idb.get_name_leafdata());
    if (input_no_vrf_in_idb.is_set || is_set(input_no_vrf_in_idb.yfilter)) leaf_name_data.push_back(input_no_vrf_in_idb.get_name_leafdata());
    if (input_disabled_idb.is_set || is_set(input_disabled_idb.yfilter)) leaf_name_data.push_back(input_disabled_idb.get_name_leafdata());
    if (input_martian_address.is_set || is_set(input_martian_address.yfilter)) leaf_name_data.push_back(input_martian_address.get_name_leafdata());
    if (input_no_assigned_vrf_id.is_set || is_set(input_no_assigned_vrf_id.yfilter)) leaf_name_data.push_back(input_no_assigned_vrf_id.get_name_leafdata());
    if (input_no_vrf_mtrace.is_set || is_set(input_no_vrf_mtrace.yfilter)) leaf_name_data.push_back(input_no_vrf_mtrace.get_name_leafdata());
    if (input_no_platform_support_mtrace.is_set || is_set(input_no_platform_support_mtrace.yfilter)) leaf_name_data.push_back(input_no_platform_support_mtrace.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::TrafficCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::TrafficCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Igmp::Active::DefaultContext::TrafficCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
        elapsed_time.value_namespace = name_space;
        elapsed_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-in")
    {
        packets_in = value;
        packets_in.value_namespace = name_space;
        packets_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-out")
    {
        packets_out = value;
        packets_out.value_namespace = name_space;
        packets_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format-errors")
    {
        format_errors = value;
        format_errors.value_namespace = name_space;
        format_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-manager-input-errors")
    {
        packet_manager_input_errors = value;
        packet_manager_input_errors.value_namespace = name_space;
        packet_manager_input_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-manager-output-errors")
    {
        packet_manager_output_errors = value;
        packet_manager_output_errors.value_namespace = name_space;
        packet_manager_output_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum-errors")
    {
        checksum_errors = value;
        checksum_errors.value_namespace = name_space;
        checksum_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-socket-errors")
    {
        receive_socket_errors = value;
        receive_socket_errors.value_namespace = name_space;
        receive_socket_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-errors")
    {
        socket_errors = value;
        socket_errors.value_namespace = name_space;
        socket_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-scope-errors")
    {
        bad_scope_errors = value;
        bad_scope_errors.value_namespace = name_space;
        bad_scope_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auxillary-data-length-errors")
    {
        auxillary_data_length_errors = value;
        auxillary_data_length_errors.value_namespace = name_space;
        auxillary_data_length_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-source-address-errors")
    {
        invalid_source_address_errors = value;
        invalid_source_address_errors.value_namespace = name_space;
        invalid_source_address_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-socket-connection")
    {
        no_socket_connection = value;
        no_socket_connection.value_namespace = name_space;
        no_socket_connection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "miscellaneous-errors")
    {
        miscellaneous_errors = value;
        miscellaneous_errors.value_namespace = name_space;
        miscellaneous_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-queries")
    {
        input_queries = value;
        input_queries.value_namespace = name_space;
        input_queries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-reports")
    {
        input_reports = value;
        input_reports.value_namespace = name_space;
        input_reports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-leaves")
    {
        input_leaves = value;
        input_leaves.value_namespace = name_space;
        input_leaves.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-mtrace")
    {
        input_mtrace = value;
        input_mtrace.value_namespace = name_space;
        input_mtrace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-dvmrp")
    {
        input_dvmrp = value;
        input_dvmrp.value_namespace = name_space;
        input_dvmrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-pim")
    {
        input_pim = value;
        input_pim.value_namespace = name_space;
        input_pim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-queries")
    {
        output_queries = value;
        output_queries.value_namespace = name_space;
        output_queries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-reports")
    {
        output_reports = value;
        output_reports.value_namespace = name_space;
        output_reports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-leaves")
    {
        output_leaves = value;
        output_leaves.value_namespace = name_space;
        output_leaves.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-mtrace")
    {
        output_mtrace = value;
        output_mtrace.value_namespace = name_space;
        output_mtrace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-dvmrp")
    {
        output_dvmrp = value;
        output_dvmrp.value_namespace = name_space;
        output_dvmrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-pim")
    {
        output_pim = value;
        output_pim.value_namespace = name_space;
        output_pim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "get-packet-failure")
    {
        get_packet_failure = value;
        get_packet_failure.value_namespace = name_space;
        get_packet_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-no-parent-interface-handle")
    {
        output_no_parent_interface_handle = value;
        output_no_parent_interface_handle.value_namespace = name_space;
        output_no_parent_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-no-idb")
    {
        input_no_idb = value;
        input_no_idb.value_namespace = name_space;
        input_no_idb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-no-vrf-in-idb")
    {
        input_no_vrf_in_idb = value;
        input_no_vrf_in_idb.value_namespace = name_space;
        input_no_vrf_in_idb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-disabled-idb")
    {
        input_disabled_idb = value;
        input_disabled_idb.value_namespace = name_space;
        input_disabled_idb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-martian-address")
    {
        input_martian_address = value;
        input_martian_address.value_namespace = name_space;
        input_martian_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-no-assigned-vrf-id")
    {
        input_no_assigned_vrf_id = value;
        input_no_assigned_vrf_id.value_namespace = name_space;
        input_no_assigned_vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-no-vrf-mtrace")
    {
        input_no_vrf_mtrace = value;
        input_no_vrf_mtrace.value_namespace = name_space;
        input_no_vrf_mtrace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-no-platform-support-mtrace")
    {
        input_no_platform_support_mtrace = value;
        input_no_platform_support_mtrace.value_namespace = name_space;
        input_no_platform_support_mtrace.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Active::DefaultContext::TrafficCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "elapsed-time")
    {
        elapsed_time.yfilter = yfilter;
    }
    if(value_path == "packets-in")
    {
        packets_in.yfilter = yfilter;
    }
    if(value_path == "packets-out")
    {
        packets_out.yfilter = yfilter;
    }
    if(value_path == "format-errors")
    {
        format_errors.yfilter = yfilter;
    }
    if(value_path == "packet-manager-input-errors")
    {
        packet_manager_input_errors.yfilter = yfilter;
    }
    if(value_path == "packet-manager-output-errors")
    {
        packet_manager_output_errors.yfilter = yfilter;
    }
    if(value_path == "checksum-errors")
    {
        checksum_errors.yfilter = yfilter;
    }
    if(value_path == "receive-socket-errors")
    {
        receive_socket_errors.yfilter = yfilter;
    }
    if(value_path == "socket-errors")
    {
        socket_errors.yfilter = yfilter;
    }
    if(value_path == "bad-scope-errors")
    {
        bad_scope_errors.yfilter = yfilter;
    }
    if(value_path == "auxillary-data-length-errors")
    {
        auxillary_data_length_errors.yfilter = yfilter;
    }
    if(value_path == "invalid-source-address-errors")
    {
        invalid_source_address_errors.yfilter = yfilter;
    }
    if(value_path == "no-socket-connection")
    {
        no_socket_connection.yfilter = yfilter;
    }
    if(value_path == "miscellaneous-errors")
    {
        miscellaneous_errors.yfilter = yfilter;
    }
    if(value_path == "input-queries")
    {
        input_queries.yfilter = yfilter;
    }
    if(value_path == "input-reports")
    {
        input_reports.yfilter = yfilter;
    }
    if(value_path == "input-leaves")
    {
        input_leaves.yfilter = yfilter;
    }
    if(value_path == "input-mtrace")
    {
        input_mtrace.yfilter = yfilter;
    }
    if(value_path == "input-dvmrp")
    {
        input_dvmrp.yfilter = yfilter;
    }
    if(value_path == "input-pim")
    {
        input_pim.yfilter = yfilter;
    }
    if(value_path == "output-queries")
    {
        output_queries.yfilter = yfilter;
    }
    if(value_path == "output-reports")
    {
        output_reports.yfilter = yfilter;
    }
    if(value_path == "output-leaves")
    {
        output_leaves.yfilter = yfilter;
    }
    if(value_path == "output-mtrace")
    {
        output_mtrace.yfilter = yfilter;
    }
    if(value_path == "output-dvmrp")
    {
        output_dvmrp.yfilter = yfilter;
    }
    if(value_path == "output-pim")
    {
        output_pim.yfilter = yfilter;
    }
    if(value_path == "get-packet-failure")
    {
        get_packet_failure.yfilter = yfilter;
    }
    if(value_path == "output-no-parent-interface-handle")
    {
        output_no_parent_interface_handle.yfilter = yfilter;
    }
    if(value_path == "input-no-idb")
    {
        input_no_idb.yfilter = yfilter;
    }
    if(value_path == "input-no-vrf-in-idb")
    {
        input_no_vrf_in_idb.yfilter = yfilter;
    }
    if(value_path == "input-disabled-idb")
    {
        input_disabled_idb.yfilter = yfilter;
    }
    if(value_path == "input-martian-address")
    {
        input_martian_address.yfilter = yfilter;
    }
    if(value_path == "input-no-assigned-vrf-id")
    {
        input_no_assigned_vrf_id.yfilter = yfilter;
    }
    if(value_path == "input-no-vrf-mtrace")
    {
        input_no_vrf_mtrace.yfilter = yfilter;
    }
    if(value_path == "input-no-platform-support-mtrace")
    {
        input_no_platform_support_mtrace.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::TrafficCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "elapsed-time" || name == "packets-in" || name == "packets-out" || name == "format-errors" || name == "packet-manager-input-errors" || name == "packet-manager-output-errors" || name == "checksum-errors" || name == "receive-socket-errors" || name == "socket-errors" || name == "bad-scope-errors" || name == "auxillary-data-length-errors" || name == "invalid-source-address-errors" || name == "no-socket-connection" || name == "miscellaneous-errors" || name == "input-queries" || name == "input-reports" || name == "input-leaves" || name == "input-mtrace" || name == "input-dvmrp" || name == "input-pim" || name == "output-queries" || name == "output-reports" || name == "output-leaves" || name == "output-mtrace" || name == "output-dvmrp" || name == "output-pim" || name == "get-packet-failure" || name == "output-no-parent-interface-handle" || name == "input-no-idb" || name == "input-no-vrf-in-idb" || name == "input-disabled-idb" || name == "input-martian-address" || name == "input-no-assigned-vrf-id" || name == "input-no-vrf-mtrace" || name == "input-no-platform-support-mtrace")
        return true;
    return false;
}

Igmp::Active::DefaultContext::Groups::Groups()
    :
    group(this, {})
{

    yang_name = "groups"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Igmp::Active::DefaultContext::Groups::~Groups()
{
}

bool Igmp::Active::DefaultContext::Groups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Active::DefaultContext::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Igmp::Active::DefaultContext::Groups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::Active::DefaultContext::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        auto ent_ = std::make_shared<Igmp::Active::DefaultContext::Groups::Group>();
        ent_->parent = this;
        group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Igmp::Active::DefaultContext::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Igmp::Active::DefaultContext::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Igmp::Active::DefaultContext::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Igmp::Active::DefaultContext::Groups::Group::Group()
    :
    group_address{YType::str, "group-address"},
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    uptime{YType::uint64, "uptime"},
    expiration_time{YType::int32, "expiration-time"},
    explicit_tracking_enabled{YType::boolean, "explicit-tracking-enabled"},
    is_self_join{YType::boolean, "is-self-join"},
    row_status{YType::str, "row-status"},
    is_low_memory{YType::boolean, "is-low-memory"},
    router_filter_mode{YType::uint8, "router-filter-mode"},
    older_host_version1_timer{YType::uint32, "older-host-version1-timer"},
    older_host_version2_timer{YType::uint32, "older-host-version2-timer"},
    is_added{YType::boolean, "is-added"},
    is_suppressed{YType::boolean, "is-suppressed"}
        ,
    group_address_xr(std::make_shared<Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr>())
    , last_reporter(std::make_shared<Igmp::Active::DefaultContext::Groups::Group::LastReporter>())
    , source_address(std::make_shared<Igmp::Active::DefaultContext::Groups::Group::SourceAddress>())
{
    group_address_xr->parent = this;
    last_reporter->parent = this;
    source_address->parent = this;

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = false; 
}

Igmp::Active::DefaultContext::Groups::Group::~Group()
{
}

bool Igmp::Active::DefaultContext::Groups::Group::has_data() const
{
    if (is_presence_container) return true;
    return group_address.is_set
	|| interface_name.is_set
	|| interface_name_xr.is_set
	|| uptime.is_set
	|| expiration_time.is_set
	|| explicit_tracking_enabled.is_set
	|| is_self_join.is_set
	|| row_status.is_set
	|| is_low_memory.is_set
	|| router_filter_mode.is_set
	|| older_host_version1_timer.is_set
	|| older_host_version2_timer.is_set
	|| is_added.is_set
	|| is_suppressed.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (last_reporter !=  nullptr && last_reporter->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Igmp::Active::DefaultContext::Groups::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(expiration_time.yfilter)
	|| ydk::is_set(explicit_tracking_enabled.yfilter)
	|| ydk::is_set(is_self_join.yfilter)
	|| ydk::is_set(row_status.yfilter)
	|| ydk::is_set(is_low_memory.yfilter)
	|| ydk::is_set(router_filter_mode.yfilter)
	|| ydk::is_set(older_host_version1_timer.yfilter)
	|| ydk::is_set(older_host_version2_timer.yfilter)
	|| ydk::is_set(is_added.yfilter)
	|| ydk::is_set(is_suppressed.yfilter)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (last_reporter !=  nullptr && last_reporter->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Igmp::Active::DefaultContext::Groups::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::Active::DefaultContext::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::Groups::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (expiration_time.is_set || is_set(expiration_time.yfilter)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (explicit_tracking_enabled.is_set || is_set(explicit_tracking_enabled.yfilter)) leaf_name_data.push_back(explicit_tracking_enabled.get_name_leafdata());
    if (is_self_join.is_set || is_set(is_self_join.yfilter)) leaf_name_data.push_back(is_self_join.get_name_leafdata());
    if (row_status.is_set || is_set(row_status.yfilter)) leaf_name_data.push_back(row_status.get_name_leafdata());
    if (is_low_memory.is_set || is_set(is_low_memory.yfilter)) leaf_name_data.push_back(is_low_memory.get_name_leafdata());
    if (router_filter_mode.is_set || is_set(router_filter_mode.yfilter)) leaf_name_data.push_back(router_filter_mode.get_name_leafdata());
    if (older_host_version1_timer.is_set || is_set(older_host_version1_timer.yfilter)) leaf_name_data.push_back(older_host_version1_timer.get_name_leafdata());
    if (older_host_version2_timer.is_set || is_set(older_host_version2_timer.yfilter)) leaf_name_data.push_back(older_host_version2_timer.get_name_leafdata());
    if (is_added.is_set || is_set(is_added.yfilter)) leaf_name_data.push_back(is_added.get_name_leafdata());
    if (is_suppressed.is_set || is_set(is_suppressed.yfilter)) leaf_name_data.push_back(is_suppressed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "last-reporter")
    {
        if(last_reporter == nullptr)
        {
            last_reporter = std::make_shared<Igmp::Active::DefaultContext::Groups::Group::LastReporter>();
        }
        return last_reporter;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Igmp::Active::DefaultContext::Groups::Group::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group_address_xr != nullptr)
    {
        _children["group-address-xr"] = group_address_xr;
    }

    if(last_reporter != nullptr)
    {
        _children["last-reporter"] = last_reporter;
    }

    if(source_address != nullptr)
    {
        _children["source-address"] = source_address;
    }

    return _children;
}

void Igmp::Active::DefaultContext::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiration-time")
    {
        expiration_time = value;
        expiration_time.value_namespace = name_space;
        expiration_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-tracking-enabled")
    {
        explicit_tracking_enabled = value;
        explicit_tracking_enabled.value_namespace = name_space;
        explicit_tracking_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-self-join")
    {
        is_self_join = value;
        is_self_join.value_namespace = name_space;
        is_self_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "row-status")
    {
        row_status = value;
        row_status.value_namespace = name_space;
        row_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory = value;
        is_low_memory.value_namespace = name_space;
        is_low_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-filter-mode")
    {
        router_filter_mode = value;
        router_filter_mode.value_namespace = name_space;
        router_filter_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "older-host-version1-timer")
    {
        older_host_version1_timer = value;
        older_host_version1_timer.value_namespace = name_space;
        older_host_version1_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "older-host-version2-timer")
    {
        older_host_version2_timer = value;
        older_host_version2_timer.value_namespace = name_space;
        older_host_version2_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-added")
    {
        is_added = value;
        is_added.value_namespace = name_space;
        is_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-suppressed")
    {
        is_suppressed = value;
        is_suppressed.value_namespace = name_space;
        is_suppressed.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Active::DefaultContext::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "expiration-time")
    {
        expiration_time.yfilter = yfilter;
    }
    if(value_path == "explicit-tracking-enabled")
    {
        explicit_tracking_enabled.yfilter = yfilter;
    }
    if(value_path == "is-self-join")
    {
        is_self_join.yfilter = yfilter;
    }
    if(value_path == "row-status")
    {
        row_status.yfilter = yfilter;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory.yfilter = yfilter;
    }
    if(value_path == "router-filter-mode")
    {
        router_filter_mode.yfilter = yfilter;
    }
    if(value_path == "older-host-version1-timer")
    {
        older_host_version1_timer.yfilter = yfilter;
    }
    if(value_path == "older-host-version2-timer")
    {
        older_host_version2_timer.yfilter = yfilter;
    }
    if(value_path == "is-added")
    {
        is_added.yfilter = yfilter;
    }
    if(value_path == "is-suppressed")
    {
        is_suppressed.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "last-reporter" || name == "source-address" || name == "group-address" || name == "interface-name" || name == "interface-name-xr" || name == "uptime" || name == "expiration-time" || name == "explicit-tracking-enabled" || name == "is-self-join" || name == "row-status" || name == "is-low-memory" || name == "router-filter-mode" || name == "older-host-version1-timer" || name == "older-host-version2-timer" || name == "is-added" || name == "is-suppressed")
        return true;
    return false;
}

Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-xr"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = false; 
}

Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr::~GroupAddressXr()
{
}

bool Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/groups/group/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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
}

void Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::Groups::Group::LastReporter::LastReporter()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "last-reporter"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = false; 
}

Igmp::Active::DefaultContext::Groups::Group::LastReporter::~LastReporter()
{
}

bool Igmp::Active::DefaultContext::Groups::Group::LastReporter::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::Groups::Group::LastReporter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::Groups::Group::LastReporter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/groups/group/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::Active::DefaultContext::Groups::Group::LastReporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-reporter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::Groups::Group::LastReporter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::Groups::Group::LastReporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::Groups::Group::LastReporter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Igmp::Active::DefaultContext::Groups::Group::LastReporter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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
}

void Igmp::Active::DefaultContext::Groups::Group::LastReporter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::Groups::Group::LastReporter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::Groups::Group::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = false; 
}

Igmp::Active::DefaultContext::Groups::Group::SourceAddress::~SourceAddress()
{
}

bool Igmp::Active::DefaultContext::Groups::Group::SourceAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::Groups::Group::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::Groups::Group::SourceAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/groups/group/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::Active::DefaultContext::Groups::Group::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::Groups::Group::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::Groups::Group::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::Groups::Group::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Igmp::Active::DefaultContext::Groups::Group::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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
}

void Igmp::Active::DefaultContext::Groups::Group::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::Groups::Group::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::GroupSummary::GroupSummary()
    :
    groutes{YType::uint32, "groutes"},
    sg_routes{YType::uint32, "sg-routes"},
    group_count{YType::uint32, "group-count"},
    is_low_memory{YType::boolean, "is-low-memory"}
{

    yang_name = "group-summary"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Igmp::Active::DefaultContext::GroupSummary::~GroupSummary()
{
}

bool Igmp::Active::DefaultContext::GroupSummary::has_data() const
{
    if (is_presence_container) return true;
    return groutes.is_set
	|| sg_routes.is_set
	|| group_count.is_set
	|| is_low_memory.is_set;
}

bool Igmp::Active::DefaultContext::GroupSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(groutes.yfilter)
	|| ydk::is_set(sg_routes.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(is_low_memory.yfilter);
}

std::string Igmp::Active::DefaultContext::GroupSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::Active::DefaultContext::GroupSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::GroupSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (groutes.is_set || is_set(groutes.yfilter)) leaf_name_data.push_back(groutes.get_name_leafdata());
    if (sg_routes.is_set || is_set(sg_routes.yfilter)) leaf_name_data.push_back(sg_routes.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (is_low_memory.is_set || is_set(is_low_memory.yfilter)) leaf_name_data.push_back(is_low_memory.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::GroupSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::GroupSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Igmp::Active::DefaultContext::GroupSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "groutes")
    {
        groutes = value;
        groutes.value_namespace = name_space;
        groutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sg-routes")
    {
        sg_routes = value;
        sg_routes.value_namespace = name_space;
        sg_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory = value;
        is_low_memory.value_namespace = name_space;
        is_low_memory.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Active::DefaultContext::GroupSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "groutes")
    {
        groutes.yfilter = yfilter;
    }
    if(value_path == "sg-routes")
    {
        sg_routes.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::GroupSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groutes" || name == "sg-routes" || name == "group-count" || name == "is-low-memory")
        return true;
    return false;
}

Igmp::Active::DefaultContext::IfrsInterfaceSummary::IfrsInterfaceSummary()
    :
    interface_count{YType::uint32, "interface-count"},
    configuration_count{YType::uint32, "configuration-count"}
{

    yang_name = "ifrs-interface-summary"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Igmp::Active::DefaultContext::IfrsInterfaceSummary::~IfrsInterfaceSummary()
{
}

bool Igmp::Active::DefaultContext::IfrsInterfaceSummary::has_data() const
{
    if (is_presence_container) return true;
    return interface_count.is_set
	|| configuration_count.is_set;
}

bool Igmp::Active::DefaultContext::IfrsInterfaceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(configuration_count.yfilter);
}

std::string Igmp::Active::DefaultContext::IfrsInterfaceSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::Active::DefaultContext::IfrsInterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interface-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::IfrsInterfaceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (configuration_count.is_set || is_set(configuration_count.yfilter)) leaf_name_data.push_back(configuration_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::IfrsInterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::IfrsInterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Igmp::Active::DefaultContext::IfrsInterfaceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-count")
    {
        configuration_count = value;
        configuration_count.value_namespace = name_space;
        configuration_count.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Active::DefaultContext::IfrsInterfaceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "configuration-count")
    {
        configuration_count.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::IfrsInterfaceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-count" || name == "configuration-count")
        return true;
    return false;
}

Igmp::Active::DefaultContext::GlobalInterfaceTable::GlobalInterfaceTable()
    :
    interface(this, {"interface_name"})
{

    yang_name = "global-interface-table"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Igmp::Active::DefaultContext::GlobalInterfaceTable::~GlobalInterfaceTable()
{
}

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Igmp::Active::DefaultContext::GlobalInterfaceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::Active::DefaultContext::GlobalInterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-interface-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::GlobalInterfaceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::GlobalInterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::GlobalInterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Igmp::Active::DefaultContext::GlobalInterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Igmp::Active::DefaultContext::GlobalInterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    state{YType::uint32, "state"},
    prefix_length{YType::uint32, "prefix-length"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    igmp_version{YType::uint8, "igmp-version"},
    host_version{YType::uint8, "host-version"},
    query_interval{YType::uint16, "query-interval"},
    query_timeout{YType::uint16, "query-timeout"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    is_querier{YType::boolean, "is-querier"},
    total_active_groups{YType::uint32, "total-active-groups"},
    robustness{YType::uint32, "robustness"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_update_count{YType::uint32, "las-update-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    is_las_request{YType::boolean, "is-las-request"},
    is_las_registered{YType::boolean, "is-las-registered"},
    vrf_id{YType::uint32, "vrf-id"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    location{YType::uint32, "location"},
    mtu{YType::uint32, "mtu"},
    vrf_state{YType::uint32, "vrf-state"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_subscriber{YType::boolean, "is-subscriber"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    is_identity_present{YType::boolean, "is-identity-present"},
    subscriber_id{YType::str, "subscriber-id"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"}
        ,
    address(std::make_shared<Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address>())
    , querier_address(std::make_shared<Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress>())
    , subscriber_address(std::make_shared<Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress>())
{
    address->parent = this;
    querier_address->parent = this;
    subscriber_address->parent = this;

    yang_name = "interface"; yang_parent_name = "global-interface-table"; is_top_level_class = false; has_list_ancestor = false; 
}

Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::~Interface()
{
}

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| state.is_set
	|| prefix_length.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_router_enabled.is_set
	|| igmp_version.is_set
	|| host_version.is_set
	|| query_interval.is_set
	|| query_timeout.is_set
	|| query_maximum_response_time.is_set
	|| last_member_query_interval.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| is_querier.is_set
	|| total_active_groups.is_set
	|| robustness.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| las_ll_registration_count.is_set
	|| las_get_address_count.is_set
	|| las_update_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| is_las_request.is_set
	|| is_las_registered.is_set
	|| vrf_id.is_set
	|| mte_vrf_id.is_set
	|| location.is_set
	|| mtu.is_set
	|| vrf_state.is_set
	|| is_configurationverify.is_set
	|| configurationvrf_set.is_set
	|| configurationvrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configuration_mcast_vrf_error.is_set
	|| is_im_state_registered.is_set
	|| is_subscriber.is_set
	|| subscriber_mode.is_set
	|| is_identity_present.is_set
	|| subscriber_id.is_set
	|| parent_ifhandle.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| router_uptime_in_seconds.is_set
	|| mte_tuple_count.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(is_interface_up.yfilter)
	|| ydk::is_set(is_ip_enabled.yfilter)
	|| ydk::is_set(is_router_enabled.yfilter)
	|| ydk::is_set(igmp_version.yfilter)
	|| ydk::is_set(host_version.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| ydk::is_set(query_timeout.yfilter)
	|| ydk::is_set(query_maximum_response_time.yfilter)
	|| ydk::is_set(last_member_query_interval.yfilter)
	|| ydk::is_set(group_joins.yfilter)
	|| ydk::is_set(group_leaves.yfilter)
	|| ydk::is_set(is_querier.yfilter)
	|| ydk::is_set(total_active_groups.yfilter)
	|| ydk::is_set(robustness.yfilter)
	|| ydk::is_set(proxy_interface.yfilter)
	|| ydk::is_set(querier_uptime.yfilter)
	|| ydk::is_set(las_ll_registration_count.yfilter)
	|| ydk::is_set(las_get_address_count.yfilter)
	|| ydk::is_set(las_update_count.yfilter)
	|| ydk::is_set(las_ll_remove_update_count.yfilter)
	|| ydk::is_set(las_ll_add_update_count.yfilter)
	|| ydk::is_set(las_null_update_count.yfilter)
	|| ydk::is_set(las_unregistration_count.yfilter)
	|| ydk::is_set(is_las_request.yfilter)
	|| ydk::is_set(is_las_registered.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(mte_vrf_id.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(vrf_state.yfilter)
	|| ydk::is_set(is_configurationverify.yfilter)
	|| ydk::is_set(configurationvrf_set.yfilter)
	|| ydk::is_set(configurationvrf_error.yfilter)
	|| ydk::is_set(configuration_mcast_vrf_set.yfilter)
	|| ydk::is_set(configuration_mcast_vrf_error.yfilter)
	|| ydk::is_set(is_im_state_registered.yfilter)
	|| ydk::is_set(is_subscriber.yfilter)
	|| ydk::is_set(subscriber_mode.yfilter)
	|| ydk::is_set(is_identity_present.yfilter)
	|| ydk::is_set(subscriber_id.yfilter)
	|| ydk::is_set(parent_ifhandle.yfilter)
	|| ydk::is_set(time_since_last_query_in_seconds.yfilter)
	|| ydk::is_set(time_since_last_report_in_seconds.yfilter)
	|| ydk::is_set(router_uptime_in_seconds.yfilter)
	|| ydk::is_set(mte_tuple_count.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/global-interface-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.yfilter)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.yfilter)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.yfilter)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.yfilter)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.yfilter)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.yfilter)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.yfilter)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.yfilter)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.yfilter)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.yfilter)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.yfilter)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.yfilter)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.yfilter)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.yfilter)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.yfilter)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.yfilter)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.yfilter)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.yfilter)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.yfilter)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.yfilter)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.yfilter)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.yfilter)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.yfilter)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.yfilter)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.yfilter)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.yfilter)) leaf_name_data.push_back(vrf_state.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.yfilter)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.yfilter)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.yfilter)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.yfilter)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.yfilter)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.yfilter)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.yfilter)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.yfilter)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.yfilter)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.yfilter)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.yfilter)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.yfilter)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.yfilter)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.yfilter)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.yfilter)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(querier_address != nullptr)
    {
        _children["querier-address"] = querier_address;
    }

    if(subscriber_address != nullptr)
    {
        _children["subscriber-address"] = subscriber_address;
    }

    return _children;
}

void Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
        is_interface_up.value_namespace = name_space;
        is_interface_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
        is_ip_enabled.value_namespace = name_space;
        is_ip_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
        is_router_enabled.value_namespace = name_space;
        is_router_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
        igmp_version.value_namespace = name_space;
        igmp_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-version")
    {
        host_version = value;
        host_version.value_namespace = name_space;
        host_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
        query_timeout.value_namespace = name_space;
        query_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
        query_maximum_response_time.value_namespace = name_space;
        query_maximum_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
        last_member_query_interval.value_namespace = name_space;
        last_member_query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
        group_joins.value_namespace = name_space;
        group_joins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
        group_leaves.value_namespace = name_space;
        group_leaves.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
        is_querier.value_namespace = name_space;
        is_querier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
        total_active_groups.value_namespace = name_space;
        total_active_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustness")
    {
        robustness = value;
        robustness.value_namespace = name_space;
        robustness.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
        proxy_interface.value_namespace = name_space;
        proxy_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
        querier_uptime.value_namespace = name_space;
        querier_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
        las_ll_registration_count.value_namespace = name_space;
        las_ll_registration_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
        las_get_address_count.value_namespace = name_space;
        las_get_address_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
        las_update_count.value_namespace = name_space;
        las_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
        las_ll_remove_update_count.value_namespace = name_space;
        las_ll_remove_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
        las_ll_add_update_count.value_namespace = name_space;
        las_ll_add_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
        las_null_update_count.value_namespace = name_space;
        las_null_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
        las_unregistration_count.value_namespace = name_space;
        las_unregistration_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
        is_las_request.value_namespace = name_space;
        is_las_request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
        is_las_registered.value_namespace = name_space;
        is_las_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
        mte_vrf_id.value_namespace = name_space;
        mte_vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
        vrf_state.value_namespace = name_space;
        vrf_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
        is_configurationverify.value_namespace = name_space;
        is_configurationverify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
        configurationvrf_set.value_namespace = name_space;
        configurationvrf_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
        configurationvrf_error.value_namespace = name_space;
        configurationvrf_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
        configuration_mcast_vrf_set.value_namespace = name_space;
        configuration_mcast_vrf_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
        configuration_mcast_vrf_error.value_namespace = name_space;
        configuration_mcast_vrf_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
        is_im_state_registered.value_namespace = name_space;
        is_im_state_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
        is_subscriber.value_namespace = name_space;
        is_subscriber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
        subscriber_mode.value_namespace = name_space;
        subscriber_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
        is_identity_present.value_namespace = name_space;
        is_identity_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
        subscriber_id.value_namespace = name_space;
        subscriber_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
        parent_ifhandle.value_namespace = name_space;
        parent_ifhandle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
        time_since_last_query_in_seconds.value_namespace = name_space;
        time_since_last_query_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
        time_since_last_report_in_seconds.value_namespace = name_space;
        time_since_last_report_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
        router_uptime_in_seconds.value_namespace = name_space;
        router_uptime_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
        mte_tuple_count.value_namespace = name_space;
        mte_tuple_count.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up.yfilter = yfilter;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled.yfilter = yfilter;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-version")
    {
        igmp_version.yfilter = yfilter;
    }
    if(value_path == "host-version")
    {
        host_version.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
    if(value_path == "query-timeout")
    {
        query_timeout.yfilter = yfilter;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time.yfilter = yfilter;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval.yfilter = yfilter;
    }
    if(value_path == "group-joins")
    {
        group_joins.yfilter = yfilter;
    }
    if(value_path == "group-leaves")
    {
        group_leaves.yfilter = yfilter;
    }
    if(value_path == "is-querier")
    {
        is_querier.yfilter = yfilter;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups.yfilter = yfilter;
    }
    if(value_path == "robustness")
    {
        robustness.yfilter = yfilter;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface.yfilter = yfilter;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime.yfilter = yfilter;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count.yfilter = yfilter;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count.yfilter = yfilter;
    }
    if(value_path == "las-update-count")
    {
        las_update_count.yfilter = yfilter;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count.yfilter = yfilter;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count.yfilter = yfilter;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count.yfilter = yfilter;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count.yfilter = yfilter;
    }
    if(value_path == "is-las-request")
    {
        is_las_request.yfilter = yfilter;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "vrf-state")
    {
        vrf_state.yfilter = yfilter;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify.yfilter = yfilter;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set.yfilter = yfilter;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error.yfilter = yfilter;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set.yfilter = yfilter;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error.yfilter = yfilter;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered.yfilter = yfilter;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber.yfilter = yfilter;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode.yfilter = yfilter;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present.yfilter = yfilter;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id.yfilter = yfilter;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle.yfilter = yfilter;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds.yfilter = yfilter;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds.yfilter = yfilter;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "querier-address" || name == "subscriber-address" || name == "interface-name" || name == "interface-name-xr" || name == "state" || name == "prefix-length" || name == "is-interface-up" || name == "is-ip-enabled" || name == "is-router-enabled" || name == "igmp-version" || name == "host-version" || name == "query-interval" || name == "query-timeout" || name == "query-maximum-response-time" || name == "last-member-query-interval" || name == "group-joins" || name == "group-leaves" || name == "is-querier" || name == "total-active-groups" || name == "robustness" || name == "proxy-interface" || name == "querier-uptime" || name == "las-ll-registration-count" || name == "las-get-address-count" || name == "las-update-count" || name == "las-ll-remove-update-count" || name == "las-ll-add-update-count" || name == "las-null-update-count" || name == "las-unregistration-count" || name == "is-las-request" || name == "is-las-registered" || name == "vrf-id" || name == "mte-vrf-id" || name == "location" || name == "mtu" || name == "vrf-state" || name == "is-configurationverify" || name == "configurationvrf-set" || name == "configurationvrf-error" || name == "configuration-mcast-vrf-set" || name == "configuration-mcast-vrf-error" || name == "is-im-state-registered" || name == "is-subscriber" || name == "subscriber-mode" || name == "is-identity-present" || name == "subscriber-id" || name == "parent-ifhandle" || name == "time-since-last-query-in-seconds" || name == "time-since-last-report-in-seconds" || name == "router-uptime-in-seconds" || name == "mte-tuple-count")
        return true;
    return false;
}

Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::~Address()
{
}

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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
}

void Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "querier-address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::~QuerierAddress()
{
}

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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
}

void Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "subscriber-address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::~SubscriberAddress()
{
}

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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
}

void Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetails()
    :
    ssm_map_detail(this, {})
{

    yang_name = "ssm-map-details"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Igmp::Active::DefaultContext::SsmMapDetails::~SsmMapDetails()
{
}

bool Igmp::Active::DefaultContext::SsmMapDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ssm_map_detail.len(); index++)
    {
        if(ssm_map_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Active::DefaultContext::SsmMapDetails::has_operation() const
{
    for (std::size_t index=0; index<ssm_map_detail.len(); index++)
    {
        if(ssm_map_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Igmp::Active::DefaultContext::SsmMapDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::Active::DefaultContext::SsmMapDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::SsmMapDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::SsmMapDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssm-map-detail")
    {
        auto ent_ = std::make_shared<Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail>();
        ent_->parent = this;
        ssm_map_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::SsmMapDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ssm_map_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Igmp::Active::DefaultContext::SsmMapDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Igmp::Active::DefaultContext::SsmMapDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Igmp::Active::DefaultContext::SsmMapDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssm-map-detail")
        return true;
    return false;
}

Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::SsmMapDetail()
    :
    ssm_map_type{YType::enumeration, "ssm-map-type"},
    group_address{YType::str, "group-address"},
    expiration_time{YType::uint32, "expiration-time"},
    response_pending{YType::boolean, "response-pending"},
    query_interval{YType::uint32, "query-interval"},
    elapsed_time{YType::uint64, "elapsed-time"}
        ,
    map_info(std::make_shared<Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo>())
    , sources(this, {})
{
    map_info->parent = this;

    yang_name = "ssm-map-detail"; yang_parent_name = "ssm-map-details"; is_top_level_class = false; has_list_ancestor = false; 
}

Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::~SsmMapDetail()
{
}

bool Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sources.len(); index++)
    {
        if(sources[index]->has_data())
            return true;
    }
    return ssm_map_type.is_set
	|| group_address.is_set
	|| expiration_time.is_set
	|| response_pending.is_set
	|| query_interval.is_set
	|| elapsed_time.is_set
	|| (map_info !=  nullptr && map_info->has_data());
}

bool Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::has_operation() const
{
    for (std::size_t index=0; index<sources.len(); index++)
    {
        if(sources[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ssm_map_type.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(expiration_time.yfilter)
	|| ydk::is_set(response_pending.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| ydk::is_set(elapsed_time.yfilter)
	|| (map_info !=  nullptr && map_info->has_operation());
}

std::string Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/ssm-map-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ssm_map_type.is_set || is_set(ssm_map_type.yfilter)) leaf_name_data.push_back(ssm_map_type.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (expiration_time.is_set || is_set(expiration_time.yfilter)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (response_pending.is_set || is_set(response_pending.yfilter)) leaf_name_data.push_back(response_pending.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (elapsed_time.is_set || is_set(elapsed_time.yfilter)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-info")
    {
        if(map_info == nullptr)
        {
            map_info = std::make_shared<Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo>();
        }
        return map_info;
    }

    if(child_yang_name == "sources")
    {
        auto ent_ = std::make_shared<Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources>();
        ent_->parent = this;
        sources.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_info != nullptr)
    {
        _children["map-info"] = map_info;
    }

    count_ = 0;
    for (auto ent_ : sources.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ssm-map-type")
    {
        ssm_map_type = value;
        ssm_map_type.value_namespace = name_space;
        ssm_map_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiration-time")
    {
        expiration_time = value;
        expiration_time.value_namespace = name_space;
        expiration_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-pending")
    {
        response_pending = value;
        response_pending.value_namespace = name_space;
        response_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
        elapsed_time.value_namespace = name_space;
        elapsed_time.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ssm-map-type")
    {
        ssm_map_type.yfilter = yfilter;
    }
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "expiration-time")
    {
        expiration_time.yfilter = yfilter;
    }
    if(value_path == "response-pending")
    {
        response_pending.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-info" || name == "sources" || name == "ssm-map-type" || name == "group-address" || name == "expiration-time" || name == "response-pending" || name == "query-interval" || name == "elapsed-time")
        return true;
    return false;
}

Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::MapInfo()
    :
    map_type{YType::uint32, "map-type"},
    source_counts{YType::uint32, "source-counts"}
        ,
    group_address_xr(std::make_shared<Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr>())
{
    group_address_xr->parent = this;

    yang_name = "map-info"; yang_parent_name = "ssm-map-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::~MapInfo()
{
}

bool Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::has_data() const
{
    if (is_presence_container) return true;
    return map_type.is_set
	|| source_counts.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data());
}

bool Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map_type.yfilter)
	|| ydk::is_set(source_counts.yfilter)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation());
}

std::string Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/ssm-map-details/ssm-map-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_type.is_set || is_set(map_type.yfilter)) leaf_name_data.push_back(map_type.get_name_leafdata());
    if (source_counts.is_set || is_set(source_counts.yfilter)) leaf_name_data.push_back(source_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr>();
        }
        return group_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group_address_xr != nullptr)
    {
        _children["group-address-xr"] = group_address_xr;
    }

    return _children;
}

void Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map-type")
    {
        map_type = value;
        map_type.value_namespace = name_space;
        map_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-counts")
    {
        source_counts = value;
        source_counts.value_namespace = name_space;
        source_counts.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map-type")
    {
        map_type.yfilter = yfilter;
    }
    if(value_path == "source-counts")
    {
        source_counts.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "map-type" || name == "source-counts")
        return true;
    return false;
}

Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-xr"; yang_parent_name = "map-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::~GroupAddressXr()
{
}

bool Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/ssm-map-details/ssm-map-detail/map-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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
}

void Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::Sources()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "sources"; yang_parent_name = "ssm-map-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::~Sources()
{
}

bool Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/ssm-map-details/ssm-map-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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
}

void Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOffs()
    :
    interface_state_off(this, {"interface_name"})
{

    yang_name = "interface-state-offs"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Igmp::Active::DefaultContext::InterfaceStateOffs::~InterfaceStateOffs()
{
}

bool Igmp::Active::DefaultContext::InterfaceStateOffs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_state_off.len(); index++)
    {
        if(interface_state_off[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Active::DefaultContext::InterfaceStateOffs::has_operation() const
{
    for (std::size_t index=0; index<interface_state_off.len(); index++)
    {
        if(interface_state_off[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Igmp::Active::DefaultContext::InterfaceStateOffs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::Active::DefaultContext::InterfaceStateOffs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-offs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::InterfaceStateOffs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::InterfaceStateOffs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-state-off")
    {
        auto ent_ = std::make_shared<Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff>();
        ent_->parent = this;
        interface_state_off.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::InterfaceStateOffs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_state_off.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Igmp::Active::DefaultContext::InterfaceStateOffs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Igmp::Active::DefaultContext::InterfaceStateOffs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Igmp::Active::DefaultContext::InterfaceStateOffs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-state-off")
        return true;
    return false;
}

Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::InterfaceStateOff()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    state{YType::uint32, "state"},
    prefix_length{YType::uint32, "prefix-length"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    igmp_version{YType::uint8, "igmp-version"},
    host_version{YType::uint8, "host-version"},
    query_interval{YType::uint16, "query-interval"},
    query_timeout{YType::uint16, "query-timeout"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    is_querier{YType::boolean, "is-querier"},
    total_active_groups{YType::uint32, "total-active-groups"},
    robustness{YType::uint32, "robustness"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_update_count{YType::uint32, "las-update-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    is_las_request{YType::boolean, "is-las-request"},
    is_las_registered{YType::boolean, "is-las-registered"},
    vrf_id{YType::uint32, "vrf-id"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    location{YType::uint32, "location"},
    mtu{YType::uint32, "mtu"},
    vrf_state{YType::uint32, "vrf-state"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_subscriber{YType::boolean, "is-subscriber"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    is_identity_present{YType::boolean, "is-identity-present"},
    subscriber_id{YType::str, "subscriber-id"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"}
        ,
    address(std::make_shared<Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address>())
    , querier_address(std::make_shared<Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress>())
    , subscriber_address(std::make_shared<Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress>())
{
    address->parent = this;
    querier_address->parent = this;
    subscriber_address->parent = this;

    yang_name = "interface-state-off"; yang_parent_name = "interface-state-offs"; is_top_level_class = false; has_list_ancestor = false; 
}

Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::~InterfaceStateOff()
{
}

bool Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| state.is_set
	|| prefix_length.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_router_enabled.is_set
	|| igmp_version.is_set
	|| host_version.is_set
	|| query_interval.is_set
	|| query_timeout.is_set
	|| query_maximum_response_time.is_set
	|| last_member_query_interval.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| is_querier.is_set
	|| total_active_groups.is_set
	|| robustness.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| las_ll_registration_count.is_set
	|| las_get_address_count.is_set
	|| las_update_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| is_las_request.is_set
	|| is_las_registered.is_set
	|| vrf_id.is_set
	|| mte_vrf_id.is_set
	|| location.is_set
	|| mtu.is_set
	|| vrf_state.is_set
	|| is_configurationverify.is_set
	|| configurationvrf_set.is_set
	|| configurationvrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configuration_mcast_vrf_error.is_set
	|| is_im_state_registered.is_set
	|| is_subscriber.is_set
	|| subscriber_mode.is_set
	|| is_identity_present.is_set
	|| subscriber_id.is_set
	|| parent_ifhandle.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| router_uptime_in_seconds.is_set
	|| mte_tuple_count.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(is_interface_up.yfilter)
	|| ydk::is_set(is_ip_enabled.yfilter)
	|| ydk::is_set(is_router_enabled.yfilter)
	|| ydk::is_set(igmp_version.yfilter)
	|| ydk::is_set(host_version.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| ydk::is_set(query_timeout.yfilter)
	|| ydk::is_set(query_maximum_response_time.yfilter)
	|| ydk::is_set(last_member_query_interval.yfilter)
	|| ydk::is_set(group_joins.yfilter)
	|| ydk::is_set(group_leaves.yfilter)
	|| ydk::is_set(is_querier.yfilter)
	|| ydk::is_set(total_active_groups.yfilter)
	|| ydk::is_set(robustness.yfilter)
	|| ydk::is_set(proxy_interface.yfilter)
	|| ydk::is_set(querier_uptime.yfilter)
	|| ydk::is_set(las_ll_registration_count.yfilter)
	|| ydk::is_set(las_get_address_count.yfilter)
	|| ydk::is_set(las_update_count.yfilter)
	|| ydk::is_set(las_ll_remove_update_count.yfilter)
	|| ydk::is_set(las_ll_add_update_count.yfilter)
	|| ydk::is_set(las_null_update_count.yfilter)
	|| ydk::is_set(las_unregistration_count.yfilter)
	|| ydk::is_set(is_las_request.yfilter)
	|| ydk::is_set(is_las_registered.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(mte_vrf_id.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(vrf_state.yfilter)
	|| ydk::is_set(is_configurationverify.yfilter)
	|| ydk::is_set(configurationvrf_set.yfilter)
	|| ydk::is_set(configurationvrf_error.yfilter)
	|| ydk::is_set(configuration_mcast_vrf_set.yfilter)
	|| ydk::is_set(configuration_mcast_vrf_error.yfilter)
	|| ydk::is_set(is_im_state_registered.yfilter)
	|| ydk::is_set(is_subscriber.yfilter)
	|| ydk::is_set(subscriber_mode.yfilter)
	|| ydk::is_set(is_identity_present.yfilter)
	|| ydk::is_set(subscriber_id.yfilter)
	|| ydk::is_set(parent_ifhandle.yfilter)
	|| ydk::is_set(time_since_last_query_in_seconds.yfilter)
	|| ydk::is_set(time_since_last_report_in_seconds.yfilter)
	|| ydk::is_set(router_uptime_in_seconds.yfilter)
	|| ydk::is_set(mte_tuple_count.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/interface-state-offs/" << get_segment_path();
    return path_buffer.str();
}

std::string Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-off";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.yfilter)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.yfilter)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.yfilter)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.yfilter)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.yfilter)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.yfilter)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.yfilter)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.yfilter)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.yfilter)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.yfilter)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.yfilter)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.yfilter)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.yfilter)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.yfilter)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.yfilter)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.yfilter)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.yfilter)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.yfilter)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.yfilter)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.yfilter)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.yfilter)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.yfilter)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.yfilter)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.yfilter)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.yfilter)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.yfilter)) leaf_name_data.push_back(vrf_state.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.yfilter)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.yfilter)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.yfilter)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.yfilter)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.yfilter)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.yfilter)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.yfilter)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.yfilter)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.yfilter)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.yfilter)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.yfilter)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.yfilter)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.yfilter)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.yfilter)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.yfilter)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(querier_address != nullptr)
    {
        _children["querier-address"] = querier_address;
    }

    if(subscriber_address != nullptr)
    {
        _children["subscriber-address"] = subscriber_address;
    }

    return _children;
}

void Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
        is_interface_up.value_namespace = name_space;
        is_interface_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
        is_ip_enabled.value_namespace = name_space;
        is_ip_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
        is_router_enabled.value_namespace = name_space;
        is_router_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
        igmp_version.value_namespace = name_space;
        igmp_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-version")
    {
        host_version = value;
        host_version.value_namespace = name_space;
        host_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
        query_timeout.value_namespace = name_space;
        query_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
        query_maximum_response_time.value_namespace = name_space;
        query_maximum_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
        last_member_query_interval.value_namespace = name_space;
        last_member_query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
        group_joins.value_namespace = name_space;
        group_joins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
        group_leaves.value_namespace = name_space;
        group_leaves.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
        is_querier.value_namespace = name_space;
        is_querier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
        total_active_groups.value_namespace = name_space;
        total_active_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustness")
    {
        robustness = value;
        robustness.value_namespace = name_space;
        robustness.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
        proxy_interface.value_namespace = name_space;
        proxy_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
        querier_uptime.value_namespace = name_space;
        querier_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
        las_ll_registration_count.value_namespace = name_space;
        las_ll_registration_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
        las_get_address_count.value_namespace = name_space;
        las_get_address_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
        las_update_count.value_namespace = name_space;
        las_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
        las_ll_remove_update_count.value_namespace = name_space;
        las_ll_remove_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
        las_ll_add_update_count.value_namespace = name_space;
        las_ll_add_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
        las_null_update_count.value_namespace = name_space;
        las_null_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
        las_unregistration_count.value_namespace = name_space;
        las_unregistration_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
        is_las_request.value_namespace = name_space;
        is_las_request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
        is_las_registered.value_namespace = name_space;
        is_las_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
        mte_vrf_id.value_namespace = name_space;
        mte_vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
        vrf_state.value_namespace = name_space;
        vrf_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
        is_configurationverify.value_namespace = name_space;
        is_configurationverify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
        configurationvrf_set.value_namespace = name_space;
        configurationvrf_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
        configurationvrf_error.value_namespace = name_space;
        configurationvrf_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
        configuration_mcast_vrf_set.value_namespace = name_space;
        configuration_mcast_vrf_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
        configuration_mcast_vrf_error.value_namespace = name_space;
        configuration_mcast_vrf_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
        is_im_state_registered.value_namespace = name_space;
        is_im_state_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
        is_subscriber.value_namespace = name_space;
        is_subscriber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
        subscriber_mode.value_namespace = name_space;
        subscriber_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
        is_identity_present.value_namespace = name_space;
        is_identity_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
        subscriber_id.value_namespace = name_space;
        subscriber_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
        parent_ifhandle.value_namespace = name_space;
        parent_ifhandle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
        time_since_last_query_in_seconds.value_namespace = name_space;
        time_since_last_query_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
        time_since_last_report_in_seconds.value_namespace = name_space;
        time_since_last_report_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
        router_uptime_in_seconds.value_namespace = name_space;
        router_uptime_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
        mte_tuple_count.value_namespace = name_space;
        mte_tuple_count.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up.yfilter = yfilter;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled.yfilter = yfilter;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled.yfilter = yfilter;
    }
    if(value_path == "igmp-version")
    {
        igmp_version.yfilter = yfilter;
    }
    if(value_path == "host-version")
    {
        host_version.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
    if(value_path == "query-timeout")
    {
        query_timeout.yfilter = yfilter;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time.yfilter = yfilter;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval.yfilter = yfilter;
    }
    if(value_path == "group-joins")
    {
        group_joins.yfilter = yfilter;
    }
    if(value_path == "group-leaves")
    {
        group_leaves.yfilter = yfilter;
    }
    if(value_path == "is-querier")
    {
        is_querier.yfilter = yfilter;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups.yfilter = yfilter;
    }
    if(value_path == "robustness")
    {
        robustness.yfilter = yfilter;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface.yfilter = yfilter;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime.yfilter = yfilter;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count.yfilter = yfilter;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count.yfilter = yfilter;
    }
    if(value_path == "las-update-count")
    {
        las_update_count.yfilter = yfilter;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count.yfilter = yfilter;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count.yfilter = yfilter;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count.yfilter = yfilter;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count.yfilter = yfilter;
    }
    if(value_path == "is-las-request")
    {
        is_las_request.yfilter = yfilter;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "vrf-state")
    {
        vrf_state.yfilter = yfilter;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify.yfilter = yfilter;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set.yfilter = yfilter;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error.yfilter = yfilter;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set.yfilter = yfilter;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error.yfilter = yfilter;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered.yfilter = yfilter;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber.yfilter = yfilter;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode.yfilter = yfilter;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present.yfilter = yfilter;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id.yfilter = yfilter;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle.yfilter = yfilter;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds.yfilter = yfilter;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds.yfilter = yfilter;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "querier-address" || name == "subscriber-address" || name == "interface-name" || name == "interface-name-xr" || name == "state" || name == "prefix-length" || name == "is-interface-up" || name == "is-ip-enabled" || name == "is-router-enabled" || name == "igmp-version" || name == "host-version" || name == "query-interval" || name == "query-timeout" || name == "query-maximum-response-time" || name == "last-member-query-interval" || name == "group-joins" || name == "group-leaves" || name == "is-querier" || name == "total-active-groups" || name == "robustness" || name == "proxy-interface" || name == "querier-uptime" || name == "las-ll-registration-count" || name == "las-get-address-count" || name == "las-update-count" || name == "las-ll-remove-update-count" || name == "las-ll-add-update-count" || name == "las-null-update-count" || name == "las-unregistration-count" || name == "is-las-request" || name == "is-las-registered" || name == "vrf-id" || name == "mte-vrf-id" || name == "location" || name == "mtu" || name == "vrf-state" || name == "is-configurationverify" || name == "configurationvrf-set" || name == "configurationvrf-error" || name == "configuration-mcast-vrf-set" || name == "configuration-mcast-vrf-error" || name == "is-im-state-registered" || name == "is-subscriber" || name == "subscriber-mode" || name == "is-identity-present" || name == "subscriber-id" || name == "parent-ifhandle" || name == "time-since-last-query-in-seconds" || name == "time-since-last-report-in-seconds" || name == "router-uptime-in-seconds" || name == "mte-tuple-count")
        return true;
    return false;
}

Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "interface-state-off"; is_top_level_class = false; has_list_ancestor = true; 
}

Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::~Address()
{
}

bool Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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
}

void Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "querier-address"; yang_parent_name = "interface-state-off"; is_top_level_class = false; has_list_ancestor = true; 
}

Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::~QuerierAddress()
{
}

bool Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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
}

void Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "subscriber-address"; yang_parent_name = "interface-state-off"; is_top_level_class = false; has_list_ancestor = true; 
}

Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::~SubscriberAddress()
{
}

bool Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
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
}

void Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}


}
}

