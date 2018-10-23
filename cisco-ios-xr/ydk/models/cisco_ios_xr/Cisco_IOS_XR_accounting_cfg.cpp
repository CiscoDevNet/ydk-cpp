
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_accounting_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_accounting_cfg {

Accounting::Accounting()
    :
    enable{YType::empty, "enable"}
        ,
    interfaces(std::make_shared<Accounting::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "accounting"; yang_parent_name = "Cisco-IOS-XR-accounting-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Accounting::~Accounting()
{
}

bool Accounting::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-accounting-cfg:accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Accounting::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> Accounting::clone_ptr() const
{
    return std::make_shared<Accounting>();
}

std::string Accounting::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Accounting::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Accounting::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Accounting::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "enable")
        return true;
    return false;
}

Accounting::Interfaces::Interfaces()
    :
    enable{YType::empty, "enable"}
        ,
    mpls(std::make_shared<Accounting::Interfaces::Mpls>())
    , segment_routing(std::make_shared<Accounting::Interfaces::SegmentRouting>())
{
    mpls->parent = this;
    segment_routing->parent = this;

    yang_name = "interfaces"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false; 
}

Accounting::Interfaces::~Interfaces()
{
}

bool Accounting::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (mpls !=  nullptr && mpls->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data());
}

bool Accounting::Interfaces::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation());
}

std::string Accounting::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-accounting-cfg:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Accounting::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Accounting::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Accounting::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Accounting::Interfaces::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Accounting::Interfaces::SegmentRouting>();
        }
        return segment_routing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Accounting::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    if(segment_routing != nullptr)
    {
        _children["segment-routing"] = segment_routing;
    }

    return _children;
}

void Accounting::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Accounting::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Accounting::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls" || name == "segment-routing" || name == "enable")
        return true;
    return false;
}

Accounting::Interfaces::Mpls::Mpls()
    :
    enable{YType::empty, "enable"},
    enable_v4rsvpte{YType::empty, "enable-v4rsvpte"}
{

    yang_name = "mpls"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Accounting::Interfaces::Mpls::~Mpls()
{
}

bool Accounting::Interfaces::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| enable_v4rsvpte.is_set;
}

bool Accounting::Interfaces::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(enable_v4rsvpte.yfilter);
}

std::string Accounting::Interfaces::Mpls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-accounting-cfg:accounting/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Accounting::Interfaces::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Accounting::Interfaces::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (enable_v4rsvpte.is_set || is_set(enable_v4rsvpte.yfilter)) leaf_name_data.push_back(enable_v4rsvpte.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Accounting::Interfaces::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Accounting::Interfaces::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Accounting::Interfaces::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-v4rsvpte")
    {
        enable_v4rsvpte = value;
        enable_v4rsvpte.value_namespace = name_space;
        enable_v4rsvpte.value_namespace_prefix = name_space_prefix;
    }
}

void Accounting::Interfaces::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "enable-v4rsvpte")
    {
        enable_v4rsvpte.yfilter = yfilter;
    }
}

bool Accounting::Interfaces::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "enable-v4rsvpte")
        return true;
    return false;
}

Accounting::Interfaces::SegmentRouting::SegmentRouting()
    :
    enable{YType::empty, "enable"},
    enable_mplsv4{YType::empty, "enable-mplsv4"},
    enable_mplsv6{YType::empty, "enable-mplsv6"}
{

    yang_name = "segment-routing"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Accounting::Interfaces::SegmentRouting::~SegmentRouting()
{
}

bool Accounting::Interfaces::SegmentRouting::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| enable_mplsv4.is_set
	|| enable_mplsv6.is_set;
}

bool Accounting::Interfaces::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(enable_mplsv4.yfilter)
	|| ydk::is_set(enable_mplsv6.yfilter);
}

std::string Accounting::Interfaces::SegmentRouting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-accounting-cfg:accounting/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Accounting::Interfaces::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Accounting::Interfaces::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (enable_mplsv4.is_set || is_set(enable_mplsv4.yfilter)) leaf_name_data.push_back(enable_mplsv4.get_name_leafdata());
    if (enable_mplsv6.is_set || is_set(enable_mplsv6.yfilter)) leaf_name_data.push_back(enable_mplsv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Accounting::Interfaces::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Accounting::Interfaces::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Accounting::Interfaces::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-mplsv4")
    {
        enable_mplsv4 = value;
        enable_mplsv4.value_namespace = name_space;
        enable_mplsv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-mplsv6")
    {
        enable_mplsv6 = value;
        enable_mplsv6.value_namespace = name_space;
        enable_mplsv6.value_namespace_prefix = name_space_prefix;
    }
}

void Accounting::Interfaces::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "enable-mplsv4")
    {
        enable_mplsv4.yfilter = yfilter;
    }
    if(value_path == "enable-mplsv6")
    {
        enable_mplsv6.yfilter = yfilter;
    }
}

bool Accounting::Interfaces::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "enable-mplsv4" || name == "enable-mplsv6")
        return true;
    return false;
}


}
}

