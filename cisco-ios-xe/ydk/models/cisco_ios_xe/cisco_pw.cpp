
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "cisco_pw.hpp"

namespace ydk {
namespace cisco_pw {

PwSignalingProtocolTypeIdentity::PwSignalingProtocolTypeIdentity()
     : Identity("cisco-pw:pw-signaling-protocol-type")
{
}

PwSignalingProtocolTypeIdentity::~PwSignalingProtocolTypeIdentity()
{
}

PwLoadBalanceTypeIdentity::PwLoadBalanceTypeIdentity()
     : Identity("cisco-pw:pw-load-balance-type")
{
}

PwLoadBalanceTypeIdentity::~PwLoadBalanceTypeIdentity()
{
}

PwEncapsulationTypeIdentity::PwEncapsulationTypeIdentity()
     : Identity("cisco-pw:pw-encapsulation-type")
{
}

PwEncapsulationTypeIdentity::~PwEncapsulationTypeIdentity()
{
}

PwVcTypeIdentity::PwVcTypeIdentity()
     : Identity("cisco-pw:pw-vc-type")
{
}

PwVcTypeIdentity::~PwVcTypeIdentity()
{
}

PwSequencingTypeIdentity::PwSequencingTypeIdentity()
     : Identity("cisco-pw:pw-sequencing-type")
{
}

PwSequencingTypeIdentity::~PwSequencingTypeIdentity()
{
}

PseudowireConfig::PseudowireConfig()
    :
    global_(std::make_shared<PseudowireConfig::Global>())
	,pw_static_oam_classes_(std::make_shared<PseudowireConfig::PwStaticOamClasses>())
	,pw_templates_(std::make_shared<PseudowireConfig::PwTemplates>())
{
    global_->parent = this;

    pw_static_oam_classes_->parent = this;

    pw_templates_->parent = this;

    yang_name = "pseudowire-config"; yang_parent_name = "cisco-pw";
}

PseudowireConfig::~PseudowireConfig()
{
}

bool PseudowireConfig::has_data() const
{
    return (global_ !=  nullptr && global_->has_data())
	|| (pw_static_oam_classes_ !=  nullptr && pw_static_oam_classes_->has_data())
	|| (pw_templates_ !=  nullptr && pw_templates_->has_data());
}

bool PseudowireConfig::has_operation() const
{
    return is_set(operation)
	|| (global_ !=  nullptr && global_->has_operation())
	|| (pw_static_oam_classes_ !=  nullptr && pw_static_oam_classes_->has_operation())
	|| (pw_templates_ !=  nullptr && pw_templates_->has_operation());
}

std::string PseudowireConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-pw:pseudowire-config";

    return path_buffer.str();

}

const EntityPath PseudowireConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PseudowireConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global_ == nullptr)
        {
            global_ = std::make_shared<PseudowireConfig::Global>();
        }
        return global_;
    }

    if(child_yang_name == "pw-static-oam-classes")
    {
        if(pw_static_oam_classes_ == nullptr)
        {
            pw_static_oam_classes_ = std::make_shared<PseudowireConfig::PwStaticOamClasses>();
        }
        return pw_static_oam_classes_;
    }

    if(child_yang_name == "pw-templates")
    {
        if(pw_templates_ == nullptr)
        {
            pw_templates_ = std::make_shared<PseudowireConfig::PwTemplates>();
        }
        return pw_templates_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PseudowireConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global_ != nullptr)
    {
        children["global"] = global_;
    }

    if(pw_static_oam_classes_ != nullptr)
    {
        children["pw-static-oam-classes"] = pw_static_oam_classes_;
    }

    if(pw_templates_ != nullptr)
    {
        children["pw-templates"] = pw_templates_;
    }

    return children;
}

void PseudowireConfig::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> PseudowireConfig::clone_ptr() const
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

PseudowireConfig::Global::Global()
    :
    predictive_redundancy{YType::boolean, "predictive-redundancy"},
    pw_grouping{YType::boolean, "pw-grouping"},
    pw_oam_refresh_transmit{YType::uint32, "pw-oam-refresh-transmit"},
    pw_status{YType::boolean, "pw-status"},
    vc_state_notification_batch_size{YType::uint32, "vc-state-notification-batch-size"},
    vc_state_notification_enabled{YType::boolean, "vc-state-notification-enabled"},
    vc_state_notification_rate{YType::uint32, "vc-state-notification-rate"}
{
    yang_name = "global"; yang_parent_name = "pseudowire-config";
}

PseudowireConfig::Global::~Global()
{
}

bool PseudowireConfig::Global::has_data() const
{
    return predictive_redundancy.is_set
	|| pw_grouping.is_set
	|| pw_oam_refresh_transmit.is_set
	|| pw_status.is_set
	|| vc_state_notification_batch_size.is_set
	|| vc_state_notification_enabled.is_set
	|| vc_state_notification_rate.is_set;
}

bool PseudowireConfig::Global::has_operation() const
{
    return is_set(operation)
	|| is_set(predictive_redundancy.operation)
	|| is_set(pw_grouping.operation)
	|| is_set(pw_oam_refresh_transmit.operation)
	|| is_set(pw_status.operation)
	|| is_set(vc_state_notification_batch_size.operation)
	|| is_set(vc_state_notification_enabled.operation)
	|| is_set(vc_state_notification_rate.operation);
}

std::string PseudowireConfig::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath PseudowireConfig::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-pw:pseudowire-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (predictive_redundancy.is_set || is_set(predictive_redundancy.operation)) leaf_name_data.push_back(predictive_redundancy.get_name_leafdata());
    if (pw_grouping.is_set || is_set(pw_grouping.operation)) leaf_name_data.push_back(pw_grouping.get_name_leafdata());
    if (pw_oam_refresh_transmit.is_set || is_set(pw_oam_refresh_transmit.operation)) leaf_name_data.push_back(pw_oam_refresh_transmit.get_name_leafdata());
    if (pw_status.is_set || is_set(pw_status.operation)) leaf_name_data.push_back(pw_status.get_name_leafdata());
    if (vc_state_notification_batch_size.is_set || is_set(vc_state_notification_batch_size.operation)) leaf_name_data.push_back(vc_state_notification_batch_size.get_name_leafdata());
    if (vc_state_notification_enabled.is_set || is_set(vc_state_notification_enabled.operation)) leaf_name_data.push_back(vc_state_notification_enabled.get_name_leafdata());
    if (vc_state_notification_rate.is_set || is_set(vc_state_notification_rate.operation)) leaf_name_data.push_back(vc_state_notification_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PseudowireConfig::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PseudowireConfig::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PseudowireConfig::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "predictive-redundancy")
    {
        predictive_redundancy = value;
    }
    if(value_path == "pw-grouping")
    {
        pw_grouping = value;
    }
    if(value_path == "pw-oam-refresh-transmit")
    {
        pw_oam_refresh_transmit = value;
    }
    if(value_path == "pw-status")
    {
        pw_status = value;
    }
    if(value_path == "vc-state-notification-batch-size")
    {
        vc_state_notification_batch_size = value;
    }
    if(value_path == "vc-state-notification-enabled")
    {
        vc_state_notification_enabled = value;
    }
    if(value_path == "vc-state-notification-rate")
    {
        vc_state_notification_rate = value;
    }
}

PseudowireConfig::PwTemplates::PwTemplates()
{
    yang_name = "pw-templates"; yang_parent_name = "pseudowire-config";
}

PseudowireConfig::PwTemplates::~PwTemplates()
{
}

bool PseudowireConfig::PwTemplates::has_data() const
{
    for (std::size_t index=0; index<pw_template_.size(); index++)
    {
        if(pw_template_[index]->has_data())
            return true;
    }
    return false;
}

bool PseudowireConfig::PwTemplates::has_operation() const
{
    for (std::size_t index=0; index<pw_template_.size(); index++)
    {
        if(pw_template_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PseudowireConfig::PwTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-templates";

    return path_buffer.str();

}

const EntityPath PseudowireConfig::PwTemplates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-pw:pseudowire-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PseudowireConfig::PwTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pw-template")
    {
        for(auto const & c : pw_template_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PseudowireConfig::PwTemplates::PwTemplate>();
        c->parent = this;
        pw_template_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PseudowireConfig::PwTemplates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pw_template_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PseudowireConfig::PwTemplates::set_value(const std::string & value_path, std::string value)
{
}

PseudowireConfig::PwTemplates::PwTemplate::PwTemplate()
    :
    name{YType::str, "name"},
    control_word{YType::boolean, "control-word"},
    encapsulation{YType::identityref, "encapsulation"},
    mac_withdraw{YType::boolean, "mac-withdraw"},
    signaling_protocol{YType::identityref, "signaling-protocol"},
    source_ip{YType::str, "source-ip"},
    switching_tlv{YType::boolean, "switching-tlv"},
    tag_rewrite_ingress_vlan{YType::uint16, "tag-rewrite-ingress-vlan"},
    vc_type{YType::identityref, "vc-type"}
    	,
    load_balance_(std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::LoadBalance>())
	,port_profile_spec_(std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec>())
	,preferred_path_(std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::PreferredPath>())
	,sequencing_(std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::Sequencing>())
	,status_(std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::Status>())
	,switchover_delay_(std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay>())
	,vccv_(std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::Vccv>())
{
    load_balance_->parent = this;

    port_profile_spec_->parent = this;

    preferred_path_->parent = this;

    sequencing_->parent = this;

    status_->parent = this;

    switchover_delay_->parent = this;

    vccv_->parent = this;

    yang_name = "pw-template"; yang_parent_name = "pw-templates";
}

PseudowireConfig::PwTemplates::PwTemplate::~PwTemplate()
{
}

bool PseudowireConfig::PwTemplates::PwTemplate::has_data() const
{
    return name.is_set
	|| control_word.is_set
	|| encapsulation.is_set
	|| mac_withdraw.is_set
	|| signaling_protocol.is_set
	|| source_ip.is_set
	|| switching_tlv.is_set
	|| tag_rewrite_ingress_vlan.is_set
	|| vc_type.is_set
	|| (load_balance_ !=  nullptr && load_balance_->has_data())
	|| (port_profile_spec_ !=  nullptr && port_profile_spec_->has_data())
	|| (preferred_path_ !=  nullptr && preferred_path_->has_data())
	|| (sequencing_ !=  nullptr && sequencing_->has_data())
	|| (status_ !=  nullptr && status_->has_data())
	|| (switchover_delay_ !=  nullptr && switchover_delay_->has_data())
	|| (vccv_ !=  nullptr && vccv_->has_data());
}

bool PseudowireConfig::PwTemplates::PwTemplate::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(control_word.operation)
	|| is_set(encapsulation.operation)
	|| is_set(mac_withdraw.operation)
	|| is_set(signaling_protocol.operation)
	|| is_set(source_ip.operation)
	|| is_set(switching_tlv.operation)
	|| is_set(tag_rewrite_ingress_vlan.operation)
	|| is_set(vc_type.operation)
	|| (load_balance_ !=  nullptr && load_balance_->has_operation())
	|| (port_profile_spec_ !=  nullptr && port_profile_spec_->has_operation())
	|| (preferred_path_ !=  nullptr && preferred_path_->has_operation())
	|| (sequencing_ !=  nullptr && sequencing_->has_operation())
	|| (status_ !=  nullptr && status_->has_operation())
	|| (switchover_delay_ !=  nullptr && switchover_delay_->has_operation())
	|| (vccv_ !=  nullptr && vccv_->has_operation());
}

std::string PseudowireConfig::PwTemplates::PwTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-template" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath PseudowireConfig::PwTemplates::PwTemplate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-pw:pseudowire-config/pw-templates/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (control_word.is_set || is_set(control_word.operation)) leaf_name_data.push_back(control_word.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (mac_withdraw.is_set || is_set(mac_withdraw.operation)) leaf_name_data.push_back(mac_withdraw.get_name_leafdata());
    if (signaling_protocol.is_set || is_set(signaling_protocol.operation)) leaf_name_data.push_back(signaling_protocol.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.operation)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (switching_tlv.is_set || is_set(switching_tlv.operation)) leaf_name_data.push_back(switching_tlv.get_name_leafdata());
    if (tag_rewrite_ingress_vlan.is_set || is_set(tag_rewrite_ingress_vlan.operation)) leaf_name_data.push_back(tag_rewrite_ingress_vlan.get_name_leafdata());
    if (vc_type.is_set || is_set(vc_type.operation)) leaf_name_data.push_back(vc_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PseudowireConfig::PwTemplates::PwTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-balance")
    {
        if(load_balance_ == nullptr)
        {
            load_balance_ = std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::LoadBalance>();
        }
        return load_balance_;
    }

    if(child_yang_name == "port-profile-spec")
    {
        if(port_profile_spec_ == nullptr)
        {
            port_profile_spec_ = std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec>();
        }
        return port_profile_spec_;
    }

    if(child_yang_name == "preferred-path")
    {
        if(preferred_path_ == nullptr)
        {
            preferred_path_ = std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::PreferredPath>();
        }
        return preferred_path_;
    }

    if(child_yang_name == "sequencing")
    {
        if(sequencing_ == nullptr)
        {
            sequencing_ = std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::Sequencing>();
        }
        return sequencing_;
    }

    if(child_yang_name == "status")
    {
        if(status_ == nullptr)
        {
            status_ = std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::Status>();
        }
        return status_;
    }

    if(child_yang_name == "switchover-delay")
    {
        if(switchover_delay_ == nullptr)
        {
            switchover_delay_ = std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay>();
        }
        return switchover_delay_;
    }

    if(child_yang_name == "vccv")
    {
        if(vccv_ == nullptr)
        {
            vccv_ = std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::Vccv>();
        }
        return vccv_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PseudowireConfig::PwTemplates::PwTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(load_balance_ != nullptr)
    {
        children["load-balance"] = load_balance_;
    }

    if(port_profile_spec_ != nullptr)
    {
        children["port-profile-spec"] = port_profile_spec_;
    }

    if(preferred_path_ != nullptr)
    {
        children["preferred-path"] = preferred_path_;
    }

    if(sequencing_ != nullptr)
    {
        children["sequencing"] = sequencing_;
    }

    if(status_ != nullptr)
    {
        children["status"] = status_;
    }

    if(switchover_delay_ != nullptr)
    {
        children["switchover-delay"] = switchover_delay_;
    }

    if(vccv_ != nullptr)
    {
        children["vccv"] = vccv_;
    }

    return children;
}

void PseudowireConfig::PwTemplates::PwTemplate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "control-word")
    {
        control_word = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "mac-withdraw")
    {
        mac_withdraw = value;
    }
    if(value_path == "signaling-protocol")
    {
        signaling_protocol = value;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
    }
    if(value_path == "switching-tlv")
    {
        switching_tlv = value;
    }
    if(value_path == "tag-rewrite-ingress-vlan")
    {
        tag_rewrite_ingress_vlan = value;
    }
    if(value_path == "vc-type")
    {
        vc_type = value;
    }
}

PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::LoadBalance()
    :
    ethernet{YType::identityref, "ethernet"},
    ip{YType::identityref, "ip"}
    	,
    flow_label_(std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel>())
{
    flow_label_->parent = this;

    yang_name = "load-balance"; yang_parent_name = "pw-template";
}

PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::~LoadBalance()
{
}

bool PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::has_data() const
{
    return ethernet.is_set
	|| ip.is_set
	|| (flow_label_ !=  nullptr && flow_label_->has_data());
}

bool PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::has_operation() const
{
    return is_set(operation)
	|| is_set(ethernet.operation)
	|| is_set(ip.operation)
	|| (flow_label_ !=  nullptr && flow_label_->has_operation());
}

std::string PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance";

    return path_buffer.str();

}

const EntityPath PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LoadBalance' in cisco_pw cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet.is_set || is_set(ethernet.operation)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-label")
    {
        if(flow_label_ == nullptr)
        {
            flow_label_ = std::make_shared<PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel>();
        }
        return flow_label_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_label_ != nullptr)
    {
        children["flow-label"] = flow_label_;
    }

    return children;
}

void PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ethernet")
    {
        ethernet = value;
    }
    if(value_path == "ip")
    {
        ip = value;
    }
}

PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::FlowLabel()
    :
    direction{YType::enumeration, "direction"},
    static_{YType::boolean, "static"},
    tlv_code_17{YType::boolean, "tlv-code-17"}
{
    yang_name = "flow-label"; yang_parent_name = "load-balance";
}

PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::~FlowLabel()
{
}

bool PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::has_data() const
{
    return direction.is_set
	|| static_.is_set
	|| tlv_code_17.is_set;
}

bool PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(static_.operation)
	|| is_set(tlv_code_17.operation);
}

std::string PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-label";

    return path_buffer.str();

}

const EntityPath PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowLabel' in cisco_pw cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (static_.is_set || is_set(static_.operation)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (tlv_code_17.is_set || is_set(tlv_code_17.operation)) leaf_name_data.push_back(tlv_code_17.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "static")
    {
        static_ = value;
    }
    if(value_path == "tlv-code-17")
    {
        tlv_code_17 = value;
    }
}

PseudowireConfig::PwTemplates::PwTemplate::PreferredPath::PreferredPath()
    :
    address{YType::str, "address"},
    disable_fallback{YType::boolean, "disable-fallback"},
    hostname{YType::str, "hostname"},
    interface{YType::str, "interface"}
{
    yang_name = "preferred-path"; yang_parent_name = "pw-template";
}

PseudowireConfig::PwTemplates::PwTemplate::PreferredPath::~PreferredPath()
{
}

bool PseudowireConfig::PwTemplates::PwTemplate::PreferredPath::has_data() const
{
    return address.is_set
	|| disable_fallback.is_set
	|| hostname.is_set
	|| interface.is_set;
}

bool PseudowireConfig::PwTemplates::PwTemplate::PreferredPath::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(disable_fallback.operation)
	|| is_set(hostname.operation)
	|| is_set(interface.operation);
}

std::string PseudowireConfig::PwTemplates::PwTemplate::PreferredPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred-path";

    return path_buffer.str();

}

const EntityPath PseudowireConfig::PwTemplates::PwTemplate::PreferredPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreferredPath' in cisco_pw cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (disable_fallback.is_set || is_set(disable_fallback.operation)) leaf_name_data.push_back(disable_fallback.get_name_leafdata());
    if (hostname.is_set || is_set(hostname.operation)) leaf_name_data.push_back(hostname.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PseudowireConfig::PwTemplates::PwTemplate::PreferredPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PseudowireConfig::PwTemplates::PwTemplate::PreferredPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PseudowireConfig::PwTemplates::PwTemplate::PreferredPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "disable-fallback")
    {
        disable_fallback = value;
    }
    if(value_path == "hostname")
    {
        hostname = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
}

PseudowireConfig::PwTemplates::PwTemplate::Sequencing::Sequencing()
    :
    direction{YType::identityref, "direction"},
    resync{YType::int32, "resync"}
{
    yang_name = "sequencing"; yang_parent_name = "pw-template";
}

PseudowireConfig::PwTemplates::PwTemplate::Sequencing::~Sequencing()
{
}

bool PseudowireConfig::PwTemplates::PwTemplate::Sequencing::has_data() const
{
    return direction.is_set
	|| resync.is_set;
}

bool PseudowireConfig::PwTemplates::PwTemplate::Sequencing::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(resync.operation);
}

std::string PseudowireConfig::PwTemplates::PwTemplate::Sequencing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequencing";

    return path_buffer.str();

}

const EntityPath PseudowireConfig::PwTemplates::PwTemplate::Sequencing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sequencing' in cisco_pw cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (resync.is_set || is_set(resync.operation)) leaf_name_data.push_back(resync.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PseudowireConfig::PwTemplates::PwTemplate::Sequencing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PseudowireConfig::PwTemplates::PwTemplate::Sequencing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PseudowireConfig::PwTemplates::PwTemplate::Sequencing::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "resync")
    {
        resync = value;
    }
}

PseudowireConfig::PwTemplates::PwTemplate::Vccv::Vccv()
    :
    control_word{YType::boolean, "control-word"}
{
    yang_name = "vccv"; yang_parent_name = "pw-template";
}

PseudowireConfig::PwTemplates::PwTemplate::Vccv::~Vccv()
{
}

bool PseudowireConfig::PwTemplates::PwTemplate::Vccv::has_data() const
{
    return control_word.is_set;
}

bool PseudowireConfig::PwTemplates::PwTemplate::Vccv::has_operation() const
{
    return is_set(operation)
	|| is_set(control_word.operation);
}

std::string PseudowireConfig::PwTemplates::PwTemplate::Vccv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vccv";

    return path_buffer.str();

}

const EntityPath PseudowireConfig::PwTemplates::PwTemplate::Vccv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vccv' in cisco_pw cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control_word.is_set || is_set(control_word.operation)) leaf_name_data.push_back(control_word.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PseudowireConfig::PwTemplates::PwTemplate::Vccv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PseudowireConfig::PwTemplates::PwTemplate::Vccv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PseudowireConfig::PwTemplates::PwTemplate::Vccv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "control-word")
    {
        control_word = value;
    }
}

PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay::SwitchoverDelay()
    :
    never{YType::boolean, "never"},
    switchover_timer{YType::uint8, "switchover-timer"},
    timer{YType::uint8, "timer"}
{
    yang_name = "switchover-delay"; yang_parent_name = "pw-template";
}

PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay::~SwitchoverDelay()
{
}

bool PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay::has_data() const
{
    return never.is_set
	|| switchover_timer.is_set
	|| timer.is_set;
}

bool PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay::has_operation() const
{
    return is_set(operation)
	|| is_set(never.operation)
	|| is_set(switchover_timer.operation)
	|| is_set(timer.operation);
}

std::string PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchover-delay";

    return path_buffer.str();

}

const EntityPath PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SwitchoverDelay' in cisco_pw cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (never.is_set || is_set(never.operation)) leaf_name_data.push_back(never.get_name_leafdata());
    if (switchover_timer.is_set || is_set(switchover_timer.operation)) leaf_name_data.push_back(switchover_timer.get_name_leafdata());
    if (timer.is_set || is_set(timer.operation)) leaf_name_data.push_back(timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PseudowireConfig::PwTemplates::PwTemplate::SwitchoverDelay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "never")
    {
        never = value;
    }
    if(value_path == "switchover-timer")
    {
        switchover_timer = value;
    }
    if(value_path == "timer")
    {
        timer = value;
    }
}

PseudowireConfig::PwTemplates::PwTemplate::Status::Status()
    :
    decoupled{YType::boolean, "decoupled"},
    disable{YType::boolean, "disable"},
    peer_topo_dual_homed{YType::boolean, "peer-topo-dual-homed"},
    redundancy_master{YType::boolean, "redundancy-master"},
    route_watch_disable{YType::boolean, "route-watch-disable"}
{
    yang_name = "status"; yang_parent_name = "pw-template";
}

PseudowireConfig::PwTemplates::PwTemplate::Status::~Status()
{
}

bool PseudowireConfig::PwTemplates::PwTemplate::Status::has_data() const
{
    return decoupled.is_set
	|| disable.is_set
	|| peer_topo_dual_homed.is_set
	|| redundancy_master.is_set
	|| route_watch_disable.is_set;
}

bool PseudowireConfig::PwTemplates::PwTemplate::Status::has_operation() const
{
    return is_set(operation)
	|| is_set(decoupled.operation)
	|| is_set(disable.operation)
	|| is_set(peer_topo_dual_homed.operation)
	|| is_set(redundancy_master.operation)
	|| is_set(route_watch_disable.operation);
}

std::string PseudowireConfig::PwTemplates::PwTemplate::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";

    return path_buffer.str();

}

const EntityPath PseudowireConfig::PwTemplates::PwTemplate::Status::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Status' in cisco_pw cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (decoupled.is_set || is_set(decoupled.operation)) leaf_name_data.push_back(decoupled.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (peer_topo_dual_homed.is_set || is_set(peer_topo_dual_homed.operation)) leaf_name_data.push_back(peer_topo_dual_homed.get_name_leafdata());
    if (redundancy_master.is_set || is_set(redundancy_master.operation)) leaf_name_data.push_back(redundancy_master.get_name_leafdata());
    if (route_watch_disable.is_set || is_set(route_watch_disable.operation)) leaf_name_data.push_back(route_watch_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PseudowireConfig::PwTemplates::PwTemplate::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PseudowireConfig::PwTemplates::PwTemplate::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PseudowireConfig::PwTemplates::PwTemplate::Status::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "decoupled")
    {
        decoupled = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "peer-topo-dual-homed")
    {
        peer_topo_dual_homed = value;
    }
    if(value_path == "redundancy-master")
    {
        redundancy_master = value;
    }
    if(value_path == "route-watch-disable")
    {
        route_watch_disable = value;
    }
}

PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec::PortProfileSpec()
    :
    description{YType::str, "description"},
    enabled{YType::boolean, "enabled"},
    max_ports{YType::uint16, "max-ports"},
    mtu{YType::uint32, "mtu"},
    shut_force{YType::boolean, "shut-force"},
    shutdown{YType::boolean, "shutdown"}
{
    yang_name = "port-profile-spec"; yang_parent_name = "pw-template";
}

PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec::~PortProfileSpec()
{
}

bool PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec::has_data() const
{
    return description.is_set
	|| enabled.is_set
	|| max_ports.is_set
	|| mtu.is_set
	|| shut_force.is_set
	|| shutdown.is_set;
}

bool PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(enabled.operation)
	|| is_set(max_ports.operation)
	|| is_set(mtu.operation)
	|| is_set(shut_force.operation)
	|| is_set(shutdown.operation);
}

std::string PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-profile-spec";

    return path_buffer.str();

}

const EntityPath PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortProfileSpec' in cisco_pw cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (max_ports.is_set || is_set(max_ports.operation)) leaf_name_data.push_back(max_ports.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (shut_force.is_set || is_set(shut_force.operation)) leaf_name_data.push_back(shut_force.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PseudowireConfig::PwTemplates::PwTemplate::PortProfileSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "max-ports")
    {
        max_ports = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "shut-force")
    {
        shut_force = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

PseudowireConfig::PwStaticOamClasses::PwStaticOamClasses()
{
    yang_name = "pw-static-oam-classes"; yang_parent_name = "pseudowire-config";
}

PseudowireConfig::PwStaticOamClasses::~PwStaticOamClasses()
{
}

bool PseudowireConfig::PwStaticOamClasses::has_data() const
{
    for (std::size_t index=0; index<pw_static_oam_class_.size(); index++)
    {
        if(pw_static_oam_class_[index]->has_data())
            return true;
    }
    return false;
}

bool PseudowireConfig::PwStaticOamClasses::has_operation() const
{
    for (std::size_t index=0; index<pw_static_oam_class_.size(); index++)
    {
        if(pw_static_oam_class_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PseudowireConfig::PwStaticOamClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-static-oam-classes";

    return path_buffer.str();

}

const EntityPath PseudowireConfig::PwStaticOamClasses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-pw:pseudowire-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PseudowireConfig::PwStaticOamClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pw-static-oam-class")
    {
        for(auto const & c : pw_static_oam_class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PseudowireConfig::PwStaticOamClasses::PwStaticOamClass>();
        c->parent = this;
        pw_static_oam_class_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PseudowireConfig::PwStaticOamClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pw_static_oam_class_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PseudowireConfig::PwStaticOamClasses::set_value(const std::string & value_path, std::string value)
{
}

PseudowireConfig::PwStaticOamClasses::PwStaticOamClass::PwStaticOamClass()
    :
    name{YType::str, "name"},
    ack{YType::boolean, "ack"},
    keepalive{YType::uint32, "keepalive"},
    timeout_refresh_ack{YType::uint32, "timeout-refresh-ack"},
    timeout_refresh_send{YType::uint32, "timeout-refresh-send"}
{
    yang_name = "pw-static-oam-class"; yang_parent_name = "pw-static-oam-classes";
}

PseudowireConfig::PwStaticOamClasses::PwStaticOamClass::~PwStaticOamClass()
{
}

bool PseudowireConfig::PwStaticOamClasses::PwStaticOamClass::has_data() const
{
    return name.is_set
	|| ack.is_set
	|| keepalive.is_set
	|| timeout_refresh_ack.is_set
	|| timeout_refresh_send.is_set;
}

bool PseudowireConfig::PwStaticOamClasses::PwStaticOamClass::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(ack.operation)
	|| is_set(keepalive.operation)
	|| is_set(timeout_refresh_ack.operation)
	|| is_set(timeout_refresh_send.operation);
}

std::string PseudowireConfig::PwStaticOamClasses::PwStaticOamClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-static-oam-class" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath PseudowireConfig::PwStaticOamClasses::PwStaticOamClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-pw:pseudowire-config/pw-static-oam-classes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ack.is_set || is_set(ack.operation)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.operation)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (timeout_refresh_ack.is_set || is_set(timeout_refresh_ack.operation)) leaf_name_data.push_back(timeout_refresh_ack.get_name_leafdata());
    if (timeout_refresh_send.is_set || is_set(timeout_refresh_send.operation)) leaf_name_data.push_back(timeout_refresh_send.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PseudowireConfig::PwStaticOamClasses::PwStaticOamClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PseudowireConfig::PwStaticOamClasses::PwStaticOamClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PseudowireConfig::PwStaticOamClasses::PwStaticOamClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "ack")
    {
        ack = value;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
    }
    if(value_path == "timeout-refresh-ack")
    {
        timeout_refresh_ack = value;
    }
    if(value_path == "timeout-refresh-send")
    {
        timeout_refresh_send = value;
    }
}

PseudowireState::PseudowireState()
{
    yang_name = "pseudowire-state"; yang_parent_name = "cisco-pw";
}

PseudowireState::~PseudowireState()
{
}

bool PseudowireState::has_data() const
{
    for (std::size_t index=0; index<pseudowires_.size(); index++)
    {
        if(pseudowires_[index]->has_data())
            return true;
    }
    return false;
}

bool PseudowireState::has_operation() const
{
    for (std::size_t index=0; index<pseudowires_.size(); index++)
    {
        if(pseudowires_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PseudowireState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-pw:pseudowire-state";

    return path_buffer.str();

}

const EntityPath PseudowireState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PseudowireState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowires")
    {
        for(auto const & c : pseudowires_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PseudowireState::Pseudowires>();
        c->parent = this;
        pseudowires_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PseudowireState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pseudowires_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PseudowireState::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> PseudowireState::clone_ptr() const
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

PseudowireState::Pseudowires::Pseudowires()
    :
    vc_peer_address{YType::str, "vc-peer-address"},
    vc_id{YType::uint32, "vc-id"},
    vc_owner_type{YType::enumeration, "vc-owner-type"},
    vc_name{YType::str, "vc-name"},
    vc_index{YType::uint32, "vc-index"},
    vc_control_word{YType::boolean, "vc-control-word"},
    vc_inbound_label{YType::uint32, "vc-inbound-label"},
    vc_inbound_oper_status{YType::enumeration, "vc-inbound-oper-status"},
    vc_local_group_id{YType::uint32, "vc-local-group-id"},
    vc_local_if_mtu{YType::uint32, "vc-local-if-mtu"},
    vc_oper_status{YType::enumeration, "vc-oper-status"},
    vc_outbound_label{YType::uint32, "vc-outbound-label"},
    vc_outbound_oper_status{YType::enumeration, "vc-outbound-oper-status"},
    vc_owner_name{YType::str, "vc-owner-name"},
    vc_psn_type{YType::enumeration, "vc-psn-type"},
    vc_remote_control_word{YType::enumeration, "vc-remote-control-word"},
    vc_remote_group_id{YType::uint32, "vc-remote-group-id"},
    vc_remote_if_mtu{YType::uint32, "vc-remote-if-mtu"},
    vc_type{YType::identityref, "vc-type"}
    	,
    statistics_(std::make_shared<PseudowireState::Pseudowires::Statistics>())
{
    statistics_->parent = this;

    yang_name = "pseudowires"; yang_parent_name = "pseudowire-state";
}

PseudowireState::Pseudowires::~Pseudowires()
{
}

bool PseudowireState::Pseudowires::has_data() const
{
    return vc_peer_address.is_set
	|| vc_id.is_set
	|| vc_owner_type.is_set
	|| vc_name.is_set
	|| vc_index.is_set
	|| vc_control_word.is_set
	|| vc_inbound_label.is_set
	|| vc_inbound_oper_status.is_set
	|| vc_local_group_id.is_set
	|| vc_local_if_mtu.is_set
	|| vc_oper_status.is_set
	|| vc_outbound_label.is_set
	|| vc_outbound_oper_status.is_set
	|| vc_owner_name.is_set
	|| vc_psn_type.is_set
	|| vc_remote_control_word.is_set
	|| vc_remote_group_id.is_set
	|| vc_remote_if_mtu.is_set
	|| vc_type.is_set
	|| (statistics_ !=  nullptr && statistics_->has_data());
}

bool PseudowireState::Pseudowires::has_operation() const
{
    return is_set(operation)
	|| is_set(vc_peer_address.operation)
	|| is_set(vc_id.operation)
	|| is_set(vc_owner_type.operation)
	|| is_set(vc_name.operation)
	|| is_set(vc_index.operation)
	|| is_set(vc_control_word.operation)
	|| is_set(vc_inbound_label.operation)
	|| is_set(vc_inbound_oper_status.operation)
	|| is_set(vc_local_group_id.operation)
	|| is_set(vc_local_if_mtu.operation)
	|| is_set(vc_oper_status.operation)
	|| is_set(vc_outbound_label.operation)
	|| is_set(vc_outbound_oper_status.operation)
	|| is_set(vc_owner_name.operation)
	|| is_set(vc_psn_type.operation)
	|| is_set(vc_remote_control_word.operation)
	|| is_set(vc_remote_group_id.operation)
	|| is_set(vc_remote_if_mtu.operation)
	|| is_set(vc_type.operation)
	|| (statistics_ !=  nullptr && statistics_->has_operation());
}

std::string PseudowireState::Pseudowires::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowires" <<"[vc-peer-address='" <<vc_peer_address <<"']" <<"[vc-id='" <<vc_id <<"']" <<"[vc-owner-type='" <<vc_owner_type <<"']" <<"[vc-name='" <<vc_name <<"']" <<"[vc-index='" <<vc_index <<"']";

    return path_buffer.str();

}

const EntityPath PseudowireState::Pseudowires::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-pw:pseudowire-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vc_peer_address.is_set || is_set(vc_peer_address.operation)) leaf_name_data.push_back(vc_peer_address.get_name_leafdata());
    if (vc_id.is_set || is_set(vc_id.operation)) leaf_name_data.push_back(vc_id.get_name_leafdata());
    if (vc_owner_type.is_set || is_set(vc_owner_type.operation)) leaf_name_data.push_back(vc_owner_type.get_name_leafdata());
    if (vc_name.is_set || is_set(vc_name.operation)) leaf_name_data.push_back(vc_name.get_name_leafdata());
    if (vc_index.is_set || is_set(vc_index.operation)) leaf_name_data.push_back(vc_index.get_name_leafdata());
    if (vc_control_word.is_set || is_set(vc_control_word.operation)) leaf_name_data.push_back(vc_control_word.get_name_leafdata());
    if (vc_inbound_label.is_set || is_set(vc_inbound_label.operation)) leaf_name_data.push_back(vc_inbound_label.get_name_leafdata());
    if (vc_inbound_oper_status.is_set || is_set(vc_inbound_oper_status.operation)) leaf_name_data.push_back(vc_inbound_oper_status.get_name_leafdata());
    if (vc_local_group_id.is_set || is_set(vc_local_group_id.operation)) leaf_name_data.push_back(vc_local_group_id.get_name_leafdata());
    if (vc_local_if_mtu.is_set || is_set(vc_local_if_mtu.operation)) leaf_name_data.push_back(vc_local_if_mtu.get_name_leafdata());
    if (vc_oper_status.is_set || is_set(vc_oper_status.operation)) leaf_name_data.push_back(vc_oper_status.get_name_leafdata());
    if (vc_outbound_label.is_set || is_set(vc_outbound_label.operation)) leaf_name_data.push_back(vc_outbound_label.get_name_leafdata());
    if (vc_outbound_oper_status.is_set || is_set(vc_outbound_oper_status.operation)) leaf_name_data.push_back(vc_outbound_oper_status.get_name_leafdata());
    if (vc_owner_name.is_set || is_set(vc_owner_name.operation)) leaf_name_data.push_back(vc_owner_name.get_name_leafdata());
    if (vc_psn_type.is_set || is_set(vc_psn_type.operation)) leaf_name_data.push_back(vc_psn_type.get_name_leafdata());
    if (vc_remote_control_word.is_set || is_set(vc_remote_control_word.operation)) leaf_name_data.push_back(vc_remote_control_word.get_name_leafdata());
    if (vc_remote_group_id.is_set || is_set(vc_remote_group_id.operation)) leaf_name_data.push_back(vc_remote_group_id.get_name_leafdata());
    if (vc_remote_if_mtu.is_set || is_set(vc_remote_if_mtu.operation)) leaf_name_data.push_back(vc_remote_if_mtu.get_name_leafdata());
    if (vc_type.is_set || is_set(vc_type.operation)) leaf_name_data.push_back(vc_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PseudowireState::Pseudowires::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics_ == nullptr)
        {
            statistics_ = std::make_shared<PseudowireState::Pseudowires::Statistics>();
        }
        return statistics_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PseudowireState::Pseudowires::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics_ != nullptr)
    {
        children["statistics"] = statistics_;
    }

    return children;
}

void PseudowireState::Pseudowires::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vc-peer-address")
    {
        vc_peer_address = value;
    }
    if(value_path == "vc-id")
    {
        vc_id = value;
    }
    if(value_path == "vc-owner-type")
    {
        vc_owner_type = value;
    }
    if(value_path == "vc-name")
    {
        vc_name = value;
    }
    if(value_path == "vc-index")
    {
        vc_index = value;
    }
    if(value_path == "vc-control-word")
    {
        vc_control_word = value;
    }
    if(value_path == "vc-inbound-label")
    {
        vc_inbound_label = value;
    }
    if(value_path == "vc-inbound-oper-status")
    {
        vc_inbound_oper_status = value;
    }
    if(value_path == "vc-local-group-id")
    {
        vc_local_group_id = value;
    }
    if(value_path == "vc-local-if-mtu")
    {
        vc_local_if_mtu = value;
    }
    if(value_path == "vc-oper-status")
    {
        vc_oper_status = value;
    }
    if(value_path == "vc-outbound-label")
    {
        vc_outbound_label = value;
    }
    if(value_path == "vc-outbound-oper-status")
    {
        vc_outbound_oper_status = value;
    }
    if(value_path == "vc-owner-name")
    {
        vc_owner_name = value;
    }
    if(value_path == "vc-psn-type")
    {
        vc_psn_type = value;
    }
    if(value_path == "vc-remote-control-word")
    {
        vc_remote_control_word = value;
    }
    if(value_path == "vc-remote-group-id")
    {
        vc_remote_group_id = value;
    }
    if(value_path == "vc-remote-if-mtu")
    {
        vc_remote_if_mtu = value;
    }
    if(value_path == "vc-type")
    {
        vc_type = value;
    }
}

PseudowireState::Pseudowires::Statistics::Statistics()
    :
    discontinuity_time{YType::str, "discontinuity-time"},
    in_errors{YType::uint64, "in-errors"},
    in_octets{YType::uint64, "in-octets"},
    in_pkts{YType::uint64, "in-pkts"},
    out_errors{YType::uint64, "out-errors"},
    out_octets{YType::uint64, "out-octets"},
    out_pkts{YType::uint64, "out-pkts"},
    vc_create_time{YType::uint32, "vc-create-time"},
    vc_up_time{YType::uint32, "vc-up-time"}
{
    yang_name = "statistics"; yang_parent_name = "pseudowires";
}

PseudowireState::Pseudowires::Statistics::~Statistics()
{
}

bool PseudowireState::Pseudowires::Statistics::has_data() const
{
    return discontinuity_time.is_set
	|| in_errors.is_set
	|| in_octets.is_set
	|| in_pkts.is_set
	|| out_errors.is_set
	|| out_octets.is_set
	|| out_pkts.is_set
	|| vc_create_time.is_set
	|| vc_up_time.is_set;
}

bool PseudowireState::Pseudowires::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(discontinuity_time.operation)
	|| is_set(in_errors.operation)
	|| is_set(in_octets.operation)
	|| is_set(in_pkts.operation)
	|| is_set(out_errors.operation)
	|| is_set(out_octets.operation)
	|| is_set(out_pkts.operation)
	|| is_set(vc_create_time.operation)
	|| is_set(vc_up_time.operation);
}

std::string PseudowireState::Pseudowires::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath PseudowireState::Pseudowires::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in cisco_pw cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discontinuity_time.is_set || is_set(discontinuity_time.operation)) leaf_name_data.push_back(discontinuity_time.get_name_leafdata());
    if (in_errors.is_set || is_set(in_errors.operation)) leaf_name_data.push_back(in_errors.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.operation)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (in_pkts.is_set || is_set(in_pkts.operation)) leaf_name_data.push_back(in_pkts.get_name_leafdata());
    if (out_errors.is_set || is_set(out_errors.operation)) leaf_name_data.push_back(out_errors.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.operation)) leaf_name_data.push_back(out_octets.get_name_leafdata());
    if (out_pkts.is_set || is_set(out_pkts.operation)) leaf_name_data.push_back(out_pkts.get_name_leafdata());
    if (vc_create_time.is_set || is_set(vc_create_time.operation)) leaf_name_data.push_back(vc_create_time.get_name_leafdata());
    if (vc_up_time.is_set || is_set(vc_up_time.operation)) leaf_name_data.push_back(vc_up_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PseudowireState::Pseudowires::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PseudowireState::Pseudowires::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PseudowireState::Pseudowires::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discontinuity-time")
    {
        discontinuity_time = value;
    }
    if(value_path == "in-errors")
    {
        in_errors = value;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
    }
    if(value_path == "in-pkts")
    {
        in_pkts = value;
    }
    if(value_path == "out-errors")
    {
        out_errors = value;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
    }
    if(value_path == "out-pkts")
    {
        out_pkts = value;
    }
    if(value_path == "vc-create-time")
    {
        vc_create_time = value;
    }
    if(value_path == "vc-up-time")
    {
        vc_up_time = value;
    }
}

PwVcTypeEtherIdentity::PwVcTypeEtherIdentity()
     : Identity("cisco-pw:pw-vc-type-ether")
{
}

PwVcTypeEtherIdentity::~PwVcTypeEtherIdentity()
{
}

PwSequencingTransmitIdentity::PwSequencingTransmitIdentity()
     : Identity("cisco-pw:pw-sequencing-transmit")
{
}

PwSequencingTransmitIdentity::~PwSequencingTransmitIdentity()
{
}

PwVcTypeVlanPassthroughIdentity::PwVcTypeVlanPassthroughIdentity()
     : Identity("cisco-pw:pw-vc-type-vlan-passthrough")
{
}

PwVcTypeVlanPassthroughIdentity::~PwVcTypeVlanPassthroughIdentity()
{
}

PwEncapMplsIdentity::PwEncapMplsIdentity()
     : Identity("cisco-pw:pw-encap-mpls")
{
}

PwEncapMplsIdentity::~PwEncapMplsIdentity()
{
}

PwLbIpDstIpIdentity::PwLbIpDstIpIdentity()
     : Identity("cisco-pw:pw-lb-ip-dst-ip")
{
}

PwLbIpDstIpIdentity::~PwLbIpDstIpIdentity()
{
}

PwSequencingReceiveIdentity::PwSequencingReceiveIdentity()
     : Identity("cisco-pw:pw-sequencing-receive")
{
}

PwSequencingReceiveIdentity::~PwSequencingReceiveIdentity()
{
}

PwLbEthernetTypeIdentity::PwLbEthernetTypeIdentity()
     : Identity("cisco-pw:pw-lb-ethernet-type")
{
}

PwLbEthernetTypeIdentity::~PwLbEthernetTypeIdentity()
{
}

PwSignalingProtocolLdpIdentity::PwSignalingProtocolLdpIdentity()
     : Identity("cisco-pw:pw-signaling-protocol-ldp")
{
}

PwSignalingProtocolLdpIdentity::~PwSignalingProtocolLdpIdentity()
{
}

PwSequencingBothIdentity::PwSequencingBothIdentity()
     : Identity("cisco-pw:pw-sequencing-both")
{
}

PwSequencingBothIdentity::~PwSequencingBothIdentity()
{
}

PwVcTypeVlanIdentity::PwVcTypeVlanIdentity()
     : Identity("cisco-pw:pw-vc-type-vlan")
{
}

PwVcTypeVlanIdentity::~PwVcTypeVlanIdentity()
{
}

PwLbIpTypeIdentity::PwLbIpTypeIdentity()
     : Identity("cisco-pw:pw-lb-ip-type")
{
}

PwLbIpTypeIdentity::~PwLbIpTypeIdentity()
{
}

PwSignalingProtocolNoneIdentity::PwSignalingProtocolNoneIdentity()
     : Identity("cisco-pw:pw-signaling-protocol-none")
{
}

PwSignalingProtocolNoneIdentity::~PwSignalingProtocolNoneIdentity()
{
}

PwSignalingProtocolBgpIdentity::PwSignalingProtocolBgpIdentity()
     : Identity("cisco-pw:pw-signaling-protocol-bgp")
{
}

PwSignalingProtocolBgpIdentity::~PwSignalingProtocolBgpIdentity()
{
}

PwLbIpSrcIpIdentity::PwLbIpSrcIpIdentity()
     : Identity("cisco-pw:pw-lb-ip-src-ip")
{
}

PwLbIpSrcIpIdentity::~PwLbIpSrcIpIdentity()
{
}

PwLbEthSrcDstMacIdentity::PwLbEthSrcDstMacIdentity()
     : Identity("cisco-pw:pw-lb-eth-src-dst-mac")
{
}

PwLbEthSrcDstMacIdentity::~PwLbEthSrcDstMacIdentity()
{
}

PwLbEthDstMacIdentity::PwLbEthDstMacIdentity()
     : Identity("cisco-pw:pw-lb-eth-dst-mac")
{
}

PwLbEthDstMacIdentity::~PwLbEthDstMacIdentity()
{
}

PwLbIpSrcDstIpIdentity::PwLbIpSrcDstIpIdentity()
     : Identity("cisco-pw:pw-lb-ip-src-dst-ip")
{
}

PwLbIpSrcDstIpIdentity::~PwLbIpSrcDstIpIdentity()
{
}

PwLbEthSrcMacIdentity::PwLbEthSrcMacIdentity()
     : Identity("cisco-pw:pw-lb-eth-src-mac")
{
}

PwLbEthSrcMacIdentity::~PwLbEthSrcMacIdentity()
{
}

const Enum::YLeaf PwOperStateTypeEnum::up {1, "up"};
const Enum::YLeaf PwOperStateTypeEnum::down {2, "down"};
const Enum::YLeaf PwOperStateTypeEnum::cold_standby {3, "cold-standby"};
const Enum::YLeaf PwOperStateTypeEnum::hot_standby {4, "hot-standby"};
const Enum::YLeaf PwOperStateTypeEnum::recovering {5, "recovering"};
const Enum::YLeaf PwOperStateTypeEnum::no_hardware {6, "no-hardware"};
const Enum::YLeaf PwOperStateTypeEnum::unresolved {7, "unresolved"};
const Enum::YLeaf PwOperStateTypeEnum::provisioned {8, "provisioned"};
const Enum::YLeaf PwOperStateTypeEnum::remote_standby {9, "remote-standby"};
const Enum::YLeaf PwOperStateTypeEnum::local_ready {10, "local-ready"};
const Enum::YLeaf PwOperStateTypeEnum::all_ready {11, "all-ready"};

const Enum::YLeaf PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::DirectionEnum::transmit {1, "transmit"};
const Enum::YLeaf PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::DirectionEnum::receive {2, "receive"};
const Enum::YLeaf PseudowireConfig::PwTemplates::PwTemplate::LoadBalance::FlowLabel::DirectionEnum::both {3, "both"};

const Enum::YLeaf PseudowireState::Pseudowires::VcOwnerTypeEnum::vpws {1, "vpws"};
const Enum::YLeaf PseudowireState::Pseudowires::VcOwnerTypeEnum::vpls_vfi {2, "vpls-vfi"};
const Enum::YLeaf PseudowireState::Pseudowires::VcOwnerTypeEnum::vpls_bridge_domain {3, "vpls-bridge-domain"};
const Enum::YLeaf PseudowireState::Pseudowires::VcOwnerTypeEnum::interface {4, "interface"};

const Enum::YLeaf PseudowireState::Pseudowires::VcPsnTypeEnum::mpls {1, "mpls"};
const Enum::YLeaf PseudowireState::Pseudowires::VcPsnTypeEnum::l2tp {2, "l2tp"};
const Enum::YLeaf PseudowireState::Pseudowires::VcPsnTypeEnum::ip {3, "ip"};
const Enum::YLeaf PseudowireState::Pseudowires::VcPsnTypeEnum::mpls_over_ip {4, "mpls-over-ip"};
const Enum::YLeaf PseudowireState::Pseudowires::VcPsnTypeEnum::gre {5, "gre"};
const Enum::YLeaf PseudowireState::Pseudowires::VcPsnTypeEnum::other {6, "other"};

const Enum::YLeaf PseudowireState::Pseudowires::VcRemoteControlWordEnum::noControlWord {1, "noControlWord"};
const Enum::YLeaf PseudowireState::Pseudowires::VcRemoteControlWordEnum::withControlWord {2, "withControlWord"};
const Enum::YLeaf PseudowireState::Pseudowires::VcRemoteControlWordEnum::notYetKnown {3, "notYetKnown"};


}
}

