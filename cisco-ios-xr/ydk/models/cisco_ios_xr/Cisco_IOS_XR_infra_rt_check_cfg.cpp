
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_rt_check_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_rt_check_cfg {

Rcc::Rcc()
    :
    ipv6(std::make_shared<Rcc::Ipv6>())
    , ipv4(std::make_shared<Rcc::Ipv4>())
{
    ipv6->parent = this;
    ipv4->parent = this;

    yang_name = "rcc"; yang_parent_name = "Cisco-IOS-XR-infra-rt-check-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Rcc::~Rcc()
{
}

bool Rcc::has_data() const
{
    if (is_presence_container) return true;
    return (ipv6 !=  nullptr && ipv6->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool Rcc::has_operation() const
{
    return is_set(yfilter)
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Rcc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rt-check-cfg:rcc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Rcc::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Rcc::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    return _children;
}

void Rcc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Rcc::clone_ptr() const
{
    return std::make_shared<Rcc>();
}

std::string Rcc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Rcc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Rcc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Rcc::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Rcc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "ipv4")
        return true;
    return false;
}

Rcc::Ipv6::Ipv6()
    :
    lcc(std::make_shared<Rcc::Ipv6::Lcc>())
    , unicast(std::make_shared<Rcc::Ipv6::Unicast>())
    , multicast(std::make_shared<Rcc::Ipv6::Multicast>())
{
    lcc->parent = this;
    unicast->parent = this;
    multicast->parent = this;

    yang_name = "ipv6"; yang_parent_name = "rcc"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcc::Ipv6::~Ipv6()
{
}

bool Rcc::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return (lcc !=  nullptr && lcc->has_data())
	|| (unicast !=  nullptr && unicast->has_data())
	|| (multicast !=  nullptr && multicast->has_data());
}

bool Rcc::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (lcc !=  nullptr && lcc->has_operation())
	|| (unicast !=  nullptr && unicast->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation());
}

std::string Rcc::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rt-check-cfg:rcc/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcc::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcc::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcc::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lcc")
    {
        if(lcc == nullptr)
        {
            lcc = std::make_shared<Rcc::Ipv6::Lcc>();
        }
        return lcc;
    }

    if(child_yang_name == "unicast")
    {
        if(unicast == nullptr)
        {
            unicast = std::make_shared<Rcc::Ipv6::Unicast>();
        }
        return unicast;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Rcc::Ipv6::Multicast>();
        }
        return multicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcc::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lcc != nullptr)
    {
        _children["lcc"] = lcc;
    }

    if(unicast != nullptr)
    {
        _children["unicast"] = unicast;
    }

    if(multicast != nullptr)
    {
        _children["multicast"] = multicast;
    }

    return _children;
}

void Rcc::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcc::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcc::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lcc" || name == "unicast" || name == "multicast")
        return true;
    return false;
}

Rcc::Ipv6::Lcc::Lcc()
    :
    period{YType::uint32, "period"},
    enable{YType::empty, "enable"}
{

    yang_name = "lcc"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcc::Ipv6::Lcc::~Lcc()
{
}

bool Rcc::Ipv6::Lcc::has_data() const
{
    if (is_presence_container) return true;
    return period.is_set
	|| enable.is_set;
}

bool Rcc::Ipv6::Lcc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Rcc::Ipv6::Lcc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rt-check-cfg:rcc/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcc::Ipv6::Lcc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lcc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcc::Ipv6::Lcc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcc::Ipv6::Lcc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcc::Ipv6::Lcc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcc::Ipv6::Lcc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Rcc::Ipv6::Lcc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Rcc::Ipv6::Lcc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "period" || name == "enable")
        return true;
    return false;
}

Rcc::Ipv6::Unicast::Unicast()
    :
    period{YType::uint32, "period"},
    enable{YType::empty, "enable"}
{

    yang_name = "unicast"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcc::Ipv6::Unicast::~Unicast()
{
}

bool Rcc::Ipv6::Unicast::has_data() const
{
    if (is_presence_container) return true;
    return period.is_set
	|| enable.is_set;
}

bool Rcc::Ipv6::Unicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Rcc::Ipv6::Unicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rt-check-cfg:rcc/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcc::Ipv6::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcc::Ipv6::Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcc::Ipv6::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcc::Ipv6::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcc::Ipv6::Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Rcc::Ipv6::Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Rcc::Ipv6::Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "period" || name == "enable")
        return true;
    return false;
}

Rcc::Ipv6::Multicast::Multicast()
    :
    period{YType::uint32, "period"},
    enable{YType::empty, "enable"}
{

    yang_name = "multicast"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcc::Ipv6::Multicast::~Multicast()
{
}

bool Rcc::Ipv6::Multicast::has_data() const
{
    if (is_presence_container) return true;
    return period.is_set
	|| enable.is_set;
}

bool Rcc::Ipv6::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Rcc::Ipv6::Multicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rt-check-cfg:rcc/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcc::Ipv6::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcc::Ipv6::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcc::Ipv6::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcc::Ipv6::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcc::Ipv6::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Rcc::Ipv6::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Rcc::Ipv6::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "period" || name == "enable")
        return true;
    return false;
}

Rcc::Ipv4::Ipv4()
    :
    lcc(std::make_shared<Rcc::Ipv4::Lcc>())
    , unicast(std::make_shared<Rcc::Ipv4::Unicast>())
    , multicast(std::make_shared<Rcc::Ipv4::Multicast>())
{
    lcc->parent = this;
    unicast->parent = this;
    multicast->parent = this;

    yang_name = "ipv4"; yang_parent_name = "rcc"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcc::Ipv4::~Ipv4()
{
}

bool Rcc::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return (lcc !=  nullptr && lcc->has_data())
	|| (unicast !=  nullptr && unicast->has_data())
	|| (multicast !=  nullptr && multicast->has_data());
}

bool Rcc::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (lcc !=  nullptr && lcc->has_operation())
	|| (unicast !=  nullptr && unicast->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation());
}

std::string Rcc::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rt-check-cfg:rcc/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcc::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcc::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcc::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lcc")
    {
        if(lcc == nullptr)
        {
            lcc = std::make_shared<Rcc::Ipv4::Lcc>();
        }
        return lcc;
    }

    if(child_yang_name == "unicast")
    {
        if(unicast == nullptr)
        {
            unicast = std::make_shared<Rcc::Ipv4::Unicast>();
        }
        return unicast;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Rcc::Ipv4::Multicast>();
        }
        return multicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcc::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lcc != nullptr)
    {
        _children["lcc"] = lcc;
    }

    if(unicast != nullptr)
    {
        _children["unicast"] = unicast;
    }

    if(multicast != nullptr)
    {
        _children["multicast"] = multicast;
    }

    return _children;
}

void Rcc::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcc::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcc::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lcc" || name == "unicast" || name == "multicast")
        return true;
    return false;
}

Rcc::Ipv4::Lcc::Lcc()
    :
    period{YType::uint32, "period"},
    enable{YType::empty, "enable"}
{

    yang_name = "lcc"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcc::Ipv4::Lcc::~Lcc()
{
}

bool Rcc::Ipv4::Lcc::has_data() const
{
    if (is_presence_container) return true;
    return period.is_set
	|| enable.is_set;
}

bool Rcc::Ipv4::Lcc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Rcc::Ipv4::Lcc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rt-check-cfg:rcc/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcc::Ipv4::Lcc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lcc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcc::Ipv4::Lcc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcc::Ipv4::Lcc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcc::Ipv4::Lcc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcc::Ipv4::Lcc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Rcc::Ipv4::Lcc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Rcc::Ipv4::Lcc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "period" || name == "enable")
        return true;
    return false;
}

Rcc::Ipv4::Unicast::Unicast()
    :
    period{YType::uint32, "period"},
    enable{YType::empty, "enable"}
{

    yang_name = "unicast"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcc::Ipv4::Unicast::~Unicast()
{
}

bool Rcc::Ipv4::Unicast::has_data() const
{
    if (is_presence_container) return true;
    return period.is_set
	|| enable.is_set;
}

bool Rcc::Ipv4::Unicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Rcc::Ipv4::Unicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rt-check-cfg:rcc/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcc::Ipv4::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcc::Ipv4::Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcc::Ipv4::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcc::Ipv4::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcc::Ipv4::Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Rcc::Ipv4::Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Rcc::Ipv4::Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "period" || name == "enable")
        return true;
    return false;
}

Rcc::Ipv4::Multicast::Multicast()
    :
    period{YType::uint32, "period"},
    enable{YType::empty, "enable"}
{

    yang_name = "multicast"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcc::Ipv4::Multicast::~Multicast()
{
}

bool Rcc::Ipv4::Multicast::has_data() const
{
    if (is_presence_container) return true;
    return period.is_set
	|| enable.is_set;
}

bool Rcc::Ipv4::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Rcc::Ipv4::Multicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rt-check-cfg:rcc/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcc::Ipv4::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcc::Ipv4::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcc::Ipv4::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcc::Ipv4::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcc::Ipv4::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Rcc::Ipv4::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Rcc::Ipv4::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "period" || name == "enable")
        return true;
    return false;
}


}
}

