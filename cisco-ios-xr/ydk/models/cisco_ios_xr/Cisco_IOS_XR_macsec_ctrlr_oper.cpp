
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_macsec_ctrlr_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_macsec_ctrlr_oper {

MacsecCtrlrOper::MacsecCtrlrOper()
    :
    macsec_ctrlr_ports(std::make_shared<MacsecCtrlrOper::MacsecCtrlrPorts>())
{
    macsec_ctrlr_ports->parent = this;

    yang_name = "macsec-ctrlr-oper"; yang_parent_name = "Cisco-IOS-XR-macsec-ctrlr-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

MacsecCtrlrOper::~MacsecCtrlrOper()
{
}

bool MacsecCtrlrOper::has_data() const
{
    if (is_presence_container) return true;
    return (macsec_ctrlr_ports !=  nullptr && macsec_ctrlr_ports->has_data());
}

bool MacsecCtrlrOper::has_operation() const
{
    return is_set(yfilter)
	|| (macsec_ctrlr_ports !=  nullptr && macsec_ctrlr_ports->has_operation());
}

std::string MacsecCtrlrOper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-macsec-ctrlr-oper:macsec-ctrlr-oper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecCtrlrOper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecCtrlrOper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-ctrlr-ports")
    {
        if(macsec_ctrlr_ports == nullptr)
        {
            macsec_ctrlr_ports = std::make_shared<MacsecCtrlrOper::MacsecCtrlrPorts>();
        }
        return macsec_ctrlr_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecCtrlrOper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(macsec_ctrlr_ports != nullptr)
    {
        children["macsec-ctrlr-ports"] = macsec_ctrlr_ports;
    }

    return children;
}

void MacsecCtrlrOper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MacsecCtrlrOper::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MacsecCtrlrOper::clone_ptr() const
{
    return std::make_shared<MacsecCtrlrOper>();
}

std::string MacsecCtrlrOper::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MacsecCtrlrOper::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MacsecCtrlrOper::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MacsecCtrlrOper::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MacsecCtrlrOper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-ctrlr-ports")
        return true;
    return false;
}

MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPorts()
    :
    macsec_ctrlr_port(this, {"name"})
{

    yang_name = "macsec-ctrlr-ports"; yang_parent_name = "macsec-ctrlr-oper"; is_top_level_class = false; has_list_ancestor = false; 
}

MacsecCtrlrOper::MacsecCtrlrPorts::~MacsecCtrlrPorts()
{
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macsec_ctrlr_port.len(); index++)
    {
        if(macsec_ctrlr_port[index]->has_data())
            return true;
    }
    return false;
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::has_operation() const
{
    for (std::size_t index=0; index<macsec_ctrlr_port.len(); index++)
    {
        if(macsec_ctrlr_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MacsecCtrlrOper::MacsecCtrlrPorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-macsec-ctrlr-oper:macsec-ctrlr-oper/" << get_segment_path();
    return path_buffer.str();
}

std::string MacsecCtrlrOper::MacsecCtrlrPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-ctrlr-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecCtrlrOper::MacsecCtrlrPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecCtrlrOper::MacsecCtrlrPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-ctrlr-port")
    {
        auto c = std::make_shared<MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort>();
        c->parent = this;
        macsec_ctrlr_port.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecCtrlrOper::MacsecCtrlrPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : macsec_ctrlr_port.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MacsecCtrlrOper::MacsecCtrlrPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MacsecCtrlrOper::MacsecCtrlrPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-ctrlr-port")
        return true;
    return false;
}

MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrPort()
    :
    name{YType::str, "name"}
        ,
    macsec_ctrlr_info(std::make_shared<MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo>())
{
    macsec_ctrlr_info->parent = this;

    yang_name = "macsec-ctrlr-port"; yang_parent_name = "macsec-ctrlr-ports"; is_top_level_class = false; has_list_ancestor = false; 
}

MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::~MacsecCtrlrPort()
{
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (macsec_ctrlr_info !=  nullptr && macsec_ctrlr_info->has_data());
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (macsec_ctrlr_info !=  nullptr && macsec_ctrlr_info->has_operation());
}

std::string MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-macsec-ctrlr-oper:macsec-ctrlr-oper/macsec-ctrlr-ports/" << get_segment_path();
    return path_buffer.str();
}

std::string MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-ctrlr-port";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-ctrlr-info")
    {
        if(macsec_ctrlr_info == nullptr)
        {
            macsec_ctrlr_info = std::make_shared<MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo>();
        }
        return macsec_ctrlr_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(macsec_ctrlr_info != nullptr)
    {
        children["macsec-ctrlr-info"] = macsec_ctrlr_info;
    }

    return children;
}

void MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-ctrlr-info" || name == "name")
        return true;
    return false;
}

MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::MacsecCtrlrInfo()
    :
    state{YType::enumeration, "state"},
    replay_window_size{YType::uint32, "replay-window-size"},
    must_secure{YType::boolean, "must-secure"},
    secure_mode{YType::uint32, "secure-mode"}
        ,
    encrypt_sc_status(std::make_shared<MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus>())
    , decrypt_sc_status(std::make_shared<MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus>())
{
    encrypt_sc_status->parent = this;
    decrypt_sc_status->parent = this;

    yang_name = "macsec-ctrlr-info"; yang_parent_name = "macsec-ctrlr-port"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::~MacsecCtrlrInfo()
{
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::has_data() const
{
    if (is_presence_container) return true;
    return state.is_set
	|| replay_window_size.is_set
	|| must_secure.is_set
	|| secure_mode.is_set
	|| (encrypt_sc_status !=  nullptr && encrypt_sc_status->has_data())
	|| (decrypt_sc_status !=  nullptr && decrypt_sc_status->has_data());
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(replay_window_size.yfilter)
	|| ydk::is_set(must_secure.yfilter)
	|| ydk::is_set(secure_mode.yfilter)
	|| (encrypt_sc_status !=  nullptr && encrypt_sc_status->has_operation())
	|| (decrypt_sc_status !=  nullptr && decrypt_sc_status->has_operation());
}

std::string MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-ctrlr-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (replay_window_size.is_set || is_set(replay_window_size.yfilter)) leaf_name_data.push_back(replay_window_size.get_name_leafdata());
    if (must_secure.is_set || is_set(must_secure.yfilter)) leaf_name_data.push_back(must_secure.get_name_leafdata());
    if (secure_mode.is_set || is_set(secure_mode.yfilter)) leaf_name_data.push_back(secure_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encrypt-sc-status")
    {
        if(encrypt_sc_status == nullptr)
        {
            encrypt_sc_status = std::make_shared<MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus>();
        }
        return encrypt_sc_status;
    }

    if(child_yang_name == "decrypt-sc-status")
    {
        if(decrypt_sc_status == nullptr)
        {
            decrypt_sc_status = std::make_shared<MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus>();
        }
        return decrypt_sc_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(encrypt_sc_status != nullptr)
    {
        children["encrypt-sc-status"] = encrypt_sc_status;
    }

    if(decrypt_sc_status != nullptr)
    {
        children["decrypt-sc-status"] = decrypt_sc_status;
    }

    return children;
}

void MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replay-window-size")
    {
        replay_window_size = value;
        replay_window_size.value_namespace = name_space;
        replay_window_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "must-secure")
    {
        must_secure = value;
        must_secure.value_namespace = name_space;
        must_secure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-mode")
    {
        secure_mode = value;
        secure_mode.value_namespace = name_space;
        secure_mode.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "replay-window-size")
    {
        replay_window_size.yfilter = yfilter;
    }
    if(value_path == "must-secure")
    {
        must_secure.yfilter = yfilter;
    }
    if(value_path == "secure-mode")
    {
        secure_mode.yfilter = yfilter;
    }
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt-sc-status" || name == "decrypt-sc-status" || name == "state" || name == "replay-window-size" || name == "must-secure" || name == "secure-mode")
        return true;
    return false;
}

MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::EncryptScStatus()
    :
    protection_enabled{YType::boolean, "protection-enabled"},
    secure_channel_id{YType::str, "secure-channel-id"},
    confidentiality_offset{YType::uint32, "confidentiality-offset"},
    cipher_suite{YType::enumeration, "cipher-suite"},
    max_packet_number{YType::uint64, "max-packet-number"},
    recent_packet_number{YType::uint64, "recent-packet-number"}
        ,
    active_association(this, {})
{

    yang_name = "encrypt-sc-status"; yang_parent_name = "macsec-ctrlr-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::~EncryptScStatus()
{
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<active_association.len(); index++)
    {
        if(active_association[index]->has_data())
            return true;
    }
    return protection_enabled.is_set
	|| secure_channel_id.is_set
	|| confidentiality_offset.is_set
	|| cipher_suite.is_set
	|| max_packet_number.is_set
	|| recent_packet_number.is_set;
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::has_operation() const
{
    for (std::size_t index=0; index<active_association.len(); index++)
    {
        if(active_association[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protection_enabled.yfilter)
	|| ydk::is_set(secure_channel_id.yfilter)
	|| ydk::is_set(confidentiality_offset.yfilter)
	|| ydk::is_set(cipher_suite.yfilter)
	|| ydk::is_set(max_packet_number.yfilter)
	|| ydk::is_set(recent_packet_number.yfilter);
}

std::string MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypt-sc-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protection_enabled.is_set || is_set(protection_enabled.yfilter)) leaf_name_data.push_back(protection_enabled.get_name_leafdata());
    if (secure_channel_id.is_set || is_set(secure_channel_id.yfilter)) leaf_name_data.push_back(secure_channel_id.get_name_leafdata());
    if (confidentiality_offset.is_set || is_set(confidentiality_offset.yfilter)) leaf_name_data.push_back(confidentiality_offset.get_name_leafdata());
    if (cipher_suite.is_set || is_set(cipher_suite.yfilter)) leaf_name_data.push_back(cipher_suite.get_name_leafdata());
    if (max_packet_number.is_set || is_set(max_packet_number.yfilter)) leaf_name_data.push_back(max_packet_number.get_name_leafdata());
    if (recent_packet_number.is_set || is_set(recent_packet_number.yfilter)) leaf_name_data.push_back(recent_packet_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-association")
    {
        auto c = std::make_shared<MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation>();
        c->parent = this;
        active_association.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : active_association.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protection-enabled")
    {
        protection_enabled = value;
        protection_enabled.value_namespace = name_space;
        protection_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-channel-id")
    {
        secure_channel_id = value;
        secure_channel_id.value_namespace = name_space;
        secure_channel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confidentiality-offset")
    {
        confidentiality_offset = value;
        confidentiality_offset.value_namespace = name_space;
        confidentiality_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipher-suite")
    {
        cipher_suite = value;
        cipher_suite.value_namespace = name_space;
        cipher_suite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-packet-number")
    {
        max_packet_number = value;
        max_packet_number.value_namespace = name_space;
        max_packet_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recent-packet-number")
    {
        recent_packet_number = value;
        recent_packet_number.value_namespace = name_space;
        recent_packet_number.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protection-enabled")
    {
        protection_enabled.yfilter = yfilter;
    }
    if(value_path == "secure-channel-id")
    {
        secure_channel_id.yfilter = yfilter;
    }
    if(value_path == "confidentiality-offset")
    {
        confidentiality_offset.yfilter = yfilter;
    }
    if(value_path == "cipher-suite")
    {
        cipher_suite.yfilter = yfilter;
    }
    if(value_path == "max-packet-number")
    {
        max_packet_number.yfilter = yfilter;
    }
    if(value_path == "recent-packet-number")
    {
        recent_packet_number.yfilter = yfilter;
    }
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-association" || name == "protection-enabled" || name == "secure-channel-id" || name == "confidentiality-offset" || name == "cipher-suite" || name == "max-packet-number" || name == "recent-packet-number")
        return true;
    return false;
}

MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation::ActiveAssociation()
    :
    association_number{YType::uint8, "association-number"},
    short_secure_channel_id{YType::uint32, "short-secure-channel-id"}
{

    yang_name = "active-association"; yang_parent_name = "encrypt-sc-status"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation::~ActiveAssociation()
{
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation::has_data() const
{
    if (is_presence_container) return true;
    return association_number.is_set
	|| short_secure_channel_id.is_set;
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(association_number.yfilter)
	|| ydk::is_set(short_secure_channel_id.yfilter);
}

std::string MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (association_number.is_set || is_set(association_number.yfilter)) leaf_name_data.push_back(association_number.get_name_leafdata());
    if (short_secure_channel_id.is_set || is_set(short_secure_channel_id.yfilter)) leaf_name_data.push_back(short_secure_channel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "association-number")
    {
        association_number = value;
        association_number.value_namespace = name_space;
        association_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-secure-channel-id")
    {
        short_secure_channel_id = value;
        short_secure_channel_id.value_namespace = name_space;
        short_secure_channel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "association-number")
    {
        association_number.yfilter = yfilter;
    }
    if(value_path == "short-secure-channel-id")
    {
        short_secure_channel_id.yfilter = yfilter;
    }
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association-number" || name == "short-secure-channel-id")
        return true;
    return false;
}

MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::DecryptScStatus()
    :
    protection_enabled{YType::boolean, "protection-enabled"},
    secure_channel_id{YType::str, "secure-channel-id"},
    confidentiality_offset{YType::uint32, "confidentiality-offset"},
    cipher_suite{YType::enumeration, "cipher-suite"},
    max_packet_number{YType::uint64, "max-packet-number"},
    recent_packet_number{YType::uint64, "recent-packet-number"}
        ,
    active_association(this, {})
{

    yang_name = "decrypt-sc-status"; yang_parent_name = "macsec-ctrlr-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::~DecryptScStatus()
{
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<active_association.len(); index++)
    {
        if(active_association[index]->has_data())
            return true;
    }
    return protection_enabled.is_set
	|| secure_channel_id.is_set
	|| confidentiality_offset.is_set
	|| cipher_suite.is_set
	|| max_packet_number.is_set
	|| recent_packet_number.is_set;
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::has_operation() const
{
    for (std::size_t index=0; index<active_association.len(); index++)
    {
        if(active_association[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protection_enabled.yfilter)
	|| ydk::is_set(secure_channel_id.yfilter)
	|| ydk::is_set(confidentiality_offset.yfilter)
	|| ydk::is_set(cipher_suite.yfilter)
	|| ydk::is_set(max_packet_number.yfilter)
	|| ydk::is_set(recent_packet_number.yfilter);
}

std::string MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "decrypt-sc-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protection_enabled.is_set || is_set(protection_enabled.yfilter)) leaf_name_data.push_back(protection_enabled.get_name_leafdata());
    if (secure_channel_id.is_set || is_set(secure_channel_id.yfilter)) leaf_name_data.push_back(secure_channel_id.get_name_leafdata());
    if (confidentiality_offset.is_set || is_set(confidentiality_offset.yfilter)) leaf_name_data.push_back(confidentiality_offset.get_name_leafdata());
    if (cipher_suite.is_set || is_set(cipher_suite.yfilter)) leaf_name_data.push_back(cipher_suite.get_name_leafdata());
    if (max_packet_number.is_set || is_set(max_packet_number.yfilter)) leaf_name_data.push_back(max_packet_number.get_name_leafdata());
    if (recent_packet_number.is_set || is_set(recent_packet_number.yfilter)) leaf_name_data.push_back(recent_packet_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-association")
    {
        auto c = std::make_shared<MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation>();
        c->parent = this;
        active_association.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : active_association.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protection-enabled")
    {
        protection_enabled = value;
        protection_enabled.value_namespace = name_space;
        protection_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-channel-id")
    {
        secure_channel_id = value;
        secure_channel_id.value_namespace = name_space;
        secure_channel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confidentiality-offset")
    {
        confidentiality_offset = value;
        confidentiality_offset.value_namespace = name_space;
        confidentiality_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipher-suite")
    {
        cipher_suite = value;
        cipher_suite.value_namespace = name_space;
        cipher_suite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-packet-number")
    {
        max_packet_number = value;
        max_packet_number.value_namespace = name_space;
        max_packet_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recent-packet-number")
    {
        recent_packet_number = value;
        recent_packet_number.value_namespace = name_space;
        recent_packet_number.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protection-enabled")
    {
        protection_enabled.yfilter = yfilter;
    }
    if(value_path == "secure-channel-id")
    {
        secure_channel_id.yfilter = yfilter;
    }
    if(value_path == "confidentiality-offset")
    {
        confidentiality_offset.yfilter = yfilter;
    }
    if(value_path == "cipher-suite")
    {
        cipher_suite.yfilter = yfilter;
    }
    if(value_path == "max-packet-number")
    {
        max_packet_number.yfilter = yfilter;
    }
    if(value_path == "recent-packet-number")
    {
        recent_packet_number.yfilter = yfilter;
    }
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-association" || name == "protection-enabled" || name == "secure-channel-id" || name == "confidentiality-offset" || name == "cipher-suite" || name == "max-packet-number" || name == "recent-packet-number")
        return true;
    return false;
}

MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation::ActiveAssociation()
    :
    association_number{YType::uint8, "association-number"},
    short_secure_channel_id{YType::uint32, "short-secure-channel-id"}
{

    yang_name = "active-association"; yang_parent_name = "decrypt-sc-status"; is_top_level_class = false; has_list_ancestor = true; 
}

MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation::~ActiveAssociation()
{
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation::has_data() const
{
    if (is_presence_container) return true;
    return association_number.is_set
	|| short_secure_channel_id.is_set;
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(association_number.yfilter)
	|| ydk::is_set(short_secure_channel_id.yfilter);
}

std::string MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (association_number.is_set || is_set(association_number.yfilter)) leaf_name_data.push_back(association_number.get_name_leafdata());
    if (short_secure_channel_id.is_set || is_set(short_secure_channel_id.yfilter)) leaf_name_data.push_back(short_secure_channel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "association-number")
    {
        association_number = value;
        association_number.value_namespace = name_space;
        association_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-secure-channel-id")
    {
        short_secure_channel_id = value;
        short_secure_channel_id.value_namespace = name_space;
        short_secure_channel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "association-number")
    {
        association_number.yfilter = yfilter;
    }
    if(value_path == "short-secure-channel-id")
    {
        short_secure_channel_id.yfilter = yfilter;
    }
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association-number" || name == "short-secure-channel-id")
        return true;
    return false;
}

const Enum::YLeaf MacsecCtrlrCiphersuit::gcm_aes_256 {0, "gcm-aes-256"};
const Enum::YLeaf MacsecCtrlrCiphersuit::gcm_aes_128 {1, "gcm-aes-128"};
const Enum::YLeaf MacsecCtrlrCiphersuit::gcm_aes_xpn_256 {2, "gcm-aes-xpn-256"};

const Enum::YLeaf MacsecCtrlrState::macsec_ctrlr_state_up {0, "macsec-ctrlr-state-up"};
const Enum::YLeaf MacsecCtrlrState::macsec_ctrlr_state_down {1, "macsec-ctrlr-state-down"};
const Enum::YLeaf MacsecCtrlrState::macsec_ctrlr_state_admin_down {2, "macsec-ctrlr-state-admin-down"};


}
}

