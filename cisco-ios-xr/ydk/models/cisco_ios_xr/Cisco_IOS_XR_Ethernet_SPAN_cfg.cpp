
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_Ethernet_SPAN_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_Ethernet_SPAN_cfg {

SpanMonitorSession::SpanMonitorSession()
    :
    sessions(std::make_shared<SpanMonitorSession::Sessions>())
{
    sessions->parent = this;

    yang_name = "span-monitor-session"; yang_parent_name = "Cisco-IOS-XR-Ethernet-SPAN-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

SpanMonitorSession::~SpanMonitorSession()
{
}

bool SpanMonitorSession::has_data() const
{
    if (is_presence_container) return true;
    return (sessions !=  nullptr && sessions->has_data());
}

bool SpanMonitorSession::has_operation() const
{
    return is_set(yfilter)
	|| (sessions !=  nullptr && sessions->has_operation());
}

std::string SpanMonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<SpanMonitorSession::Sessions>();
        }
        return sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sessions != nullptr)
    {
        _children["sessions"] = sessions;
    }

    return _children;
}

void SpanMonitorSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SpanMonitorSession::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> SpanMonitorSession::clone_ptr() const
{
    return std::make_shared<SpanMonitorSession>();
}

std::string SpanMonitorSession::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SpanMonitorSession::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SpanMonitorSession::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SpanMonitorSession::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SpanMonitorSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessions")
        return true;
    return false;
}

SpanMonitorSession::Sessions::Sessions()
    :
    session(this, {"session"})
{

    yang_name = "sessions"; yang_parent_name = "span-monitor-session"; is_top_level_class = false; has_list_ancestor = false; 
}

SpanMonitorSession::Sessions::~Sessions()
{
}

bool SpanMonitorSession::Sessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool SpanMonitorSession::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SpanMonitorSession::Sessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-session/" << get_segment_path();
    return path_buffer.str();
}

std::string SpanMonitorSession::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        auto ent_ = std::make_shared<SpanMonitorSession::Sessions::Session>();
        ent_->parent = this;
        session.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : session.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SpanMonitorSession::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SpanMonitorSession::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SpanMonitorSession::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session")
        return true;
    return false;
}

SpanMonitorSession::Sessions::Session::Session()
    :
    session{YType::str, "session"},
    class_{YType::enumeration, "class"},
    discard_class{YType::uint32, "discard-class"},
    inject_interface{YType::str, "inject-interface"},
    traffic_class{YType::uint32, "traffic-class"}
        ,
    destination(std::make_shared<SpanMonitorSession::Sessions::Session::Destination>())
{
    destination->parent = this;

    yang_name = "session"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

SpanMonitorSession::Sessions::Session::~Session()
{
}

bool SpanMonitorSession::Sessions::Session::has_data() const
{
    if (is_presence_container) return true;
    return session.is_set
	|| class_.is_set
	|| discard_class.is_set
	|| inject_interface.is_set
	|| traffic_class.is_set
	|| (destination !=  nullptr && destination->has_data());
}

bool SpanMonitorSession::Sessions::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(discard_class.yfilter)
	|| ydk::is_set(inject_interface.yfilter)
	|| ydk::is_set(traffic_class.yfilter)
	|| (destination !=  nullptr && destination->has_operation());
}

std::string SpanMonitorSession::Sessions::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-session/sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string SpanMonitorSession::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    ADD_KEY_TOKEN(session, "session");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Sessions::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session.is_set || is_set(session.yfilter)) leaf_name_data.push_back(session.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (discard_class.is_set || is_set(discard_class.yfilter)) leaf_name_data.push_back(discard_class.get_name_leafdata());
    if (inject_interface.is_set || is_set(inject_interface.yfilter)) leaf_name_data.push_back(inject_interface.get_name_leafdata());
    if (traffic_class.is_set || is_set(traffic_class.yfilter)) leaf_name_data.push_back(traffic_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<SpanMonitorSession::Sessions::Session::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Sessions::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    return _children;
}

void SpanMonitorSession::Sessions::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session")
    {
        session = value;
        session.value_namespace = name_space;
        session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discard-class")
    {
        discard_class = value;
        discard_class.value_namespace = name_space;
        discard_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inject-interface")
    {
        inject_interface = value;
        inject_interface.value_namespace = name_space;
        inject_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-class")
    {
        traffic_class = value;
        traffic_class.value_namespace = name_space;
        traffic_class.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Sessions::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session")
    {
        session.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "discard-class")
    {
        discard_class.yfilter = yfilter;
    }
    if(value_path == "inject-interface")
    {
        inject_interface.yfilter = yfilter;
    }
    if(value_path == "traffic-class")
    {
        traffic_class.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Sessions::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "session" || name == "class" || name == "discard-class" || name == "inject-interface" || name == "traffic-class")
        return true;
    return false;
}

SpanMonitorSession::Sessions::Session::Destination::Destination()
    :
    destination_type{YType::enumeration, "destination-type"},
    destination_interface_name{YType::str, "destination-interface-name"},
    destination_ipv4_address{YType::str, "destination-ipv4-address"},
    destination_ipv6_address{YType::str, "destination-ipv6-address"}
{

    yang_name = "destination"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true; 
}

SpanMonitorSession::Sessions::Session::Destination::~Destination()
{
}

bool SpanMonitorSession::Sessions::Session::Destination::has_data() const
{
    if (is_presence_container) return true;
    return destination_type.is_set
	|| destination_interface_name.is_set
	|| destination_ipv4_address.is_set
	|| destination_ipv6_address.is_set;
}

bool SpanMonitorSession::Sessions::Session::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_type.yfilter)
	|| ydk::is_set(destination_interface_name.yfilter)
	|| ydk::is_set(destination_ipv4_address.yfilter)
	|| ydk::is_set(destination_ipv6_address.yfilter);
}

std::string SpanMonitorSession::Sessions::Session::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SpanMonitorSession::Sessions::Session::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_type.is_set || is_set(destination_type.yfilter)) leaf_name_data.push_back(destination_type.get_name_leafdata());
    if (destination_interface_name.is_set || is_set(destination_interface_name.yfilter)) leaf_name_data.push_back(destination_interface_name.get_name_leafdata());
    if (destination_ipv4_address.is_set || is_set(destination_ipv4_address.yfilter)) leaf_name_data.push_back(destination_ipv4_address.get_name_leafdata());
    if (destination_ipv6_address.is_set || is_set(destination_ipv6_address.yfilter)) leaf_name_data.push_back(destination_ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SpanMonitorSession::Sessions::Session::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SpanMonitorSession::Sessions::Session::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SpanMonitorSession::Sessions::Session::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-type")
    {
        destination_type = value;
        destination_type.value_namespace = name_space;
        destination_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-interface-name")
    {
        destination_interface_name = value;
        destination_interface_name.value_namespace = name_space;
        destination_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-ipv4-address")
    {
        destination_ipv4_address = value;
        destination_ipv4_address.value_namespace = name_space;
        destination_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-ipv6-address")
    {
        destination_ipv6_address = value;
        destination_ipv6_address.value_namespace = name_space;
        destination_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void SpanMonitorSession::Sessions::Session::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-type")
    {
        destination_type.yfilter = yfilter;
    }
    if(value_path == "destination-interface-name")
    {
        destination_interface_name.yfilter = yfilter;
    }
    if(value_path == "destination-ipv4-address")
    {
        destination_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "destination-ipv6-address")
    {
        destination_ipv6_address.yfilter = yfilter;
    }
}

bool SpanMonitorSession::Sessions::Session::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-type" || name == "destination-interface-name" || name == "destination-ipv4-address" || name == "destination-ipv6-address")
        return true;
    return false;
}

const Enum::YLeaf SpanTrafficDirection::rx_only {1, "rx-only"};
const Enum::YLeaf SpanTrafficDirection::tx_only {2, "tx-only"};

const Enum::YLeaf SpanMirrorInterval::Y_512 {1, "512"};
const Enum::YLeaf SpanMirrorInterval::Y_1k {2, "1k"};
const Enum::YLeaf SpanMirrorInterval::Y_2k {3, "2k"};
const Enum::YLeaf SpanMirrorInterval::Y_4k {4, "4k"};
const Enum::YLeaf SpanMirrorInterval::Y_8k {5, "8k"};
const Enum::YLeaf SpanMirrorInterval::Y_16k {6, "16k"};

const Enum::YLeaf SpanDestination::interface {0, "interface"};
const Enum::YLeaf SpanDestination::pseudowire {1, "pseudowire"};
const Enum::YLeaf SpanDestination::ipv4_address {2, "ipv4-address"};
const Enum::YLeaf SpanDestination::ipv6_address {3, "ipv6-address"};


}
}

