
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_131.hpp"
#include "Cisco_IOS_XE_native_132.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Metric()
    :
    bgp(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp>())
    , eigrp(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp>())
    , static_(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static>())
{
    bgp->parent = this;
    eigrp->parent = this;
    static_->parent = this;

    yang_name = "metric"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::~Metric()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::has_data() const
{
    if (is_presence_container) return true;
    return (bgp !=  nullptr && bgp->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::has_operation() const
{
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp>();
        }
        return eigrp;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    if(eigrp != nullptr)
    {
        _children["eigrp"] = eigrp;
    }

    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "eigrp" || name == "static")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::Bgp()
    :
    local_pref{YType::uint16, "local-pref"}
{

    yang_name = "bgp"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::~Bgp()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return local_pref.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_pref.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/route/metric/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-pref")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::Eigrp()
    :
    tag{YType::uint16, "tag"}
{

    yang_name = "eigrp"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::~Eigrp()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/route/metric/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static::Static()
    :
    tag{YType::uint16, "tag"}
{

    yang_name = "static"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static::~Static()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/route/metric/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::Protocol()
    :
    pbr{YType::empty, "pbr"}
{

    yang_name = "protocol"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::~Protocol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return pbr.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbr.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbr.is_set || is_set(pbr.yfilter)) leaf_name_data.push_back(pbr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbr")
    {
        pbr = value;
        pbr.value_namespace = name_space;
        pbr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbr")
    {
        pbr.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbr")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::Verify()
    :
    bidirectional{YType::empty, "bidirectional"}
{

    yang_name = "verify"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::~Verify()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::has_data() const
{
    if (is_presence_container) return true;
    return bidirectional.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bidirectional.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bidirectional.is_set || is_set(bidirectional.yfilter)) leaf_name_data.push_back(bidirectional.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bidirectional")
    {
        bidirectional = value;
        bidirectional.value_namespace = name_space;
        bidirectional.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bidirectional")
    {
        bidirectional.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bidirectional")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Mos()
    :
    threshold(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold>())
{
    threshold->parent = this;

    yang_name = "mos"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::~Mos()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::has_data() const
{
    if (is_presence_container) return true;
    return (threshold !=  nullptr && threshold->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::Threshold()
    :
    mos_thresh(this, {"mos_thresh"})
{

    yang_name = "threshold"; yang_parent_name = "mos"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::~Threshold()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mos_thresh.len(); index++)
    {
        if(mos_thresh[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::has_operation() const
{
    for (std::size_t index=0; index<mos_thresh.len(); index++)
    {
        if(mos_thresh[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mos/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mos-thresh")
    {
        auto ent_ = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh>();
        ent_->parent = this;
        mos_thresh.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mos_thresh.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mos-thresh")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::MosThresh()
    :
    mos_thresh{YType::str, "mos-thresh"},
    percent{YType::uint8, "percent"}
{

    yang_name = "mos-thresh"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::~MosThresh()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::has_data() const
{
    if (is_presence_container) return true;
    return mos_thresh.is_set
	|| percent.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mos_thresh.yfilter)
	|| ydk::is_set(percent.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mos/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mos-thresh";
    ADD_KEY_TOKEN(mos_thresh, "mos-thresh");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mos_thresh.is_set || is_set(mos_thresh.yfilter)) leaf_name_data.push_back(mos_thresh.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mos-thresh")
    {
        mos_thresh = value;
        mos_thresh.value_namespace = name_space;
        mos_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mos-thresh")
    {
        mos_thresh.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mos-thresh" || name == "percent")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::Probe()
    :
    packets{YType::uint8, "packets"}
{

    yang_name = "probe"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::~Probe()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Resolve()
    :
    cost{YType::empty, "cost"},
    equivalent_path_round_robin{YType::empty, "equivalent-path-round-robin"}
        ,
    delay(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay>())
    , jitter(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter>())
    , loss(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss>())
    , mos(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos>())
{
    delay->parent = this;
    jitter->parent = this;
    loss->parent = this;
    mos->parent = this;

    yang_name = "resolve"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::~Resolve()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::has_data() const
{
    if (is_presence_container) return true;
    return cost.is_set
	|| equivalent_path_round_robin.is_set
	|| (delay !=  nullptr && delay->has_data())
	|| (jitter !=  nullptr && jitter->has_data())
	|| (loss !=  nullptr && loss->has_data())
	|| (mos !=  nullptr && mos->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(equivalent_path_round_robin.yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (jitter !=  nullptr && jitter->has_operation())
	|| (loss !=  nullptr && loss->has_operation())
	|| (mos !=  nullptr && mos->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resolve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (equivalent_path_round_robin.is_set || is_set(equivalent_path_round_robin.yfilter)) leaf_name_data.push_back(equivalent_path_round_robin.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "jitter")
    {
        if(jitter == nullptr)
        {
            jitter = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter>();
        }
        return jitter;
    }

    if(child_yang_name == "loss")
    {
        if(loss == nullptr)
        {
            loss = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss>();
        }
        return loss;
    }

    if(child_yang_name == "mos")
    {
        if(mos == nullptr)
        {
            mos = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos>();
        }
        return mos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    if(jitter != nullptr)
    {
        _children["jitter"] = jitter;
    }

    if(loss != nullptr)
    {
        _children["loss"] = loss;
    }

    if(mos != nullptr)
    {
        _children["mos"] = mos;
    }

    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "equivalent-path-round-robin")
    {
        equivalent_path_round_robin = value;
        equivalent_path_round_robin.value_namespace = name_space;
        equivalent_path_round_robin.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "equivalent-path-round-robin")
    {
        equivalent_path_round_robin.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "jitter" || name == "loss" || name == "mos" || name == "cost" || name == "equivalent-path-round-robin")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Delay()
    :
    priority(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority>())
{
    priority->parent = this;

    yang_name = "delay"; yang_parent_name = "resolve"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::~Delay()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::has_data() const
{
    if (is_presence_container) return true;
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::Priority()
    :
    del_pol(this, {"del_pol"})
{

    yang_name = "priority"; yang_parent_name = "delay"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::~Priority()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<del_pol.len(); index++)
    {
        if(del_pol[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::has_operation() const
{
    for (std::size_t index=0; index<del_pol.len(); index++)
    {
        if(del_pol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/delay/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "del-pol")
    {
        auto ent_ = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol>();
        ent_->parent = this;
        del_pol.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : del_pol.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "del-pol")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::DelPol()
    :
    del_pol{YType::uint8, "del-pol"},
    variance{YType::uint8, "variance"}
{

    yang_name = "del-pol"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::~DelPol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::has_data() const
{
    if (is_presence_container) return true;
    return del_pol.is_set
	|| variance.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(del_pol.yfilter)
	|| ydk::is_set(variance.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/delay/priority/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "del-pol";
    ADD_KEY_TOKEN(del_pol, "del-pol");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (del_pol.is_set || is_set(del_pol.yfilter)) leaf_name_data.push_back(del_pol.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "del-pol")
    {
        del_pol = value;
        del_pol.value_namespace = name_space;
        del_pol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "del-pol")
    {
        del_pol.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "del-pol" || name == "variance")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Jitter()
    :
    priority(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority>())
{
    priority->parent = this;

    yang_name = "jitter"; yang_parent_name = "resolve"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::~Jitter()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::has_data() const
{
    if (is_presence_container) return true;
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jitter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::Priority()
    :
    jit_pol(this, {"jit_pol"})
{

    yang_name = "priority"; yang_parent_name = "jitter"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::~Priority()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<jit_pol.len(); index++)
    {
        if(jit_pol[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::has_operation() const
{
    for (std::size_t index=0; index<jit_pol.len(); index++)
    {
        if(jit_pol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/jitter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "jit-pol")
    {
        auto ent_ = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol>();
        ent_->parent = this;
        jit_pol.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : jit_pol.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "jit-pol")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::JitPol()
    :
    jit_pol{YType::uint8, "jit-pol"},
    variance{YType::uint8, "variance"}
{

    yang_name = "jit-pol"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::~JitPol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::has_data() const
{
    if (is_presence_container) return true;
    return jit_pol.is_set
	|| variance.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(jit_pol.yfilter)
	|| ydk::is_set(variance.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/jitter/priority/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jit-pol";
    ADD_KEY_TOKEN(jit_pol, "jit-pol");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (jit_pol.is_set || is_set(jit_pol.yfilter)) leaf_name_data.push_back(jit_pol.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "jit-pol")
    {
        jit_pol = value;
        jit_pol.value_namespace = name_space;
        jit_pol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "jit-pol")
    {
        jit_pol.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "jit-pol" || name == "variance")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Loss()
    :
    priority(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority>())
{
    priority->parent = this;

    yang_name = "loss"; yang_parent_name = "resolve"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::~Loss()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::has_data() const
{
    if (is_presence_container) return true;
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::Priority()
    :
    loss_pol(this, {"loss_pol"})
{

    yang_name = "priority"; yang_parent_name = "loss"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::~Priority()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<loss_pol.len(); index++)
    {
        if(loss_pol[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::has_operation() const
{
    for (std::size_t index=0; index<loss_pol.len(); index++)
    {
        if(loss_pol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/loss/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "loss-pol")
    {
        auto ent_ = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol>();
        ent_->parent = this;
        loss_pol.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : loss_pol.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loss-pol")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::LossPol()
    :
    loss_pol{YType::uint8, "loss-pol"},
    variance{YType::uint8, "variance"}
{

    yang_name = "loss-pol"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::~LossPol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::has_data() const
{
    if (is_presence_container) return true;
    return loss_pol.is_set
	|| variance.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loss_pol.yfilter)
	|| ydk::is_set(variance.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/loss/priority/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loss-pol";
    ADD_KEY_TOKEN(loss_pol, "loss-pol");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loss_pol.is_set || is_set(loss_pol.yfilter)) leaf_name_data.push_back(loss_pol.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loss-pol")
    {
        loss_pol = value;
        loss_pol.value_namespace = name_space;
        loss_pol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loss-pol")
    {
        loss_pol.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loss-pol" || name == "variance")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Mos()
    :
    priority(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority>())
{
    priority->parent = this;

    yang_name = "mos"; yang_parent_name = "resolve"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::~Mos()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::has_data() const
{
    if (is_presence_container) return true;
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::Priority()
    :
    mos_pol(this, {"mos_pol"})
{

    yang_name = "priority"; yang_parent_name = "mos"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::~Priority()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mos_pol.len(); index++)
    {
        if(mos_pol[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::has_operation() const
{
    for (std::size_t index=0; index<mos_pol.len(); index++)
    {
        if(mos_pol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/mos/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mos-pol")
    {
        auto ent_ = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol>();
        ent_->parent = this;
        mos_pol.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mos_pol.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mos-pol")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::MosPol()
    :
    mos_pol{YType::uint8, "mos-pol"},
    variance{YType::uint8, "variance"}
{

    yang_name = "mos-pol"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::~MosPol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::has_data() const
{
    if (is_presence_container) return true;
    return mos_pol.is_set
	|| variance.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mos_pol.yfilter)
	|| ydk::is_set(variance.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/mos/priority/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mos-pol";
    ADD_KEY_TOKEN(mos_pol, "mos-pol");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mos_pol.is_set || is_set(mos_pol.yfilter)) leaf_name_data.push_back(mos_pol.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mos-pol")
    {
        mos_pol = value;
        mos_pol.value_namespace = name_space;
        mos_pol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mos-pol")
    {
        mos_pol.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mos-pol" || name == "variance")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::Rsvp()
    :
    post_dial_delay{YType::uint16, "post-dial-delay"},
    signaling_retries{YType::uint8, "signaling-retries"}
{

    yang_name = "rsvp"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::~Rsvp()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::has_data() const
{
    if (is_presence_container) return true;
    return post_dial_delay.is_set
	|| signaling_retries.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(post_dial_delay.yfilter)
	|| ydk::is_set(signaling_retries.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (post_dial_delay.is_set || is_set(post_dial_delay.yfilter)) leaf_name_data.push_back(post_dial_delay.get_name_leafdata());
    if (signaling_retries.is_set || is_set(signaling_retries.yfilter)) leaf_name_data.push_back(signaling_retries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "post-dial-delay")
    {
        post_dial_delay = value;
        post_dial_delay.value_namespace = name_space;
        post_dial_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-retries")
    {
        signaling_retries = value;
        signaling_retries.value_namespace = name_space;
        signaling_retries.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "post-dial-delay")
    {
        post_dial_delay.yfilter = yfilter;
    }
    if(value_path == "signaling-retries")
    {
        signaling_retries.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "post-dial-delay" || name == "signaling-retries")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::TargetDiscovery()
    :
    responder_list(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList>())
{
    responder_list->parent = this;

    yang_name = "target-discovery"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::~TargetDiscovery()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::has_data() const
{
    if (is_presence_container) return true;
    return (responder_list !=  nullptr && responder_list->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| (responder_list !=  nullptr && responder_list->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "responder-list")
    {
        if(responder_list == nullptr)
        {
            responder_list = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList>();
        }
        return responder_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(responder_list != nullptr)
    {
        _children["responder-list"] = responder_list;
    }

    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "responder-list")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::ResponderList()
    :
    td_num(this, {"td_num"})
{

    yang_name = "responder-list"; yang_parent_name = "target-discovery"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::~ResponderList()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<td_num.len(); index++)
    {
        if(td_num[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::has_operation() const
{
    for (std::size_t index=0; index<td_num.len(); index++)
    {
        if(td_num[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/target-discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "responder-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "td-num")
    {
        auto ent_ = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum>();
        ent_->parent = this;
        td_num.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : td_num.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "td-num")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::TdNum()
    :
    td_num{YType::str, "td-num"},
    inside_prefixes{YType::str, "inside-prefixes"}
{

    yang_name = "td-num"; yang_parent_name = "responder-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::~TdNum()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::has_data() const
{
    if (is_presence_container) return true;
    return td_num.is_set
	|| inside_prefixes.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(td_num.yfilter)
	|| ydk::is_set(inside_prefixes.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/target-discovery/responder-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "td-num";
    ADD_KEY_TOKEN(td_num, "td-num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (td_num.is_set || is_set(td_num.yfilter)) leaf_name_data.push_back(td_num.get_name_leafdata());
    if (inside_prefixes.is_set || is_set(inside_prefixes.yfilter)) leaf_name_data.push_back(inside_prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "td-num")
    {
        td_num = value;
        td_num.value_namespace = name_space;
        td_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inside-prefixes")
    {
        inside_prefixes = value;
        inside_prefixes.value_namespace = name_space;
        inside_prefixes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "td-num")
    {
        td_num.yfilter = yfilter;
    }
    if(value_path == "inside-prefixes")
    {
        inside_prefixes.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "td-num" || name == "inside-prefixes")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::Traceroute()
    :
    probe_delay{YType::uint16, "probe-delay"}
{

    yang_name = "traceroute"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::~Traceroute()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::has_data() const
{
    if (is_presence_container) return true;
    return probe_delay.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(probe_delay.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traceroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (probe_delay.is_set || is_set(probe_delay.yfilter)) leaf_name_data.push_back(probe_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "probe-delay")
    {
        probe_delay = value;
        probe_delay.value_namespace = name_space;
        probe_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "probe-delay")
    {
        probe_delay.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probe-delay")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::Unreachable()
    :
    relative{YType::uint16, "relative"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "unreachable"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::~Unreachable()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::has_data() const
{
    if (is_presence_container) return true;
    return relative.is_set
	|| threshold.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(relative.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreachable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (relative.is_set || is_set(relative.yfilter)) leaf_name_data.push_back(relative.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "relative")
    {
        relative = value;
        relative.value_namespace = name_space;
        relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "relative")
    {
        relative.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relative" || name == "threshold")
        return true;
    return false;
}

Native::PfrMap::PfrMap()
    :
    pfr_tg{YType::str, "pfr-tg"}
        ,
    match(std::make_shared<Native::PfrMap::Match>())
    , set(std::make_shared<Native::PfrMap::Set>())
{
    match->parent = this;
    set->parent = this;

    yang_name = "pfr-map"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::PfrMap::~PfrMap()
{
}

bool Native::PfrMap::has_data() const
{
    if (is_presence_container) return true;
    return pfr_tg.is_set
	|| (match !=  nullptr && match->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::PfrMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfr_tg.yfilter)
	|| (match !=  nullptr && match->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::PfrMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PfrMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfr-map";
    ADD_KEY_TOKEN(pfr_tg, "pfr-tg");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfr_tg.is_set || is_set(pfr_tg.yfilter)) leaf_name_data.push_back(pfr_tg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PfrMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-pfr:match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::PfrMap::Match>();
        }
        return match;
    }

    if(child_yang_name == "Cisco-IOS-XE-pfr:set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::PfrMap::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PfrMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(match != nullptr)
    {
        _children["Cisco-IOS-XE-pfr:match"] = match;
    }

    if(set != nullptr)
    {
        _children["Cisco-IOS-XE-pfr:set"] = set;
    }

    return _children;
}

void Native::PfrMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfr-tg")
    {
        pfr_tg = value;
        pfr_tg.value_namespace = name_space;
        pfr_tg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfr-tg")
    {
        pfr_tg.yfilter = yfilter;
    }
}

bool Native::PfrMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "set" || name == "pfr-tg")
        return true;
    return false;
}

Native::PfrMap::Match::Match()
    :
    ip(std::make_shared<Native::PfrMap::Match::Ip>())
    , pfr(std::make_shared<Native::PfrMap::Match::Pfr>())
    , traffic_class(std::make_shared<Native::PfrMap::Match::TrafficClass>())
{
    ip->parent = this;
    pfr->parent = this;
    traffic_class->parent = this;

    yang_name = "match"; yang_parent_name = "pfr-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PfrMap::Match::~Match()
{
}

bool Native::PfrMap::Match::has_data() const
{
    if (is_presence_container) return true;
    return (ip !=  nullptr && ip->has_data())
	|| (pfr !=  nullptr && pfr->has_data())
	|| (traffic_class !=  nullptr && traffic_class->has_data());
}

bool Native::PfrMap::Match::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (pfr !=  nullptr && pfr->has_operation())
	|| (traffic_class !=  nullptr && traffic_class->has_operation());
}

std::string Native::PfrMap::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-pfr:match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PfrMap::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::PfrMap::Match::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "pfr")
    {
        if(pfr == nullptr)
        {
            pfr = std::make_shared<Native::PfrMap::Match::Pfr>();
        }
        return pfr;
    }

    if(child_yang_name == "traffic-class")
    {
        if(traffic_class == nullptr)
        {
            traffic_class = std::make_shared<Native::PfrMap::Match::TrafficClass>();
        }
        return traffic_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PfrMap::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(pfr != nullptr)
    {
        _children["pfr"] = pfr;
    }

    if(traffic_class != nullptr)
    {
        _children["traffic-class"] = traffic_class;
    }

    return _children;
}

void Native::PfrMap::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "pfr" || name == "traffic-class")
        return true;
    return false;
}

Native::PfrMap::Match::Ip::Ip()
    :
    address{YType::empty, "address"}
{

    yang_name = "ip"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PfrMap::Match::Ip::~Ip()
{
}

bool Native::PfrMap::Match::Ip::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::PfrMap::Match::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::PfrMap::Match::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Match::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PfrMap::Match::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PfrMap::Match::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PfrMap::Match::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Match::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::PfrMap::Match::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::PfrMap::Match::Pfr::Pfr()
    :
    learn{YType::empty, "learn"}
{

    yang_name = "pfr"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PfrMap::Match::Pfr::~Pfr()
{
}

bool Native::PfrMap::Match::Pfr::has_data() const
{
    if (is_presence_container) return true;
    return learn.is_set;
}

bool Native::PfrMap::Match::Pfr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(learn.yfilter);
}

std::string Native::PfrMap::Match::Pfr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Match::Pfr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (learn.is_set || is_set(learn.yfilter)) leaf_name_data.push_back(learn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PfrMap::Match::Pfr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PfrMap::Match::Pfr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PfrMap::Match::Pfr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "learn")
    {
        learn = value;
        learn.value_namespace = name_space;
        learn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Match::Pfr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "learn")
    {
        learn.yfilter = yfilter;
    }
}

bool Native::PfrMap::Match::Pfr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "learn")
        return true;
    return false;
}

Native::PfrMap::Match::TrafficClass::TrafficClass()
    :
    access_list{YType::empty, "access-list"},
    application{YType::empty, "application"},
    prefix_list{YType::empty, "prefix-list"}
{

    yang_name = "traffic-class"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PfrMap::Match::TrafficClass::~TrafficClass()
{
}

bool Native::PfrMap::Match::TrafficClass::has_data() const
{
    if (is_presence_container) return true;
    return access_list.is_set
	|| application.is_set
	|| prefix_list.is_set;
}

bool Native::PfrMap::Match::TrafficClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(application.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::PfrMap::Match::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Match::TrafficClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (application.is_set || is_set(application.yfilter)) leaf_name_data.push_back(application.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PfrMap::Match::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PfrMap::Match::TrafficClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PfrMap::Match::TrafficClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application")
    {
        application = value;
        application.value_namespace = name_space;
        application.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Match::TrafficClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "application")
    {
        application.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::PfrMap::Match::TrafficClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "application" || name == "prefix-list")
        return true;
    return false;
}

Native::PfrMap::Set::Set()
    :
    holddown{YType::uint16, "holddown"},
    interface{YType::str, "interface"},
    jitter{YType::empty, "jitter"},
    mode{YType::empty, "mode"},
    mos{YType::empty, "mos"},
    next_hop{YType::empty, "next-hop"},
    periodic{YType::empty, "periodic"},
    probe{YType::empty, "probe"},
    resolve{YType::empty, "resolve"},
    traceroute{YType::empty, "traceroute"},
    trap_enable{YType::empty, "trap-enable"},
    trigger_log_percentage{YType::empty, "trigger-log-percentage"},
    unreachable{YType::empty, "unreachable"}
        ,
    active_probe(std::make_shared<Native::PfrMap::Set::ActiveProbe>())
    , backoff(std::make_shared<Native::PfrMap::Set::Backoff>())
    , delay(std::make_shared<Native::PfrMap::Set::Delay>())
    , link_group(std::make_shared<Native::PfrMap::Set::LinkGroup>())
    , loss(std::make_shared<Native::PfrMap::Set::Loss>())
{
    active_probe->parent = this;
    backoff->parent = this;
    delay->parent = this;
    link_group->parent = this;
    loss->parent = this;

    yang_name = "set"; yang_parent_name = "pfr-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PfrMap::Set::~Set()
{
}

bool Native::PfrMap::Set::has_data() const
{
    if (is_presence_container) return true;
    return holddown.is_set
	|| interface.is_set
	|| jitter.is_set
	|| mode.is_set
	|| mos.is_set
	|| next_hop.is_set
	|| periodic.is_set
	|| probe.is_set
	|| resolve.is_set
	|| traceroute.is_set
	|| trap_enable.is_set
	|| trigger_log_percentage.is_set
	|| unreachable.is_set
	|| (active_probe !=  nullptr && active_probe->has_data())
	|| (backoff !=  nullptr && backoff->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (link_group !=  nullptr && link_group->has_data())
	|| (loss !=  nullptr && loss->has_data());
}

bool Native::PfrMap::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holddown.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(jitter.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(mos.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(periodic.yfilter)
	|| ydk::is_set(probe.yfilter)
	|| ydk::is_set(resolve.yfilter)
	|| ydk::is_set(traceroute.yfilter)
	|| ydk::is_set(trap_enable.yfilter)
	|| ydk::is_set(trigger_log_percentage.yfilter)
	|| ydk::is_set(unreachable.yfilter)
	|| (active_probe !=  nullptr && active_probe->has_operation())
	|| (backoff !=  nullptr && backoff->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (link_group !=  nullptr && link_group->has_operation())
	|| (loss !=  nullptr && loss->has_operation());
}

std::string Native::PfrMap::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-pfr:set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (jitter.is_set || is_set(jitter.yfilter)) leaf_name_data.push_back(jitter.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (mos.is_set || is_set(mos.yfilter)) leaf_name_data.push_back(mos.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (periodic.is_set || is_set(periodic.yfilter)) leaf_name_data.push_back(periodic.get_name_leafdata());
    if (probe.is_set || is_set(probe.yfilter)) leaf_name_data.push_back(probe.get_name_leafdata());
    if (resolve.is_set || is_set(resolve.yfilter)) leaf_name_data.push_back(resolve.get_name_leafdata());
    if (traceroute.is_set || is_set(traceroute.yfilter)) leaf_name_data.push_back(traceroute.get_name_leafdata());
    if (trap_enable.is_set || is_set(trap_enable.yfilter)) leaf_name_data.push_back(trap_enable.get_name_leafdata());
    if (trigger_log_percentage.is_set || is_set(trigger_log_percentage.yfilter)) leaf_name_data.push_back(trigger_log_percentage.get_name_leafdata());
    if (unreachable.is_set || is_set(unreachable.yfilter)) leaf_name_data.push_back(unreachable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PfrMap::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-probe")
    {
        if(active_probe == nullptr)
        {
            active_probe = std::make_shared<Native::PfrMap::Set::ActiveProbe>();
        }
        return active_probe;
    }

    if(child_yang_name == "backoff")
    {
        if(backoff == nullptr)
        {
            backoff = std::make_shared<Native::PfrMap::Set::Backoff>();
        }
        return backoff;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::PfrMap::Set::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "link-group")
    {
        if(link_group == nullptr)
        {
            link_group = std::make_shared<Native::PfrMap::Set::LinkGroup>();
        }
        return link_group;
    }

    if(child_yang_name == "loss")
    {
        if(loss == nullptr)
        {
            loss = std::make_shared<Native::PfrMap::Set::Loss>();
        }
        return loss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PfrMap::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(active_probe != nullptr)
    {
        _children["active-probe"] = active_probe;
    }

    if(backoff != nullptr)
    {
        _children["backoff"] = backoff;
    }

    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    if(link_group != nullptr)
    {
        _children["link-group"] = link_group;
    }

    if(loss != nullptr)
    {
        _children["loss"] = loss;
    }

    return _children;
}

void Native::PfrMap::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jitter")
    {
        jitter = value;
        jitter.value_namespace = name_space;
        jitter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mos")
    {
        mos = value;
        mos.value_namespace = name_space;
        mos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic")
    {
        periodic = value;
        periodic.value_namespace = name_space;
        periodic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe")
    {
        probe = value;
        probe.value_namespace = name_space;
        probe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resolve")
    {
        resolve = value;
        resolve.value_namespace = name_space;
        resolve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traceroute")
    {
        traceroute = value;
        traceroute.value_namespace = name_space;
        traceroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-enable")
    {
        trap_enable = value;
        trap_enable.value_namespace = name_space;
        trap_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-log-percentage")
    {
        trigger_log_percentage = value;
        trigger_log_percentage.value_namespace = name_space;
        trigger_log_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachable")
    {
        unreachable = value;
        unreachable.value_namespace = name_space;
        unreachable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "jitter")
    {
        jitter.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "mos")
    {
        mos.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "periodic")
    {
        periodic.yfilter = yfilter;
    }
    if(value_path == "probe")
    {
        probe.yfilter = yfilter;
    }
    if(value_path == "resolve")
    {
        resolve.yfilter = yfilter;
    }
    if(value_path == "traceroute")
    {
        traceroute.yfilter = yfilter;
    }
    if(value_path == "trap-enable")
    {
        trap_enable.yfilter = yfilter;
    }
    if(value_path == "trigger-log-percentage")
    {
        trigger_log_percentage.yfilter = yfilter;
    }
    if(value_path == "unreachable")
    {
        unreachable.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-probe" || name == "backoff" || name == "delay" || name == "link-group" || name == "loss" || name == "holddown" || name == "interface" || name == "jitter" || name == "mode" || name == "mos" || name == "next-hop" || name == "periodic" || name == "probe" || name == "resolve" || name == "traceroute" || name == "trap-enable" || name == "trigger-log-percentage" || name == "unreachable")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::ActiveProbe()
    :
    echo(std::make_shared<Native::PfrMap::Set::ActiveProbe::Echo>())
    , jitter(std::make_shared<Native::PfrMap::Set::ActiveProbe::Jitter>())
    , tcp_conn(std::make_shared<Native::PfrMap::Set::ActiveProbe::TcpConn>())
    , udp_echo(std::make_shared<Native::PfrMap::Set::ActiveProbe::UdpEcho>())
{
    echo->parent = this;
    jitter->parent = this;
    tcp_conn->parent = this;
    udp_echo->parent = this;

    yang_name = "active-probe"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PfrMap::Set::ActiveProbe::~ActiveProbe()
{
}

bool Native::PfrMap::Set::ActiveProbe::has_data() const
{
    if (is_presence_container) return true;
    return (echo !=  nullptr && echo->has_data())
	|| (jitter !=  nullptr && jitter->has_data())
	|| (tcp_conn !=  nullptr && tcp_conn->has_data())
	|| (udp_echo !=  nullptr && udp_echo->has_data());
}

bool Native::PfrMap::Set::ActiveProbe::has_operation() const
{
    return is_set(yfilter)
	|| (echo !=  nullptr && echo->has_operation())
	|| (jitter !=  nullptr && jitter->has_operation())
	|| (tcp_conn !=  nullptr && tcp_conn->has_operation())
	|| (udp_echo !=  nullptr && udp_echo->has_operation());
}

std::string Native::PfrMap::Set::ActiveProbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::ActiveProbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PfrMap::Set::ActiveProbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "echo")
    {
        if(echo == nullptr)
        {
            echo = std::make_shared<Native::PfrMap::Set::ActiveProbe::Echo>();
        }
        return echo;
    }

    if(child_yang_name == "jitter")
    {
        if(jitter == nullptr)
        {
            jitter = std::make_shared<Native::PfrMap::Set::ActiveProbe::Jitter>();
        }
        return jitter;
    }

    if(child_yang_name == "tcp-conn")
    {
        if(tcp_conn == nullptr)
        {
            tcp_conn = std::make_shared<Native::PfrMap::Set::ActiveProbe::TcpConn>();
        }
        return tcp_conn;
    }

    if(child_yang_name == "udp-echo")
    {
        if(udp_echo == nullptr)
        {
            udp_echo = std::make_shared<Native::PfrMap::Set::ActiveProbe::UdpEcho>();
        }
        return udp_echo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PfrMap::Set::ActiveProbe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(echo != nullptr)
    {
        _children["echo"] = echo;
    }

    if(jitter != nullptr)
    {
        _children["jitter"] = jitter;
    }

    if(tcp_conn != nullptr)
    {
        _children["tcp-conn"] = tcp_conn;
    }

    if(udp_echo != nullptr)
    {
        _children["udp-echo"] = udp_echo;
    }

    return _children;
}

void Native::PfrMap::Set::ActiveProbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::ActiveProbe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::ActiveProbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "echo" || name == "jitter" || name == "tcp-conn" || name == "udp-echo")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::Echo::Echo()
    :
    ipv4_or_hostname(this, {"ipv4_or_hostname"})
{

    yang_name = "echo"; yang_parent_name = "active-probe"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PfrMap::Set::ActiveProbe::Echo::~Echo()
{
}

bool Native::PfrMap::Set::ActiveProbe::Echo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_or_hostname.len(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::ActiveProbe::Echo::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.len(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::Echo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::ActiveProbe::Echo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PfrMap::Set::ActiveProbe::Echo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        auto ent_ = std::make_shared<Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname>();
        ent_->parent = this;
        ipv4_or_hostname.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PfrMap::Set::ActiveProbe::Echo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_or_hostname.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::PfrMap::Set::ActiveProbe::Echo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::ActiveProbe::Echo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::ActiveProbe::Echo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    dscp{YType::empty, "dscp"}
{

    yang_name = "ipv4-or-hostname"; yang_parent_name = "echo"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_or_hostname.is_set
	|| dscp.is_set;
}

bool Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(dscp.yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname";
    ADD_KEY_TOKEN(ipv4_or_hostname, "ipv4-or-hostname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "dscp")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::Jitter::Jitter()
    :
    ipv4_or_hostname(this, {"ipv4_or_hostname"})
{

    yang_name = "jitter"; yang_parent_name = "active-probe"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PfrMap::Set::ActiveProbe::Jitter::~Jitter()
{
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_or_hostname.len(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.len(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::Jitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jitter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::ActiveProbe::Jitter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PfrMap::Set::ActiveProbe::Jitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        auto ent_ = std::make_shared<Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname>();
        ent_->parent = this;
        ipv4_or_hostname.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PfrMap::Set::ActiveProbe::Jitter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_or_hostname.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::PfrMap::Set::ActiveProbe::Jitter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::ActiveProbe::Jitter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    target_port{YType::empty, "target-port"}
{

    yang_name = "ipv4-or-hostname"; yang_parent_name = "jitter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_or_hostname.is_set
	|| target_port.is_set;
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(target_port.yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname";
    ADD_KEY_TOKEN(ipv4_or_hostname, "ipv4-or-hostname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (target_port.is_set || is_set(target_port.yfilter)) leaf_name_data.push_back(target_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-port")
    {
        target_port = value;
        target_port.value_namespace = name_space;
        target_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "target-port")
    {
        target_port.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "target-port")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::TcpConn::TcpConn()
    :
    ipv4_or_hostname(this, {"ipv4_or_hostname"})
{

    yang_name = "tcp-conn"; yang_parent_name = "active-probe"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PfrMap::Set::ActiveProbe::TcpConn::~TcpConn()
{
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_or_hostname.len(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.len(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::TcpConn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-conn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::ActiveProbe::TcpConn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PfrMap::Set::ActiveProbe::TcpConn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        auto ent_ = std::make_shared<Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname>();
        ent_->parent = this;
        ipv4_or_hostname.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PfrMap::Set::ActiveProbe::TcpConn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_or_hostname.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::PfrMap::Set::ActiveProbe::TcpConn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::ActiveProbe::TcpConn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    target_port{YType::empty, "target-port"}
{

    yang_name = "ipv4-or-hostname"; yang_parent_name = "tcp-conn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_or_hostname.is_set
	|| target_port.is_set;
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(target_port.yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname";
    ADD_KEY_TOKEN(ipv4_or_hostname, "ipv4-or-hostname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (target_port.is_set || is_set(target_port.yfilter)) leaf_name_data.push_back(target_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-port")
    {
        target_port = value;
        target_port.value_namespace = name_space;
        target_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "target-port")
    {
        target_port.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "target-port")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::UdpEcho::UdpEcho()
    :
    ipv4_or_hostname(this, {"ipv4_or_hostname"})
{

    yang_name = "udp-echo"; yang_parent_name = "active-probe"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PfrMap::Set::ActiveProbe::UdpEcho::~UdpEcho()
{
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_or_hostname.len(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.len(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::UdpEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-echo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::ActiveProbe::UdpEcho::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PfrMap::Set::ActiveProbe::UdpEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        auto ent_ = std::make_shared<Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname>();
        ent_->parent = this;
        ipv4_or_hostname.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PfrMap::Set::ActiveProbe::UdpEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_or_hostname.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::PfrMap::Set::ActiveProbe::UdpEcho::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::ActiveProbe::UdpEcho::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    target_port{YType::empty, "target-port"}
{

    yang_name = "ipv4-or-hostname"; yang_parent_name = "udp-echo"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_or_hostname.is_set
	|| target_port.is_set;
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(target_port.yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname";
    ADD_KEY_TOKEN(ipv4_or_hostname, "ipv4-or-hostname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (target_port.is_set || is_set(target_port.yfilter)) leaf_name_data.push_back(target_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-port")
    {
        target_port = value;
        target_port.value_namespace = name_space;
        target_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "target-port")
    {
        target_port.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "target-port")
        return true;
    return false;
}

Native::PfrMap::Set::Backoff::Backoff()
    :
    boff_t(this, {"boff_t"})
{

    yang_name = "backoff"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PfrMap::Set::Backoff::~Backoff()
{
}

bool Native::PfrMap::Set::Backoff::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<boff_t.len(); index++)
    {
        if(boff_t[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::Backoff::has_operation() const
{
    for (std::size_t index=0; index<boff_t.len(); index++)
    {
        if(boff_t[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PfrMap::Set::Backoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::Backoff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PfrMap::Set::Backoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boff-t")
    {
        auto ent_ = std::make_shared<Native::PfrMap::Set::Backoff::BoffT>();
        ent_->parent = this;
        boff_t.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PfrMap::Set::Backoff::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : boff_t.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::PfrMap::Set::Backoff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::Backoff::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::Backoff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boff-t")
        return true;
    return false;
}

Native::PfrMap::Set::Backoff::BoffT::BoffT()
    :
    boff_t{YType::uint16, "boff-t"}
        ,
    boff_t0(this, {"boff_t0"})
{

    yang_name = "boff-t"; yang_parent_name = "backoff"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PfrMap::Set::Backoff::BoffT::~BoffT()
{
}

bool Native::PfrMap::Set::Backoff::BoffT::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<boff_t0.len(); index++)
    {
        if(boff_t0[index]->has_data())
            return true;
    }
    return boff_t.is_set;
}

bool Native::PfrMap::Set::Backoff::BoffT::has_operation() const
{
    for (std::size_t index=0; index<boff_t0.len(); index++)
    {
        if(boff_t0[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(boff_t.yfilter);
}

std::string Native::PfrMap::Set::Backoff::BoffT::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boff-t";
    ADD_KEY_TOKEN(boff_t, "boff-t");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::Backoff::BoffT::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boff_t.is_set || is_set(boff_t.yfilter)) leaf_name_data.push_back(boff_t.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PfrMap::Set::Backoff::BoffT::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boff-t0")
    {
        auto ent_ = std::make_shared<Native::PfrMap::Set::Backoff::BoffT::BoffT0>();
        ent_->parent = this;
        boff_t0.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PfrMap::Set::Backoff::BoffT::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : boff_t0.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::PfrMap::Set::Backoff::BoffT::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boff-t")
    {
        boff_t = value;
        boff_t.value_namespace = name_space;
        boff_t.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::Backoff::BoffT::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boff-t")
    {
        boff_t.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::Backoff::BoffT::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boff-t0" || name == "boff-t")
        return true;
    return false;
}

Native::PfrMap::Set::Backoff::BoffT::BoffT0::BoffT0()
    :
    boff_t0{YType::uint16, "boff-t0"},
    boff_rng{YType::uint16, "boff-rng"}
{

    yang_name = "boff-t0"; yang_parent_name = "boff-t"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PfrMap::Set::Backoff::BoffT::BoffT0::~BoffT0()
{
}

bool Native::PfrMap::Set::Backoff::BoffT::BoffT0::has_data() const
{
    if (is_presence_container) return true;
    return boff_t0.is_set
	|| boff_rng.is_set;
}

bool Native::PfrMap::Set::Backoff::BoffT::BoffT0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(boff_t0.yfilter)
	|| ydk::is_set(boff_rng.yfilter);
}

std::string Native::PfrMap::Set::Backoff::BoffT::BoffT0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boff-t0";
    ADD_KEY_TOKEN(boff_t0, "boff-t0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::Backoff::BoffT::BoffT0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boff_t0.is_set || is_set(boff_t0.yfilter)) leaf_name_data.push_back(boff_t0.get_name_leafdata());
    if (boff_rng.is_set || is_set(boff_rng.yfilter)) leaf_name_data.push_back(boff_rng.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PfrMap::Set::Backoff::BoffT::BoffT0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PfrMap::Set::Backoff::BoffT::BoffT0::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PfrMap::Set::Backoff::BoffT::BoffT0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boff-t0")
    {
        boff_t0 = value;
        boff_t0.value_namespace = name_space;
        boff_t0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boff-rng")
    {
        boff_rng = value;
        boff_rng.value_namespace = name_space;
        boff_rng.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::Backoff::BoffT::BoffT0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boff-t0")
    {
        boff_t0.yfilter = yfilter;
    }
    if(value_path == "boff-rng")
    {
        boff_rng.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::Backoff::BoffT::BoffT0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boff-t0" || name == "boff-rng")
        return true;
    return false;
}

Native::PfrMap::Set::Delay::Delay()
    :
    relative{YType::empty, "relative"},
    threshold{YType::empty, "threshold"}
{

    yang_name = "delay"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PfrMap::Set::Delay::~Delay()
{
}

bool Native::PfrMap::Set::Delay::has_data() const
{
    if (is_presence_container) return true;
    return relative.is_set
	|| threshold.is_set;
}

bool Native::PfrMap::Set::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(relative.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::PfrMap::Set::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (relative.is_set || is_set(relative.yfilter)) leaf_name_data.push_back(relative.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PfrMap::Set::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PfrMap::Set::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PfrMap::Set::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "relative")
    {
        relative = value;
        relative.value_namespace = name_space;
        relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "relative")
    {
        relative.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relative" || name == "threshold")
        return true;
    return false;
}

Native::PfrMap::Set::LinkGroup::LinkGroup()
    :
    lg_name(this, {"lg_name"})
{

    yang_name = "link-group"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PfrMap::Set::LinkGroup::~LinkGroup()
{
}

bool Native::PfrMap::Set::LinkGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lg_name.len(); index++)
    {
        if(lg_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::LinkGroup::has_operation() const
{
    for (std::size_t index=0; index<lg_name.len(); index++)
    {
        if(lg_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PfrMap::Set::LinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::LinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PfrMap::Set::LinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lg-name")
    {
        auto ent_ = std::make_shared<Native::PfrMap::Set::LinkGroup::LgName>();
        ent_->parent = this;
        lg_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PfrMap::Set::LinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lg_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::PfrMap::Set::LinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::LinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::LinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lg-name")
        return true;
    return false;
}

Native::PfrMap::Set::LinkGroup::LgName::LgName()
    :
    lg_name{YType::str, "lg-name"}
        ,
    fallback(nullptr) // presence node
{

    yang_name = "lg-name"; yang_parent_name = "link-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PfrMap::Set::LinkGroup::LgName::~LgName()
{
}

bool Native::PfrMap::Set::LinkGroup::LgName::has_data() const
{
    if (is_presence_container) return true;
    return lg_name.is_set
	|| (fallback !=  nullptr && fallback->has_data());
}

bool Native::PfrMap::Set::LinkGroup::LgName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lg_name.yfilter)
	|| (fallback !=  nullptr && fallback->has_operation());
}

std::string Native::PfrMap::Set::LinkGroup::LgName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lg-name";
    ADD_KEY_TOKEN(lg_name, "lg-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::LinkGroup::LgName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lg_name.is_set || is_set(lg_name.yfilter)) leaf_name_data.push_back(lg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PfrMap::Set::LinkGroup::LgName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fallback")
    {
        if(fallback == nullptr)
        {
            fallback = std::make_shared<Native::PfrMap::Set::LinkGroup::LgName::Fallback>();
        }
        return fallback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PfrMap::Set::LinkGroup::LgName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fallback != nullptr)
    {
        _children["fallback"] = fallback;
    }

    return _children;
}

void Native::PfrMap::Set::LinkGroup::LgName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lg-name")
    {
        lg_name = value;
        lg_name.value_namespace = name_space;
        lg_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::LinkGroup::LgName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lg-name")
    {
        lg_name.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::LinkGroup::LgName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fallback" || name == "lg-name")
        return true;
    return false;
}

Native::PfrMap::Set::LinkGroup::LgName::Fallback::Fallback()
    :
    fall_name{YType::str, "fall-name"}
{

    yang_name = "fallback"; yang_parent_name = "lg-name"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::PfrMap::Set::LinkGroup::LgName::Fallback::~Fallback()
{
}

bool Native::PfrMap::Set::LinkGroup::LgName::Fallback::has_data() const
{
    if (is_presence_container) return true;
    return fall_name.is_set;
}

bool Native::PfrMap::Set::LinkGroup::LgName::Fallback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fall_name.yfilter);
}

std::string Native::PfrMap::Set::LinkGroup::LgName::Fallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::LinkGroup::LgName::Fallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fall_name.is_set || is_set(fall_name.yfilter)) leaf_name_data.push_back(fall_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PfrMap::Set::LinkGroup::LgName::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PfrMap::Set::LinkGroup::LgName::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PfrMap::Set::LinkGroup::LgName::Fallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fall-name")
    {
        fall_name = value;
        fall_name.value_namespace = name_space;
        fall_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::LinkGroup::LgName::Fallback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fall-name")
    {
        fall_name.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::LinkGroup::LgName::Fallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fall-name")
        return true;
    return false;
}

Native::PfrMap::Set::Loss::Loss()
    :
    relative{YType::uint16, "relative"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "loss"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::PfrMap::Set::Loss::~Loss()
{
}

bool Native::PfrMap::Set::Loss::has_data() const
{
    if (is_presence_container) return true;
    return relative.is_set
	|| threshold.is_set;
}

bool Native::PfrMap::Set::Loss::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(relative.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::PfrMap::Set::Loss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::Loss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (relative.is_set || is_set(relative.yfilter)) leaf_name_data.push_back(relative.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::PfrMap::Set::Loss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::PfrMap::Set::Loss::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::PfrMap::Set::Loss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "relative")
    {
        relative = value;
        relative.value_namespace = name_space;
        relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::Loss::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "relative")
    {
        relative.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::Loss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relative" || name == "threshold")
        return true;
    return false;
}

Native::FacilityAlarm::FacilityAlarm()
    :
    severity{YType::enumeration, "severity"},
    exceed_action{YType::enumeration, "exceed-action"}
{

    yang_name = "facility-alarm"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::FacilityAlarm::~FacilityAlarm()
{
}

bool Native::FacilityAlarm::has_data() const
{
    if (is_presence_container) return true;
    return severity.is_set
	|| exceed_action.is_set;
}

bool Native::FacilityAlarm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(exceed_action.yfilter);
}

std::string Native::FacilityAlarm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FacilityAlarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "facility-alarm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FacilityAlarm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (exceed_action.is_set || is_set(exceed_action.yfilter)) leaf_name_data.push_back(exceed_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::FacilityAlarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::FacilityAlarm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::FacilityAlarm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-action")
    {
        exceed_action = value;
        exceed_action.value_namespace = name_space;
        exceed_action.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FacilityAlarm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "exceed-action")
    {
        exceed_action.yfilter = yfilter;
    }
}

bool Native::FacilityAlarm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "severity" || name == "exceed-action")
        return true;
    return false;
}

Native::Setup::Setup()
    :
    express{YType::boolean, "Cisco-IOS-XE-switch:express"}
{

    yang_name = "setup"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Setup::~Setup()
{
}

bool Native::Setup::has_data() const
{
    if (is_presence_container) return true;
    return express.is_set;
}

bool Native::Setup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(express.yfilter);
}

std::string Native::Setup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Setup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Setup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (express.is_set || is_set(express.yfilter)) leaf_name_data.push_back(express.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Setup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Setup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Setup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-switch:express")
    {
        express = value;
        express.value_namespace = name_space;
        express.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Setup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "express")
    {
        express.yfilter = yfilter;
    }
}

bool Native::Setup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "express")
        return true;
    return false;
}

Native::TodClock::TodClock()
    :
    input_source(std::make_shared<Native::TodClock::InputSource>())
{
    input_source->parent = this;

    yang_name = "tod-clock"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::TodClock::~TodClock()
{
}

bool Native::TodClock::has_data() const
{
    if (is_presence_container) return true;
    return (input_source !=  nullptr && input_source->has_data());
}

bool Native::TodClock::has_operation() const
{
    return is_set(yfilter)
	|| (input_source !=  nullptr && input_source->has_operation());
}

std::string Native::TodClock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TodClock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tod-clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TodClock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::TodClock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input-source")
    {
        if(input_source == nullptr)
        {
            input_source = std::make_shared<Native::TodClock::InputSource>();
        }
        return input_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::TodClock::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input_source != nullptr)
    {
        _children["input-source"] = input_source;
    }

    return _children;
}

void Native::TodClock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::TodClock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::TodClock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input-source")
        return true;
    return false;
}

Native::TodClock::InputSource::InputSource()
    :
    priority{YType::uint8, "priority"}
        ,
    ptp(std::make_shared<Native::TodClock::InputSource::Ptp>())
{
    ptp->parent = this;

    yang_name = "input-source"; yang_parent_name = "tod-clock"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::TodClock::InputSource::~InputSource()
{
}

bool Native::TodClock::InputSource::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| (ptp !=  nullptr && ptp->has_data());
}

bool Native::TodClock::InputSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (ptp !=  nullptr && ptp->has_operation());
}

std::string Native::TodClock::InputSource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/tod-clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TodClock::InputSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TodClock::InputSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::TodClock::InputSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ptp")
    {
        if(ptp == nullptr)
        {
            ptp = std::make_shared<Native::TodClock::InputSource::Ptp>();
        }
        return ptp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::TodClock::InputSource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ptp != nullptr)
    {
        _children["ptp"] = ptp;
    }

    return _children;
}

void Native::TodClock::InputSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TodClock::InputSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::TodClock::InputSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ptp" || name == "priority")
        return true;
    return false;
}

Native::TodClock::InputSource::Ptp::Ptp()
    :
    domain{YType::uint8, "domain"}
{

    yang_name = "ptp"; yang_parent_name = "input-source"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::TodClock::InputSource::Ptp::~Ptp()
{
}

bool Native::TodClock::InputSource::Ptp::has_data() const
{
    if (is_presence_container) return true;
    return domain.is_set;
}

bool Native::TodClock::InputSource::Ptp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::TodClock::InputSource::Ptp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/tod-clock/input-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TodClock::InputSource::Ptp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TodClock::InputSource::Ptp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::TodClock::InputSource::Ptp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::TodClock::InputSource::Ptp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::TodClock::InputSource::Ptp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TodClock::InputSource::Ptp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::TodClock::InputSource::Ptp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain")
        return true;
    return false;
}

Native::NetworkClock::NetworkClock()
    :
    synchronization(std::make_shared<Native::NetworkClock::Synchronization>())
    , wait_to_restore(std::make_shared<Native::NetworkClock::WaitToRestore>())
    , input_source(std::make_shared<Native::NetworkClock::InputSource>())
{
    synchronization->parent = this;
    wait_to_restore->parent = this;
    input_source->parent = this;

    yang_name = "network-clock"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::NetworkClock::~NetworkClock()
{
}

bool Native::NetworkClock::has_data() const
{
    if (is_presence_container) return true;
    return (synchronization !=  nullptr && synchronization->has_data())
	|| (wait_to_restore !=  nullptr && wait_to_restore->has_data())
	|| (input_source !=  nullptr && input_source->has_data());
}

bool Native::NetworkClock::has_operation() const
{
    return is_set(yfilter)
	|| (synchronization !=  nullptr && synchronization->has_operation())
	|| (wait_to_restore !=  nullptr && wait_to_restore->has_operation())
	|| (input_source !=  nullptr && input_source->has_operation());
}

std::string Native::NetworkClock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::NetworkClock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "synchronization")
    {
        if(synchronization == nullptr)
        {
            synchronization = std::make_shared<Native::NetworkClock::Synchronization>();
        }
        return synchronization;
    }

    if(child_yang_name == "wait-to-restore")
    {
        if(wait_to_restore == nullptr)
        {
            wait_to_restore = std::make_shared<Native::NetworkClock::WaitToRestore>();
        }
        return wait_to_restore;
    }

    if(child_yang_name == "input-source")
    {
        if(input_source == nullptr)
        {
            input_source = std::make_shared<Native::NetworkClock::InputSource>();
        }
        return input_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::NetworkClock::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(synchronization != nullptr)
    {
        _children["synchronization"] = synchronization;
    }

    if(wait_to_restore != nullptr)
    {
        _children["wait-to-restore"] = wait_to_restore;
    }

    if(input_source != nullptr)
    {
        _children["input-source"] = input_source;
    }

    return _children;
}

void Native::NetworkClock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::NetworkClock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::NetworkClock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "synchronization" || name == "wait-to-restore" || name == "input-source")
        return true;
    return false;
}

Native::NetworkClock::Synchronization::Synchronization()
    :
    automatic{YType::empty, "automatic"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "synchronization"; yang_parent_name = "network-clock"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::NetworkClock::Synchronization::~Synchronization()
{
}

bool Native::NetworkClock::Synchronization::has_data() const
{
    if (is_presence_container) return true;
    return automatic.is_set
	|| mode.is_set;
}

bool Native::NetworkClock::Synchronization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(automatic.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::NetworkClock::Synchronization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/network-clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::Synchronization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "synchronization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::Synchronization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (automatic.is_set || is_set(automatic.yfilter)) leaf_name_data.push_back(automatic.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::NetworkClock::Synchronization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::NetworkClock::Synchronization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::NetworkClock::Synchronization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "automatic")
    {
        automatic = value;
        automatic.value_namespace = name_space;
        automatic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::Synchronization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "automatic")
    {
        automatic.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::NetworkClock::Synchronization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "automatic" || name == "mode")
        return true;
    return false;
}

Native::NetworkClock::WaitToRestore::WaitToRestore()
    :
    time{YType::uint32, "time"},
    global{YType::empty, "global"}
{

    yang_name = "wait-to-restore"; yang_parent_name = "network-clock"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::NetworkClock::WaitToRestore::~WaitToRestore()
{
}

bool Native::NetworkClock::WaitToRestore::has_data() const
{
    if (is_presence_container) return true;
    return time.is_set
	|| global.is_set;
}

bool Native::NetworkClock::WaitToRestore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(global.yfilter);
}

std::string Native::NetworkClock::WaitToRestore::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/network-clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::WaitToRestore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wait-to-restore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::WaitToRestore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::NetworkClock::WaitToRestore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::NetworkClock::WaitToRestore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::NetworkClock::WaitToRestore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::WaitToRestore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
}

bool Native::NetworkClock::WaitToRestore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "global")
        return true;
    return false;
}

Native::NetworkClock::InputSource::InputSource()
    :
    priority{YType::uint8, "priority"}
        ,
    interface(std::make_shared<Native::NetworkClock::InputSource::Interface>())
    , ptp(std::make_shared<Native::NetworkClock::InputSource::Ptp>())
{
    interface->parent = this;
    ptp->parent = this;

    yang_name = "input-source"; yang_parent_name = "network-clock"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::NetworkClock::InputSource::~InputSource()
{
}

bool Native::NetworkClock::InputSource::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (ptp !=  nullptr && ptp->has_data());
}

bool Native::NetworkClock::InputSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (ptp !=  nullptr && ptp->has_operation());
}

std::string Native::NetworkClock::InputSource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/network-clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::InputSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::InputSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::NetworkClock::InputSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::NetworkClock::InputSource::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ptp")
    {
        if(ptp == nullptr)
        {
            ptp = std::make_shared<Native::NetworkClock::InputSource::Ptp>();
        }
        return ptp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::NetworkClock::InputSource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    if(ptp != nullptr)
    {
        _children["ptp"] = ptp;
    }

    return _children;
}

void Native::NetworkClock::InputSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::InputSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::NetworkClock::InputSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "ptp" || name == "priority")
        return true;
    return false;
}

Native::NetworkClock::InputSource::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    atm_subinterface(std::make_shared<Native::NetworkClock::InputSource::Interface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::NetworkClock::InputSource::Interface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::NetworkClock::InputSource::Interface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::NetworkClock::InputSource::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "input-source"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::NetworkClock::InputSource::Interface::~Interface()
{
}

bool Native::NetworkClock::InputSource::Interface::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::NetworkClock::InputSource::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::NetworkClock::InputSource::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::InputSource::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::InputSource::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::NetworkClock::InputSource::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::NetworkClock::InputSource::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::NetworkClock::InputSource::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::NetworkClock::InputSource::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::NetworkClock::InputSource::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::NetworkClock::InputSource::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::NetworkClock::InputSource::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::InputSource::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::NetworkClock::InputSource::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::NetworkClock::InputSource::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::NetworkClock::InputSource::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::NetworkClock::InputSource::Interface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::NetworkClock::InputSource::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::NetworkClock::InputSource::Interface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::InputSource::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::InputSource::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::NetworkClock::InputSource::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::NetworkClock::InputSource::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::NetworkClock::InputSource::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::InputSource::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::NetworkClock::InputSource::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::NetworkClock::InputSource::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::NetworkClock::InputSource::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::NetworkClock::InputSource::Interface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::NetworkClock::InputSource::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::NetworkClock::InputSource::Interface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::InputSource::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::InputSource::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::NetworkClock::InputSource::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::NetworkClock::InputSource::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::NetworkClock::InputSource::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::InputSource::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::NetworkClock::InputSource::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::NetworkClock::InputSource::Ptp::Ptp()
    :
    domain{YType::uint8, "domain"}
{

    yang_name = "ptp"; yang_parent_name = "input-source"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::NetworkClock::InputSource::Ptp::~Ptp()
{
}

bool Native::NetworkClock::InputSource::Ptp::has_data() const
{
    if (is_presence_container) return true;
    return domain.is_set;
}

bool Native::NetworkClock::InputSource::Ptp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::NetworkClock::InputSource::Ptp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::InputSource::Ptp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::InputSource::Ptp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::NetworkClock::InputSource::Ptp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::NetworkClock::InputSource::Ptp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::NetworkClock::InputSource::Ptp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::InputSource::Ptp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::NetworkClock::InputSource::Ptp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain")
        return true;
    return false;
}

Native::L2vpn::L2vpn()
    :
    pseudowire(std::make_shared<Native::L2vpn::Pseudowire>())
    , vfi(std::make_shared<Native::L2vpn::Vfi>())
    , xconnect(std::make_shared<Native::L2vpn::Xconnect>())
    , evpn_cont(std::make_shared<Native::L2vpn::EvpnCont>())
{
    pseudowire->parent = this;
    vfi->parent = this;
    xconnect->parent = this;
    evpn_cont->parent = this;

    yang_name = "l2vpn"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::~L2vpn()
{
}

bool Native::L2vpn::has_data() const
{
    if (is_presence_container) return true;
    return (pseudowire !=  nullptr && pseudowire->has_data())
	|| (vfi !=  nullptr && vfi->has_data())
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (evpn_cont !=  nullptr && evpn_cont->has_data());
}

bool Native::L2vpn::has_operation() const
{
    return is_set(yfilter)
	|| (pseudowire !=  nullptr && pseudowire->has_operation())
	|| (vfi !=  nullptr && vfi->has_operation())
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (evpn_cont !=  nullptr && evpn_cont->has_operation());
}

std::string Native::L2vpn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-l2vpn:pseudowire")
    {
        if(pseudowire == nullptr)
        {
            pseudowire = std::make_shared<Native::L2vpn::Pseudowire>();
        }
        return pseudowire;
    }

    if(child_yang_name == "Cisco-IOS-XE-l2vpn:vfi")
    {
        if(vfi == nullptr)
        {
            vfi = std::make_shared<Native::L2vpn::Vfi>();
        }
        return vfi;
    }

    if(child_yang_name == "Cisco-IOS-XE-l2vpn:xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::L2vpn::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "Cisco-IOS-XE-l2vpn:evpn_cont")
    {
        if(evpn_cont == nullptr)
        {
            evpn_cont = std::make_shared<Native::L2vpn::EvpnCont>();
        }
        return evpn_cont;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pseudowire != nullptr)
    {
        _children["Cisco-IOS-XE-l2vpn:pseudowire"] = pseudowire;
    }

    if(vfi != nullptr)
    {
        _children["Cisco-IOS-XE-l2vpn:vfi"] = vfi;
    }

    if(xconnect != nullptr)
    {
        _children["Cisco-IOS-XE-l2vpn:xconnect"] = xconnect;
    }

    if(evpn_cont != nullptr)
    {
        _children["Cisco-IOS-XE-l2vpn:evpn_cont"] = evpn_cont;
    }

    return _children;
}

void Native::L2vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire" || name == "vfi" || name == "xconnect" || name == "evpn_cont")
        return true;
    return false;
}

Native::L2vpn::Pseudowire::Pseudowire()
    :
    routing{YType::empty, "routing"}
        ,
    static_oam(std::make_shared<Native::L2vpn::Pseudowire::StaticOam>())
    , tlv(std::make_shared<Native::L2vpn::Pseudowire::Tlv>())
    , group(std::make_shared<Native::L2vpn::Pseudowire::Group>())
{
    static_oam->parent = this;
    tlv->parent = this;
    group->parent = this;

    yang_name = "pseudowire"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::Pseudowire::~Pseudowire()
{
}

bool Native::L2vpn::Pseudowire::has_data() const
{
    if (is_presence_container) return true;
    return routing.is_set
	|| (static_oam !=  nullptr && static_oam->has_data())
	|| (tlv !=  nullptr && tlv->has_data())
	|| (group !=  nullptr && group->has_data());
}

bool Native::L2vpn::Pseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(routing.yfilter)
	|| (static_oam !=  nullptr && static_oam->has_operation())
	|| (tlv !=  nullptr && tlv->has_operation())
	|| (group !=  nullptr && group->has_operation());
}

std::string Native::L2vpn::Pseudowire::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::Pseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:pseudowire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Pseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (routing.is_set || is_set(routing.yfilter)) leaf_name_data.push_back(routing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Pseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-oam")
    {
        if(static_oam == nullptr)
        {
            static_oam = std::make_shared<Native::L2vpn::Pseudowire::StaticOam>();
        }
        return static_oam;
    }

    if(child_yang_name == "tlv")
    {
        if(tlv == nullptr)
        {
            tlv = std::make_shared<Native::L2vpn::Pseudowire::Tlv>();
        }
        return tlv;
    }

    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::L2vpn::Pseudowire::Group>();
        }
        return group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Pseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(static_oam != nullptr)
    {
        _children["static-oam"] = static_oam;
    }

    if(tlv != nullptr)
    {
        _children["tlv"] = tlv;
    }

    if(group != nullptr)
    {
        _children["group"] = group;
    }

    return _children;
}

void Native::L2vpn::Pseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "routing")
    {
        routing = value;
        routing.value_namespace = name_space;
        routing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::Pseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "routing")
    {
        routing.yfilter = yfilter;
    }
}

bool Native::L2vpn::Pseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-oam" || name == "tlv" || name == "group" || name == "routing")
        return true;
    return false;
}

Native::L2vpn::Pseudowire::StaticOam::StaticOam()
    :
    class_(this, {"pw_nm"})
{

    yang_name = "static-oam"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::Pseudowire::StaticOam::~StaticOam()
{
}

bool Native::L2vpn::Pseudowire::StaticOam::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool Native::L2vpn::Pseudowire::StaticOam::has_operation() const
{
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::L2vpn::Pseudowire::StaticOam::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:pseudowire/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::Pseudowire::StaticOam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-oam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Pseudowire::StaticOam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Pseudowire::StaticOam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        auto ent_ = std::make_shared<Native::L2vpn::Pseudowire::StaticOam::Class>();
        ent_->parent = this;
        class_.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Pseudowire::StaticOam::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : class_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::L2vpn::Pseudowire::StaticOam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2vpn::Pseudowire::StaticOam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2vpn::Pseudowire::StaticOam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class")
        return true;
    return false;
}

Native::L2vpn::Pseudowire::StaticOam::Class::Class()
    :
    pw_nm{YType::str, "pw-nm"}
        ,
    timeout(std::make_shared<Native::L2vpn::Pseudowire::StaticOam::Class::Timeout>())
{
    timeout->parent = this;

    yang_name = "class"; yang_parent_name = "static-oam"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::Pseudowire::StaticOam::Class::~Class()
{
}

bool Native::L2vpn::Pseudowire::StaticOam::Class::has_data() const
{
    if (is_presence_container) return true;
    return pw_nm.is_set
	|| (timeout !=  nullptr && timeout->has_data());
}

bool Native::L2vpn::Pseudowire::StaticOam::Class::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_nm.yfilter)
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string Native::L2vpn::Pseudowire::StaticOam::Class::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:pseudowire/static-oam/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::Pseudowire::StaticOam::Class::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class";
    ADD_KEY_TOKEN(pw_nm, "pw-nm");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Pseudowire::StaticOam::Class::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_nm.is_set || is_set(pw_nm.yfilter)) leaf_name_data.push_back(pw_nm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Pseudowire::StaticOam::Class::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::L2vpn::Pseudowire::StaticOam::Class::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Pseudowire::StaticOam::Class::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(timeout != nullptr)
    {
        _children["timeout"] = timeout;
    }

    return _children;
}

void Native::L2vpn::Pseudowire::StaticOam::Class::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-nm")
    {
        pw_nm = value;
        pw_nm.value_namespace = name_space;
        pw_nm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::Pseudowire::StaticOam::Class::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-nm")
    {
        pw_nm.yfilter = yfilter;
    }
}

bool Native::L2vpn::Pseudowire::StaticOam::Class::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout" || name == "pw-nm")
        return true;
    return false;
}

Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Timeout()
    :
    refresh(std::make_shared<Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh>())
{
    refresh->parent = this;

    yang_name = "timeout"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::~Timeout()
{
}

bool Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::has_data() const
{
    if (is_presence_container) return true;
    return (refresh !=  nullptr && refresh->has_data());
}

bool Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| (refresh !=  nullptr && refresh->has_operation());
}

std::string Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "refresh")
    {
        if(refresh == nullptr)
        {
            refresh = std::make_shared<Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh>();
        }
        return refresh;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(refresh != nullptr)
    {
        _children["refresh"] = refresh;
    }

    return _children;
}

void Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "refresh")
        return true;
    return false;
}

Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::Refresh()
    :
    send(std::make_shared<Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::Send>())
{
    send->parent = this;

    yang_name = "refresh"; yang_parent_name = "timeout"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::~Refresh()
{
}

bool Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::has_data() const
{
    if (is_presence_container) return true;
    return (send !=  nullptr && send->has_data());
}

bool Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::has_operation() const
{
    return is_set(yfilter)
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(send != nullptr)
    {
        _children["send"] = send;
    }

    return _children;
}

void Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send")
        return true;
    return false;
}

Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::Send::Send()
    :
    interval{YType::uint32, "interval"}
{

    yang_name = "send"; yang_parent_name = "refresh"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::Send::~Send()
{
}

bool Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::Send::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set;
}

bool Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::Send::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::Send::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::L2vpn::Pseudowire::Tlv::Tlv()
    :
    template_(this, {"tlv_nm"})
{

    yang_name = "tlv"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::Pseudowire::Tlv::~Tlv()
{
}

bool Native::L2vpn::Pseudowire::Tlv::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<template_.len(); index++)
    {
        if(template_[index]->has_data())
            return true;
    }
    return false;
}

bool Native::L2vpn::Pseudowire::Tlv::has_operation() const
{
    for (std::size_t index=0; index<template_.len(); index++)
    {
        if(template_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::L2vpn::Pseudowire::Tlv::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:pseudowire/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::Pseudowire::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Pseudowire::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Pseudowire::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        auto ent_ = std::make_shared<Native::L2vpn::Pseudowire::Tlv::Template>();
        ent_->parent = this;
        template_.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Pseudowire::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : template_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::L2vpn::Pseudowire::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2vpn::Pseudowire::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2vpn::Pseudowire::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

Native::L2vpn::Pseudowire::Tlv::Template::Template()
    :
    tlv_nm{YType::str, "tlv-nm"}
        ,
    tlv(std::make_shared<Native::L2vpn::Pseudowire::Tlv::Template::Tlv_>())
{
    tlv->parent = this;

    yang_name = "template"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::Pseudowire::Tlv::Template::~Template()
{
}

bool Native::L2vpn::Pseudowire::Tlv::Template::has_data() const
{
    if (is_presence_container) return true;
    return tlv_nm.is_set
	|| (tlv !=  nullptr && tlv->has_data());
}

bool Native::L2vpn::Pseudowire::Tlv::Template::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tlv_nm.yfilter)
	|| (tlv !=  nullptr && tlv->has_operation());
}

std::string Native::L2vpn::Pseudowire::Tlv::Template::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:pseudowire/tlv/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::Pseudowire::Tlv::Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    ADD_KEY_TOKEN(tlv_nm, "tlv-nm");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Pseudowire::Tlv::Template::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_nm.is_set || is_set(tlv_nm.yfilter)) leaf_name_data.push_back(tlv_nm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Pseudowire::Tlv::Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        if(tlv == nullptr)
        {
            tlv = std::make_shared<Native::L2vpn::Pseudowire::Tlv::Template::Tlv_>();
        }
        return tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Pseudowire::Tlv::Template::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tlv != nullptr)
    {
        _children["tlv"] = tlv;
    }

    return _children;
}

void Native::L2vpn::Pseudowire::Tlv::Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlv-nm")
    {
        tlv_nm = value;
        tlv_nm.value_namespace = name_space;
        tlv_nm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::Pseudowire::Tlv::Template::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlv-nm")
    {
        tlv_nm.yfilter = yfilter;
    }
}

bool Native::L2vpn::Pseudowire::Tlv::Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv" || name == "tlv-nm")
        return true;
    return false;
}

Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::Tlv_()
    :
    tlv_type(std::make_shared<Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvType>())
    , tlv_description(std::make_shared<Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvDescription>())
{
    tlv_type->parent = this;
    tlv_description->parent = this;

    yang_name = "tlv"; yang_parent_name = "template"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::~Tlv_()
{
}

bool Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::has_data() const
{
    if (is_presence_container) return true;
    return (tlv_type !=  nullptr && tlv_type->has_data())
	|| (tlv_description !=  nullptr && tlv_description->has_data());
}

bool Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::has_operation() const
{
    return is_set(yfilter)
	|| (tlv_type !=  nullptr && tlv_type->has_operation())
	|| (tlv_description !=  nullptr && tlv_description->has_operation());
}

std::string Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-type")
    {
        if(tlv_type == nullptr)
        {
            tlv_type = std::make_shared<Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvType>();
        }
        return tlv_type;
    }

    if(child_yang_name == "tlv-description")
    {
        if(tlv_description == nullptr)
        {
            tlv_description = std::make_shared<Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvDescription>();
        }
        return tlv_description;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tlv_type != nullptr)
    {
        _children["tlv-type"] = tlv_type;
    }

    if(tlv_description != nullptr)
    {
        _children["tlv-description"] = tlv_description;
    }

    return _children;
}

void Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-type" || name == "tlv-description")
        return true;
    return false;
}

Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvType::TlvType()
    :
    type{YType::uint8, "type"}
{

    yang_name = "tlv-type"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvType::~TlvType()
{
}

bool Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvType::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvDescription::TlvDescription()
    :
    description{YType::str, "description"}
{

    yang_name = "tlv-description"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvDescription::~TlvDescription()
{
}

bool Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvDescription::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set;
}

bool Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvDescription::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvDescription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-description";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvDescription::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvDescription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvDescription::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvDescription::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvDescription::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvDescription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description")
        return true;
    return false;
}

Native::L2vpn::Pseudowire::Group::Group()
    :
    status{YType::empty, "status"}
{

    yang_name = "group"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::Pseudowire::Group::~Group()
{
}

bool Native::L2vpn::Pseudowire::Group::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set;
}

bool Native::L2vpn::Pseudowire::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::L2vpn::Pseudowire::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:pseudowire/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::Pseudowire::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Pseudowire::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Pseudowire::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Pseudowire::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::Pseudowire::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::Pseudowire::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::L2vpn::Pseudowire::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

Native::L2vpn::Vfi::Vfi()
    :
    context(this, {"vfi_nm"})
{

    yang_name = "vfi"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::Vfi::~Vfi()
{
}

bool Native::L2vpn::Vfi::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<context.len(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Native::L2vpn::Vfi::has_operation() const
{
    for (std::size_t index=0; index<context.len(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::L2vpn::Vfi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::Vfi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:vfi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Vfi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Vfi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        auto ent_ = std::make_shared<Native::L2vpn::Vfi::Context>();
        ent_->parent = this;
        context.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Vfi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : context.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::L2vpn::Vfi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2vpn::Vfi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2vpn::Vfi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::L2vpn::Vfi::Context::Context()
    :
    vfi_nm{YType::str, "vfi-nm"}
        ,
    autodiscovery(std::make_shared<Native::L2vpn::Vfi::Context::Autodiscovery>())
    , vpn(std::make_shared<Native::L2vpn::Vfi::Context::Vpn>())
{
    autodiscovery->parent = this;
    vpn->parent = this;

    yang_name = "context"; yang_parent_name = "vfi"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::Vfi::Context::~Context()
{
}

bool Native::L2vpn::Vfi::Context::has_data() const
{
    if (is_presence_container) return true;
    return vfi_nm.is_set
	|| (autodiscovery !=  nullptr && autodiscovery->has_data())
	|| (vpn !=  nullptr && vpn->has_data());
}

bool Native::L2vpn::Vfi::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vfi_nm.yfilter)
	|| (autodiscovery !=  nullptr && autodiscovery->has_operation())
	|| (vpn !=  nullptr && vpn->has_operation());
}

std::string Native::L2vpn::Vfi::Context::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:vfi/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::Vfi::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context";
    ADD_KEY_TOKEN(vfi_nm, "vfi-nm");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Vfi::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vfi_nm.is_set || is_set(vfi_nm.yfilter)) leaf_name_data.push_back(vfi_nm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Vfi::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autodiscovery")
    {
        if(autodiscovery == nullptr)
        {
            autodiscovery = std::make_shared<Native::L2vpn::Vfi::Context::Autodiscovery>();
        }
        return autodiscovery;
    }

    if(child_yang_name == "vpn")
    {
        if(vpn == nullptr)
        {
            vpn = std::make_shared<Native::L2vpn::Vfi::Context::Vpn>();
        }
        return vpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Vfi::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(autodiscovery != nullptr)
    {
        _children["autodiscovery"] = autodiscovery;
    }

    if(vpn != nullptr)
    {
        _children["vpn"] = vpn;
    }

    return _children;
}

void Native::L2vpn::Vfi::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vfi-nm")
    {
        vfi_nm = value;
        vfi_nm.value_namespace = name_space;
        vfi_nm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::Vfi::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vfi-nm")
    {
        vfi_nm.yfilter = yfilter;
    }
}

bool Native::L2vpn::Vfi::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autodiscovery" || name == "vpn" || name == "vfi-nm")
        return true;
    return false;
}

Native::L2vpn::Vfi::Context::Autodiscovery::Autodiscovery()
    :
    bgp(std::make_shared<Native::L2vpn::Vfi::Context::Autodiscovery::Bgp>())
{
    bgp->parent = this;

    yang_name = "autodiscovery"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::Vfi::Context::Autodiscovery::~Autodiscovery()
{
}

bool Native::L2vpn::Vfi::Context::Autodiscovery::has_data() const
{
    if (is_presence_container) return true;
    return (bgp !=  nullptr && bgp->has_data());
}

bool Native::L2vpn::Vfi::Context::Autodiscovery::has_operation() const
{
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Native::L2vpn::Vfi::Context::Autodiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autodiscovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Vfi::Context::Autodiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Vfi::Context::Autodiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::L2vpn::Vfi::Context::Autodiscovery::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Vfi::Context::Autodiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    return _children;
}

void Native::L2vpn::Vfi::Context::Autodiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2vpn::Vfi::Context::Autodiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2vpn::Vfi::Context::Autodiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp")
        return true;
    return false;
}

Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Bgp()
    :
    signaling(std::make_shared<Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling>())
{
    signaling->parent = this;

    yang_name = "bgp"; yang_parent_name = "autodiscovery"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::~Bgp()
{
}

bool Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return (signaling !=  nullptr && signaling->has_data());
}

bool Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (signaling !=  nullptr && signaling->has_operation());
}

std::string Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signaling")
    {
        if(signaling == nullptr)
        {
            signaling = std::make_shared<Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling>();
        }
        return signaling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(signaling != nullptr)
    {
        _children["signaling"] = signaling;
    }

    return _children;
}

void Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signaling")
        return true;
    return false;
}

Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Signaling()
    :
    bgp(nullptr) // presence node
    , ldp(nullptr) // presence node
{

    yang_name = "signaling"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::~Signaling()
{
}

bool Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::has_data() const
{
    if (is_presence_container) return true;
    return (bgp !=  nullptr && bgp->has_data())
	|| (ldp !=  nullptr && ldp->has_data());
}

bool Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::has_operation() const
{
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (ldp !=  nullptr && ldp->has_operation());
}

std::string Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signaling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_>();
        }
        return bgp;
    }

    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp>();
        }
        return ldp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    if(ldp != nullptr)
    {
        _children["ldp"] = ldp;
    }

    return _children;
}

void Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "ldp")
        return true;
    return false;
}

Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::Bgp_()
    :
    template_{YType::str, "template"}
{

    yang_name = "bgp"; yang_parent_name = "signaling"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::~Bgp_()
{
}

bool Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::has_data() const
{
    if (is_presence_container) return true;
    return template_.is_set;
}

bool Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_.yfilter);
}

std::string Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_.is_set || is_set(template_.yfilter)) leaf_name_data.push_back(template_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template")
    {
        template_ = value;
        template_.value_namespace = name_space;
        template_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template")
    {
        template_.yfilter = yfilter;
    }
}

bool Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::Ldp()
    :
    template_{YType::str, "template"}
{

    yang_name = "ldp"; yang_parent_name = "signaling"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::~Ldp()
{
}

bool Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::has_data() const
{
    if (is_presence_container) return true;
    return template_.is_set;
}

bool Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_.yfilter);
}

std::string Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_.is_set || is_set(template_.yfilter)) leaf_name_data.push_back(template_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template")
    {
        template_ = value;
        template_.value_namespace = name_space;
        template_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template")
    {
        template_.yfilter = yfilter;
    }
}

bool Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

Native::L2vpn::Vfi::Context::Vpn::Vpn()
    :
    id{YType::uint32, "id"}
{

    yang_name = "vpn"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::Vfi::Context::Vpn::~Vpn()
{
}

bool Native::L2vpn::Vfi::Context::Vpn::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool Native::L2vpn::Vfi::Context::Vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::L2vpn::Vfi::Context::Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Vfi::Context::Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Vfi::Context::Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Vfi::Context::Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::Vfi::Context::Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::Vfi::Context::Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::L2vpn::Vfi::Context::Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::L2vpn::Xconnect::Xconnect()
    :
    context(this, {"xc_name"})
{

    yang_name = "xconnect"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::Xconnect::~Xconnect()
{
}

bool Native::L2vpn::Xconnect::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<context.len(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Native::L2vpn::Xconnect::has_operation() const
{
    for (std::size_t index=0; index<context.len(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::L2vpn::Xconnect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        auto ent_ = std::make_shared<Native::L2vpn::Xconnect::Context>();
        ent_->parent = this;
        context.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : context.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::L2vpn::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2vpn::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2vpn::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::L2vpn::Xconnect::Context::Context()
    :
    xc_name{YType::str, "xc-name"}
        ,
    xc_mode_config_xconnect(std::make_shared<Native::L2vpn::Xconnect::Context::XcModeConfigXconnect>())
{
    xc_mode_config_xconnect->parent = this;

    yang_name = "context"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::Xconnect::Context::~Context()
{
}

bool Native::L2vpn::Xconnect::Context::has_data() const
{
    if (is_presence_container) return true;
    return xc_name.is_set
	|| (xc_mode_config_xconnect !=  nullptr && xc_mode_config_xconnect->has_data());
}

bool Native::L2vpn::Xconnect::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xc_name.yfilter)
	|| (xc_mode_config_xconnect !=  nullptr && xc_mode_config_xconnect->has_operation());
}

std::string Native::L2vpn::Xconnect::Context::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:xconnect/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::Xconnect::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context";
    ADD_KEY_TOKEN(xc_name, "xc-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Xconnect::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xc_name.is_set || is_set(xc_name.yfilter)) leaf_name_data.push_back(xc_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Xconnect::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xc-Mode-config-xconnect")
    {
        if(xc_mode_config_xconnect == nullptr)
        {
            xc_mode_config_xconnect = std::make_shared<Native::L2vpn::Xconnect::Context::XcModeConfigXconnect>();
        }
        return xc_mode_config_xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Xconnect::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(xc_mode_config_xconnect != nullptr)
    {
        _children["xc-Mode-config-xconnect"] = xc_mode_config_xconnect;
    }

    return _children;
}

void Native::L2vpn::Xconnect::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xc-name")
    {
        xc_name = value;
        xc_name.value_namespace = name_space;
        xc_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::Xconnect::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xc-name")
    {
        xc_name.yfilter = yfilter;
    }
}

bool Native::L2vpn::Xconnect::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xc-Mode-config-xconnect" || name == "xc-name")
        return true;
    return false;
}

Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::XcModeConfigXconnect()
    :
    description{YType::str, "description"},
    shutdown{YType::empty, "shutdown"}
        ,
    interworking(std::make_shared<Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Interworking>())
    , match(std::make_shared<Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match>())
    , member(std::make_shared<Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member>())
    , redundancy(std::make_shared<Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy>())
    , remote(std::make_shared<Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote>())
{
    interworking->parent = this;
    match->parent = this;
    member->parent = this;
    redundancy->parent = this;
    remote->parent = this;

    yang_name = "xc-Mode-config-xconnect"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::~XcModeConfigXconnect()
{
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| shutdown.is_set
	|| (interworking !=  nullptr && interworking->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (member !=  nullptr && member->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (interworking !=  nullptr && interworking->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (member !=  nullptr && member->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xc-Mode-config-xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interworking")
    {
        if(interworking == nullptr)
        {
            interworking = std::make_shared<Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Interworking>();
        }
        return interworking;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match>();
        }
        return match;
    }

    if(child_yang_name == "member")
    {
        if(member == nullptr)
        {
            member = std::make_shared<Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member>();
        }
        return member;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interworking != nullptr)
    {
        _children["interworking"] = interworking;
    }

    if(match != nullptr)
    {
        _children["match"] = match;
    }

    if(member != nullptr)
    {
        _children["member"] = member;
    }

    if(redundancy != nullptr)
    {
        _children["redundancy"] = redundancy;
    }

    if(remote != nullptr)
    {
        _children["remote"] = remote;
    }

    return _children;
}

void Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interworking" || name == "match" || name == "member" || name == "redundancy" || name == "remote" || name == "description" || name == "shutdown")
        return true;
    return false;
}

Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::Interworking()
    :
    ethernet{YType::empty, "ethernet"},
    ip{YType::empty, "ip"},
    vlan{YType::empty, "vlan"}
{

    yang_name = "interworking"; yang_parent_name = "xc-Mode-config-xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::~Interworking()
{
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::has_data() const
{
    if (is_presence_container) return true;
    return ethernet.is_set
	|| ip.is_set
	|| vlan.is_set;
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interworking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "ip" || name == "vlan")
        return true;
    return false;
}

Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::Match()
    :
    protocol(std::make_shared<Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol>())
{
    protocol->parent = this;

    yang_name = "match"; yang_parent_name = "xc-Mode-config-xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::~Match()
{
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::has_data() const
{
    if (is_presence_container) return true;
    return (protocol !=  nullptr && protocol->has_data());
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::has_operation() const
{
    return is_set(yfilter)
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protocol != nullptr)
    {
        _children["protocol"] = protocol;
    }

    return _children;
}

void Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::Protocol()
    :
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "protocol"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::~Protocol()
{
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return ipv6.is_set;
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6")
        return true;
    return false;
}

Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Member()
    :
    vlan{YType::uint16, "Vlan"}
        ,
    ipv4(this, {"ipv4"})
    , interface(this, {"interface"})
{

    yang_name = "member"; yang_parent_name = "xc-Mode-config-xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::~Member()
{
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return vlan.is_set;
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

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

void Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "interface" || name == "Vlan")
        return true;
    return false;
}

Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    mem_vcid{YType::uint32, "mem-vcid"}
{

    yang_name = "ipv4"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::~Ipv4()
{
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| mem_vcid.is_set;
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(mem_vcid.yfilter);
}

std::string Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4, "ipv4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mem_vcid.is_set || is_set(mem_vcid.yfilter)) leaf_name_data.push_back(mem_vcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mem-vcid")
    {
        mem_vcid = value;
        mem_vcid.value_namespace = name_space;
        mem_vcid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "mem-vcid")
    {
        mem_vcid.yfilter = yfilter;
    }
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "mem-vcid")
        return true;
    return false;
}

Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::Interface()
    :
    interface{YType::str, "interface"},
    group{YType::empty, "group"},
    service_instance{YType::empty, "service-instance"}
{

    yang_name = "interface"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::~Interface()
{
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| group.is_set
	|| service_instance.is_set;
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(service_instance.yfilter);
}

std::string Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface, "interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (service_instance.is_set || is_set(service_instance.yfilter)) leaf_name_data.push_back(service_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-instance")
    {
        service_instance = value;
        service_instance.value_namespace = name_space;
        service_instance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "service-instance")
    {
        service_instance.yfilter = yfilter;
    }
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "group" || name == "service-instance")
        return true;
    return false;
}

Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Redundancy()
    :
    delay{YType::uint8, "delay"}
        ,
    predictive(std::make_shared<Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive>())
{
    predictive->parent = this;

    yang_name = "redundancy"; yang_parent_name = "xc-Mode-config-xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::~Redundancy()
{
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::has_data() const
{
    if (is_presence_container) return true;
    return delay.is_set
	|| (predictive !=  nullptr && predictive->has_data());
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| (predictive !=  nullptr && predictive->has_operation());
}

std::string Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "predictive")
    {
        if(predictive == nullptr)
        {
            predictive = std::make_shared<Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive>();
        }
        return predictive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(predictive != nullptr)
    {
        _children["predictive"] = predictive;
    }

    return _children;
}

void Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "predictive" || name == "delay")
        return true;
    return false;
}

Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::Predictive()
    :
    disabled{YType::empty, "disabled"},
    enabled{YType::empty, "enabled"}
{

    yang_name = "predictive"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::~Predictive()
{
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::has_data() const
{
    if (is_presence_container) return true;
    return disabled.is_set
	|| enabled.is_set;
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disabled.yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "predictive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disabled.is_set || is_set(disabled.yfilter)) leaf_name_data.push_back(disabled.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disabled")
    {
        disabled = value;
        disabled.value_namespace = name_space;
        disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disabled")
    {
        disabled.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "enabled")
        return true;
    return false;
}

Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Remote()
    :
    circuit(std::make_shared<Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit>())
    , link(std::make_shared<Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link>())
{
    circuit->parent = this;
    link->parent = this;

    yang_name = "remote"; yang_parent_name = "xc-Mode-config-xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::~Remote()
{
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::has_data() const
{
    if (is_presence_container) return true;
    return (circuit !=  nullptr && circuit->has_data())
	|| (link !=  nullptr && link->has_data());
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::has_operation() const
{
    return is_set(yfilter)
	|| (circuit !=  nullptr && circuit->has_operation())
	|| (link !=  nullptr && link->has_operation());
}

std::string Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "circuit")
    {
        if(circuit == nullptr)
        {
            circuit = std::make_shared<Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit>();
        }
        return circuit;
    }

    if(child_yang_name == "link")
    {
        if(link == nullptr)
        {
            link = std::make_shared<Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link>();
        }
        return link;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(circuit != nullptr)
    {
        _children["circuit"] = circuit;
    }

    if(link != nullptr)
    {
        _children["link"] = link;
    }

    return _children;
}

void Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "circuit" || name == "link")
        return true;
    return false;
}

Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::Circuit()
    :
    id{YType::empty, "id"}
{

    yang_name = "circuit"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::~Circuit()
{
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::Link()
    :
    failure{YType::empty, "failure"}
{

    yang_name = "link"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::~Link()
{
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::has_data() const
{
    if (is_presence_container) return true;
    return failure.is_set;
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure.yfilter);
}

std::string Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.yfilter)) leaf_name_data.push_back(failure.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failure")
    {
        failure = value;
        failure.value_namespace = name_space;
        failure.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failure")
    {
        failure.yfilter = yfilter;
    }
}

bool Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnCont()
    :
    evpn(std::make_shared<Native::L2vpn::EvpnCont::Evpn>())
    , evpn_instance(std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance>())
{
    evpn->parent = this;
    evpn_instance->parent = this;

    yang_name = "evpn_cont"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::EvpnCont::~EvpnCont()
{
}

bool Native::L2vpn::EvpnCont::has_data() const
{
    if (is_presence_container) return true;
    return (evpn !=  nullptr && evpn->has_data())
	|| (evpn_instance !=  nullptr && evpn_instance->has_data());
}

bool Native::L2vpn::EvpnCont::has_operation() const
{
    return is_set(yfilter)
	|| (evpn !=  nullptr && evpn->has_operation())
	|| (evpn_instance !=  nullptr && evpn_instance->has_operation());
}

std::string Native::L2vpn::EvpnCont::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::EvpnCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:evpn_cont";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn")
    {
        if(evpn == nullptr)
        {
            evpn = std::make_shared<Native::L2vpn::EvpnCont::Evpn>();
        }
        return evpn;
    }

    if(child_yang_name == "evpn-instance")
    {
        if(evpn_instance == nullptr)
        {
            evpn_instance = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance>();
        }
        return evpn_instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(evpn != nullptr)
    {
        _children["evpn"] = evpn;
    }

    if(evpn_instance != nullptr)
    {
        _children["evpn-instance"] = evpn_instance;
    }

    return _children;
}

void Native::L2vpn::EvpnCont::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2vpn::EvpnCont::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2vpn::EvpnCont::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn" || name == "evpn-instance")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::Evpn::Evpn()
    :
    replication_type(std::make_shared<Native::L2vpn::EvpnCont::Evpn::ReplicationType>())
    , arp(std::make_shared<Native::L2vpn::EvpnCont::Evpn::Arp>())
    , mac(std::make_shared<Native::L2vpn::EvpnCont::Evpn::Mac>())
    , ip(std::make_shared<Native::L2vpn::EvpnCont::Evpn::Ip>())
    , mpls(std::make_shared<Native::L2vpn::EvpnCont::Evpn::Mpls>())
    , multihoming(std::make_shared<Native::L2vpn::EvpnCont::Evpn::Multihoming>())
    , router_id(std::make_shared<Native::L2vpn::EvpnCont::Evpn::RouterId>())
{
    replication_type->parent = this;
    arp->parent = this;
    mac->parent = this;
    ip->parent = this;
    mpls->parent = this;
    multihoming->parent = this;
    router_id->parent = this;

    yang_name = "evpn"; yang_parent_name = "evpn_cont"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::EvpnCont::Evpn::~Evpn()
{
}

bool Native::L2vpn::EvpnCont::Evpn::has_data() const
{
    if (is_presence_container) return true;
    return (replication_type !=  nullptr && replication_type->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (multihoming !=  nullptr && multihoming->has_data())
	|| (router_id !=  nullptr && router_id->has_data());
}

bool Native::L2vpn::EvpnCont::Evpn::has_operation() const
{
    return is_set(yfilter)
	|| (replication_type !=  nullptr && replication_type->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (multihoming !=  nullptr && multihoming->has_operation())
	|| (router_id !=  nullptr && router_id->has_operation());
}

std::string Native::L2vpn::EvpnCont::Evpn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:evpn_cont/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::EvpnCont::Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::Evpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::Evpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "replication-type")
    {
        if(replication_type == nullptr)
        {
            replication_type = std::make_shared<Native::L2vpn::EvpnCont::Evpn::ReplicationType>();
        }
        return replication_type;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::L2vpn::EvpnCont::Evpn::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::L2vpn::EvpnCont::Evpn::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::L2vpn::EvpnCont::Evpn::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::L2vpn::EvpnCont::Evpn::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "multihoming")
    {
        if(multihoming == nullptr)
        {
            multihoming = std::make_shared<Native::L2vpn::EvpnCont::Evpn::Multihoming>();
        }
        return multihoming;
    }

    if(child_yang_name == "router-id")
    {
        if(router_id == nullptr)
        {
            router_id = std::make_shared<Native::L2vpn::EvpnCont::Evpn::RouterId>();
        }
        return router_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::Evpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(replication_type != nullptr)
    {
        _children["replication-type"] = replication_type;
    }

    if(arp != nullptr)
    {
        _children["arp"] = arp;
    }

    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    if(multihoming != nullptr)
    {
        _children["multihoming"] = multihoming;
    }

    if(router_id != nullptr)
    {
        _children["router-id"] = router_id;
    }

    return _children;
}

void Native::L2vpn::EvpnCont::Evpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2vpn::EvpnCont::Evpn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2vpn::EvpnCont::Evpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replication-type" || name == "arp" || name == "mac" || name == "ip" || name == "mpls" || name == "multihoming" || name == "router-id")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::Evpn::ReplicationType::ReplicationType()
    :
    ingress{YType::empty, "ingress"},
    static_{YType::empty, "static"},
    p2mp{YType::empty, "p2mp"},
    mp2mp{YType::empty, "mp2mp"}
{

    yang_name = "replication-type"; yang_parent_name = "evpn"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::EvpnCont::Evpn::ReplicationType::~ReplicationType()
{
}

bool Native::L2vpn::EvpnCont::Evpn::ReplicationType::has_data() const
{
    if (is_presence_container) return true;
    return ingress.is_set
	|| static_.is_set
	|| p2mp.is_set
	|| mp2mp.is_set;
}

bool Native::L2vpn::EvpnCont::Evpn::ReplicationType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ingress.yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(p2mp.yfilter)
	|| ydk::is_set(mp2mp.yfilter);
}

std::string Native::L2vpn::EvpnCont::Evpn::ReplicationType::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:evpn_cont/evpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::EvpnCont::Evpn::ReplicationType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replication-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::Evpn::ReplicationType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ingress.is_set || is_set(ingress.yfilter)) leaf_name_data.push_back(ingress.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (p2mp.is_set || is_set(p2mp.yfilter)) leaf_name_data.push_back(p2mp.get_name_leafdata());
    if (mp2mp.is_set || is_set(mp2mp.yfilter)) leaf_name_data.push_back(mp2mp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::Evpn::ReplicationType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::Evpn::ReplicationType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::EvpnCont::Evpn::ReplicationType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ingress")
    {
        ingress = value;
        ingress.value_namespace = name_space;
        ingress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp")
    {
        p2mp = value;
        p2mp.value_namespace = name_space;
        p2mp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mp2mp")
    {
        mp2mp = value;
        mp2mp.value_namespace = name_space;
        mp2mp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::Evpn::ReplicationType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ingress")
    {
        ingress.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
    if(value_path == "p2mp")
    {
        p2mp.yfilter = yfilter;
    }
    if(value_path == "mp2mp")
    {
        mp2mp.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::Evpn::ReplicationType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress" || name == "static" || name == "p2mp" || name == "mp2mp")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::Evpn::Arp::Arp()
    :
    flooding_suppression(std::make_shared<Native::L2vpn::EvpnCont::Evpn::Arp::FloodingSuppression>())
{
    flooding_suppression->parent = this;

    yang_name = "arp"; yang_parent_name = "evpn"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::EvpnCont::Evpn::Arp::~Arp()
{
}

bool Native::L2vpn::EvpnCont::Evpn::Arp::has_data() const
{
    if (is_presence_container) return true;
    return (flooding_suppression !=  nullptr && flooding_suppression->has_data());
}

bool Native::L2vpn::EvpnCont::Evpn::Arp::has_operation() const
{
    return is_set(yfilter)
	|| (flooding_suppression !=  nullptr && flooding_suppression->has_operation());
}

std::string Native::L2vpn::EvpnCont::Evpn::Arp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:evpn_cont/evpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::EvpnCont::Evpn::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::Evpn::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::Evpn::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flooding-suppression")
    {
        if(flooding_suppression == nullptr)
        {
            flooding_suppression = std::make_shared<Native::L2vpn::EvpnCont::Evpn::Arp::FloodingSuppression>();
        }
        return flooding_suppression;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::Evpn::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flooding_suppression != nullptr)
    {
        _children["flooding-suppression"] = flooding_suppression;
    }

    return _children;
}

void Native::L2vpn::EvpnCont::Evpn::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2vpn::EvpnCont::Evpn::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2vpn::EvpnCont::Evpn::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flooding-suppression")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::Evpn::Arp::FloodingSuppression::FloodingSuppression()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "flooding-suppression"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::EvpnCont::Evpn::Arp::FloodingSuppression::~FloodingSuppression()
{
}

bool Native::L2vpn::EvpnCont::Evpn::Arp::FloodingSuppression::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::L2vpn::EvpnCont::Evpn::Arp::FloodingSuppression::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::L2vpn::EvpnCont::Evpn::Arp::FloodingSuppression::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:evpn_cont/evpn/arp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::EvpnCont::Evpn::Arp::FloodingSuppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding-suppression";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::Evpn::Arp::FloodingSuppression::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::Evpn::Arp::FloodingSuppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::Evpn::Arp::FloodingSuppression::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::EvpnCont::Evpn::Arp::FloodingSuppression::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::Evpn::Arp::FloodingSuppression::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::Evpn::Arp::FloodingSuppression::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::Evpn::Mac::Mac()
    :
    duplication(std::make_shared<Native::L2vpn::EvpnCont::Evpn::Mac::Duplication>())
{
    duplication->parent = this;

    yang_name = "mac"; yang_parent_name = "evpn"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::EvpnCont::Evpn::Mac::~Mac()
{
}

bool Native::L2vpn::EvpnCont::Evpn::Mac::has_data() const
{
    if (is_presence_container) return true;
    return (duplication !=  nullptr && duplication->has_data());
}

bool Native::L2vpn::EvpnCont::Evpn::Mac::has_operation() const
{
    return is_set(yfilter)
	|| (duplication !=  nullptr && duplication->has_operation());
}

std::string Native::L2vpn::EvpnCont::Evpn::Mac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:evpn_cont/evpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::EvpnCont::Evpn::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::Evpn::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::Evpn::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duplication")
    {
        if(duplication == nullptr)
        {
            duplication = std::make_shared<Native::L2vpn::EvpnCont::Evpn::Mac::Duplication>();
        }
        return duplication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::Evpn::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(duplication != nullptr)
    {
        _children["duplication"] = duplication;
    }

    return _children;
}

void Native::L2vpn::EvpnCont::Evpn::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2vpn::EvpnCont::Evpn::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2vpn::EvpnCont::Evpn::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duplication")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::Evpn::Mac::Duplication::Duplication()
    :
    limit{YType::uint16, "limit"},
    time{YType::uint32, "time"}
{

    yang_name = "duplication"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::EvpnCont::Evpn::Mac::Duplication::~Duplication()
{
}

bool Native::L2vpn::EvpnCont::Evpn::Mac::Duplication::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| time.is_set;
}

bool Native::L2vpn::EvpnCont::Evpn::Mac::Duplication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::L2vpn::EvpnCont::Evpn::Mac::Duplication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:evpn_cont/evpn/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::EvpnCont::Evpn::Mac::Duplication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duplication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::Evpn::Mac::Duplication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::Evpn::Mac::Duplication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::Evpn::Mac::Duplication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::EvpnCont::Evpn::Mac::Duplication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::Evpn::Mac::Duplication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::Evpn::Mac::Duplication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "time")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::Evpn::Ip::Ip()
    :
    duplication(std::make_shared<Native::L2vpn::EvpnCont::Evpn::Ip::Duplication>())
{
    duplication->parent = this;

    yang_name = "ip"; yang_parent_name = "evpn"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::EvpnCont::Evpn::Ip::~Ip()
{
}

bool Native::L2vpn::EvpnCont::Evpn::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (duplication !=  nullptr && duplication->has_data());
}

bool Native::L2vpn::EvpnCont::Evpn::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (duplication !=  nullptr && duplication->has_operation());
}

std::string Native::L2vpn::EvpnCont::Evpn::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:evpn_cont/evpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::EvpnCont::Evpn::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::Evpn::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::Evpn::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duplication")
    {
        if(duplication == nullptr)
        {
            duplication = std::make_shared<Native::L2vpn::EvpnCont::Evpn::Ip::Duplication>();
        }
        return duplication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::Evpn::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(duplication != nullptr)
    {
        _children["duplication"] = duplication;
    }

    return _children;
}

void Native::L2vpn::EvpnCont::Evpn::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2vpn::EvpnCont::Evpn::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2vpn::EvpnCont::Evpn::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duplication")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::Evpn::Ip::Duplication::Duplication()
    :
    limit{YType::uint16, "limit"},
    time{YType::uint32, "time"}
{

    yang_name = "duplication"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::EvpnCont::Evpn::Ip::Duplication::~Duplication()
{
}

bool Native::L2vpn::EvpnCont::Evpn::Ip::Duplication::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| time.is_set;
}

bool Native::L2vpn::EvpnCont::Evpn::Ip::Duplication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::L2vpn::EvpnCont::Evpn::Ip::Duplication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:evpn_cont/evpn/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::EvpnCont::Evpn::Ip::Duplication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duplication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::Evpn::Ip::Duplication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::Evpn::Ip::Duplication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::Evpn::Ip::Duplication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::EvpnCont::Evpn::Ip::Duplication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::Evpn::Ip::Duplication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::Evpn::Ip::Duplication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "time")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::Evpn::Mpls::Mpls()
    :
    label(std::make_shared<Native::L2vpn::EvpnCont::Evpn::Mpls::Label>())
{
    label->parent = this;

    yang_name = "mpls"; yang_parent_name = "evpn"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::EvpnCont::Evpn::Mpls::~Mpls()
{
}

bool Native::L2vpn::EvpnCont::Evpn::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return (label !=  nullptr && label->has_data());
}

bool Native::L2vpn::EvpnCont::Evpn::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (label !=  nullptr && label->has_operation());
}

std::string Native::L2vpn::EvpnCont::Evpn::Mpls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:evpn_cont/evpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::EvpnCont::Evpn::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::Evpn::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::Evpn::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<Native::L2vpn::EvpnCont::Evpn::Mpls::Label>();
        }
        return label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::Evpn::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(label != nullptr)
    {
        _children["label"] = label;
    }

    return _children;
}

void Native::L2vpn::EvpnCont::Evpn::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2vpn::EvpnCont::Evpn::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2vpn::EvpnCont::Evpn::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::Evpn::Mpls::Label::Label()
    :
    mode(std::make_shared<Native::L2vpn::EvpnCont::Evpn::Mpls::Label::Mode>())
{
    mode->parent = this;

    yang_name = "label"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::EvpnCont::Evpn::Mpls::Label::~Label()
{
}

bool Native::L2vpn::EvpnCont::Evpn::Mpls::Label::has_data() const
{
    if (is_presence_container) return true;
    return (mode !=  nullptr && mode->has_data());
}

bool Native::L2vpn::EvpnCont::Evpn::Mpls::Label::has_operation() const
{
    return is_set(yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::L2vpn::EvpnCont::Evpn::Mpls::Label::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:evpn_cont/evpn/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::EvpnCont::Evpn::Mpls::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::Evpn::Mpls::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::Evpn::Mpls::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::L2vpn::EvpnCont::Evpn::Mpls::Label::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::Evpn::Mpls::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    return _children;
}

void Native::L2vpn::EvpnCont::Evpn::Mpls::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2vpn::EvpnCont::Evpn::Mpls::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2vpn::EvpnCont::Evpn::Mpls::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::Evpn::Mpls::Label::Mode::Mode()
    :
    per_ce{YType::empty, "per-ce"},
    per_evi{YType::empty, "per-evi"},
    per_bd{YType::empty, "per-bd"}
{

    yang_name = "mode"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::EvpnCont::Evpn::Mpls::Label::Mode::~Mode()
{
}

bool Native::L2vpn::EvpnCont::Evpn::Mpls::Label::Mode::has_data() const
{
    if (is_presence_container) return true;
    return per_ce.is_set
	|| per_evi.is_set
	|| per_bd.is_set;
}

bool Native::L2vpn::EvpnCont::Evpn::Mpls::Label::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_ce.yfilter)
	|| ydk::is_set(per_evi.yfilter)
	|| ydk::is_set(per_bd.yfilter);
}

std::string Native::L2vpn::EvpnCont::Evpn::Mpls::Label::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:evpn_cont/evpn/mpls/label/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::EvpnCont::Evpn::Mpls::Label::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::Evpn::Mpls::Label::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_ce.is_set || is_set(per_ce.yfilter)) leaf_name_data.push_back(per_ce.get_name_leafdata());
    if (per_evi.is_set || is_set(per_evi.yfilter)) leaf_name_data.push_back(per_evi.get_name_leafdata());
    if (per_bd.is_set || is_set(per_bd.yfilter)) leaf_name_data.push_back(per_bd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::Evpn::Mpls::Label::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::Evpn::Mpls::Label::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::EvpnCont::Evpn::Mpls::Label::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-ce")
    {
        per_ce = value;
        per_ce.value_namespace = name_space;
        per_ce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-evi")
    {
        per_evi = value;
        per_evi.value_namespace = name_space;
        per_evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-bd")
    {
        per_bd = value;
        per_bd.value_namespace = name_space;
        per_bd.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::Evpn::Mpls::Label::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-ce")
    {
        per_ce.yfilter = yfilter;
    }
    if(value_path == "per-evi")
    {
        per_evi.yfilter = yfilter;
    }
    if(value_path == "per-bd")
    {
        per_bd.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::Evpn::Mpls::Label::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-ce" || name == "per-evi" || name == "per-bd")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::Evpn::Multihoming::Multihoming()
    :
    aliasing(std::make_shared<Native::L2vpn::EvpnCont::Evpn::Multihoming::Aliasing>())
{
    aliasing->parent = this;

    yang_name = "multihoming"; yang_parent_name = "evpn"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::EvpnCont::Evpn::Multihoming::~Multihoming()
{
}

bool Native::L2vpn::EvpnCont::Evpn::Multihoming::has_data() const
{
    if (is_presence_container) return true;
    return (aliasing !=  nullptr && aliasing->has_data());
}

bool Native::L2vpn::EvpnCont::Evpn::Multihoming::has_operation() const
{
    return is_set(yfilter)
	|| (aliasing !=  nullptr && aliasing->has_operation());
}

std::string Native::L2vpn::EvpnCont::Evpn::Multihoming::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:evpn_cont/evpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::EvpnCont::Evpn::Multihoming::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multihoming";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::Evpn::Multihoming::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::Evpn::Multihoming::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aliasing")
    {
        if(aliasing == nullptr)
        {
            aliasing = std::make_shared<Native::L2vpn::EvpnCont::Evpn::Multihoming::Aliasing>();
        }
        return aliasing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::Evpn::Multihoming::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aliasing != nullptr)
    {
        _children["aliasing"] = aliasing;
    }

    return _children;
}

void Native::L2vpn::EvpnCont::Evpn::Multihoming::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2vpn::EvpnCont::Evpn::Multihoming::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2vpn::EvpnCont::Evpn::Multihoming::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aliasing")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::Evpn::Multihoming::Aliasing::Aliasing()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "aliasing"; yang_parent_name = "multihoming"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::EvpnCont::Evpn::Multihoming::Aliasing::~Aliasing()
{
}

bool Native::L2vpn::EvpnCont::Evpn::Multihoming::Aliasing::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::L2vpn::EvpnCont::Evpn::Multihoming::Aliasing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::L2vpn::EvpnCont::Evpn::Multihoming::Aliasing::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:evpn_cont/evpn/multihoming/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::EvpnCont::Evpn::Multihoming::Aliasing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aliasing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::Evpn::Multihoming::Aliasing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::Evpn::Multihoming::Aliasing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::Evpn::Multihoming::Aliasing::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::EvpnCont::Evpn::Multihoming::Aliasing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::Evpn::Multihoming::Aliasing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::Evpn::Multihoming::Aliasing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::Evpn::RouterId::RouterId()
    :
    interface(std::make_shared<Native::L2vpn::EvpnCont::Evpn::RouterId::Interface>())
{
    interface->parent = this;

    yang_name = "router-id"; yang_parent_name = "evpn"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::EvpnCont::Evpn::RouterId::~RouterId()
{
}

bool Native::L2vpn::EvpnCont::Evpn::RouterId::has_data() const
{
    if (is_presence_container) return true;
    return (interface !=  nullptr && interface->has_data());
}

bool Native::L2vpn::EvpnCont::Evpn::RouterId::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::L2vpn::EvpnCont::Evpn::RouterId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:evpn_cont/evpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::EvpnCont::Evpn::RouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::Evpn::RouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::Evpn::RouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::L2vpn::EvpnCont::Evpn::RouterId::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::Evpn::RouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    return _children;
}

void Native::L2vpn::EvpnCont::Evpn::RouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2vpn::EvpnCont::Evpn::RouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2vpn::EvpnCont::Evpn::RouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    atm_subinterface(std::make_shared<Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "router-id"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::~Interface()
{
}

bool Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:evpn_cont/evpn/router-id/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:evpn_cont/evpn/router-id/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:evpn_cont/evpn/router-id/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:evpn_cont/evpn/router-id/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:evpn_cont/evpn/router-id/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::Evpn::RouterId::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::EvpnInstance()
    :
    evpn(std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn>())
{
    evpn->parent = this;

    yang_name = "evpn-instance"; yang_parent_name = "evpn_cont"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::EvpnCont::EvpnInstance::~EvpnInstance()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::has_data() const
{
    if (is_presence_container) return true;
    return (evpn !=  nullptr && evpn->has_data());
}

bool Native::L2vpn::EvpnCont::EvpnInstance::has_operation() const
{
    return is_set(yfilter)
	|| (evpn !=  nullptr && evpn->has_operation());
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:evpn_cont/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn")
    {
        if(evpn == nullptr)
        {
            evpn = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn>();
        }
        return evpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(evpn != nullptr)
    {
        _children["evpn"] = evpn;
    }

    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2vpn::EvpnCont::EvpnInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Evpn()
    :
    instance(std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance>())
{
    instance->parent = this;

    yang_name = "evpn"; yang_parent_name = "evpn-instance"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::~Evpn()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::has_data() const
{
    if (is_presence_container) return true;
    return (instance !=  nullptr && instance->has_data());
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::has_operation() const
{
    return is_set(yfilter)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:evpn_cont/evpn-instance/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::Evpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(instance != nullptr)
    {
        _children["instance"] = instance;
    }

    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance()
    :
    instance(this, {"evpn_instance_num"})
{

    yang_name = "instance"; yang_parent_name = "evpn"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::~Instance()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:evpn_cont/evpn-instance/evpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::Instance_()
    :
    evpn_instance_num{YType::str, "evpn-instance-num"}
        ,
    point_to_point(nullptr) // presence node
    , vlan_aware(nullptr) // presence node
    , vlan_based(nullptr) // presence node
    , vlan_bundle(nullptr) // presence node
{

    yang_name = "instance"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::~Instance_()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::has_data() const
{
    if (is_presence_container) return true;
    return evpn_instance_num.is_set
	|| (point_to_point !=  nullptr && point_to_point->has_data())
	|| (vlan_aware !=  nullptr && vlan_aware->has_data())
	|| (vlan_based !=  nullptr && vlan_based->has_data())
	|| (vlan_bundle !=  nullptr && vlan_bundle->has_data());
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evpn_instance_num.yfilter)
	|| (point_to_point !=  nullptr && point_to_point->has_operation())
	|| (vlan_aware !=  nullptr && vlan_aware->has_operation())
	|| (vlan_based !=  nullptr && vlan_based->has_operation())
	|| (vlan_bundle !=  nullptr && vlan_bundle->has_operation());
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:evpn_cont/evpn-instance/evpn/instance/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(evpn_instance_num, "evpn-instance-num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evpn_instance_num.is_set || is_set(evpn_instance_num.yfilter)) leaf_name_data.push_back(evpn_instance_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "point-to-point")
    {
        if(point_to_point == nullptr)
        {
            point_to_point = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint>();
        }
        return point_to_point;
    }

    if(child_yang_name == "vlan-aware")
    {
        if(vlan_aware == nullptr)
        {
            vlan_aware = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware>();
        }
        return vlan_aware;
    }

    if(child_yang_name == "vlan-based")
    {
        if(vlan_based == nullptr)
        {
            vlan_based = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased>();
        }
        return vlan_based;
    }

    if(child_yang_name == "vlan-bundle")
    {
        if(vlan_bundle == nullptr)
        {
            vlan_bundle = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle>();
        }
        return vlan_bundle;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(point_to_point != nullptr)
    {
        _children["point-to-point"] = point_to_point;
    }

    if(vlan_aware != nullptr)
    {
        _children["vlan-aware"] = vlan_aware;
    }

    if(vlan_based != nullptr)
    {
        _children["vlan-based"] = vlan_based;
    }

    if(vlan_bundle != nullptr)
    {
        _children["vlan-bundle"] = vlan_bundle;
    }

    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evpn-instance-num")
    {
        evpn_instance_num = value;
        evpn_instance_num.value_namespace = name_space;
        evpn_instance_num.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evpn-instance-num")
    {
        evpn_instance_num.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "point-to-point" || name == "vlan-aware" || name == "vlan-based" || name == "vlan-bundle" || name == "evpn-instance-num")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::PointToPoint()
    :
    encapsulation{YType::enumeration, "encapsulation"}
        ,
    auto_route_target_cont(std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::AutoRouteTargetCont>())
    , rd(std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::Rd>())
    , route_target(std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget>())
{
    auto_route_target_cont->parent = this;
    rd->parent = this;
    route_target->parent = this;

    yang_name = "point-to-point"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::~PointToPoint()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::has_data() const
{
    if (is_presence_container) return true;
    return encapsulation.is_set
	|| (auto_route_target_cont !=  nullptr && auto_route_target_cont->has_data())
	|| (rd !=  nullptr && rd->has_data())
	|| (route_target !=  nullptr && route_target->has_data());
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| (auto_route_target_cont !=  nullptr && auto_route_target_cont->has_operation())
	|| (rd !=  nullptr && rd->has_operation())
	|| (route_target !=  nullptr && route_target->has_operation());
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "point-to-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-route-target_cont")
    {
        if(auto_route_target_cont == nullptr)
        {
            auto_route_target_cont = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::AutoRouteTargetCont>();
        }
        return auto_route_target_cont;
    }

    if(child_yang_name == "rd")
    {
        if(rd == nullptr)
        {
            rd = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::Rd>();
        }
        return rd;
    }

    if(child_yang_name == "route-target")
    {
        if(route_target == nullptr)
        {
            route_target = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget>();
        }
        return route_target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_route_target_cont != nullptr)
    {
        _children["auto-route-target_cont"] = auto_route_target_cont;
    }

    if(rd != nullptr)
    {
        _children["rd"] = rd;
    }

    if(route_target != nullptr)
    {
        _children["route-target"] = route_target;
    }

    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-route-target_cont" || name == "rd" || name == "route-target" || name == "encapsulation")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::AutoRouteTargetCont::AutoRouteTargetCont()
    :
    auto_route_target{YType::empty, "auto-route-target"}
{

    yang_name = "auto-route-target_cont"; yang_parent_name = "point-to-point"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::AutoRouteTargetCont::~AutoRouteTargetCont()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::AutoRouteTargetCont::has_data() const
{
    if (is_presence_container) return true;
    return auto_route_target.is_set;
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::AutoRouteTargetCont::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_route_target.yfilter);
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::AutoRouteTargetCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-route-target_cont";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::AutoRouteTargetCont::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_route_target.is_set || is_set(auto_route_target.yfilter)) leaf_name_data.push_back(auto_route_target.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::AutoRouteTargetCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::AutoRouteTargetCont::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::AutoRouteTargetCont::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-route-target")
    {
        auto_route_target = value;
        auto_route_target.value_namespace = name_space;
        auto_route_target.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::AutoRouteTargetCont::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-route-target")
    {
        auto_route_target.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::AutoRouteTargetCont::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-route-target")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::Rd::Rd()
    :
    rd_value{YType::str, "rd-value"}
{

    yang_name = "rd"; yang_parent_name = "point-to-point"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::Rd::~Rd()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::Rd::has_data() const
{
    if (is_presence_container) return true;
    return rd_value.is_set;
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::Rd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd_value.yfilter);
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::Rd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::Rd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd_value.is_set || is_set(rd_value.yfilter)) leaf_name_data.push_back(rd_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::Rd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::Rd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::Rd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd-value")
    {
        rd_value = value;
        rd_value.value_namespace = name_space;
        rd_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::Rd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd-value")
    {
        rd_value.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::Rd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rd-value")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::RouteTarget()
    :
    rt_value{YType::str, "rt-value"}
        ,
    both(std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Both>())
    , export_(std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Export>())
    , import(std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Import>())
{
    both->parent = this;
    export_->parent = this;
    import->parent = this;

    yang_name = "route-target"; yang_parent_name = "point-to-point"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::~RouteTarget()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::has_data() const
{
    if (is_presence_container) return true;
    return rt_value.is_set
	|| (both !=  nullptr && both->has_data())
	|| (export_ !=  nullptr && export_->has_data())
	|| (import !=  nullptr && import->has_data());
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt_value.yfilter)
	|| (both !=  nullptr && both->has_operation())
	|| (export_ !=  nullptr && export_->has_operation())
	|| (import !=  nullptr && import->has_operation());
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_value.is_set || is_set(rt_value.yfilter)) leaf_name_data.push_back(rt_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "both")
    {
        if(both == nullptr)
        {
            both = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Both>();
        }
        return both;
    }

    if(child_yang_name == "export")
    {
        if(export_ == nullptr)
        {
            export_ = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Export>();
        }
        return export_;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Import>();
        }
        return import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(both != nullptr)
    {
        _children["both"] = both;
    }

    if(export_ != nullptr)
    {
        _children["export"] = export_;
    }

    if(import != nullptr)
    {
        _children["import"] = import;
    }

    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt-value")
    {
        rt_value = value;
        rt_value.value_namespace = name_space;
        rt_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt-value")
    {
        rt_value.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "both" || name == "export" || name == "import" || name == "rt-value")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Both::Both()
    :
    rt_value{YType::str, "rt-value"}
{

    yang_name = "both"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Both::~Both()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Both::has_data() const
{
    if (is_presence_container) return true;
    return rt_value.is_set;
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Both::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt_value.yfilter);
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Both::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "both";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Both::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_value.is_set || is_set(rt_value.yfilter)) leaf_name_data.push_back(rt_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Both::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Both::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Both::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt-value")
    {
        rt_value = value;
        rt_value.value_namespace = name_space;
        rt_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Both::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt-value")
    {
        rt_value.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Both::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-value")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Export::Export()
    :
    rt_value{YType::str, "rt-value"}
{

    yang_name = "export"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Export::~Export()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Export::has_data() const
{
    if (is_presence_container) return true;
    return rt_value.is_set;
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Export::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt_value.yfilter);
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Export::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Export::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_value.is_set || is_set(rt_value.yfilter)) leaf_name_data.push_back(rt_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Export::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Export::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Export::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt-value")
    {
        rt_value = value;
        rt_value.value_namespace = name_space;
        rt_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Export::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt-value")
    {
        rt_value.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Export::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-value")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Import::Import()
    :
    rt_value{YType::str, "rt-value"}
{

    yang_name = "import"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Import::~Import()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Import::has_data() const
{
    if (is_presence_container) return true;
    return rt_value.is_set;
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt_value.yfilter);
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_value.is_set || is_set(rt_value.yfilter)) leaf_name_data.push_back(rt_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt-value")
    {
        rt_value = value;
        rt_value.value_namespace = name_space;
        rt_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt-value")
    {
        rt_value.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::RouteTarget::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-value")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::VlanAware()
    :
    encapsulation{YType::enumeration, "encapsulation"}
        ,
    auto_route_target_cont(std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::AutoRouteTargetCont>())
    , rd(std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::Rd>())
    , route_target(std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget>())
{
    auto_route_target_cont->parent = this;
    rd->parent = this;
    route_target->parent = this;

    yang_name = "vlan-aware"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::~VlanAware()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::has_data() const
{
    if (is_presence_container) return true;
    return encapsulation.is_set
	|| (auto_route_target_cont !=  nullptr && auto_route_target_cont->has_data())
	|| (rd !=  nullptr && rd->has_data())
	|| (route_target !=  nullptr && route_target->has_data());
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| (auto_route_target_cont !=  nullptr && auto_route_target_cont->has_operation())
	|| (rd !=  nullptr && rd->has_operation())
	|| (route_target !=  nullptr && route_target->has_operation());
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-aware";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-route-target_cont")
    {
        if(auto_route_target_cont == nullptr)
        {
            auto_route_target_cont = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::AutoRouteTargetCont>();
        }
        return auto_route_target_cont;
    }

    if(child_yang_name == "rd")
    {
        if(rd == nullptr)
        {
            rd = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::Rd>();
        }
        return rd;
    }

    if(child_yang_name == "route-target")
    {
        if(route_target == nullptr)
        {
            route_target = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget>();
        }
        return route_target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_route_target_cont != nullptr)
    {
        _children["auto-route-target_cont"] = auto_route_target_cont;
    }

    if(rd != nullptr)
    {
        _children["rd"] = rd;
    }

    if(route_target != nullptr)
    {
        _children["route-target"] = route_target;
    }

    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-route-target_cont" || name == "rd" || name == "route-target" || name == "encapsulation")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::AutoRouteTargetCont::AutoRouteTargetCont()
    :
    auto_route_target{YType::empty, "auto-route-target"}
{

    yang_name = "auto-route-target_cont"; yang_parent_name = "vlan-aware"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::AutoRouteTargetCont::~AutoRouteTargetCont()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::AutoRouteTargetCont::has_data() const
{
    if (is_presence_container) return true;
    return auto_route_target.is_set;
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::AutoRouteTargetCont::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_route_target.yfilter);
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::AutoRouteTargetCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-route-target_cont";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::AutoRouteTargetCont::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_route_target.is_set || is_set(auto_route_target.yfilter)) leaf_name_data.push_back(auto_route_target.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::AutoRouteTargetCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::AutoRouteTargetCont::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::AutoRouteTargetCont::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-route-target")
    {
        auto_route_target = value;
        auto_route_target.value_namespace = name_space;
        auto_route_target.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::AutoRouteTargetCont::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-route-target")
    {
        auto_route_target.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::AutoRouteTargetCont::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-route-target")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::Rd::Rd()
    :
    rd_value{YType::str, "rd-value"}
{

    yang_name = "rd"; yang_parent_name = "vlan-aware"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::Rd::~Rd()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::Rd::has_data() const
{
    if (is_presence_container) return true;
    return rd_value.is_set;
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::Rd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd_value.yfilter);
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::Rd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::Rd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd_value.is_set || is_set(rd_value.yfilter)) leaf_name_data.push_back(rd_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::Rd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::Rd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::Rd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd-value")
    {
        rd_value = value;
        rd_value.value_namespace = name_space;
        rd_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::Rd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd-value")
    {
        rd_value.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::Rd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rd-value")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::RouteTarget()
    :
    rt_value{YType::str, "rt-value"}
        ,
    both(std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Both>())
    , export_(std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Export>())
    , import(std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Import>())
{
    both->parent = this;
    export_->parent = this;
    import->parent = this;

    yang_name = "route-target"; yang_parent_name = "vlan-aware"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::~RouteTarget()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::has_data() const
{
    if (is_presence_container) return true;
    return rt_value.is_set
	|| (both !=  nullptr && both->has_data())
	|| (export_ !=  nullptr && export_->has_data())
	|| (import !=  nullptr && import->has_data());
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt_value.yfilter)
	|| (both !=  nullptr && both->has_operation())
	|| (export_ !=  nullptr && export_->has_operation())
	|| (import !=  nullptr && import->has_operation());
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_value.is_set || is_set(rt_value.yfilter)) leaf_name_data.push_back(rt_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "both")
    {
        if(both == nullptr)
        {
            both = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Both>();
        }
        return both;
    }

    if(child_yang_name == "export")
    {
        if(export_ == nullptr)
        {
            export_ = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Export>();
        }
        return export_;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Import>();
        }
        return import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(both != nullptr)
    {
        _children["both"] = both;
    }

    if(export_ != nullptr)
    {
        _children["export"] = export_;
    }

    if(import != nullptr)
    {
        _children["import"] = import;
    }

    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt-value")
    {
        rt_value = value;
        rt_value.value_namespace = name_space;
        rt_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt-value")
    {
        rt_value.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "both" || name == "export" || name == "import" || name == "rt-value")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Both::Both()
    :
    rt_value{YType::str, "rt-value"}
{

    yang_name = "both"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Both::~Both()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Both::has_data() const
{
    if (is_presence_container) return true;
    return rt_value.is_set;
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Both::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt_value.yfilter);
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Both::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "both";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Both::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_value.is_set || is_set(rt_value.yfilter)) leaf_name_data.push_back(rt_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Both::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Both::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Both::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt-value")
    {
        rt_value = value;
        rt_value.value_namespace = name_space;
        rt_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Both::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt-value")
    {
        rt_value.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Both::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-value")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Export::Export()
    :
    rt_value{YType::str, "rt-value"}
{

    yang_name = "export"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Export::~Export()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Export::has_data() const
{
    if (is_presence_container) return true;
    return rt_value.is_set;
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Export::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt_value.yfilter);
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Export::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Export::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_value.is_set || is_set(rt_value.yfilter)) leaf_name_data.push_back(rt_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Export::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Export::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Export::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt-value")
    {
        rt_value = value;
        rt_value.value_namespace = name_space;
        rt_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Export::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt-value")
    {
        rt_value.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Export::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-value")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Import::Import()
    :
    rt_value{YType::str, "rt-value"}
{

    yang_name = "import"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Import::~Import()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Import::has_data() const
{
    if (is_presence_container) return true;
    return rt_value.is_set;
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt_value.yfilter);
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_value.is_set || is_set(rt_value.yfilter)) leaf_name_data.push_back(rt_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt-value")
    {
        rt_value = value;
        rt_value.value_namespace = name_space;
        rt_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt-value")
    {
        rt_value.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::RouteTarget::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-value")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::VlanBased()
    :
    encapsulation{YType::enumeration, "encapsulation"}
        ,
    auto_route_target_cont(std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::AutoRouteTargetCont>())
    , rd(std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::Rd>())
    , route_target(std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget>())
{
    auto_route_target_cont->parent = this;
    rd->parent = this;
    route_target->parent = this;

    yang_name = "vlan-based"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::~VlanBased()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::has_data() const
{
    if (is_presence_container) return true;
    return encapsulation.is_set
	|| (auto_route_target_cont !=  nullptr && auto_route_target_cont->has_data())
	|| (rd !=  nullptr && rd->has_data())
	|| (route_target !=  nullptr && route_target->has_data());
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| (auto_route_target_cont !=  nullptr && auto_route_target_cont->has_operation())
	|| (rd !=  nullptr && rd->has_operation())
	|| (route_target !=  nullptr && route_target->has_operation());
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-based";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-route-target_cont")
    {
        if(auto_route_target_cont == nullptr)
        {
            auto_route_target_cont = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::AutoRouteTargetCont>();
        }
        return auto_route_target_cont;
    }

    if(child_yang_name == "rd")
    {
        if(rd == nullptr)
        {
            rd = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::Rd>();
        }
        return rd;
    }

    if(child_yang_name == "route-target")
    {
        if(route_target == nullptr)
        {
            route_target = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget>();
        }
        return route_target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_route_target_cont != nullptr)
    {
        _children["auto-route-target_cont"] = auto_route_target_cont;
    }

    if(rd != nullptr)
    {
        _children["rd"] = rd;
    }

    if(route_target != nullptr)
    {
        _children["route-target"] = route_target;
    }

    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-route-target_cont" || name == "rd" || name == "route-target" || name == "encapsulation")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::AutoRouteTargetCont::AutoRouteTargetCont()
    :
    auto_route_target{YType::empty, "auto-route-target"}
{

    yang_name = "auto-route-target_cont"; yang_parent_name = "vlan-based"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::AutoRouteTargetCont::~AutoRouteTargetCont()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::AutoRouteTargetCont::has_data() const
{
    if (is_presence_container) return true;
    return auto_route_target.is_set;
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::AutoRouteTargetCont::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_route_target.yfilter);
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::AutoRouteTargetCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-route-target_cont";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::AutoRouteTargetCont::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_route_target.is_set || is_set(auto_route_target.yfilter)) leaf_name_data.push_back(auto_route_target.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::AutoRouteTargetCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::AutoRouteTargetCont::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::AutoRouteTargetCont::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-route-target")
    {
        auto_route_target = value;
        auto_route_target.value_namespace = name_space;
        auto_route_target.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::AutoRouteTargetCont::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-route-target")
    {
        auto_route_target.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::AutoRouteTargetCont::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-route-target")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::Rd::Rd()
    :
    rd_value{YType::str, "rd-value"}
{

    yang_name = "rd"; yang_parent_name = "vlan-based"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::Rd::~Rd()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::Rd::has_data() const
{
    if (is_presence_container) return true;
    return rd_value.is_set;
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::Rd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd_value.yfilter);
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::Rd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::Rd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd_value.is_set || is_set(rd_value.yfilter)) leaf_name_data.push_back(rd_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::Rd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::Rd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::Rd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd-value")
    {
        rd_value = value;
        rd_value.value_namespace = name_space;
        rd_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::Rd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd-value")
    {
        rd_value.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::Rd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rd-value")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::RouteTarget()
    :
    rt_value{YType::str, "rt-value"}
        ,
    both(std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Both>())
    , export_(std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Export>())
    , import(std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Import>())
{
    both->parent = this;
    export_->parent = this;
    import->parent = this;

    yang_name = "route-target"; yang_parent_name = "vlan-based"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::~RouteTarget()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::has_data() const
{
    if (is_presence_container) return true;
    return rt_value.is_set
	|| (both !=  nullptr && both->has_data())
	|| (export_ !=  nullptr && export_->has_data())
	|| (import !=  nullptr && import->has_data());
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt_value.yfilter)
	|| (both !=  nullptr && both->has_operation())
	|| (export_ !=  nullptr && export_->has_operation())
	|| (import !=  nullptr && import->has_operation());
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_value.is_set || is_set(rt_value.yfilter)) leaf_name_data.push_back(rt_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "both")
    {
        if(both == nullptr)
        {
            both = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Both>();
        }
        return both;
    }

    if(child_yang_name == "export")
    {
        if(export_ == nullptr)
        {
            export_ = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Export>();
        }
        return export_;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Import>();
        }
        return import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(both != nullptr)
    {
        _children["both"] = both;
    }

    if(export_ != nullptr)
    {
        _children["export"] = export_;
    }

    if(import != nullptr)
    {
        _children["import"] = import;
    }

    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt-value")
    {
        rt_value = value;
        rt_value.value_namespace = name_space;
        rt_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt-value")
    {
        rt_value.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "both" || name == "export" || name == "import" || name == "rt-value")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Both::Both()
    :
    rt_value{YType::str, "rt-value"}
{

    yang_name = "both"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Both::~Both()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Both::has_data() const
{
    if (is_presence_container) return true;
    return rt_value.is_set;
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Both::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt_value.yfilter);
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Both::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "both";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Both::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_value.is_set || is_set(rt_value.yfilter)) leaf_name_data.push_back(rt_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Both::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Both::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Both::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt-value")
    {
        rt_value = value;
        rt_value.value_namespace = name_space;
        rt_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Both::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt-value")
    {
        rt_value.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Both::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-value")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Export::Export()
    :
    rt_value{YType::str, "rt-value"}
{

    yang_name = "export"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Export::~Export()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Export::has_data() const
{
    if (is_presence_container) return true;
    return rt_value.is_set;
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Export::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt_value.yfilter);
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Export::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Export::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_value.is_set || is_set(rt_value.yfilter)) leaf_name_data.push_back(rt_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Export::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Export::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Export::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt-value")
    {
        rt_value = value;
        rt_value.value_namespace = name_space;
        rt_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Export::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt-value")
    {
        rt_value.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Export::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-value")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Import::Import()
    :
    rt_value{YType::str, "rt-value"}
{

    yang_name = "import"; yang_parent_name = "route-target"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Import::~Import()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Import::has_data() const
{
    if (is_presence_container) return true;
    return rt_value.is_set;
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rt_value.yfilter);
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt_value.is_set || is_set(rt_value.yfilter)) leaf_name_data.push_back(rt_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rt-value")
    {
        rt_value = value;
        rt_value.value_namespace = name_space;
        rt_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rt-value")
    {
        rt_value.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::RouteTarget::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-value")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::VlanBundle()
    :
    encapsulation{YType::enumeration, "encapsulation"}
        ,
    auto_route_target_cont(std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::AutoRouteTargetCont>())
    , rd(std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::Rd>())
    , route_target(std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::RouteTarget>())
{
    auto_route_target_cont->parent = this;
    rd->parent = this;
    route_target->parent = this;

    yang_name = "vlan-bundle"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::~VlanBundle()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::has_data() const
{
    if (is_presence_container) return true;
    return encapsulation.is_set
	|| (auto_route_target_cont !=  nullptr && auto_route_target_cont->has_data())
	|| (rd !=  nullptr && rd->has_data())
	|| (route_target !=  nullptr && route_target->has_data());
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| (auto_route_target_cont !=  nullptr && auto_route_target_cont->has_operation())
	|| (rd !=  nullptr && rd->has_operation())
	|| (route_target !=  nullptr && route_target->has_operation());
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-bundle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-route-target_cont")
    {
        if(auto_route_target_cont == nullptr)
        {
            auto_route_target_cont = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::AutoRouteTargetCont>();
        }
        return auto_route_target_cont;
    }

    if(child_yang_name == "rd")
    {
        if(rd == nullptr)
        {
            rd = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::Rd>();
        }
        return rd;
    }

    if(child_yang_name == "route-target")
    {
        if(route_target == nullptr)
        {
            route_target = std::make_shared<Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::RouteTarget>();
        }
        return route_target;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_route_target_cont != nullptr)
    {
        _children["auto-route-target_cont"] = auto_route_target_cont;
    }

    if(rd != nullptr)
    {
        _children["rd"] = rd;
    }

    if(route_target != nullptr)
    {
        _children["route-target"] = route_target;
    }

    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-route-target_cont" || name == "rd" || name == "route-target" || name == "encapsulation")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::AutoRouteTargetCont::AutoRouteTargetCont()
    :
    auto_route_target{YType::empty, "auto-route-target"}
{

    yang_name = "auto-route-target_cont"; yang_parent_name = "vlan-bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::AutoRouteTargetCont::~AutoRouteTargetCont()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::AutoRouteTargetCont::has_data() const
{
    if (is_presence_container) return true;
    return auto_route_target.is_set;
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::AutoRouteTargetCont::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_route_target.yfilter);
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::AutoRouteTargetCont::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-route-target_cont";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::AutoRouteTargetCont::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_route_target.is_set || is_set(auto_route_target.yfilter)) leaf_name_data.push_back(auto_route_target.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::AutoRouteTargetCont::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::AutoRouteTargetCont::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::AutoRouteTargetCont::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-route-target")
    {
        auto_route_target = value;
        auto_route_target.value_namespace = name_space;
        auto_route_target.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::AutoRouteTargetCont::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-route-target")
    {
        auto_route_target.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::AutoRouteTargetCont::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-route-target")
        return true;
    return false;
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::Rd::Rd()
    :
    rd_value{YType::str, "rd-value"}
{

    yang_name = "rd"; yang_parent_name = "vlan-bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::Rd::~Rd()
{
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::Rd::has_data() const
{
    if (is_presence_container) return true;
    return rd_value.is_set;
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::Rd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd_value.yfilter);
}

std::string Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::Rd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::Rd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd_value.is_set || is_set(rd_value.yfilter)) leaf_name_data.push_back(rd_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::Rd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::Rd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::Rd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd-value")
    {
        rd_value = value;
        rd_value.value_namespace = name_space;
        rd_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::Rd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd-value")
    {
        rd_value.yfilter = yfilter;
    }
}

bool Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::Rd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rd-value")
        return true;
    return false;
}

const Enum::YLeaf Native::FacilityAlarm::Severity::critical {0, "critical"};

const Enum::YLeaf Native::FacilityAlarm::ExceedAction::shutdown {0, "shutdown"};

const Enum::YLeaf Native::NetworkClock::Synchronization::Mode::QL_enabled {0, "QL-enabled"};

const Enum::YLeaf Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::Encapsulation::vxlan {0, "vxlan"};
const Enum::YLeaf Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::PointToPoint::Encapsulation::mpls {1, "mpls"};

const Enum::YLeaf Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::Encapsulation::vxlan {0, "vxlan"};
const Enum::YLeaf Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanAware::Encapsulation::mpls {1, "mpls"};

const Enum::YLeaf Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::Encapsulation::vxlan {0, "vxlan"};
const Enum::YLeaf Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBased::Encapsulation::mpls {1, "mpls"};

const Enum::YLeaf Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::Encapsulation::vxlan {0, "vxlan"};
const Enum::YLeaf Native::L2vpn::EvpnCont::EvpnInstance::Evpn::Instance::Instance_::VlanBundle::Encapsulation::mpls {1, "mpls"};


}
}

