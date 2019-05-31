
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "cisco_pw.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace cisco_pw {

PwEncapsulationType::PwEncapsulationType()
     : Identity("urn:cisco:params:xml:ns:yang:pw", "cisco-pw", "cisco-pw:pw-encapsulation-type")
{

}

PwEncapsulationType::~PwEncapsulationType()
{
}

PwVcType::PwVcType()
     : Identity("urn:cisco:params:xml:ns:yang:pw", "cisco-pw", "cisco-pw:pw-vc-type")
{

}

PwVcType::~PwVcType()
{
}

PwLoadBalanceType::PwLoadBalanceType()
     : Identity("urn:cisco:params:xml:ns:yang:pw", "cisco-pw", "cisco-pw:pw-load-balance-type")
{

}

PwLoadBalanceType::~PwLoadBalanceType()
{
}

PwSignalingProtocolType::PwSignalingProtocolType()
     : Identity("urn:cisco:params:xml:ns:yang:pw", "cisco-pw", "cisco-pw:pw-signaling-protocol-type")
{

}

PwSignalingProtocolType::~PwSignalingProtocolType()
{
}

PwSequencingType::PwSequencingType()
     : Identity("urn:cisco:params:xml:ns:yang:pw", "cisco-pw", "cisco-pw:pw-sequencing-type")
{

}

PwSequencingType::~PwSequencingType()
{
}

PseudowireConfig::PseudowireConfig()
    :
    global(std::make_shared<PseudowireConfig::Global>())
    , pw_templates(std::make_shared<PseudowireConfig::PwTemplates>())
    , pw_static_oam_classes(std::make_shared<PseudowireConfig::PwStaticOamClasses>())
{
    global->parent = this;
    pw_templates->parent = this;
    pw_static_oam_classes->parent = this;

    yang_name = "pseudowire-config"; yang_parent_name = "cisco-pw"; is_top_level_class = true; has_list_ancestor = false; 
}

PseudowireConfig::~PseudowireConfig()
{
}

bool PseudowireConfig::has_data() const
{
    if (is_presence_container) return true;
    return (global !=  nullptr && global->has_data())
	|| (pw_templates !=  nullptr && pw_templates->has_data())
	|| (pw_static_oam_classes !=  nullptr && pw_static_oam_classes->has_data());
}

bool PseudowireConfig::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (pw_templates !=  nullptr && pw_templates->has_operation())
	|| (pw_static_oam_classes !=  nullptr && pw_static_oam_classes->has_operation());
}

std::string PseudowireConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-pw:pseudowire-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PseudowireConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PseudowireConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<PseudowireConfig::Global>();
        }
        return global;
    }

    if(child_yang_name == "pw-templates")
    {
        if(pw_templates == nullptr)
        {
            pw_templates = std::make_shared<PseudowireConfig::PwTemplates>();
        }
        return pw_templates;
    }

    if(child_yang_name == "pw-static-oam-classes")
    {
        if(pw_static_oam_classes == nullptr)
        {
            pw_static_oam_classes = std::make_shared<PseudowireConfig::PwStaticOamClasses>();
        }
        return pw_static_oam_classes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PseudowireConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global != nullptr)
    {
        _children["global"] = global;
    }

    if(pw_templates != nullptr)
    {
        _children["pw-templates"] = pw_templates;
    }

    if(pw_static_oam_classes != nullptr)
    {
        _children["pw-static-oam-classes"] = pw_static_oam_classes;
    }

    return _children;
}

void PseudowireConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PseudowireConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> PseudowireConfig::clone_ptr() const
{
    return std::make_shared<PseudowireConfig>();
}

std::string PseudowireConfig::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string PseudowireConfig::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function PseudowireConfig::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PseudowireConfig::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool PseudowireConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "pw-templates" || name == "pw-static-oam-classes")
        return true;
    return false;
}

PseudowireConfig::Global::Global()
    :
    pw_grouping{YType::boolean, "pw-grouping"},
    pw_oam_refresh_transmit{YType::uint32, "pw-oam-refresh-transmit"},
    pw_status{YType::boolean, "pw-status"},
    predictive_redundancy{YType::boolean, "predictive-redundancy"},
    vc_state_notification_enabled{YType::boolean, "vc-state-notification-enabled"},
    vc_state_notification_batch_size{YType::uint32, "vc-state-notification-batch-size"},
    vc_state_notification_rate{YType::uint32, "vc-state-notification-rate"}
{

    yang_name = "global"; yang_parent_name = "pseudowire-config"; is_top_level_class = false; has_list_ancestor = false; 
}

PseudowireConfig::Global::~Global()
{
}

bool PseudowireConfig::Global::has_data() const
{
    if (is_presence_container) return true;
    return pw_grouping.is_set
	|| pw_oam_refresh_transmit.is_set
	|| pw_status.is_set
	|| predictive_redundancy.is_set
	|| vc_state_notification_enabled.is_set
	|| vc_state_notification_batch_size.is_set
	|| vc_state_notification_rate.is_set;
}

bool PseudowireConfig::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_grouping.yfilter)
	|| ydk::is_set(pw_oam_refresh_transmit.yfilter)
	|| ydk::is_set(pw_status.yfilter)
	|| ydk::is_set(predictive_redundancy.yfilter)
	|| ydk::is_set(vc_state_notification_enabled.yfilter)
	|| ydk::is_set(vc_state_notification_batch_size.yfilter)
	|| ydk::is_set(vc_state_notification_rate.yfilter);
}

std::string PseudowireConfig::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-pw:pseudowire-config/" << get_segment_path();
    return path_buffer.str();
}

std::string PseudowireConfig::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PseudowireConfig::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_grouping.is_set || is_set(pw_grouping.yfilter)) leaf_name_data.push_back(pw_grouping.get_name_leafdata());
    if (pw_oam_refresh_transmit.is_set || is_set(pw_oam_refresh_transmit.yfilter)) leaf_name_data.push_back(pw_oam_refresh_transmit.get_name_leafdata());
    if (pw_status.is_set || is_set(pw_status.yfilter)) leaf_name_data.push_back(pw_status.get_name_leafdata());
    if (predictive_redundancy.is_set || is_set(predictive_redundancy.yfilter)) leaf_name_data.push_back(predictive_redundancy.get_name_leafdata());
    if (vc_state_notification_enabled.is_set || is_set(vc_state_notification_enabled.yfilter)) leaf_name_data.push_back(vc_state_notification_enabled.get_name_leafdata());
    if (vc_state_notification_batch_size.is_set || is_set(vc_state_notification_batch_size.yfilter)) leaf_name_data.push_back(vc_state_notification_batch_size.get_name_leafdata());
    if (vc_state_notification_rate.is_set || is_set(vc_state_notification_rate.yfilter)) leaf_name_data.push_back(vc_state_notification_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PseudowireConfig::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PseudowireConfig::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PseudowireConfig::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-grouping")
    {
        pw_grouping = value;
        pw_grouping.value_namespace = name_space;
        pw_grouping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-oam-refresh-transmit")
    {
        pw_oam_refresh_transmit = value;
        pw_oam_refresh_transmit.value_namespace = name_space;
        pw_oam_refresh_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-status")
    {
        pw_status = value;
        pw_status.value_namespace = name_space;
        pw_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "predictive-redundancy")
    {
        predictive_redundancy = value;
        predictive_redundancy.value_namespace = name_space;
        predictive_redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-state-notification-enabled")
    {
        vc_state_notification_enabled = value;
        vc_state_notification_enabled.value_namespace = name_space;
        vc_state_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-state-notification-batch-size")
    {
        vc_state_notification_batch_size = value;
        vc_state_notification_batch_size.value_namespace = name_space;
        vc_state_notification_batch_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-state-notification-rate")
    {
        vc_state_notification_rate = value;
        vc_state_notification_rate.value_namespace = name_space;
        vc_state_notification_rate.value_namespace_prefix = name_space_prefix;
    }
}

void PseudowireConfig::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-grouping")
    {
        pw_grouping.yfilter = yfilter;
    }
    if(value_path == "pw-oam-refresh-transmit")
    {
        pw_oam_refresh_transmit.yfilter = yfilter;
    }
    if(value_path == "pw-status")
    {
        pw_status.yfilter = yfilter;
    }
    if(value_path == "predictive-redundancy")
    {
        predictive_redundancy.yfilter = yfilter;
    }
    if(value_path == "vc-state-notification-enabled")
    {
        vc_state_notification_enabled.yfilter = yfilter;
    }
    if(value_path == "vc-state-notification-batch-size")
    {
        vc_state_notification_batch_size.yfilter = yfilter;
    }
    if(value_path == "vc-state-notification-rate")
    {
        vc_state_notification_rate.yfilter = yfilter;
    }
}

bool PseudowireConfig::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-grouping" || name == "pw-oam-refresh-transmit" || name == "pw-status" || name == "predictive-redundancy" || name == "vc-state-notification-enabled" || name == "vc-state-notification-batch-size" || name == "vc-state-notification-rate")
        return true;
    return false;
}

PseudowireConfig::PwTemplates::PwTemplates()
    :
    pw_template(this, {"name"})
{

    yang_name = "pw-templates"; yang_parent_name = "pseudowire-config"; is_top_level_class = false; has_list_ancestor = false; 
}

PseudowireConfig::PwTemplates::~PwTemplates()
{
}

bool PseudowireConfig::PwTemplates::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pw_template.len(); index++)
    {
        if(pw_template[index]->has_data())
            return true;
    }
    return false;
}

bool PseudowireConfig::PwTemplates::has_operation() const
{
    for (std::size_t index=0; index<pw_template.len(); index++)
    {
        if(pw_template[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PseudowireConfig::PwTemplates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-pw:pseudowire-config/" << get_segment_path();
    return path_buffer.str();
}

std::string PseudowireConfig::PwTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-templates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PseudowireConfig::PwTemplates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PseudowireConfig::PwTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pw-template")
    {
        auto ent_ = std::make_shared<PseudowireConfig::PwTemplates::PwTemplate>();
        ent_->parent = this;
        pw_template.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PseudowireConfig::PwTemplates::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pw_template.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PseudowireConfig::PwTemplates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PseudowireConfig::PwTemplates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PseudowireConfig::PwTemplates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-template")
        return true;
    return false;
}

PseudowireConfig::PwTemplates::PwTemplate::PwTemplate()
    :
    name{YType::str, "name"},
    encapsulation{YType::identityref, "encapsulation"},
    control_word{YType::boolean, "control-word"},
    signaling_protocol{YType::identityref, "signaling-protocol"},
    vc_type{YType::identityref, "vc-type"},
    switching_tlv{YType::boolean, "switching-tlv"},
    source_ip{YType::str, "source-ip"},
    tag_rewrite_ingress_vlan{YType::uint16, "tag-rewrite-ingress-vlan"},
    mac_withdraw{YType::boolean, "mac-withdraw"}
        ,
    load_balance(std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::LoadBalance>())
    , preferred_path(std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::PreferredPath>())
    , sequencing(std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::Sequencing>())
    , vccv(std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::Vccv>())
    , switchover_delay(std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay>())
    , status(std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::Status>())
    , port_profile_spec(std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec>())
{
    load_balance->parent = this;
    preferred_path->parent = this;
    sequencing->parent = this;
    vccv->parent = this;
    switchover_delay->parent = this;
    status->parent = this;
    port_profile_spec->parent = this;

    yang_name = "pw-template"; yang_parent_name = "pw-templates"; is_top_level_class = false; has_list_ancestor = false; 
}

PseudowireConfig::PwTemplates::PwTemplate::~PwTemplate()
{
}

bool PseudowireConfig::PwTemplates::PwTemplate::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| encapsulation.is_set
	|| control_word.is_set
	|| signaling_protocol.is_set
	|| vc_type.is_set
	|| switching_tlv.is_set
	|| source_ip.is_set
	|| tag_rewrite_ingress_vlan.is_set
	|| mac_withdraw.is_set
	|| (load_balance !=  nullptr && load_balance->has_data())
	|| (preferred_path !=  nullptr && preferred_path->has_data())
	|| (sequencing !=  nullptr && sequencing->has_data())
	|| (vccv !=  nullptr && vccv->has_data())
	|| (switchover_delay !=  nullptr && switchover_delay->has_data())
	|| (status !=  nullptr && status->has_data())
	|| (port_profile_spec !=  nullptr && port_profile_spec->has_data());
}

bool PseudowireConfig::PwTemplates::PwTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(control_word.yfilter)
	|| ydk::is_set(signaling_protocol.yfilter)
	|| ydk::is_set(vc_type.yfilter)
	|| ydk::is_set(switching_tlv.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(tag_rewrite_ingress_vlan.yfilter)
	|| ydk::is_set(mac_withdraw.yfilter)
	|| (load_balance !=  nullptr && load_balance->has_operation())
	|| (preferred_path !=  nullptr && preferred_path->has_operation())
	|| (sequencing !=  nullptr && sequencing->has_operation())
	|| (vccv !=  nullptr && vccv->has_operation())
	|| (switchover_delay !=  nullptr && switchover_delay->has_operation())
	|| (status !=  nullptr && status->has_operation())
	|| (port_profile_spec !=  nullptr && port_profile_spec->has_operation());
}

std::string PseudowireConfig::PwTemplates::PwTemplate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-pw:pseudowire-config/pw-templates/" << get_segment_path();
    return path_buffer.str();
}

std::string PseudowireConfig::PwTemplates::PwTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-template";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PseudowireConfig::PwTemplates::PwTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (control_word.is_set || is_set(control_word.yfilter)) leaf_name_data.push_back(control_word.get_name_leafdata());
    if (signaling_protocol.is_set || is_set(signaling_protocol.yfilter)) leaf_name_data.push_back(signaling_protocol.get_name_leafdata());
    if (vc_type.is_set || is_set(vc_type.yfilter)) leaf_name_data.push_back(vc_type.get_name_leafdata());
    if (switching_tlv.is_set || is_set(switching_tlv.yfilter)) leaf_name_data.push_back(switching_tlv.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (tag_rewrite_ingress_vlan.is_set || is_set(tag_rewrite_ingress_vlan.yfilter)) leaf_name_data.push_back(tag_rewrite_ingress_vlan.get_name_leafdata());
    if (mac_withdraw.is_set || is_set(mac_withdraw.yfilter)) leaf_name_data.push_back(mac_withdraw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PseudowireConfig::PwTemplates::PwTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-balance")
    {
        if(load_balance == nullptr)
        {
            load_balance = std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::LoadBalance>();
        }
        return load_balance;
    }

    if(child_yang_name == "preferred-path")
    {
        if(preferred_path == nullptr)
        {
            preferred_path = std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::PreferredPath>();
        }
        return preferred_path;
    }

    if(child_yang_name == "sequencing")
    {
        if(sequencing == nullptr)
        {
            sequencing = std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::Sequencing>();
        }
        return sequencing;
    }

    if(child_yang_name == "vccv")
    {
        if(vccv == nullptr)
        {
            vccv = std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::Vccv>();
        }
        return vccv;
    }

    if(child_yang_name == "switchover-delay")
    {
        if(switchover_delay == nullptr)
        {
            switchover_delay = std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay>();
        }
        return switchover_delay;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::Status>();
        }
        return status;
    }

    if(child_yang_name == "port-profile-spec")
    {
        if(port_profile_spec == nullptr)
        {
            port_profile_spec = std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec>();
        }
        return port_profile_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PseudowireConfig::PwTemplates::PwTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(load_balance != nullptr)
    {
        _children["load-balance"] = load_balance;
    }

    if(preferred_path != nullptr)
    {
        _children["preferred-path"] = preferred_path;
    }

    if(sequencing != nullptr)
    {
        _children["sequencing"] = sequencing;
    }

    if(vccv != nullptr)
    {
        _children["vccv"] = vccv;
    }

    if(switchover_delay != nullptr)
    {
        _children["switchover-delay"] = switchover_delay;
    }

    if(status != nullptr)
    {
        _children["status"] = status;
    }

    if(port_profile_spec != nullptr)
    {
        _children["port-profile-spec"] = port_profile_spec;
    }

    return _children;
}

void PseudowireConfig::PwTemplates::PwTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-word")
    {
        control_word = value;
        control_word.value_namespace = name_space;
        control_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-protocol")
    {
        signaling_protocol = value;
        signaling_protocol.value_namespace = name_space;
        signaling_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-type")
    {
        vc_type = value;
        vc_type.value_namespace = name_space;
        vc_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switching-tlv")
    {
        switching_tlv = value;
        switching_tlv.value_namespace = name_space;
        switching_tlv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-rewrite-ingress-vlan")
    {
        tag_rewrite_ingress_vlan = value;
        tag_rewrite_ingress_vlan.value_namespace = name_space;
        tag_rewrite_ingress_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-withdraw")
    {
        mac_withdraw = value;
        mac_withdraw.value_namespace = name_space;
        mac_withdraw.value_namespace_prefix = name_space_prefix;
    }
}

void PseudowireConfig::PwTemplates::PwTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "control-word")
    {
        control_word.yfilter = yfilter;
    }
    if(value_path == "signaling-protocol")
    {
        signaling_protocol.yfilter = yfilter;
    }
    if(value_path == "vc-type")
    {
        vc_type.yfilter = yfilter;
    }
    if(value_path == "switching-tlv")
    {
        switching_tlv.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "tag-rewrite-ingress-vlan")
    {
        tag_rewrite_ingress_vlan.yfilter = yfilter;
    }
    if(value_path == "mac-withdraw")
    {
        mac_withdraw.yfilter = yfilter;
    }
}

bool PseudowireConfig::PwTemplates::PwTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-balance" || name == "preferred-path" || name == "sequencing" || name == "vccv" || name == "switchover-delay" || name == "status" || name == "port-profile-spec" || name == "name" || name == "encapsulation" || name == "control-word" || name == "signaling-protocol" || name == "vc-type" || name == "switching-tlv" || name == "source-ip" || name == "tag-rewrite-ingress-vlan" || name == "mac-withdraw")
        return true;
    return false;
}

PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::LoadBalance()
    :
    ethernet{YType::identityref, "ethernet"},
    ip{YType::identityref, "ip"}
        ,
    flow_label(std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel>())
{
    flow_label->parent = this;

    yang_name = "load-balance"; yang_parent_name = "pw-template"; is_top_level_class = false; has_list_ancestor = true; 
}

PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::~LoadBalance()
{
}

bool PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::has_data() const
{
    if (is_presence_container) return true;
    return ethernet.is_set
	|| ip.is_set
	|| (flow_label !=  nullptr && flow_label->has_data());
}

bool PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| (flow_label !=  nullptr && flow_label->has_operation());
}

std::string PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-label")
    {
        if(flow_label == nullptr)
        {
            flow_label = std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel>();
        }
        return flow_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flow_label != nullptr)
    {
        _children["flow-label"] = flow_label;
    }

    return _children;
}

void PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-label" || name == "ethernet" || name == "ip")
        return true;
    return false;
}

PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::FlowLabel()
    :
    direction{YType::enumeration, "direction"},
    tlv_code_17{YType::boolean, "tlv-code-17"},
    static_{YType::boolean, "static"}
{

    yang_name = "flow-label"; yang_parent_name = "load-balance"; is_top_level_class = false; has_list_ancestor = true; 
}

PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::~FlowLabel()
{
}

bool PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| tlv_code_17.is_set
	|| static_.is_set;
}

bool PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(tlv_code_17.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (tlv_code_17.is_set || is_set(tlv_code_17.yfilter)) leaf_name_data.push_back(tlv_code_17.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-code-17")
    {
        tlv_code_17 = value;
        tlv_code_17.value_namespace = name_space;
        tlv_code_17.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "tlv-code-17")
    {
        tlv_code_17.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "tlv-code-17" || name == "static")
        return true;
    return false;
}

PseudowireConfig::PwTemplates::PwTemplate::PreferredPath::PreferredPath()
    :
    interface{YType::str, "interface"},
    address{YType::str, "address"},
    hostname{YType::str, "hostname"},
    disable_fallback{YType::boolean, "disable-fallback"}
{

    yang_name = "preferred-path"; yang_parent_name = "pw-template"; is_top_level_class = false; has_list_ancestor = true; 
}

PseudowireConfig::PwTemplates::PwTemplate::PreferredPath::~PreferredPath()
{
}

bool PseudowireConfig::PwTemplates::PwTemplate::PreferredPath::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| address.is_set
	|| hostname.is_set
	|| disable_fallback.is_set;
}

bool PseudowireConfig::PwTemplates::PwTemplate::PreferredPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| ydk::is_set(disable_fallback.yfilter);
}

std::string PseudowireConfig::PwTemplates::PwTemplate::PreferredPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PseudowireConfig::PwTemplates::PwTemplate::PreferredPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());
    if (disable_fallback.is_set || is_set(disable_fallback.yfilter)) leaf_name_data.push_back(disable_fallback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PseudowireConfig::PwTemplates::PwTemplate::PreferredPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PseudowireConfig::PwTemplates::PwTemplate::PreferredPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PseudowireConfig::PwTemplates::PwTemplate::PreferredPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-fallback")
    {
        disable_fallback = value;
        disable_fallback.value_namespace = name_space;
        disable_fallback.value_namespace_prefix = name_space_prefix;
    }
}

void PseudowireConfig::PwTemplates::PwTemplate::PreferredPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
    if(value_path == "disable-fallback")
    {
        disable_fallback.yfilter = yfilter;
    }
}

bool PseudowireConfig::PwTemplates::PwTemplate::PreferredPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "address" || name == "hostname" || name == "disable-fallback")
        return true;
    return false;
}

PseudowireConfig::PwTemplates::PwTemplate::Sequencing::Sequencing()
    :
    direction{YType::identityref, "direction"},
    resync{YType::int32, "resync"}
{

    yang_name = "sequencing"; yang_parent_name = "pw-template"; is_top_level_class = false; has_list_ancestor = true; 
}

PseudowireConfig::PwTemplates::PwTemplate::Sequencing::~Sequencing()
{
}

bool PseudowireConfig::PwTemplates::PwTemplate::Sequencing::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| resync.is_set;
}

bool PseudowireConfig::PwTemplates::PwTemplate::Sequencing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(resync.yfilter);
}

std::string PseudowireConfig::PwTemplates::PwTemplate::Sequencing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequencing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PseudowireConfig::PwTemplates::PwTemplate::Sequencing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (resync.is_set || is_set(resync.yfilter)) leaf_name_data.push_back(resync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PseudowireConfig::PwTemplates::PwTemplate::Sequencing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PseudowireConfig::PwTemplates::PwTemplate::Sequencing::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PseudowireConfig::PwTemplates::PwTemplate::Sequencing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resync")
    {
        resync = value;
        resync.value_namespace = name_space;
        resync.value_namespace_prefix = name_space_prefix;
    }
}

void PseudowireConfig::PwTemplates::PwTemplate::Sequencing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "resync")
    {
        resync.yfilter = yfilter;
    }
}

bool PseudowireConfig::PwTemplates::PwTemplate::Sequencing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "resync")
        return true;
    return false;
}

PseudowireConfig::PwTemplates::PwTemplate::Vccv::Vccv()
    :
    control_word{YType::boolean, "control-word"}
{

    yang_name = "vccv"; yang_parent_name = "pw-template"; is_top_level_class = false; has_list_ancestor = true; 
}

PseudowireConfig::PwTemplates::PwTemplate::Vccv::~Vccv()
{
}

bool PseudowireConfig::PwTemplates::PwTemplate::Vccv::has_data() const
{
    if (is_presence_container) return true;
    return control_word.is_set;
}

bool PseudowireConfig::PwTemplates::PwTemplate::Vccv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(control_word.yfilter);
}

std::string PseudowireConfig::PwTemplates::PwTemplate::Vccv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vccv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PseudowireConfig::PwTemplates::PwTemplate::Vccv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control_word.is_set || is_set(control_word.yfilter)) leaf_name_data.push_back(control_word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PseudowireConfig::PwTemplates::PwTemplate::Vccv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PseudowireConfig::PwTemplates::PwTemplate::Vccv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PseudowireConfig::PwTemplates::PwTemplate::Vccv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "control-word")
    {
        control_word = value;
        control_word.value_namespace = name_space;
        control_word.value_namespace_prefix = name_space_prefix;
    }
}

void PseudowireConfig::PwTemplates::PwTemplate::Vccv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "control-word")
    {
        control_word.yfilter = yfilter;
    }
}

bool PseudowireConfig::PwTemplates::PwTemplate::Vccv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "control-word")
        return true;
    return false;
}

PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay::SwitchoverDelay()
    :
    switchover_timer{YType::uint8, "switchover-timer"},
    timer{YType::uint8, "timer"},
    never{YType::boolean, "never"}
{

    yang_name = "switchover-delay"; yang_parent_name = "pw-template"; is_top_level_class = false; has_list_ancestor = true; 
}

PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay::~SwitchoverDelay()
{
}

bool PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay::has_data() const
{
    if (is_presence_container) return true;
    return switchover_timer.is_set
	|| timer.is_set
	|| never.is_set;
}

bool PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switchover_timer.yfilter)
	|| ydk::is_set(timer.yfilter)
	|| ydk::is_set(never.yfilter);
}

std::string PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchover-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switchover_timer.is_set || is_set(switchover_timer.yfilter)) leaf_name_data.push_back(switchover_timer.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());
    if (never.is_set || is_set(never.yfilter)) leaf_name_data.push_back(never.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switchover-timer")
    {
        switchover_timer = value;
        switchover_timer.value_namespace = name_space;
        switchover_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "never")
    {
        never = value;
        never.value_namespace = name_space;
        never.value_namespace_prefix = name_space_prefix;
    }
}

void PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switchover-timer")
    {
        switchover_timer.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
    if(value_path == "never")
    {
        never.yfilter = yfilter;
    }
}

bool PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchover-timer" || name == "timer" || name == "never")
        return true;
    return false;
}

PseudowireConfig::PwTemplates::PwTemplate::Status::Status()
    :
    decoupled{YType::boolean, "decoupled"},
    disable{YType::boolean, "disable"},
    peer_topo_dual_homed{YType::boolean, "peer-topo-dual-homed"},
    route_watch_disable{YType::boolean, "route-watch-disable"},
    redundancy_master{YType::boolean, "redundancy-master"}
{

    yang_name = "status"; yang_parent_name = "pw-template"; is_top_level_class = false; has_list_ancestor = true; 
}

PseudowireConfig::PwTemplates::PwTemplate::Status::~Status()
{
}

bool PseudowireConfig::PwTemplates::PwTemplate::Status::has_data() const
{
    if (is_presence_container) return true;
    return decoupled.is_set
	|| disable.is_set
	|| peer_topo_dual_homed.is_set
	|| route_watch_disable.is_set
	|| redundancy_master.is_set;
}

bool PseudowireConfig::PwTemplates::PwTemplate::Status::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(decoupled.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(peer_topo_dual_homed.yfilter)
	|| ydk::is_set(route_watch_disable.yfilter)
	|| ydk::is_set(redundancy_master.yfilter);
}

std::string PseudowireConfig::PwTemplates::PwTemplate::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PseudowireConfig::PwTemplates::PwTemplate::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (decoupled.is_set || is_set(decoupled.yfilter)) leaf_name_data.push_back(decoupled.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (peer_topo_dual_homed.is_set || is_set(peer_topo_dual_homed.yfilter)) leaf_name_data.push_back(peer_topo_dual_homed.get_name_leafdata());
    if (route_watch_disable.is_set || is_set(route_watch_disable.yfilter)) leaf_name_data.push_back(route_watch_disable.get_name_leafdata());
    if (redundancy_master.is_set || is_set(redundancy_master.yfilter)) leaf_name_data.push_back(redundancy_master.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PseudowireConfig::PwTemplates::PwTemplate::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PseudowireConfig::PwTemplates::PwTemplate::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PseudowireConfig::PwTemplates::PwTemplate::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "decoupled")
    {
        decoupled = value;
        decoupled.value_namespace = name_space;
        decoupled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-topo-dual-homed")
    {
        peer_topo_dual_homed = value;
        peer_topo_dual_homed.value_namespace = name_space;
        peer_topo_dual_homed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-watch-disable")
    {
        route_watch_disable = value;
        route_watch_disable.value_namespace = name_space;
        route_watch_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-master")
    {
        redundancy_master = value;
        redundancy_master.value_namespace = name_space;
        redundancy_master.value_namespace_prefix = name_space_prefix;
    }
}

void PseudowireConfig::PwTemplates::PwTemplate::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "decoupled")
    {
        decoupled.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "peer-topo-dual-homed")
    {
        peer_topo_dual_homed.yfilter = yfilter;
    }
    if(value_path == "route-watch-disable")
    {
        route_watch_disable.yfilter = yfilter;
    }
    if(value_path == "redundancy-master")
    {
        redundancy_master.yfilter = yfilter;
    }
}

bool PseudowireConfig::PwTemplates::PwTemplate::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "decoupled" || name == "disable" || name == "peer-topo-dual-homed" || name == "route-watch-disable" || name == "redundancy-master")
        return true;
    return false;
}

PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec::PortProfileSpec()
    :
    description{YType::str, "description"},
    shutdown{YType::boolean, "shutdown"},
    shut_force{YType::boolean, "shut-force"},
    mtu{YType::uint32, "mtu"},
    max_ports{YType::uint16, "max-ports"},
    enabled{YType::boolean, "enabled"}
{

    yang_name = "port-profile-spec"; yang_parent_name = "pw-template"; is_top_level_class = false; has_list_ancestor = true; 
}

PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec::~PortProfileSpec()
{
}

bool PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| shutdown.is_set
	|| shut_force.is_set
	|| mtu.is_set
	|| max_ports.is_set
	|| enabled.is_set;
}

bool PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(shut_force.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(max_ports.yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-profile-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (shut_force.is_set || is_set(shut_force.yfilter)) leaf_name_data.push_back(shut_force.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (max_ports.is_set || is_set(max_ports.yfilter)) leaf_name_data.push_back(max_ports.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "shut-force")
    {
        shut_force = value;
        shut_force.value_namespace = name_space;
        shut_force.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-ports")
    {
        max_ports = value;
        max_ports.value_namespace = name_space;
        max_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "shut-force")
    {
        shut_force.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "max-ports")
    {
        max_ports.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "shutdown" || name == "shut-force" || name == "mtu" || name == "max-ports" || name == "enabled")
        return true;
    return false;
}

PseudowireConfig::PwStaticOamClasses::PwStaticOamClasses()
    :
    pw_static_oam_class(this, {"name"})
{

    yang_name = "pw-static-oam-classes"; yang_parent_name = "pseudowire-config"; is_top_level_class = false; has_list_ancestor = false; 
}

PseudowireConfig::PwStaticOamClasses::~PwStaticOamClasses()
{
}

bool PseudowireConfig::PwStaticOamClasses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pw_static_oam_class.len(); index++)
    {
        if(pw_static_oam_class[index]->has_data())
            return true;
    }
    return false;
}

bool PseudowireConfig::PwStaticOamClasses::has_operation() const
{
    for (std::size_t index=0; index<pw_static_oam_class.len(); index++)
    {
        if(pw_static_oam_class[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PseudowireConfig::PwStaticOamClasses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-pw:pseudowire-config/" << get_segment_path();
    return path_buffer.str();
}

std::string PseudowireConfig::PwStaticOamClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-static-oam-classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PseudowireConfig::PwStaticOamClasses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PseudowireConfig::PwStaticOamClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pw-static-oam-class")
    {
        auto ent_ = std::make_shared<PseudowireConfig::PwStaticOamClasses::PwStaticOamClass>();
        ent_->parent = this;
        pw_static_oam_class.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PseudowireConfig::PwStaticOamClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pw_static_oam_class.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PseudowireConfig::PwStaticOamClasses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PseudowireConfig::PwStaticOamClasses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PseudowireConfig::PwStaticOamClasses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-static-oam-class")
        return true;
    return false;
}

PseudowireConfig::PwStaticOamClasses::PwStaticOamClass::PwStaticOamClass()
    :
    name{YType::str, "name"},
    ack{YType::boolean, "ack"},
    keepalive{YType::uint32, "keepalive"},
    timeout_refresh_send{YType::uint32, "timeout-refresh-send"},
    timeout_refresh_ack{YType::uint32, "timeout-refresh-ack"}
{

    yang_name = "pw-static-oam-class"; yang_parent_name = "pw-static-oam-classes"; is_top_level_class = false; has_list_ancestor = false; 
}

PseudowireConfig::PwStaticOamClasses::PwStaticOamClass::~PwStaticOamClass()
{
}

bool PseudowireConfig::PwStaticOamClasses::PwStaticOamClass::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ack.is_set
	|| keepalive.is_set
	|| timeout_refresh_send.is_set
	|| timeout_refresh_ack.is_set;
}

bool PseudowireConfig::PwStaticOamClasses::PwStaticOamClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(timeout_refresh_send.yfilter)
	|| ydk::is_set(timeout_refresh_ack.yfilter);
}

std::string PseudowireConfig::PwStaticOamClasses::PwStaticOamClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-pw:pseudowire-config/pw-static-oam-classes/" << get_segment_path();
    return path_buffer.str();
}

std::string PseudowireConfig::PwStaticOamClasses::PwStaticOamClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-static-oam-class";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PseudowireConfig::PwStaticOamClasses::PwStaticOamClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (timeout_refresh_send.is_set || is_set(timeout_refresh_send.yfilter)) leaf_name_data.push_back(timeout_refresh_send.get_name_leafdata());
    if (timeout_refresh_ack.is_set || is_set(timeout_refresh_ack.yfilter)) leaf_name_data.push_back(timeout_refresh_ack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PseudowireConfig::PwStaticOamClasses::PwStaticOamClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PseudowireConfig::PwStaticOamClasses::PwStaticOamClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PseudowireConfig::PwStaticOamClasses::PwStaticOamClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-refresh-send")
    {
        timeout_refresh_send = value;
        timeout_refresh_send.value_namespace = name_space;
        timeout_refresh_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-refresh-ack")
    {
        timeout_refresh_ack = value;
        timeout_refresh_ack.value_namespace = name_space;
        timeout_refresh_ack.value_namespace_prefix = name_space_prefix;
    }
}

void PseudowireConfig::PwStaticOamClasses::PwStaticOamClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "timeout-refresh-send")
    {
        timeout_refresh_send.yfilter = yfilter;
    }
    if(value_path == "timeout-refresh-ack")
    {
        timeout_refresh_ack.yfilter = yfilter;
    }
}

bool PseudowireConfig::PwStaticOamClasses::PwStaticOamClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ack" || name == "keepalive" || name == "timeout-refresh-send" || name == "timeout-refresh-ack")
        return true;
    return false;
}

PseudowireState::PseudowireState()
    :
    pseudowires(this, {"vc_peer_address", "vc_id", "vc_owner_type", "vc_name", "vc_index"})
{

    yang_name = "pseudowire-state"; yang_parent_name = "cisco-pw"; is_top_level_class = true; has_list_ancestor = false; 
}

PseudowireState::~PseudowireState()
{
}

bool PseudowireState::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pseudowires.len(); index++)
    {
        if(pseudowires[index]->has_data())
            return true;
    }
    return false;
}

bool PseudowireState::has_operation() const
{
    for (std::size_t index=0; index<pseudowires.len(); index++)
    {
        if(pseudowires[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PseudowireState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-pw:pseudowire-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PseudowireState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PseudowireState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowires")
    {
        auto ent_ = std::make_shared<PseudowireState::Pseudowires>();
        ent_->parent = this;
        pseudowires.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PseudowireState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pseudowires.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PseudowireState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PseudowireState::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> PseudowireState::clone_ptr() const
{
    return std::make_shared<PseudowireState>();
}

std::string PseudowireState::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string PseudowireState::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function PseudowireState::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PseudowireState::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool PseudowireState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowires")
        return true;
    return false;
}

PseudowireState::Pseudowires::Pseudowires()
    :
    vc_peer_address{YType::str, "vc-peer-address"},
    vc_id{YType::uint32, "vc-id"},
    vc_owner_type{YType::enumeration, "vc-owner-type"},
    vc_name{YType::str, "vc-name"},
    vc_index{YType::uint32, "vc-index"},
    vc_type{YType::identityref, "vc-type"},
    vc_owner_name{YType::str, "vc-owner-name"},
    vc_psn_type{YType::enumeration, "vc-psn-type"},
    vc_local_group_id{YType::uint32, "vc-local-group-id"},
    vc_control_word{YType::boolean, "vc-control-word"},
    vc_local_if_mtu{YType::uint32, "vc-local-if-mtu"},
    vc_remote_group_id{YType::uint32, "vc-remote-group-id"},
    vc_remote_control_word{YType::enumeration, "vc-remote-control-word"},
    vc_remote_if_mtu{YType::uint32, "vc-remote-if-mtu"},
    vc_outbound_label{YType::uint32, "vc-outbound-label"},
    vc_inbound_label{YType::uint32, "vc-inbound-label"},
    vc_oper_status{YType::enumeration, "vc-oper-status"},
    vc_inbound_oper_status{YType::enumeration, "vc-inbound-oper-status"},
    vc_outbound_oper_status{YType::enumeration, "vc-outbound-oper-status"}
        ,
    statistics(std::make_shared<PseudowireState::Pseudowires::Statistics>())
{
    statistics->parent = this;

    yang_name = "pseudowires"; yang_parent_name = "pseudowire-state"; is_top_level_class = false; has_list_ancestor = false; 
}

PseudowireState::Pseudowires::~Pseudowires()
{
}

bool PseudowireState::Pseudowires::has_data() const
{
    if (is_presence_container) return true;
    return vc_peer_address.is_set
	|| vc_id.is_set
	|| vc_owner_type.is_set
	|| vc_name.is_set
	|| vc_index.is_set
	|| vc_type.is_set
	|| vc_owner_name.is_set
	|| vc_psn_type.is_set
	|| vc_local_group_id.is_set
	|| vc_control_word.is_set
	|| vc_local_if_mtu.is_set
	|| vc_remote_group_id.is_set
	|| vc_remote_control_word.is_set
	|| vc_remote_if_mtu.is_set
	|| vc_outbound_label.is_set
	|| vc_inbound_label.is_set
	|| vc_oper_status.is_set
	|| vc_inbound_oper_status.is_set
	|| vc_outbound_oper_status.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool PseudowireState::Pseudowires::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vc_peer_address.yfilter)
	|| ydk::is_set(vc_id.yfilter)
	|| ydk::is_set(vc_owner_type.yfilter)
	|| ydk::is_set(vc_name.yfilter)
	|| ydk::is_set(vc_index.yfilter)
	|| ydk::is_set(vc_type.yfilter)
	|| ydk::is_set(vc_owner_name.yfilter)
	|| ydk::is_set(vc_psn_type.yfilter)
	|| ydk::is_set(vc_local_group_id.yfilter)
	|| ydk::is_set(vc_control_word.yfilter)
	|| ydk::is_set(vc_local_if_mtu.yfilter)
	|| ydk::is_set(vc_remote_group_id.yfilter)
	|| ydk::is_set(vc_remote_control_word.yfilter)
	|| ydk::is_set(vc_remote_if_mtu.yfilter)
	|| ydk::is_set(vc_outbound_label.yfilter)
	|| ydk::is_set(vc_inbound_label.yfilter)
	|| ydk::is_set(vc_oper_status.yfilter)
	|| ydk::is_set(vc_inbound_oper_status.yfilter)
	|| ydk::is_set(vc_outbound_oper_status.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string PseudowireState::Pseudowires::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-pw:pseudowire-state/" << get_segment_path();
    return path_buffer.str();
}

std::string PseudowireState::Pseudowires::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowires";
    ADD_KEY_TOKEN(vc_peer_address, "vc-peer-address");
    ADD_KEY_TOKEN(vc_id, "vc-id");
    ADD_KEY_TOKEN(vc_owner_type, "vc-owner-type");
    ADD_KEY_TOKEN(vc_name, "vc-name");
    ADD_KEY_TOKEN(vc_index, "vc-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PseudowireState::Pseudowires::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vc_peer_address.is_set || is_set(vc_peer_address.yfilter)) leaf_name_data.push_back(vc_peer_address.get_name_leafdata());
    if (vc_id.is_set || is_set(vc_id.yfilter)) leaf_name_data.push_back(vc_id.get_name_leafdata());
    if (vc_owner_type.is_set || is_set(vc_owner_type.yfilter)) leaf_name_data.push_back(vc_owner_type.get_name_leafdata());
    if (vc_name.is_set || is_set(vc_name.yfilter)) leaf_name_data.push_back(vc_name.get_name_leafdata());
    if (vc_index.is_set || is_set(vc_index.yfilter)) leaf_name_data.push_back(vc_index.get_name_leafdata());
    if (vc_type.is_set || is_set(vc_type.yfilter)) leaf_name_data.push_back(vc_type.get_name_leafdata());
    if (vc_owner_name.is_set || is_set(vc_owner_name.yfilter)) leaf_name_data.push_back(vc_owner_name.get_name_leafdata());
    if (vc_psn_type.is_set || is_set(vc_psn_type.yfilter)) leaf_name_data.push_back(vc_psn_type.get_name_leafdata());
    if (vc_local_group_id.is_set || is_set(vc_local_group_id.yfilter)) leaf_name_data.push_back(vc_local_group_id.get_name_leafdata());
    if (vc_control_word.is_set || is_set(vc_control_word.yfilter)) leaf_name_data.push_back(vc_control_word.get_name_leafdata());
    if (vc_local_if_mtu.is_set || is_set(vc_local_if_mtu.yfilter)) leaf_name_data.push_back(vc_local_if_mtu.get_name_leafdata());
    if (vc_remote_group_id.is_set || is_set(vc_remote_group_id.yfilter)) leaf_name_data.push_back(vc_remote_group_id.get_name_leafdata());
    if (vc_remote_control_word.is_set || is_set(vc_remote_control_word.yfilter)) leaf_name_data.push_back(vc_remote_control_word.get_name_leafdata());
    if (vc_remote_if_mtu.is_set || is_set(vc_remote_if_mtu.yfilter)) leaf_name_data.push_back(vc_remote_if_mtu.get_name_leafdata());
    if (vc_outbound_label.is_set || is_set(vc_outbound_label.yfilter)) leaf_name_data.push_back(vc_outbound_label.get_name_leafdata());
    if (vc_inbound_label.is_set || is_set(vc_inbound_label.yfilter)) leaf_name_data.push_back(vc_inbound_label.get_name_leafdata());
    if (vc_oper_status.is_set || is_set(vc_oper_status.yfilter)) leaf_name_data.push_back(vc_oper_status.get_name_leafdata());
    if (vc_inbound_oper_status.is_set || is_set(vc_inbound_oper_status.yfilter)) leaf_name_data.push_back(vc_inbound_oper_status.get_name_leafdata());
    if (vc_outbound_oper_status.is_set || is_set(vc_outbound_oper_status.yfilter)) leaf_name_data.push_back(vc_outbound_oper_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PseudowireState::Pseudowires::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<PseudowireState::Pseudowires::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PseudowireState::Pseudowires::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void PseudowireState::Pseudowires::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vc-peer-address")
    {
        vc_peer_address = value;
        vc_peer_address.value_namespace = name_space;
        vc_peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-id")
    {
        vc_id = value;
        vc_id.value_namespace = name_space;
        vc_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-owner-type")
    {
        vc_owner_type = value;
        vc_owner_type.value_namespace = name_space;
        vc_owner_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-name")
    {
        vc_name = value;
        vc_name.value_namespace = name_space;
        vc_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-index")
    {
        vc_index = value;
        vc_index.value_namespace = name_space;
        vc_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-type")
    {
        vc_type = value;
        vc_type.value_namespace = name_space;
        vc_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-owner-name")
    {
        vc_owner_name = value;
        vc_owner_name.value_namespace = name_space;
        vc_owner_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-psn-type")
    {
        vc_psn_type = value;
        vc_psn_type.value_namespace = name_space;
        vc_psn_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-local-group-id")
    {
        vc_local_group_id = value;
        vc_local_group_id.value_namespace = name_space;
        vc_local_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-control-word")
    {
        vc_control_word = value;
        vc_control_word.value_namespace = name_space;
        vc_control_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-local-if-mtu")
    {
        vc_local_if_mtu = value;
        vc_local_if_mtu.value_namespace = name_space;
        vc_local_if_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-remote-group-id")
    {
        vc_remote_group_id = value;
        vc_remote_group_id.value_namespace = name_space;
        vc_remote_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-remote-control-word")
    {
        vc_remote_control_word = value;
        vc_remote_control_word.value_namespace = name_space;
        vc_remote_control_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-remote-if-mtu")
    {
        vc_remote_if_mtu = value;
        vc_remote_if_mtu.value_namespace = name_space;
        vc_remote_if_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-outbound-label")
    {
        vc_outbound_label = value;
        vc_outbound_label.value_namespace = name_space;
        vc_outbound_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-inbound-label")
    {
        vc_inbound_label = value;
        vc_inbound_label.value_namespace = name_space;
        vc_inbound_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-oper-status")
    {
        vc_oper_status = value;
        vc_oper_status.value_namespace = name_space;
        vc_oper_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-inbound-oper-status")
    {
        vc_inbound_oper_status = value;
        vc_inbound_oper_status.value_namespace = name_space;
        vc_inbound_oper_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-outbound-oper-status")
    {
        vc_outbound_oper_status = value;
        vc_outbound_oper_status.value_namespace = name_space;
        vc_outbound_oper_status.value_namespace_prefix = name_space_prefix;
    }
}

void PseudowireState::Pseudowires::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vc-peer-address")
    {
        vc_peer_address.yfilter = yfilter;
    }
    if(value_path == "vc-id")
    {
        vc_id.yfilter = yfilter;
    }
    if(value_path == "vc-owner-type")
    {
        vc_owner_type.yfilter = yfilter;
    }
    if(value_path == "vc-name")
    {
        vc_name.yfilter = yfilter;
    }
    if(value_path == "vc-index")
    {
        vc_index.yfilter = yfilter;
    }
    if(value_path == "vc-type")
    {
        vc_type.yfilter = yfilter;
    }
    if(value_path == "vc-owner-name")
    {
        vc_owner_name.yfilter = yfilter;
    }
    if(value_path == "vc-psn-type")
    {
        vc_psn_type.yfilter = yfilter;
    }
    if(value_path == "vc-local-group-id")
    {
        vc_local_group_id.yfilter = yfilter;
    }
    if(value_path == "vc-control-word")
    {
        vc_control_word.yfilter = yfilter;
    }
    if(value_path == "vc-local-if-mtu")
    {
        vc_local_if_mtu.yfilter = yfilter;
    }
    if(value_path == "vc-remote-group-id")
    {
        vc_remote_group_id.yfilter = yfilter;
    }
    if(value_path == "vc-remote-control-word")
    {
        vc_remote_control_word.yfilter = yfilter;
    }
    if(value_path == "vc-remote-if-mtu")
    {
        vc_remote_if_mtu.yfilter = yfilter;
    }
    if(value_path == "vc-outbound-label")
    {
        vc_outbound_label.yfilter = yfilter;
    }
    if(value_path == "vc-inbound-label")
    {
        vc_inbound_label.yfilter = yfilter;
    }
    if(value_path == "vc-oper-status")
    {
        vc_oper_status.yfilter = yfilter;
    }
    if(value_path == "vc-inbound-oper-status")
    {
        vc_inbound_oper_status.yfilter = yfilter;
    }
    if(value_path == "vc-outbound-oper-status")
    {
        vc_outbound_oper_status.yfilter = yfilter;
    }
}

bool PseudowireState::Pseudowires::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "vc-peer-address" || name == "vc-id" || name == "vc-owner-type" || name == "vc-name" || name == "vc-index" || name == "vc-type" || name == "vc-owner-name" || name == "vc-psn-type" || name == "vc-local-group-id" || name == "vc-control-word" || name == "vc-local-if-mtu" || name == "vc-remote-group-id" || name == "vc-remote-control-word" || name == "vc-remote-if-mtu" || name == "vc-outbound-label" || name == "vc-inbound-label" || name == "vc-oper-status" || name == "vc-inbound-oper-status" || name == "vc-outbound-oper-status")
        return true;
    return false;
}

PseudowireState::Pseudowires::Statistics::Statistics()
    :
    vc_create_time{YType::uint32, "vc-create-time"},
    vc_up_time{YType::uint32, "vc-up-time"},
    discontinuity_time{YType::str, "discontinuity-time"},
    in_octets{YType::uint64, "in-octets"},
    in_pkts{YType::uint64, "in-pkts"},
    in_errors{YType::uint64, "in-errors"},
    out_octets{YType::uint64, "out-octets"},
    out_pkts{YType::uint64, "out-pkts"},
    out_errors{YType::uint64, "out-errors"}
{

    yang_name = "statistics"; yang_parent_name = "pseudowires"; is_top_level_class = false; has_list_ancestor = true; 
}

PseudowireState::Pseudowires::Statistics::~Statistics()
{
}

bool PseudowireState::Pseudowires::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return vc_create_time.is_set
	|| vc_up_time.is_set
	|| discontinuity_time.is_set
	|| in_octets.is_set
	|| in_pkts.is_set
	|| in_errors.is_set
	|| out_octets.is_set
	|| out_pkts.is_set
	|| out_errors.is_set;
}

bool PseudowireState::Pseudowires::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vc_create_time.yfilter)
	|| ydk::is_set(vc_up_time.yfilter)
	|| ydk::is_set(discontinuity_time.yfilter)
	|| ydk::is_set(in_octets.yfilter)
	|| ydk::is_set(in_pkts.yfilter)
	|| ydk::is_set(in_errors.yfilter)
	|| ydk::is_set(out_octets.yfilter)
	|| ydk::is_set(out_pkts.yfilter)
	|| ydk::is_set(out_errors.yfilter);
}

std::string PseudowireState::Pseudowires::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PseudowireState::Pseudowires::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vc_create_time.is_set || is_set(vc_create_time.yfilter)) leaf_name_data.push_back(vc_create_time.get_name_leafdata());
    if (vc_up_time.is_set || is_set(vc_up_time.yfilter)) leaf_name_data.push_back(vc_up_time.get_name_leafdata());
    if (discontinuity_time.is_set || is_set(discontinuity_time.yfilter)) leaf_name_data.push_back(discontinuity_time.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.yfilter)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (in_pkts.is_set || is_set(in_pkts.yfilter)) leaf_name_data.push_back(in_pkts.get_name_leafdata());
    if (in_errors.is_set || is_set(in_errors.yfilter)) leaf_name_data.push_back(in_errors.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.yfilter)) leaf_name_data.push_back(out_octets.get_name_leafdata());
    if (out_pkts.is_set || is_set(out_pkts.yfilter)) leaf_name_data.push_back(out_pkts.get_name_leafdata());
    if (out_errors.is_set || is_set(out_errors.yfilter)) leaf_name_data.push_back(out_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PseudowireState::Pseudowires::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PseudowireState::Pseudowires::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PseudowireState::Pseudowires::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vc-create-time")
    {
        vc_create_time = value;
        vc_create_time.value_namespace = name_space;
        vc_create_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-up-time")
    {
        vc_up_time = value;
        vc_up_time.value_namespace = name_space;
        vc_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discontinuity-time")
    {
        discontinuity_time = value;
        discontinuity_time.value_namespace = name_space;
        discontinuity_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
        in_octets.value_namespace = name_space;
        in_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-pkts")
    {
        in_pkts = value;
        in_pkts.value_namespace = name_space;
        in_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-errors")
    {
        in_errors = value;
        in_errors.value_namespace = name_space;
        in_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
        out_octets.value_namespace = name_space;
        out_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pkts")
    {
        out_pkts = value;
        out_pkts.value_namespace = name_space;
        out_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-errors")
    {
        out_errors = value;
        out_errors.value_namespace = name_space;
        out_errors.value_namespace_prefix = name_space_prefix;
    }
}

void PseudowireState::Pseudowires::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vc-create-time")
    {
        vc_create_time.yfilter = yfilter;
    }
    if(value_path == "vc-up-time")
    {
        vc_up_time.yfilter = yfilter;
    }
    if(value_path == "discontinuity-time")
    {
        discontinuity_time.yfilter = yfilter;
    }
    if(value_path == "in-octets")
    {
        in_octets.yfilter = yfilter;
    }
    if(value_path == "in-pkts")
    {
        in_pkts.yfilter = yfilter;
    }
    if(value_path == "in-errors")
    {
        in_errors.yfilter = yfilter;
    }
    if(value_path == "out-octets")
    {
        out_octets.yfilter = yfilter;
    }
    if(value_path == "out-pkts")
    {
        out_pkts.yfilter = yfilter;
    }
    if(value_path == "out-errors")
    {
        out_errors.yfilter = yfilter;
    }
}

bool PseudowireState::Pseudowires::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vc-create-time" || name == "vc-up-time" || name == "discontinuity-time" || name == "in-octets" || name == "in-pkts" || name == "in-errors" || name == "out-octets" || name == "out-pkts" || name == "out-errors")
        return true;
    return false;
}

PwEncapMpls::PwEncapMpls()
     : Identity("urn:cisco:params:xml:ns:yang:pw", "cisco-pw", "cisco-pw:pw-encap-mpls")
{

}

PwEncapMpls::~PwEncapMpls()
{
}

PwVcTypeEther::PwVcTypeEther()
     : Identity("urn:cisco:params:xml:ns:yang:pw", "cisco-pw", "cisco-pw:pw-vc-type-ether")
{

}

PwVcTypeEther::~PwVcTypeEther()
{
}

PwVcTypeVlan::PwVcTypeVlan()
     : Identity("urn:cisco:params:xml:ns:yang:pw", "cisco-pw", "cisco-pw:pw-vc-type-vlan")
{

}

PwVcTypeVlan::~PwVcTypeVlan()
{
}

PwVcTypeVlanPassthrough::PwVcTypeVlanPassthrough()
     : Identity("urn:cisco:params:xml:ns:yang:pw", "cisco-pw", "cisco-pw:pw-vc-type-vlan-passthrough")
{

}

PwVcTypeVlanPassthrough::~PwVcTypeVlanPassthrough()
{
}

PwLbEthernetType::PwLbEthernetType()
     : Identity("urn:cisco:params:xml:ns:yang:pw", "cisco-pw", "cisco-pw:pw-lb-ethernet-type")
{

}

PwLbEthernetType::~PwLbEthernetType()
{
}

PwLbEthSrcMac::PwLbEthSrcMac()
     : Identity("urn:cisco:params:xml:ns:yang:pw", "cisco-pw", "cisco-pw:pw-lb-eth-src-mac")
{

}

PwLbEthSrcMac::~PwLbEthSrcMac()
{
}

PwLbEthDstMac::PwLbEthDstMac()
     : Identity("urn:cisco:params:xml:ns:yang:pw", "cisco-pw", "cisco-pw:pw-lb-eth-dst-mac")
{

}

PwLbEthDstMac::~PwLbEthDstMac()
{
}

PwLbEthSrcDstMac::PwLbEthSrcDstMac()
     : Identity("urn:cisco:params:xml:ns:yang:pw", "cisco-pw", "cisco-pw:pw-lb-eth-src-dst-mac")
{

}

PwLbEthSrcDstMac::~PwLbEthSrcDstMac()
{
}

PwLbIpType::PwLbIpType()
     : Identity("urn:cisco:params:xml:ns:yang:pw", "cisco-pw", "cisco-pw:pw-lb-ip-type")
{

}

PwLbIpType::~PwLbIpType()
{
}

PwLbIpSrcIp::PwLbIpSrcIp()
     : Identity("urn:cisco:params:xml:ns:yang:pw", "cisco-pw", "cisco-pw:pw-lb-ip-src-ip")
{

}

PwLbIpSrcIp::~PwLbIpSrcIp()
{
}

PwLbIpDstIp::PwLbIpDstIp()
     : Identity("urn:cisco:params:xml:ns:yang:pw", "cisco-pw", "cisco-pw:pw-lb-ip-dst-ip")
{

}

PwLbIpDstIp::~PwLbIpDstIp()
{
}

PwLbIpSrcDstIp::PwLbIpSrcDstIp()
     : Identity("urn:cisco:params:xml:ns:yang:pw", "cisco-pw", "cisco-pw:pw-lb-ip-src-dst-ip")
{

}

PwLbIpSrcDstIp::~PwLbIpSrcDstIp()
{
}

PwSignalingProtocolNone::PwSignalingProtocolNone()
     : Identity("urn:cisco:params:xml:ns:yang:pw", "cisco-pw", "cisco-pw:pw-signaling-protocol-none")
{

}

PwSignalingProtocolNone::~PwSignalingProtocolNone()
{
}

PwSignalingProtocolLdp::PwSignalingProtocolLdp()
     : Identity("urn:cisco:params:xml:ns:yang:pw", "cisco-pw", "cisco-pw:pw-signaling-protocol-ldp")
{

}

PwSignalingProtocolLdp::~PwSignalingProtocolLdp()
{
}

PwSignalingProtocolBgp::PwSignalingProtocolBgp()
     : Identity("urn:cisco:params:xml:ns:yang:pw", "cisco-pw", "cisco-pw:pw-signaling-protocol-bgp")
{

}

PwSignalingProtocolBgp::~PwSignalingProtocolBgp()
{
}

PwSequencingReceive::PwSequencingReceive()
     : Identity("urn:cisco:params:xml:ns:yang:pw", "cisco-pw", "cisco-pw:pw-sequencing-receive")
{

}

PwSequencingReceive::~PwSequencingReceive()
{
}

PwSequencingTransmit::PwSequencingTransmit()
     : Identity("urn:cisco:params:xml:ns:yang:pw", "cisco-pw", "cisco-pw:pw-sequencing-transmit")
{

}

PwSequencingTransmit::~PwSequencingTransmit()
{
}

PwSequencingBoth::PwSequencingBoth()
     : Identity("urn:cisco:params:xml:ns:yang:pw", "cisco-pw", "cisco-pw:pw-sequencing-both")
{

}

PwSequencingBoth::~PwSequencingBoth()
{
}

const Enum::YLeaf PwOperStateType::up {1, "up"};
const Enum::YLeaf PwOperStateType::down {2, "down"};
const Enum::YLeaf PwOperStateType::cold_standby {3, "cold-standby"};
const Enum::YLeaf PwOperStateType::hot_standby {4, "hot-standby"};
const Enum::YLeaf PwOperStateType::recovering {5, "recovering"};
const Enum::YLeaf PwOperStateType::no_hardware {6, "no-hardware"};
const Enum::YLeaf PwOperStateType::unresolved {7, "unresolved"};
const Enum::YLeaf PwOperStateType::provisioned {8, "provisioned"};
const Enum::YLeaf PwOperStateType::remote_standby {9, "remote-standby"};
const Enum::YLeaf PwOperStateType::local_ready {10, "local-ready"};
const Enum::YLeaf PwOperStateType::all_ready {11, "all-ready"};

const Enum::YLeaf PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::Direction::transmit {1, "transmit"};
const Enum::YLeaf PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::Direction::receive {2, "receive"};
const Enum::YLeaf PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::Direction::both {3, "both"};

const Enum::YLeaf PseudowireState::Pseudowires::VcOwnerType::vpws {1, "vpws"};
const Enum::YLeaf PseudowireState::Pseudowires::VcOwnerType::vpls_vfi {2, "vpls-vfi"};
const Enum::YLeaf PseudowireState::Pseudowires::VcOwnerType::vpls_bridge_domain {3, "vpls-bridge-domain"};
const Enum::YLeaf PseudowireState::Pseudowires::VcOwnerType::interface {4, "interface"};

const Enum::YLeaf PseudowireState::Pseudowires::VcPsnType::mpls {1, "mpls"};
const Enum::YLeaf PseudowireState::Pseudowires::VcPsnType::l2tp {2, "l2tp"};
const Enum::YLeaf PseudowireState::Pseudowires::VcPsnType::ip {3, "ip"};
const Enum::YLeaf PseudowireState::Pseudowires::VcPsnType::mpls_over_ip {4, "mpls-over-ip"};
const Enum::YLeaf PseudowireState::Pseudowires::VcPsnType::gre {5, "gre"};
const Enum::YLeaf PseudowireState::Pseudowires::VcPsnType::other {6, "other"};

const Enum::YLeaf PseudowireState::Pseudowires::VcRemoteControlWord::noControlWord {1, "noControlWord"};
const Enum::YLeaf PseudowireState::Pseudowires::VcRemoteControlWord::withControlWord {2, "withControlWord"};
const Enum::YLeaf PseudowireState::Pseudowires::VcRemoteControlWord::notYetKnown {3, "notYetKnown"};


}
}

