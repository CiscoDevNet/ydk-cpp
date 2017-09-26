
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ncs1k_macsec_ea_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs1k_macsec_ea_oper {

Ncs1KMacsecOper::Ncs1KMacsecOper()
    :
    ncs1k_macsec_ctrlr_names(std::make_shared<Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames>())
{
    ncs1k_macsec_ctrlr_names->parent = this;

    yang_name = "ncs1k-macsec-oper"; yang_parent_name = "Cisco-IOS-XR-ncs1k-macsec-ea-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Ncs1KMacsecOper::~Ncs1KMacsecOper()
{
}

bool Ncs1KMacsecOper::has_data() const
{
    return (ncs1k_macsec_ctrlr_names !=  nullptr && ncs1k_macsec_ctrlr_names->has_data());
}

bool Ncs1KMacsecOper::has_operation() const
{
    return is_set(yfilter)
	|| (ncs1k_macsec_ctrlr_names !=  nullptr && ncs1k_macsec_ctrlr_names->has_operation());
}

std::string Ncs1KMacsecOper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1k-macsec-ea-oper:ncs1k-macsec-oper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ncs1KMacsecOper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ncs1KMacsecOper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ncs1k-macsec-ctrlr-names")
    {
        if(ncs1k_macsec_ctrlr_names == nullptr)
        {
            ncs1k_macsec_ctrlr_names = std::make_shared<Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames>();
        }
        return ncs1k_macsec_ctrlr_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ncs1KMacsecOper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ncs1k_macsec_ctrlr_names != nullptr)
    {
        children["ncs1k-macsec-ctrlr-names"] = ncs1k_macsec_ctrlr_names;
    }

    return children;
}

void Ncs1KMacsecOper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ncs1KMacsecOper::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Ncs1KMacsecOper::clone_ptr() const
{
    return std::make_shared<Ncs1KMacsecOper>();
}

std::string Ncs1KMacsecOper::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ncs1KMacsecOper::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ncs1KMacsecOper::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ncs1KMacsecOper::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ncs1KMacsecOper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ncs1k-macsec-ctrlr-names")
        return true;
    return false;
}

Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrNames()
{

    yang_name = "ncs1k-macsec-ctrlr-names"; yang_parent_name = "ncs1k-macsec-oper"; is_top_level_class = false; has_list_ancestor = false;
}

Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::~Ncs1KMacsecCtrlrNames()
{
}

bool Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::has_data() const
{
    for (std::size_t index=0; index<ncs1k_macsec_ctrlr_name.size(); index++)
    {
        if(ncs1k_macsec_ctrlr_name[index]->has_data())
            return true;
    }
    return false;
}

bool Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::has_operation() const
{
    for (std::size_t index=0; index<ncs1k_macsec_ctrlr_name.size(); index++)
    {
        if(ncs1k_macsec_ctrlr_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1k-macsec-ea-oper:ncs1k-macsec-oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ncs1k-macsec-ctrlr-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ncs1k-macsec-ctrlr-name")
    {
        for(auto const & c : ncs1k_macsec_ctrlr_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName>();
        c->parent = this;
        ncs1k_macsec_ctrlr_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ncs1k_macsec_ctrlr_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ncs1k-macsec-ctrlr-name")
        return true;
    return false;
}

Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KMacsecCtrlrName()
    :
    name{YType::str, "name"}
    	,
    ncs1k_status_info(std::make_shared<Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo>())
{
    ncs1k_status_info->parent = this;

    yang_name = "ncs1k-macsec-ctrlr-name"; yang_parent_name = "ncs1k-macsec-ctrlr-names"; is_top_level_class = false; has_list_ancestor = false;
}

Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::~Ncs1KMacsecCtrlrName()
{
}

bool Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::has_data() const
{
    return name.is_set
	|| (ncs1k_status_info !=  nullptr && ncs1k_status_info->has_data());
}

bool Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ncs1k_status_info !=  nullptr && ncs1k_status_info->has_operation());
}

std::string Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1k-macsec-ea-oper:ncs1k-macsec-oper/ncs1k-macsec-ctrlr-names/" << get_segment_path();
    return path_buffer.str();
}

std::string Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ncs1k-macsec-ctrlr-name" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ncs1k-status-info")
    {
        if(ncs1k_status_info == nullptr)
        {
            ncs1k_status_info = std::make_shared<Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo>();
        }
        return ncs1k_status_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ncs1k_status_info != nullptr)
    {
        children["ncs1k-status-info"] = ncs1k_status_info;
    }

    return children;
}

void Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ncs1k-status-info" || name == "name")
        return true;
    return false;
}

Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::Ncs1KStatusInfo()
    :
    must_secure{YType::boolean, "must-secure"},
    replay_window_size{YType::uint32, "replay-window-size"},
    secure_mode{YType::uint32, "secure-mode"}
    	,
    decrypt_sc_status(std::make_shared<Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus>())
	,encrypt_sc_status(std::make_shared<Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus>())
{
    decrypt_sc_status->parent = this;
    encrypt_sc_status->parent = this;

    yang_name = "ncs1k-status-info"; yang_parent_name = "ncs1k-macsec-ctrlr-name"; is_top_level_class = false; has_list_ancestor = true;
}

Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::~Ncs1KStatusInfo()
{
}

bool Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::has_data() const
{
    return must_secure.is_set
	|| replay_window_size.is_set
	|| secure_mode.is_set
	|| (decrypt_sc_status !=  nullptr && decrypt_sc_status->has_data())
	|| (encrypt_sc_status !=  nullptr && encrypt_sc_status->has_data());
}

bool Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(must_secure.yfilter)
	|| ydk::is_set(replay_window_size.yfilter)
	|| ydk::is_set(secure_mode.yfilter)
	|| (decrypt_sc_status !=  nullptr && decrypt_sc_status->has_operation())
	|| (encrypt_sc_status !=  nullptr && encrypt_sc_status->has_operation());
}

std::string Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ncs1k-status-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (must_secure.is_set || is_set(must_secure.yfilter)) leaf_name_data.push_back(must_secure.get_name_leafdata());
    if (replay_window_size.is_set || is_set(replay_window_size.yfilter)) leaf_name_data.push_back(replay_window_size.get_name_leafdata());
    if (secure_mode.is_set || is_set(secure_mode.yfilter)) leaf_name_data.push_back(secure_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "decrypt-sc-status")
    {
        if(decrypt_sc_status == nullptr)
        {
            decrypt_sc_status = std::make_shared<Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus>();
        }
        return decrypt_sc_status;
    }

    if(child_yang_name == "encrypt-sc-status")
    {
        if(encrypt_sc_status == nullptr)
        {
            encrypt_sc_status = std::make_shared<Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus>();
        }
        return encrypt_sc_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(decrypt_sc_status != nullptr)
    {
        children["decrypt-sc-status"] = decrypt_sc_status;
    }

    if(encrypt_sc_status != nullptr)
    {
        children["encrypt-sc-status"] = encrypt_sc_status;
    }

    return children;
}

void Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "must-secure")
    {
        must_secure = value;
        must_secure.value_namespace = name_space;
        must_secure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replay-window-size")
    {
        replay_window_size = value;
        replay_window_size.value_namespace = name_space;
        replay_window_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-mode")
    {
        secure_mode = value;
        secure_mode.value_namespace = name_space;
        secure_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "must-secure")
    {
        must_secure.yfilter = yfilter;
    }
    if(value_path == "replay-window-size")
    {
        replay_window_size.yfilter = yfilter;
    }
    if(value_path == "secure-mode")
    {
        secure_mode.yfilter = yfilter;
    }
}

bool Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "decrypt-sc-status" || name == "encrypt-sc-status" || name == "must-secure" || name == "replay-window-size" || name == "secure-mode")
        return true;
    return false;
}

Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus::DecryptScStatus()
    :
    cipher_suite{YType::enumeration, "cipher-suite"},
    confidentiality_offset{YType::uint32, "confidentiality-offset"},
    initial_packet_number{YType::uint64, "initial-packet-number"},
    max_packet_number{YType::uint64, "max-packet-number"},
    protection_enabled{YType::boolean, "protection-enabled"},
    recent_packet_number{YType::uint64, "recent-packet-number"},
    secure_channel_id{YType::uint64, "secure-channel-id"},
    secure_tag_length{YType::uint32, "secure-tag-length"}
{

    yang_name = "decrypt-sc-status"; yang_parent_name = "ncs1k-status-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus::~DecryptScStatus()
{
}

bool Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus::has_data() const
{
    for (std::size_t index=0; index<active_association.size(); index++)
    {
        if(active_association[index]->has_data())
            return true;
    }
    return cipher_suite.is_set
	|| confidentiality_offset.is_set
	|| initial_packet_number.is_set
	|| max_packet_number.is_set
	|| protection_enabled.is_set
	|| recent_packet_number.is_set
	|| secure_channel_id.is_set
	|| secure_tag_length.is_set;
}

bool Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus::has_operation() const
{
    for (std::size_t index=0; index<active_association.size(); index++)
    {
        if(active_association[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cipher_suite.yfilter)
	|| ydk::is_set(confidentiality_offset.yfilter)
	|| ydk::is_set(initial_packet_number.yfilter)
	|| ydk::is_set(max_packet_number.yfilter)
	|| ydk::is_set(protection_enabled.yfilter)
	|| ydk::is_set(recent_packet_number.yfilter)
	|| ydk::is_set(secure_channel_id.yfilter)
	|| ydk::is_set(secure_tag_length.yfilter);
}

std::string Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "decrypt-sc-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipher_suite.is_set || is_set(cipher_suite.yfilter)) leaf_name_data.push_back(cipher_suite.get_name_leafdata());
    if (confidentiality_offset.is_set || is_set(confidentiality_offset.yfilter)) leaf_name_data.push_back(confidentiality_offset.get_name_leafdata());
    if (initial_packet_number.is_set || is_set(initial_packet_number.yfilter)) leaf_name_data.push_back(initial_packet_number.get_name_leafdata());
    if (max_packet_number.is_set || is_set(max_packet_number.yfilter)) leaf_name_data.push_back(max_packet_number.get_name_leafdata());
    if (protection_enabled.is_set || is_set(protection_enabled.yfilter)) leaf_name_data.push_back(protection_enabled.get_name_leafdata());
    if (recent_packet_number.is_set || is_set(recent_packet_number.yfilter)) leaf_name_data.push_back(recent_packet_number.get_name_leafdata());
    if (secure_channel_id.is_set || is_set(secure_channel_id.yfilter)) leaf_name_data.push_back(secure_channel_id.get_name_leafdata());
    if (secure_tag_length.is_set || is_set(secure_tag_length.yfilter)) leaf_name_data.push_back(secure_tag_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-association")
    {
        for(auto const & c : active_association)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus::ActiveAssociation>();
        c->parent = this;
        active_association.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : active_association)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipher-suite")
    {
        cipher_suite = value;
        cipher_suite.value_namespace = name_space;
        cipher_suite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confidentiality-offset")
    {
        confidentiality_offset = value;
        confidentiality_offset.value_namespace = name_space;
        confidentiality_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-packet-number")
    {
        initial_packet_number = value;
        initial_packet_number.value_namespace = name_space;
        initial_packet_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-packet-number")
    {
        max_packet_number = value;
        max_packet_number.value_namespace = name_space;
        max_packet_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-enabled")
    {
        protection_enabled = value;
        protection_enabled.value_namespace = name_space;
        protection_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recent-packet-number")
    {
        recent_packet_number = value;
        recent_packet_number.value_namespace = name_space;
        recent_packet_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-channel-id")
    {
        secure_channel_id = value;
        secure_channel_id.value_namespace = name_space;
        secure_channel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-tag-length")
    {
        secure_tag_length = value;
        secure_tag_length.value_namespace = name_space;
        secure_tag_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipher-suite")
    {
        cipher_suite.yfilter = yfilter;
    }
    if(value_path == "confidentiality-offset")
    {
        confidentiality_offset.yfilter = yfilter;
    }
    if(value_path == "initial-packet-number")
    {
        initial_packet_number.yfilter = yfilter;
    }
    if(value_path == "max-packet-number")
    {
        max_packet_number.yfilter = yfilter;
    }
    if(value_path == "protection-enabled")
    {
        protection_enabled.yfilter = yfilter;
    }
    if(value_path == "recent-packet-number")
    {
        recent_packet_number.yfilter = yfilter;
    }
    if(value_path == "secure-channel-id")
    {
        secure_channel_id.yfilter = yfilter;
    }
    if(value_path == "secure-tag-length")
    {
        secure_tag_length.yfilter = yfilter;
    }
}

bool Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-association" || name == "cipher-suite" || name == "confidentiality-offset" || name == "initial-packet-number" || name == "max-packet-number" || name == "protection-enabled" || name == "recent-packet-number" || name == "secure-channel-id" || name == "secure-tag-length")
        return true;
    return false;
}

Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus::ActiveAssociation::ActiveAssociation()
    :
    association_number{YType::uint8, "association-number"},
    device_association_number{YType::uint8, "device-association-number"},
    key_crc{YType::str, "key-crc"},
    programmed_time{YType::str, "programmed-time"},
    short_secure_channel_id{YType::uint32, "short-secure-channel-id"},
    xpn_salt{YType::str, "xpn-salt"}
{

    yang_name = "active-association"; yang_parent_name = "decrypt-sc-status"; is_top_level_class = false; has_list_ancestor = true;
}

Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus::ActiveAssociation::~ActiveAssociation()
{
}

bool Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus::ActiveAssociation::has_data() const
{
    for (auto const & leaf : xpn_salt.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return association_number.is_set
	|| device_association_number.is_set
	|| key_crc.is_set
	|| programmed_time.is_set
	|| short_secure_channel_id.is_set;
}

bool Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus::ActiveAssociation::has_operation() const
{
    for (auto const & leaf : xpn_salt.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(association_number.yfilter)
	|| ydk::is_set(device_association_number.yfilter)
	|| ydk::is_set(key_crc.yfilter)
	|| ydk::is_set(programmed_time.yfilter)
	|| ydk::is_set(short_secure_channel_id.yfilter)
	|| ydk::is_set(xpn_salt.yfilter);
}

std::string Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus::ActiveAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus::ActiveAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (association_number.is_set || is_set(association_number.yfilter)) leaf_name_data.push_back(association_number.get_name_leafdata());
    if (device_association_number.is_set || is_set(device_association_number.yfilter)) leaf_name_data.push_back(device_association_number.get_name_leafdata());
    if (key_crc.is_set || is_set(key_crc.yfilter)) leaf_name_data.push_back(key_crc.get_name_leafdata());
    if (programmed_time.is_set || is_set(programmed_time.yfilter)) leaf_name_data.push_back(programmed_time.get_name_leafdata());
    if (short_secure_channel_id.is_set || is_set(short_secure_channel_id.yfilter)) leaf_name_data.push_back(short_secure_channel_id.get_name_leafdata());

    auto xpn_salt_name_datas = xpn_salt.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), xpn_salt_name_datas.begin(), xpn_salt_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus::ActiveAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus::ActiveAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus::ActiveAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "association-number")
    {
        association_number = value;
        association_number.value_namespace = name_space;
        association_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-association-number")
    {
        device_association_number = value;
        device_association_number.value_namespace = name_space;
        device_association_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-crc")
    {
        key_crc = value;
        key_crc.value_namespace = name_space;
        key_crc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "programmed-time")
    {
        programmed_time = value;
        programmed_time.value_namespace = name_space;
        programmed_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-secure-channel-id")
    {
        short_secure_channel_id = value;
        short_secure_channel_id.value_namespace = name_space;
        short_secure_channel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xpn-salt")
    {
        xpn_salt.append(value);
    }
}

void Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus::ActiveAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "association-number")
    {
        association_number.yfilter = yfilter;
    }
    if(value_path == "device-association-number")
    {
        device_association_number.yfilter = yfilter;
    }
    if(value_path == "key-crc")
    {
        key_crc.yfilter = yfilter;
    }
    if(value_path == "programmed-time")
    {
        programmed_time.yfilter = yfilter;
    }
    if(value_path == "short-secure-channel-id")
    {
        short_secure_channel_id.yfilter = yfilter;
    }
    if(value_path == "xpn-salt")
    {
        xpn_salt.yfilter = yfilter;
    }
}

bool Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::DecryptScStatus::ActiveAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association-number" || name == "device-association-number" || name == "key-crc" || name == "programmed-time" || name == "short-secure-channel-id" || name == "xpn-salt")
        return true;
    return false;
}

Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus::EncryptScStatus()
    :
    cipher_suite{YType::enumeration, "cipher-suite"},
    confidentiality_offset{YType::uint32, "confidentiality-offset"},
    initial_packet_number{YType::uint64, "initial-packet-number"},
    max_packet_number{YType::uint64, "max-packet-number"},
    protection_enabled{YType::boolean, "protection-enabled"},
    recent_packet_number{YType::uint64, "recent-packet-number"},
    secure_channel_id{YType::uint64, "secure-channel-id"},
    secure_tag_length{YType::uint32, "secure-tag-length"}
{

    yang_name = "encrypt-sc-status"; yang_parent_name = "ncs1k-status-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus::~EncryptScStatus()
{
}

bool Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus::has_data() const
{
    for (std::size_t index=0; index<active_association.size(); index++)
    {
        if(active_association[index]->has_data())
            return true;
    }
    return cipher_suite.is_set
	|| confidentiality_offset.is_set
	|| initial_packet_number.is_set
	|| max_packet_number.is_set
	|| protection_enabled.is_set
	|| recent_packet_number.is_set
	|| secure_channel_id.is_set
	|| secure_tag_length.is_set;
}

bool Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus::has_operation() const
{
    for (std::size_t index=0; index<active_association.size(); index++)
    {
        if(active_association[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cipher_suite.yfilter)
	|| ydk::is_set(confidentiality_offset.yfilter)
	|| ydk::is_set(initial_packet_number.yfilter)
	|| ydk::is_set(max_packet_number.yfilter)
	|| ydk::is_set(protection_enabled.yfilter)
	|| ydk::is_set(recent_packet_number.yfilter)
	|| ydk::is_set(secure_channel_id.yfilter)
	|| ydk::is_set(secure_tag_length.yfilter);
}

std::string Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypt-sc-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipher_suite.is_set || is_set(cipher_suite.yfilter)) leaf_name_data.push_back(cipher_suite.get_name_leafdata());
    if (confidentiality_offset.is_set || is_set(confidentiality_offset.yfilter)) leaf_name_data.push_back(confidentiality_offset.get_name_leafdata());
    if (initial_packet_number.is_set || is_set(initial_packet_number.yfilter)) leaf_name_data.push_back(initial_packet_number.get_name_leafdata());
    if (max_packet_number.is_set || is_set(max_packet_number.yfilter)) leaf_name_data.push_back(max_packet_number.get_name_leafdata());
    if (protection_enabled.is_set || is_set(protection_enabled.yfilter)) leaf_name_data.push_back(protection_enabled.get_name_leafdata());
    if (recent_packet_number.is_set || is_set(recent_packet_number.yfilter)) leaf_name_data.push_back(recent_packet_number.get_name_leafdata());
    if (secure_channel_id.is_set || is_set(secure_channel_id.yfilter)) leaf_name_data.push_back(secure_channel_id.get_name_leafdata());
    if (secure_tag_length.is_set || is_set(secure_tag_length.yfilter)) leaf_name_data.push_back(secure_tag_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-association")
    {
        for(auto const & c : active_association)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus::ActiveAssociation>();
        c->parent = this;
        active_association.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : active_association)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipher-suite")
    {
        cipher_suite = value;
        cipher_suite.value_namespace = name_space;
        cipher_suite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confidentiality-offset")
    {
        confidentiality_offset = value;
        confidentiality_offset.value_namespace = name_space;
        confidentiality_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-packet-number")
    {
        initial_packet_number = value;
        initial_packet_number.value_namespace = name_space;
        initial_packet_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-packet-number")
    {
        max_packet_number = value;
        max_packet_number.value_namespace = name_space;
        max_packet_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-enabled")
    {
        protection_enabled = value;
        protection_enabled.value_namespace = name_space;
        protection_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recent-packet-number")
    {
        recent_packet_number = value;
        recent_packet_number.value_namespace = name_space;
        recent_packet_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-channel-id")
    {
        secure_channel_id = value;
        secure_channel_id.value_namespace = name_space;
        secure_channel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-tag-length")
    {
        secure_tag_length = value;
        secure_tag_length.value_namespace = name_space;
        secure_tag_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipher-suite")
    {
        cipher_suite.yfilter = yfilter;
    }
    if(value_path == "confidentiality-offset")
    {
        confidentiality_offset.yfilter = yfilter;
    }
    if(value_path == "initial-packet-number")
    {
        initial_packet_number.yfilter = yfilter;
    }
    if(value_path == "max-packet-number")
    {
        max_packet_number.yfilter = yfilter;
    }
    if(value_path == "protection-enabled")
    {
        protection_enabled.yfilter = yfilter;
    }
    if(value_path == "recent-packet-number")
    {
        recent_packet_number.yfilter = yfilter;
    }
    if(value_path == "secure-channel-id")
    {
        secure_channel_id.yfilter = yfilter;
    }
    if(value_path == "secure-tag-length")
    {
        secure_tag_length.yfilter = yfilter;
    }
}

bool Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-association" || name == "cipher-suite" || name == "confidentiality-offset" || name == "initial-packet-number" || name == "max-packet-number" || name == "protection-enabled" || name == "recent-packet-number" || name == "secure-channel-id" || name == "secure-tag-length")
        return true;
    return false;
}

Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus::ActiveAssociation::ActiveAssociation()
    :
    association_number{YType::uint8, "association-number"},
    device_association_number{YType::uint8, "device-association-number"},
    key_crc{YType::str, "key-crc"},
    programmed_time{YType::str, "programmed-time"},
    short_secure_channel_id{YType::uint32, "short-secure-channel-id"},
    xpn_salt{YType::str, "xpn-salt"}
{

    yang_name = "active-association"; yang_parent_name = "encrypt-sc-status"; is_top_level_class = false; has_list_ancestor = true;
}

Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus::ActiveAssociation::~ActiveAssociation()
{
}

bool Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus::ActiveAssociation::has_data() const
{
    for (auto const & leaf : xpn_salt.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return association_number.is_set
	|| device_association_number.is_set
	|| key_crc.is_set
	|| programmed_time.is_set
	|| short_secure_channel_id.is_set;
}

bool Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus::ActiveAssociation::has_operation() const
{
    for (auto const & leaf : xpn_salt.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(association_number.yfilter)
	|| ydk::is_set(device_association_number.yfilter)
	|| ydk::is_set(key_crc.yfilter)
	|| ydk::is_set(programmed_time.yfilter)
	|| ydk::is_set(short_secure_channel_id.yfilter)
	|| ydk::is_set(xpn_salt.yfilter);
}

std::string Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus::ActiveAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus::ActiveAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (association_number.is_set || is_set(association_number.yfilter)) leaf_name_data.push_back(association_number.get_name_leafdata());
    if (device_association_number.is_set || is_set(device_association_number.yfilter)) leaf_name_data.push_back(device_association_number.get_name_leafdata());
    if (key_crc.is_set || is_set(key_crc.yfilter)) leaf_name_data.push_back(key_crc.get_name_leafdata());
    if (programmed_time.is_set || is_set(programmed_time.yfilter)) leaf_name_data.push_back(programmed_time.get_name_leafdata());
    if (short_secure_channel_id.is_set || is_set(short_secure_channel_id.yfilter)) leaf_name_data.push_back(short_secure_channel_id.get_name_leafdata());

    auto xpn_salt_name_datas = xpn_salt.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), xpn_salt_name_datas.begin(), xpn_salt_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus::ActiveAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus::ActiveAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus::ActiveAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "association-number")
    {
        association_number = value;
        association_number.value_namespace = name_space;
        association_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-association-number")
    {
        device_association_number = value;
        device_association_number.value_namespace = name_space;
        device_association_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-crc")
    {
        key_crc = value;
        key_crc.value_namespace = name_space;
        key_crc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "programmed-time")
    {
        programmed_time = value;
        programmed_time.value_namespace = name_space;
        programmed_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-secure-channel-id")
    {
        short_secure_channel_id = value;
        short_secure_channel_id.value_namespace = name_space;
        short_secure_channel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xpn-salt")
    {
        xpn_salt.append(value);
    }
}

void Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus::ActiveAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "association-number")
    {
        association_number.yfilter = yfilter;
    }
    if(value_path == "device-association-number")
    {
        device_association_number.yfilter = yfilter;
    }
    if(value_path == "key-crc")
    {
        key_crc.yfilter = yfilter;
    }
    if(value_path == "programmed-time")
    {
        programmed_time.yfilter = yfilter;
    }
    if(value_path == "short-secure-channel-id")
    {
        short_secure_channel_id.yfilter = yfilter;
    }
    if(value_path == "xpn-salt")
    {
        xpn_salt.yfilter = yfilter;
    }
}

bool Ncs1KMacsecOper::Ncs1KMacsecCtrlrNames::Ncs1KMacsecCtrlrName::Ncs1KStatusInfo::EncryptScStatus::ActiveAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association-number" || name == "device-association-number" || name == "key-crc" || name == "programmed-time" || name == "short-secure-channel-id" || name == "xpn-salt")
        return true;
    return false;
}

const Enum::YLeaf Ncs1kCipherSuit::gcm_aes_256 {0, "gcm-aes-256"};
const Enum::YLeaf Ncs1kCipherSuit::gcm_aes_128 {1, "gcm-aes-128"};
const Enum::YLeaf Ncs1kCipherSuit::gcm_aes_xpn_256 {2, "gcm-aes-xpn-256"};


}
}

