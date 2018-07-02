
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_cfg_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_cfg {

MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::SignalledBandwidth()
    :
    signalled_bandwidth_type{YType::enumeration, "signalled-bandwidth-type"},
    bitrate{YType::uint32, "bitrate"},
    od_uflex_framing_type{YType::enumeration, "od-uflex-framing-type"}
{

    yang_name = "signalled-bandwidth"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::~SignalledBandwidth()
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::has_data() const
{
    if (is_presence_container) return true;
    return signalled_bandwidth_type.is_set
	|| bitrate.is_set
	|| od_uflex_framing_type.is_set;
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(signalled_bandwidth_type.yfilter)
	|| ydk::is_set(bitrate.yfilter)
	|| ydk::is_set(od_uflex_framing_type.yfilter);
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalled-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signalled_bandwidth_type.is_set || is_set(signalled_bandwidth_type.yfilter)) leaf_name_data.push_back(signalled_bandwidth_type.get_name_leafdata());
    if (bitrate.is_set || is_set(bitrate.yfilter)) leaf_name_data.push_back(bitrate.get_name_leafdata());
    if (od_uflex_framing_type.is_set || is_set(od_uflex_framing_type.yfilter)) leaf_name_data.push_back(od_uflex_framing_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "signalled-bandwidth-type")
    {
        signalled_bandwidth_type = value;
        signalled_bandwidth_type.value_namespace = name_space;
        signalled_bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bitrate")
    {
        bitrate = value;
        bitrate.value_namespace = name_space;
        bitrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "od-uflex-framing-type")
    {
        od_uflex_framing_type = value;
        od_uflex_framing_type.value_namespace = name_space;
        od_uflex_framing_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signalled-bandwidth-type")
    {
        signalled_bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "bitrate")
    {
        bitrate.yfilter = yfilter;
    }
    if(value_path == "od-uflex-framing-type")
    {
        od_uflex_framing_type.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signalled-bandwidth-type" || name == "bitrate" || name == "od-uflex-framing-type")
        return true;
    return false;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::Destination()
    :
    destination{YType::str, "destination"},
    destination_type{YType::enumeration, "destination-type"},
    interface_if_index{YType::uint32, "interface-if-index"}
{

    yang_name = "destination"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::~Destination()
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::has_data() const
{
    if (is_presence_container) return true;
    return destination.is_set
	|| destination_type.is_set
	|| interface_if_index.is_set;
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(destination_type.yfilter)
	|| ydk::is_set(interface_if_index.yfilter);
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (destination_type.is_set || is_set(destination_type.yfilter)) leaf_name_data.push_back(destination_type.get_name_leafdata());
    if (interface_if_index.is_set || is_set(interface_if_index.yfilter)) leaf_name_data.push_back(interface_if_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-type")
    {
        destination_type = value;
        destination_type.value_namespace = name_space;
        destination_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-if-index")
    {
        interface_if_index = value;
        interface_if_index.value_namespace = name_space;
        interface_if_index.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "destination-type")
    {
        destination_type.yfilter = yfilter;
    }
    if(value_path == "interface-if-index")
    {
        interface_if_index.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "destination-type" || name == "interface-if-index")
        return true;
    return false;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::ProtectionSwitching()
    :
    lockout{YType::enumeration, "lockout"}
{

    yang_name = "protection-switching"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::~ProtectionSwitching()
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::has_data() const
{
    if (is_presence_container) return true;
    return lockout.is_set;
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lockout.yfilter);
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection-switching";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lockout.is_set || is_set(lockout.yfilter)) leaf_name_data.push_back(lockout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lockout")
    {
        lockout = value;
        lockout.value_namespace = name_space;
        lockout.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lockout")
    {
        lockout.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lockout")
        return true;
    return false;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::Logging()
    :
    active_lsp_message{YType::empty, "active-lsp-message"},
    homepath_state_message{YType::empty, "homepath-state-message"},
    signalling_state_message{YType::empty, "signalling-state-message"},
    path_change_message{YType::empty, "path-change-message"},
    static_cross_connect_message{YType::empty, "static-cross-connect-message"},
    tunnel_state_message{YType::empty, "tunnel-state-message"},
    insufficient_bw_message{YType::empty, "insufficient-bw-message"}
{

    yang_name = "logging"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::~Logging()
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::has_data() const
{
    if (is_presence_container) return true;
    return active_lsp_message.is_set
	|| homepath_state_message.is_set
	|| signalling_state_message.is_set
	|| path_change_message.is_set
	|| static_cross_connect_message.is_set
	|| tunnel_state_message.is_set
	|| insufficient_bw_message.is_set;
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_lsp_message.yfilter)
	|| ydk::is_set(homepath_state_message.yfilter)
	|| ydk::is_set(signalling_state_message.yfilter)
	|| ydk::is_set(path_change_message.yfilter)
	|| ydk::is_set(static_cross_connect_message.yfilter)
	|| ydk::is_set(tunnel_state_message.yfilter)
	|| ydk::is_set(insufficient_bw_message.yfilter);
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_lsp_message.is_set || is_set(active_lsp_message.yfilter)) leaf_name_data.push_back(active_lsp_message.get_name_leafdata());
    if (homepath_state_message.is_set || is_set(homepath_state_message.yfilter)) leaf_name_data.push_back(homepath_state_message.get_name_leafdata());
    if (signalling_state_message.is_set || is_set(signalling_state_message.yfilter)) leaf_name_data.push_back(signalling_state_message.get_name_leafdata());
    if (path_change_message.is_set || is_set(path_change_message.yfilter)) leaf_name_data.push_back(path_change_message.get_name_leafdata());
    if (static_cross_connect_message.is_set || is_set(static_cross_connect_message.yfilter)) leaf_name_data.push_back(static_cross_connect_message.get_name_leafdata());
    if (tunnel_state_message.is_set || is_set(tunnel_state_message.yfilter)) leaf_name_data.push_back(tunnel_state_message.get_name_leafdata());
    if (insufficient_bw_message.is_set || is_set(insufficient_bw_message.yfilter)) leaf_name_data.push_back(insufficient_bw_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-lsp-message")
    {
        active_lsp_message = value;
        active_lsp_message.value_namespace = name_space;
        active_lsp_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "homepath-state-message")
    {
        homepath_state_message = value;
        homepath_state_message.value_namespace = name_space;
        homepath_state_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalling-state-message")
    {
        signalling_state_message = value;
        signalling_state_message.value_namespace = name_space;
        signalling_state_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-change-message")
    {
        path_change_message = value;
        path_change_message.value_namespace = name_space;
        path_change_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static-cross-connect-message")
    {
        static_cross_connect_message = value;
        static_cross_connect_message.value_namespace = name_space;
        static_cross_connect_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-state-message")
    {
        tunnel_state_message = value;
        tunnel_state_message.value_namespace = name_space;
        tunnel_state_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message = value;
        insufficient_bw_message.value_namespace = name_space;
        insufficient_bw_message.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-lsp-message")
    {
        active_lsp_message.yfilter = yfilter;
    }
    if(value_path == "homepath-state-message")
    {
        homepath_state_message.yfilter = yfilter;
    }
    if(value_path == "signalling-state-message")
    {
        signalling_state_message.yfilter = yfilter;
    }
    if(value_path == "path-change-message")
    {
        path_change_message.yfilter = yfilter;
    }
    if(value_path == "static-cross-connect-message")
    {
        static_cross_connect_message.yfilter = yfilter;
    }
    if(value_path == "tunnel-state-message")
    {
        tunnel_state_message.yfilter = yfilter;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-lsp-message" || name == "homepath-state-message" || name == "signalling-state-message" || name == "path-change-message" || name == "static-cross-connect-message" || name == "tunnel-state-message" || name == "insufficient-bw-message")
        return true;
    return false;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOptions()
    :
    path_option(this, {"preference_level"})
{

    yang_name = "path-options"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::~PathOptions()
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_option.len(); index++)
    {
        if(path_option[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::has_operation() const
{
    for (std::size_t index=0; index<path_option.len(); index++)
    {
        if(path_option[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option")
    {
        auto c = std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption>();
        c->parent = this;
        path_option.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : path_option.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option")
        return true;
    return false;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::PathOption()
    :
    preference_level{YType::uint32, "preference-level"},
    path_type{YType::enumeration, "path-type"},
    path_id{YType::uint32, "path-id"},
    path_name{YType::str, "path-name"},
    protected_by_preference_level{YType::uint32, "protected-by-preference-level"},
    restore_by_preference_level{YType::uint32, "restore-by-preference-level"},
    xro_type{YType::empty, "xro-type"},
    xro_attribute_set_name{YType::str, "xro-attribute-set-name"},
    affinity_attribute_set_name{YType::str, "affinity-attribute-set-name"},
    lockdown{YType::enumeration, "lockdown"}
{

    yang_name = "path-option"; yang_parent_name = "path-options"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::~PathOption()
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::has_data() const
{
    if (is_presence_container) return true;
    return preference_level.is_set
	|| path_type.is_set
	|| path_id.is_set
	|| path_name.is_set
	|| protected_by_preference_level.is_set
	|| restore_by_preference_level.is_set
	|| xro_type.is_set
	|| xro_attribute_set_name.is_set
	|| affinity_attribute_set_name.is_set
	|| lockdown.is_set;
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preference_level.yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_name.yfilter)
	|| ydk::is_set(protected_by_preference_level.yfilter)
	|| ydk::is_set(restore_by_preference_level.yfilter)
	|| ydk::is_set(xro_type.yfilter)
	|| ydk::is_set(xro_attribute_set_name.yfilter)
	|| ydk::is_set(affinity_attribute_set_name.yfilter)
	|| ydk::is_set(lockdown.yfilter);
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option";
    ADD_KEY_TOKEN(preference_level, "preference-level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preference_level.is_set || is_set(preference_level.yfilter)) leaf_name_data.push_back(preference_level.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_name.is_set || is_set(path_name.yfilter)) leaf_name_data.push_back(path_name.get_name_leafdata());
    if (protected_by_preference_level.is_set || is_set(protected_by_preference_level.yfilter)) leaf_name_data.push_back(protected_by_preference_level.get_name_leafdata());
    if (restore_by_preference_level.is_set || is_set(restore_by_preference_level.yfilter)) leaf_name_data.push_back(restore_by_preference_level.get_name_leafdata());
    if (xro_type.is_set || is_set(xro_type.yfilter)) leaf_name_data.push_back(xro_type.get_name_leafdata());
    if (xro_attribute_set_name.is_set || is_set(xro_attribute_set_name.yfilter)) leaf_name_data.push_back(xro_attribute_set_name.get_name_leafdata());
    if (affinity_attribute_set_name.is_set || is_set(affinity_attribute_set_name.yfilter)) leaf_name_data.push_back(affinity_attribute_set_name.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.yfilter)) leaf_name_data.push_back(lockdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "protected-by-preference-level")
    {
        protected_by_preference_level = value;
        protected_by_preference_level.value_namespace = name_space;
        protected_by_preference_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restore-by-preference-level")
    {
        restore_by_preference_level = value;
        restore_by_preference_level.value_namespace = name_space;
        restore_by_preference_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xro-type")
    {
        xro_type = value;
        xro_type.value_namespace = name_space;
        xro_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xro-attribute-set-name")
    {
        xro_attribute_set_name = value;
        xro_attribute_set_name.value_namespace = name_space;
        xro_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-attribute-set-name")
    {
        affinity_attribute_set_name = value;
        affinity_attribute_set_name.value_namespace = name_space;
        affinity_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
        lockdown.value_namespace = name_space;
        lockdown.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "protected-by-preference-level")
    {
        protected_by_preference_level.yfilter = yfilter;
    }
    if(value_path == "restore-by-preference-level")
    {
        restore_by_preference_level.yfilter = yfilter;
    }
    if(value_path == "xro-type")
    {
        xro_type.yfilter = yfilter;
    }
    if(value_path == "xro-attribute-set-name")
    {
        xro_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "affinity-attribute-set-name")
    {
        affinity_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "lockdown")
    {
        lockdown.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preference-level" || name == "path-type" || name == "path-id" || name == "path-name" || name == "protected-by-preference-level" || name == "restore-by-preference-level" || name == "xro-type" || name == "xro-attribute-set-name" || name == "affinity-attribute-set-name" || name == "lockdown")
        return true;
    return false;
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::StaticUni()
    :
    ingress_controller_name{YType::str, "ingress-controller-name"},
    egress_controller_if_index{YType::uint32, "egress-controller-if-index"},
    ingress_type{YType::enumeration, "ingress-type"},
    egress_type{YType::enumeration, "egress-type"}
{

    yang_name = "static-uni"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::~StaticUni()
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::has_data() const
{
    if (is_presence_container) return true;
    return ingress_controller_name.is_set
	|| egress_controller_if_index.is_set
	|| ingress_type.is_set
	|| egress_type.is_set;
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ingress_controller_name.yfilter)
	|| ydk::is_set(egress_controller_if_index.yfilter)
	|| ydk::is_set(ingress_type.yfilter)
	|| ydk::is_set(egress_type.yfilter);
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-uni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ingress_controller_name.is_set || is_set(ingress_controller_name.yfilter)) leaf_name_data.push_back(ingress_controller_name.get_name_leafdata());
    if (egress_controller_if_index.is_set || is_set(egress_controller_if_index.yfilter)) leaf_name_data.push_back(egress_controller_if_index.get_name_leafdata());
    if (ingress_type.is_set || is_set(ingress_type.yfilter)) leaf_name_data.push_back(ingress_type.get_name_leafdata());
    if (egress_type.is_set || is_set(egress_type.yfilter)) leaf_name_data.push_back(egress_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ingress-controller-name")
    {
        ingress_controller_name = value;
        ingress_controller_name.value_namespace = name_space;
        ingress_controller_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-controller-if-index")
    {
        egress_controller_if_index = value;
        egress_controller_if_index.value_namespace = name_space;
        egress_controller_if_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-type")
    {
        ingress_type = value;
        ingress_type.value_namespace = name_space;
        ingress_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-type")
    {
        egress_type = value;
        egress_type.value_namespace = name_space;
        egress_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ingress-controller-name")
    {
        ingress_controller_name.yfilter = yfilter;
    }
    if(value_path == "egress-controller-if-index")
    {
        egress_controller_if_index.yfilter = yfilter;
    }
    if(value_path == "ingress-type")
    {
        ingress_type.yfilter = yfilter;
    }
    if(value_path == "egress-type")
    {
        egress_type.yfilter = yfilter;
    }
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress-controller-name" || name == "egress-controller-if-index" || name == "ingress-type" || name == "egress-type")
        return true;
    return false;
}

MplsTe::Lcac::Lcac()
    :
    bandwidth_hold_timer{YType::uint32, "bandwidth-hold-timer"},
    delay_preempt_bundle_capacity_timer{YType::uint32, "delay-preempt-bundle-capacity-timer"},
    periodic_flooding_timer{YType::uint32, "periodic-flooding-timer"}
        ,
    bfd(std::make_shared<MplsTe::Lcac::Bfd>())
    , flooding_threshold(std::make_shared<MplsTe::Lcac::FloodingThreshold>())
{
    bfd->parent = this;
    flooding_threshold->parent = this;

    yang_name = "lcac"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Lcac::~Lcac()
{
}

bool MplsTe::Lcac::has_data() const
{
    if (is_presence_container) return true;
    return bandwidth_hold_timer.is_set
	|| delay_preempt_bundle_capacity_timer.is_set
	|| periodic_flooding_timer.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (flooding_threshold !=  nullptr && flooding_threshold->has_data());
}

bool MplsTe::Lcac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_hold_timer.yfilter)
	|| ydk::is_set(delay_preempt_bundle_capacity_timer.yfilter)
	|| ydk::is_set(periodic_flooding_timer.yfilter)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (flooding_threshold !=  nullptr && flooding_threshold->has_operation());
}

std::string MplsTe::Lcac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Lcac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lcac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Lcac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_hold_timer.is_set || is_set(bandwidth_hold_timer.yfilter)) leaf_name_data.push_back(bandwidth_hold_timer.get_name_leafdata());
    if (delay_preempt_bundle_capacity_timer.is_set || is_set(delay_preempt_bundle_capacity_timer.yfilter)) leaf_name_data.push_back(delay_preempt_bundle_capacity_timer.get_name_leafdata());
    if (periodic_flooding_timer.is_set || is_set(periodic_flooding_timer.yfilter)) leaf_name_data.push_back(periodic_flooding_timer.get_name_leafdata());

    return leaf_name_data;

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
    char count=0;
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

void MplsTe::Lcac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-hold-timer")
    {
        bandwidth_hold_timer = value;
        bandwidth_hold_timer.value_namespace = name_space;
        bandwidth_hold_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-preempt-bundle-capacity-timer")
    {
        delay_preempt_bundle_capacity_timer = value;
        delay_preempt_bundle_capacity_timer.value_namespace = name_space;
        delay_preempt_bundle_capacity_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-flooding-timer")
    {
        periodic_flooding_timer = value;
        periodic_flooding_timer.value_namespace = name_space;
        periodic_flooding_timer.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Lcac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-hold-timer")
    {
        bandwidth_hold_timer.yfilter = yfilter;
    }
    if(value_path == "delay-preempt-bundle-capacity-timer")
    {
        delay_preempt_bundle_capacity_timer.yfilter = yfilter;
    }
    if(value_path == "periodic-flooding-timer")
    {
        periodic_flooding_timer.yfilter = yfilter;
    }
}

bool MplsTe::Lcac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd" || name == "flooding-threshold" || name == "bandwidth-hold-timer" || name == "delay-preempt-bundle-capacity-timer" || name == "periodic-flooding-timer")
        return true;
    return false;
}

MplsTe::Lcac::Bfd::Bfd()
    :
    interval{YType::uint32, "interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"}
{

    yang_name = "bfd"; yang_parent_name = "lcac"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Lcac::Bfd::~Bfd()
{
}

bool MplsTe::Lcac::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| detection_multiplier.is_set;
}

bool MplsTe::Lcac::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter);
}

std::string MplsTe::Lcac::Bfd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Lcac::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Lcac::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Lcac::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Lcac::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Lcac::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Lcac::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
}

bool MplsTe::Lcac::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "detection-multiplier")
        return true;
    return false;
}

MplsTe::Lcac::FloodingThreshold::FloodingThreshold()
    :
    up_stream{YType::uint32, "up-stream"},
    down_stream{YType::uint32, "down-stream"}
{

    yang_name = "flooding-threshold"; yang_parent_name = "lcac"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Lcac::FloodingThreshold::~FloodingThreshold()
{
}

bool MplsTe::Lcac::FloodingThreshold::has_data() const
{
    if (is_presence_container) return true;
    return up_stream.is_set
	|| down_stream.is_set;
}

bool MplsTe::Lcac::FloodingThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(up_stream.yfilter)
	|| ydk::is_set(down_stream.yfilter);
}

std::string MplsTe::Lcac::FloodingThreshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Lcac::FloodingThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Lcac::FloodingThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (up_stream.is_set || is_set(up_stream.yfilter)) leaf_name_data.push_back(up_stream.get_name_leafdata());
    if (down_stream.is_set || is_set(down_stream.yfilter)) leaf_name_data.push_back(down_stream.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Lcac::FloodingThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Lcac::FloodingThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Lcac::FloodingThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "up-stream")
    {
        up_stream = value;
        up_stream.value_namespace = name_space;
        up_stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-stream")
    {
        down_stream = value;
        down_stream.value_namespace = name_space;
        down_stream.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Lcac::FloodingThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "up-stream")
    {
        up_stream.yfilter = yfilter;
    }
    if(value_path == "down-stream")
    {
        down_stream.yfilter = yfilter;
    }
}

bool MplsTe::Lcac::FloodingThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up-stream" || name == "down-stream")
        return true;
    return false;
}


}
}

