
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg {

PppoeCfg::PppoeCfg()
    :
    session_id_space_flat{YType::empty, "session-id-space-flat"},
    in_flight_window{YType::uint32, "in-flight-window"}
    	,
    pppoe_bba_groups(std::make_shared<PppoeCfg::PppoeBbaGroups>())
{
    pppoe_bba_groups->parent = this;

    yang_name = "pppoe-cfg"; yang_parent_name = "Cisco-IOS-XR-subscriber-pppoe-ma-gbl-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

PppoeCfg::~PppoeCfg()
{
}

bool PppoeCfg::has_data() const
{
    return session_id_space_flat.is_set
	|| in_flight_window.is_set
	|| (pppoe_bba_groups !=  nullptr && pppoe_bba_groups->has_data());
}

bool PppoeCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id_space_flat.yfilter)
	|| ydk::is_set(in_flight_window.yfilter)
	|| (pppoe_bba_groups !=  nullptr && pppoe_bba_groups->has_operation());
}

std::string PppoeCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-pppoe-ma-gbl-cfg:pppoe-cfg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id_space_flat.is_set || is_set(session_id_space_flat.yfilter)) leaf_name_data.push_back(session_id_space_flat.get_name_leafdata());
    if (in_flight_window.is_set || is_set(in_flight_window.yfilter)) leaf_name_data.push_back(in_flight_window.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe-bba-groups")
    {
        if(pppoe_bba_groups == nullptr)
        {
            pppoe_bba_groups = std::make_shared<PppoeCfg::PppoeBbaGroups>();
        }
        return pppoe_bba_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pppoe_bba_groups != nullptr)
    {
        children["pppoe-bba-groups"] = pppoe_bba_groups;
    }

    return children;
}

void PppoeCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id-space-flat")
    {
        session_id_space_flat = value;
        session_id_space_flat.value_namespace = name_space;
        session_id_space_flat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-flight-window")
    {
        in_flight_window = value;
        in_flight_window.value_namespace = name_space;
        in_flight_window.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id-space-flat")
    {
        session_id_space_flat.yfilter = yfilter;
    }
    if(value_path == "in-flight-window")
    {
        in_flight_window.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> PppoeCfg::clone_ptr() const
{
    return std::make_shared<PppoeCfg>();
}

std::string PppoeCfg::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PppoeCfg::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PppoeCfg::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PppoeCfg::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PppoeCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe-bba-groups" || name == "session-id-space-flat" || name == "in-flight-window")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroups()
{

    yang_name = "pppoe-bba-groups"; yang_parent_name = "pppoe-cfg"; is_top_level_class = false; has_list_ancestor = false;
}

PppoeCfg::PppoeBbaGroups::~PppoeBbaGroups()
{
}

bool PppoeCfg::PppoeBbaGroups::has_data() const
{
    for (std::size_t index=0; index<pppoe_bba_group.size(); index++)
    {
        if(pppoe_bba_group[index]->has_data())
            return true;
    }
    return false;
}

bool PppoeCfg::PppoeBbaGroups::has_operation() const
{
    for (std::size_t index=0; index<pppoe_bba_group.size(); index++)
    {
        if(pppoe_bba_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-pppoe-ma-gbl-cfg:pppoe-cfg/" << get_segment_path();
    return path_buffer.str();
}

std::string PppoeCfg::PppoeBbaGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe-bba-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe-bba-group")
    {
        for(auto const & c : pppoe_bba_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup>();
        c->parent = this;
        pppoe_bba_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pppoe_bba_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PppoeCfg::PppoeBbaGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PppoeCfg::PppoeBbaGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PppoeCfg::PppoeBbaGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe-bba-group")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PppoeBbaGroup()
    :
    bba_group{YType::str, "bba-group"},
    completion_timeout{YType::uint32, "completion-timeout"},
    invalid_session_id{YType::enumeration, "invalid-session-id"},
    enable_padt_after_shut_down{YType::empty, "enable-padt-after-shut-down"},
    mtu{YType::uint32, "mtu"}
    	,
    tag(std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag>())
	,sessions(std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions>())
	,control_packets(std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets>())
	,pa_do_delay(std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay>())
{
    tag->parent = this;
    sessions->parent = this;
    control_packets->parent = this;
    pa_do_delay->parent = this;

    yang_name = "pppoe-bba-group"; yang_parent_name = "pppoe-bba-groups"; is_top_level_class = false; has_list_ancestor = false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::~PppoeBbaGroup()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::has_data() const
{
    return bba_group.is_set
	|| completion_timeout.is_set
	|| invalid_session_id.is_set
	|| enable_padt_after_shut_down.is_set
	|| mtu.is_set
	|| (tag !=  nullptr && tag->has_data())
	|| (sessions !=  nullptr && sessions->has_data())
	|| (control_packets !=  nullptr && control_packets->has_data())
	|| (pa_do_delay !=  nullptr && pa_do_delay->has_data());
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bba_group.yfilter)
	|| ydk::is_set(completion_timeout.yfilter)
	|| ydk::is_set(invalid_session_id.yfilter)
	|| ydk::is_set(enable_padt_after_shut_down.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| (tag !=  nullptr && tag->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (control_packets !=  nullptr && control_packets->has_operation())
	|| (pa_do_delay !=  nullptr && pa_do_delay->has_operation());
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-pppoe-ma-gbl-cfg:pppoe-cfg/pppoe-bba-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe-bba-group" <<"[bba-group='" <<bba_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bba_group.is_set || is_set(bba_group.yfilter)) leaf_name_data.push_back(bba_group.get_name_leafdata());
    if (completion_timeout.is_set || is_set(completion_timeout.yfilter)) leaf_name_data.push_back(completion_timeout.get_name_leafdata());
    if (invalid_session_id.is_set || is_set(invalid_session_id.yfilter)) leaf_name_data.push_back(invalid_session_id.get_name_leafdata());
    if (enable_padt_after_shut_down.is_set || is_set(enable_padt_after_shut_down.yfilter)) leaf_name_data.push_back(enable_padt_after_shut_down.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag>();
        }
        return tag;
    }

    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions>();
        }
        return sessions;
    }

    if(child_yang_name == "control-packets")
    {
        if(control_packets == nullptr)
        {
            control_packets = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets>();
        }
        return control_packets;
    }

    if(child_yang_name == "pa-do-delay")
    {
        if(pa_do_delay == nullptr)
        {
            pa_do_delay = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay>();
        }
        return pa_do_delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tag != nullptr)
    {
        children["tag"] = tag;
    }

    if(sessions != nullptr)
    {
        children["sessions"] = sessions;
    }

    if(control_packets != nullptr)
    {
        children["control-packets"] = control_packets;
    }

    if(pa_do_delay != nullptr)
    {
        children["pa-do-delay"] = pa_do_delay;
    }

    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bba-group")
    {
        bba_group = value;
        bba_group.value_namespace = name_space;
        bba_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "completion-timeout")
    {
        completion_timeout = value;
        completion_timeout.value_namespace = name_space;
        completion_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-session-id")
    {
        invalid_session_id = value;
        invalid_session_id.value_namespace = name_space;
        invalid_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-padt-after-shut-down")
    {
        enable_padt_after_shut_down = value;
        enable_padt_after_shut_down.value_namespace = name_space;
        enable_padt_after_shut_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bba-group")
    {
        bba_group.yfilter = yfilter;
    }
    if(value_path == "completion-timeout")
    {
        completion_timeout.yfilter = yfilter;
    }
    if(value_path == "invalid-session-id")
    {
        invalid_session_id.yfilter = yfilter;
    }
    if(value_path == "enable-padt-after-shut-down")
    {
        enable_padt_after_shut_down.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag" || name == "sessions" || name == "control-packets" || name == "pa-do-delay" || name == "bba-group" || name == "completion-timeout" || name == "invalid-session-id" || name == "enable-padt-after-shut-down" || name == "mtu")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Tag()
    :
    ppp_max_payload_deny{YType::empty, "ppp-max-payload-deny"},
    service_selection_disable{YType::empty, "service-selection-disable"},
    ac_name{YType::str, "ac-name"}
    	,
    padr(std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr>())
	,service_name_configureds(std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds>())
	,ppp_max_payload(nullptr) // presence node
{
    padr->parent = this;
    service_name_configureds->parent = this;

    yang_name = "tag"; yang_parent_name = "pppoe-bba-group"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::~Tag()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::has_data() const
{
    return ppp_max_payload_deny.is_set
	|| service_selection_disable.is_set
	|| ac_name.is_set
	|| (padr !=  nullptr && padr->has_data())
	|| (service_name_configureds !=  nullptr && service_name_configureds->has_data())
	|| (ppp_max_payload !=  nullptr && ppp_max_payload->has_data());
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ppp_max_payload_deny.yfilter)
	|| ydk::is_set(service_selection_disable.yfilter)
	|| ydk::is_set(ac_name.yfilter)
	|| (padr !=  nullptr && padr->has_operation())
	|| (service_name_configureds !=  nullptr && service_name_configureds->has_operation())
	|| (ppp_max_payload !=  nullptr && ppp_max_payload->has_operation());
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ppp_max_payload_deny.is_set || is_set(ppp_max_payload_deny.yfilter)) leaf_name_data.push_back(ppp_max_payload_deny.get_name_leafdata());
    if (service_selection_disable.is_set || is_set(service_selection_disable.yfilter)) leaf_name_data.push_back(service_selection_disable.get_name_leafdata());
    if (ac_name.is_set || is_set(ac_name.yfilter)) leaf_name_data.push_back(ac_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "padr")
    {
        if(padr == nullptr)
        {
            padr = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr>();
        }
        return padr;
    }

    if(child_yang_name == "service-name-configureds")
    {
        if(service_name_configureds == nullptr)
        {
            service_name_configureds = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds>();
        }
        return service_name_configureds;
    }

    if(child_yang_name == "ppp-max-payload")
    {
        if(ppp_max_payload == nullptr)
        {
            ppp_max_payload = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload>();
        }
        return ppp_max_payload;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(padr != nullptr)
    {
        children["padr"] = padr;
    }

    if(service_name_configureds != nullptr)
    {
        children["service-name-configureds"] = service_name_configureds;
    }

    if(ppp_max_payload != nullptr)
    {
        children["ppp-max-payload"] = ppp_max_payload;
    }

    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ppp-max-payload-deny")
    {
        ppp_max_payload_deny = value;
        ppp_max_payload_deny.value_namespace = name_space;
        ppp_max_payload_deny.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-selection-disable")
    {
        service_selection_disable = value;
        service_selection_disable.value_namespace = name_space;
        service_selection_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-name")
    {
        ac_name = value;
        ac_name.value_namespace = name_space;
        ac_name.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ppp-max-payload-deny")
    {
        ppp_max_payload_deny.yfilter = yfilter;
    }
    if(value_path == "service-selection-disable")
    {
        service_selection_disable.yfilter = yfilter;
    }
    if(value_path == "ac-name")
    {
        ac_name.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "padr" || name == "service-name-configureds" || name == "ppp-max-payload" || name == "ppp-max-payload-deny" || name == "service-selection-disable" || name == "ac-name")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr::Padr()
    :
    session_unique_relay_session_id{YType::empty, "session-unique-relay-session-id"},
    invalid_payload_allow{YType::empty, "invalid-payload-allow"}
{

    yang_name = "padr"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr::~Padr()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr::has_data() const
{
    return session_unique_relay_session_id.is_set
	|| invalid_payload_allow.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_unique_relay_session_id.yfilter)
	|| ydk::is_set(invalid_payload_allow.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_unique_relay_session_id.is_set || is_set(session_unique_relay_session_id.yfilter)) leaf_name_data.push_back(session_unique_relay_session_id.get_name_leafdata());
    if (invalid_payload_allow.is_set || is_set(invalid_payload_allow.yfilter)) leaf_name_data.push_back(invalid_payload_allow.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-unique-relay-session-id")
    {
        session_unique_relay_session_id = value;
        session_unique_relay_session_id.value_namespace = name_space;
        session_unique_relay_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-payload-allow")
    {
        invalid_payload_allow = value;
        invalid_payload_allow.value_namespace = name_space;
        invalid_payload_allow.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-unique-relay-session-id")
    {
        session_unique_relay_session_id.yfilter = yfilter;
    }
    if(value_path == "invalid-payload-allow")
    {
        invalid_payload_allow.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-unique-relay-session-id" || name == "invalid-payload-allow")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigureds()
{

    yang_name = "service-name-configureds"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::~ServiceNameConfigureds()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::has_data() const
{
    for (std::size_t index=0; index<service_name_configured.size(); index++)
    {
        if(service_name_configured[index]->has_data())
            return true;
    }
    return false;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::has_operation() const
{
    for (std::size_t index=0; index<service_name_configured.size(); index++)
    {
        if(service_name_configured[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-name-configureds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-name-configured")
    {
        for(auto const & c : service_name_configured)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigured>();
        c->parent = this;
        service_name_configured.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_name_configured)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-name-configured")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigured::ServiceNameConfigured()
    :
    name{YType::str, "name"}
{

    yang_name = "service-name-configured"; yang_parent_name = "service-name-configureds"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigured::~ServiceNameConfigured()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigured::has_data() const
{
    return name.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigured::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigured::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-name-configured" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigured::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigured::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigured::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigured::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigured::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigured::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload::PppMaxPayload()
    :
    min{YType::uint32, "min"},
    max{YType::uint32, "max"}
{

    yang_name = "ppp-max-payload"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload::~PppMaxPayload()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp-max-payload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::Sessions()
    :
    vlan_throttle(nullptr) // presence node
	,inner_vlan_throttle(nullptr) // presence node
	,remote_id_limit(nullptr) // presence node
	,mac_iwf_access_interface_throttle(nullptr) // presence node
	,access_interface_limit(nullptr) // presence node
	,mac_access_interface_throttle(nullptr) // presence node
	,outer_vlan_limit(nullptr) // presence node
	,circuit_id_throttle(nullptr) // presence node
	,mac_limit(nullptr) // presence node
	,circuit_id_limit(nullptr) // presence node
	,mac_iwf_limit(nullptr) // presence node
	,mac_iwf_access_interface_limit(nullptr) // presence node
	,inner_vlan_limit(nullptr) // presence node
	,outer_vlan_throttle(nullptr) // presence node
	,mac_throttle(nullptr) // presence node
	,circuit_id_and_remote_id_limit(nullptr) // presence node
	,vlan_limit(nullptr) // presence node
	,mac_access_interface_limit(nullptr) // presence node
	,remote_id_throttle(nullptr) // presence node
	,max_limit(nullptr) // presence node
	,circuit_id_and_remote_id_throttle(nullptr) // presence node
{

    yang_name = "sessions"; yang_parent_name = "pppoe-bba-group"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::~Sessions()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::has_data() const
{
    return (vlan_throttle !=  nullptr && vlan_throttle->has_data())
	|| (inner_vlan_throttle !=  nullptr && inner_vlan_throttle->has_data())
	|| (remote_id_limit !=  nullptr && remote_id_limit->has_data())
	|| (mac_iwf_access_interface_throttle !=  nullptr && mac_iwf_access_interface_throttle->has_data())
	|| (access_interface_limit !=  nullptr && access_interface_limit->has_data())
	|| (mac_access_interface_throttle !=  nullptr && mac_access_interface_throttle->has_data())
	|| (outer_vlan_limit !=  nullptr && outer_vlan_limit->has_data())
	|| (circuit_id_throttle !=  nullptr && circuit_id_throttle->has_data())
	|| (mac_limit !=  nullptr && mac_limit->has_data())
	|| (circuit_id_limit !=  nullptr && circuit_id_limit->has_data())
	|| (mac_iwf_limit !=  nullptr && mac_iwf_limit->has_data())
	|| (mac_iwf_access_interface_limit !=  nullptr && mac_iwf_access_interface_limit->has_data())
	|| (inner_vlan_limit !=  nullptr && inner_vlan_limit->has_data())
	|| (outer_vlan_throttle !=  nullptr && outer_vlan_throttle->has_data())
	|| (mac_throttle !=  nullptr && mac_throttle->has_data())
	|| (circuit_id_and_remote_id_limit !=  nullptr && circuit_id_and_remote_id_limit->has_data())
	|| (vlan_limit !=  nullptr && vlan_limit->has_data())
	|| (mac_access_interface_limit !=  nullptr && mac_access_interface_limit->has_data())
	|| (remote_id_throttle !=  nullptr && remote_id_throttle->has_data())
	|| (max_limit !=  nullptr && max_limit->has_data())
	|| (circuit_id_and_remote_id_throttle !=  nullptr && circuit_id_and_remote_id_throttle->has_data());
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::has_operation() const
{
    return is_set(yfilter)
	|| (vlan_throttle !=  nullptr && vlan_throttle->has_operation())
	|| (inner_vlan_throttle !=  nullptr && inner_vlan_throttle->has_operation())
	|| (remote_id_limit !=  nullptr && remote_id_limit->has_operation())
	|| (mac_iwf_access_interface_throttle !=  nullptr && mac_iwf_access_interface_throttle->has_operation())
	|| (access_interface_limit !=  nullptr && access_interface_limit->has_operation())
	|| (mac_access_interface_throttle !=  nullptr && mac_access_interface_throttle->has_operation())
	|| (outer_vlan_limit !=  nullptr && outer_vlan_limit->has_operation())
	|| (circuit_id_throttle !=  nullptr && circuit_id_throttle->has_operation())
	|| (mac_limit !=  nullptr && mac_limit->has_operation())
	|| (circuit_id_limit !=  nullptr && circuit_id_limit->has_operation())
	|| (mac_iwf_limit !=  nullptr && mac_iwf_limit->has_operation())
	|| (mac_iwf_access_interface_limit !=  nullptr && mac_iwf_access_interface_limit->has_operation())
	|| (inner_vlan_limit !=  nullptr && inner_vlan_limit->has_operation())
	|| (outer_vlan_throttle !=  nullptr && outer_vlan_throttle->has_operation())
	|| (mac_throttle !=  nullptr && mac_throttle->has_operation())
	|| (circuit_id_and_remote_id_limit !=  nullptr && circuit_id_and_remote_id_limit->has_operation())
	|| (vlan_limit !=  nullptr && vlan_limit->has_operation())
	|| (mac_access_interface_limit !=  nullptr && mac_access_interface_limit->has_operation())
	|| (remote_id_throttle !=  nullptr && remote_id_throttle->has_operation())
	|| (max_limit !=  nullptr && max_limit->has_operation())
	|| (circuit_id_and_remote_id_throttle !=  nullptr && circuit_id_and_remote_id_throttle->has_operation());
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-throttle")
    {
        if(vlan_throttle == nullptr)
        {
            vlan_throttle = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle>();
        }
        return vlan_throttle;
    }

    if(child_yang_name == "inner-vlan-throttle")
    {
        if(inner_vlan_throttle == nullptr)
        {
            inner_vlan_throttle = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle>();
        }
        return inner_vlan_throttle;
    }

    if(child_yang_name == "remote-id-limit")
    {
        if(remote_id_limit == nullptr)
        {
            remote_id_limit = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdLimit>();
        }
        return remote_id_limit;
    }

    if(child_yang_name == "mac-iwf-access-interface-throttle")
    {
        if(mac_iwf_access_interface_throttle == nullptr)
        {
            mac_iwf_access_interface_throttle = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle>();
        }
        return mac_iwf_access_interface_throttle;
    }

    if(child_yang_name == "access-interface-limit")
    {
        if(access_interface_limit == nullptr)
        {
            access_interface_limit = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::AccessInterfaceLimit>();
        }
        return access_interface_limit;
    }

    if(child_yang_name == "mac-access-interface-throttle")
    {
        if(mac_access_interface_throttle == nullptr)
        {
            mac_access_interface_throttle = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle>();
        }
        return mac_access_interface_throttle;
    }

    if(child_yang_name == "outer-vlan-limit")
    {
        if(outer_vlan_limit == nullptr)
        {
            outer_vlan_limit = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanLimit>();
        }
        return outer_vlan_limit;
    }

    if(child_yang_name == "circuit-id-throttle")
    {
        if(circuit_id_throttle == nullptr)
        {
            circuit_id_throttle = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle>();
        }
        return circuit_id_throttle;
    }

    if(child_yang_name == "mac-limit")
    {
        if(mac_limit == nullptr)
        {
            mac_limit = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacLimit>();
        }
        return mac_limit;
    }

    if(child_yang_name == "circuit-id-limit")
    {
        if(circuit_id_limit == nullptr)
        {
            circuit_id_limit = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdLimit>();
        }
        return circuit_id_limit;
    }

    if(child_yang_name == "mac-iwf-limit")
    {
        if(mac_iwf_limit == nullptr)
        {
            mac_iwf_limit = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfLimit>();
        }
        return mac_iwf_limit;
    }

    if(child_yang_name == "mac-iwf-access-interface-limit")
    {
        if(mac_iwf_access_interface_limit == nullptr)
        {
            mac_iwf_access_interface_limit = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceLimit>();
        }
        return mac_iwf_access_interface_limit;
    }

    if(child_yang_name == "inner-vlan-limit")
    {
        if(inner_vlan_limit == nullptr)
        {
            inner_vlan_limit = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanLimit>();
        }
        return inner_vlan_limit;
    }

    if(child_yang_name == "outer-vlan-throttle")
    {
        if(outer_vlan_throttle == nullptr)
        {
            outer_vlan_throttle = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle>();
        }
        return outer_vlan_throttle;
    }

    if(child_yang_name == "mac-throttle")
    {
        if(mac_throttle == nullptr)
        {
            mac_throttle = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle>();
        }
        return mac_throttle;
    }

    if(child_yang_name == "circuit-id-and-remote-id-limit")
    {
        if(circuit_id_and_remote_id_limit == nullptr)
        {
            circuit_id_and_remote_id_limit = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdLimit>();
        }
        return circuit_id_and_remote_id_limit;
    }

    if(child_yang_name == "vlan-limit")
    {
        if(vlan_limit == nullptr)
        {
            vlan_limit = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanLimit>();
        }
        return vlan_limit;
    }

    if(child_yang_name == "mac-access-interface-limit")
    {
        if(mac_access_interface_limit == nullptr)
        {
            mac_access_interface_limit = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceLimit>();
        }
        return mac_access_interface_limit;
    }

    if(child_yang_name == "remote-id-throttle")
    {
        if(remote_id_throttle == nullptr)
        {
            remote_id_throttle = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle>();
        }
        return remote_id_throttle;
    }

    if(child_yang_name == "max-limit")
    {
        if(max_limit == nullptr)
        {
            max_limit = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MaxLimit>();
        }
        return max_limit;
    }

    if(child_yang_name == "circuit-id-and-remote-id-throttle")
    {
        if(circuit_id_and_remote_id_throttle == nullptr)
        {
            circuit_id_and_remote_id_throttle = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle>();
        }
        return circuit_id_and_remote_id_throttle;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan_throttle != nullptr)
    {
        children["vlan-throttle"] = vlan_throttle;
    }

    if(inner_vlan_throttle != nullptr)
    {
        children["inner-vlan-throttle"] = inner_vlan_throttle;
    }

    if(remote_id_limit != nullptr)
    {
        children["remote-id-limit"] = remote_id_limit;
    }

    if(mac_iwf_access_interface_throttle != nullptr)
    {
        children["mac-iwf-access-interface-throttle"] = mac_iwf_access_interface_throttle;
    }

    if(access_interface_limit != nullptr)
    {
        children["access-interface-limit"] = access_interface_limit;
    }

    if(mac_access_interface_throttle != nullptr)
    {
        children["mac-access-interface-throttle"] = mac_access_interface_throttle;
    }

    if(outer_vlan_limit != nullptr)
    {
        children["outer-vlan-limit"] = outer_vlan_limit;
    }

    if(circuit_id_throttle != nullptr)
    {
        children["circuit-id-throttle"] = circuit_id_throttle;
    }

    if(mac_limit != nullptr)
    {
        children["mac-limit"] = mac_limit;
    }

    if(circuit_id_limit != nullptr)
    {
        children["circuit-id-limit"] = circuit_id_limit;
    }

    if(mac_iwf_limit != nullptr)
    {
        children["mac-iwf-limit"] = mac_iwf_limit;
    }

    if(mac_iwf_access_interface_limit != nullptr)
    {
        children["mac-iwf-access-interface-limit"] = mac_iwf_access_interface_limit;
    }

    if(inner_vlan_limit != nullptr)
    {
        children["inner-vlan-limit"] = inner_vlan_limit;
    }

    if(outer_vlan_throttle != nullptr)
    {
        children["outer-vlan-throttle"] = outer_vlan_throttle;
    }

    if(mac_throttle != nullptr)
    {
        children["mac-throttle"] = mac_throttle;
    }

    if(circuit_id_and_remote_id_limit != nullptr)
    {
        children["circuit-id-and-remote-id-limit"] = circuit_id_and_remote_id_limit;
    }

    if(vlan_limit != nullptr)
    {
        children["vlan-limit"] = vlan_limit;
    }

    if(mac_access_interface_limit != nullptr)
    {
        children["mac-access-interface-limit"] = mac_access_interface_limit;
    }

    if(remote_id_throttle != nullptr)
    {
        children["remote-id-throttle"] = remote_id_throttle;
    }

    if(max_limit != nullptr)
    {
        children["max-limit"] = max_limit;
    }

    if(circuit_id_and_remote_id_throttle != nullptr)
    {
        children["circuit-id-and-remote-id-throttle"] = circuit_id_and_remote_id_throttle;
    }

    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-throttle" || name == "inner-vlan-throttle" || name == "remote-id-limit" || name == "mac-iwf-access-interface-throttle" || name == "access-interface-limit" || name == "mac-access-interface-throttle" || name == "outer-vlan-limit" || name == "circuit-id-throttle" || name == "mac-limit" || name == "circuit-id-limit" || name == "mac-iwf-limit" || name == "mac-iwf-access-interface-limit" || name == "inner-vlan-limit" || name == "outer-vlan-throttle" || name == "mac-throttle" || name == "circuit-id-and-remote-id-limit" || name == "vlan-limit" || name == "mac-access-interface-limit" || name == "remote-id-throttle" || name == "max-limit" || name == "circuit-id-and-remote-id-throttle")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle::VlanThrottle()
    :
    throttle{YType::uint32, "throttle"},
    request_period{YType::uint32, "request-period"},
    blocking_period{YType::uint32, "blocking-period"}
{

    yang_name = "vlan-throttle"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle::~VlanThrottle()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle::has_data() const
{
    return throttle.is_set
	|| request_period.is_set
	|| blocking_period.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(throttle.yfilter)
	|| ydk::is_set(request_period.yfilter)
	|| ydk::is_set(blocking_period.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-throttle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (throttle.is_set || is_set(throttle.yfilter)) leaf_name_data.push_back(throttle.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.yfilter)) leaf_name_data.push_back(request_period.get_name_leafdata());
    if (blocking_period.is_set || is_set(blocking_period.yfilter)) leaf_name_data.push_back(blocking_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "throttle")
    {
        throttle = value;
        throttle.value_namespace = name_space;
        throttle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-period")
    {
        request_period = value;
        request_period.value_namespace = name_space;
        request_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "blocking-period")
    {
        blocking_period = value;
        blocking_period.value_namespace = name_space;
        blocking_period.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "throttle")
    {
        throttle.yfilter = yfilter;
    }
    if(value_path == "request-period")
    {
        request_period.yfilter = yfilter;
    }
    if(value_path == "blocking-period")
    {
        blocking_period.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "throttle" || name == "request-period" || name == "blocking-period")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle::InnerVlanThrottle()
    :
    throttle{YType::uint32, "throttle"},
    request_period{YType::uint32, "request-period"},
    blocking_period{YType::uint32, "blocking-period"}
{

    yang_name = "inner-vlan-throttle"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle::~InnerVlanThrottle()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle::has_data() const
{
    return throttle.is_set
	|| request_period.is_set
	|| blocking_period.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(throttle.yfilter)
	|| ydk::is_set(request_period.yfilter)
	|| ydk::is_set(blocking_period.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inner-vlan-throttle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (throttle.is_set || is_set(throttle.yfilter)) leaf_name_data.push_back(throttle.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.yfilter)) leaf_name_data.push_back(request_period.get_name_leafdata());
    if (blocking_period.is_set || is_set(blocking_period.yfilter)) leaf_name_data.push_back(blocking_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "throttle")
    {
        throttle = value;
        throttle.value_namespace = name_space;
        throttle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-period")
    {
        request_period = value;
        request_period.value_namespace = name_space;
        request_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "blocking-period")
    {
        blocking_period = value;
        blocking_period.value_namespace = name_space;
        blocking_period.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "throttle")
    {
        throttle.yfilter = yfilter;
    }
    if(value_path == "request-period")
    {
        request_period.yfilter = yfilter;
    }
    if(value_path == "blocking-period")
    {
        blocking_period.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "throttle" || name == "request-period" || name == "blocking-period")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdLimit::RemoteIdLimit()
    :
    limit{YType::uint32, "limit"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "remote-id-limit"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdLimit::~RemoteIdLimit()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdLimit::has_data() const
{
    return limit.is_set
	|| threshold.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "threshold")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle::MacIwfAccessInterfaceThrottle()
    :
    throttle{YType::uint32, "throttle"},
    request_period{YType::uint32, "request-period"},
    blocking_period{YType::uint32, "blocking-period"}
{

    yang_name = "mac-iwf-access-interface-throttle"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle::~MacIwfAccessInterfaceThrottle()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle::has_data() const
{
    return throttle.is_set
	|| request_period.is_set
	|| blocking_period.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(throttle.yfilter)
	|| ydk::is_set(request_period.yfilter)
	|| ydk::is_set(blocking_period.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-iwf-access-interface-throttle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (throttle.is_set || is_set(throttle.yfilter)) leaf_name_data.push_back(throttle.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.yfilter)) leaf_name_data.push_back(request_period.get_name_leafdata());
    if (blocking_period.is_set || is_set(blocking_period.yfilter)) leaf_name_data.push_back(blocking_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "throttle")
    {
        throttle = value;
        throttle.value_namespace = name_space;
        throttle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-period")
    {
        request_period = value;
        request_period.value_namespace = name_space;
        request_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "blocking-period")
    {
        blocking_period = value;
        blocking_period.value_namespace = name_space;
        blocking_period.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "throttle")
    {
        throttle.yfilter = yfilter;
    }
    if(value_path == "request-period")
    {
        request_period.yfilter = yfilter;
    }
    if(value_path == "blocking-period")
    {
        blocking_period.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "throttle" || name == "request-period" || name == "blocking-period")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::AccessInterfaceLimit::AccessInterfaceLimit()
    :
    limit{YType::uint32, "limit"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "access-interface-limit"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::AccessInterfaceLimit::~AccessInterfaceLimit()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::AccessInterfaceLimit::has_data() const
{
    return limit.is_set
	|| threshold.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::AccessInterfaceLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::AccessInterfaceLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::AccessInterfaceLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::AccessInterfaceLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::AccessInterfaceLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::AccessInterfaceLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::AccessInterfaceLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::AccessInterfaceLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "threshold")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle::MacAccessInterfaceThrottle()
    :
    throttle{YType::uint32, "throttle"},
    request_period{YType::uint32, "request-period"},
    blocking_period{YType::uint32, "blocking-period"}
{

    yang_name = "mac-access-interface-throttle"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle::~MacAccessInterfaceThrottle()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle::has_data() const
{
    return throttle.is_set
	|| request_period.is_set
	|| blocking_period.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(throttle.yfilter)
	|| ydk::is_set(request_period.yfilter)
	|| ydk::is_set(blocking_period.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-access-interface-throttle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (throttle.is_set || is_set(throttle.yfilter)) leaf_name_data.push_back(throttle.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.yfilter)) leaf_name_data.push_back(request_period.get_name_leafdata());
    if (blocking_period.is_set || is_set(blocking_period.yfilter)) leaf_name_data.push_back(blocking_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "throttle")
    {
        throttle = value;
        throttle.value_namespace = name_space;
        throttle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-period")
    {
        request_period = value;
        request_period.value_namespace = name_space;
        request_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "blocking-period")
    {
        blocking_period = value;
        blocking_period.value_namespace = name_space;
        blocking_period.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "throttle")
    {
        throttle.yfilter = yfilter;
    }
    if(value_path == "request-period")
    {
        request_period.yfilter = yfilter;
    }
    if(value_path == "blocking-period")
    {
        blocking_period.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "throttle" || name == "request-period" || name == "blocking-period")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanLimit::OuterVlanLimit()
    :
    limit{YType::uint32, "limit"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "outer-vlan-limit"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanLimit::~OuterVlanLimit()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanLimit::has_data() const
{
    return limit.is_set
	|| threshold.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outer-vlan-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "threshold")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle::CircuitIdThrottle()
    :
    throttle{YType::uint32, "throttle"},
    request_period{YType::uint32, "request-period"},
    blocking_period{YType::uint32, "blocking-period"}
{

    yang_name = "circuit-id-throttle"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle::~CircuitIdThrottle()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle::has_data() const
{
    return throttle.is_set
	|| request_period.is_set
	|| blocking_period.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(throttle.yfilter)
	|| ydk::is_set(request_period.yfilter)
	|| ydk::is_set(blocking_period.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id-throttle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (throttle.is_set || is_set(throttle.yfilter)) leaf_name_data.push_back(throttle.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.yfilter)) leaf_name_data.push_back(request_period.get_name_leafdata());
    if (blocking_period.is_set || is_set(blocking_period.yfilter)) leaf_name_data.push_back(blocking_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "throttle")
    {
        throttle = value;
        throttle.value_namespace = name_space;
        throttle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-period")
    {
        request_period = value;
        request_period.value_namespace = name_space;
        request_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "blocking-period")
    {
        blocking_period = value;
        blocking_period.value_namespace = name_space;
        blocking_period.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "throttle")
    {
        throttle.yfilter = yfilter;
    }
    if(value_path == "request-period")
    {
        request_period.yfilter = yfilter;
    }
    if(value_path == "blocking-period")
    {
        blocking_period.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "throttle" || name == "request-period" || name == "blocking-period")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacLimit::MacLimit()
    :
    limit{YType::uint32, "limit"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "mac-limit"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacLimit::~MacLimit()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacLimit::has_data() const
{
    return limit.is_set
	|| threshold.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "threshold")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdLimit::CircuitIdLimit()
    :
    limit{YType::uint32, "limit"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "circuit-id-limit"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdLimit::~CircuitIdLimit()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdLimit::has_data() const
{
    return limit.is_set
	|| threshold.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "threshold")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfLimit::MacIwfLimit()
    :
    limit{YType::uint32, "limit"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "mac-iwf-limit"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfLimit::~MacIwfLimit()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfLimit::has_data() const
{
    return limit.is_set
	|| threshold.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-iwf-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "threshold")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceLimit::MacIwfAccessInterfaceLimit()
    :
    limit{YType::uint32, "limit"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "mac-iwf-access-interface-limit"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceLimit::~MacIwfAccessInterfaceLimit()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceLimit::has_data() const
{
    return limit.is_set
	|| threshold.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-iwf-access-interface-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "threshold")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanLimit::InnerVlanLimit()
    :
    limit{YType::uint32, "limit"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "inner-vlan-limit"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanLimit::~InnerVlanLimit()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanLimit::has_data() const
{
    return limit.is_set
	|| threshold.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inner-vlan-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "threshold")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle::OuterVlanThrottle()
    :
    throttle{YType::uint32, "throttle"},
    request_period{YType::uint32, "request-period"},
    blocking_period{YType::uint32, "blocking-period"}
{

    yang_name = "outer-vlan-throttle"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle::~OuterVlanThrottle()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle::has_data() const
{
    return throttle.is_set
	|| request_period.is_set
	|| blocking_period.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(throttle.yfilter)
	|| ydk::is_set(request_period.yfilter)
	|| ydk::is_set(blocking_period.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outer-vlan-throttle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (throttle.is_set || is_set(throttle.yfilter)) leaf_name_data.push_back(throttle.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.yfilter)) leaf_name_data.push_back(request_period.get_name_leafdata());
    if (blocking_period.is_set || is_set(blocking_period.yfilter)) leaf_name_data.push_back(blocking_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "throttle")
    {
        throttle = value;
        throttle.value_namespace = name_space;
        throttle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-period")
    {
        request_period = value;
        request_period.value_namespace = name_space;
        request_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "blocking-period")
    {
        blocking_period = value;
        blocking_period.value_namespace = name_space;
        blocking_period.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "throttle")
    {
        throttle.yfilter = yfilter;
    }
    if(value_path == "request-period")
    {
        request_period.yfilter = yfilter;
    }
    if(value_path == "blocking-period")
    {
        blocking_period.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "throttle" || name == "request-period" || name == "blocking-period")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle::MacThrottle()
    :
    throttle{YType::uint32, "throttle"},
    request_period{YType::uint32, "request-period"},
    blocking_period{YType::uint32, "blocking-period"}
{

    yang_name = "mac-throttle"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle::~MacThrottle()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle::has_data() const
{
    return throttle.is_set
	|| request_period.is_set
	|| blocking_period.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(throttle.yfilter)
	|| ydk::is_set(request_period.yfilter)
	|| ydk::is_set(blocking_period.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-throttle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (throttle.is_set || is_set(throttle.yfilter)) leaf_name_data.push_back(throttle.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.yfilter)) leaf_name_data.push_back(request_period.get_name_leafdata());
    if (blocking_period.is_set || is_set(blocking_period.yfilter)) leaf_name_data.push_back(blocking_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "throttle")
    {
        throttle = value;
        throttle.value_namespace = name_space;
        throttle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-period")
    {
        request_period = value;
        request_period.value_namespace = name_space;
        request_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "blocking-period")
    {
        blocking_period = value;
        blocking_period.value_namespace = name_space;
        blocking_period.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "throttle")
    {
        throttle.yfilter = yfilter;
    }
    if(value_path == "request-period")
    {
        request_period.yfilter = yfilter;
    }
    if(value_path == "blocking-period")
    {
        blocking_period.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "throttle" || name == "request-period" || name == "blocking-period")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdLimit::CircuitIdAndRemoteIdLimit()
    :
    limit{YType::uint32, "limit"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "circuit-id-and-remote-id-limit"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdLimit::~CircuitIdAndRemoteIdLimit()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdLimit::has_data() const
{
    return limit.is_set
	|| threshold.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id-and-remote-id-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "threshold")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanLimit::VlanLimit()
    :
    limit{YType::uint32, "limit"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "vlan-limit"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanLimit::~VlanLimit()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanLimit::has_data() const
{
    return limit.is_set
	|| threshold.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "threshold")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceLimit::MacAccessInterfaceLimit()
    :
    limit{YType::uint32, "limit"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "mac-access-interface-limit"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceLimit::~MacAccessInterfaceLimit()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceLimit::has_data() const
{
    return limit.is_set
	|| threshold.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-access-interface-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "threshold")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle::RemoteIdThrottle()
    :
    throttle{YType::uint32, "throttle"},
    request_period{YType::uint32, "request-period"},
    blocking_period{YType::uint32, "blocking-period"}
{

    yang_name = "remote-id-throttle"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle::~RemoteIdThrottle()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle::has_data() const
{
    return throttle.is_set
	|| request_period.is_set
	|| blocking_period.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(throttle.yfilter)
	|| ydk::is_set(request_period.yfilter)
	|| ydk::is_set(blocking_period.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id-throttle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (throttle.is_set || is_set(throttle.yfilter)) leaf_name_data.push_back(throttle.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.yfilter)) leaf_name_data.push_back(request_period.get_name_leafdata());
    if (blocking_period.is_set || is_set(blocking_period.yfilter)) leaf_name_data.push_back(blocking_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "throttle")
    {
        throttle = value;
        throttle.value_namespace = name_space;
        throttle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-period")
    {
        request_period = value;
        request_period.value_namespace = name_space;
        request_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "blocking-period")
    {
        blocking_period = value;
        blocking_period.value_namespace = name_space;
        blocking_period.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "throttle")
    {
        throttle.yfilter = yfilter;
    }
    if(value_path == "request-period")
    {
        request_period.yfilter = yfilter;
    }
    if(value_path == "blocking-period")
    {
        blocking_period.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "throttle" || name == "request-period" || name == "blocking-period")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MaxLimit::MaxLimit()
    :
    limit{YType::uint32, "limit"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "max-limit"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MaxLimit::~MaxLimit()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MaxLimit::has_data() const
{
    return limit.is_set
	|| threshold.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MaxLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MaxLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MaxLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MaxLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MaxLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MaxLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MaxLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MaxLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "threshold")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle::CircuitIdAndRemoteIdThrottle()
    :
    throttle{YType::uint32, "throttle"},
    request_period{YType::uint32, "request-period"},
    blocking_period{YType::uint32, "blocking-period"}
{

    yang_name = "circuit-id-and-remote-id-throttle"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle::~CircuitIdAndRemoteIdThrottle()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle::has_data() const
{
    return throttle.is_set
	|| request_period.is_set
	|| blocking_period.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(throttle.yfilter)
	|| ydk::is_set(request_period.yfilter)
	|| ydk::is_set(blocking_period.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id-and-remote-id-throttle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (throttle.is_set || is_set(throttle.yfilter)) leaf_name_data.push_back(throttle.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.yfilter)) leaf_name_data.push_back(request_period.get_name_leafdata());
    if (blocking_period.is_set || is_set(blocking_period.yfilter)) leaf_name_data.push_back(blocking_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "throttle")
    {
        throttle = value;
        throttle.value_namespace = name_space;
        throttle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-period")
    {
        request_period = value;
        request_period.value_namespace = name_space;
        request_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "blocking-period")
    {
        blocking_period = value;
        blocking_period.value_namespace = name_space;
        blocking_period.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "throttle")
    {
        throttle.yfilter = yfilter;
    }
    if(value_path == "request-period")
    {
        request_period.yfilter = yfilter;
    }
    if(value_path == "blocking-period")
    {
        blocking_period.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "throttle" || name == "request-period" || name == "blocking-period")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets::ControlPackets()
    :
    priority{YType::uint32, "priority"}
{

    yang_name = "control-packets"; yang_parent_name = "pppoe-bba-group"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets::~ControlPackets()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets::has_data() const
{
    return priority.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control-packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::PaDoDelay()
    :
    default_{YType::uint32, "default"},
    circuit_id{YType::uint32, "circuit-id"},
    remote_id{YType::uint32, "remote-id"}
    	,
    remote_id_substrings(std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings>())
	,remote_id_strings(std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings>())
	,service_name_strings(std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings>())
	,circuit_id_substrings(std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings>())
	,service_name_substrings(std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings>())
	,circuit_id_strings(std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings>())
{
    remote_id_substrings->parent = this;
    remote_id_strings->parent = this;
    service_name_strings->parent = this;
    circuit_id_substrings->parent = this;
    service_name_substrings->parent = this;
    circuit_id_strings->parent = this;

    yang_name = "pa-do-delay"; yang_parent_name = "pppoe-bba-group"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::~PaDoDelay()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::has_data() const
{
    return default_.is_set
	|| circuit_id.is_set
	|| remote_id.is_set
	|| (remote_id_substrings !=  nullptr && remote_id_substrings->has_data())
	|| (remote_id_strings !=  nullptr && remote_id_strings->has_data())
	|| (service_name_strings !=  nullptr && service_name_strings->has_data())
	|| (circuit_id_substrings !=  nullptr && circuit_id_substrings->has_data())
	|| (service_name_substrings !=  nullptr && service_name_substrings->has_data())
	|| (circuit_id_strings !=  nullptr && circuit_id_strings->has_data());
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(circuit_id.yfilter)
	|| ydk::is_set(remote_id.yfilter)
	|| (remote_id_substrings !=  nullptr && remote_id_substrings->has_operation())
	|| (remote_id_strings !=  nullptr && remote_id_strings->has_operation())
	|| (service_name_strings !=  nullptr && service_name_strings->has_operation())
	|| (circuit_id_substrings !=  nullptr && circuit_id_substrings->has_operation())
	|| (service_name_substrings !=  nullptr && service_name_substrings->has_operation())
	|| (circuit_id_strings !=  nullptr && circuit_id_strings->has_operation());
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pa-do-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (circuit_id.is_set || is_set(circuit_id.yfilter)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.yfilter)) leaf_name_data.push_back(remote_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-id-substrings")
    {
        if(remote_id_substrings == nullptr)
        {
            remote_id_substrings = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings>();
        }
        return remote_id_substrings;
    }

    if(child_yang_name == "remote-id-strings")
    {
        if(remote_id_strings == nullptr)
        {
            remote_id_strings = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings>();
        }
        return remote_id_strings;
    }

    if(child_yang_name == "service-name-strings")
    {
        if(service_name_strings == nullptr)
        {
            service_name_strings = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings>();
        }
        return service_name_strings;
    }

    if(child_yang_name == "circuit-id-substrings")
    {
        if(circuit_id_substrings == nullptr)
        {
            circuit_id_substrings = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings>();
        }
        return circuit_id_substrings;
    }

    if(child_yang_name == "service-name-substrings")
    {
        if(service_name_substrings == nullptr)
        {
            service_name_substrings = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings>();
        }
        return service_name_substrings;
    }

    if(child_yang_name == "circuit-id-strings")
    {
        if(circuit_id_strings == nullptr)
        {
            circuit_id_strings = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings>();
        }
        return circuit_id_strings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote_id_substrings != nullptr)
    {
        children["remote-id-substrings"] = remote_id_substrings;
    }

    if(remote_id_strings != nullptr)
    {
        children["remote-id-strings"] = remote_id_strings;
    }

    if(service_name_strings != nullptr)
    {
        children["service-name-strings"] = service_name_strings;
    }

    if(circuit_id_substrings != nullptr)
    {
        children["circuit-id-substrings"] = circuit_id_substrings;
    }

    if(service_name_substrings != nullptr)
    {
        children["service-name-substrings"] = service_name_substrings;
    }

    if(circuit_id_strings != nullptr)
    {
        children["circuit-id-strings"] = circuit_id_strings;
    }

    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "circuit-id")
    {
        circuit_id = value;
        circuit_id.value_namespace = name_space;
        circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
        remote_id.value_namespace = name_space;
        remote_id.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "circuit-id")
    {
        circuit_id.yfilter = yfilter;
    }
    if(value_path == "remote-id")
    {
        remote_id.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-id-substrings" || name == "remote-id-strings" || name == "service-name-strings" || name == "circuit-id-substrings" || name == "service-name-substrings" || name == "circuit-id-strings" || name == "default" || name == "circuit-id" || name == "remote-id")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstrings()
{

    yang_name = "remote-id-substrings"; yang_parent_name = "pa-do-delay"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::~RemoteIdSubstrings()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::has_data() const
{
    for (std::size_t index=0; index<remote_id_substring.size(); index++)
    {
        if(remote_id_substring[index]->has_data())
            return true;
    }
    return false;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::has_operation() const
{
    for (std::size_t index=0; index<remote_id_substring.size(); index++)
    {
        if(remote_id_substring[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id-substrings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-id-substring")
    {
        for(auto const & c : remote_id_substring)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstring>();
        c->parent = this;
        remote_id_substring.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : remote_id_substring)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-id-substring")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstring::RemoteIdSubstring()
    :
    name{YType::str, "name"},
    delay{YType::uint32, "delay"}
{

    yang_name = "remote-id-substring"; yang_parent_name = "remote-id-substrings"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstring::~RemoteIdSubstring()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstring::has_data() const
{
    return name.is_set
	|| delay.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id-substring" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "delay")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdStrings()
{

    yang_name = "remote-id-strings"; yang_parent_name = "pa-do-delay"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::~RemoteIdStrings()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::has_data() const
{
    for (std::size_t index=0; index<remote_id_string.size(); index++)
    {
        if(remote_id_string[index]->has_data())
            return true;
    }
    return false;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::has_operation() const
{
    for (std::size_t index=0; index<remote_id_string.size(); index++)
    {
        if(remote_id_string[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id-strings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-id-string")
    {
        for(auto const & c : remote_id_string)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdString>();
        c->parent = this;
        remote_id_string.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : remote_id_string)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-id-string")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdString::RemoteIdString()
    :
    name{YType::str, "name"},
    delay{YType::uint32, "delay"}
{

    yang_name = "remote-id-string"; yang_parent_name = "remote-id-strings"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdString::~RemoteIdString()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdString::has_data() const
{
    return name.is_set
	|| delay.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id-string" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "delay")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameStrings()
{

    yang_name = "service-name-strings"; yang_parent_name = "pa-do-delay"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::~ServiceNameStrings()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::has_data() const
{
    for (std::size_t index=0; index<service_name_string.size(); index++)
    {
        if(service_name_string[index]->has_data())
            return true;
    }
    return false;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::has_operation() const
{
    for (std::size_t index=0; index<service_name_string.size(); index++)
    {
        if(service_name_string[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-name-strings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-name-string")
    {
        for(auto const & c : service_name_string)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameString>();
        c->parent = this;
        service_name_string.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_name_string)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-name-string")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameString::ServiceNameString()
    :
    name{YType::str, "name"},
    delay{YType::uint32, "delay"}
{

    yang_name = "service-name-string"; yang_parent_name = "service-name-strings"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameString::~ServiceNameString()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameString::has_data() const
{
    return name.is_set
	|| delay.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-name-string" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "delay")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstrings()
{

    yang_name = "circuit-id-substrings"; yang_parent_name = "pa-do-delay"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::~CircuitIdSubstrings()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::has_data() const
{
    for (std::size_t index=0; index<circuit_id_substring.size(); index++)
    {
        if(circuit_id_substring[index]->has_data())
            return true;
    }
    return false;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::has_operation() const
{
    for (std::size_t index=0; index<circuit_id_substring.size(); index++)
    {
        if(circuit_id_substring[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id-substrings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "circuit-id-substring")
    {
        for(auto const & c : circuit_id_substring)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstring>();
        c->parent = this;
        circuit_id_substring.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : circuit_id_substring)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "circuit-id-substring")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstring::CircuitIdSubstring()
    :
    name{YType::str, "name"},
    delay{YType::uint32, "delay"}
{

    yang_name = "circuit-id-substring"; yang_parent_name = "circuit-id-substrings"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstring::~CircuitIdSubstring()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstring::has_data() const
{
    return name.is_set
	|| delay.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id-substring" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "delay")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstrings()
{

    yang_name = "service-name-substrings"; yang_parent_name = "pa-do-delay"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::~ServiceNameSubstrings()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::has_data() const
{
    for (std::size_t index=0; index<service_name_substring.size(); index++)
    {
        if(service_name_substring[index]->has_data())
            return true;
    }
    return false;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::has_operation() const
{
    for (std::size_t index=0; index<service_name_substring.size(); index++)
    {
        if(service_name_substring[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-name-substrings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-name-substring")
    {
        for(auto const & c : service_name_substring)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstring>();
        c->parent = this;
        service_name_substring.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service_name_substring)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-name-substring")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstring::ServiceNameSubstring()
    :
    name{YType::str, "name"},
    delay{YType::uint32, "delay"}
{

    yang_name = "service-name-substring"; yang_parent_name = "service-name-substrings"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstring::~ServiceNameSubstring()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstring::has_data() const
{
    return name.is_set
	|| delay.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-name-substring" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "delay")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdStrings()
{

    yang_name = "circuit-id-strings"; yang_parent_name = "pa-do-delay"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::~CircuitIdStrings()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::has_data() const
{
    for (std::size_t index=0; index<circuit_id_string.size(); index++)
    {
        if(circuit_id_string[index]->has_data())
            return true;
    }
    return false;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::has_operation() const
{
    for (std::size_t index=0; index<circuit_id_string.size(); index++)
    {
        if(circuit_id_string[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id-strings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "circuit-id-string")
    {
        for(auto const & c : circuit_id_string)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdString>();
        c->parent = this;
        circuit_id_string.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : circuit_id_string)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "circuit-id-string")
        return true;
    return false;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdString::CircuitIdString()
    :
    name{YType::str, "name"},
    delay{YType::uint32, "delay"}
{

    yang_name = "circuit-id-string"; yang_parent_name = "circuit-id-strings"; is_top_level_class = false; has_list_ancestor = true;
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdString::~CircuitIdString()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdString::has_data() const
{
    return name.is_set
	|| delay.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id-string" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "delay")
        return true;
    return false;
}

const Enum::YLeaf PppoeInvalidSessionIdBehavior::drop {0, "drop"};
const Enum::YLeaf PppoeInvalidSessionIdBehavior::log {1, "log"};


}
}

