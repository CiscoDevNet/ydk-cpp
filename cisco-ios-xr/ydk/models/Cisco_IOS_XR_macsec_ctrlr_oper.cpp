
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_macsec_ctrlr_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_macsec_ctrlr_oper {

MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation::ActiveAssociation()
    :
    	association_number{YType::uint8, "association-number"},
	 short_secure_channel_id{YType::uint32, "short-secure-channel-id"}
{
    yang_name = "active-association"; yang_parent_name = "encrypt-sc-status";
}

MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation::~ActiveAssociation()
{
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation::has_data() const
{
    return association_number.is_set
	|| short_secure_channel_id.is_set;
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation::has_operation() const
{
    return is_set(operation)
	|| is_set(association_number.operation)
	|| is_set(short_secure_channel_id.operation);
}

std::string MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-association";

    return path_buffer.str();

}

EntityPath MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (association_number.is_set || is_set(association_number.operation)) leaf_name_data.push_back(association_number.get_name_leafdata());
    if (short_secure_channel_id.is_set || is_set(short_secure_channel_id.operation)) leaf_name_data.push_back(short_secure_channel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation::get_children()
{
    return children;
}

void MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "association-number")
    {
        association_number = value;
    }
    if(value_path == "short-secure-channel-id")
    {
        short_secure_channel_id = value;
    }
}

MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::EncryptScStatus()
    :
    	cipher_suite{YType::enumeration, "cipher-suite"},
	 confidentiality_offset{YType::uint32, "confidentiality-offset"},
	 max_packet_number{YType::uint64, "max-packet-number"},
	 protection_enabled{YType::boolean, "protection-enabled"},
	 recent_packet_number{YType::uint64, "recent-packet-number"},
	 secure_channel_id{YType::str, "secure-channel-id"}
{
    yang_name = "encrypt-sc-status"; yang_parent_name = "macsec-ctrlr-info";
}

MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::~EncryptScStatus()
{
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::has_data() const
{
    for (std::size_t index=0; index<active_association.size(); index++)
    {
        if(active_association[index]->has_data())
            return true;
    }
    return cipher_suite.is_set
	|| confidentiality_offset.is_set
	|| max_packet_number.is_set
	|| protection_enabled.is_set
	|| recent_packet_number.is_set
	|| secure_channel_id.is_set;
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::has_operation() const
{
    for (std::size_t index=0; index<active_association.size(); index++)
    {
        if(active_association[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(cipher_suite.operation)
	|| is_set(confidentiality_offset.operation)
	|| is_set(max_packet_number.operation)
	|| is_set(protection_enabled.operation)
	|| is_set(recent_packet_number.operation)
	|| is_set(secure_channel_id.operation);
}

std::string MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypt-sc-status";

    return path_buffer.str();

}

EntityPath MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipher_suite.is_set || is_set(cipher_suite.operation)) leaf_name_data.push_back(cipher_suite.get_name_leafdata());
    if (confidentiality_offset.is_set || is_set(confidentiality_offset.operation)) leaf_name_data.push_back(confidentiality_offset.get_name_leafdata());
    if (max_packet_number.is_set || is_set(max_packet_number.operation)) leaf_name_data.push_back(max_packet_number.get_name_leafdata());
    if (protection_enabled.is_set || is_set(protection_enabled.operation)) leaf_name_data.push_back(protection_enabled.get_name_leafdata());
    if (recent_packet_number.is_set || is_set(recent_packet_number.operation)) leaf_name_data.push_back(recent_packet_number.get_name_leafdata());
    if (secure_channel_id.is_set || is_set(secure_channel_id.operation)) leaf_name_data.push_back(secure_channel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "active-association")
    {
        for(auto const & c : active_association)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::ActiveAssociation>();
        c->parent = this;
        active_association.push_back(std::move(c));
        children[segment_path] = active_association.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::get_children()
{
    for (auto const & c : active_association)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipher-suite")
    {
        cipher_suite = value;
    }
    if(value_path == "confidentiality-offset")
    {
        confidentiality_offset = value;
    }
    if(value_path == "max-packet-number")
    {
        max_packet_number = value;
    }
    if(value_path == "protection-enabled")
    {
        protection_enabled = value;
    }
    if(value_path == "recent-packet-number")
    {
        recent_packet_number = value;
    }
    if(value_path == "secure-channel-id")
    {
        secure_channel_id = value;
    }
}

MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation::ActiveAssociation()
    :
    	association_number{YType::uint8, "association-number"},
	 short_secure_channel_id{YType::uint32, "short-secure-channel-id"}
{
    yang_name = "active-association"; yang_parent_name = "decrypt-sc-status";
}

MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation::~ActiveAssociation()
{
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation::has_data() const
{
    return association_number.is_set
	|| short_secure_channel_id.is_set;
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation::has_operation() const
{
    return is_set(operation)
	|| is_set(association_number.operation)
	|| is_set(short_secure_channel_id.operation);
}

std::string MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-association";

    return path_buffer.str();

}

EntityPath MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (association_number.is_set || is_set(association_number.operation)) leaf_name_data.push_back(association_number.get_name_leafdata());
    if (short_secure_channel_id.is_set || is_set(short_secure_channel_id.operation)) leaf_name_data.push_back(short_secure_channel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation::get_children()
{
    return children;
}

void MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "association-number")
    {
        association_number = value;
    }
    if(value_path == "short-secure-channel-id")
    {
        short_secure_channel_id = value;
    }
}

MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::DecryptScStatus()
    :
    	cipher_suite{YType::enumeration, "cipher-suite"},
	 confidentiality_offset{YType::uint32, "confidentiality-offset"},
	 max_packet_number{YType::uint64, "max-packet-number"},
	 protection_enabled{YType::boolean, "protection-enabled"},
	 recent_packet_number{YType::uint64, "recent-packet-number"},
	 secure_channel_id{YType::str, "secure-channel-id"}
{
    yang_name = "decrypt-sc-status"; yang_parent_name = "macsec-ctrlr-info";
}

MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::~DecryptScStatus()
{
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::has_data() const
{
    for (std::size_t index=0; index<active_association.size(); index++)
    {
        if(active_association[index]->has_data())
            return true;
    }
    return cipher_suite.is_set
	|| confidentiality_offset.is_set
	|| max_packet_number.is_set
	|| protection_enabled.is_set
	|| recent_packet_number.is_set
	|| secure_channel_id.is_set;
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::has_operation() const
{
    for (std::size_t index=0; index<active_association.size(); index++)
    {
        if(active_association[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(cipher_suite.operation)
	|| is_set(confidentiality_offset.operation)
	|| is_set(max_packet_number.operation)
	|| is_set(protection_enabled.operation)
	|| is_set(recent_packet_number.operation)
	|| is_set(secure_channel_id.operation);
}

std::string MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "decrypt-sc-status";

    return path_buffer.str();

}

EntityPath MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipher_suite.is_set || is_set(cipher_suite.operation)) leaf_name_data.push_back(cipher_suite.get_name_leafdata());
    if (confidentiality_offset.is_set || is_set(confidentiality_offset.operation)) leaf_name_data.push_back(confidentiality_offset.get_name_leafdata());
    if (max_packet_number.is_set || is_set(max_packet_number.operation)) leaf_name_data.push_back(max_packet_number.get_name_leafdata());
    if (protection_enabled.is_set || is_set(protection_enabled.operation)) leaf_name_data.push_back(protection_enabled.get_name_leafdata());
    if (recent_packet_number.is_set || is_set(recent_packet_number.operation)) leaf_name_data.push_back(recent_packet_number.get_name_leafdata());
    if (secure_channel_id.is_set || is_set(secure_channel_id.operation)) leaf_name_data.push_back(secure_channel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "active-association")
    {
        for(auto const & c : active_association)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::ActiveAssociation>();
        c->parent = this;
        active_association.push_back(std::move(c));
        children[segment_path] = active_association.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::get_children()
{
    for (auto const & c : active_association)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipher-suite")
    {
        cipher_suite = value;
    }
    if(value_path == "confidentiality-offset")
    {
        confidentiality_offset = value;
    }
    if(value_path == "max-packet-number")
    {
        max_packet_number = value;
    }
    if(value_path == "protection-enabled")
    {
        protection_enabled = value;
    }
    if(value_path == "recent-packet-number")
    {
        recent_packet_number = value;
    }
    if(value_path == "secure-channel-id")
    {
        secure_channel_id = value;
    }
}

MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::MacsecCtrlrInfo()
    :
    	must_secure{YType::boolean, "must-secure"},
	 replay_window_size{YType::uint32, "replay-window-size"},
	 state{YType::enumeration, "state"}
    	,
    decrypt_sc_status(std::make_unique<MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus>())
	,encrypt_sc_status(std::make_unique<MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus>())
{
    decrypt_sc_status->parent = this;
    children["decrypt-sc-status"] = decrypt_sc_status.get();

    encrypt_sc_status->parent = this;
    children["encrypt-sc-status"] = encrypt_sc_status.get();

    yang_name = "macsec-ctrlr-info"; yang_parent_name = "macsec-ctrlr-port";
}

MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::~MacsecCtrlrInfo()
{
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::has_data() const
{
    return must_secure.is_set
	|| replay_window_size.is_set
	|| state.is_set
	|| (decrypt_sc_status !=  nullptr && decrypt_sc_status->has_data())
	|| (encrypt_sc_status !=  nullptr && encrypt_sc_status->has_data());
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(must_secure.operation)
	|| is_set(replay_window_size.operation)
	|| is_set(state.operation)
	|| (decrypt_sc_status !=  nullptr && is_set(decrypt_sc_status->operation))
	|| (encrypt_sc_status !=  nullptr && is_set(encrypt_sc_status->operation));
}

std::string MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-ctrlr-info";

    return path_buffer.str();

}

EntityPath MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (must_secure.is_set || is_set(must_secure.operation)) leaf_name_data.push_back(must_secure.get_name_leafdata());
    if (replay_window_size.is_set || is_set(replay_window_size.operation)) leaf_name_data.push_back(replay_window_size.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "decrypt-sc-status")
    {
        if(decrypt_sc_status != nullptr)
        {
            children["decrypt-sc-status"] = decrypt_sc_status.get();
        }
        else
        {
            decrypt_sc_status = std::make_unique<MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::DecryptScStatus>();
            decrypt_sc_status->parent = this;
            children["decrypt-sc-status"] = decrypt_sc_status.get();
        }
        return children.at("decrypt-sc-status");
    }

    if(child_yang_name == "encrypt-sc-status")
    {
        if(encrypt_sc_status != nullptr)
        {
            children["encrypt-sc-status"] = encrypt_sc_status.get();
        }
        else
        {
            encrypt_sc_status = std::make_unique<MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::EncryptScStatus>();
            encrypt_sc_status->parent = this;
            children["encrypt-sc-status"] = encrypt_sc_status.get();
        }
        return children.at("encrypt-sc-status");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::get_children()
{
    if(children.find("decrypt-sc-status") == children.end())
    {
        if(decrypt_sc_status != nullptr)
        {
            children["decrypt-sc-status"] = decrypt_sc_status.get();
        }
    }

    if(children.find("encrypt-sc-status") == children.end())
    {
        if(encrypt_sc_status != nullptr)
        {
            children["encrypt-sc-status"] = encrypt_sc_status.get();
        }
    }

    return children;
}

void MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "must-secure")
    {
        must_secure = value;
    }
    if(value_path == "replay-window-size")
    {
        replay_window_size = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrPort()
    :
    	name{YType::str, "name"}
    	,
    macsec_ctrlr_info(std::make_unique<MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo>())
{
    macsec_ctrlr_info->parent = this;
    children["macsec-ctrlr-info"] = macsec_ctrlr_info.get();

    yang_name = "macsec-ctrlr-port"; yang_parent_name = "macsec-ctrlr-ports";
}

MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::~MacsecCtrlrPort()
{
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::has_data() const
{
    return name.is_set
	|| (macsec_ctrlr_info !=  nullptr && macsec_ctrlr_info->has_data());
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (macsec_ctrlr_info !=  nullptr && is_set(macsec_ctrlr_info->operation));
}

std::string MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-ctrlr-port" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-macsec-ctrlr-oper:macsec-ctrlr-oper/macsec-ctrlr-ports/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "macsec-ctrlr-info")
    {
        if(macsec_ctrlr_info != nullptr)
        {
            children["macsec-ctrlr-info"] = macsec_ctrlr_info.get();
        }
        else
        {
            macsec_ctrlr_info = std::make_unique<MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::MacsecCtrlrInfo>();
            macsec_ctrlr_info->parent = this;
            children["macsec-ctrlr-info"] = macsec_ctrlr_info.get();
        }
        return children.at("macsec-ctrlr-info");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::get_children()
{
    if(children.find("macsec-ctrlr-info") == children.end())
    {
        if(macsec_ctrlr_info != nullptr)
        {
            children["macsec-ctrlr-info"] = macsec_ctrlr_info.get();
        }
    }

    return children;
}

void MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPorts()
{
    yang_name = "macsec-ctrlr-ports"; yang_parent_name = "macsec-ctrlr-oper";
}

MacsecCtrlrOper::MacsecCtrlrPorts::~MacsecCtrlrPorts()
{
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::has_data() const
{
    for (std::size_t index=0; index<macsec_ctrlr_port.size(); index++)
    {
        if(macsec_ctrlr_port[index]->has_data())
            return true;
    }
    return false;
}

bool MacsecCtrlrOper::MacsecCtrlrPorts::has_operation() const
{
    for (std::size_t index=0; index<macsec_ctrlr_port.size(); index++)
    {
        if(macsec_ctrlr_port[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MacsecCtrlrOper::MacsecCtrlrPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-ctrlr-ports";

    return path_buffer.str();

}

EntityPath MacsecCtrlrOper::MacsecCtrlrPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-macsec-ctrlr-oper:macsec-ctrlr-oper/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MacsecCtrlrOper::MacsecCtrlrPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "macsec-ctrlr-port")
    {
        for(auto const & c : macsec_ctrlr_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MacsecCtrlrOper::MacsecCtrlrPorts::MacsecCtrlrPort>();
        c->parent = this;
        macsec_ctrlr_port.push_back(std::move(c));
        children[segment_path] = macsec_ctrlr_port.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MacsecCtrlrOper::MacsecCtrlrPorts::get_children()
{
    for (auto const & c : macsec_ctrlr_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MacsecCtrlrOper::MacsecCtrlrPorts::set_value(const std::string & value_path, std::string value)
{
}

MacsecCtrlrOper::MacsecCtrlrOper()
    :
    macsec_ctrlr_ports(std::make_unique<MacsecCtrlrOper::MacsecCtrlrPorts>())
{
    macsec_ctrlr_ports->parent = this;
    children["macsec-ctrlr-ports"] = macsec_ctrlr_ports.get();

    yang_name = "macsec-ctrlr-oper"; yang_parent_name = "Cisco-IOS-XR-macsec-ctrlr-oper";
}

MacsecCtrlrOper::~MacsecCtrlrOper()
{
}

bool MacsecCtrlrOper::has_data() const
{
    return (macsec_ctrlr_ports !=  nullptr && macsec_ctrlr_ports->has_data());
}

bool MacsecCtrlrOper::has_operation() const
{
    return is_set(operation)
	|| (macsec_ctrlr_ports !=  nullptr && is_set(macsec_ctrlr_ports->operation));
}

std::string MacsecCtrlrOper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-macsec-ctrlr-oper:macsec-ctrlr-oper";

    return path_buffer.str();

}

EntityPath MacsecCtrlrOper::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MacsecCtrlrOper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "macsec-ctrlr-ports")
    {
        if(macsec_ctrlr_ports != nullptr)
        {
            children["macsec-ctrlr-ports"] = macsec_ctrlr_ports.get();
        }
        else
        {
            macsec_ctrlr_ports = std::make_unique<MacsecCtrlrOper::MacsecCtrlrPorts>();
            macsec_ctrlr_ports->parent = this;
            children["macsec-ctrlr-ports"] = macsec_ctrlr_ports.get();
        }
        return children.at("macsec-ctrlr-ports");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MacsecCtrlrOper::get_children()
{
    if(children.find("macsec-ctrlr-ports") == children.end())
    {
        if(macsec_ctrlr_ports != nullptr)
        {
            children["macsec-ctrlr-ports"] = macsec_ctrlr_ports.get();
        }
    }

    return children;
}

void MacsecCtrlrOper::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> MacsecCtrlrOper::clone_ptr()
{
    return std::make_unique<MacsecCtrlrOper>();
}

const Enum::Value MacsecCtrlrCiphersuitEnum::gcm_aes_256 {0, "gcm-aes-256"};
const Enum::Value MacsecCtrlrCiphersuitEnum::gcm_aes_128 {1, "gcm-aes-128"};
const Enum::Value MacsecCtrlrCiphersuitEnum::gcm_aes_xpn_256 {2, "gcm-aes-xpn-256"};

const Enum::Value MacsecCtrlrStateEnum::macsec_ctrlr_state_up {0, "macsec-ctrlr-state-up"};
const Enum::Value MacsecCtrlrStateEnum::macsec_ctrlr_state_down {1, "macsec-ctrlr-state-down"};
const Enum::Value MacsecCtrlrStateEnum::macsec_ctrlr_state_admin_down {2, "macsec-ctrlr-state-admin-down"};


}
}

