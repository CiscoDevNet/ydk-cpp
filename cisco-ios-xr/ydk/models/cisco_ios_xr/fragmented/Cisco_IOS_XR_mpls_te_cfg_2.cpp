
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_cfg_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_cfg {

MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::Destination()
    :
    destination{YType::str, "destination"},
    destination_type{YType::enumeration, "destination-type"},
    interface_if_index{YType::int32, "interface-if-index"}
{
    yang_name = "destination"; yang_parent_name = "tunnel-head";
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::~Destination()
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::has_data() const
{
    return destination.is_set
	|| destination_type.is_set
	|| interface_if_index.is_set;
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(destination_type.operation)
	|| is_set(interface_if_index.operation);
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

const EntityPath MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Destination' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (destination_type.is_set || is_set(destination_type.operation)) leaf_name_data.push_back(destination_type.get_name_leafdata());
    if (interface_if_index.is_set || is_set(interface_if_index.operation)) leaf_name_data.push_back(interface_if_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "destination-type")
    {
        destination_type = value;
    }
    if(value_path == "interface-if-index")
    {
        interface_if_index = value;
    }
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::ProtectionSwitching()
    :
    lockout{YType::enumeration, "lockout"}
{
    yang_name = "protection-switching"; yang_parent_name = "tunnel-head";
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::~ProtectionSwitching()
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::has_data() const
{
    return lockout.is_set;
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::has_operation() const
{
    return is_set(operation)
	|| is_set(lockout.operation);
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection-switching";

    return path_buffer.str();

}

const EntityPath MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtectionSwitching' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lockout.is_set || is_set(lockout.operation)) leaf_name_data.push_back(lockout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lockout")
    {
        lockout = value;
    }
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::Logging()
    :
    active_lsp_message{YType::empty, "active-lsp-message"},
    homepath_state_message{YType::empty, "homepath-state-message"},
    insufficient_bw_message{YType::empty, "insufficient-bw-message"},
    path_change_message{YType::empty, "path-change-message"},
    signalling_state_message{YType::empty, "signalling-state-message"},
    static_cross_connect_message{YType::empty, "static-cross-connect-message"},
    tunnel_state_message{YType::empty, "tunnel-state-message"}
{
    yang_name = "logging"; yang_parent_name = "tunnel-head";
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::~Logging()
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::has_data() const
{
    return active_lsp_message.is_set
	|| homepath_state_message.is_set
	|| insufficient_bw_message.is_set
	|| path_change_message.is_set
	|| signalling_state_message.is_set
	|| static_cross_connect_message.is_set
	|| tunnel_state_message.is_set;
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(active_lsp_message.operation)
	|| is_set(homepath_state_message.operation)
	|| is_set(insufficient_bw_message.operation)
	|| is_set(path_change_message.operation)
	|| is_set(signalling_state_message.operation)
	|| is_set(static_cross_connect_message.operation)
	|| is_set(tunnel_state_message.operation);
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp_message.is_set || is_set(active_lsp_message.operation)) leaf_name_data.push_back(active_lsp_message.get_name_leafdata());
    if (homepath_state_message.is_set || is_set(homepath_state_message.operation)) leaf_name_data.push_back(homepath_state_message.get_name_leafdata());
    if (insufficient_bw_message.is_set || is_set(insufficient_bw_message.operation)) leaf_name_data.push_back(insufficient_bw_message.get_name_leafdata());
    if (path_change_message.is_set || is_set(path_change_message.operation)) leaf_name_data.push_back(path_change_message.get_name_leafdata());
    if (signalling_state_message.is_set || is_set(signalling_state_message.operation)) leaf_name_data.push_back(signalling_state_message.get_name_leafdata());
    if (static_cross_connect_message.is_set || is_set(static_cross_connect_message.operation)) leaf_name_data.push_back(static_cross_connect_message.get_name_leafdata());
    if (tunnel_state_message.is_set || is_set(tunnel_state_message.operation)) leaf_name_data.push_back(tunnel_state_message.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-lsp-message")
    {
        active_lsp_message = value;
    }
    if(value_path == "homepath-state-message")
    {
        homepath_state_message = value;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message = value;
    }
    if(value_path == "path-change-message")
    {
        path_change_message = value;
    }
    if(value_path == "signalling-state-message")
    {
        signalling_state_message = value;
    }
    if(value_path == "static-cross-connect-message")
    {
        static_cross_connect_message = value;
    }
    if(value_path == "tunnel-state-message")
    {
        tunnel_state_message = value;
    }
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOptions()
{
    yang_name = "path-options"; yang_parent_name = "tunnel-head";
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::~PathOptions()
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::has_data() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::has_operation() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-options";

    return path_buffer.str();

}

const EntityPath MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathOptions' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option")
    {
        for(auto const & c : path_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption>();
        c->parent = this;
        path_option.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_option)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::PathOption()
    :
    preference_level{YType::uint32, "preference-level"},
    lockdown{YType::enumeration, "lockdown"},
    path_id{YType::uint32, "path-id"},
    path_name{YType::str, "path-name"},
    path_type{YType::enumeration, "path-type"},
    protected_by_preference_level{YType::uint32, "protected-by-preference-level"},
    restore_by_preference_level{YType::uint32, "restore-by-preference-level"},
    xro_attribute_set_name{YType::str, "xro-attribute-set-name"},
    xro_type{YType::empty, "xro-type"}
{
    yang_name = "path-option"; yang_parent_name = "path-options";
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::~PathOption()
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::has_data() const
{
    return preference_level.is_set
	|| lockdown.is_set
	|| path_id.is_set
	|| path_name.is_set
	|| path_type.is_set
	|| protected_by_preference_level.is_set
	|| restore_by_preference_level.is_set
	|| xro_attribute_set_name.is_set
	|| xro_type.is_set;
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::has_operation() const
{
    return is_set(operation)
	|| is_set(preference_level.operation)
	|| is_set(lockdown.operation)
	|| is_set(path_id.operation)
	|| is_set(path_name.operation)
	|| is_set(path_type.operation)
	|| is_set(protected_by_preference_level.operation)
	|| is_set(restore_by_preference_level.operation)
	|| is_set(xro_attribute_set_name.operation)
	|| is_set(xro_type.operation);
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option" <<"[preference-level='" <<preference_level <<"']";

    return path_buffer.str();

}

const EntityPath MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathOption' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preference_level.is_set || is_set(preference_level.operation)) leaf_name_data.push_back(preference_level.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.operation)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_name.is_set || is_set(path_name.operation)) leaf_name_data.push_back(path_name.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.operation)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (protected_by_preference_level.is_set || is_set(protected_by_preference_level.operation)) leaf_name_data.push_back(protected_by_preference_level.get_name_leafdata());
    if (restore_by_preference_level.is_set || is_set(restore_by_preference_level.operation)) leaf_name_data.push_back(restore_by_preference_level.get_name_leafdata());
    if (xro_attribute_set_name.is_set || is_set(xro_attribute_set_name.operation)) leaf_name_data.push_back(xro_attribute_set_name.get_name_leafdata());
    if (xro_type.is_set || is_set(xro_type.operation)) leaf_name_data.push_back(xro_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "preference-level")
    {
        preference_level = value;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
    }
    if(value_path == "path-id")
    {
        path_id = value;
    }
    if(value_path == "path-name")
    {
        path_name = value;
    }
    if(value_path == "path-type")
    {
        path_type = value;
    }
    if(value_path == "protected-by-preference-level")
    {
        protected_by_preference_level = value;
    }
    if(value_path == "restore-by-preference-level")
    {
        restore_by_preference_level = value;
    }
    if(value_path == "xro-attribute-set-name")
    {
        xro_attribute_set_name = value;
    }
    if(value_path == "xro-type")
    {
        xro_type = value;
    }
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::StaticUni()
    :
    egress_controller_if_index{YType::int32, "egress-controller-if-index"},
    egress_type{YType::enumeration, "egress-type"},
    ingress_controller_name{YType::str, "ingress-controller-name"},
    ingress_type{YType::enumeration, "ingress-type"}
{
    yang_name = "static-uni"; yang_parent_name = "tunnel-head";
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::~StaticUni()
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::has_data() const
{
    return egress_controller_if_index.is_set
	|| egress_type.is_set
	|| ingress_controller_name.is_set
	|| ingress_type.is_set;
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::has_operation() const
{
    return is_set(operation)
	|| is_set(egress_controller_if_index.operation)
	|| is_set(egress_type.operation)
	|| is_set(ingress_controller_name.operation)
	|| is_set(ingress_type.operation);
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-uni";

    return path_buffer.str();

}

const EntityPath MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StaticUni' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_controller_if_index.is_set || is_set(egress_controller_if_index.operation)) leaf_name_data.push_back(egress_controller_if_index.get_name_leafdata());
    if (egress_type.is_set || is_set(egress_type.operation)) leaf_name_data.push_back(egress_type.get_name_leafdata());
    if (ingress_controller_name.is_set || is_set(ingress_controller_name.operation)) leaf_name_data.push_back(ingress_controller_name.get_name_leafdata());
    if (ingress_type.is_set || is_set(ingress_type.operation)) leaf_name_data.push_back(ingress_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress-controller-if-index")
    {
        egress_controller_if_index = value;
    }
    if(value_path == "egress-type")
    {
        egress_type = value;
    }
    if(value_path == "ingress-controller-name")
    {
        ingress_controller_name = value;
    }
    if(value_path == "ingress-type")
    {
        ingress_type = value;
    }
}

MplsTe::Lcac::Lcac()
    :
    bandwidth_hold_timer{YType::uint32, "bandwidth-hold-timer"},
    delay_preempt_bundle_capacity_timer{YType::uint32, "delay-preempt-bundle-capacity-timer"},
    periodic_flooding_timer{YType::uint32, "periodic-flooding-timer"}
    	,
    bfd(std::make_shared<MplsTe::Lcac::Bfd>())
	,flooding_threshold(std::make_shared<MplsTe::Lcac::FloodingThreshold>())
{
    bfd->parent = this;

    flooding_threshold->parent = this;

    yang_name = "lcac"; yang_parent_name = "mpls-te";
}

MplsTe::Lcac::~Lcac()
{
}

bool MplsTe::Lcac::has_data() const
{
    return bandwidth_hold_timer.is_set
	|| delay_preempt_bundle_capacity_timer.is_set
	|| periodic_flooding_timer.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (flooding_threshold !=  nullptr && flooding_threshold->has_data());
}

bool MplsTe::Lcac::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth_hold_timer.operation)
	|| is_set(delay_preempt_bundle_capacity_timer.operation)
	|| is_set(periodic_flooding_timer.operation)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (flooding_threshold !=  nullptr && flooding_threshold->has_operation());
}

std::string MplsTe::Lcac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lcac";

    return path_buffer.str();

}

const EntityPath MplsTe::Lcac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_hold_timer.is_set || is_set(bandwidth_hold_timer.operation)) leaf_name_data.push_back(bandwidth_hold_timer.get_name_leafdata());
    if (delay_preempt_bundle_capacity_timer.is_set || is_set(delay_preempt_bundle_capacity_timer.operation)) leaf_name_data.push_back(delay_preempt_bundle_capacity_timer.get_name_leafdata());
    if (periodic_flooding_timer.is_set || is_set(periodic_flooding_timer.operation)) leaf_name_data.push_back(periodic_flooding_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Lcac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<MplsTe::Lcac::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "flooding-threshold")
    {
        if(flooding_threshold == nullptr)
        {
            flooding_threshold = std::make_shared<MplsTe::Lcac::FloodingThreshold>();
        }
        return flooding_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Lcac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(flooding_threshold != nullptr)
    {
        children["flooding-threshold"] = flooding_threshold;
    }

    return children;
}

void MplsTe::Lcac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-hold-timer")
    {
        bandwidth_hold_timer = value;
    }
    if(value_path == "delay-preempt-bundle-capacity-timer")
    {
        delay_preempt_bundle_capacity_timer = value;
    }
    if(value_path == "periodic-flooding-timer")
    {
        periodic_flooding_timer = value;
    }
}

MplsTe::Lcac::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"}
{
    yang_name = "bfd"; yang_parent_name = "lcac";
}

MplsTe::Lcac::Bfd::~Bfd()
{
}

bool MplsTe::Lcac::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| interval.is_set;
}

bool MplsTe::Lcac::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(interval.operation);
}

std::string MplsTe::Lcac::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath MplsTe::Lcac::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/lcac/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Lcac::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Lcac::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Lcac::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

MplsTe::Lcac::FloodingThreshold::FloodingThreshold()
    :
    down_stream{YType::uint32, "down-stream"},
    up_stream{YType::uint32, "up-stream"}
{
    yang_name = "flooding-threshold"; yang_parent_name = "lcac";
}

MplsTe::Lcac::FloodingThreshold::~FloodingThreshold()
{
}

bool MplsTe::Lcac::FloodingThreshold::has_data() const
{
    return down_stream.is_set
	|| up_stream.is_set;
}

bool MplsTe::Lcac::FloodingThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(down_stream.operation)
	|| is_set(up_stream.operation);
}

std::string MplsTe::Lcac::FloodingThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding-threshold";

    return path_buffer.str();

}

const EntityPath MplsTe::Lcac::FloodingThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/lcac/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_stream.is_set || is_set(down_stream.operation)) leaf_name_data.push_back(down_stream.get_name_leafdata());
    if (up_stream.is_set || is_set(up_stream.operation)) leaf_name_data.push_back(up_stream.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Lcac::FloodingThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Lcac::FloodingThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::Lcac::FloodingThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down-stream")
    {
        down_stream = value;
    }
    if(value_path == "up-stream")
    {
        up_stream = value;
    }
}


}
}

