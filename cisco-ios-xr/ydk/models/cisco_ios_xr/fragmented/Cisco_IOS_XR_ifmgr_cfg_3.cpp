
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_3.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ifmgr_cfg {

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::FrameSeconds()
    :
    window{YType::uint32, "window"}
        ,
    threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame-seconds"; yang_parent_name = "link-monitoring"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::~FrameSeconds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::has_data() const
{
    if (is_presence_container) return true;
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-seconds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::Threshold()
    :
    threshold_low{YType::uint32, "threshold-low"},
    threshold_high{YType::uint32, "threshold-high"}
{

    yang_name = "threshold"; yang_parent_name = "frame-seconds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::~Threshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return threshold_low.is_set
	|| threshold_high.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_low.yfilter)
	|| ydk::is_set(threshold_high.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_low.is_set || is_set(threshold_low.yfilter)) leaf_name_data.push_back(threshold_low.get_name_leafdata());
    if (threshold_high.is_set || is_set(threshold_high.yfilter)) leaf_name_data.push_back(threshold_high.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-low")
    {
        threshold_low = value;
        threshold_low.value_namespace = name_space;
        threshold_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-high")
    {
        threshold_high = value;
        threshold_high.value_namespace = name_space;
        threshold_high.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-low")
    {
        threshold_low.yfilter = yfilter;
    }
    if(value_path == "threshold-high")
    {
        threshold_high.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-low" || name == "threshold-high")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Frame()
    :
    window{YType::uint32, "window"}
        ,
    threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame"; yang_parent_name = "link-monitoring"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::~Frame()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::has_data() const
{
    if (is_presence_container) return true;
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "window")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::Threshold()
    :
    threshold_low{YType::uint32, "threshold-low"},
    threshold_high{YType::uint32, "threshold-high"},
    multiplier_low{YType::enumeration, "multiplier-low"},
    multiplier_high{YType::enumeration, "multiplier-high"}
{

    yang_name = "threshold"; yang_parent_name = "frame"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::~Threshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return threshold_low.is_set
	|| threshold_high.is_set
	|| multiplier_low.is_set
	|| multiplier_high.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_low.yfilter)
	|| ydk::is_set(threshold_high.yfilter)
	|| ydk::is_set(multiplier_low.yfilter)
	|| ydk::is_set(multiplier_high.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_low.is_set || is_set(threshold_low.yfilter)) leaf_name_data.push_back(threshold_low.get_name_leafdata());
    if (threshold_high.is_set || is_set(threshold_high.yfilter)) leaf_name_data.push_back(threshold_high.get_name_leafdata());
    if (multiplier_low.is_set || is_set(multiplier_low.yfilter)) leaf_name_data.push_back(multiplier_low.get_name_leafdata());
    if (multiplier_high.is_set || is_set(multiplier_high.yfilter)) leaf_name_data.push_back(multiplier_high.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-low")
    {
        threshold_low = value;
        threshold_low.value_namespace = name_space;
        threshold_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-high")
    {
        threshold_high = value;
        threshold_high.value_namespace = name_space;
        threshold_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low = value;
        multiplier_low.value_namespace = name_space;
        multiplier_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier-high")
    {
        multiplier_high = value;
        multiplier_high.value_namespace = name_space;
        multiplier_high.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-low")
    {
        threshold_low.yfilter = yfilter;
    }
    if(value_path == "threshold-high")
    {
        threshold_high.yfilter = yfilter;
    }
    if(value_path == "multiplier-low")
    {
        multiplier_low.yfilter = yfilter;
    }
    if(value_path == "multiplier-high")
    {
        multiplier_high.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-low" || name == "threshold-high" || name == "multiplier-low" || name == "multiplier-high")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::CarrierDelay()
    :
    carrier_delay_up{YType::uint32, "carrier-delay-up"},
    carrier_delay_down{YType::uint32, "carrier-delay-down"}
{

    yang_name = "carrier-delay"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::~CarrierDelay()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::has_data() const
{
    if (is_presence_container) return true;
    return carrier_delay_up.is_set
	|| carrier_delay_down.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(carrier_delay_up.yfilter)
	|| ydk::is_set(carrier_delay_down.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:carrier-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (carrier_delay_up.is_set || is_set(carrier_delay_up.yfilter)) leaf_name_data.push_back(carrier_delay_up.get_name_leafdata());
    if (carrier_delay_down.is_set || is_set(carrier_delay_down.yfilter)) leaf_name_data.push_back(carrier_delay_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "carrier-delay-up")
    {
        carrier_delay_up = value;
        carrier_delay_up.value_namespace = name_space;
        carrier_delay_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carrier-delay-down")
    {
        carrier_delay_down = value;
        carrier_delay_down.value_namespace = name_space;
        carrier_delay_down.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "carrier-delay-up")
    {
        carrier_delay_up.yfilter = yfilter;
    }
    if(value_path == "carrier-delay-down")
    {
        carrier_delay_down.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "carrier-delay-up" || name == "carrier-delay-down")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanTrunkConfiguration()
    :
    tunneling_ethertype{YType::enumeration, "tunneling-ethertype"}
        ,
    native_vlan_identifier(nullptr) // presence node
    , vlan_switched(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched>())
{
    vlan_switched->parent = this;

    yang_name = "vlan-trunk-configuration"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::~VlanTrunkConfiguration()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::has_data() const
{
    if (is_presence_container) return true;
    return tunneling_ethertype.is_set
	|| (native_vlan_identifier !=  nullptr && native_vlan_identifier->has_data())
	|| (vlan_switched !=  nullptr && vlan_switched->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunneling_ethertype.yfilter)
	|| (native_vlan_identifier !=  nullptr && native_vlan_identifier->has_operation())
	|| (vlan_switched !=  nullptr && vlan_switched->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-cfg:vlan-trunk-configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunneling_ethertype.is_set || is_set(tunneling_ethertype.yfilter)) leaf_name_data.push_back(tunneling_ethertype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "native-vlan-identifier")
    {
        if(native_vlan_identifier == nullptr)
        {
            native_vlan_identifier = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier>();
        }
        return native_vlan_identifier;
    }

    if(child_yang_name == "vlan-switched")
    {
        if(vlan_switched == nullptr)
        {
            vlan_switched = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched>();
        }
        return vlan_switched;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(native_vlan_identifier != nullptr)
    {
        _children["native-vlan-identifier"] = native_vlan_identifier;
    }

    if(vlan_switched != nullptr)
    {
        _children["vlan-switched"] = vlan_switched;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunneling-ethertype")
    {
        tunneling_ethertype = value;
        tunneling_ethertype.value_namespace = name_space;
        tunneling_ethertype.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunneling-ethertype")
    {
        tunneling_ethertype.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "native-vlan-identifier" || name == "vlan-switched" || name == "tunneling-ethertype")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::NativeVlanIdentifier()
    :
    vlan_type{YType::enumeration, "vlan-type"},
    vlan_identifier{YType::uint32, "vlan-identifier"}
{

    yang_name = "native-vlan-identifier"; yang_parent_name = "vlan-trunk-configuration"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::~NativeVlanIdentifier()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::has_data() const
{
    if (is_presence_container) return true;
    return vlan_type.is_set
	|| vlan_identifier.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_type.yfilter)
	|| ydk::is_set(vlan_identifier.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "native-vlan-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_type.is_set || is_set(vlan_type.yfilter)) leaf_name_data.push_back(vlan_type.get_name_leafdata());
    if (vlan_identifier.is_set || is_set(vlan_identifier.yfilter)) leaf_name_data.push_back(vlan_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-type")
    {
        vlan_type = value;
        vlan_type.value_namespace = name_space;
        vlan_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-identifier")
    {
        vlan_identifier = value;
        vlan_identifier.value_namespace = name_space;
        vlan_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-type")
    {
        vlan_type.yfilter = yfilter;
    }
    if(value_path == "vlan-identifier")
    {
        vlan_identifier.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-type" || name == "vlan-identifier")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched::VlanSwitched()
    :
    mode{YType::enumeration, "mode"},
    access_vlan{YType::uint32, "access-vlan"},
    trunk_tag_type{YType::enumeration, "trunk-tag-type"},
    trunk_vla_ns{YType::str, "trunk-vla-ns"}
{

    yang_name = "vlan-switched"; yang_parent_name = "vlan-trunk-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched::~VlanSwitched()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set
	|| access_vlan.is_set
	|| trunk_tag_type.is_set
	|| trunk_vla_ns.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(access_vlan.yfilter)
	|| ydk::is_set(trunk_tag_type.yfilter)
	|| ydk::is_set(trunk_vla_ns.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-switched";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (access_vlan.is_set || is_set(access_vlan.yfilter)) leaf_name_data.push_back(access_vlan.get_name_leafdata());
    if (trunk_tag_type.is_set || is_set(trunk_tag_type.yfilter)) leaf_name_data.push_back(trunk_tag_type.get_name_leafdata());
    if (trunk_vla_ns.is_set || is_set(trunk_vla_ns.yfilter)) leaf_name_data.push_back(trunk_vla_ns.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-vlan")
    {
        access_vlan = value;
        access_vlan.value_namespace = name_space;
        access_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-tag-type")
    {
        trunk_tag_type = value;
        trunk_tag_type.value_namespace = name_space;
        trunk_tag_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-vla-ns")
    {
        trunk_vla_ns = value;
        trunk_vla_ns.value_namespace = name_space;
        trunk_vla_ns.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "access-vlan")
    {
        access_vlan.yfilter = yfilter;
    }
    if(value_path == "trunk-tag-type")
    {
        trunk_tag_type.yfilter = yfilter;
    }
    if(value_path == "trunk-vla-ns")
    {
        trunk_vla_ns.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "access-vlan" || name == "trunk-tag-type" || name == "trunk-vla-ns")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::SsrpSession::SsrpSession()
    :
    group_id(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId>())
{
    group_id->parent = this;

    yang_name = "ssrp-session"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::SsrpSession::~SsrpSession()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SsrpSession::has_data() const
{
    if (is_presence_container) return true;
    return (group_id !=  nullptr && group_id->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::SsrpSession::has_operation() const
{
    return is_set(yfilter)
	|| (group_id !=  nullptr && group_id->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::SsrpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-ssrp-cfg:ssrp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::SsrpSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::SsrpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-id")
    {
        if(group_id == nullptr)
        {
            group_id = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId>();
        }
        return group_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::SsrpSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group_id != nullptr)
    {
        _children["group-id"] = group_id;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::SsrpSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::SsrpSession::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SsrpSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-id")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::GroupId()
    :
    group{YType::uint32, "group"},
    id{YType::uint32, "id"}
{

    yang_name = "group-id"; yang_parent_name = "ssrp-session"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::~GroupId()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::has_data() const
{
    if (is_presence_container) return true;
    return group.is_set
	|| id.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "id")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Cdp::Cdp()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "cdp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Cdp::~Cdp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Cdp::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Cdp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Cdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cdp-cfg:cdp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Cdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Cdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Cdp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Cdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Cdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Cdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::Dwdm()
    :
    enable_vtxp{YType::boolean, "enable-vtxp"},
    network_port_id{YType::str, "network-port-id"},
    transport_admin_state{YType::enumeration, "transport-admin-state"},
    laser{YType::empty, "laser"},
    transmit_power{YType::int32, "transmit-power"},
    rx_threshold{YType::int32, "rx-threshold"},
    network_connection_id{YType::str, "network-connection-id"},
    loopback{YType::enumeration, "loopback"}
        ,
    network_srlgs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs>())
    , g709(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709>())
    , wavelength(nullptr) // presence node
{
    network_srlgs->parent = this;
    g709->parent = this;

    yang_name = "dwdm"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::~Dwdm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::has_data() const
{
    if (is_presence_container) return true;
    return enable_vtxp.is_set
	|| network_port_id.is_set
	|| transport_admin_state.is_set
	|| laser.is_set
	|| transmit_power.is_set
	|| rx_threshold.is_set
	|| network_connection_id.is_set
	|| loopback.is_set
	|| (network_srlgs !=  nullptr && network_srlgs->has_data())
	|| (g709 !=  nullptr && g709->has_data())
	|| (wavelength !=  nullptr && wavelength->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable_vtxp.yfilter)
	|| ydk::is_set(network_port_id.yfilter)
	|| ydk::is_set(transport_admin_state.yfilter)
	|| ydk::is_set(laser.yfilter)
	|| ydk::is_set(transmit_power.yfilter)
	|| ydk::is_set(rx_threshold.yfilter)
	|| ydk::is_set(network_connection_id.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| (network_srlgs !=  nullptr && network_srlgs->has_operation())
	|| (g709 !=  nullptr && g709->has_operation())
	|| (wavelength !=  nullptr && wavelength->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dwdm-ui-cfg:dwdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_vtxp.is_set || is_set(enable_vtxp.yfilter)) leaf_name_data.push_back(enable_vtxp.get_name_leafdata());
    if (network_port_id.is_set || is_set(network_port_id.yfilter)) leaf_name_data.push_back(network_port_id.get_name_leafdata());
    if (transport_admin_state.is_set || is_set(transport_admin_state.yfilter)) leaf_name_data.push_back(transport_admin_state.get_name_leafdata());
    if (laser.is_set || is_set(laser.yfilter)) leaf_name_data.push_back(laser.get_name_leafdata());
    if (transmit_power.is_set || is_set(transmit_power.yfilter)) leaf_name_data.push_back(transmit_power.get_name_leafdata());
    if (rx_threshold.is_set || is_set(rx_threshold.yfilter)) leaf_name_data.push_back(rx_threshold.get_name_leafdata());
    if (network_connection_id.is_set || is_set(network_connection_id.yfilter)) leaf_name_data.push_back(network_connection_id.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-srlgs")
    {
        if(network_srlgs == nullptr)
        {
            network_srlgs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs>();
        }
        return network_srlgs;
    }

    if(child_yang_name == "g709")
    {
        if(g709 == nullptr)
        {
            g709 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709>();
        }
        return g709;
    }

    if(child_yang_name == "wavelength")
    {
        if(wavelength == nullptr)
        {
            wavelength = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength>();
        }
        return wavelength;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(network_srlgs != nullptr)
    {
        _children["network-srlgs"] = network_srlgs;
    }

    if(g709 != nullptr)
    {
        _children["g709"] = g709;
    }

    if(wavelength != nullptr)
    {
        _children["wavelength"] = wavelength;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable-vtxp")
    {
        enable_vtxp = value;
        enable_vtxp.value_namespace = name_space;
        enable_vtxp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-port-id")
    {
        network_port_id = value;
        network_port_id.value_namespace = name_space;
        network_port_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-admin-state")
    {
        transport_admin_state = value;
        transport_admin_state.value_namespace = name_space;
        transport_admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laser")
    {
        laser = value;
        laser.value_namespace = name_space;
        laser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-power")
    {
        transmit_power = value;
        transmit_power.value_namespace = name_space;
        transmit_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-threshold")
    {
        rx_threshold = value;
        rx_threshold.value_namespace = name_space;
        rx_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-connection-id")
    {
        network_connection_id = value;
        network_connection_id.value_namespace = name_space;
        network_connection_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable-vtxp")
    {
        enable_vtxp.yfilter = yfilter;
    }
    if(value_path == "network-port-id")
    {
        network_port_id.yfilter = yfilter;
    }
    if(value_path == "transport-admin-state")
    {
        transport_admin_state.yfilter = yfilter;
    }
    if(value_path == "laser")
    {
        laser.yfilter = yfilter;
    }
    if(value_path == "transmit-power")
    {
        transmit_power.yfilter = yfilter;
    }
    if(value_path == "rx-threshold")
    {
        rx_threshold.yfilter = yfilter;
    }
    if(value_path == "network-connection-id")
    {
        network_connection_id.yfilter = yfilter;
    }
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-srlgs" || name == "g709" || name == "wavelength" || name == "enable-vtxp" || name == "network-port-id" || name == "transport-admin-state" || name == "laser" || name == "transmit-power" || name == "rx-threshold" || name == "network-connection-id" || name == "loopback")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlgs()
    :
    network_srlg(this, {"set_id"})
{

    yang_name = "network-srlgs"; yang_parent_name = "dwdm"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::~NetworkSrlgs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<network_srlg.len(); index++)
    {
        if(network_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::has_operation() const
{
    for (std::size_t index=0; index<network_srlg.len(); index++)
    {
        if(network_srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlgs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-srlg")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg>();
        ent_->parent = this;
        network_srlg.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : network_srlg.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-srlg")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::NetworkSrlg()
    :
    set_id{YType::uint32, "set-id"},
    srlg1{YType::uint32, "srlg1"},
    srlg2{YType::uint32, "srlg2"},
    srlg3{YType::uint32, "srlg3"},
    srlg4{YType::uint32, "srlg4"},
    srlg5{YType::uint32, "srlg5"},
    srlg6{YType::uint32, "srlg6"}
{

    yang_name = "network-srlg"; yang_parent_name = "network-srlgs"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::~NetworkSrlg()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::has_data() const
{
    if (is_presence_container) return true;
    return set_id.is_set
	|| srlg1.is_set
	|| srlg2.is_set
	|| srlg3.is_set
	|| srlg4.is_set
	|| srlg5.is_set
	|| srlg6.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_id.yfilter)
	|| ydk::is_set(srlg1.yfilter)
	|| ydk::is_set(srlg2.yfilter)
	|| ydk::is_set(srlg3.yfilter)
	|| ydk::is_set(srlg4.yfilter)
	|| ydk::is_set(srlg5.yfilter)
	|| ydk::is_set(srlg6.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlg";
    ADD_KEY_TOKEN(set_id, "set-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_id.is_set || is_set(set_id.yfilter)) leaf_name_data.push_back(set_id.get_name_leafdata());
    if (srlg1.is_set || is_set(srlg1.yfilter)) leaf_name_data.push_back(srlg1.get_name_leafdata());
    if (srlg2.is_set || is_set(srlg2.yfilter)) leaf_name_data.push_back(srlg2.get_name_leafdata());
    if (srlg3.is_set || is_set(srlg3.yfilter)) leaf_name_data.push_back(srlg3.get_name_leafdata());
    if (srlg4.is_set || is_set(srlg4.yfilter)) leaf_name_data.push_back(srlg4.get_name_leafdata());
    if (srlg5.is_set || is_set(srlg5.yfilter)) leaf_name_data.push_back(srlg5.get_name_leafdata());
    if (srlg6.is_set || is_set(srlg6.yfilter)) leaf_name_data.push_back(srlg6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-id")
    {
        set_id = value;
        set_id.value_namespace = name_space;
        set_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg1")
    {
        srlg1 = value;
        srlg1.value_namespace = name_space;
        srlg1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg2")
    {
        srlg2 = value;
        srlg2.value_namespace = name_space;
        srlg2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg3")
    {
        srlg3 = value;
        srlg3.value_namespace = name_space;
        srlg3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg4")
    {
        srlg4 = value;
        srlg4.value_namespace = name_space;
        srlg4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg5")
    {
        srlg5 = value;
        srlg5.value_namespace = name_space;
        srlg5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg6")
    {
        srlg6 = value;
        srlg6.value_namespace = name_space;
        srlg6.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-id")
    {
        set_id.yfilter = yfilter;
    }
    if(value_path == "srlg1")
    {
        srlg1.yfilter = yfilter;
    }
    if(value_path == "srlg2")
    {
        srlg2.yfilter = yfilter;
    }
    if(value_path == "srlg3")
    {
        srlg3.yfilter = yfilter;
    }
    if(value_path == "srlg4")
    {
        srlg4.yfilter = yfilter;
    }
    if(value_path == "srlg5")
    {
        srlg5.yfilter = yfilter;
    }
    if(value_path == "srlg6")
    {
        srlg6.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-id" || name == "srlg1" || name == "srlg2" || name == "srlg3" || name == "srlg4" || name == "srlg5" || name == "srlg6")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::G709()
    :
    proactive{YType::enumeration, "proactive"},
    bdi_to_gais{YType::empty, "bdi-to-gais"},
    tim_to_gais{YType::empty, "tim-to-gais"},
    proactive_logging_file{YType::str, "proactive-logging-file"},
    tti_processing{YType::empty, "tti-processing"},
    enable{YType::boolean, "enable"},
    framing{YType::enumeration, "framing"}
        ,
    odu(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu>())
    , otu(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu>())
    , prbs(nullptr) // presence node
    , fec(nullptr) // presence node
{
    odu->parent = this;
    otu->parent = this;

    yang_name = "g709"; yang_parent_name = "dwdm"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::~G709()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::has_data() const
{
    if (is_presence_container) return true;
    return proactive.is_set
	|| bdi_to_gais.is_set
	|| tim_to_gais.is_set
	|| proactive_logging_file.is_set
	|| tti_processing.is_set
	|| enable.is_set
	|| framing.is_set
	|| (odu !=  nullptr && odu->has_data())
	|| (otu !=  nullptr && otu->has_data())
	|| (prbs !=  nullptr && prbs->has_data())
	|| (fec !=  nullptr && fec->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proactive.yfilter)
	|| ydk::is_set(bdi_to_gais.yfilter)
	|| ydk::is_set(tim_to_gais.yfilter)
	|| ydk::is_set(proactive_logging_file.yfilter)
	|| ydk::is_set(tti_processing.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(framing.yfilter)
	|| (odu !=  nullptr && odu->has_operation())
	|| (otu !=  nullptr && otu->has_operation())
	|| (prbs !=  nullptr && prbs->has_operation())
	|| (fec !=  nullptr && fec->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proactive.is_set || is_set(proactive.yfilter)) leaf_name_data.push_back(proactive.get_name_leafdata());
    if (bdi_to_gais.is_set || is_set(bdi_to_gais.yfilter)) leaf_name_data.push_back(bdi_to_gais.get_name_leafdata());
    if (tim_to_gais.is_set || is_set(tim_to_gais.yfilter)) leaf_name_data.push_back(tim_to_gais.get_name_leafdata());
    if (proactive_logging_file.is_set || is_set(proactive_logging_file.yfilter)) leaf_name_data.push_back(proactive_logging_file.get_name_leafdata());
    if (tti_processing.is_set || is_set(tti_processing.yfilter)) leaf_name_data.push_back(tti_processing.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (framing.is_set || is_set(framing.yfilter)) leaf_name_data.push_back(framing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu")
    {
        if(odu == nullptr)
        {
            odu = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu>();
        }
        return odu;
    }

    if(child_yang_name == "otu")
    {
        if(otu == nullptr)
        {
            otu = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu>();
        }
        return otu;
    }

    if(child_yang_name == "prbs")
    {
        if(prbs == nullptr)
        {
            prbs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs>();
        }
        return prbs;
    }

    if(child_yang_name == "fec")
    {
        if(fec == nullptr)
        {
            fec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec>();
        }
        return fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(odu != nullptr)
    {
        _children["odu"] = odu;
    }

    if(otu != nullptr)
    {
        _children["otu"] = otu;
    }

    if(prbs != nullptr)
    {
        _children["prbs"] = prbs;
    }

    if(fec != nullptr)
    {
        _children["fec"] = fec;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proactive")
    {
        proactive = value;
        proactive.value_namespace = name_space;
        proactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdi-to-gais")
    {
        bdi_to_gais = value;
        bdi_to_gais.value_namespace = name_space;
        bdi_to_gais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tim-to-gais")
    {
        tim_to_gais = value;
        tim_to_gais.value_namespace = name_space;
        tim_to_gais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proactive-logging-file")
    {
        proactive_logging_file = value;
        proactive_logging_file.value_namespace = name_space;
        proactive_logging_file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tti-processing")
    {
        tti_processing = value;
        tti_processing.value_namespace = name_space;
        tti_processing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing")
    {
        framing = value;
        framing.value_namespace = name_space;
        framing.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proactive")
    {
        proactive.yfilter = yfilter;
    }
    if(value_path == "bdi-to-gais")
    {
        bdi_to_gais.yfilter = yfilter;
    }
    if(value_path == "tim-to-gais")
    {
        tim_to_gais.yfilter = yfilter;
    }
    if(value_path == "proactive-logging-file")
    {
        proactive_logging_file.yfilter = yfilter;
    }
    if(value_path == "tti-processing")
    {
        tti_processing.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "framing")
    {
        framing.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu" || name == "otu" || name == "prbs" || name == "fec" || name == "proactive" || name == "bdi-to-gais" || name == "tim-to-gais" || name == "proactive-logging-file" || name == "tti-processing" || name == "enable" || name == "framing")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::Odu()
    :
    odu_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports>())
    , odu_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds>())
    , odu_expected_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti>())
    , odu_tx_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti>())
{
    odu_reports->parent = this;
    odu_thresholds->parent = this;
    odu_expected_tti->parent = this;
    odu_tx_tti->parent = this;

    yang_name = "odu"; yang_parent_name = "g709"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::~Odu()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::has_data() const
{
    if (is_presence_container) return true;
    return (odu_reports !=  nullptr && odu_reports->has_data())
	|| (odu_thresholds !=  nullptr && odu_thresholds->has_data())
	|| (odu_expected_tti !=  nullptr && odu_expected_tti->has_data())
	|| (odu_tx_tti !=  nullptr && odu_tx_tti->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::has_operation() const
{
    return is_set(yfilter)
	|| (odu_reports !=  nullptr && odu_reports->has_operation())
	|| (odu_thresholds !=  nullptr && odu_thresholds->has_operation())
	|| (odu_expected_tti !=  nullptr && odu_expected_tti->has_operation())
	|| (odu_tx_tti !=  nullptr && odu_tx_tti->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-reports")
    {
        if(odu_reports == nullptr)
        {
            odu_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports>();
        }
        return odu_reports;
    }

    if(child_yang_name == "odu-thresholds")
    {
        if(odu_thresholds == nullptr)
        {
            odu_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds>();
        }
        return odu_thresholds;
    }

    if(child_yang_name == "odu-expected-tti")
    {
        if(odu_expected_tti == nullptr)
        {
            odu_expected_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti>();
        }
        return odu_expected_tti;
    }

    if(child_yang_name == "odu-tx-tti")
    {
        if(odu_tx_tti == nullptr)
        {
            odu_tx_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti>();
        }
        return odu_tx_tti;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(odu_reports != nullptr)
    {
        _children["odu-reports"] = odu_reports;
    }

    if(odu_thresholds != nullptr)
    {
        _children["odu-thresholds"] = odu_thresholds;
    }

    if(odu_expected_tti != nullptr)
    {
        _children["odu-expected-tti"] = odu_expected_tti;
    }

    if(odu_tx_tti != nullptr)
    {
        _children["odu-tx-tti"] = odu_tx_tti;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-reports" || name == "odu-thresholds" || name == "odu-expected-tti" || name == "odu-tx-tti")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReports()
    :
    odu_report(this, {"alarm"})
{

    yang_name = "odu-reports"; yang_parent_name = "odu"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::~OduReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<odu_report.len(); index++)
    {
        if(odu_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::has_operation() const
{
    for (std::size_t index=0; index<odu_report.len(); index++)
    {
        if(odu_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport>();
        ent_->parent = this;
        odu_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : odu_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::OduReport()
    :
    alarm{YType::enumeration, "alarm"}
{

    yang_name = "odu-report"; yang_parent_name = "odu-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::~OduReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::has_data() const
{
    if (is_presence_container) return true;
    return alarm.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alarm.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-report";
    ADD_KEY_TOKEN(alarm, "alarm");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm.is_set || is_set(alarm.yfilter)) leaf_name_data.push_back(alarm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm")
    {
        alarm = value;
        alarm.value_namespace = name_space;
        alarm.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm")
    {
        alarm.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThresholds()
    :
    odu_threshold(this, {"threshold"})
{

    yang_name = "odu-thresholds"; yang_parent_name = "odu"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::~OduThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<odu_threshold.len(); index++)
    {
        if(odu_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::has_operation() const
{
    for (std::size_t index=0; index<odu_threshold.len(); index++)
    {
        if(odu_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold>();
        ent_->parent = this;
        odu_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : odu_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::OduThreshold()
    :
    threshold{YType::enumeration, "threshold"},
    threshold_value{YType::uint32, "threshold-value"}
{

    yang_name = "odu-threshold"; yang_parent_name = "odu-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::~OduThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set
	|| threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-threshold";
    ADD_KEY_TOKEN(threshold, "threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::OduExpectedTti()
    :
    string_type{YType::enumeration, "string-type"},
    ascii_string{YType::str, "ascii-string"},
    hex_string{YType::str, "hex-string"}
{

    yang_name = "odu-expected-tti"; yang_parent_name = "odu"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::~OduExpectedTti()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::has_data() const
{
    if (is_presence_container) return true;
    return string_type.is_set
	|| ascii_string.is_set
	|| hex_string.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_type.yfilter)
	|| ydk::is_set(ascii_string.yfilter)
	|| ydk::is_set(hex_string.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-expected-tti";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());
    if (ascii_string.is_set || is_set(ascii_string.yfilter)) leaf_name_data.push_back(ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ascii-string")
    {
        ascii_string = value;
        ascii_string.value_namespace = name_space;
        ascii_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
        hex_string.value_namespace = name_space;
        hex_string.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
    if(value_path == "ascii-string")
    {
        ascii_string.yfilter = yfilter;
    }
    if(value_path == "hex-string")
    {
        hex_string.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-type" || name == "ascii-string" || name == "hex-string")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::OduTxTti()
    :
    string_type{YType::enumeration, "string-type"},
    ascii_string{YType::str, "ascii-string"},
    hex_string{YType::str, "hex-string"}
{

    yang_name = "odu-tx-tti"; yang_parent_name = "odu"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::~OduTxTti()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::has_data() const
{
    if (is_presence_container) return true;
    return string_type.is_set
	|| ascii_string.is_set
	|| hex_string.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_type.yfilter)
	|| ydk::is_set(ascii_string.yfilter)
	|| ydk::is_set(hex_string.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-tx-tti";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());
    if (ascii_string.is_set || is_set(ascii_string.yfilter)) leaf_name_data.push_back(ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ascii-string")
    {
        ascii_string = value;
        ascii_string.value_namespace = name_space;
        ascii_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
        hex_string.value_namespace = name_space;
        hex_string.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
    if(value_path == "ascii-string")
    {
        ascii_string.yfilter = yfilter;
    }
    if(value_path == "hex-string")
    {
        hex_string.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-type" || name == "ascii-string" || name == "hex-string")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Otu()
    :
    otu_expected_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti>())
    , otu_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds>())
    , frr(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr>())
    , otu_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports>())
    , otu_tx_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti>())
{
    otu_expected_tti->parent = this;
    otu_thresholds->parent = this;
    frr->parent = this;
    otu_reports->parent = this;
    otu_tx_tti->parent = this;

    yang_name = "otu"; yang_parent_name = "g709"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::~Otu()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::has_data() const
{
    if (is_presence_container) return true;
    return (otu_expected_tti !=  nullptr && otu_expected_tti->has_data())
	|| (otu_thresholds !=  nullptr && otu_thresholds->has_data())
	|| (frr !=  nullptr && frr->has_data())
	|| (otu_reports !=  nullptr && otu_reports->has_data())
	|| (otu_tx_tti !=  nullptr && otu_tx_tti->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::has_operation() const
{
    return is_set(yfilter)
	|| (otu_expected_tti !=  nullptr && otu_expected_tti->has_operation())
	|| (otu_thresholds !=  nullptr && otu_thresholds->has_operation())
	|| (frr !=  nullptr && frr->has_operation())
	|| (otu_reports !=  nullptr && otu_reports->has_operation())
	|| (otu_tx_tti !=  nullptr && otu_tx_tti->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-expected-tti")
    {
        if(otu_expected_tti == nullptr)
        {
            otu_expected_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti>();
        }
        return otu_expected_tti;
    }

    if(child_yang_name == "otu-thresholds")
    {
        if(otu_thresholds == nullptr)
        {
            otu_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds>();
        }
        return otu_thresholds;
    }

    if(child_yang_name == "frr")
    {
        if(frr == nullptr)
        {
            frr = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr>();
        }
        return frr;
    }

    if(child_yang_name == "otu-reports")
    {
        if(otu_reports == nullptr)
        {
            otu_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports>();
        }
        return otu_reports;
    }

    if(child_yang_name == "otu-tx-tti")
    {
        if(otu_tx_tti == nullptr)
        {
            otu_tx_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti>();
        }
        return otu_tx_tti;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(otu_expected_tti != nullptr)
    {
        _children["otu-expected-tti"] = otu_expected_tti;
    }

    if(otu_thresholds != nullptr)
    {
        _children["otu-thresholds"] = otu_thresholds;
    }

    if(frr != nullptr)
    {
        _children["frr"] = frr;
    }

    if(otu_reports != nullptr)
    {
        _children["otu-reports"] = otu_reports;
    }

    if(otu_tx_tti != nullptr)
    {
        _children["otu-tx-tti"] = otu_tx_tti;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-expected-tti" || name == "otu-thresholds" || name == "frr" || name == "otu-reports" || name == "otu-tx-tti")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::OtuExpectedTti()
    :
    string_type{YType::enumeration, "string-type"},
    ascii_string{YType::str, "ascii-string"},
    hex_string{YType::str, "hex-string"}
{

    yang_name = "otu-expected-tti"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::~OtuExpectedTti()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::has_data() const
{
    if (is_presence_container) return true;
    return string_type.is_set
	|| ascii_string.is_set
	|| hex_string.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_type.yfilter)
	|| ydk::is_set(ascii_string.yfilter)
	|| ydk::is_set(hex_string.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-expected-tti";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());
    if (ascii_string.is_set || is_set(ascii_string.yfilter)) leaf_name_data.push_back(ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ascii-string")
    {
        ascii_string = value;
        ascii_string.value_namespace = name_space;
        ascii_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
        hex_string.value_namespace = name_space;
        hex_string.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
    if(value_path == "ascii-string")
    {
        ascii_string.yfilter = yfilter;
    }
    if(value_path == "hex-string")
    {
        hex_string.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-type" || name == "ascii-string" || name == "hex-string")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThresholds()
    :
    otu_threshold(this, {"threshold"})
{

    yang_name = "otu-thresholds"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::~OtuThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<otu_threshold.len(); index++)
    {
        if(otu_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::has_operation() const
{
    for (std::size_t index=0; index<otu_threshold.len(); index++)
    {
        if(otu_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold>();
        ent_->parent = this;
        otu_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : otu_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::OtuThreshold()
    :
    threshold{YType::enumeration, "threshold"},
    threshold_value{YType::uint32, "threshold-value"}
{

    yang_name = "otu-threshold"; yang_parent_name = "otu-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::~OtuThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set
	|| threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-threshold";
    ADD_KEY_TOKEN(threshold, "threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::Frr()
    :
    trigger_window(nullptr) // presence node
    , revert_threshold(nullptr) // presence node
    , trigger_threshold(nullptr) // presence node
    , revert_window(nullptr) // presence node
{

    yang_name = "frr"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::~Frr()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::has_data() const
{
    if (is_presence_container) return true;
    return (trigger_window !=  nullptr && trigger_window->has_data())
	|| (revert_threshold !=  nullptr && revert_threshold->has_data())
	|| (trigger_threshold !=  nullptr && trigger_threshold->has_data())
	|| (revert_window !=  nullptr && revert_window->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::has_operation() const
{
    return is_set(yfilter)
	|| (trigger_window !=  nullptr && trigger_window->has_operation())
	|| (revert_threshold !=  nullptr && revert_threshold->has_operation())
	|| (trigger_threshold !=  nullptr && trigger_threshold->has_operation())
	|| (revert_window !=  nullptr && revert_window->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger-window")
    {
        if(trigger_window == nullptr)
        {
            trigger_window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow>();
        }
        return trigger_window;
    }

    if(child_yang_name == "revert-threshold")
    {
        if(revert_threshold == nullptr)
        {
            revert_threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold>();
        }
        return revert_threshold;
    }

    if(child_yang_name == "trigger-threshold")
    {
        if(trigger_threshold == nullptr)
        {
            trigger_threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold>();
        }
        return trigger_threshold;
    }

    if(child_yang_name == "revert-window")
    {
        if(revert_window == nullptr)
        {
            revert_window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow>();
        }
        return revert_window;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trigger_window != nullptr)
    {
        _children["trigger-window"] = trigger_window;
    }

    if(revert_threshold != nullptr)
    {
        _children["revert-threshold"] = revert_threshold;
    }

    if(trigger_threshold != nullptr)
    {
        _children["trigger-threshold"] = trigger_threshold;
    }

    if(revert_window != nullptr)
    {
        _children["revert-window"] = revert_window;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trigger-window" || name == "revert-threshold" || name == "trigger-threshold" || name == "revert-window")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::TriggerWindow()
    :
    window{YType::uint32, "window"},
    dummy{YType::uint32, "dummy"}
{

    yang_name = "trigger-window"; yang_parent_name = "frr"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::~TriggerWindow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::has_data() const
{
    if (is_presence_container) return true;
    return window.is_set
	|| dummy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| ydk::is_set(dummy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-window";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window" || name == "dummy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::RevertThreshold()
    :
    ber_base{YType::uint32, "ber-base"},
    ber_power{YType::uint32, "ber-power"}
{

    yang_name = "revert-threshold"; yang_parent_name = "frr"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::~RevertThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::has_data() const
{
    if (is_presence_container) return true;
    return ber_base.is_set
	|| ber_power.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ber_base.yfilter)
	|| ydk::is_set(ber_power.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ber_base.is_set || is_set(ber_base.yfilter)) leaf_name_data.push_back(ber_base.get_name_leafdata());
    if (ber_power.is_set || is_set(ber_power.yfilter)) leaf_name_data.push_back(ber_power.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ber-base")
    {
        ber_base = value;
        ber_base.value_namespace = name_space;
        ber_base.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ber-power")
    {
        ber_power = value;
        ber_power.value_namespace = name_space;
        ber_power.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ber-base")
    {
        ber_base.yfilter = yfilter;
    }
    if(value_path == "ber-power")
    {
        ber_power.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ber-base" || name == "ber-power")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::TriggerThreshold()
    :
    ber_base{YType::uint32, "ber-base"},
    ber_power{YType::uint32, "ber-power"}
{

    yang_name = "trigger-threshold"; yang_parent_name = "frr"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::~TriggerThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::has_data() const
{
    if (is_presence_container) return true;
    return ber_base.is_set
	|| ber_power.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ber_base.yfilter)
	|| ydk::is_set(ber_power.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ber_base.is_set || is_set(ber_base.yfilter)) leaf_name_data.push_back(ber_base.get_name_leafdata());
    if (ber_power.is_set || is_set(ber_power.yfilter)) leaf_name_data.push_back(ber_power.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ber-base")
    {
        ber_base = value;
        ber_base.value_namespace = name_space;
        ber_base.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ber-power")
    {
        ber_power = value;
        ber_power.value_namespace = name_space;
        ber_power.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ber-base")
    {
        ber_base.yfilter = yfilter;
    }
    if(value_path == "ber-power")
    {
        ber_power.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ber-base" || name == "ber-power")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::RevertWindow()
    :
    window{YType::uint32, "window"},
    dummy{YType::uint32, "dummy"}
{

    yang_name = "revert-window"; yang_parent_name = "frr"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::~RevertWindow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::has_data() const
{
    if (is_presence_container) return true;
    return window.is_set
	|| dummy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| ydk::is_set(dummy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-window";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window" || name == "dummy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReports()
    :
    otu_report(this, {"alarm"})
{

    yang_name = "otu-reports"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::~OtuReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<otu_report.len(); index++)
    {
        if(otu_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::has_operation() const
{
    for (std::size_t index=0; index<otu_report.len(); index++)
    {
        if(otu_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport>();
        ent_->parent = this;
        otu_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : otu_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::OtuReport()
    :
    alarm{YType::enumeration, "alarm"}
{

    yang_name = "otu-report"; yang_parent_name = "otu-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::~OtuReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::has_data() const
{
    if (is_presence_container) return true;
    return alarm.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alarm.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-report";
    ADD_KEY_TOKEN(alarm, "alarm");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm.is_set || is_set(alarm.yfilter)) leaf_name_data.push_back(alarm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm")
    {
        alarm = value;
        alarm.value_namespace = name_space;
        alarm.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm")
    {
        alarm.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::OtuTxTti()
    :
    string_type{YType::enumeration, "string-type"},
    ascii_string{YType::str, "ascii-string"},
    hex_string{YType::str, "hex-string"}
{

    yang_name = "otu-tx-tti"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::~OtuTxTti()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::has_data() const
{
    if (is_presence_container) return true;
    return string_type.is_set
	|| ascii_string.is_set
	|| hex_string.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_type.yfilter)
	|| ydk::is_set(ascii_string.yfilter)
	|| ydk::is_set(hex_string.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-tx-tti";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());
    if (ascii_string.is_set || is_set(ascii_string.yfilter)) leaf_name_data.push_back(ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ascii-string")
    {
        ascii_string = value;
        ascii_string.value_namespace = name_space;
        ascii_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
        hex_string.value_namespace = name_space;
        hex_string.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
    if(value_path == "ascii-string")
    {
        ascii_string.yfilter = yfilter;
    }
    if(value_path == "hex-string")
    {
        hex_string.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-type" || name == "ascii-string" || name == "hex-string")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::Prbs()
    :
    prbs_mode{YType::enumeration, "prbs-mode"},
    prbs_pattern{YType::enumeration, "prbs-pattern"}
{

    yang_name = "prbs"; yang_parent_name = "g709"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::~Prbs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::has_data() const
{
    if (is_presence_container) return true;
    return prbs_mode.is_set
	|| prbs_pattern.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prbs_mode.yfilter)
	|| ydk::is_set(prbs_pattern.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prbs_mode.is_set || is_set(prbs_mode.yfilter)) leaf_name_data.push_back(prbs_mode.get_name_leafdata());
    if (prbs_pattern.is_set || is_set(prbs_pattern.yfilter)) leaf_name_data.push_back(prbs_pattern.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prbs-mode")
    {
        prbs_mode = value;
        prbs_mode.value_namespace = name_space;
        prbs_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prbs-pattern")
    {
        prbs_pattern = value;
        prbs_pattern.value_namespace = name_space;
        prbs_pattern.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prbs-mode")
    {
        prbs_mode.yfilter = yfilter;
    }
    if(value_path == "prbs-pattern")
    {
        prbs_pattern.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prbs-mode" || name == "prbs-pattern")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::Fec()
    :
    fec_mode{YType::enumeration, "fec-mode"},
    efec_mode{YType::enumeration, "efec-mode"}
{

    yang_name = "fec"; yang_parent_name = "g709"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::~Fec()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::has_data() const
{
    if (is_presence_container) return true;
    return fec_mode.is_set
	|| efec_mode.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_mode.yfilter)
	|| ydk::is_set(efec_mode.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_mode.is_set || is_set(fec_mode.yfilter)) leaf_name_data.push_back(fec_mode.get_name_leafdata());
    if (efec_mode.is_set || is_set(efec_mode.yfilter)) leaf_name_data.push_back(efec_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-mode")
    {
        fec_mode = value;
        fec_mode.value_namespace = name_space;
        fec_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "efec-mode")
    {
        efec_mode = value;
        efec_mode.value_namespace = name_space;
        efec_mode.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-mode")
    {
        fec_mode.yfilter = yfilter;
    }
    if(value_path == "efec-mode")
    {
        efec_mode.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-mode" || name == "efec-mode")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::Wavelength()
    :
    wave_channel{YType::uint32, "wave-channel"},
    wave_channel_number{YType::enumeration, "wave-channel-number"},
    prog_frequency{YType::str, "prog-frequency"}
{

    yang_name = "wavelength"; yang_parent_name = "dwdm"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::~Wavelength()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::has_data() const
{
    if (is_presence_container) return true;
    return wave_channel.is_set
	|| wave_channel_number.is_set
	|| prog_frequency.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wave_channel.yfilter)
	|| ydk::is_set(wave_channel_number.yfilter)
	|| ydk::is_set(prog_frequency.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wavelength";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wave_channel.is_set || is_set(wave_channel.yfilter)) leaf_name_data.push_back(wave_channel.get_name_leafdata());
    if (wave_channel_number.is_set || is_set(wave_channel_number.yfilter)) leaf_name_data.push_back(wave_channel_number.get_name_leafdata());
    if (prog_frequency.is_set || is_set(prog_frequency.yfilter)) leaf_name_data.push_back(prog_frequency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wave-channel")
    {
        wave_channel = value;
        wave_channel.value_namespace = name_space;
        wave_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wave-channel-number")
    {
        wave_channel_number = value;
        wave_channel_number.value_namespace = name_space;
        wave_channel_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prog-frequency")
    {
        prog_frequency = value;
        prog_frequency.value_namespace = name_space;
        prog_frequency.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wave-channel")
    {
        wave_channel.yfilter = yfilter;
    }
    if(value_path == "wave-channel-number")
    {
        wave_channel_number.yfilter = yfilter;
    }
    if(value_path == "prog-frequency")
    {
        prog_frequency.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wave-channel" || name == "wave-channel-number" || name == "prog-frequency")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Qos()
    :
    output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output>())
    , input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input>())
{
    output->parent = this;
    input->parent = this;

    yang_name = "qos"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Qos::~Qos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::has_data() const
{
    if (is_presence_container) return true;
    return (output !=  nullptr && output->has_data())
	|| (input !=  nullptr && input->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (output !=  nullptr && output->has_operation())
	|| (input !=  nullptr && input->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-cfg:qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output>();
        }
        return output;
    }

    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(output != nullptr)
    {
        _children["output"] = output;
    }

    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output" || name == "input")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::Output()
    :
    service_policy(this, {"service_policy_name"})
    , service_policy_qos(this, {"service_policy_name"})
{

    yang_name = "output"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<service_policy.len(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.len(); index++)
    {
        if(service_policy_qos[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::has_operation() const
{
    for (std::size_t index=0; index<service_policy.len(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.len(); index++)
    {
        if(service_policy_qos[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy>();
        ent_->parent = this;
        service_policy.append(ent_);
        return ent_;
    }

    if(child_yang_name == "service-policy-qos")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos>();
        ent_->parent = this;
        service_policy_qos.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : service_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service_policy_qos.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "service-policy-qos")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"}
{

    yang_name = "service-policy"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    return service_policy_name.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    ADD_KEY_TOKEN(service_policy_name, "service-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name" || name == "account-type" || name == "l1-user-defined" || name == "spi-name" || name == "subscriber-parent-policy" || name == "resource-id" || name == "service-fragment-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::ServicePolicyQos()
    :
    service_policy_name{YType::str, "service-policy-name"}
        ,
    subscriber_group_names(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames>())
    , subscriber_parent(nullptr) // presence node
{
    subscriber_group_names->parent = this;

    yang_name = "service-policy-qos"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::~ServicePolicyQos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::has_data() const
{
    if (is_presence_container) return true;
    return service_policy_name.is_set
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_data())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_operation())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-qos";
    ADD_KEY_TOKEN(service_policy_name, "service-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-names")
    {
        if(subscriber_group_names == nullptr)
        {
            subscriber_group_names = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames>();
        }
        return subscriber_group_names;
    }

    if(child_yang_name == "subscriber-parent")
    {
        if(subscriber_parent == nullptr)
        {
            subscriber_parent = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent>();
        }
        return subscriber_parent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(subscriber_group_names != nullptr)
    {
        _children["subscriber-group-names"] = subscriber_group_names;
    }

    if(subscriber_parent != nullptr)
    {
        _children["subscriber-parent"] = subscriber_parent;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-names" || name == "subscriber-parent" || name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupNames()
    :
    subscriber_group_name(this, {"subscriber_group_string"})
{

    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::~SubscriberGroupNames()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subscriber_group_name.len(); index++)
    {
        if(subscriber_group_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_operation() const
{
    for (std::size_t index=0; index<subscriber_group_name.len(); index++)
    {
        if(subscriber_group_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-name")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        ent_->parent = this;
        subscriber_group_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : subscriber_group_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::SubscriberGroupName()
    :
    subscriber_group_string{YType::str, "subscriber-group-string"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    spi_name{YType::str, "spi-name"},
    policy_merge{YType::enumeration, "policy-merge"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"}
{

    yang_name = "subscriber-group-name"; yang_parent_name = "subscriber-group-names"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::~SubscriberGroupName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_data() const
{
    if (is_presence_container) return true;
    return subscriber_group_string.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| spi_name.is_set
	|| policy_merge.is_set
	|| subscriber_parent_policy.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_group_string.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-name";
    ADD_KEY_TOKEN(subscriber_group_string, "subscriber-group-string");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_group_string.is_set || is_set(subscriber_group_string.yfilter)) leaf_name_data.push_back(subscriber_group_string.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
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
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-string" || name == "account-type" || name == "l1-user-defined" || name == "spi-name" || name == "policy-merge" || name == "subscriber-parent-policy" || name == "resource-id" || name == "service-fragment-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::SubscriberParent()
    :
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    spi_name{YType::str, "spi-name"},
    policy_merge{YType::enumeration, "policy-merge"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"}
{

    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::has_data() const
{
    if (is_presence_container) return true;
    return account_type.is_set
	|| l1_user_defined.is_set
	|| spi_name.is_set
	|| policy_merge.is_set
	|| subscriber_parent_policy.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
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
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-type" || name == "l1-user-defined" || name == "spi-name" || name == "policy-merge" || name == "subscriber-parent-policy" || name == "resource-id" || name == "service-fragment-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::Input()
    :
    service_policy(this, {"service_policy_name"})
    , service_policy_qos(this, {"service_policy_name"})
{

    yang_name = "input"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<service_policy.len(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.len(); index++)
    {
        if(service_policy_qos[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::has_operation() const
{
    for (std::size_t index=0; index<service_policy.len(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.len(); index++)
    {
        if(service_policy_qos[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy>();
        ent_->parent = this;
        service_policy.append(ent_);
        return ent_;
    }

    if(child_yang_name == "service-policy-qos")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos>();
        ent_->parent = this;
        service_policy_qos.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : service_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : service_policy_qos.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "service-policy-qos")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"}
{

    yang_name = "service-policy"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    return service_policy_name.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    ADD_KEY_TOKEN(service_policy_name, "service-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name" || name == "account-type" || name == "l1-user-defined" || name == "spi-name" || name == "subscriber-parent-policy" || name == "resource-id" || name == "service-fragment-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::ServicePolicyQos()
    :
    service_policy_name{YType::str, "service-policy-name"}
        ,
    subscriber_group_names(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames>())
    , subscriber_parent(nullptr) // presence node
{
    subscriber_group_names->parent = this;

    yang_name = "service-policy-qos"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::~ServicePolicyQos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::has_data() const
{
    if (is_presence_container) return true;
    return service_policy_name.is_set
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_data())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter)
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_operation())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-qos";
    ADD_KEY_TOKEN(service_policy_name, "service-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-names")
    {
        if(subscriber_group_names == nullptr)
        {
            subscriber_group_names = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames>();
        }
        return subscriber_group_names;
    }

    if(child_yang_name == "subscriber-parent")
    {
        if(subscriber_parent == nullptr)
        {
            subscriber_parent = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent>();
        }
        return subscriber_parent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(subscriber_group_names != nullptr)
    {
        _children["subscriber-group-names"] = subscriber_group_names;
    }

    if(subscriber_parent != nullptr)
    {
        _children["subscriber-parent"] = subscriber_parent;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-names" || name == "subscriber-parent" || name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupNames()
    :
    subscriber_group_name(this, {"subscriber_group_string"})
{

    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::~SubscriberGroupNames()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subscriber_group_name.len(); index++)
    {
        if(subscriber_group_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_operation() const
{
    for (std::size_t index=0; index<subscriber_group_name.len(); index++)
    {
        if(subscriber_group_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-group-name")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        ent_->parent = this;
        subscriber_group_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : subscriber_group_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::SubscriberGroupName()
    :
    subscriber_group_string{YType::str, "subscriber-group-string"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    spi_name{YType::str, "spi-name"},
    policy_merge{YType::enumeration, "policy-merge"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"}
{

    yang_name = "subscriber-group-name"; yang_parent_name = "subscriber-group-names"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::~SubscriberGroupName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_data() const
{
    if (is_presence_container) return true;
    return subscriber_group_string.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| spi_name.is_set
	|| policy_merge.is_set
	|| subscriber_parent_policy.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_group_string.yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-name";
    ADD_KEY_TOKEN(subscriber_group_string, "subscriber-group-string");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_group_string.is_set || is_set(subscriber_group_string.yfilter)) leaf_name_data.push_back(subscriber_group_string.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
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
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-group-string" || name == "account-type" || name == "l1-user-defined" || name == "spi-name" || name == "policy-merge" || name == "subscriber-parent-policy" || name == "resource-id" || name == "service-fragment-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::SubscriberParent()
    :
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    spi_name{YType::str, "spi-name"},
    policy_merge{YType::enumeration, "policy-merge"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"}
{

    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::has_data() const
{
    if (is_presence_container) return true;
    return account_type.is_set
	|| l1_user_defined.is_set
	|| spi_name.is_set
	|| policy_merge.is_set
	|| subscriber_parent_policy.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(account_type.yfilter)
	|| ydk::is_set(l1_user_defined.yfilter)
	|| ydk::is_set(spi_name.yfilter)
	|| ydk::is_set(policy_merge.yfilter)
	|| ydk::is_set(subscriber_parent_policy.yfilter)
	|| ydk::is_set(resource_id.yfilter)
	|| ydk::is_set(service_fragment_parent_policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_type.is_set || is_set(account_type.yfilter)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.yfilter)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.yfilter)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.yfilter)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.yfilter)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.yfilter)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.yfilter)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "spi-name")
    {
        spi_name = value;
        spi_name.value_namespace = name_space;
        spi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
        policy_merge.value_namespace = name_space;
        policy_merge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
        subscriber_parent_policy.value_namespace = name_space;
        subscriber_parent_policy.value_namespace_prefix = name_space_prefix;
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
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "account-type")
    {
        account_type.yfilter = yfilter;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined.yfilter = yfilter;
    }
    if(value_path == "spi-name")
    {
        spi_name.yfilter = yfilter;
    }
    if(value_path == "policy-merge")
    {
        policy_merge.yfilter = yfilter;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy.yfilter = yfilter;
    }
    if(value_path == "resource-id")
    {
        resource_id.yfilter = yfilter;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-type" || name == "l1-user-defined" || name == "spi-name" || name == "policy-merge" || name == "subscriber-parent-policy" || name == "resource-id" || name == "service-fragment-parent-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::CiscoIOSXRPppMaCfgPpp()
{

    yang_name = "ppp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::~CiscoIOSXRPppMaCfgPpp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::has_operation() const
{
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-cfg:ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Lldp::Lldp()
    :
    lldp_intf_enter{YType::boolean, "lldp-intf-enter"},
    enable{YType::boolean, "enable"}
        ,
    transmit(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit>())
    , receive(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive>())
{
    transmit->parent = this;
    receive->parent = this;

    yang_name = "lldp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Lldp::~Lldp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::has_data() const
{
    if (is_presence_container) return true;
    return lldp_intf_enter.is_set
	|| enable.is_set
	|| (transmit !=  nullptr && transmit->has_data())
	|| (receive !=  nullptr && receive->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldp_intf_enter.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (transmit !=  nullptr && transmit->has_operation())
	|| (receive !=  nullptr && receive->has_operation());
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
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Lldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transmit")
    {
        if(transmit == nullptr)
        {
            transmit = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit>();
        }
        return transmit;
    }

    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive>();
        }
        return receive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Lldp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(transmit != nullptr)
    {
        _children["transmit"] = transmit;
    }

    if(receive != nullptr)
    {
        _children["receive"] = receive;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lldp-intf-enter")
    {
        lldp_intf_enter = value;
        lldp_intf_enter.value_namespace = name_space;
        lldp_intf_enter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Lldp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lldp-intf-enter")
    {
        lldp_intf_enter.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit" || name == "receive" || name == "lldp-intf-enter" || name == "enable")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::Atm::Atm()
    :
    max_vpi_bits{YType::enumeration, "max-vpi-bits"},
    vc_class{YType::str, "vc-class"}
        ,
    pvps(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps>())
    , pvcs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs>())
    , maximum_cell_packing_timers(nullptr) // presence node
    , vp_tunnels(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels>())
{
    pvps->parent = this;
    pvcs->parent = this;
    vp_tunnels->parent = this;

    yang_name = "atm"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Atm::~Atm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::has_data() const
{
    if (is_presence_container) return true;
    return max_vpi_bits.is_set
	|| vc_class.is_set
	|| (pvps !=  nullptr && pvps->has_data())
	|| (pvcs !=  nullptr && pvcs->has_data())
	|| (maximum_cell_packing_timers !=  nullptr && maximum_cell_packing_timers->has_data())
	|| (vp_tunnels !=  nullptr && vp_tunnels->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_vpi_bits.yfilter)
	|| ydk::is_set(vc_class.yfilter)
	|| (pvps !=  nullptr && pvps->has_operation())
	|| (pvcs !=  nullptr && pvcs->has_operation())
	|| (maximum_cell_packing_timers !=  nullptr && maximum_cell_packing_timers->has_operation())
	|| (vp_tunnels !=  nullptr && vp_tunnels->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-atm-vcm-cfg:atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_vpi_bits.is_set || is_set(max_vpi_bits.yfilter)) leaf_name_data.push_back(max_vpi_bits.get_name_leafdata());
    if (vc_class.is_set || is_set(vc_class.yfilter)) leaf_name_data.push_back(vc_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pvps")
    {
        if(pvps == nullptr)
        {
            pvps = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps>();
        }
        return pvps;
    }

    if(child_yang_name == "pvcs")
    {
        if(pvcs == nullptr)
        {
            pvcs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs>();
        }
        return pvcs;
    }

    if(child_yang_name == "maximum-cell-packing-timers")
    {
        if(maximum_cell_packing_timers == nullptr)
        {
            maximum_cell_packing_timers = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers>();
        }
        return maximum_cell_packing_timers;
    }

    if(child_yang_name == "vp-tunnels")
    {
        if(vp_tunnels == nullptr)
        {
            vp_tunnels = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels>();
        }
        return vp_tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pvps != nullptr)
    {
        _children["pvps"] = pvps;
    }

    if(pvcs != nullptr)
    {
        _children["pvcs"] = pvcs;
    }

    if(maximum_cell_packing_timers != nullptr)
    {
        _children["maximum-cell-packing-timers"] = maximum_cell_packing_timers;
    }

    if(vp_tunnels != nullptr)
    {
        _children["vp-tunnels"] = vp_tunnels;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-vpi-bits")
    {
        max_vpi_bits = value;
        max_vpi_bits.value_namespace = name_space;
        max_vpi_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-class")
    {
        vc_class = value;
        vc_class.value_namespace = name_space;
        vc_class.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-vpi-bits")
    {
        max_vpi_bits.yfilter = yfilter;
    }
    if(value_path == "vc-class")
    {
        vc_class.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pvps" || name == "pvcs" || name == "maximum-cell-packing-timers" || name == "vp-tunnels" || name == "max-vpi-bits" || name == "vc-class")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvps()
    :
    pvp(this, {"vpi"})
{

    yang_name = "pvps"; yang_parent_name = "atm"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::~Pvps()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pvp.len(); index++)
    {
        if(pvp[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::has_operation() const
{
    for (std::size_t index=0; index<pvp.len(); index++)
    {
        if(pvp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pvp")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp>();
        ent_->parent = this;
        pvp.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pvp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pvp")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Pvp()
    :
    vpi{YType::uint32, "vpi"},
    enable{YType::empty, "enable"},
    test_mode{YType::enumeration, "test-mode"},
    oam_segment_endpoint{YType::empty, "oam-segment-endpoint"}
        ,
    shape(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape>())
    , cell_packing(nullptr) // presence node
{
    shape->parent = this;

    yang_name = "pvp"; yang_parent_name = "pvps"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::~Pvp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::has_data() const
{
    if (is_presence_container) return true;
    return vpi.is_set
	|| enable.is_set
	|| test_mode.is_set
	|| oam_segment_endpoint.is_set
	|| (shape !=  nullptr && shape->has_data())
	|| (cell_packing !=  nullptr && cell_packing->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpi.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(test_mode.yfilter)
	|| ydk::is_set(oam_segment_endpoint.yfilter)
	|| (shape !=  nullptr && shape->has_operation())
	|| (cell_packing !=  nullptr && cell_packing->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvp";
    ADD_KEY_TOKEN(vpi, "vpi");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpi.is_set || is_set(vpi.yfilter)) leaf_name_data.push_back(vpi.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (test_mode.is_set || is_set(test_mode.yfilter)) leaf_name_data.push_back(test_mode.get_name_leafdata());
    if (oam_segment_endpoint.is_set || is_set(oam_segment_endpoint.yfilter)) leaf_name_data.push_back(oam_segment_endpoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape>();
        }
        return shape;
    }

    if(child_yang_name == "cell-packing")
    {
        if(cell_packing == nullptr)
        {
            cell_packing = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking>();
        }
        return cell_packing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(shape != nullptr)
    {
        _children["shape"] = shape;
    }

    if(cell_packing != nullptr)
    {
        _children["cell-packing"] = cell_packing;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpi")
    {
        vpi = value;
        vpi.value_namespace = name_space;
        vpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "test-mode")
    {
        test_mode = value;
        test_mode.value_namespace = name_space;
        test_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oam-segment-endpoint")
    {
        oam_segment_endpoint = value;
        oam_segment_endpoint.value_namespace = name_space;
        oam_segment_endpoint.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpi")
    {
        vpi.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "test-mode")
    {
        test_mode.yfilter = yfilter;
    }
    if(value_path == "oam-segment-endpoint")
    {
        oam_segment_endpoint.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shape" || name == "cell-packing" || name == "vpi" || name == "enable" || name == "test-mode" || name == "oam-segment-endpoint")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::Shape()
    :
    type{YType::enumeration, "type"},
    peak_cell_rate{YType::uint32, "peak-cell-rate"},
    sustained_cell_rate{YType::uint32, "sustained-cell-rate"},
    burst_size{YType::uint32, "burst-size"}
{

    yang_name = "shape"; yang_parent_name = "pvp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::~Shape()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| peak_cell_rate.is_set
	|| sustained_cell_rate.is_set
	|| burst_size.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(peak_cell_rate.yfilter)
	|| ydk::is_set(sustained_cell_rate.yfilter)
	|| ydk::is_set(burst_size.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (peak_cell_rate.is_set || is_set(peak_cell_rate.yfilter)) leaf_name_data.push_back(peak_cell_rate.get_name_leafdata());
    if (sustained_cell_rate.is_set || is_set(sustained_cell_rate.yfilter)) leaf_name_data.push_back(sustained_cell_rate.get_name_leafdata());
    if (burst_size.is_set || is_set(burst_size.yfilter)) leaf_name_data.push_back(burst_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-cell-rate")
    {
        peak_cell_rate = value;
        peak_cell_rate.value_namespace = name_space;
        peak_cell_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sustained-cell-rate")
    {
        sustained_cell_rate = value;
        sustained_cell_rate.value_namespace = name_space;
        sustained_cell_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-size")
    {
        burst_size = value;
        burst_size.value_namespace = name_space;
        burst_size.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "peak-cell-rate")
    {
        peak_cell_rate.yfilter = yfilter;
    }
    if(value_path == "sustained-cell-rate")
    {
        sustained_cell_rate.yfilter = yfilter;
    }
    if(value_path == "burst-size")
    {
        burst_size.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "peak-cell-rate" || name == "sustained-cell-rate" || name == "burst-size")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::CellPacking()
    :
    maximum_cells_packed{YType::uint32, "maximum-cells-packed"},
    cell_packing_timer_id{YType::uint32, "cell-packing-timer-id"}
{

    yang_name = "cell-packing"; yang_parent_name = "pvp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::~CellPacking()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::has_data() const
{
    if (is_presence_container) return true;
    return maximum_cells_packed.is_set
	|| cell_packing_timer_id.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_cells_packed.yfilter)
	|| ydk::is_set(cell_packing_timer_id.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cell-packing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_cells_packed.is_set || is_set(maximum_cells_packed.yfilter)) leaf_name_data.push_back(maximum_cells_packed.get_name_leafdata());
    if (cell_packing_timer_id.is_set || is_set(cell_packing_timer_id.yfilter)) leaf_name_data.push_back(cell_packing_timer_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-cells-packed")
    {
        maximum_cells_packed = value;
        maximum_cells_packed.value_namespace = name_space;
        maximum_cells_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cell-packing-timer-id")
    {
        cell_packing_timer_id = value;
        cell_packing_timer_id.value_namespace = name_space;
        cell_packing_timer_id.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-cells-packed")
    {
        maximum_cells_packed.yfilter = yfilter;
    }
    if(value_path == "cell-packing-timer-id")
    {
        cell_packing_timer_id.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-cells-packed" || name == "cell-packing-timer-id")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvcs()
    :
    pvc(this, {"vpi", "vci", "pv_ctype"})
{

    yang_name = "pvcs"; yang_parent_name = "atm"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::~Pvcs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pvc.len(); index++)
    {
        if(pvc[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::has_operation() const
{
    for (std::size_t index=0; index<pvc.len(); index++)
    {
        if(pvc[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvcs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pvc")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc>();
        ent_->parent = this;
        pvc.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pvc.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pvc")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Pvc()
    :
    vpi{YType::uint32, "vpi"},
    vci{YType::uint32, "vci"},
    pv_ctype{YType::enumeration, "pv-ctype"},
    vc_class{YType::str, "vc-class"},
    encapsulation{YType::enumeration, "encapsulation"},
    enable{YType::empty, "enable"},
    test_mode{YType::enumeration, "test-mode"},
    oam_segment_endpoint{YType::empty, "oam-segment-endpoint"}
        ,
    shape(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape>())
    , oam_emulation(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation>())
    , cell_packing(nullptr) // presence node
{
    shape->parent = this;
    oam_emulation->parent = this;

    yang_name = "pvc"; yang_parent_name = "pvcs"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::~Pvc()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::has_data() const
{
    if (is_presence_container) return true;
    return vpi.is_set
	|| vci.is_set
	|| pv_ctype.is_set
	|| vc_class.is_set
	|| encapsulation.is_set
	|| enable.is_set
	|| test_mode.is_set
	|| oam_segment_endpoint.is_set
	|| (shape !=  nullptr && shape->has_data())
	|| (oam_emulation !=  nullptr && oam_emulation->has_data())
	|| (cell_packing !=  nullptr && cell_packing->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpi.yfilter)
	|| ydk::is_set(vci.yfilter)
	|| ydk::is_set(pv_ctype.yfilter)
	|| ydk::is_set(vc_class.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(test_mode.yfilter)
	|| ydk::is_set(oam_segment_endpoint.yfilter)
	|| (shape !=  nullptr && shape->has_operation())
	|| (oam_emulation !=  nullptr && oam_emulation->has_operation())
	|| (cell_packing !=  nullptr && cell_packing->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvc";
    ADD_KEY_TOKEN(vpi, "vpi");
    ADD_KEY_TOKEN(vci, "vci");
    ADD_KEY_TOKEN(pv_ctype, "pv-ctype");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpi.is_set || is_set(vpi.yfilter)) leaf_name_data.push_back(vpi.get_name_leafdata());
    if (vci.is_set || is_set(vci.yfilter)) leaf_name_data.push_back(vci.get_name_leafdata());
    if (pv_ctype.is_set || is_set(pv_ctype.yfilter)) leaf_name_data.push_back(pv_ctype.get_name_leafdata());
    if (vc_class.is_set || is_set(vc_class.yfilter)) leaf_name_data.push_back(vc_class.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (test_mode.is_set || is_set(test_mode.yfilter)) leaf_name_data.push_back(test_mode.get_name_leafdata());
    if (oam_segment_endpoint.is_set || is_set(oam_segment_endpoint.yfilter)) leaf_name_data.push_back(oam_segment_endpoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape>();
        }
        return shape;
    }

    if(child_yang_name == "oam-emulation")
    {
        if(oam_emulation == nullptr)
        {
            oam_emulation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation>();
        }
        return oam_emulation;
    }

    if(child_yang_name == "cell-packing")
    {
        if(cell_packing == nullptr)
        {
            cell_packing = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking>();
        }
        return cell_packing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(shape != nullptr)
    {
        _children["shape"] = shape;
    }

    if(oam_emulation != nullptr)
    {
        _children["oam-emulation"] = oam_emulation;
    }

    if(cell_packing != nullptr)
    {
        _children["cell-packing"] = cell_packing;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpi")
    {
        vpi = value;
        vpi.value_namespace = name_space;
        vpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vci")
    {
        vci = value;
        vci.value_namespace = name_space;
        vci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pv-ctype")
    {
        pv_ctype = value;
        pv_ctype.value_namespace = name_space;
        pv_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-class")
    {
        vc_class = value;
        vc_class.value_namespace = name_space;
        vc_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "test-mode")
    {
        test_mode = value;
        test_mode.value_namespace = name_space;
        test_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oam-segment-endpoint")
    {
        oam_segment_endpoint = value;
        oam_segment_endpoint.value_namespace = name_space;
        oam_segment_endpoint.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpi")
    {
        vpi.yfilter = yfilter;
    }
    if(value_path == "vci")
    {
        vci.yfilter = yfilter;
    }
    if(value_path == "pv-ctype")
    {
        pv_ctype.yfilter = yfilter;
    }
    if(value_path == "vc-class")
    {
        vc_class.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "test-mode")
    {
        test_mode.yfilter = yfilter;
    }
    if(value_path == "oam-segment-endpoint")
    {
        oam_segment_endpoint.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shape" || name == "oam-emulation" || name == "cell-packing" || name == "vpi" || name == "vci" || name == "pv-ctype" || name == "vc-class" || name == "encapsulation" || name == "enable" || name == "test-mode" || name == "oam-segment-endpoint")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::Shape()
    :
    type{YType::enumeration, "type"},
    peak_cell_rate{YType::uint32, "peak-cell-rate"},
    sustained_cell_rate{YType::uint32, "sustained-cell-rate"},
    burst_size{YType::uint32, "burst-size"}
{

    yang_name = "shape"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::~Shape()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| peak_cell_rate.is_set
	|| sustained_cell_rate.is_set
	|| burst_size.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(peak_cell_rate.yfilter)
	|| ydk::is_set(sustained_cell_rate.yfilter)
	|| ydk::is_set(burst_size.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (peak_cell_rate.is_set || is_set(peak_cell_rate.yfilter)) leaf_name_data.push_back(peak_cell_rate.get_name_leafdata());
    if (sustained_cell_rate.is_set || is_set(sustained_cell_rate.yfilter)) leaf_name_data.push_back(sustained_cell_rate.get_name_leafdata());
    if (burst_size.is_set || is_set(burst_size.yfilter)) leaf_name_data.push_back(burst_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-cell-rate")
    {
        peak_cell_rate = value;
        peak_cell_rate.value_namespace = name_space;
        peak_cell_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sustained-cell-rate")
    {
        sustained_cell_rate = value;
        sustained_cell_rate.value_namespace = name_space;
        sustained_cell_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-size")
    {
        burst_size = value;
        burst_size.value_namespace = name_space;
        burst_size.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "peak-cell-rate")
    {
        peak_cell_rate.yfilter = yfilter;
    }
    if(value_path == "sustained-cell-rate")
    {
        sustained_cell_rate.yfilter = yfilter;
    }
    if(value_path == "burst-size")
    {
        burst_size.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "peak-cell-rate" || name == "sustained-cell-rate" || name == "burst-size")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::OamEmulation()
    :
    enable{YType::empty, "enable"},
    ais_transmit_rate{YType::uint32, "ais-transmit-rate"}
{

    yang_name = "oam-emulation"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::~OamEmulation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| ais_transmit_rate.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(ais_transmit_rate.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam-emulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (ais_transmit_rate.is_set || is_set(ais_transmit_rate.yfilter)) leaf_name_data.push_back(ais_transmit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ais-transmit-rate")
    {
        ais_transmit_rate = value;
        ais_transmit_rate.value_namespace = name_space;
        ais_transmit_rate.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "ais-transmit-rate")
    {
        ais_transmit_rate.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "ais-transmit-rate")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::CellPacking()
    :
    maximum_cells_packed{YType::uint32, "maximum-cells-packed"},
    cell_packing_timer_id{YType::uint32, "cell-packing-timer-id"}
{

    yang_name = "cell-packing"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::~CellPacking()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::has_data() const
{
    if (is_presence_container) return true;
    return maximum_cells_packed.is_set
	|| cell_packing_timer_id.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_cells_packed.yfilter)
	|| ydk::is_set(cell_packing_timer_id.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cell-packing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_cells_packed.is_set || is_set(maximum_cells_packed.yfilter)) leaf_name_data.push_back(maximum_cells_packed.get_name_leafdata());
    if (cell_packing_timer_id.is_set || is_set(cell_packing_timer_id.yfilter)) leaf_name_data.push_back(cell_packing_timer_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-cells-packed")
    {
        maximum_cells_packed = value;
        maximum_cells_packed.value_namespace = name_space;
        maximum_cells_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cell-packing-timer-id")
    {
        cell_packing_timer_id = value;
        cell_packing_timer_id.value_namespace = name_space;
        cell_packing_timer_id.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-cells-packed")
    {
        maximum_cells_packed.yfilter = yfilter;
    }
    if(value_path == "cell-packing-timer-id")
    {
        cell_packing_timer_id.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-cells-packed" || name == "cell-packing-timer-id")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::MaximumCellPackingTimers()
    :
    cell_packing_timer1{YType::uint32, "cell-packing-timer1"},
    cell_packing_timer2{YType::uint32, "cell-packing-timer2"},
    cell_packing_timer3{YType::uint32, "cell-packing-timer3"}
{

    yang_name = "maximum-cell-packing-timers"; yang_parent_name = "atm"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::~MaximumCellPackingTimers()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::has_data() const
{
    if (is_presence_container) return true;
    return cell_packing_timer1.is_set
	|| cell_packing_timer2.is_set
	|| cell_packing_timer3.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cell_packing_timer1.yfilter)
	|| ydk::is_set(cell_packing_timer2.yfilter)
	|| ydk::is_set(cell_packing_timer3.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-cell-packing-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cell_packing_timer1.is_set || is_set(cell_packing_timer1.yfilter)) leaf_name_data.push_back(cell_packing_timer1.get_name_leafdata());
    if (cell_packing_timer2.is_set || is_set(cell_packing_timer2.yfilter)) leaf_name_data.push_back(cell_packing_timer2.get_name_leafdata());
    if (cell_packing_timer3.is_set || is_set(cell_packing_timer3.yfilter)) leaf_name_data.push_back(cell_packing_timer3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cell-packing-timer1")
    {
        cell_packing_timer1 = value;
        cell_packing_timer1.value_namespace = name_space;
        cell_packing_timer1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cell-packing-timer2")
    {
        cell_packing_timer2 = value;
        cell_packing_timer2.value_namespace = name_space;
        cell_packing_timer2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cell-packing-timer3")
    {
        cell_packing_timer3 = value;
        cell_packing_timer3.value_namespace = name_space;
        cell_packing_timer3.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cell-packing-timer1")
    {
        cell_packing_timer1.yfilter = yfilter;
    }
    if(value_path == "cell-packing-timer2")
    {
        cell_packing_timer2.yfilter = yfilter;
    }
    if(value_path == "cell-packing-timer3")
    {
        cell_packing_timer3.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cell-packing-timer1" || name == "cell-packing-timer2" || name == "cell-packing-timer3")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnels()
    :
    vp_tunnel(this, {"vpi"})
{

    yang_name = "vp-tunnels"; yang_parent_name = "atm"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::~VpTunnels()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vp_tunnel.len(); index++)
    {
        if(vp_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::has_operation() const
{
    for (std::size_t index=0; index<vp_tunnel.len(); index++)
    {
        if(vp_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vp-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vp-tunnel")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel>();
        ent_->parent = this;
        vp_tunnel.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vp_tunnel.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vp-tunnel")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::VpTunnel()
    :
    vpi{YType::uint32, "vpi"},
    enable_hierarchical_shaping{YType::empty, "enable-hierarchical-shaping"},
    enable{YType::empty, "enable"},
    disable_f4oam{YType::empty, "disable-f4oam"}
        ,
    shape(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape>())
{
    shape->parent = this;

    yang_name = "vp-tunnel"; yang_parent_name = "vp-tunnels"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::~VpTunnel()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::has_data() const
{
    if (is_presence_container) return true;
    return vpi.is_set
	|| enable_hierarchical_shaping.is_set
	|| enable.is_set
	|| disable_f4oam.is_set
	|| (shape !=  nullptr && shape->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpi.yfilter)
	|| ydk::is_set(enable_hierarchical_shaping.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(disable_f4oam.yfilter)
	|| (shape !=  nullptr && shape->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vp-tunnel";
    ADD_KEY_TOKEN(vpi, "vpi");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpi.is_set || is_set(vpi.yfilter)) leaf_name_data.push_back(vpi.get_name_leafdata());
    if (enable_hierarchical_shaping.is_set || is_set(enable_hierarchical_shaping.yfilter)) leaf_name_data.push_back(enable_hierarchical_shaping.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (disable_f4oam.is_set || is_set(disable_f4oam.yfilter)) leaf_name_data.push_back(disable_f4oam.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape>();
        }
        return shape;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(shape != nullptr)
    {
        _children["shape"] = shape;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpi")
    {
        vpi = value;
        vpi.value_namespace = name_space;
        vpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-hierarchical-shaping")
    {
        enable_hierarchical_shaping = value;
        enable_hierarchical_shaping.value_namespace = name_space;
        enable_hierarchical_shaping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-f4oam")
    {
        disable_f4oam = value;
        disable_f4oam.value_namespace = name_space;
        disable_f4oam.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpi")
    {
        vpi.yfilter = yfilter;
    }
    if(value_path == "enable-hierarchical-shaping")
    {
        enable_hierarchical_shaping.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "disable-f4oam")
    {
        disable_f4oam.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shape" || name == "vpi" || name == "enable-hierarchical-shaping" || name == "enable" || name == "disable-f4oam")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::Shape()
    :
    type{YType::enumeration, "type"},
    peak_cell_rate{YType::uint32, "peak-cell-rate"},
    sustained_cell_rate{YType::uint32, "sustained-cell-rate"},
    burst_size{YType::uint32, "burst-size"}
{

    yang_name = "shape"; yang_parent_name = "vp-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::~Shape()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| peak_cell_rate.is_set
	|| sustained_cell_rate.is_set
	|| burst_size.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(peak_cell_rate.yfilter)
	|| ydk::is_set(sustained_cell_rate.yfilter)
	|| ydk::is_set(burst_size.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (peak_cell_rate.is_set || is_set(peak_cell_rate.yfilter)) leaf_name_data.push_back(peak_cell_rate.get_name_leafdata());
    if (sustained_cell_rate.is_set || is_set(sustained_cell_rate.yfilter)) leaf_name_data.push_back(sustained_cell_rate.get_name_leafdata());
    if (burst_size.is_set || is_set(burst_size.yfilter)) leaf_name_data.push_back(burst_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-cell-rate")
    {
        peak_cell_rate = value;
        peak_cell_rate.value_namespace = name_space;
        peak_cell_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sustained-cell-rate")
    {
        sustained_cell_rate = value;
        sustained_cell_rate.value_namespace = name_space;
        sustained_cell_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-size")
    {
        burst_size = value;
        burst_size.value_namespace = name_space;
        burst_size.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "peak-cell-rate")
    {
        peak_cell_rate.yfilter = yfilter;
    }
    if(value_path == "sustained-cell-rate")
    {
        sustained_cell_rate.yfilter = yfilter;
    }
    if(value_path == "burst-size")
    {
        burst_size.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "peak-cell-rate" || name == "sustained-cell-rate" || name == "burst-size")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dot1xInterface::Dot1xInterface()
    :
    dot1x_profile{YType::str, "dot1x-profile"}
{

    yang_name = "dot1x-interface"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dot1xInterface::~Dot1xInterface()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dot1xInterface::has_data() const
{
    if (is_presence_container) return true;
    return dot1x_profile.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dot1xInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1x_profile.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dot1xInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-dot1x-if-cfg:dot1x-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dot1xInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x_profile.is_set || is_set(dot1x_profile.yfilter)) leaf_name_data.push_back(dot1x_profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dot1xInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dot1xInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dot1xInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1x-profile")
    {
        dot1x_profile = value;
        dot1x_profile.value_namespace = name_space;
        dot1x_profile.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dot1xInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1x-profile")
    {
        dot1x_profile.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dot1xInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x-profile")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Ipv4Network()
    :
    forwarding_enable{YType::empty, "forwarding-enable"},
    icmp_mask_reply{YType::empty, "icmp-mask-reply"},
    tcp_mss_adjust_enable{YType::empty, "tcp-mss-adjust-enable"},
    ttl_propagate_disable{YType::empty, "ttl-propagate-disable"},
    point_to_point{YType::empty, "point-to-point"},
    mtu{YType::uint32, "mtu"}
        ,
    bgp_pa(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa>())
    , verify(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify>())
    , bgp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp>())
    , addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses>())
    , helper_addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses>())
{
    bgp_pa->parent = this;
    verify->parent = this;
    bgp->parent = this;
    addresses->parent = this;
    helper_addresses->parent = this;

    yang_name = "ipv4-network"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::~Ipv4Network()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::has_data() const
{
    if (is_presence_container) return true;
    return forwarding_enable.is_set
	|| icmp_mask_reply.is_set
	|| tcp_mss_adjust_enable.is_set
	|| ttl_propagate_disable.is_set
	|| point_to_point.is_set
	|| mtu.is_set
	|| (bgp_pa !=  nullptr && bgp_pa->has_data())
	|| (verify !=  nullptr && verify->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (addresses !=  nullptr && addresses->has_data())
	|| (helper_addresses !=  nullptr && helper_addresses->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding_enable.yfilter)
	|| ydk::is_set(icmp_mask_reply.yfilter)
	|| ydk::is_set(tcp_mss_adjust_enable.yfilter)
	|| ydk::is_set(ttl_propagate_disable.yfilter)
	|| ydk::is_set(point_to_point.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| (bgp_pa !=  nullptr && bgp_pa->has_operation())
	|| (verify !=  nullptr && verify->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (addresses !=  nullptr && addresses->has_operation())
	|| (helper_addresses !=  nullptr && helper_addresses->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-io-cfg:ipv4-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding_enable.is_set || is_set(forwarding_enable.yfilter)) leaf_name_data.push_back(forwarding_enable.get_name_leafdata());
    if (icmp_mask_reply.is_set || is_set(icmp_mask_reply.yfilter)) leaf_name_data.push_back(icmp_mask_reply.get_name_leafdata());
    if (tcp_mss_adjust_enable.is_set || is_set(tcp_mss_adjust_enable.yfilter)) leaf_name_data.push_back(tcp_mss_adjust_enable.get_name_leafdata());
    if (ttl_propagate_disable.is_set || is_set(ttl_propagate_disable.yfilter)) leaf_name_data.push_back(ttl_propagate_disable.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.yfilter)) leaf_name_data.push_back(point_to_point.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-pa")
    {
        if(bgp_pa == nullptr)
        {
            bgp_pa = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa>();
        }
        return bgp_pa;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify>();
        }
        return verify;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "addresses")
    {
        if(addresses == nullptr)
        {
            addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses>();
        }
        return addresses;
    }

    if(child_yang_name == "helper-addresses")
    {
        if(helper_addresses == nullptr)
        {
            helper_addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses>();
        }
        return helper_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp_pa != nullptr)
    {
        _children["bgp-pa"] = bgp_pa;
    }

    if(verify != nullptr)
    {
        _children["verify"] = verify;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    if(addresses != nullptr)
    {
        _children["addresses"] = addresses;
    }

    if(helper_addresses != nullptr)
    {
        _children["helper-addresses"] = helper_addresses;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding-enable")
    {
        forwarding_enable = value;
        forwarding_enable.value_namespace = name_space;
        forwarding_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmp-mask-reply")
    {
        icmp_mask_reply = value;
        icmp_mask_reply.value_namespace = name_space;
        icmp_mask_reply.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "point-to-point")
    {
        point_to_point = value;
        point_to_point.value_namespace = name_space;
        point_to_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding-enable")
    {
        forwarding_enable.yfilter = yfilter;
    }
    if(value_path == "icmp-mask-reply")
    {
        icmp_mask_reply.yfilter = yfilter;
    }
    if(value_path == "tcp-mss-adjust-enable")
    {
        tcp_mss_adjust_enable.yfilter = yfilter;
    }
    if(value_path == "ttl-propagate-disable")
    {
        ttl_propagate_disable.yfilter = yfilter;
    }
    if(value_path == "point-to-point")
    {
        point_to_point.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-pa" || name == "verify" || name == "bgp" || name == "addresses" || name == "helper-addresses" || name == "forwarding-enable" || name == "icmp-mask-reply" || name == "tcp-mss-adjust-enable" || name == "ttl-propagate-disable" || name == "point-to-point" || name == "mtu")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::BgpPa()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input>())
    , output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::get_children() const
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
    source_accounting{YType::boolean, "source-accounting"},
    destination_accounting{YType::boolean, "destination-accounting"}
{

    yang_name = "input"; yang_parent_name = "bgp-pa"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::has_data() const
{
    if (is_presence_container) return true;
    return source_accounting.is_set
	|| destination_accounting.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_accounting.yfilter)
	|| ydk::is_set(destination_accounting.yfilter);
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

    if (source_accounting.is_set || is_set(source_accounting.yfilter)) leaf_name_data.push_back(source_accounting.get_name_leafdata());
    if (destination_accounting.is_set || is_set(destination_accounting.yfilter)) leaf_name_data.push_back(destination_accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-accounting")
    {
        source_accounting = value;
        source_accounting.value_namespace = name_space;
        source_accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-accounting")
    {
        destination_accounting = value;
        destination_accounting.value_namespace = name_space;
        destination_accounting.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-accounting")
    {
        source_accounting.yfilter = yfilter;
    }
    if(value_path == "destination-accounting")
    {
        destination_accounting.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-accounting" || name == "destination-accounting")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::Output()
    :
    source_accounting{YType::boolean, "source-accounting"},
    destination_accounting{YType::boolean, "destination-accounting"}
{

    yang_name = "output"; yang_parent_name = "bgp-pa"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::has_data() const
{
    if (is_presence_container) return true;
    return source_accounting.is_set
	|| destination_accounting.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_accounting.yfilter)
	|| ydk::is_set(destination_accounting.yfilter);
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

    if (source_accounting.is_set || is_set(source_accounting.yfilter)) leaf_name_data.push_back(source_accounting.get_name_leafdata());
    if (destination_accounting.is_set || is_set(destination_accounting.yfilter)) leaf_name_data.push_back(destination_accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-accounting")
    {
        source_accounting = value;
        source_accounting.value_namespace = name_space;
        source_accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-accounting")
    {
        destination_accounting = value;
        destination_accounting.value_namespace = name_space;
        destination_accounting.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-accounting")
    {
        source_accounting.yfilter = yfilter;
    }
    if(value_path == "destination-accounting")
    {
        destination_accounting.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-accounting" || name == "destination-accounting")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::Verify()
    :
    reachable{YType::enumeration, "reachable"},
    self_ping{YType::enumeration, "self-ping"},
    default_ping{YType::enumeration, "default-ping"}
{

    yang_name = "verify"; yang_parent_name = "ipv4-network"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::~Verify()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::has_data() const
{
    if (is_presence_container) return true;
    return reachable.is_set
	|| self_ping.is_set
	|| default_ping.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reachable.yfilter)
	|| ydk::is_set(self_ping.yfilter)
	|| ydk::is_set(default_ping.yfilter);
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

    if (reachable.is_set || is_set(reachable.yfilter)) leaf_name_data.push_back(reachable.get_name_leafdata());
    if (self_ping.is_set || is_set(self_ping.yfilter)) leaf_name_data.push_back(self_ping.get_name_leafdata());
    if (default_ping.is_set || is_set(default_ping.yfilter)) leaf_name_data.push_back(default_ping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "default-ping")
    {
        default_ping = value;
        default_ping.value_namespace = name_space;
        default_ping.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reachable")
    {
        reachable.yfilter = yfilter;
    }
    if(value_path == "self-ping")
    {
        self_ping.yfilter = yfilter;
    }
    if(value_path == "default-ping")
    {
        default_ping.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reachable" || name == "self-ping" || name == "default-ping")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Bgp()
    :
    qppb(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb>())
    , flow_tag(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag>())
{
    qppb->parent = this;
    flow_tag->parent = this;

    yang_name = "bgp"; yang_parent_name = "ipv4-network"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::~Bgp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return (qppb !=  nullptr && qppb->has_data())
	|| (flow_tag !=  nullptr && flow_tag->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (qppb !=  nullptr && qppb->has_operation())
	|| (flow_tag !=  nullptr && flow_tag->has_operation());
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qppb")
    {
        if(qppb == nullptr)
        {
            qppb = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb>();
        }
        return qppb;
    }

    if(child_yang_name == "flow-tag")
    {
        if(flow_tag == nullptr)
        {
            flow_tag = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag>();
        }
        return flow_tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(qppb != nullptr)
    {
        _children["qppb"] = qppb;
    }

    if(flow_tag != nullptr)
    {
        _children["flow-tag"] = flow_tag;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qppb" || name == "flow-tag")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
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
    source{YType::enumeration, "source"},
    destination{YType::enumeration, "destination"}
{

    yang_name = "input"; yang_parent_name = "qppb"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::has_data() const
{
    if (is_presence_container) return true;
    return source.is_set
	|| destination.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter);
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

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flow_tag_input != nullptr)
    {
        _children["flow-tag-input"] = flow_tag_input;
    }

    return _children;
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
    source{YType::boolean, "source"},
    destination{YType::boolean, "destination"}
{

    yang_name = "flow-tag-input"; yang_parent_name = "flow-tag"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::~FlowTagInput()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::has_data() const
{
    if (is_presence_container) return true;
    return source.is_set
	|| destination.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter);
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

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Addresses()
    :
    unnumbered{YType::str, "unnumbered"},
    dhcp{YType::empty, "dhcp"}
        ,
    secondaries(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries>())
    , primary(nullptr) // presence node
{
    secondaries->parent = this;

    yang_name = "addresses"; yang_parent_name = "ipv4-network"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::~Addresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::has_data() const
{
    if (is_presence_container) return true;
    return unnumbered.is_set
	|| dhcp.is_set
	|| (secondaries !=  nullptr && secondaries->has_data())
	|| (primary !=  nullptr && primary->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| (secondaries !=  nullptr && secondaries->has_operation())
	|| (primary !=  nullptr && primary->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondaries")
    {
        if(secondaries == nullptr)
        {
            secondaries = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries>();
        }
        return secondaries;
    }

    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary>();
        }
        return primary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(secondaries != nullptr)
    {
        _children["secondaries"] = secondaries;
    }

    if(primary != nullptr)
    {
        _children["primary"] = primary;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondaries" || name == "primary" || name == "unnumbered" || name == "dhcp")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondaries()
    :
    secondary(this, {"address"})
{

    yang_name = "secondaries"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::~Secondaries()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<secondary.len(); index++)
    {
        if(secondary[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::has_operation() const
{
    for (std::size_t index=0; index<secondary.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary>();
        ent_->parent = this;
        secondary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : secondary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "secondary";
    ADD_KEY_TOKEN(address, "address");
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::Primary()
    :
    address{YType::str, "address"},
    netmask{YType::str, "netmask"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "primary"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::~Primary()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::has_data() const
{
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddresses()
    :
    helper_address(this, {"address", "vrf_name"})
{

    yang_name = "helper-addresses"; yang_parent_name = "ipv4-network"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::~HelperAddresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<helper_address.len(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::has_operation() const
{
    for (std::size_t index=0; index<helper_address.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper-address")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress>();
        ent_->parent = this;
        helper_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : helper_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "helper-address";
    ADD_KEY_TOKEN(address, "address");
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::Ipv4NetworkForwarding()
    :
    directed_broadcast{YType::empty, "directed-broadcast"},
    unreachables{YType::empty, "unreachables"},
    redirects{YType::empty, "redirects"}
{

    yang_name = "ipv4-network-forwarding"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::~Ipv4NetworkForwarding()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::has_data() const
{
    if (is_presence_container) return true;
    return directed_broadcast.is_set
	|| unreachables.is_set
	|| redirects.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(directed_broadcast.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| ydk::is_set(redirects.yfilter);
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
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.yfilter)) leaf_name_data.push_back(redirects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "directed-broadcast")
    {
        directed_broadcast = value;
        directed_broadcast.value_namespace = name_space;
        directed_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirects")
    {
        redirects = value;
        redirects.value_namespace = name_space;
        redirects.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "directed-broadcast")
    {
        directed_broadcast.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
    if(value_path == "redirects")
    {
        redirects.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "directed-broadcast" || name == "unreachables" || name == "redirects")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::AaaTable::AaaTable()
    :
    radius(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius>())
{
    radius->parent = this;

    yang_name = "aaa-table"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::AaaTable::~AaaTable()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::has_data() const
{
    if (is_presence_container) return true;
    return (radius !=  nullptr && radius->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::has_operation() const
{
    return is_set(yfilter)
	|| (radius !=  nullptr && radius->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::AaaTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-aaacore-cfg:aaa-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::AaaTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::AaaTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radius")
    {
        if(radius == nullptr)
        {
            radius = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius>();
        }
        return radius;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::AaaTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(radius != nullptr)
    {
        _children["radius"] = radius;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::AaaTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::AaaTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radius")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Radius()
    :
    attribute(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute>())
{
    attribute->parent = this;

    yang_name = "radius"; yang_parent_name = "aaa-table"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::~Radius()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::has_data() const
{
    if (is_presence_container) return true;
    return (attribute !=  nullptr && attribute->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::has_operation() const
{
    return is_set(yfilter)
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attribute != nullptr)
    {
        _children["attribute"] = attribute;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::Attribute()
    :
    nas_port_type{YType::enumeration, "nas-port-type"},
    nas_identifier{YType::str, "nas-identifier"}
{

    yang_name = "attribute"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::~Attribute()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::has_data() const
{
    if (is_presence_container) return true;
    return nas_port_type.is_set
	|| nas_identifier.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nas_port_type.yfilter)
	|| ydk::is_set(nas_identifier.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nas_port_type.is_set || is_set(nas_port_type.yfilter)) leaf_name_data.push_back(nas_port_type.get_name_leafdata());
    if (nas_identifier.is_set || is_set(nas_identifier.yfilter)) leaf_name_data.push_back(nas_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nas-port-type")
    {
        nas_port_type = value;
        nas_port_type.value_namespace = name_space;
        nas_port_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nas-identifier")
    {
        nas_identifier = value;
        nas_identifier.value_namespace = name_space;
        nas_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nas-port-type")
    {
        nas_port_type.yfilter = yfilter;
    }
    if(value_path == "nas-identifier")
    {
        nas_identifier.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nas-port-type" || name == "nas-identifier")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Ipv6PacketFilter()
    :
    inbound(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound>())
    , outbound(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inbound != nullptr)
    {
        _children["inbound"] = inbound;
    }

    if(outbound != nullptr)
    {
        _children["outbound"] = outbound;
    }

    return _children;
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
    common_acl_name{YType::str, "common-acl-name"},
    name{YType::str, "name"},
    interface_statistics{YType::empty, "interface-statistics"},
    compression_level{YType::uint32, "compression-level"},
    acl_name_array{YType::str, "acl-name-array"},
    is_common_array{YType::boolean, "is-common-array"}
{

    yang_name = "inbound"; yang_parent_name = "ipv6-packet-filter"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::~Inbound()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::has_data() const
{
    if (is_presence_container) return true;
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
	|| name.is_set
	|| interface_statistics.is_set
	|| compression_level.is_set;
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
	|| ydk::is_set(common_acl_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interface_statistics.yfilter)
	|| ydk::is_set(compression_level.yfilter)
	|| ydk::is_set(acl_name_array.yfilter)
	|| ydk::is_set(is_common_array.yfilter);
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
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (compression_level.is_set || is_set(compression_level.yfilter)) leaf_name_data.push_back(compression_level.get_name_leafdata());

    auto acl_name_array_name_datas = acl_name_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), acl_name_array_name_datas.begin(), acl_name_array_name_datas.end());
    auto is_common_array_name_datas = is_common_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), is_common_array_name_datas.begin(), is_common_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
        common_acl_name.value_namespace = name_space;
        common_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
        interface_statistics.value_namespace = name_space;
        interface_statistics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compression-level")
    {
        compression_level = value;
        compression_level.value_namespace = name_space;
        compression_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name-array")
    {
        acl_name_array.append(value);
    }
    if(value_path == "is-common-array")
    {
        is_common_array.append(value);
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
    if(value_path == "compression-level")
    {
        compression_level.yfilter = yfilter;
    }
    if(value_path == "acl-name-array")
    {
        acl_name_array.yfilter = yfilter;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl-name" || name == "name" || name == "interface-statistics" || name == "compression-level" || name == "acl-name-array" || name == "is-common-array")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::Outbound()
    :
    do_not_use{YType::str, "do-not-use"},
    name{YType::str, "name"},
    interface_statistics{YType::empty, "interface-statistics"},
    compression_level{YType::uint32, "compression-level"},
    acl_name_array{YType::str, "acl-name-array"},
    is_common_array{YType::boolean, "is-common-array"}
{

    yang_name = "outbound"; yang_parent_name = "ipv6-packet-filter"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::~Outbound()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::has_data() const
{
    if (is_presence_container) return true;
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
    return do_not_use.is_set
	|| name.is_set
	|| interface_statistics.is_set
	|| compression_level.is_set;
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
	|| ydk::is_set(do_not_use.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interface_statistics.yfilter)
	|| ydk::is_set(compression_level.yfilter)
	|| ydk::is_set(acl_name_array.yfilter)
	|| ydk::is_set(is_common_array.yfilter);
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

    if (do_not_use.is_set || is_set(do_not_use.yfilter)) leaf_name_data.push_back(do_not_use.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (compression_level.is_set || is_set(compression_level.yfilter)) leaf_name_data.push_back(compression_level.get_name_leafdata());

    auto acl_name_array_name_datas = acl_name_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), acl_name_array_name_datas.begin(), acl_name_array_name_datas.end());
    auto is_common_array_name_datas = is_common_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), is_common_array_name_datas.begin(), is_common_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "do-not-use")
    {
        do_not_use = value;
        do_not_use.value_namespace = name_space;
        do_not_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
        interface_statistics.value_namespace = name_space;
        interface_statistics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compression-level")
    {
        compression_level = value;
        compression_level.value_namespace = name_space;
        compression_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name-array")
    {
        acl_name_array.append(value);
    }
    if(value_path == "is-common-array")
    {
        is_common_array.append(value);
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "do-not-use")
    {
        do_not_use.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
    if(value_path == "compression-level")
    {
        compression_level.yfilter = yfilter;
    }
    if(value_path == "acl-name-array")
    {
        acl_name_array.yfilter = yfilter;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "do-not-use" || name == "name" || name == "interface-statistics" || name == "compression-level" || name == "acl-name-array" || name == "is-common-array")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::EsPacketFilter()
    :
    outbound{YType::str, "outbound"},
    inbound{YType::str, "inbound"}
{

    yang_name = "es-packet-filter"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::~EsPacketFilter()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::has_data() const
{
    if (is_presence_container) return true;
    return outbound.is_set
	|| inbound.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outbound.yfilter)
	|| ydk::is_set(inbound.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-cfg:es-packet-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outbound.is_set || is_set(outbound.yfilter)) leaf_name_data.push_back(outbound.get_name_leafdata());
    if (inbound.is_set || is_set(inbound.yfilter)) leaf_name_data.push_back(inbound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outbound")
    {
        outbound = value;
        outbound.value_namespace = name_space;
        outbound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inbound")
    {
        inbound = value;
        inbound.value_namespace = name_space;
        inbound.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outbound")
    {
        outbound.yfilter = yfilter;
    }
    if(value_path == "inbound")
    {
        inbound.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outbound" || name == "inbound")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Ipv4PacketFilter()
    :
    outbound(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound>())
    , inbound(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound>())
{
    outbound->parent = this;
    inbound->parent = this;

    yang_name = "ipv4-packet-filter"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::~Ipv4PacketFilter()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::has_data() const
{
    if (is_presence_container) return true;
    return (outbound !=  nullptr && outbound->has_data())
	|| (inbound !=  nullptr && inbound->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::has_operation() const
{
    return is_set(yfilter)
	|| (outbound !=  nullptr && outbound->has_operation())
	|| (inbound !=  nullptr && inbound->has_operation());
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "outbound")
    {
        if(outbound == nullptr)
        {
            outbound = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound>();
        }
        return outbound;
    }

    if(child_yang_name == "inbound")
    {
        if(inbound == nullptr)
        {
            inbound = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound>();
        }
        return inbound;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(outbound != nullptr)
    {
        _children["outbound"] = outbound;
    }

    if(inbound != nullptr)
    {
        _children["inbound"] = inbound;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outbound" || name == "inbound")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::Outbound()
    :
    do_not_use{YType::str, "do-not-use"},
    name{YType::str, "name"},
    hardware_count{YType::empty, "hardware-count"},
    interface_statistics{YType::empty, "interface-statistics"},
    compression_level{YType::uint32, "compression-level"},
    acl_name_array{YType::str, "acl-name-array"},
    is_common_array{YType::boolean, "is-common-array"}
{

    yang_name = "outbound"; yang_parent_name = "ipv4-packet-filter"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::~Outbound()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::has_data() const
{
    if (is_presence_container) return true;
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
    return do_not_use.is_set
	|| name.is_set
	|| hardware_count.is_set
	|| interface_statistics.is_set
	|| compression_level.is_set;
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
	|| ydk::is_set(do_not_use.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_count.yfilter)
	|| ydk::is_set(interface_statistics.yfilter)
	|| ydk::is_set(compression_level.yfilter)
	|| ydk::is_set(acl_name_array.yfilter)
	|| ydk::is_set(is_common_array.yfilter);
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

    if (do_not_use.is_set || is_set(do_not_use.yfilter)) leaf_name_data.push_back(do_not_use.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_count.is_set || is_set(hardware_count.yfilter)) leaf_name_data.push_back(hardware_count.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (compression_level.is_set || is_set(compression_level.yfilter)) leaf_name_data.push_back(compression_level.get_name_leafdata());

    auto acl_name_array_name_datas = acl_name_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), acl_name_array_name_datas.begin(), acl_name_array_name_datas.end());
    auto is_common_array_name_datas = is_common_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), is_common_array_name_datas.begin(), is_common_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "do-not-use")
    {
        do_not_use = value;
        do_not_use.value_namespace = name_space;
        do_not_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "compression-level")
    {
        compression_level = value;
        compression_level.value_namespace = name_space;
        compression_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name-array")
    {
        acl_name_array.append(value);
    }
    if(value_path == "is-common-array")
    {
        is_common_array.append(value);
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "do-not-use")
    {
        do_not_use.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-count")
    {
        hardware_count.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
    if(value_path == "compression-level")
    {
        compression_level.yfilter = yfilter;
    }
    if(value_path == "acl-name-array")
    {
        acl_name_array.yfilter = yfilter;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "do-not-use" || name == "name" || name == "hardware-count" || name == "interface-statistics" || name == "compression-level" || name == "acl-name-array" || name == "is-common-array")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::Inbound()
    :
    common_acl_name{YType::str, "common-acl-name"},
    name{YType::str, "name"},
    hardware_count{YType::empty, "hardware-count"},
    interface_statistics{YType::empty, "interface-statistics"},
    compression_level{YType::uint32, "compression-level"},
    acl_name_array{YType::str, "acl-name-array"},
    is_common_array{YType::boolean, "is-common-array"}
{

    yang_name = "inbound"; yang_parent_name = "ipv4-packet-filter"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::~Inbound()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::has_data() const
{
    if (is_presence_container) return true;
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
	|| name.is_set
	|| hardware_count.is_set
	|| interface_statistics.is_set
	|| compression_level.is_set;
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
	|| ydk::is_set(common_acl_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_count.yfilter)
	|| ydk::is_set(interface_statistics.yfilter)
	|| ydk::is_set(compression_level.yfilter)
	|| ydk::is_set(acl_name_array.yfilter)
	|| ydk::is_set(is_common_array.yfilter);
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
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_count.is_set || is_set(hardware_count.yfilter)) leaf_name_data.push_back(hardware_count.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (compression_level.is_set || is_set(compression_level.yfilter)) leaf_name_data.push_back(compression_level.get_name_leafdata());

    auto acl_name_array_name_datas = acl_name_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), acl_name_array_name_datas.begin(), acl_name_array_name_datas.end());
    auto is_common_array_name_datas = is_common_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), is_common_array_name_datas.begin(), is_common_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
        common_acl_name.value_namespace = name_space;
        common_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "compression-level")
    {
        compression_level = value;
        compression_level.value_namespace = name_space;
        compression_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name-array")
    {
        acl_name_array.append(value);
    }
    if(value_path == "is-common-array")
    {
        is_common_array.append(value);
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-count")
    {
        hardware_count.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
    if(value_path == "compression-level")
    {
        compression_level.yfilter = yfilter;
    }
    if(value_path == "acl-name-array")
    {
        acl_name_array.yfilter = yfilter;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl-name" || name == "name" || name == "hardware-count" || name == "interface-statistics" || name == "compression-level" || name == "acl-name-array" || name == "is-common-array")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4FlowSpec::Ipv4FlowSpec()
    :
    enabled{YType::empty, "enabled"}
{

    yang_name = "ipv4-flow-spec"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4FlowSpec::~Ipv4FlowSpec()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4FlowSpec::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4FlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4FlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-flowspec-cfg:ipv4-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4FlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4FlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4FlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4FlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4FlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4FlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6FlowSpec::Ipv6FlowSpec()
    :
    enabled{YType::empty, "enabled"}
{

    yang_name = "ipv6-flow-spec"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6FlowSpec::~Ipv6FlowSpec()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6FlowSpec::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6FlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6FlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-flowspec-cfg:ipv6-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6FlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6FlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6FlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6FlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6FlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6FlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Wanphy::Wanphy()
    :
    report_path_rdi{YType::empty, "report-path-rdi"},
    report_los{YType::empty, "report-los"},
    report_path_lcd{YType::empty, "report-path-lcd"},
    report_path_fe_plm{YType::empty, "report-path-fe-plm"},
    lan_mode{YType::enumeration, "lan-mode"},
    report_path_plm{YType::empty, "report-path-plm"},
    report_path_fe_ais{YType::empty, "report-path-fe-ais"},
    report_path_ais{YType::empty, "report-path-ais"},
    report_line_ais{YType::empty, "report-line-ais"},
    report_lof{YType::empty, "report-lof"},
    report_lop{YType::empty, "report-lop"},
    report_rdi{YType::empty, "report-rdi"},
    report_sd_ber{YType::empty, "report-sd-ber"},
    threshold_sd_ber{YType::uint32, "threshold-sd-ber"},
    report_sf_ber{YType::empty, "report-sf-ber"},
    threshold_sf_ber{YType::uint32, "threshold-sf-ber"},
    wan_mode{YType::enumeration, "wan-mode"}
{

    yang_name = "wanphy"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Wanphy::~Wanphy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Wanphy::has_data() const
{
    if (is_presence_container) return true;
    return report_path_rdi.is_set
	|| report_los.is_set
	|| report_path_lcd.is_set
	|| report_path_fe_plm.is_set
	|| lan_mode.is_set
	|| report_path_plm.is_set
	|| report_path_fe_ais.is_set
	|| report_path_ais.is_set
	|| report_line_ais.is_set
	|| report_lof.is_set
	|| report_lop.is_set
	|| report_rdi.is_set
	|| report_sd_ber.is_set
	|| threshold_sd_ber.is_set
	|| report_sf_ber.is_set
	|| threshold_sf_ber.is_set
	|| wan_mode.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Wanphy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(report_path_rdi.yfilter)
	|| ydk::is_set(report_los.yfilter)
	|| ydk::is_set(report_path_lcd.yfilter)
	|| ydk::is_set(report_path_fe_plm.yfilter)
	|| ydk::is_set(lan_mode.yfilter)
	|| ydk::is_set(report_path_plm.yfilter)
	|| ydk::is_set(report_path_fe_ais.yfilter)
	|| ydk::is_set(report_path_ais.yfilter)
	|| ydk::is_set(report_line_ais.yfilter)
	|| ydk::is_set(report_lof.yfilter)
	|| ydk::is_set(report_lop.yfilter)
	|| ydk::is_set(report_rdi.yfilter)
	|| ydk::is_set(report_sd_ber.yfilter)
	|| ydk::is_set(threshold_sd_ber.yfilter)
	|| ydk::is_set(report_sf_ber.yfilter)
	|| ydk::is_set(threshold_sf_ber.yfilter)
	|| ydk::is_set(wan_mode.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Wanphy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-wanphy-ui-cfg:wanphy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Wanphy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (report_path_rdi.is_set || is_set(report_path_rdi.yfilter)) leaf_name_data.push_back(report_path_rdi.get_name_leafdata());
    if (report_los.is_set || is_set(report_los.yfilter)) leaf_name_data.push_back(report_los.get_name_leafdata());
    if (report_path_lcd.is_set || is_set(report_path_lcd.yfilter)) leaf_name_data.push_back(report_path_lcd.get_name_leafdata());
    if (report_path_fe_plm.is_set || is_set(report_path_fe_plm.yfilter)) leaf_name_data.push_back(report_path_fe_plm.get_name_leafdata());
    if (lan_mode.is_set || is_set(lan_mode.yfilter)) leaf_name_data.push_back(lan_mode.get_name_leafdata());
    if (report_path_plm.is_set || is_set(report_path_plm.yfilter)) leaf_name_data.push_back(report_path_plm.get_name_leafdata());
    if (report_path_fe_ais.is_set || is_set(report_path_fe_ais.yfilter)) leaf_name_data.push_back(report_path_fe_ais.get_name_leafdata());
    if (report_path_ais.is_set || is_set(report_path_ais.yfilter)) leaf_name_data.push_back(report_path_ais.get_name_leafdata());
    if (report_line_ais.is_set || is_set(report_line_ais.yfilter)) leaf_name_data.push_back(report_line_ais.get_name_leafdata());
    if (report_lof.is_set || is_set(report_lof.yfilter)) leaf_name_data.push_back(report_lof.get_name_leafdata());
    if (report_lop.is_set || is_set(report_lop.yfilter)) leaf_name_data.push_back(report_lop.get_name_leafdata());
    if (report_rdi.is_set || is_set(report_rdi.yfilter)) leaf_name_data.push_back(report_rdi.get_name_leafdata());
    if (report_sd_ber.is_set || is_set(report_sd_ber.yfilter)) leaf_name_data.push_back(report_sd_ber.get_name_leafdata());
    if (threshold_sd_ber.is_set || is_set(threshold_sd_ber.yfilter)) leaf_name_data.push_back(threshold_sd_ber.get_name_leafdata());
    if (report_sf_ber.is_set || is_set(report_sf_ber.yfilter)) leaf_name_data.push_back(report_sf_ber.get_name_leafdata());
    if (threshold_sf_ber.is_set || is_set(threshold_sf_ber.yfilter)) leaf_name_data.push_back(threshold_sf_ber.get_name_leafdata());
    if (wan_mode.is_set || is_set(wan_mode.yfilter)) leaf_name_data.push_back(wan_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Wanphy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Wanphy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Wanphy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "report-path-rdi")
    {
        report_path_rdi = value;
        report_path_rdi.value_namespace = name_space;
        report_path_rdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-los")
    {
        report_los = value;
        report_los.value_namespace = name_space;
        report_los.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-path-lcd")
    {
        report_path_lcd = value;
        report_path_lcd.value_namespace = name_space;
        report_path_lcd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-path-fe-plm")
    {
        report_path_fe_plm = value;
        report_path_fe_plm.value_namespace = name_space;
        report_path_fe_plm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lan-mode")
    {
        lan_mode = value;
        lan_mode.value_namespace = name_space;
        lan_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-path-plm")
    {
        report_path_plm = value;
        report_path_plm.value_namespace = name_space;
        report_path_plm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-path-fe-ais")
    {
        report_path_fe_ais = value;
        report_path_fe_ais.value_namespace = name_space;
        report_path_fe_ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-path-ais")
    {
        report_path_ais = value;
        report_path_ais.value_namespace = name_space;
        report_path_ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-line-ais")
    {
        report_line_ais = value;
        report_line_ais.value_namespace = name_space;
        report_line_ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-lof")
    {
        report_lof = value;
        report_lof.value_namespace = name_space;
        report_lof.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-lop")
    {
        report_lop = value;
        report_lop.value_namespace = name_space;
        report_lop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-rdi")
    {
        report_rdi = value;
        report_rdi.value_namespace = name_space;
        report_rdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-sd-ber")
    {
        report_sd_ber = value;
        report_sd_ber.value_namespace = name_space;
        report_sd_ber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-sd-ber")
    {
        threshold_sd_ber = value;
        threshold_sd_ber.value_namespace = name_space;
        threshold_sd_ber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-sf-ber")
    {
        report_sf_ber = value;
        report_sf_ber.value_namespace = name_space;
        report_sf_ber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-sf-ber")
    {
        threshold_sf_ber = value;
        threshold_sf_ber.value_namespace = name_space;
        threshold_sf_ber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wan-mode")
    {
        wan_mode = value;
        wan_mode.value_namespace = name_space;
        wan_mode.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Wanphy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "report-path-rdi")
    {
        report_path_rdi.yfilter = yfilter;
    }
    if(value_path == "report-los")
    {
        report_los.yfilter = yfilter;
    }
    if(value_path == "report-path-lcd")
    {
        report_path_lcd.yfilter = yfilter;
    }
    if(value_path == "report-path-fe-plm")
    {
        report_path_fe_plm.yfilter = yfilter;
    }
    if(value_path == "lan-mode")
    {
        lan_mode.yfilter = yfilter;
    }
    if(value_path == "report-path-plm")
    {
        report_path_plm.yfilter = yfilter;
    }
    if(value_path == "report-path-fe-ais")
    {
        report_path_fe_ais.yfilter = yfilter;
    }
    if(value_path == "report-path-ais")
    {
        report_path_ais.yfilter = yfilter;
    }
    if(value_path == "report-line-ais")
    {
        report_line_ais.yfilter = yfilter;
    }
    if(value_path == "report-lof")
    {
        report_lof.yfilter = yfilter;
    }
    if(value_path == "report-lop")
    {
        report_lop.yfilter = yfilter;
    }
    if(value_path == "report-rdi")
    {
        report_rdi.yfilter = yfilter;
    }
    if(value_path == "report-sd-ber")
    {
        report_sd_ber.yfilter = yfilter;
    }
    if(value_path == "threshold-sd-ber")
    {
        threshold_sd_ber.yfilter = yfilter;
    }
    if(value_path == "report-sf-ber")
    {
        report_sf_ber.yfilter = yfilter;
    }
    if(value_path == "threshold-sf-ber")
    {
        threshold_sf_ber.yfilter = yfilter;
    }
    if(value_path == "wan-mode")
    {
        wan_mode.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Wanphy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "report-path-rdi" || name == "report-los" || name == "report-path-lcd" || name == "report-path-fe-plm" || name == "lan-mode" || name == "report-path-plm" || name == "report-path-fe-ais" || name == "report-path-ais" || name == "report-line-ais" || name == "report-lof" || name == "report-lop" || name == "report-rdi" || name == "report-sd-ber" || name == "threshold-sd-ber" || name == "report-sf-ber" || name == "threshold-sf-ber" || name == "wan-mode")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Ipv6Network()
    :
    mtu{YType::uint32, "mtu"},
    unnumbered{YType::str, "unnumbered"},
    ttl_propagate_disable{YType::empty, "ttl-propagate-disable"},
    tcp_mss_adjust_enable{YType::empty, "tcp-mss-adjust-enable"},
    unreachables{YType::empty, "unreachables"}
        ,
    bgp_qos_policy_propagation(nullptr) // presence node
    , bgp_policy_accountings(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings>())
    , verify(nullptr) // presence node
    , addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses>())
    , bgp_flow_tag_policy_table(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable>())
{
    bgp_policy_accountings->parent = this;
    addresses->parent = this;
    bgp_flow_tag_policy_table->parent = this;

    yang_name = "ipv6-network"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::~Ipv6Network()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::has_data() const
{
    if (is_presence_container) return true;
    return mtu.is_set
	|| unnumbered.is_set
	|| ttl_propagate_disable.is_set
	|| tcp_mss_adjust_enable.is_set
	|| unreachables.is_set
	|| (bgp_qos_policy_propagation !=  nullptr && bgp_qos_policy_propagation->has_data())
	|| (bgp_policy_accountings !=  nullptr && bgp_policy_accountings->has_data())
	|| (verify !=  nullptr && verify->has_data())
	|| (addresses !=  nullptr && addresses->has_data())
	|| (bgp_flow_tag_policy_table !=  nullptr && bgp_flow_tag_policy_table->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| ydk::is_set(ttl_propagate_disable.yfilter)
	|| ydk::is_set(tcp_mss_adjust_enable.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| (bgp_qos_policy_propagation !=  nullptr && bgp_qos_policy_propagation->has_operation())
	|| (bgp_policy_accountings !=  nullptr && bgp_policy_accountings->has_operation())
	|| (verify !=  nullptr && verify->has_operation())
	|| (addresses !=  nullptr && addresses->has_operation())
	|| (bgp_flow_tag_policy_table !=  nullptr && bgp_flow_tag_policy_table->has_operation());
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
    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (ttl_propagate_disable.is_set || is_set(ttl_propagate_disable.yfilter)) leaf_name_data.push_back(ttl_propagate_disable.get_name_leafdata());
    if (tcp_mss_adjust_enable.is_set || is_set(tcp_mss_adjust_enable.yfilter)) leaf_name_data.push_back(tcp_mss_adjust_enable.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-qos-policy-propagation")
    {
        if(bgp_qos_policy_propagation == nullptr)
        {
            bgp_qos_policy_propagation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation>();
        }
        return bgp_qos_policy_propagation;
    }

    if(child_yang_name == "bgp-policy-accountings")
    {
        if(bgp_policy_accountings == nullptr)
        {
            bgp_policy_accountings = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings>();
        }
        return bgp_policy_accountings;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify>();
        }
        return verify;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp_qos_policy_propagation != nullptr)
    {
        _children["bgp-qos-policy-propagation"] = bgp_qos_policy_propagation;
    }

    if(bgp_policy_accountings != nullptr)
    {
        _children["bgp-policy-accountings"] = bgp_policy_accountings;
    }

    if(verify != nullptr)
    {
        _children["verify"] = verify;
    }

    if(addresses != nullptr)
    {
        _children["addresses"] = addresses;
    }

    if(bgp_flow_tag_policy_table != nullptr)
    {
        _children["bgp-flow-tag-policy-table"] = bgp_flow_tag_policy_table;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-propagate-disable")
    {
        ttl_propagate_disable = value;
        ttl_propagate_disable.value_namespace = name_space;
        ttl_propagate_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-mss-adjust-enable")
    {
        tcp_mss_adjust_enable = value;
        tcp_mss_adjust_enable.value_namespace = name_space;
        tcp_mss_adjust_enable.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
    if(value_path == "ttl-propagate-disable")
    {
        ttl_propagate_disable.yfilter = yfilter;
    }
    if(value_path == "tcp-mss-adjust-enable")
    {
        tcp_mss_adjust_enable.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-qos-policy-propagation" || name == "bgp-policy-accountings" || name == "verify" || name == "addresses" || name == "bgp-flow-tag-policy-table" || name == "mtu" || name == "unnumbered" || name == "ttl-propagate-disable" || name == "tcp-mss-adjust-enable" || name == "unreachables")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::BgpQosPolicyPropagation()
    :
    source{YType::enumeration, "source"},
    destination{YType::enumeration, "destination"}
{

    yang_name = "bgp-qos-policy-propagation"; yang_parent_name = "ipv6-network"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::~BgpQosPolicyPropagation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::has_data() const
{
    if (is_presence_container) return true;
    return source.is_set
	|| destination.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter);
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

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccountings()
    :
    bgp_policy_accounting(this, {"direction"})
{

    yang_name = "bgp-policy-accountings"; yang_parent_name = "ipv6-network"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::~BgpPolicyAccountings()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp_policy_accounting.len(); index++)
    {
        if(bgp_policy_accounting[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::has_operation() const
{
    for (std::size_t index=0; index<bgp_policy_accounting.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-policy-accounting")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting>();
        ent_->parent = this;
        bgp_policy_accounting.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bgp_policy_accounting.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "bgp-policy-accounting";
    ADD_KEY_TOKEN(direction, "direction");
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::Verify()
    :
    reachable{YType::enumeration, "reachable"},
    self_ping{YType::enumeration, "self-ping"},
    default_ping{YType::enumeration, "default-ping"}
{

    yang_name = "verify"; yang_parent_name = "ipv6-network"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::~Verify()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::has_data() const
{
    if (is_presence_container) return true;
    return reachable.is_set
	|| self_ping.is_set
	|| default_ping.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reachable.yfilter)
	|| ydk::is_set(self_ping.yfilter)
	|| ydk::is_set(default_ping.yfilter);
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

    if (reachable.is_set || is_set(reachable.yfilter)) leaf_name_data.push_back(reachable.get_name_leafdata());
    if (self_ping.is_set || is_set(self_ping.yfilter)) leaf_name_data.push_back(self_ping.get_name_leafdata());
    if (default_ping.is_set || is_set(default_ping.yfilter)) leaf_name_data.push_back(default_ping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "default-ping")
    {
        default_ping = value;
        default_ping.value_namespace = name_space;
        default_ping.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reachable")
    {
        reachable.yfilter = yfilter;
    }
    if(value_path == "self-ping")
    {
        self_ping.yfilter = yfilter;
    }
    if(value_path == "default-ping")
    {
        default_ping.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reachable" || name == "self-ping" || name == "default-ping")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Addresses()
    :
    segment_routings(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings>())
    , link_local_address(nullptr) // presence node
    , eui64_addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses>())
    , regular_addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses>())
    , auto_configuration(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration>())
{
    segment_routings->parent = this;
    eui64_addresses->parent = this;
    regular_addresses->parent = this;
    auto_configuration->parent = this;

    yang_name = "addresses"; yang_parent_name = "ipv6-network"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::~Addresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::has_data() const
{
    if (is_presence_container) return true;
    return (segment_routings !=  nullptr && segment_routings->has_data())
	|| (link_local_address !=  nullptr && link_local_address->has_data())
	|| (eui64_addresses !=  nullptr && eui64_addresses->has_data())
	|| (regular_addresses !=  nullptr && regular_addresses->has_data())
	|| (auto_configuration !=  nullptr && auto_configuration->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::has_operation() const
{
    return is_set(yfilter)
	|| (segment_routings !=  nullptr && segment_routings->has_operation())
	|| (link_local_address !=  nullptr && link_local_address->has_operation())
	|| (eui64_addresses !=  nullptr && eui64_addresses->has_operation())
	|| (regular_addresses !=  nullptr && regular_addresses->has_operation())
	|| (auto_configuration !=  nullptr && auto_configuration->has_operation());
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routings")
    {
        if(segment_routings == nullptr)
        {
            segment_routings = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings>();
        }
        return segment_routings;
    }

    if(child_yang_name == "link-local-address")
    {
        if(link_local_address == nullptr)
        {
            link_local_address = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress>();
        }
        return link_local_address;
    }

    if(child_yang_name == "eui64-addresses")
    {
        if(eui64_addresses == nullptr)
        {
            eui64_addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses>();
        }
        return eui64_addresses;
    }

    if(child_yang_name == "regular-addresses")
    {
        if(regular_addresses == nullptr)
        {
            regular_addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses>();
        }
        return regular_addresses;
    }

    if(child_yang_name == "auto-configuration")
    {
        if(auto_configuration == nullptr)
        {
            auto_configuration = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration>();
        }
        return auto_configuration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(segment_routings != nullptr)
    {
        _children["segment-routings"] = segment_routings;
    }

    if(link_local_address != nullptr)
    {
        _children["link-local-address"] = link_local_address;
    }

    if(eui64_addresses != nullptr)
    {
        _children["eui64-addresses"] = eui64_addresses;
    }

    if(regular_addresses != nullptr)
    {
        _children["regular-addresses"] = regular_addresses;
    }

    if(auto_configuration != nullptr)
    {
        _children["auto-configuration"] = auto_configuration;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routings" || name == "link-local-address" || name == "eui64-addresses" || name == "regular-addresses" || name == "auto-configuration")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRoutings()
    :
    segment_routing(this, {"address"})
{

    yang_name = "segment-routings"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::~SegmentRoutings()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_routing.len(); index++)
    {
        if(segment_routing[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::has_operation() const
{
    for (std::size_t index=0; index<segment_routing.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting>();
        ent_->parent = this;
        segment_routing.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : segment_routing.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "segment-routing";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv6_prefix_sid != nullptr)
    {
        _children["ipv6-prefix-sid"] = ipv6_prefix_sid;
    }

    return _children;
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
    zone{YType::str, "zone"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "ipv6-prefix-sid"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::~Ipv6PrefixSid()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| zone.is_set
	|| route_tag.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(zone.yfilter)
	|| ydk::is_set(route_tag.yfilter);
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
    if (zone.is_set || is_set(zone.yfilter)) leaf_name_data.push_back(zone.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zone")
    {
        zone = value;
        zone.value_namespace = name_space;
        zone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "zone")
    {
        zone.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-length" || name == "zone" || name == "route-tag")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::LinkLocalAddress()
    :
    address{YType::str, "address"},
    zone{YType::str, "zone"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "link-local-address"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::~LinkLocalAddress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| zone.is_set
	|| route_tag.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(zone.yfilter)
	|| ydk::is_set(route_tag.yfilter);
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
    if (zone.is_set || is_set(zone.yfilter)) leaf_name_data.push_back(zone.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zone")
    {
        zone = value;
        zone.value_namespace = name_space;
        zone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "zone")
    {
        zone.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "zone" || name == "route-tag")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Addresses()
    :
    eui64_address(this, {"address"})
{

    yang_name = "eui64-addresses"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::~Eui64Addresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eui64_address.len(); index++)
    {
        if(eui64_address[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::has_operation() const
{
    for (std::size_t index=0; index<eui64_address.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eui64-address")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address>();
        ent_->parent = this;
        eui64_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : eui64_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    zone{YType::str, "zone"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "eui64-address"; yang_parent_name = "eui64-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::~Eui64Address()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| prefix_length.is_set
	|| zone.is_set
	|| route_tag.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(zone.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eui64-address";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (zone.is_set || is_set(zone.yfilter)) leaf_name_data.push_back(zone.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "zone")
    {
        zone = value;
        zone.value_namespace = name_space;
        zone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "zone")
    {
        zone.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length" || name == "zone" || name == "route-tag")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddresses()
    :
    regular_address(this, {"address"})
{

    yang_name = "regular-addresses"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::~RegularAddresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<regular_address.len(); index++)
    {
        if(regular_address[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::has_operation() const
{
    for (std::size_t index=0; index<regular_address.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "regular-address")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress>();
        ent_->parent = this;
        regular_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : regular_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    zone{YType::str, "zone"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "regular-address"; yang_parent_name = "regular-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::~RegularAddress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| prefix_length.is_set
	|| zone.is_set
	|| route_tag.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(zone.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "regular-address";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (zone.is_set || is_set(zone.yfilter)) leaf_name_data.push_back(zone.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "zone")
    {
        zone = value;
        zone.value_namespace = name_space;
        zone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "zone")
    {
        zone.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length" || name == "zone" || name == "route-tag")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::AutoConfiguration()
    :
    enable{YType::empty, "enable"},
    auto_config_slaac{YType::empty, "auto-config-slaac"}
{

    yang_name = "auto-configuration"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::~AutoConfiguration()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| auto_config_slaac.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(auto_config_slaac.yfilter);
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

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (auto_config_slaac.is_set || is_set(auto_config_slaac.yfilter)) leaf_name_data.push_back(auto_config_slaac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-config-slaac")
    {
        auto_config_slaac = value;
        auto_config_slaac.value_namespace = name_space;
        auto_config_slaac.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "auto-config-slaac")
    {
        auto_config_slaac.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "auto-config-slaac")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp_flow_tag_policy != nullptr)
    {
        _children["bgp-flow-tag-policy"] = bgp_flow_tag_policy;
    }

    return _children;
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
    source{YType::boolean, "source"},
    destination{YType::boolean, "destination"}
{

    yang_name = "bgp-flow-tag-policy"; yang_parent_name = "bgp-flow-tag-policy-table"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::~BgpFlowTagPolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::has_data() const
{
    if (is_presence_container) return true;
    return source.is_set
	|| destination.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter);
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

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(label_security != nullptr)
    {
        _children["label-security"] = label_security;
    }

    return _children;
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelTeAttributes()
    :
    forward_class{YType::uint32, "forward-class"},
    destination{YType::str, "destination"},
    record_route{YType::empty, "record-route"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    soft_preemption{YType::empty, "soft-preemption"},
    load_share{YType::uint32, "load-share"},
    signalled_name{YType::str, "signalled-name"}
        ,
    backup_bandwidth(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth>())
    , bfd_over_lsp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp>())
    , binding_segment_id_mpls(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls>())
    , tunnel_path_protection(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection>())
    , path_option_protects(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects>())
    , bidirectional(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional>())
    , admin_mode(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode>())
    , switching(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching>())
    , pce(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce>())
    , tunnel_path_selection(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection>())
    , auto_bandwidth(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth>())
    , priority(nullptr) // presence node
    , affinity_mask(nullptr) // presence node
    , forwarding_adjacency(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency>())
    , logging(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging>())
    , bandwidth(nullptr) // presence node
    , autoroute(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute>())
    , policy_classes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses>())
    , new_style_affinity_affinity_types(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes>())
    , fast_reroute(nullptr) // presence node
{
    backup_bandwidth->parent = this;
    bfd_over_lsp->parent = this;
    binding_segment_id_mpls->parent = this;
    tunnel_path_protection->parent = this;
    path_option_protects->parent = this;
    bidirectional->parent = this;
    admin_mode->parent = this;
    switching->parent = this;
    pce->parent = this;
    tunnel_path_selection->parent = this;
    auto_bandwidth->parent = this;
    forwarding_adjacency->parent = this;
    logging->parent = this;
    autoroute->parent = this;
    policy_classes->parent = this;
    new_style_affinity_affinity_types->parent = this;

    yang_name = "tunnel-te-attributes"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::~TunnelTeAttributes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::has_data() const
{
    if (is_presence_container) return true;
    return forward_class.is_set
	|| destination.is_set
	|| record_route.is_set
	|| path_selection_metric.is_set
	|| soft_preemption.is_set
	|| load_share.is_set
	|| signalled_name.is_set
	|| (backup_bandwidth !=  nullptr && backup_bandwidth->has_data())
	|| (bfd_over_lsp !=  nullptr && bfd_over_lsp->has_data())
	|| (binding_segment_id_mpls !=  nullptr && binding_segment_id_mpls->has_data())
	|| (tunnel_path_protection !=  nullptr && tunnel_path_protection->has_data())
	|| (path_option_protects !=  nullptr && path_option_protects->has_data())
	|| (bidirectional !=  nullptr && bidirectional->has_data())
	|| (admin_mode !=  nullptr && admin_mode->has_data())
	|| (switching !=  nullptr && switching->has_data())
	|| (pce !=  nullptr && pce->has_data())
	|| (tunnel_path_selection !=  nullptr && tunnel_path_selection->has_data())
	|| (auto_bandwidth !=  nullptr && auto_bandwidth->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (forwarding_adjacency !=  nullptr && forwarding_adjacency->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (autoroute !=  nullptr && autoroute->has_data())
	|| (policy_classes !=  nullptr && policy_classes->has_data())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| ydk::is_set(path_selection_metric.yfilter)
	|| ydk::is_set(soft_preemption.yfilter)
	|| ydk::is_set(load_share.yfilter)
	|| ydk::is_set(signalled_name.yfilter)
	|| (backup_bandwidth !=  nullptr && backup_bandwidth->has_operation())
	|| (bfd_over_lsp !=  nullptr && bfd_over_lsp->has_operation())
	|| (binding_segment_id_mpls !=  nullptr && binding_segment_id_mpls->has_operation())
	|| (tunnel_path_protection !=  nullptr && tunnel_path_protection->has_operation())
	|| (path_option_protects !=  nullptr && path_option_protects->has_operation())
	|| (bidirectional !=  nullptr && bidirectional->has_operation())
	|| (admin_mode !=  nullptr && admin_mode->has_operation())
	|| (switching !=  nullptr && switching->has_operation())
	|| (pce !=  nullptr && pce->has_operation())
	|| (tunnel_path_selection !=  nullptr && tunnel_path_selection->has_operation())
	|| (auto_bandwidth !=  nullptr && auto_bandwidth->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (forwarding_adjacency !=  nullptr && forwarding_adjacency->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (autoroute !=  nullptr && autoroute->has_operation())
	|| (policy_classes !=  nullptr && policy_classes->has_operation())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:tunnel-te-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.yfilter)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (soft_preemption.is_set || is_set(soft_preemption.yfilter)) leaf_name_data.push_back(soft_preemption.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.yfilter)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (signalled_name.is_set || is_set(signalled_name.yfilter)) leaf_name_data.push_back(signalled_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-bandwidth")
    {
        if(backup_bandwidth == nullptr)
        {
            backup_bandwidth = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth>();
        }
        return backup_bandwidth;
    }

    if(child_yang_name == "bfd-over-lsp")
    {
        if(bfd_over_lsp == nullptr)
        {
            bfd_over_lsp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp>();
        }
        return bfd_over_lsp;
    }

    if(child_yang_name == "binding-segment-id-mpls")
    {
        if(binding_segment_id_mpls == nullptr)
        {
            binding_segment_id_mpls = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls>();
        }
        return binding_segment_id_mpls;
    }

    if(child_yang_name == "tunnel-path-protection")
    {
        if(tunnel_path_protection == nullptr)
        {
            tunnel_path_protection = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection>();
        }
        return tunnel_path_protection;
    }

    if(child_yang_name == "path-option-protects")
    {
        if(path_option_protects == nullptr)
        {
            path_option_protects = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects>();
        }
        return path_option_protects;
    }

    if(child_yang_name == "bidirectional")
    {
        if(bidirectional == nullptr)
        {
            bidirectional = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional>();
        }
        return bidirectional;
    }

    if(child_yang_name == "admin-mode")
    {
        if(admin_mode == nullptr)
        {
            admin_mode = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode>();
        }
        return admin_mode;
    }

    if(child_yang_name == "switching")
    {
        if(switching == nullptr)
        {
            switching = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching>();
        }
        return switching;
    }

    if(child_yang_name == "pce")
    {
        if(pce == nullptr)
        {
            pce = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce>();
        }
        return pce;
    }

    if(child_yang_name == "tunnel-path-selection")
    {
        if(tunnel_path_selection == nullptr)
        {
            tunnel_path_selection = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection>();
        }
        return tunnel_path_selection;
    }

    if(child_yang_name == "auto-bandwidth")
    {
        if(auto_bandwidth == nullptr)
        {
            auto_bandwidth = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth>();
        }
        return auto_bandwidth;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask == nullptr)
        {
            affinity_mask = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask>();
        }
        return affinity_mask;
    }

    if(child_yang_name == "forwarding-adjacency")
    {
        if(forwarding_adjacency == nullptr)
        {
            forwarding_adjacency = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency>();
        }
        return forwarding_adjacency;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "autoroute")
    {
        if(autoroute == nullptr)
        {
            autoroute = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute>();
        }
        return autoroute;
    }

    if(child_yang_name == "policy-classes")
    {
        if(policy_classes == nullptr)
        {
            policy_classes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses>();
        }
        return policy_classes;
    }

    if(child_yang_name == "new-style-affinity-affinity-types")
    {
        if(new_style_affinity_affinity_types == nullptr)
        {
            new_style_affinity_affinity_types = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes>();
        }
        return new_style_affinity_affinity_types;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute>();
        }
        return fast_reroute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(backup_bandwidth != nullptr)
    {
        _children["backup-bandwidth"] = backup_bandwidth;
    }

    if(bfd_over_lsp != nullptr)
    {
        _children["bfd-over-lsp"] = bfd_over_lsp;
    }

    if(binding_segment_id_mpls != nullptr)
    {
        _children["binding-segment-id-mpls"] = binding_segment_id_mpls;
    }

    if(tunnel_path_protection != nullptr)
    {
        _children["tunnel-path-protection"] = tunnel_path_protection;
    }

    if(path_option_protects != nullptr)
    {
        _children["path-option-protects"] = path_option_protects;
    }

    if(bidirectional != nullptr)
    {
        _children["bidirectional"] = bidirectional;
    }

    if(admin_mode != nullptr)
    {
        _children["admin-mode"] = admin_mode;
    }

    if(switching != nullptr)
    {
        _children["switching"] = switching;
    }

    if(pce != nullptr)
    {
        _children["pce"] = pce;
    }

    if(tunnel_path_selection != nullptr)
    {
        _children["tunnel-path-selection"] = tunnel_path_selection;
    }

    if(auto_bandwidth != nullptr)
    {
        _children["auto-bandwidth"] = auto_bandwidth;
    }

    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    if(affinity_mask != nullptr)
    {
        _children["affinity-mask"] = affinity_mask;
    }

    if(forwarding_adjacency != nullptr)
    {
        _children["forwarding-adjacency"] = forwarding_adjacency;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    if(bandwidth != nullptr)
    {
        _children["bandwidth"] = bandwidth;
    }

    if(autoroute != nullptr)
    {
        _children["autoroute"] = autoroute;
    }

    if(policy_classes != nullptr)
    {
        _children["policy-classes"] = policy_classes;
    }

    if(new_style_affinity_affinity_types != nullptr)
    {
        _children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
    }

    if(fast_reroute != nullptr)
    {
        _children["fast-reroute"] = fast_reroute;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
        path_selection_metric.value_namespace = name_space;
        path_selection_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption = value;
        soft_preemption.value_namespace = name_space;
        soft_preemption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-share")
    {
        load_share = value;
        load_share.value_namespace = name_space;
        load_share.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalled-name")
    {
        signalled_name = value;
        signalled_name.value_namespace = name_space;
        signalled_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric.yfilter = yfilter;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption.yfilter = yfilter;
    }
    if(value_path == "load-share")
    {
        load_share.yfilter = yfilter;
    }
    if(value_path == "signalled-name")
    {
        signalled_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-bandwidth" || name == "bfd-over-lsp" || name == "binding-segment-id-mpls" || name == "tunnel-path-protection" || name == "path-option-protects" || name == "bidirectional" || name == "admin-mode" || name == "switching" || name == "pce" || name == "tunnel-path-selection" || name == "auto-bandwidth" || name == "priority" || name == "affinity-mask" || name == "forwarding-adjacency" || name == "logging" || name == "bandwidth" || name == "autoroute" || name == "policy-classes" || name == "new-style-affinity-affinity-types" || name == "fast-reroute" || name == "forward-class" || name == "destination" || name == "record-route" || name == "path-selection-metric" || name == "soft-preemption" || name == "load-share" || name == "signalled-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::BackupBandwidth()
    :
    dste_type{YType::enumeration, "dste-type"},
    pool_type{YType::enumeration, "pool-type"},
    class_type{YType::enumeration, "class-type"},
    limit_type{YType::enumeration, "limit-type"},
    backup_bandwidth{YType::uint32, "backup-bandwidth"}
{

    yang_name = "backup-bandwidth"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::~BackupBandwidth()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::has_data() const
{
    if (is_presence_container) return true;
    return dste_type.is_set
	|| pool_type.is_set
	|| class_type.is_set
	|| limit_type.is_set
	|| backup_bandwidth.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dste_type.yfilter)
	|| ydk::is_set(pool_type.yfilter)
	|| ydk::is_set(class_type.yfilter)
	|| ydk::is_set(limit_type.yfilter)
	|| ydk::is_set(backup_bandwidth.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_type.is_set || is_set(dste_type.yfilter)) leaf_name_data.push_back(dste_type.get_name_leafdata());
    if (pool_type.is_set || is_set(pool_type.yfilter)) leaf_name_data.push_back(pool_type.get_name_leafdata());
    if (class_type.is_set || is_set(class_type.yfilter)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (limit_type.is_set || is_set(limit_type.yfilter)) leaf_name_data.push_back(limit_type.get_name_leafdata());
    if (backup_bandwidth.is_set || is_set(backup_bandwidth.yfilter)) leaf_name_data.push_back(backup_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dste-type")
    {
        dste_type = value;
        dste_type.value_namespace = name_space;
        dste_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool-type")
    {
        pool_type = value;
        pool_type.value_namespace = name_space;
        pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-type")
    {
        class_type = value;
        class_type.value_namespace = name_space;
        class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit-type")
    {
        limit_type = value;
        limit_type.value_namespace = name_space;
        limit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-bandwidth")
    {
        backup_bandwidth = value;
        backup_bandwidth.value_namespace = name_space;
        backup_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dste-type")
    {
        dste_type.yfilter = yfilter;
    }
    if(value_path == "pool-type")
    {
        pool_type.yfilter = yfilter;
    }
    if(value_path == "class-type")
    {
        class_type.yfilter = yfilter;
    }
    if(value_path == "limit-type")
    {
        limit_type.yfilter = yfilter;
    }
    if(value_path == "backup-bandwidth")
    {
        backup_bandwidth.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dste-type" || name == "pool-type" || name == "class-type" || name == "limit-type" || name == "backup-bandwidth")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::BfdOverLsp()
    :
    dampening_initial_wait{YType::uint32, "dampening-initial-wait"},
    fast_detect{YType::enumeration, "fast-detect"},
    enable{YType::empty, "enable"},
    multiplier{YType::uint32, "multiplier"},
    bringup_timeout{YType::uint32, "bringup-timeout"},
    periodic_ping_disable{YType::empty, "periodic-ping-disable"},
    dampening_secondary_wait{YType::uint32, "dampening-secondary-wait"},
    periodic_ping_interval{YType::uint32, "periodic-ping-interval"},
    dampening_maximum_wait{YType::uint32, "dampening-maximum-wait"},
    minimum_interval{YType::uint32, "minimum-interval"},
    encap_mode{YType::uint32, "encap-mode"}
{

    yang_name = "bfd-over-lsp"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::~BfdOverLsp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::has_data() const
{
    if (is_presence_container) return true;
    return dampening_initial_wait.is_set
	|| fast_detect.is_set
	|| enable.is_set
	|| multiplier.is_set
	|| bringup_timeout.is_set
	|| periodic_ping_disable.is_set
	|| dampening_secondary_wait.is_set
	|| periodic_ping_interval.is_set
	|| dampening_maximum_wait.is_set
	|| minimum_interval.is_set
	|| encap_mode.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dampening_initial_wait.yfilter)
	|| ydk::is_set(fast_detect.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(multiplier.yfilter)
	|| ydk::is_set(bringup_timeout.yfilter)
	|| ydk::is_set(periodic_ping_disable.yfilter)
	|| ydk::is_set(dampening_secondary_wait.yfilter)
	|| ydk::is_set(periodic_ping_interval.yfilter)
	|| ydk::is_set(dampening_maximum_wait.yfilter)
	|| ydk::is_set(minimum_interval.yfilter)
	|| ydk::is_set(encap_mode.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-over-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dampening_initial_wait.is_set || is_set(dampening_initial_wait.yfilter)) leaf_name_data.push_back(dampening_initial_wait.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.yfilter)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());
    if (bringup_timeout.is_set || is_set(bringup_timeout.yfilter)) leaf_name_data.push_back(bringup_timeout.get_name_leafdata());
    if (periodic_ping_disable.is_set || is_set(periodic_ping_disable.yfilter)) leaf_name_data.push_back(periodic_ping_disable.get_name_leafdata());
    if (dampening_secondary_wait.is_set || is_set(dampening_secondary_wait.yfilter)) leaf_name_data.push_back(dampening_secondary_wait.get_name_leafdata());
    if (periodic_ping_interval.is_set || is_set(periodic_ping_interval.yfilter)) leaf_name_data.push_back(periodic_ping_interval.get_name_leafdata());
    if (dampening_maximum_wait.is_set || is_set(dampening_maximum_wait.yfilter)) leaf_name_data.push_back(dampening_maximum_wait.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.yfilter)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (encap_mode.is_set || is_set(encap_mode.yfilter)) leaf_name_data.push_back(encap_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dampening-initial-wait")
    {
        dampening_initial_wait = value;
        dampening_initial_wait.value_namespace = name_space;
        dampening_initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
        fast_detect.value_namespace = name_space;
        fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bringup-timeout")
    {
        bringup_timeout = value;
        bringup_timeout.value_namespace = name_space;
        bringup_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-ping-disable")
    {
        periodic_ping_disable = value;
        periodic_ping_disable.value_namespace = name_space;
        periodic_ping_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampening-secondary-wait")
    {
        dampening_secondary_wait = value;
        dampening_secondary_wait.value_namespace = name_space;
        dampening_secondary_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-ping-interval")
    {
        periodic_ping_interval = value;
        periodic_ping_interval.value_namespace = name_space;
        periodic_ping_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampening-maximum-wait")
    {
        dampening_maximum_wait = value;
        dampening_maximum_wait.value_namespace = name_space;
        dampening_maximum_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
        minimum_interval.value_namespace = name_space;
        minimum_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap-mode")
    {
        encap_mode = value;
        encap_mode.value_namespace = name_space;
        encap_mode.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dampening-initial-wait")
    {
        dampening_initial_wait.yfilter = yfilter;
    }
    if(value_path == "fast-detect")
    {
        fast_detect.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
    if(value_path == "bringup-timeout")
    {
        bringup_timeout.yfilter = yfilter;
    }
    if(value_path == "periodic-ping-disable")
    {
        periodic_ping_disable.yfilter = yfilter;
    }
    if(value_path == "dampening-secondary-wait")
    {
        dampening_secondary_wait.yfilter = yfilter;
    }
    if(value_path == "periodic-ping-interval")
    {
        periodic_ping_interval.yfilter = yfilter;
    }
    if(value_path == "dampening-maximum-wait")
    {
        dampening_maximum_wait.yfilter = yfilter;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval.yfilter = yfilter;
    }
    if(value_path == "encap-mode")
    {
        encap_mode.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dampening-initial-wait" || name == "fast-detect" || name == "enable" || name == "multiplier" || name == "bringup-timeout" || name == "periodic-ping-disable" || name == "dampening-secondary-wait" || name == "periodic-ping-interval" || name == "dampening-maximum-wait" || name == "minimum-interval" || name == "encap-mode")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::BindingSegmentIdMpls()
    :
    segment_id_type{YType::enumeration, "segment-id-type"},
    label_value{YType::uint32, "label-value"}
{

    yang_name = "binding-segment-id-mpls"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::~BindingSegmentIdMpls()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::has_data() const
{
    if (is_presence_container) return true;
    return segment_id_type.is_set
	|| label_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment_id_type.yfilter)
	|| ydk::is_set(label_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-segment-id-mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_id_type.is_set || is_set(segment_id_type.yfilter)) leaf_name_data.push_back(segment_id_type.get_name_leafdata());
    if (label_value.is_set || is_set(label_value.yfilter)) leaf_name_data.push_back(label_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "segment-id-type")
    {
        segment_id_type = value;
        segment_id_type.value_namespace = name_space;
        segment_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-value")
    {
        label_value = value;
        label_value.value_namespace = name_space;
        label_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "segment-id-type")
    {
        segment_id_type.yfilter = yfilter;
    }
    if(value_path == "label-value")
    {
        label_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-id-type" || name == "label-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection::TunnelPathProtection()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "tunnel-path-protection"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection::~TunnelPathProtection()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-path-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtects()
    :
    path_option_protect(this, {"protection"})
{

    yang_name = "path-option-protects"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::~PathOptionProtects()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_option_protect.len(); index++)
    {
        if(path_option_protect[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::has_operation() const
{
    for (std::size_t index=0; index<path_option_protect.len(); index++)
    {
        if(path_option_protect[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option-protects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option-protect")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect>();
        ent_->parent = this;
        path_option_protect.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path_option_protect.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option-protect")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptionProtect()
    :
    protection{YType::enumeration, "protection"}
        ,
    path_options(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions>())
{
    path_options->parent = this;

    yang_name = "path-option-protect"; yang_parent_name = "path-option-protects"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::~PathOptionProtect()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::has_data() const
{
    if (is_presence_container) return true;
    return protection.is_set
	|| (path_options !=  nullptr && path_options->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protection.yfilter)
	|| (path_options !=  nullptr && path_options->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option-protect";
    ADD_KEY_TOKEN(protection, "protection");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protection.is_set || is_set(protection.yfilter)) leaf_name_data.push_back(protection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-options")
    {
        if(path_options == nullptr)
        {
            path_options = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions>();
        }
        return path_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_options != nullptr)
    {
        _children["path-options"] = path_options;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protection")
    {
        protection = value;
        protection.value_namespace = name_space;
        protection.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protection")
    {
        protection.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-options" || name == "protection")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOptions()
    :
    path_option(this, {"preference_level"})
{

    yang_name = "path-options"; yang_parent_name = "path-option-protect"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::~PathOptions()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_option.len(); index++)
    {
        if(path_option[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::has_operation() const
{
    for (std::size_t index=0; index<path_option.len(); index++)
    {
        if(path_option[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption>();
        ent_->parent = this;
        path_option.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path_option.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::PathOption()
    :
    preference_level{YType::uint32, "preference-level"},
    path_type{YType::enumeration, "path-type"},
    path_id{YType::uint32, "path-id"},
    path_name{YType::str, "path-name"},
    path_property{YType::uint32, "path-property"},
    interface{YType::str, "interface"},
    output_label{YType::uint32, "output-label"},
    destination{YType::str, "destination"},
    lockdown{YType::enumeration, "lockdown"},
    verbatim{YType::enumeration, "verbatim"},
    pce{YType::enumeration, "pce"},
    pce_address{YType::str, "pce-address"},
    igp_type{YType::enumeration, "igp-type"},
    igp_instance{YType::str, "igp-instance"},
    igp_area{YType::uint32, "igp-area"},
    igp_area_ip_address_id{YType::str, "igp-area-ip-address-id"},
    path_option_attribute_set_name{YType::str, "path-option-attribute-set-name"},
    protected_by_preference_level{YType::uint32, "protected-by-preference-level"},
    segment_routing{YType::enumeration, "segment-routing"}
{

    yang_name = "path-option"; yang_parent_name = "path-options"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::~PathOption()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::has_data() const
{
    if (is_presence_container) return true;
    return preference_level.is_set
	|| path_type.is_set
	|| path_id.is_set
	|| path_name.is_set
	|| path_property.is_set
	|| interface.is_set
	|| output_label.is_set
	|| destination.is_set
	|| lockdown.is_set
	|| verbatim.is_set
	|| pce.is_set
	|| pce_address.is_set
	|| igp_type.is_set
	|| igp_instance.is_set
	|| igp_area.is_set
	|| igp_area_ip_address_id.is_set
	|| path_option_attribute_set_name.is_set
	|| protected_by_preference_level.is_set
	|| segment_routing.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preference_level.yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_name.yfilter)
	|| ydk::is_set(path_property.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(lockdown.yfilter)
	|| ydk::is_set(verbatim.yfilter)
	|| ydk::is_set(pce.yfilter)
	|| ydk::is_set(pce_address.yfilter)
	|| ydk::is_set(igp_type.yfilter)
	|| ydk::is_set(igp_instance.yfilter)
	|| ydk::is_set(igp_area.yfilter)
	|| ydk::is_set(igp_area_ip_address_id.yfilter)
	|| ydk::is_set(path_option_attribute_set_name.yfilter)
	|| ydk::is_set(protected_by_preference_level.yfilter)
	|| ydk::is_set(segment_routing.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option";
    ADD_KEY_TOKEN(preference_level, "preference-level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preference_level.is_set || is_set(preference_level.yfilter)) leaf_name_data.push_back(preference_level.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_name.is_set || is_set(path_name.yfilter)) leaf_name_data.push_back(path_name.get_name_leafdata());
    if (path_property.is_set || is_set(path_property.yfilter)) leaf_name_data.push_back(path_property.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.yfilter)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());
    if (pce.is_set || is_set(pce.yfilter)) leaf_name_data.push_back(pce.get_name_leafdata());
    if (pce_address.is_set || is_set(pce_address.yfilter)) leaf_name_data.push_back(pce_address.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.yfilter)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (igp_area.is_set || is_set(igp_area.yfilter)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (igp_area_ip_address_id.is_set || is_set(igp_area_ip_address_id.yfilter)) leaf_name_data.push_back(igp_area_ip_address_id.get_name_leafdata());
    if (path_option_attribute_set_name.is_set || is_set(path_option_attribute_set_name.yfilter)) leaf_name_data.push_back(path_option_attribute_set_name.get_name_leafdata());
    if (protected_by_preference_level.is_set || is_set(protected_by_preference_level.yfilter)) leaf_name_data.push_back(protected_by_preference_level.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.yfilter)) leaf_name_data.push_back(segment_routing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preference-level")
    {
        preference_level = value;
        preference_level.value_namespace = name_space;
        preference_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "path-property")
    {
        path_property = value;
        path_property.value_namespace = name_space;
        path_property.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-label")
    {
        output_label = value;
        output_label.value_namespace = name_space;
        output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
        lockdown.value_namespace = name_space;
        lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce")
    {
        pce = value;
        pce.value_namespace = name_space;
        pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-address")
    {
        pce_address = value;
        pce_address.value_namespace = name_space;
        pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
        igp_instance.value_namespace = name_space;
        igp_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area")
    {
        igp_area = value;
        igp_area.value_namespace = name_space;
        igp_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area-ip-address-id")
    {
        igp_area_ip_address_id = value;
        igp_area_ip_address_id.value_namespace = name_space;
        igp_area_ip_address_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-attribute-set-name")
    {
        path_option_attribute_set_name = value;
        path_option_attribute_set_name.value_namespace = name_space;
        path_option_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-by-preference-level")
    {
        protected_by_preference_level = value;
        protected_by_preference_level.value_namespace = name_space;
        protected_by_preference_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
        segment_routing.value_namespace = name_space;
        segment_routing.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preference-level")
    {
        preference_level.yfilter = yfilter;
    }
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "path-name")
    {
        path_name.yfilter = yfilter;
    }
    if(value_path == "path-property")
    {
        path_property.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "output-label")
    {
        output_label.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "lockdown")
    {
        lockdown.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
    if(value_path == "pce")
    {
        pce.yfilter = yfilter;
    }
    if(value_path == "pce-address")
    {
        pce_address.yfilter = yfilter;
    }
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
    if(value_path == "igp-instance")
    {
        igp_instance.yfilter = yfilter;
    }
    if(value_path == "igp-area")
    {
        igp_area.yfilter = yfilter;
    }
    if(value_path == "igp-area-ip-address-id")
    {
        igp_area_ip_address_id.yfilter = yfilter;
    }
    if(value_path == "path-option-attribute-set-name")
    {
        path_option_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "protected-by-preference-level")
    {
        protected_by_preference_level.yfilter = yfilter;
    }
    if(value_path == "segment-routing")
    {
        segment_routing.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preference-level" || name == "path-type" || name == "path-id" || name == "path-name" || name == "path-property" || name == "interface" || name == "output-label" || name == "destination" || name == "lockdown" || name == "verbatim" || name == "pce" || name == "pce-address" || name == "igp-type" || name == "igp-instance" || name == "igp-area" || name == "igp-area-ip-address-id" || name == "path-option-attribute-set-name" || name == "protected-by-preference-level" || name == "segment-routing")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::Bidirectional()
    :
    enabled{YType::empty, "enabled"}
        ,
    association_corouted_type(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType>())
    , association_parameters(nullptr) // presence node
{
    association_corouted_type->parent = this;

    yang_name = "bidirectional"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::~Bidirectional()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| (association_corouted_type !=  nullptr && association_corouted_type->has_data())
	|| (association_parameters !=  nullptr && association_parameters->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| (association_corouted_type !=  nullptr && association_corouted_type->has_operation())
	|| (association_parameters !=  nullptr && association_parameters->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidirectional";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association-corouted-type")
    {
        if(association_corouted_type == nullptr)
        {
            association_corouted_type = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType>();
        }
        return association_corouted_type;
    }

    if(child_yang_name == "association-parameters")
    {
        if(association_parameters == nullptr)
        {
            association_parameters = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters>();
        }
        return association_parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(association_corouted_type != nullptr)
    {
        _children["association-corouted-type"] = association_corouted_type;
    }

    if(association_parameters != nullptr)
    {
        _children["association-parameters"] = association_parameters;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association-corouted-type" || name == "association-parameters" || name == "enabled")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::AssociationCoroutedType()
    :
    wrap_protection_enable{YType::empty, "wrap-protection-enable"},
    enable{YType::empty, "enable"},
    disable_protection_object{YType::empty, "disable-protection-object"}
        ,
    fault_oam(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam>())
{
    fault_oam->parent = this;

    yang_name = "association-corouted-type"; yang_parent_name = "bidirectional"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::~AssociationCoroutedType()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::has_data() const
{
    if (is_presence_container) return true;
    return wrap_protection_enable.is_set
	|| enable.is_set
	|| disable_protection_object.is_set
	|| (fault_oam !=  nullptr && fault_oam->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wrap_protection_enable.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(disable_protection_object.yfilter)
	|| (fault_oam !=  nullptr && fault_oam->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-corouted-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wrap_protection_enable.is_set || is_set(wrap_protection_enable.yfilter)) leaf_name_data.push_back(wrap_protection_enable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (disable_protection_object.is_set || is_set(disable_protection_object.yfilter)) leaf_name_data.push_back(disable_protection_object.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fault-oam")
    {
        if(fault_oam == nullptr)
        {
            fault_oam = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam>();
        }
        return fault_oam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fault_oam != nullptr)
    {
        _children["fault-oam"] = fault_oam;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wrap-protection-enable")
    {
        wrap_protection_enable = value;
        wrap_protection_enable.value_namespace = name_space;
        wrap_protection_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-protection-object")
    {
        disable_protection_object = value;
        disable_protection_object.value_namespace = name_space;
        disable_protection_object.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wrap-protection-enable")
    {
        wrap_protection_enable.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "disable-protection-object")
    {
        disable_protection_object.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fault-oam" || name == "wrap-protection-enable" || name == "enable" || name == "disable-protection-object")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::FaultOam()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "fault-oam"; yang_parent_name = "association-corouted-type"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::~FaultOam()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault-oam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::AssociationParameters()
    :
    association_id{YType::uint32, "association-id"},
    association_source_address{YType::str, "association-source-address"},
    association_is_global_id_configured{YType::boolean, "association-is-global-id-configured"},
    association_global_id{YType::uint32, "association-global-id"}
{

    yang_name = "association-parameters"; yang_parent_name = "bidirectional"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::~AssociationParameters()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::has_data() const
{
    if (is_presence_container) return true;
    return association_id.is_set
	|| association_source_address.is_set
	|| association_is_global_id_configured.is_set
	|| association_global_id.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(association_id.yfilter)
	|| ydk::is_set(association_source_address.yfilter)
	|| ydk::is_set(association_is_global_id_configured.yfilter)
	|| ydk::is_set(association_global_id.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (association_id.is_set || is_set(association_id.yfilter)) leaf_name_data.push_back(association_id.get_name_leafdata());
    if (association_source_address.is_set || is_set(association_source_address.yfilter)) leaf_name_data.push_back(association_source_address.get_name_leafdata());
    if (association_is_global_id_configured.is_set || is_set(association_is_global_id_configured.yfilter)) leaf_name_data.push_back(association_is_global_id_configured.get_name_leafdata());
    if (association_global_id.is_set || is_set(association_global_id.yfilter)) leaf_name_data.push_back(association_global_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "association-id")
    {
        association_id = value;
        association_id.value_namespace = name_space;
        association_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "association-source-address")
    {
        association_source_address = value;
        association_source_address.value_namespace = name_space;
        association_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "association-is-global-id-configured")
    {
        association_is_global_id_configured = value;
        association_is_global_id_configured.value_namespace = name_space;
        association_is_global_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "association-global-id")
    {
        association_global_id = value;
        association_global_id.value_namespace = name_space;
        association_global_id.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "association-id")
    {
        association_id.yfilter = yfilter;
    }
    if(value_path == "association-source-address")
    {
        association_source_address.yfilter = yfilter;
    }
    if(value_path == "association-is-global-id-configured")
    {
        association_is_global_id_configured.yfilter = yfilter;
    }
    if(value_path == "association-global-id")
    {
        association_global_id.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association-id" || name == "association-source-address" || name == "association-is-global-id-configured" || name == "association-global-id")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::AdminMode()
    :
    deactivate_tunnel{YType::empty, "deactivate-tunnel"}
{

    yang_name = "admin-mode"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::~AdminMode()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::has_data() const
{
    if (is_presence_container) return true;
    return deactivate_tunnel.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deactivate_tunnel.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deactivate_tunnel.is_set || is_set(deactivate_tunnel.yfilter)) leaf_name_data.push_back(deactivate_tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deactivate-tunnel")
    {
        deactivate_tunnel = value;
        deactivate_tunnel.value_namespace = name_space;
        deactivate_tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deactivate-tunnel")
    {
        deactivate_tunnel.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deactivate-tunnel")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Switching()
    :
    transit(nullptr) // presence node
    , endpoint(nullptr) // presence node
{

    yang_name = "switching"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::~Switching()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::has_data() const
{
    if (is_presence_container) return true;
    return (transit !=  nullptr && transit->has_data())
	|| (endpoint !=  nullptr && endpoint->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::has_operation() const
{
    return is_set(yfilter)
	|| (transit !=  nullptr && transit->has_operation())
	|| (endpoint !=  nullptr && endpoint->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switching";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transit")
    {
        if(transit == nullptr)
        {
            transit = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit>();
        }
        return transit;
    }

    if(child_yang_name == "endpoint")
    {
        if(endpoint == nullptr)
        {
            endpoint = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint>();
        }
        return endpoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(transit != nullptr)
    {
        _children["transit"] = transit;
    }

    if(endpoint != nullptr)
    {
        _children["endpoint"] = endpoint;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transit" || name == "endpoint")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::Transit()
    :
    capability{YType::enumeration, "capability"},
    encoding{YType::enumeration, "encoding"}
{

    yang_name = "transit"; yang_parent_name = "switching"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::~Transit()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::has_data() const
{
    if (is_presence_container) return true;
    return capability.is_set
	|| encoding.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(capability.yfilter)
	|| ydk::is_set(encoding.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability.is_set || is_set(capability.yfilter)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "capability")
    {
        capability = value;
        capability.value_namespace = name_space;
        capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "capability")
    {
        capability.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capability" || name == "encoding")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::Endpoint()
    :
    capability{YType::enumeration, "capability"},
    encoding{YType::enumeration, "encoding"}
{

    yang_name = "endpoint"; yang_parent_name = "switching"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::~Endpoint()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::has_data() const
{
    if (is_presence_container) return true;
    return capability.is_set
	|| encoding.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(capability.yfilter)
	|| ydk::is_set(encoding.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "endpoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability.is_set || is_set(capability.yfilter)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "capability")
    {
        capability = value;
        capability.value_namespace = name_space;
        capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "capability")
    {
        capability.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capability" || name == "encoding")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::Pce()
    :
    enable{YType::empty, "enable"},
    delegation{YType::empty, "delegation"}
{

    yang_name = "pce"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::~Pce()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| delegation.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(delegation.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (delegation.is_set || is_set(delegation.yfilter)) leaf_name_data.push_back(delegation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delegation")
    {
        delegation = value;
        delegation.value_namespace = name_space;
        delegation.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "delegation")
    {
        delegation.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "delegation")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::TunnelPathSelection()
    :
    tiebreaker{YType::enumeration, "tiebreaker"},
    path_selection_hop_limit{YType::uint32, "path-selection-hop-limit"},
    path_selection_delay_limit{YType::uint32, "path-selection-delay-limit"},
    path_selection_cost_limit{YType::uint32, "path-selection-cost-limit"}
        ,
    invalidation(nullptr) // presence node
{

    yang_name = "tunnel-path-selection"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::~TunnelPathSelection()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::has_data() const
{
    if (is_presence_container) return true;
    return tiebreaker.is_set
	|| path_selection_hop_limit.is_set
	|| path_selection_delay_limit.is_set
	|| path_selection_cost_limit.is_set
	|| (invalidation !=  nullptr && invalidation->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tiebreaker.yfilter)
	|| ydk::is_set(path_selection_hop_limit.yfilter)
	|| ydk::is_set(path_selection_delay_limit.yfilter)
	|| ydk::is_set(path_selection_cost_limit.yfilter)
	|| (invalidation !=  nullptr && invalidation->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker.is_set || is_set(tiebreaker.yfilter)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());
    if (path_selection_hop_limit.is_set || is_set(path_selection_hop_limit.yfilter)) leaf_name_data.push_back(path_selection_hop_limit.get_name_leafdata());
    if (path_selection_delay_limit.is_set || is_set(path_selection_delay_limit.yfilter)) leaf_name_data.push_back(path_selection_delay_limit.get_name_leafdata());
    if (path_selection_cost_limit.is_set || is_set(path_selection_cost_limit.yfilter)) leaf_name_data.push_back(path_selection_cost_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalidation")
    {
        if(invalidation == nullptr)
        {
            invalidation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation>();
        }
        return invalidation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(invalidation != nullptr)
    {
        _children["invalidation"] = invalidation;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tiebreaker")
    {
        tiebreaker = value;
        tiebreaker.value_namespace = name_space;
        tiebreaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-hop-limit")
    {
        path_selection_hop_limit = value;
        path_selection_hop_limit.value_namespace = name_space;
        path_selection_hop_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-delay-limit")
    {
        path_selection_delay_limit = value;
        path_selection_delay_limit.value_namespace = name_space;
        path_selection_delay_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-cost-limit")
    {
        path_selection_cost_limit = value;
        path_selection_cost_limit.value_namespace = name_space;
        path_selection_cost_limit.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tiebreaker")
    {
        tiebreaker.yfilter = yfilter;
    }
    if(value_path == "path-selection-hop-limit")
    {
        path_selection_hop_limit.yfilter = yfilter;
    }
    if(value_path == "path-selection-delay-limit")
    {
        path_selection_delay_limit.yfilter = yfilter;
    }
    if(value_path == "path-selection-cost-limit")
    {
        path_selection_cost_limit.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalidation" || name == "tiebreaker" || name == "path-selection-hop-limit" || name == "path-selection-delay-limit" || name == "path-selection-cost-limit")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::Invalidation()
    :
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    path_invalidation_action{YType::enumeration, "path-invalidation-action"}
{

    yang_name = "invalidation"; yang_parent_name = "tunnel-path-selection"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::~Invalidation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::has_data() const
{
    if (is_presence_container) return true;
    return path_invalidation_timeout.is_set
	|| path_invalidation_action.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter)
	|| ydk::is_set(path_invalidation_action.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_invalidation_action.is_set || is_set(path_invalidation_action.yfilter)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
        path_invalidation_action.value_namespace = name_space;
        path_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-invalidation-timeout" || name == "path-invalidation-action")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AutoBandwidth()
    :
    underflow_enable{YType::boolean, "underflow-enable"},
    resignal_last_bandwidth_time_out{YType::uint32, "resignal-last-bandwidth-time-out"},
    enabled{YType::boolean, "enabled"},
    application_frequency{YType::uint32, "application-frequency"},
    overflow_enable{YType::boolean, "overflow-enable"},
    collection_only{YType::empty, "collection-only"}
        ,
    underflow(nullptr) // presence node
    , overflow(nullptr) // presence node
    , bandwidth_limits(nullptr) // presence node
    , adjustment_threshold(nullptr) // presence node
    , auto_capacity(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AutoCapacity>())
{
    auto_capacity->parent = this;

    yang_name = "auto-bandwidth"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::~AutoBandwidth()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::has_data() const
{
    if (is_presence_container) return true;
    return underflow_enable.is_set
	|| resignal_last_bandwidth_time_out.is_set
	|| enabled.is_set
	|| application_frequency.is_set
	|| overflow_enable.is_set
	|| collection_only.is_set
	|| (underflow !=  nullptr && underflow->has_data())
	|| (overflow !=  nullptr && overflow->has_data())
	|| (bandwidth_limits !=  nullptr && bandwidth_limits->has_data())
	|| (adjustment_threshold !=  nullptr && adjustment_threshold->has_data())
	|| (auto_capacity !=  nullptr && auto_capacity->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(underflow_enable.yfilter)
	|| ydk::is_set(resignal_last_bandwidth_time_out.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(application_frequency.yfilter)
	|| ydk::is_set(overflow_enable.yfilter)
	|| ydk::is_set(collection_only.yfilter)
	|| (underflow !=  nullptr && underflow->has_operation())
	|| (overflow !=  nullptr && overflow->has_operation())
	|| (bandwidth_limits !=  nullptr && bandwidth_limits->has_operation())
	|| (adjustment_threshold !=  nullptr && adjustment_threshold->has_operation())
	|| (auto_capacity !=  nullptr && auto_capacity->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (underflow_enable.is_set || is_set(underflow_enable.yfilter)) leaf_name_data.push_back(underflow_enable.get_name_leafdata());
    if (resignal_last_bandwidth_time_out.is_set || is_set(resignal_last_bandwidth_time_out.yfilter)) leaf_name_data.push_back(resignal_last_bandwidth_time_out.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (application_frequency.is_set || is_set(application_frequency.yfilter)) leaf_name_data.push_back(application_frequency.get_name_leafdata());
    if (overflow_enable.is_set || is_set(overflow_enable.yfilter)) leaf_name_data.push_back(overflow_enable.get_name_leafdata());
    if (collection_only.is_set || is_set(collection_only.yfilter)) leaf_name_data.push_back(collection_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "underflow")
    {
        if(underflow == nullptr)
        {
            underflow = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow>();
        }
        return underflow;
    }

    if(child_yang_name == "overflow")
    {
        if(overflow == nullptr)
        {
            overflow = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow>();
        }
        return overflow;
    }

    if(child_yang_name == "bandwidth-limits")
    {
        if(bandwidth_limits == nullptr)
        {
            bandwidth_limits = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits>();
        }
        return bandwidth_limits;
    }

    if(child_yang_name == "adjustment-threshold")
    {
        if(adjustment_threshold == nullptr)
        {
            adjustment_threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold>();
        }
        return adjustment_threshold;
    }

    if(child_yang_name == "auto-capacity")
    {
        if(auto_capacity == nullptr)
        {
            auto_capacity = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AutoCapacity>();
        }
        return auto_capacity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(underflow != nullptr)
    {
        _children["underflow"] = underflow;
    }

    if(overflow != nullptr)
    {
        _children["overflow"] = overflow;
    }

    if(bandwidth_limits != nullptr)
    {
        _children["bandwidth-limits"] = bandwidth_limits;
    }

    if(adjustment_threshold != nullptr)
    {
        _children["adjustment-threshold"] = adjustment_threshold;
    }

    if(auto_capacity != nullptr)
    {
        _children["auto-capacity"] = auto_capacity;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "underflow-enable")
    {
        underflow_enable = value;
        underflow_enable.value_namespace = name_space;
        underflow_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resignal-last-bandwidth-time-out")
    {
        resignal_last_bandwidth_time_out = value;
        resignal_last_bandwidth_time_out.value_namespace = name_space;
        resignal_last_bandwidth_time_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-frequency")
    {
        application_frequency = value;
        application_frequency.value_namespace = name_space;
        application_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-enable")
    {
        overflow_enable = value;
        overflow_enable.value_namespace = name_space;
        overflow_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collection-only")
    {
        collection_only = value;
        collection_only.value_namespace = name_space;
        collection_only.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "underflow-enable")
    {
        underflow_enable.yfilter = yfilter;
    }
    if(value_path == "resignal-last-bandwidth-time-out")
    {
        resignal_last_bandwidth_time_out.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "application-frequency")
    {
        application_frequency.yfilter = yfilter;
    }
    if(value_path == "overflow-enable")
    {
        overflow_enable.yfilter = yfilter;
    }
    if(value_path == "collection-only")
    {
        collection_only.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "underflow" || name == "overflow" || name == "bandwidth-limits" || name == "adjustment-threshold" || name == "auto-capacity" || name == "underflow-enable" || name == "resignal-last-bandwidth-time-out" || name == "enabled" || name == "application-frequency" || name == "overflow-enable" || name == "collection-only")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::Underflow()
    :
    underflow_threshold_percent{YType::uint32, "underflow-threshold-percent"},
    underflow_threshold_value{YType::uint32, "underflow-threshold-value"},
    underflow_threshold_limit{YType::uint32, "underflow-threshold-limit"}
{

    yang_name = "underflow"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::~Underflow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::has_data() const
{
    if (is_presence_container) return true;
    return underflow_threshold_percent.is_set
	|| underflow_threshold_value.is_set
	|| underflow_threshold_limit.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(underflow_threshold_percent.yfilter)
	|| ydk::is_set(underflow_threshold_value.yfilter)
	|| ydk::is_set(underflow_threshold_limit.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underflow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (underflow_threshold_percent.is_set || is_set(underflow_threshold_percent.yfilter)) leaf_name_data.push_back(underflow_threshold_percent.get_name_leafdata());
    if (underflow_threshold_value.is_set || is_set(underflow_threshold_value.yfilter)) leaf_name_data.push_back(underflow_threshold_value.get_name_leafdata());
    if (underflow_threshold_limit.is_set || is_set(underflow_threshold_limit.yfilter)) leaf_name_data.push_back(underflow_threshold_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "underflow-threshold-percent")
    {
        underflow_threshold_percent = value;
        underflow_threshold_percent.value_namespace = name_space;
        underflow_threshold_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-threshold-value")
    {
        underflow_threshold_value = value;
        underflow_threshold_value.value_namespace = name_space;
        underflow_threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underflow-threshold-limit")
    {
        underflow_threshold_limit = value;
        underflow_threshold_limit.value_namespace = name_space;
        underflow_threshold_limit.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "underflow-threshold-percent")
    {
        underflow_threshold_percent.yfilter = yfilter;
    }
    if(value_path == "underflow-threshold-value")
    {
        underflow_threshold_value.yfilter = yfilter;
    }
    if(value_path == "underflow-threshold-limit")
    {
        underflow_threshold_limit.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "underflow-threshold-percent" || name == "underflow-threshold-value" || name == "underflow-threshold-limit")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::Overflow()
    :
    overflow_threshold_percent{YType::uint32, "overflow-threshold-percent"},
    overflow_threshold_value{YType::uint32, "overflow-threshold-value"},
    overflow_threshold_limit{YType::uint32, "overflow-threshold-limit"}
{

    yang_name = "overflow"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::~Overflow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::has_data() const
{
    if (is_presence_container) return true;
    return overflow_threshold_percent.is_set
	|| overflow_threshold_value.is_set
	|| overflow_threshold_limit.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(overflow_threshold_percent.yfilter)
	|| ydk::is_set(overflow_threshold_value.yfilter)
	|| ydk::is_set(overflow_threshold_limit.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overflow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (overflow_threshold_percent.is_set || is_set(overflow_threshold_percent.yfilter)) leaf_name_data.push_back(overflow_threshold_percent.get_name_leafdata());
    if (overflow_threshold_value.is_set || is_set(overflow_threshold_value.yfilter)) leaf_name_data.push_back(overflow_threshold_value.get_name_leafdata());
    if (overflow_threshold_limit.is_set || is_set(overflow_threshold_limit.yfilter)) leaf_name_data.push_back(overflow_threshold_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "overflow-threshold-percent")
    {
        overflow_threshold_percent = value;
        overflow_threshold_percent.value_namespace = name_space;
        overflow_threshold_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-threshold-value")
    {
        overflow_threshold_value = value;
        overflow_threshold_value.value_namespace = name_space;
        overflow_threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-threshold-limit")
    {
        overflow_threshold_limit = value;
        overflow_threshold_limit.value_namespace = name_space;
        overflow_threshold_limit.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "overflow-threshold-percent")
    {
        overflow_threshold_percent.yfilter = yfilter;
    }
    if(value_path == "overflow-threshold-value")
    {
        overflow_threshold_value.yfilter = yfilter;
    }
    if(value_path == "overflow-threshold-limit")
    {
        overflow_threshold_limit.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "overflow-threshold-percent" || name == "overflow-threshold-value" || name == "overflow-threshold-limit")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::BandwidthLimits()
    :
    bandwidth_min_limit{YType::uint32, "bandwidth-min-limit"},
    bandwidth_max_limit{YType::uint32, "bandwidth-max-limit"}
{

    yang_name = "bandwidth-limits"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::~BandwidthLimits()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::has_data() const
{
    if (is_presence_container) return true;
    return bandwidth_min_limit.is_set
	|| bandwidth_max_limit.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_min_limit.yfilter)
	|| ydk::is_set(bandwidth_max_limit.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-limits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_min_limit.is_set || is_set(bandwidth_min_limit.yfilter)) leaf_name_data.push_back(bandwidth_min_limit.get_name_leafdata());
    if (bandwidth_max_limit.is_set || is_set(bandwidth_max_limit.yfilter)) leaf_name_data.push_back(bandwidth_max_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-min-limit")
    {
        bandwidth_min_limit = value;
        bandwidth_min_limit.value_namespace = name_space;
        bandwidth_min_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-max-limit")
    {
        bandwidth_max_limit = value;
        bandwidth_max_limit.value_namespace = name_space;
        bandwidth_max_limit.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-min-limit")
    {
        bandwidth_min_limit.yfilter = yfilter;
    }
    if(value_path == "bandwidth-max-limit")
    {
        bandwidth_max_limit.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-min-limit" || name == "bandwidth-max-limit")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::AdjustmentThreshold()
    :
    adjustment_threshold_percent{YType::uint32, "adjustment-threshold-percent"},
    adjustment_threshold_value{YType::uint32, "adjustment-threshold-value"}
{

    yang_name = "adjustment-threshold"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::~AdjustmentThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::has_data() const
{
    if (is_presence_container) return true;
    return adjustment_threshold_percent.is_set
	|| adjustment_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjustment_threshold_percent.yfilter)
	|| ydk::is_set(adjustment_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjustment-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjustment_threshold_percent.is_set || is_set(adjustment_threshold_percent.yfilter)) leaf_name_data.push_back(adjustment_threshold_percent.get_name_leafdata());
    if (adjustment_threshold_value.is_set || is_set(adjustment_threshold_value.yfilter)) leaf_name_data.push_back(adjustment_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjustment-threshold-percent")
    {
        adjustment_threshold_percent = value;
        adjustment_threshold_percent.value_namespace = name_space;
        adjustment_threshold_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjustment-threshold-value")
    {
        adjustment_threshold_value = value;
        adjustment_threshold_value.value_namespace = name_space;
        adjustment_threshold_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjustment-threshold-percent")
    {
        adjustment_threshold_percent.yfilter = yfilter;
    }
    if(value_path == "adjustment-threshold-value")
    {
        adjustment_threshold_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjustment-threshold-percent" || name == "adjustment-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AutoCapacity::AutoCapacity()
    :
    nominal_bandwidth{YType::uint32, "nominal-bandwidth"},
    enable{YType::boolean, "enable"},
    clones_minimum{YType::uint32, "clones-minimum"},
    split_bandwidth{YType::uint32, "split-bandwidth"},
    merge_bandwidth{YType::uint32, "merge-bandwidth"},
    clones_maximum{YType::uint32, "clones-maximum"}
{

    yang_name = "auto-capacity"; yang_parent_name = "auto-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AutoCapacity::~AutoCapacity()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AutoCapacity::has_data() const
{
    if (is_presence_container) return true;
    return nominal_bandwidth.is_set
	|| enable.is_set
	|| clones_minimum.is_set
	|| split_bandwidth.is_set
	|| merge_bandwidth.is_set
	|| clones_maximum.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AutoCapacity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nominal_bandwidth.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(clones_minimum.yfilter)
	|| ydk::is_set(split_bandwidth.yfilter)
	|| ydk::is_set(merge_bandwidth.yfilter)
	|| ydk::is_set(clones_maximum.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AutoCapacity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-capacity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AutoCapacity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nominal_bandwidth.is_set || is_set(nominal_bandwidth.yfilter)) leaf_name_data.push_back(nominal_bandwidth.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (clones_minimum.is_set || is_set(clones_minimum.yfilter)) leaf_name_data.push_back(clones_minimum.get_name_leafdata());
    if (split_bandwidth.is_set || is_set(split_bandwidth.yfilter)) leaf_name_data.push_back(split_bandwidth.get_name_leafdata());
    if (merge_bandwidth.is_set || is_set(merge_bandwidth.yfilter)) leaf_name_data.push_back(merge_bandwidth.get_name_leafdata());
    if (clones_maximum.is_set || is_set(clones_maximum.yfilter)) leaf_name_data.push_back(clones_maximum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AutoCapacity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AutoCapacity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AutoCapacity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nominal-bandwidth")
    {
        nominal_bandwidth = value;
        nominal_bandwidth.value_namespace = name_space;
        nominal_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clones-minimum")
    {
        clones_minimum = value;
        clones_minimum.value_namespace = name_space;
        clones_minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-bandwidth")
    {
        split_bandwidth = value;
        split_bandwidth.value_namespace = name_space;
        split_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merge-bandwidth")
    {
        merge_bandwidth = value;
        merge_bandwidth.value_namespace = name_space;
        merge_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clones-maximum")
    {
        clones_maximum = value;
        clones_maximum.value_namespace = name_space;
        clones_maximum.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AutoCapacity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nominal-bandwidth")
    {
        nominal_bandwidth.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "clones-minimum")
    {
        clones_minimum.yfilter = yfilter;
    }
    if(value_path == "split-bandwidth")
    {
        split_bandwidth.yfilter = yfilter;
    }
    if(value_path == "merge-bandwidth")
    {
        merge_bandwidth.yfilter = yfilter;
    }
    if(value_path == "clones-maximum")
    {
        clones_maximum.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AutoCapacity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nominal-bandwidth" || name == "enable" || name == "clones-minimum" || name == "split-bandwidth" || name == "merge-bandwidth" || name == "clones-maximum")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::Priority()
    :
    setup_priority{YType::uint32, "setup-priority"},
    hold_priority{YType::uint32, "hold-priority"}
{

    yang_name = "priority"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::~Priority()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::has_data() const
{
    if (is_presence_container) return true;
    return setup_priority.is_set
	|| hold_priority.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-priority" || name == "hold-priority")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{

    yang_name = "affinity-mask"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::~AffinityMask()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::has_data() const
{
    if (is_presence_container) return true;
    return affinity.is_set
	|| mask.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "mask")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::ForwardingAdjacency()
    :
    enable{YType::empty, "enable"},
    include_ipv6{YType::empty, "include-ipv6"},
    hold_time{YType::uint32, "hold-time"}
{

    yang_name = "forwarding-adjacency"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::~ForwardingAdjacency()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| include_ipv6.is_set
	|| hold_time.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(include_ipv6.yfilter)
	|| ydk::is_set(hold_time.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-adjacency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (include_ipv6.is_set || is_set(include_ipv6.yfilter)) leaf_name_data.push_back(include_ipv6.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-ipv6")
    {
        include_ipv6 = value;
        include_ipv6.value_namespace = name_space;
        include_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "include-ipv6")
    {
        include_ipv6.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "include-ipv6" || name == "hold-time")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::Logging()
    :
    lsp_switch_over_change_message{YType::empty, "lsp-switch-over-change-message"},
    all{YType::empty, "all"},
    record_route_messsage{YType::empty, "record-route-messsage"},
    bfd_state_message{YType::empty, "bfd-state-message"},
    bandwidth_change_message{YType::empty, "bandwidth-change-message"},
    reoptimize_attempts_message{YType::empty, "reoptimize-attempts-message"},
    reroute_messsage{YType::empty, "reroute-messsage"},
    state_message{YType::empty, "state-message"},
    insufficient_bw_message{YType::empty, "insufficient-bw-message"},
    reoptimized_message{YType::empty, "reoptimized-message"},
    pcalc_failure_message{YType::empty, "pcalc-failure-message"}
{

    yang_name = "logging"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::~Logging()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::has_data() const
{
    if (is_presence_container) return true;
    return lsp_switch_over_change_message.is_set
	|| all.is_set
	|| record_route_messsage.is_set
	|| bfd_state_message.is_set
	|| bandwidth_change_message.is_set
	|| reoptimize_attempts_message.is_set
	|| reroute_messsage.is_set
	|| state_message.is_set
	|| insufficient_bw_message.is_set
	|| reoptimized_message.is_set
	|| pcalc_failure_message.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_switch_over_change_message.yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(record_route_messsage.yfilter)
	|| ydk::is_set(bfd_state_message.yfilter)
	|| ydk::is_set(bandwidth_change_message.yfilter)
	|| ydk::is_set(reoptimize_attempts_message.yfilter)
	|| ydk::is_set(reroute_messsage.yfilter)
	|| ydk::is_set(state_message.yfilter)
	|| ydk::is_set(insufficient_bw_message.yfilter)
	|| ydk::is_set(reoptimized_message.yfilter)
	|| ydk::is_set(pcalc_failure_message.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_switch_over_change_message.is_set || is_set(lsp_switch_over_change_message.yfilter)) leaf_name_data.push_back(lsp_switch_over_change_message.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (record_route_messsage.is_set || is_set(record_route_messsage.yfilter)) leaf_name_data.push_back(record_route_messsage.get_name_leafdata());
    if (bfd_state_message.is_set || is_set(bfd_state_message.yfilter)) leaf_name_data.push_back(bfd_state_message.get_name_leafdata());
    if (bandwidth_change_message.is_set || is_set(bandwidth_change_message.yfilter)) leaf_name_data.push_back(bandwidth_change_message.get_name_leafdata());
    if (reoptimize_attempts_message.is_set || is_set(reoptimize_attempts_message.yfilter)) leaf_name_data.push_back(reoptimize_attempts_message.get_name_leafdata());
    if (reroute_messsage.is_set || is_set(reroute_messsage.yfilter)) leaf_name_data.push_back(reroute_messsage.get_name_leafdata());
    if (state_message.is_set || is_set(state_message.yfilter)) leaf_name_data.push_back(state_message.get_name_leafdata());
    if (insufficient_bw_message.is_set || is_set(insufficient_bw_message.yfilter)) leaf_name_data.push_back(insufficient_bw_message.get_name_leafdata());
    if (reoptimized_message.is_set || is_set(reoptimized_message.yfilter)) leaf_name_data.push_back(reoptimized_message.get_name_leafdata());
    if (pcalc_failure_message.is_set || is_set(pcalc_failure_message.yfilter)) leaf_name_data.push_back(pcalc_failure_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-switch-over-change-message")
    {
        lsp_switch_over_change_message = value;
        lsp_switch_over_change_message.value_namespace = name_space;
        lsp_switch_over_change_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route-messsage")
    {
        record_route_messsage = value;
        record_route_messsage.value_namespace = name_space;
        record_route_messsage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-state-message")
    {
        bfd_state_message = value;
        bfd_state_message.value_namespace = name_space;
        bfd_state_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message = value;
        bandwidth_change_message.value_namespace = name_space;
        bandwidth_change_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message = value;
        reoptimize_attempts_message.value_namespace = name_space;
        reoptimize_attempts_message.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message = value;
        insufficient_bw_message.value_namespace = name_space;
        insufficient_bw_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message = value;
        reoptimized_message.value_namespace = name_space;
        reoptimized_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message = value;
        pcalc_failure_message.value_namespace = name_space;
        pcalc_failure_message.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-switch-over-change-message")
    {
        lsp_switch_over_change_message.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "record-route-messsage")
    {
        record_route_messsage.yfilter = yfilter;
    }
    if(value_path == "bfd-state-message")
    {
        bfd_state_message.yfilter = yfilter;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message.yfilter = yfilter;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message.yfilter = yfilter;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage.yfilter = yfilter;
    }
    if(value_path == "state-message")
    {
        state_message.yfilter = yfilter;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message.yfilter = yfilter;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message.yfilter = yfilter;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-switch-over-change-message" || name == "all" || name == "record-route-messsage" || name == "bfd-state-message" || name == "bandwidth-change-message" || name == "reoptimize-attempts-message" || name == "reroute-messsage" || name == "state-message" || name == "insufficient-bw-message" || name == "reoptimized-message" || name == "pcalc-failure-message")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::Bandwidth()
    :
    dste_type{YType::enumeration, "dste-type"},
    class_or_pool_type{YType::uint32, "class-or-pool-type"},
    bandwidth{YType::uint32, "bandwidth"}
{

    yang_name = "bandwidth"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::~Bandwidth()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return dste_type.is_set
	|| class_or_pool_type.is_set
	|| bandwidth.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dste_type.yfilter)
	|| ydk::is_set(class_or_pool_type.yfilter)
	|| ydk::is_set(bandwidth.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_type.is_set || is_set(dste_type.yfilter)) leaf_name_data.push_back(dste_type.get_name_leafdata());
    if (class_or_pool_type.is_set || is_set(class_or_pool_type.yfilter)) leaf_name_data.push_back(class_or_pool_type.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dste-type")
    {
        dste_type = value;
        dste_type.value_namespace = name_space;
        dste_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type = value;
        class_or_pool_type.value_namespace = name_space;
        class_or_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dste-type")
    {
        dste_type.yfilter = yfilter;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dste-type" || name == "class-or-pool-type" || name == "bandwidth")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Autoroute()
    :
    autoroute_announce(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce>())
    , destinations(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations>())
{
    autoroute_announce->parent = this;
    destinations->parent = this;

    yang_name = "autoroute"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::~Autoroute()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::has_data() const
{
    if (is_presence_container) return true;
    return (autoroute_announce !=  nullptr && autoroute_announce->has_data())
	|| (destinations !=  nullptr && destinations->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::has_operation() const
{
    return is_set(yfilter)
	|| (autoroute_announce !=  nullptr && autoroute_announce->has_operation())
	|| (destinations !=  nullptr && destinations->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autoroute-announce")
    {
        if(autoroute_announce == nullptr)
        {
            autoroute_announce = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce>();
        }
        return autoroute_announce;
    }

    if(child_yang_name == "destinations")
    {
        if(destinations == nullptr)
        {
            destinations = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations>();
        }
        return destinations;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(autoroute_announce != nullptr)
    {
        _children["autoroute-announce"] = autoroute_announce;
    }

    if(destinations != nullptr)
    {
        _children["destinations"] = destinations;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autoroute-announce" || name == "destinations")
        return true;
    return false;
}

const Enum::YLeaf InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::TunnelingEthertype::Y_0x9100 {37120, "0x9100"};
const Enum::YLeaf InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::TunnelingEthertype::Y_0x9200 {37376, "0x9200"};


}
}

