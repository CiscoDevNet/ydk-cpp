
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg {

PppoeCfg::PppoeCfg()
    :
    in_flight_window{YType::uint32, "in-flight-window"},
    session_id_space_flat{YType::empty, "session-id-space-flat"}
    	,
    pppoe_bba_groups(std::make_shared<PppoeCfg::PppoeBbaGroups>())
{
    pppoe_bba_groups->parent = this;
    children["pppoe-bba-groups"] = pppoe_bba_groups;

    yang_name = "pppoe-cfg"; yang_parent_name = "Cisco-IOS-XR-subscriber-pppoe-ma-gbl-cfg";
}

PppoeCfg::~PppoeCfg()
{
}

bool PppoeCfg::has_data() const
{
    return in_flight_window.is_set
	|| session_id_space_flat.is_set
	|| (pppoe_bba_groups !=  nullptr && pppoe_bba_groups->has_data());
}

bool PppoeCfg::has_operation() const
{
    return is_set(operation)
	|| is_set(in_flight_window.operation)
	|| is_set(session_id_space_flat.operation)
	|| (pppoe_bba_groups !=  nullptr && pppoe_bba_groups->has_operation());
}

std::string PppoeCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-pppoe-ma-gbl-cfg:pppoe-cfg";

    return path_buffer.str();

}

EntityPath PppoeCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_flight_window.is_set || is_set(in_flight_window.operation)) leaf_name_data.push_back(in_flight_window.get_name_leafdata());
    if (session_id_space_flat.is_set || is_set(session_id_space_flat.operation)) leaf_name_data.push_back(session_id_space_flat.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pppoe-bba-groups")
    {
        if(pppoe_bba_groups != nullptr)
        {
            children["pppoe-bba-groups"] = pppoe_bba_groups;
        }
        else
        {
            pppoe_bba_groups = std::make_shared<PppoeCfg::PppoeBbaGroups>();
            pppoe_bba_groups->parent = this;
            children["pppoe-bba-groups"] = pppoe_bba_groups;
        }
        return children.at("pppoe-bba-groups");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::get_children()
{
    if(children.find("pppoe-bba-groups") == children.end())
    {
        if(pppoe_bba_groups != nullptr)
        {
            children["pppoe-bba-groups"] = pppoe_bba_groups;
        }
    }

    return children;
}

void PppoeCfg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-flight-window")
    {
        in_flight_window = value;
    }
    if(value_path == "session-id-space-flat")
    {
        session_id_space_flat = value;
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

PppoeCfg::PppoeBbaGroups::PppoeBbaGroups()
{
    yang_name = "pppoe-bba-groups"; yang_parent_name = "pppoe-cfg";
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
    return is_set(operation);
}

std::string PppoeCfg::PppoeBbaGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe-bba-groups";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-pppoe-ma-gbl-cfg:pppoe-cfg/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pppoe-bba-group")
    {
        for(auto const & c : pppoe_bba_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup>();
        c->parent = this;
        pppoe_bba_group.push_back(std::move(c));
        children[segment_path] = pppoe_bba_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::get_children()
{
    for (auto const & c : pppoe_bba_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PppoeCfg::PppoeBbaGroups::set_value(const std::string & value_path, std::string value)
{
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PppoeBbaGroup()
    :
    bba_group{YType::str, "bba-group"},
    completion_timeout{YType::uint32, "completion-timeout"},
    enable_padt_after_shut_down{YType::empty, "enable-padt-after-shut-down"},
    invalid_session_id{YType::enumeration, "invalid-session-id"},
    mtu{YType::uint32, "mtu"}
    	,
    control_packets(std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets>())
	,pa_do_delay(std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay>())
	,sessions(std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions>())
	,tag(std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag>())
{
    control_packets->parent = this;
    children["control-packets"] = control_packets;

    pa_do_delay->parent = this;
    children["pa-do-delay"] = pa_do_delay;

    sessions->parent = this;
    children["sessions"] = sessions;

    tag->parent = this;
    children["tag"] = tag;

    yang_name = "pppoe-bba-group"; yang_parent_name = "pppoe-bba-groups";
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::~PppoeBbaGroup()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::has_data() const
{
    return bba_group.is_set
	|| completion_timeout.is_set
	|| enable_padt_after_shut_down.is_set
	|| invalid_session_id.is_set
	|| mtu.is_set
	|| (control_packets !=  nullptr && control_packets->has_data())
	|| (pa_do_delay !=  nullptr && pa_do_delay->has_data())
	|| (sessions !=  nullptr && sessions->has_data())
	|| (tag !=  nullptr && tag->has_data());
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(bba_group.operation)
	|| is_set(completion_timeout.operation)
	|| is_set(enable_padt_after_shut_down.operation)
	|| is_set(invalid_session_id.operation)
	|| is_set(mtu.operation)
	|| (control_packets !=  nullptr && control_packets->has_operation())
	|| (pa_do_delay !=  nullptr && pa_do_delay->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (tag !=  nullptr && tag->has_operation());
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe-bba-group" <<"[bba-group='" <<bba_group <<"']";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-pppoe-ma-gbl-cfg:pppoe-cfg/pppoe-bba-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bba_group.is_set || is_set(bba_group.operation)) leaf_name_data.push_back(bba_group.get_name_leafdata());
    if (completion_timeout.is_set || is_set(completion_timeout.operation)) leaf_name_data.push_back(completion_timeout.get_name_leafdata());
    if (enable_padt_after_shut_down.is_set || is_set(enable_padt_after_shut_down.operation)) leaf_name_data.push_back(enable_padt_after_shut_down.get_name_leafdata());
    if (invalid_session_id.is_set || is_set(invalid_session_id.operation)) leaf_name_data.push_back(invalid_session_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "control-packets")
    {
        if(control_packets != nullptr)
        {
            children["control-packets"] = control_packets;
        }
        else
        {
            control_packets = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets>();
            control_packets->parent = this;
            children["control-packets"] = control_packets;
        }
        return children.at("control-packets");
    }

    if(child_yang_name == "pa-do-delay")
    {
        if(pa_do_delay != nullptr)
        {
            children["pa-do-delay"] = pa_do_delay;
        }
        else
        {
            pa_do_delay = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay>();
            pa_do_delay->parent = this;
            children["pa-do-delay"] = pa_do_delay;
        }
        return children.at("pa-do-delay");
    }

    if(child_yang_name == "sessions")
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
        else
        {
            sessions = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions>();
            sessions->parent = this;
            children["sessions"] = sessions;
        }
        return children.at("sessions");
    }

    if(child_yang_name == "tag")
    {
        if(tag != nullptr)
        {
            children["tag"] = tag;
        }
        else
        {
            tag = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag>();
            tag->parent = this;
            children["tag"] = tag;
        }
        return children.at("tag");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::get_children()
{
    if(children.find("control-packets") == children.end())
    {
        if(control_packets != nullptr)
        {
            children["control-packets"] = control_packets;
        }
    }

    if(children.find("pa-do-delay") == children.end())
    {
        if(pa_do_delay != nullptr)
        {
            children["pa-do-delay"] = pa_do_delay;
        }
    }

    if(children.find("sessions") == children.end())
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
    }

    if(children.find("tag") == children.end())
    {
        if(tag != nullptr)
        {
            children["tag"] = tag;
        }
    }

    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bba-group")
    {
        bba_group = value;
    }
    if(value_path == "completion-timeout")
    {
        completion_timeout = value;
    }
    if(value_path == "enable-padt-after-shut-down")
    {
        enable_padt_after_shut_down = value;
    }
    if(value_path == "invalid-session-id")
    {
        invalid_session_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Tag()
    :
    ac_name{YType::str, "ac-name"},
    ppp_max_payload_deny{YType::empty, "ppp-max-payload-deny"},
    service_selection_disable{YType::empty, "service-selection-disable"}
    	,
    padr(std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr>())
	,ppp_max_payload(std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload>())
	,service_name_configureds(std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds>())
{
    padr->parent = this;
    children["padr"] = padr;

    ppp_max_payload->parent = this;
    children["ppp-max-payload"] = ppp_max_payload;

    service_name_configureds->parent = this;
    children["service-name-configureds"] = service_name_configureds;

    yang_name = "tag"; yang_parent_name = "pppoe-bba-group";
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::~Tag()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::has_data() const
{
    return ac_name.is_set
	|| ppp_max_payload_deny.is_set
	|| service_selection_disable.is_set
	|| (padr !=  nullptr && padr->has_data())
	|| (ppp_max_payload !=  nullptr && ppp_max_payload->has_data())
	|| (service_name_configureds !=  nullptr && service_name_configureds->has_data());
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::has_operation() const
{
    return is_set(operation)
	|| is_set(ac_name.operation)
	|| is_set(ppp_max_payload_deny.operation)
	|| is_set(service_selection_disable.operation)
	|| (padr !=  nullptr && padr->has_operation())
	|| (ppp_max_payload !=  nullptr && ppp_max_payload->has_operation())
	|| (service_name_configureds !=  nullptr && service_name_configureds->has_operation());
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tag' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ac_name.is_set || is_set(ac_name.operation)) leaf_name_data.push_back(ac_name.get_name_leafdata());
    if (ppp_max_payload_deny.is_set || is_set(ppp_max_payload_deny.operation)) leaf_name_data.push_back(ppp_max_payload_deny.get_name_leafdata());
    if (service_selection_disable.is_set || is_set(service_selection_disable.operation)) leaf_name_data.push_back(service_selection_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "padr")
    {
        if(padr != nullptr)
        {
            children["padr"] = padr;
        }
        else
        {
            padr = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr>();
            padr->parent = this;
            children["padr"] = padr;
        }
        return children.at("padr");
    }

    if(child_yang_name == "ppp-max-payload")
    {
        if(ppp_max_payload != nullptr)
        {
            children["ppp-max-payload"] = ppp_max_payload;
        }
        else
        {
            ppp_max_payload = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload>();
            ppp_max_payload->parent = this;
            children["ppp-max-payload"] = ppp_max_payload;
        }
        return children.at("ppp-max-payload");
    }

    if(child_yang_name == "service-name-configureds")
    {
        if(service_name_configureds != nullptr)
        {
            children["service-name-configureds"] = service_name_configureds;
        }
        else
        {
            service_name_configureds = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds>();
            service_name_configureds->parent = this;
            children["service-name-configureds"] = service_name_configureds;
        }
        return children.at("service-name-configureds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::get_children()
{
    if(children.find("padr") == children.end())
    {
        if(padr != nullptr)
        {
            children["padr"] = padr;
        }
    }

    if(children.find("ppp-max-payload") == children.end())
    {
        if(ppp_max_payload != nullptr)
        {
            children["ppp-max-payload"] = ppp_max_payload;
        }
    }

    if(children.find("service-name-configureds") == children.end())
    {
        if(service_name_configureds != nullptr)
        {
            children["service-name-configureds"] = service_name_configureds;
        }
    }

    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ac-name")
    {
        ac_name = value;
    }
    if(value_path == "ppp-max-payload-deny")
    {
        ppp_max_payload_deny = value;
    }
    if(value_path == "service-selection-disable")
    {
        service_selection_disable = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr::Padr()
    :
    invalid_payload_allow{YType::empty, "invalid-payload-allow"},
    session_unique_relay_session_id{YType::empty, "session-unique-relay-session-id"}
{
    yang_name = "padr"; yang_parent_name = "tag";
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr::~Padr()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr::has_data() const
{
    return invalid_payload_allow.is_set
	|| session_unique_relay_session_id.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr::has_operation() const
{
    return is_set(operation)
	|| is_set(invalid_payload_allow.operation)
	|| is_set(session_unique_relay_session_id.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padr";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Padr' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (invalid_payload_allow.is_set || is_set(invalid_payload_allow.operation)) leaf_name_data.push_back(invalid_payload_allow.get_name_leafdata());
    if (session_unique_relay_session_id.is_set || is_set(session_unique_relay_session_id.operation)) leaf_name_data.push_back(session_unique_relay_session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "invalid-payload-allow")
    {
        invalid_payload_allow = value;
    }
    if(value_path == "session-unique-relay-session-id")
    {
        session_unique_relay_session_id = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigureds()
{
    yang_name = "service-name-configureds"; yang_parent_name = "tag";
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
    return is_set(operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-name-configureds";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceNameConfigureds' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service-name-configured")
    {
        for(auto const & c : service_name_configured)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigured>();
        c->parent = this;
        service_name_configured.push_back(std::move(c));
        children[segment_path] = service_name_configured.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::get_children()
{
    for (auto const & c : service_name_configured)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::set_value(const std::string & value_path, std::string value)
{
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigured::ServiceNameConfigured()
    :
    name{YType::str, "name"}
{
    yang_name = "service-name-configured"; yang_parent_name = "service-name-configureds";
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
    return is_set(operation)
	|| is_set(name.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigured::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-name-configured" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigured::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceNameConfigured' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigured::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigured::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigured::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload::PppMaxPayload()
    :
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
{
    yang_name = "ppp-max-payload"; yang_parent_name = "tag";
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload::~PppMaxPayload()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation)
	|| is_set(min.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp-max-payload";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PppMaxPayload' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.operation)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
    if(value_path == "min")
    {
        min = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::Sessions()
    :
    access_interface_limit(nullptr) // presence node
	,circuit_id_and_remote_id_limit(nullptr) // presence node
	,circuit_id_and_remote_id_throttle(nullptr) // presence node
	,circuit_id_limit(nullptr) // presence node
	,circuit_id_throttle(nullptr) // presence node
	,inner_vlan_limit(nullptr) // presence node
	,inner_vlan_throttle(nullptr) // presence node
	,mac_access_interface_limit(nullptr) // presence node
	,mac_access_interface_throttle(nullptr) // presence node
	,mac_iwf_access_interface_limit(nullptr) // presence node
	,mac_iwf_access_interface_throttle(nullptr) // presence node
	,mac_iwf_limit(nullptr) // presence node
	,mac_limit(nullptr) // presence node
	,mac_throttle(nullptr) // presence node
	,max_limit(nullptr) // presence node
	,outer_vlan_limit(nullptr) // presence node
	,outer_vlan_throttle(nullptr) // presence node
	,remote_id_limit(nullptr) // presence node
	,remote_id_throttle(nullptr) // presence node
	,vlan_limit(nullptr) // presence node
	,vlan_throttle(nullptr) // presence node
{
    yang_name = "sessions"; yang_parent_name = "pppoe-bba-group";
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::~Sessions()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::has_data() const
{
    return (access_interface_limit !=  nullptr && access_interface_limit->has_data())
	|| (circuit_id_and_remote_id_limit !=  nullptr && circuit_id_and_remote_id_limit->has_data())
	|| (circuit_id_and_remote_id_throttle !=  nullptr && circuit_id_and_remote_id_throttle->has_data())
	|| (circuit_id_limit !=  nullptr && circuit_id_limit->has_data())
	|| (circuit_id_throttle !=  nullptr && circuit_id_throttle->has_data())
	|| (inner_vlan_limit !=  nullptr && inner_vlan_limit->has_data())
	|| (inner_vlan_throttle !=  nullptr && inner_vlan_throttle->has_data())
	|| (mac_access_interface_limit !=  nullptr && mac_access_interface_limit->has_data())
	|| (mac_access_interface_throttle !=  nullptr && mac_access_interface_throttle->has_data())
	|| (mac_iwf_access_interface_limit !=  nullptr && mac_iwf_access_interface_limit->has_data())
	|| (mac_iwf_access_interface_throttle !=  nullptr && mac_iwf_access_interface_throttle->has_data())
	|| (mac_iwf_limit !=  nullptr && mac_iwf_limit->has_data())
	|| (mac_limit !=  nullptr && mac_limit->has_data())
	|| (mac_throttle !=  nullptr && mac_throttle->has_data())
	|| (max_limit !=  nullptr && max_limit->has_data())
	|| (outer_vlan_limit !=  nullptr && outer_vlan_limit->has_data())
	|| (outer_vlan_throttle !=  nullptr && outer_vlan_throttle->has_data())
	|| (remote_id_limit !=  nullptr && remote_id_limit->has_data())
	|| (remote_id_throttle !=  nullptr && remote_id_throttle->has_data())
	|| (vlan_limit !=  nullptr && vlan_limit->has_data())
	|| (vlan_throttle !=  nullptr && vlan_throttle->has_data());
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::has_operation() const
{
    return is_set(operation)
	|| (access_interface_limit !=  nullptr && access_interface_limit->has_operation())
	|| (circuit_id_and_remote_id_limit !=  nullptr && circuit_id_and_remote_id_limit->has_operation())
	|| (circuit_id_and_remote_id_throttle !=  nullptr && circuit_id_and_remote_id_throttle->has_operation())
	|| (circuit_id_limit !=  nullptr && circuit_id_limit->has_operation())
	|| (circuit_id_throttle !=  nullptr && circuit_id_throttle->has_operation())
	|| (inner_vlan_limit !=  nullptr && inner_vlan_limit->has_operation())
	|| (inner_vlan_throttle !=  nullptr && inner_vlan_throttle->has_operation())
	|| (mac_access_interface_limit !=  nullptr && mac_access_interface_limit->has_operation())
	|| (mac_access_interface_throttle !=  nullptr && mac_access_interface_throttle->has_operation())
	|| (mac_iwf_access_interface_limit !=  nullptr && mac_iwf_access_interface_limit->has_operation())
	|| (mac_iwf_access_interface_throttle !=  nullptr && mac_iwf_access_interface_throttle->has_operation())
	|| (mac_iwf_limit !=  nullptr && mac_iwf_limit->has_operation())
	|| (mac_limit !=  nullptr && mac_limit->has_operation())
	|| (mac_throttle !=  nullptr && mac_throttle->has_operation())
	|| (max_limit !=  nullptr && max_limit->has_operation())
	|| (outer_vlan_limit !=  nullptr && outer_vlan_limit->has_operation())
	|| (outer_vlan_throttle !=  nullptr && outer_vlan_throttle->has_operation())
	|| (remote_id_limit !=  nullptr && remote_id_limit->has_operation())
	|| (remote_id_throttle !=  nullptr && remote_id_throttle->has_operation())
	|| (vlan_limit !=  nullptr && vlan_limit->has_operation())
	|| (vlan_throttle !=  nullptr && vlan_throttle->has_operation());
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sessions' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "access-interface-limit")
    {
        if(access_interface_limit != nullptr)
        {
            children["access-interface-limit"] = access_interface_limit;
        }
        else
        {
            access_interface_limit = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::AccessInterfaceLimit>();
            access_interface_limit->parent = this;
            children["access-interface-limit"] = access_interface_limit;
        }
        return children.at("access-interface-limit");
    }

    if(child_yang_name == "circuit-id-and-remote-id-limit")
    {
        if(circuit_id_and_remote_id_limit != nullptr)
        {
            children["circuit-id-and-remote-id-limit"] = circuit_id_and_remote_id_limit;
        }
        else
        {
            circuit_id_and_remote_id_limit = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdLimit>();
            circuit_id_and_remote_id_limit->parent = this;
            children["circuit-id-and-remote-id-limit"] = circuit_id_and_remote_id_limit;
        }
        return children.at("circuit-id-and-remote-id-limit");
    }

    if(child_yang_name == "circuit-id-and-remote-id-throttle")
    {
        if(circuit_id_and_remote_id_throttle != nullptr)
        {
            children["circuit-id-and-remote-id-throttle"] = circuit_id_and_remote_id_throttle;
        }
        else
        {
            circuit_id_and_remote_id_throttle = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle>();
            circuit_id_and_remote_id_throttle->parent = this;
            children["circuit-id-and-remote-id-throttle"] = circuit_id_and_remote_id_throttle;
        }
        return children.at("circuit-id-and-remote-id-throttle");
    }

    if(child_yang_name == "circuit-id-limit")
    {
        if(circuit_id_limit != nullptr)
        {
            children["circuit-id-limit"] = circuit_id_limit;
        }
        else
        {
            circuit_id_limit = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdLimit>();
            circuit_id_limit->parent = this;
            children["circuit-id-limit"] = circuit_id_limit;
        }
        return children.at("circuit-id-limit");
    }

    if(child_yang_name == "circuit-id-throttle")
    {
        if(circuit_id_throttle != nullptr)
        {
            children["circuit-id-throttle"] = circuit_id_throttle;
        }
        else
        {
            circuit_id_throttle = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle>();
            circuit_id_throttle->parent = this;
            children["circuit-id-throttle"] = circuit_id_throttle;
        }
        return children.at("circuit-id-throttle");
    }

    if(child_yang_name == "inner-vlan-limit")
    {
        if(inner_vlan_limit != nullptr)
        {
            children["inner-vlan-limit"] = inner_vlan_limit;
        }
        else
        {
            inner_vlan_limit = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanLimit>();
            inner_vlan_limit->parent = this;
            children["inner-vlan-limit"] = inner_vlan_limit;
        }
        return children.at("inner-vlan-limit");
    }

    if(child_yang_name == "inner-vlan-throttle")
    {
        if(inner_vlan_throttle != nullptr)
        {
            children["inner-vlan-throttle"] = inner_vlan_throttle;
        }
        else
        {
            inner_vlan_throttle = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle>();
            inner_vlan_throttle->parent = this;
            children["inner-vlan-throttle"] = inner_vlan_throttle;
        }
        return children.at("inner-vlan-throttle");
    }

    if(child_yang_name == "mac-access-interface-limit")
    {
        if(mac_access_interface_limit != nullptr)
        {
            children["mac-access-interface-limit"] = mac_access_interface_limit;
        }
        else
        {
            mac_access_interface_limit = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceLimit>();
            mac_access_interface_limit->parent = this;
            children["mac-access-interface-limit"] = mac_access_interface_limit;
        }
        return children.at("mac-access-interface-limit");
    }

    if(child_yang_name == "mac-access-interface-throttle")
    {
        if(mac_access_interface_throttle != nullptr)
        {
            children["mac-access-interface-throttle"] = mac_access_interface_throttle;
        }
        else
        {
            mac_access_interface_throttle = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle>();
            mac_access_interface_throttle->parent = this;
            children["mac-access-interface-throttle"] = mac_access_interface_throttle;
        }
        return children.at("mac-access-interface-throttle");
    }

    if(child_yang_name == "mac-iwf-access-interface-limit")
    {
        if(mac_iwf_access_interface_limit != nullptr)
        {
            children["mac-iwf-access-interface-limit"] = mac_iwf_access_interface_limit;
        }
        else
        {
            mac_iwf_access_interface_limit = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceLimit>();
            mac_iwf_access_interface_limit->parent = this;
            children["mac-iwf-access-interface-limit"] = mac_iwf_access_interface_limit;
        }
        return children.at("mac-iwf-access-interface-limit");
    }

    if(child_yang_name == "mac-iwf-access-interface-throttle")
    {
        if(mac_iwf_access_interface_throttle != nullptr)
        {
            children["mac-iwf-access-interface-throttle"] = mac_iwf_access_interface_throttle;
        }
        else
        {
            mac_iwf_access_interface_throttle = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle>();
            mac_iwf_access_interface_throttle->parent = this;
            children["mac-iwf-access-interface-throttle"] = mac_iwf_access_interface_throttle;
        }
        return children.at("mac-iwf-access-interface-throttle");
    }

    if(child_yang_name == "mac-iwf-limit")
    {
        if(mac_iwf_limit != nullptr)
        {
            children["mac-iwf-limit"] = mac_iwf_limit;
        }
        else
        {
            mac_iwf_limit = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfLimit>();
            mac_iwf_limit->parent = this;
            children["mac-iwf-limit"] = mac_iwf_limit;
        }
        return children.at("mac-iwf-limit");
    }

    if(child_yang_name == "mac-limit")
    {
        if(mac_limit != nullptr)
        {
            children["mac-limit"] = mac_limit;
        }
        else
        {
            mac_limit = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacLimit>();
            mac_limit->parent = this;
            children["mac-limit"] = mac_limit;
        }
        return children.at("mac-limit");
    }

    if(child_yang_name == "mac-throttle")
    {
        if(mac_throttle != nullptr)
        {
            children["mac-throttle"] = mac_throttle;
        }
        else
        {
            mac_throttle = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle>();
            mac_throttle->parent = this;
            children["mac-throttle"] = mac_throttle;
        }
        return children.at("mac-throttle");
    }

    if(child_yang_name == "max-limit")
    {
        if(max_limit != nullptr)
        {
            children["max-limit"] = max_limit;
        }
        else
        {
            max_limit = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MaxLimit>();
            max_limit->parent = this;
            children["max-limit"] = max_limit;
        }
        return children.at("max-limit");
    }

    if(child_yang_name == "outer-vlan-limit")
    {
        if(outer_vlan_limit != nullptr)
        {
            children["outer-vlan-limit"] = outer_vlan_limit;
        }
        else
        {
            outer_vlan_limit = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanLimit>();
            outer_vlan_limit->parent = this;
            children["outer-vlan-limit"] = outer_vlan_limit;
        }
        return children.at("outer-vlan-limit");
    }

    if(child_yang_name == "outer-vlan-throttle")
    {
        if(outer_vlan_throttle != nullptr)
        {
            children["outer-vlan-throttle"] = outer_vlan_throttle;
        }
        else
        {
            outer_vlan_throttle = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle>();
            outer_vlan_throttle->parent = this;
            children["outer-vlan-throttle"] = outer_vlan_throttle;
        }
        return children.at("outer-vlan-throttle");
    }

    if(child_yang_name == "remote-id-limit")
    {
        if(remote_id_limit != nullptr)
        {
            children["remote-id-limit"] = remote_id_limit;
        }
        else
        {
            remote_id_limit = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdLimit>();
            remote_id_limit->parent = this;
            children["remote-id-limit"] = remote_id_limit;
        }
        return children.at("remote-id-limit");
    }

    if(child_yang_name == "remote-id-throttle")
    {
        if(remote_id_throttle != nullptr)
        {
            children["remote-id-throttle"] = remote_id_throttle;
        }
        else
        {
            remote_id_throttle = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle>();
            remote_id_throttle->parent = this;
            children["remote-id-throttle"] = remote_id_throttle;
        }
        return children.at("remote-id-throttle");
    }

    if(child_yang_name == "vlan-limit")
    {
        if(vlan_limit != nullptr)
        {
            children["vlan-limit"] = vlan_limit;
        }
        else
        {
            vlan_limit = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanLimit>();
            vlan_limit->parent = this;
            children["vlan-limit"] = vlan_limit;
        }
        return children.at("vlan-limit");
    }

    if(child_yang_name == "vlan-throttle")
    {
        if(vlan_throttle != nullptr)
        {
            children["vlan-throttle"] = vlan_throttle;
        }
        else
        {
            vlan_throttle = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle>();
            vlan_throttle->parent = this;
            children["vlan-throttle"] = vlan_throttle;
        }
        return children.at("vlan-throttle");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::get_children()
{
    if(children.find("access-interface-limit") == children.end())
    {
        if(access_interface_limit != nullptr)
        {
            children["access-interface-limit"] = access_interface_limit;
        }
    }

    if(children.find("circuit-id-and-remote-id-limit") == children.end())
    {
        if(circuit_id_and_remote_id_limit != nullptr)
        {
            children["circuit-id-and-remote-id-limit"] = circuit_id_and_remote_id_limit;
        }
    }

    if(children.find("circuit-id-and-remote-id-throttle") == children.end())
    {
        if(circuit_id_and_remote_id_throttle != nullptr)
        {
            children["circuit-id-and-remote-id-throttle"] = circuit_id_and_remote_id_throttle;
        }
    }

    if(children.find("circuit-id-limit") == children.end())
    {
        if(circuit_id_limit != nullptr)
        {
            children["circuit-id-limit"] = circuit_id_limit;
        }
    }

    if(children.find("circuit-id-throttle") == children.end())
    {
        if(circuit_id_throttle != nullptr)
        {
            children["circuit-id-throttle"] = circuit_id_throttle;
        }
    }

    if(children.find("inner-vlan-limit") == children.end())
    {
        if(inner_vlan_limit != nullptr)
        {
            children["inner-vlan-limit"] = inner_vlan_limit;
        }
    }

    if(children.find("inner-vlan-throttle") == children.end())
    {
        if(inner_vlan_throttle != nullptr)
        {
            children["inner-vlan-throttle"] = inner_vlan_throttle;
        }
    }

    if(children.find("mac-access-interface-limit") == children.end())
    {
        if(mac_access_interface_limit != nullptr)
        {
            children["mac-access-interface-limit"] = mac_access_interface_limit;
        }
    }

    if(children.find("mac-access-interface-throttle") == children.end())
    {
        if(mac_access_interface_throttle != nullptr)
        {
            children["mac-access-interface-throttle"] = mac_access_interface_throttle;
        }
    }

    if(children.find("mac-iwf-access-interface-limit") == children.end())
    {
        if(mac_iwf_access_interface_limit != nullptr)
        {
            children["mac-iwf-access-interface-limit"] = mac_iwf_access_interface_limit;
        }
    }

    if(children.find("mac-iwf-access-interface-throttle") == children.end())
    {
        if(mac_iwf_access_interface_throttle != nullptr)
        {
            children["mac-iwf-access-interface-throttle"] = mac_iwf_access_interface_throttle;
        }
    }

    if(children.find("mac-iwf-limit") == children.end())
    {
        if(mac_iwf_limit != nullptr)
        {
            children["mac-iwf-limit"] = mac_iwf_limit;
        }
    }

    if(children.find("mac-limit") == children.end())
    {
        if(mac_limit != nullptr)
        {
            children["mac-limit"] = mac_limit;
        }
    }

    if(children.find("mac-throttle") == children.end())
    {
        if(mac_throttle != nullptr)
        {
            children["mac-throttle"] = mac_throttle;
        }
    }

    if(children.find("max-limit") == children.end())
    {
        if(max_limit != nullptr)
        {
            children["max-limit"] = max_limit;
        }
    }

    if(children.find("outer-vlan-limit") == children.end())
    {
        if(outer_vlan_limit != nullptr)
        {
            children["outer-vlan-limit"] = outer_vlan_limit;
        }
    }

    if(children.find("outer-vlan-throttle") == children.end())
    {
        if(outer_vlan_throttle != nullptr)
        {
            children["outer-vlan-throttle"] = outer_vlan_throttle;
        }
    }

    if(children.find("remote-id-limit") == children.end())
    {
        if(remote_id_limit != nullptr)
        {
            children["remote-id-limit"] = remote_id_limit;
        }
    }

    if(children.find("remote-id-throttle") == children.end())
    {
        if(remote_id_throttle != nullptr)
        {
            children["remote-id-throttle"] = remote_id_throttle;
        }
    }

    if(children.find("vlan-limit") == children.end())
    {
        if(vlan_limit != nullptr)
        {
            children["vlan-limit"] = vlan_limit;
        }
    }

    if(children.find("vlan-throttle") == children.end())
    {
        if(vlan_throttle != nullptr)
        {
            children["vlan-throttle"] = vlan_throttle;
        }
    }

    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::set_value(const std::string & value_path, std::string value)
{
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle::VlanThrottle()
    :
    blocking_period{YType::uint32, "blocking-period"},
    request_period{YType::uint32, "request-period"},
    throttle{YType::uint32, "throttle"}
{
    yang_name = "vlan-throttle"; yang_parent_name = "sessions";
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle::~VlanThrottle()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle::has_data() const
{
    return blocking_period.is_set
	|| request_period.is_set
	|| throttle.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle::has_operation() const
{
    return is_set(operation)
	|| is_set(blocking_period.operation)
	|| is_set(request_period.operation)
	|| is_set(throttle.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-throttle";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanThrottle' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blocking_period.is_set || is_set(blocking_period.operation)) leaf_name_data.push_back(blocking_period.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.operation)) leaf_name_data.push_back(request_period.get_name_leafdata());
    if (throttle.is_set || is_set(throttle.operation)) leaf_name_data.push_back(throttle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "blocking-period")
    {
        blocking_period = value;
    }
    if(value_path == "request-period")
    {
        request_period = value;
    }
    if(value_path == "throttle")
    {
        throttle = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle::InnerVlanThrottle()
    :
    blocking_period{YType::uint32, "blocking-period"},
    request_period{YType::uint32, "request-period"},
    throttle{YType::uint32, "throttle"}
{
    yang_name = "inner-vlan-throttle"; yang_parent_name = "sessions";
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle::~InnerVlanThrottle()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle::has_data() const
{
    return blocking_period.is_set
	|| request_period.is_set
	|| throttle.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle::has_operation() const
{
    return is_set(operation)
	|| is_set(blocking_period.operation)
	|| is_set(request_period.operation)
	|| is_set(throttle.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inner-vlan-throttle";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InnerVlanThrottle' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blocking_period.is_set || is_set(blocking_period.operation)) leaf_name_data.push_back(blocking_period.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.operation)) leaf_name_data.push_back(request_period.get_name_leafdata());
    if (throttle.is_set || is_set(throttle.operation)) leaf_name_data.push_back(throttle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "blocking-period")
    {
        blocking_period = value;
    }
    if(value_path == "request-period")
    {
        request_period = value;
    }
    if(value_path == "throttle")
    {
        throttle = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdLimit::RemoteIdLimit()
    :
    limit{YType::uint32, "limit"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "remote-id-limit"; yang_parent_name = "sessions";
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
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(threshold.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id-limit";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteIdLimit' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdLimit::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle::MacIwfAccessInterfaceThrottle()
    :
    blocking_period{YType::uint32, "blocking-period"},
    request_period{YType::uint32, "request-period"},
    throttle{YType::uint32, "throttle"}
{
    yang_name = "mac-iwf-access-interface-throttle"; yang_parent_name = "sessions";
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle::~MacIwfAccessInterfaceThrottle()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle::has_data() const
{
    return blocking_period.is_set
	|| request_period.is_set
	|| throttle.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle::has_operation() const
{
    return is_set(operation)
	|| is_set(blocking_period.operation)
	|| is_set(request_period.operation)
	|| is_set(throttle.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-iwf-access-interface-throttle";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacIwfAccessInterfaceThrottle' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blocking_period.is_set || is_set(blocking_period.operation)) leaf_name_data.push_back(blocking_period.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.operation)) leaf_name_data.push_back(request_period.get_name_leafdata());
    if (throttle.is_set || is_set(throttle.operation)) leaf_name_data.push_back(throttle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "blocking-period")
    {
        blocking_period = value;
    }
    if(value_path == "request-period")
    {
        request_period = value;
    }
    if(value_path == "throttle")
    {
        throttle = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::AccessInterfaceLimit::AccessInterfaceLimit()
    :
    limit{YType::uint32, "limit"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "access-interface-limit"; yang_parent_name = "sessions";
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
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(threshold.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::AccessInterfaceLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface-limit";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::AccessInterfaceLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessInterfaceLimit' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::AccessInterfaceLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::AccessInterfaceLimit::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::AccessInterfaceLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle::MacAccessInterfaceThrottle()
    :
    blocking_period{YType::uint32, "blocking-period"},
    request_period{YType::uint32, "request-period"},
    throttle{YType::uint32, "throttle"}
{
    yang_name = "mac-access-interface-throttle"; yang_parent_name = "sessions";
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle::~MacAccessInterfaceThrottle()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle::has_data() const
{
    return blocking_period.is_set
	|| request_period.is_set
	|| throttle.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle::has_operation() const
{
    return is_set(operation)
	|| is_set(blocking_period.operation)
	|| is_set(request_period.operation)
	|| is_set(throttle.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-access-interface-throttle";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAccessInterfaceThrottle' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blocking_period.is_set || is_set(blocking_period.operation)) leaf_name_data.push_back(blocking_period.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.operation)) leaf_name_data.push_back(request_period.get_name_leafdata());
    if (throttle.is_set || is_set(throttle.operation)) leaf_name_data.push_back(throttle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "blocking-period")
    {
        blocking_period = value;
    }
    if(value_path == "request-period")
    {
        request_period = value;
    }
    if(value_path == "throttle")
    {
        throttle = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanLimit::OuterVlanLimit()
    :
    limit{YType::uint32, "limit"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "outer-vlan-limit"; yang_parent_name = "sessions";
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
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(threshold.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outer-vlan-limit";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OuterVlanLimit' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanLimit::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle::CircuitIdThrottle()
    :
    blocking_period{YType::uint32, "blocking-period"},
    request_period{YType::uint32, "request-period"},
    throttle{YType::uint32, "throttle"}
{
    yang_name = "circuit-id-throttle"; yang_parent_name = "sessions";
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle::~CircuitIdThrottle()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle::has_data() const
{
    return blocking_period.is_set
	|| request_period.is_set
	|| throttle.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle::has_operation() const
{
    return is_set(operation)
	|| is_set(blocking_period.operation)
	|| is_set(request_period.operation)
	|| is_set(throttle.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id-throttle";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CircuitIdThrottle' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blocking_period.is_set || is_set(blocking_period.operation)) leaf_name_data.push_back(blocking_period.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.operation)) leaf_name_data.push_back(request_period.get_name_leafdata());
    if (throttle.is_set || is_set(throttle.operation)) leaf_name_data.push_back(throttle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "blocking-period")
    {
        blocking_period = value;
    }
    if(value_path == "request-period")
    {
        request_period = value;
    }
    if(value_path == "throttle")
    {
        throttle = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacLimit::MacLimit()
    :
    limit{YType::uint32, "limit"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "mac-limit"; yang_parent_name = "sessions";
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
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(threshold.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-limit";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacLimit' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacLimit::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdLimit::CircuitIdLimit()
    :
    limit{YType::uint32, "limit"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "circuit-id-limit"; yang_parent_name = "sessions";
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
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(threshold.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id-limit";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CircuitIdLimit' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdLimit::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfLimit::MacIwfLimit()
    :
    limit{YType::uint32, "limit"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "mac-iwf-limit"; yang_parent_name = "sessions";
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
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(threshold.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-iwf-limit";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacIwfLimit' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfLimit::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceLimit::MacIwfAccessInterfaceLimit()
    :
    limit{YType::uint32, "limit"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "mac-iwf-access-interface-limit"; yang_parent_name = "sessions";
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
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(threshold.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-iwf-access-interface-limit";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacIwfAccessInterfaceLimit' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceLimit::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanLimit::InnerVlanLimit()
    :
    limit{YType::uint32, "limit"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "inner-vlan-limit"; yang_parent_name = "sessions";
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
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(threshold.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inner-vlan-limit";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InnerVlanLimit' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanLimit::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle::OuterVlanThrottle()
    :
    blocking_period{YType::uint32, "blocking-period"},
    request_period{YType::uint32, "request-period"},
    throttle{YType::uint32, "throttle"}
{
    yang_name = "outer-vlan-throttle"; yang_parent_name = "sessions";
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle::~OuterVlanThrottle()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle::has_data() const
{
    return blocking_period.is_set
	|| request_period.is_set
	|| throttle.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle::has_operation() const
{
    return is_set(operation)
	|| is_set(blocking_period.operation)
	|| is_set(request_period.operation)
	|| is_set(throttle.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outer-vlan-throttle";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OuterVlanThrottle' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blocking_period.is_set || is_set(blocking_period.operation)) leaf_name_data.push_back(blocking_period.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.operation)) leaf_name_data.push_back(request_period.get_name_leafdata());
    if (throttle.is_set || is_set(throttle.operation)) leaf_name_data.push_back(throttle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "blocking-period")
    {
        blocking_period = value;
    }
    if(value_path == "request-period")
    {
        request_period = value;
    }
    if(value_path == "throttle")
    {
        throttle = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle::MacThrottle()
    :
    blocking_period{YType::uint32, "blocking-period"},
    request_period{YType::uint32, "request-period"},
    throttle{YType::uint32, "throttle"}
{
    yang_name = "mac-throttle"; yang_parent_name = "sessions";
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle::~MacThrottle()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle::has_data() const
{
    return blocking_period.is_set
	|| request_period.is_set
	|| throttle.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle::has_operation() const
{
    return is_set(operation)
	|| is_set(blocking_period.operation)
	|| is_set(request_period.operation)
	|| is_set(throttle.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-throttle";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacThrottle' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blocking_period.is_set || is_set(blocking_period.operation)) leaf_name_data.push_back(blocking_period.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.operation)) leaf_name_data.push_back(request_period.get_name_leafdata());
    if (throttle.is_set || is_set(throttle.operation)) leaf_name_data.push_back(throttle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "blocking-period")
    {
        blocking_period = value;
    }
    if(value_path == "request-period")
    {
        request_period = value;
    }
    if(value_path == "throttle")
    {
        throttle = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdLimit::CircuitIdAndRemoteIdLimit()
    :
    limit{YType::uint32, "limit"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "circuit-id-and-remote-id-limit"; yang_parent_name = "sessions";
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
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(threshold.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id-and-remote-id-limit";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CircuitIdAndRemoteIdLimit' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdLimit::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanLimit::VlanLimit()
    :
    limit{YType::uint32, "limit"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "vlan-limit"; yang_parent_name = "sessions";
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
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(threshold.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-limit";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanLimit' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanLimit::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceLimit::MacAccessInterfaceLimit()
    :
    limit{YType::uint32, "limit"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "mac-access-interface-limit"; yang_parent_name = "sessions";
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
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(threshold.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-access-interface-limit";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAccessInterfaceLimit' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceLimit::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle::RemoteIdThrottle()
    :
    blocking_period{YType::uint32, "blocking-period"},
    request_period{YType::uint32, "request-period"},
    throttle{YType::uint32, "throttle"}
{
    yang_name = "remote-id-throttle"; yang_parent_name = "sessions";
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle::~RemoteIdThrottle()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle::has_data() const
{
    return blocking_period.is_set
	|| request_period.is_set
	|| throttle.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle::has_operation() const
{
    return is_set(operation)
	|| is_set(blocking_period.operation)
	|| is_set(request_period.operation)
	|| is_set(throttle.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id-throttle";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteIdThrottle' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blocking_period.is_set || is_set(blocking_period.operation)) leaf_name_data.push_back(blocking_period.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.operation)) leaf_name_data.push_back(request_period.get_name_leafdata());
    if (throttle.is_set || is_set(throttle.operation)) leaf_name_data.push_back(throttle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "blocking-period")
    {
        blocking_period = value;
    }
    if(value_path == "request-period")
    {
        request_period = value;
    }
    if(value_path == "throttle")
    {
        throttle = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MaxLimit::MaxLimit()
    :
    limit{YType::uint32, "limit"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "max-limit"; yang_parent_name = "sessions";
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
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(threshold.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MaxLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-limit";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MaxLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxLimit' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MaxLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MaxLimit::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MaxLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle::CircuitIdAndRemoteIdThrottle()
    :
    blocking_period{YType::uint32, "blocking-period"},
    request_period{YType::uint32, "request-period"},
    throttle{YType::uint32, "throttle"}
{
    yang_name = "circuit-id-and-remote-id-throttle"; yang_parent_name = "sessions";
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle::~CircuitIdAndRemoteIdThrottle()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle::has_data() const
{
    return blocking_period.is_set
	|| request_period.is_set
	|| throttle.is_set;
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle::has_operation() const
{
    return is_set(operation)
	|| is_set(blocking_period.operation)
	|| is_set(request_period.operation)
	|| is_set(throttle.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id-and-remote-id-throttle";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CircuitIdAndRemoteIdThrottle' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blocking_period.is_set || is_set(blocking_period.operation)) leaf_name_data.push_back(blocking_period.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.operation)) leaf_name_data.push_back(request_period.get_name_leafdata());
    if (throttle.is_set || is_set(throttle.operation)) leaf_name_data.push_back(throttle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "blocking-period")
    {
        blocking_period = value;
    }
    if(value_path == "request-period")
    {
        request_period = value;
    }
    if(value_path == "throttle")
    {
        throttle = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets::ControlPackets()
    :
    priority{YType::uint32, "priority"}
{
    yang_name = "control-packets"; yang_parent_name = "pppoe-bba-group";
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
    return is_set(operation)
	|| is_set(priority.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control-packets";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ControlPackets' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority")
    {
        priority = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::PaDoDelay()
    :
    circuit_id{YType::uint32, "circuit-id"},
    default_{YType::uint32, "default"},
    remote_id{YType::uint32, "remote-id"}
    	,
    circuit_id_strings(std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings>())
	,circuit_id_substrings(std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings>())
	,remote_id_strings(std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings>())
	,remote_id_substrings(std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings>())
	,service_name_strings(std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings>())
	,service_name_substrings(std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings>())
{
    circuit_id_strings->parent = this;
    children["circuit-id-strings"] = circuit_id_strings;

    circuit_id_substrings->parent = this;
    children["circuit-id-substrings"] = circuit_id_substrings;

    remote_id_strings->parent = this;
    children["remote-id-strings"] = remote_id_strings;

    remote_id_substrings->parent = this;
    children["remote-id-substrings"] = remote_id_substrings;

    service_name_strings->parent = this;
    children["service-name-strings"] = service_name_strings;

    service_name_substrings->parent = this;
    children["service-name-substrings"] = service_name_substrings;

    yang_name = "pa-do-delay"; yang_parent_name = "pppoe-bba-group";
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::~PaDoDelay()
{
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::has_data() const
{
    return circuit_id.is_set
	|| default_.is_set
	|| remote_id.is_set
	|| (circuit_id_strings !=  nullptr && circuit_id_strings->has_data())
	|| (circuit_id_substrings !=  nullptr && circuit_id_substrings->has_data())
	|| (remote_id_strings !=  nullptr && remote_id_strings->has_data())
	|| (remote_id_substrings !=  nullptr && remote_id_substrings->has_data())
	|| (service_name_strings !=  nullptr && service_name_strings->has_data())
	|| (service_name_substrings !=  nullptr && service_name_substrings->has_data());
}

bool PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::has_operation() const
{
    return is_set(operation)
	|| is_set(circuit_id.operation)
	|| is_set(default_.operation)
	|| is_set(remote_id.operation)
	|| (circuit_id_strings !=  nullptr && circuit_id_strings->has_operation())
	|| (circuit_id_substrings !=  nullptr && circuit_id_substrings->has_operation())
	|| (remote_id_strings !=  nullptr && remote_id_strings->has_operation())
	|| (remote_id_substrings !=  nullptr && remote_id_substrings->has_operation())
	|| (service_name_strings !=  nullptr && service_name_strings->has_operation())
	|| (service_name_substrings !=  nullptr && service_name_substrings->has_operation());
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pa-do-delay";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PaDoDelay' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (circuit_id.is_set || is_set(circuit_id.operation)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.operation)) leaf_name_data.push_back(remote_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "circuit-id-strings")
    {
        if(circuit_id_strings != nullptr)
        {
            children["circuit-id-strings"] = circuit_id_strings;
        }
        else
        {
            circuit_id_strings = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings>();
            circuit_id_strings->parent = this;
            children["circuit-id-strings"] = circuit_id_strings;
        }
        return children.at("circuit-id-strings");
    }

    if(child_yang_name == "circuit-id-substrings")
    {
        if(circuit_id_substrings != nullptr)
        {
            children["circuit-id-substrings"] = circuit_id_substrings;
        }
        else
        {
            circuit_id_substrings = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings>();
            circuit_id_substrings->parent = this;
            children["circuit-id-substrings"] = circuit_id_substrings;
        }
        return children.at("circuit-id-substrings");
    }

    if(child_yang_name == "remote-id-strings")
    {
        if(remote_id_strings != nullptr)
        {
            children["remote-id-strings"] = remote_id_strings;
        }
        else
        {
            remote_id_strings = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings>();
            remote_id_strings->parent = this;
            children["remote-id-strings"] = remote_id_strings;
        }
        return children.at("remote-id-strings");
    }

    if(child_yang_name == "remote-id-substrings")
    {
        if(remote_id_substrings != nullptr)
        {
            children["remote-id-substrings"] = remote_id_substrings;
        }
        else
        {
            remote_id_substrings = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings>();
            remote_id_substrings->parent = this;
            children["remote-id-substrings"] = remote_id_substrings;
        }
        return children.at("remote-id-substrings");
    }

    if(child_yang_name == "service-name-strings")
    {
        if(service_name_strings != nullptr)
        {
            children["service-name-strings"] = service_name_strings;
        }
        else
        {
            service_name_strings = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings>();
            service_name_strings->parent = this;
            children["service-name-strings"] = service_name_strings;
        }
        return children.at("service-name-strings");
    }

    if(child_yang_name == "service-name-substrings")
    {
        if(service_name_substrings != nullptr)
        {
            children["service-name-substrings"] = service_name_substrings;
        }
        else
        {
            service_name_substrings = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings>();
            service_name_substrings->parent = this;
            children["service-name-substrings"] = service_name_substrings;
        }
        return children.at("service-name-substrings");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::get_children()
{
    if(children.find("circuit-id-strings") == children.end())
    {
        if(circuit_id_strings != nullptr)
        {
            children["circuit-id-strings"] = circuit_id_strings;
        }
    }

    if(children.find("circuit-id-substrings") == children.end())
    {
        if(circuit_id_substrings != nullptr)
        {
            children["circuit-id-substrings"] = circuit_id_substrings;
        }
    }

    if(children.find("remote-id-strings") == children.end())
    {
        if(remote_id_strings != nullptr)
        {
            children["remote-id-strings"] = remote_id_strings;
        }
    }

    if(children.find("remote-id-substrings") == children.end())
    {
        if(remote_id_substrings != nullptr)
        {
            children["remote-id-substrings"] = remote_id_substrings;
        }
    }

    if(children.find("service-name-strings") == children.end())
    {
        if(service_name_strings != nullptr)
        {
            children["service-name-strings"] = service_name_strings;
        }
    }

    if(children.find("service-name-substrings") == children.end())
    {
        if(service_name_substrings != nullptr)
        {
            children["service-name-substrings"] = service_name_substrings;
        }
    }

    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "circuit-id")
    {
        circuit_id = value;
    }
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstrings()
{
    yang_name = "remote-id-substrings"; yang_parent_name = "pa-do-delay";
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
    return is_set(operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id-substrings";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteIdSubstrings' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "remote-id-substring")
    {
        for(auto const & c : remote_id_substring)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstring>();
        c->parent = this;
        remote_id_substring.push_back(std::move(c));
        children[segment_path] = remote_id_substring.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::get_children()
{
    for (auto const & c : remote_id_substring)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::set_value(const std::string & value_path, std::string value)
{
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstring::RemoteIdSubstring()
    :
    name{YType::str, "name"},
    delay{YType::uint32, "delay"}
{
    yang_name = "remote-id-substring"; yang_parent_name = "remote-id-substrings";
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
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(delay.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id-substring" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstring::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteIdSubstring' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstring::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstring::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "delay")
    {
        delay = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdStrings()
{
    yang_name = "remote-id-strings"; yang_parent_name = "pa-do-delay";
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
    return is_set(operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id-strings";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteIdStrings' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "remote-id-string")
    {
        for(auto const & c : remote_id_string)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdString>();
        c->parent = this;
        remote_id_string.push_back(std::move(c));
        children[segment_path] = remote_id_string.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::get_children()
{
    for (auto const & c : remote_id_string)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::set_value(const std::string & value_path, std::string value)
{
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdString::RemoteIdString()
    :
    name{YType::str, "name"},
    delay{YType::uint32, "delay"}
{
    yang_name = "remote-id-string"; yang_parent_name = "remote-id-strings";
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
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(delay.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id-string" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteIdString' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdString::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "delay")
    {
        delay = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameStrings()
{
    yang_name = "service-name-strings"; yang_parent_name = "pa-do-delay";
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
    return is_set(operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-name-strings";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceNameStrings' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service-name-string")
    {
        for(auto const & c : service_name_string)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameString>();
        c->parent = this;
        service_name_string.push_back(std::move(c));
        children[segment_path] = service_name_string.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::get_children()
{
    for (auto const & c : service_name_string)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::set_value(const std::string & value_path, std::string value)
{
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameString::ServiceNameString()
    :
    name{YType::str, "name"},
    delay{YType::uint32, "delay"}
{
    yang_name = "service-name-string"; yang_parent_name = "service-name-strings";
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
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(delay.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-name-string" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceNameString' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameString::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "delay")
    {
        delay = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstrings()
{
    yang_name = "circuit-id-substrings"; yang_parent_name = "pa-do-delay";
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
    return is_set(operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id-substrings";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CircuitIdSubstrings' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "circuit-id-substring")
    {
        for(auto const & c : circuit_id_substring)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstring>();
        c->parent = this;
        circuit_id_substring.push_back(std::move(c));
        children[segment_path] = circuit_id_substring.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::get_children()
{
    for (auto const & c : circuit_id_substring)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::set_value(const std::string & value_path, std::string value)
{
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstring::CircuitIdSubstring()
    :
    name{YType::str, "name"},
    delay{YType::uint32, "delay"}
{
    yang_name = "circuit-id-substring"; yang_parent_name = "circuit-id-substrings";
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
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(delay.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id-substring" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstring::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CircuitIdSubstring' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstring::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstring::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "delay")
    {
        delay = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstrings()
{
    yang_name = "service-name-substrings"; yang_parent_name = "pa-do-delay";
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
    return is_set(operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-name-substrings";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceNameSubstrings' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service-name-substring")
    {
        for(auto const & c : service_name_substring)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstring>();
        c->parent = this;
        service_name_substring.push_back(std::move(c));
        children[segment_path] = service_name_substring.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::get_children()
{
    for (auto const & c : service_name_substring)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::set_value(const std::string & value_path, std::string value)
{
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstring::ServiceNameSubstring()
    :
    name{YType::str, "name"},
    delay{YType::uint32, "delay"}
{
    yang_name = "service-name-substring"; yang_parent_name = "service-name-substrings";
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
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(delay.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-name-substring" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstring::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceNameSubstring' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstring::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstring::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "delay")
    {
        delay = value;
    }
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdStrings()
{
    yang_name = "circuit-id-strings"; yang_parent_name = "pa-do-delay";
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
    return is_set(operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id-strings";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CircuitIdStrings' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "circuit-id-string")
    {
        for(auto const & c : circuit_id_string)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdString>();
        c->parent = this;
        circuit_id_string.push_back(std::move(c));
        children[segment_path] = circuit_id_string.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::get_children()
{
    for (auto const & c : circuit_id_string)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::set_value(const std::string & value_path, std::string value)
{
}

PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdString::CircuitIdString()
    :
    name{YType::str, "name"},
    delay{YType::uint32, "delay"}
{
    yang_name = "circuit-id-string"; yang_parent_name = "circuit-id-strings";
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
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(delay.operation);
}

std::string PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id-string" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CircuitIdString' in Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdString::get_children()
{
    return children;
}

void PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "delay")
    {
        delay = value;
    }
}

const Enum::YLeaf PppoeInvalidSessionIdBehaviorEnum::drop {0, "drop"};
const Enum::YLeaf PppoeInvalidSessionIdBehaviorEnum::log {1, "log"};


}
}

