
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_bfd_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_bfd_oper {

Bfd::SessionDetails::SessionDetail::AssociationInformation::AssociationInformation()
    :
    local_discriminator{YType::uint32, "local-discriminator"},
    sessiontype{YType::enumeration, "sessiontype"}
    	,
    session_key(std::make_shared<Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey>())
{
    session_key->parent = this;
    children["session-key"] = session_key;

    yang_name = "association-information"; yang_parent_name = "session-detail";
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::~AssociationInformation()
{
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::has_data() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return local_discriminator.is_set
	|| sessiontype.is_set
	|| (session_key !=  nullptr && session_key->has_data());
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::has_operation() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(local_discriminator.operation)
	|| is_set(sessiontype.operation)
	|| (session_key !=  nullptr && session_key->has_operation());
}

std::string Bfd::SessionDetails::SessionDetail::AssociationInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-information";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::AssociationInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.operation)) leaf_name_data.push_back(sessiontype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::AssociationInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(std::move(c));
        children[segment_path] = owner_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "session-key")
    {
        if(session_key != nullptr)
        {
            children["session-key"] = session_key;
        }
        else
        {
            session_key = std::make_shared<Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey>();
            session_key->parent = this;
            children["session-key"] = session_key;
        }
        return children.at("session-key");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::AssociationInformation::get_children()
{
    for (auto const & c : owner_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("session-key") == children.end())
    {
        if(session_key != nullptr)
        {
            children["session-key"] = session_key;
        }
    }

    return children;
}

void Bfd::SessionDetails::SessionDetail::AssociationInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
    }
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::SessionKey()
    :
    incoming_label{YType::uint32, "incoming-label"},
    interface_name{YType::str, "interface-name"},
    sbfd_enabled{YType::int32, "sbfd-enabled"},
    sbfd_target_type{YType::uint32, "sbfd-target-type"},
    session_key_type{YType::uint32, "session-key-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    bfdfec(std::make_shared<Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec>())
	,ip_destination_address(std::make_shared<Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpDestinationAddress>())
	,ip_source_address(std::make_shared<Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpSourceAddress>())
	,target_address(std::make_shared<Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::TargetAddress>())
{
    bfdfec->parent = this;
    children["bfdfec"] = bfdfec;

    ip_destination_address->parent = this;
    children["ip-destination-address"] = ip_destination_address;

    ip_source_address->parent = this;
    children["ip-source-address"] = ip_source_address;

    target_address->parent = this;
    children["target-address"] = target_address;

    yang_name = "session-key"; yang_parent_name = "association-information";
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::~SessionKey()
{
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::has_data() const
{
    return incoming_label.is_set
	|| interface_name.is_set
	|| sbfd_enabled.is_set
	|| sbfd_target_type.is_set
	|| session_key_type.is_set
	|| vrf_name.is_set
	|| (bfdfec !=  nullptr && bfdfec->has_data())
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_data())
	|| (ip_source_address !=  nullptr && ip_source_address->has_data())
	|| (target_address !=  nullptr && target_address->has_data());
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::has_operation() const
{
    return is_set(operation)
	|| is_set(incoming_label.operation)
	|| is_set(interface_name.operation)
	|| is_set(sbfd_enabled.operation)
	|| is_set(sbfd_target_type.operation)
	|| is_set(session_key_type.operation)
	|| is_set(vrf_name.operation)
	|| (bfdfec !=  nullptr && bfdfec->has_operation())
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_operation())
	|| (ip_source_address !=  nullptr && ip_source_address->has_operation())
	|| (target_address !=  nullptr && target_address->has_operation());
}

std::string Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-key";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/association-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incoming_label.is_set || is_set(incoming_label.operation)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sbfd_enabled.is_set || is_set(sbfd_enabled.operation)) leaf_name_data.push_back(sbfd_enabled.get_name_leafdata());
    if (sbfd_target_type.is_set || is_set(sbfd_target_type.operation)) leaf_name_data.push_back(sbfd_target_type.get_name_leafdata());
    if (session_key_type.is_set || is_set(session_key_type.operation)) leaf_name_data.push_back(session_key_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfdfec")
    {
        if(bfdfec != nullptr)
        {
            children["bfdfec"] = bfdfec;
        }
        else
        {
            bfdfec = std::make_shared<Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec>();
            bfdfec->parent = this;
            children["bfdfec"] = bfdfec;
        }
        return children.at("bfdfec");
    }

    if(child_yang_name == "ip-destination-address")
    {
        if(ip_destination_address != nullptr)
        {
            children["ip-destination-address"] = ip_destination_address;
        }
        else
        {
            ip_destination_address = std::make_shared<Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpDestinationAddress>();
            ip_destination_address->parent = this;
            children["ip-destination-address"] = ip_destination_address;
        }
        return children.at("ip-destination-address");
    }

    if(child_yang_name == "ip-source-address")
    {
        if(ip_source_address != nullptr)
        {
            children["ip-source-address"] = ip_source_address;
        }
        else
        {
            ip_source_address = std::make_shared<Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpSourceAddress>();
            ip_source_address->parent = this;
            children["ip-source-address"] = ip_source_address;
        }
        return children.at("ip-source-address");
    }

    if(child_yang_name == "target-address")
    {
        if(target_address != nullptr)
        {
            children["target-address"] = target_address;
        }
        else
        {
            target_address = std::make_shared<Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::TargetAddress>();
            target_address->parent = this;
            children["target-address"] = target_address;
        }
        return children.at("target-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::get_children()
{
    if(children.find("bfdfec") == children.end())
    {
        if(bfdfec != nullptr)
        {
            children["bfdfec"] = bfdfec;
        }
    }

    if(children.find("ip-destination-address") == children.end())
    {
        if(ip_destination_address != nullptr)
        {
            children["ip-destination-address"] = ip_destination_address;
        }
    }

    if(children.find("ip-source-address") == children.end())
    {
        if(ip_source_address != nullptr)
        {
            children["ip-source-address"] = ip_source_address;
        }
    }

    if(children.find("target-address") == children.end())
    {
        if(target_address != nullptr)
        {
            children["target-address"] = target_address;
        }
    }

    return children;
}

void Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "incoming-label")
    {
        incoming_label = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "sbfd-enabled")
    {
        sbfd_enabled = value;
    }
    if(value_path == "sbfd-target-type")
    {
        sbfd_target_type = value;
    }
    if(value_path == "session-key-type")
    {
        session_key_type = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::IpDestinationAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "ip-destination-address"; yang_parent_name = "session-key";
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::~IpDestinationAddress()
{
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-destination-address";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_children()
{
    return children;
}

void Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpSourceAddress::IpSourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "ip-source-address"; yang_parent_name = "session-key";
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpSourceAddress::~IpSourceAddress()
{
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpSourceAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpSourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-source-address";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_children()
{
    return children;
}

void Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::IpSourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::Bfdfec()
    :
    bfdfe_ctype{YType::enumeration, "bfdfe-ctype"}
    	,
    dummy(std::make_shared<Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy>())
	,te_s2l_fec(std::make_shared<Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec>())
{
    dummy->parent = this;
    children["dummy"] = dummy;

    te_s2l_fec->parent = this;
    children["te-s2l-fec"] = te_s2l_fec;

    yang_name = "bfdfec"; yang_parent_name = "session-key";
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::~Bfdfec()
{
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::has_data() const
{
    return bfdfe_ctype.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (te_s2l_fec !=  nullptr && te_s2l_fec->has_data());
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::has_operation() const
{
    return is_set(operation)
	|| is_set(bfdfe_ctype.operation)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (te_s2l_fec !=  nullptr && te_s2l_fec->has_operation());
}

std::string Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfdfec";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfdfe_ctype.is_set || is_set(bfdfe_ctype.operation)) leaf_name_data.push_back(bfdfe_ctype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dummy")
    {
        if(dummy != nullptr)
        {
            children["dummy"] = dummy;
        }
        else
        {
            dummy = std::make_shared<Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy>();
            dummy->parent = this;
            children["dummy"] = dummy;
        }
        return children.at("dummy");
    }

    if(child_yang_name == "te-s2l-fec")
    {
        if(te_s2l_fec != nullptr)
        {
            children["te-s2l-fec"] = te_s2l_fec;
        }
        else
        {
            te_s2l_fec = std::make_shared<Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec>();
            te_s2l_fec->parent = this;
            children["te-s2l-fec"] = te_s2l_fec;
        }
        return children.at("te-s2l-fec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::get_children()
{
    if(children.find("dummy") == children.end())
    {
        if(dummy != nullptr)
        {
            children["dummy"] = dummy;
        }
    }

    if(children.find("te-s2l-fec") == children.end())
    {
        if(te_s2l_fec != nullptr)
        {
            children["te-s2l-fec"] = te_s2l_fec;
        }
    }

    return children;
}

void Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfdfe-ctype")
    {
        bfdfe_ctype = value;
    }
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::Dummy()
    :
    dummy{YType::str, "dummy"}
{
    yang_name = "dummy"; yang_parent_name = "bfdfec";
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::~Dummy()
{
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::has_data() const
{
    return dummy.is_set;
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::has_operation() const
{
    return is_set(operation)
	|| is_set(dummy.operation);
}

std::string Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/association-information/session-key/bfdfec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_children()
{
    return children;
}

void Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dummy")
    {
        dummy = value;
    }
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::TeS2LFec()
    :
    s2l_fec_ctype{YType::enumeration, "s2l-fec-ctype"},
    s2l_fec_dest{YType::str, "s2l-fec-dest"},
    s2l_fec_extended_tunnel_id{YType::str, "s2l-fec-extended-tunnel-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    s2l_fec_source{YType::str, "s2l-fec-source"},
    s2l_fec_subgroup_id{YType::uint16, "s2l-fec-subgroup-id"},
    s2l_fec_subgroup_originator{YType::str, "s2l-fec-subgroup-originator"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    s2l_fec_vrf{YType::str, "s2l-fec-vrf"}
{
    yang_name = "te-s2l-fec"; yang_parent_name = "bfdfec";
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::~TeS2LFec()
{
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::has_data() const
{
    return s2l_fec_ctype.is_set
	|| s2l_fec_dest.is_set
	|| s2l_fec_extended_tunnel_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_p2mp_id.is_set
	|| s2l_fec_source.is_set
	|| s2l_fec_subgroup_id.is_set
	|| s2l_fec_subgroup_originator.is_set
	|| s2l_fec_tunnel_id.is_set
	|| s2l_fec_vrf.is_set;
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::has_operation() const
{
    return is_set(operation)
	|| is_set(s2l_fec_ctype.operation)
	|| is_set(s2l_fec_dest.operation)
	|| is_set(s2l_fec_extended_tunnel_id.operation)
	|| is_set(s2l_fec_lsp_id.operation)
	|| is_set(s2l_fec_p2mp_id.operation)
	|| is_set(s2l_fec_source.operation)
	|| is_set(s2l_fec_subgroup_id.operation)
	|| is_set(s2l_fec_subgroup_originator.operation)
	|| is_set(s2l_fec_tunnel_id.operation)
	|| is_set(s2l_fec_vrf.operation);
}

std::string Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-s2l-fec";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/association-information/session-key/bfdfec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_ctype.is_set || is_set(s2l_fec_ctype.operation)) leaf_name_data.push_back(s2l_fec_ctype.get_name_leafdata());
    if (s2l_fec_dest.is_set || is_set(s2l_fec_dest.operation)) leaf_name_data.push_back(s2l_fec_dest.get_name_leafdata());
    if (s2l_fec_extended_tunnel_id.is_set || is_set(s2l_fec_extended_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_extended_tunnel_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.operation)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.operation)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (s2l_fec_source.is_set || is_set(s2l_fec_source.operation)) leaf_name_data.push_back(s2l_fec_source.get_name_leafdata());
    if (s2l_fec_subgroup_id.is_set || is_set(s2l_fec_subgroup_id.operation)) leaf_name_data.push_back(s2l_fec_subgroup_id.get_name_leafdata());
    if (s2l_fec_subgroup_originator.is_set || is_set(s2l_fec_subgroup_originator.operation)) leaf_name_data.push_back(s2l_fec_subgroup_originator.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (s2l_fec_vrf.is_set || is_set(s2l_fec_vrf.operation)) leaf_name_data.push_back(s2l_fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_children()
{
    return children;
}

void Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype = value;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest = value;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id = value;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source = value;
    }
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id = value;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator = value;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf = value;
    }
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::TargetAddress::TargetAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "target-address"; yang_parent_name = "session-key";
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::TargetAddress::~TargetAddress()
{
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::TargetAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::TargetAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::TargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-address";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::TargetAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::TargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::TargetAddress::get_children()
{
    return children;
}

void Bfd::SessionDetails::SessionDetail::AssociationInformation::SessionKey::TargetAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::OwnerInformation()
    :
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    name{YType::str, "name"}
{
    yang_name = "owner-information"; yang_parent_name = "association-information";
}

Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::has_data() const
{
    return adjusted_detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| detection_multiplier.is_set
	|| interval.is_set
	|| name.is_set;
}

bool Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(adjusted_detection_multiplier.operation)
	|| is_set(adjusted_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(interval.operation)
	|| is_set(name.operation);
}

std::string Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";

    return path_buffer.str();

}

EntityPath Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/session-details/session-detail/association-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.operation)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.operation)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::get_children()
{
    return children;
}

void Bfd::SessionDetails::SessionDetail::AssociationInformation::OwnerInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPaths()
{
    yang_name = "ipv4-single-hop-multi-paths"; yang_parent_name = "bfd";
}

Bfd::Ipv4SingleHopMultiPaths::~Ipv4SingleHopMultiPaths()
{
}

bool Bfd::Ipv4SingleHopMultiPaths::has_data() const
{
    for (std::size_t index=0; index<ipv4_single_hop_multi_path.size(); index++)
    {
        if(ipv4_single_hop_multi_path[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4SingleHopMultiPaths::has_operation() const
{
    for (std::size_t index=0; index<ipv4_single_hop_multi_path.size(); index++)
    {
        if(ipv4_single_hop_multi_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv4SingleHopMultiPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-multi-paths";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4SingleHopMultiPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopMultiPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-single-hop-multi-path")
    {
        for(auto const & c : ipv4_single_hop_multi_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath>();
        c->parent = this;
        ipv4_single_hop_multi_path.push_back(std::move(c));
        children[segment_path] = ipv4_single_hop_multi_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4SingleHopMultiPaths::get_children()
{
    for (auto const & c : ipv4_single_hop_multi_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::Ipv4SingleHopMultiPaths::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath::Ipv4SingleHopMultiPath()
    :
    destination_address{YType::str, "destination-address"},
    incoming_label_xr{YType::uint32, "incoming-label-xr"},
    interface_name{YType::str, "interface-name"},
    local_discriminator{YType::uint32, "local-discriminator"},
    location{YType::str, "location"},
    node_id{YType::str, "node-id"},
    session_interface_name{YType::str, "session-interface-name"},
    session_subtype{YType::str, "session-subtype"},
    state{YType::enumeration, "state"}
{
    yang_name = "ipv4-single-hop-multi-path"; yang_parent_name = "ipv4-single-hop-multi-paths";
}

Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath::~Ipv4SingleHopMultiPath()
{
}

bool Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath::has_data() const
{
    return destination_address.is_set
	|| incoming_label_xr.is_set
	|| interface_name.is_set
	|| local_discriminator.is_set
	|| location.is_set
	|| node_id.is_set
	|| session_interface_name.is_set
	|| session_subtype.is_set
	|| state.is_set;
}

bool Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(incoming_label_xr.operation)
	|| is_set(interface_name.operation)
	|| is_set(local_discriminator.operation)
	|| is_set(location.operation)
	|| is_set(node_id.operation)
	|| is_set(session_interface_name.operation)
	|| is_set(session_subtype.operation)
	|| is_set(state.operation);
}

std::string Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-multi-path";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-multi-paths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (incoming_label_xr.is_set || is_set(incoming_label_xr.operation)) leaf_name_data.push_back(incoming_label_xr.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (session_interface_name.is_set || is_set(session_interface_name.operation)) leaf_name_data.push_back(session_interface_name.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.operation)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath::get_children()
{
    return children;
}

void Bfd::Ipv4SingleHopMultiPaths::Ipv4SingleHopMultiPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "incoming-label-xr")
    {
        incoming_label_xr = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "session-interface-name")
    {
        session_interface_name = value;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBriefs()
{
    yang_name = "ipv4-single-hop-session-briefs"; yang_parent_name = "bfd";
}

Bfd::Ipv4SingleHopSessionBriefs::~Ipv4SingleHopSessionBriefs()
{
}

bool Bfd::Ipv4SingleHopSessionBriefs::has_data() const
{
    for (std::size_t index=0; index<ipv4_single_hop_session_brief.size(); index++)
    {
        if(ipv4_single_hop_session_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4SingleHopSessionBriefs::has_operation() const
{
    for (std::size_t index=0; index<ipv4_single_hop_session_brief.size(); index++)
    {
        if(ipv4_single_hop_session_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv4SingleHopSessionBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-session-briefs";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4SingleHopSessionBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-single-hop-session-brief")
    {
        for(auto const & c : ipv4_single_hop_session_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief>();
        c->parent = this;
        ipv4_single_hop_session_brief.push_back(std::move(c));
        children[segment_path] = ipv4_single_hop_session_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4SingleHopSessionBriefs::get_children()
{
    for (auto const & c : ipv4_single_hop_session_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::Ipv4SingleHopSessionBriefs::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::Ipv4SingleHopSessionBrief()
    :
    destination_address{YType::str, "destination-address"},
    interface_name{YType::str, "interface-name"},
    location{YType::str, "location"},
    node_id{YType::str, "node-id"},
    session_flags{YType::uint32, "session-flags"},
    session_subtype{YType::str, "session-subtype"},
    session_type{YType::enumeration, "session-type"},
    state{YType::enumeration, "state"}
    	,
    status_brief_information(std::make_shared<Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation>())
{
    status_brief_information->parent = this;
    children["status-brief-information"] = status_brief_information;

    yang_name = "ipv4-single-hop-session-brief"; yang_parent_name = "ipv4-single-hop-session-briefs";
}

Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::~Ipv4SingleHopSessionBrief()
{
}

bool Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::has_data() const
{
    return destination_address.is_set
	|| interface_name.is_set
	|| location.is_set
	|| node_id.is_set
	|| session_flags.is_set
	|| session_subtype.is_set
	|| session_type.is_set
	|| state.is_set
	|| (status_brief_information !=  nullptr && status_brief_information->has_data());
}

bool Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(location.operation)
	|| is_set(node_id.operation)
	|| is_set(session_flags.operation)
	|| is_set(session_subtype.operation)
	|| is_set(session_type.operation)
	|| is_set(state.operation)
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation());
}

std::string Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-single-hop-session-brief";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-briefs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (session_flags.is_set || is_set(session_flags.operation)) leaf_name_data.push_back(session_flags.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.operation)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information != nullptr)
        {
            children["status-brief-information"] = status_brief_information;
        }
        else
        {
            status_brief_information = std::make_shared<Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation>();
            status_brief_information->parent = this;
            children["status-brief-information"] = status_brief_information;
        }
        return children.at("status-brief-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::get_children()
{
    if(children.find("status-brief-information") == children.end())
    {
        if(status_brief_information != nullptr)
        {
            children["status-brief-information"] = status_brief_information;
        }
    }

    return children;
}

void Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "session-flags")
    {
        session_flags = value;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
    }
    if(value_path == "session-type")
    {
        session_type = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    children["async-interval-multiplier"] = async_interval_multiplier;

    echo_interval_multiplier->parent = this;
    children["echo-interval-multiplier"] = echo_interval_multiplier;

    yang_name = "status-brief-information"; yang_parent_name = "ipv4-single-hop-session-brief";
}

Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::has_operation() const
{
    return is_set(operation)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-briefs/ipv4-single-hop-session-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier != nullptr)
        {
            children["async-interval-multiplier"] = async_interval_multiplier;
        }
        else
        {
            async_interval_multiplier = std::make_shared<Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>();
            async_interval_multiplier->parent = this;
            children["async-interval-multiplier"] = async_interval_multiplier;
        }
        return children.at("async-interval-multiplier");
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier != nullptr)
        {
            children["echo-interval-multiplier"] = echo_interval_multiplier;
        }
        else
        {
            echo_interval_multiplier = std::make_shared<Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>();
            echo_interval_multiplier->parent = this;
            children["echo-interval-multiplier"] = echo_interval_multiplier;
        }
        return children.at("echo-interval-multiplier");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::get_children()
{
    if(children.find("async-interval-multiplier") == children.end())
    {
        if(async_interval_multiplier != nullptr)
        {
            children["async-interval-multiplier"] = async_interval_multiplier;
        }
    }

    if(children.find("echo-interval-multiplier") == children.end())
    {
        if(echo_interval_multiplier != nullptr)
        {
            children["echo-interval-multiplier"] = echo_interval_multiplier;
        }
    }

    return children;
}

void Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"}
{
    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_local_transmit_interval.is_set
	|| negotiated_remote_transmit_interval.is_set;
}

bool Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_local_transmit_interval.operation)
	|| is_set(negotiated_remote_transmit_interval.operation);
}

std::string Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-briefs/ipv4-single-hop-session-brief/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.operation)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.operation)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_children()
{
    return children;
}

void Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
    }
}

Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"}
{
    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_transmit_interval.is_set;
}

bool Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_transmit_interval.operation);
}

std::string Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-single-hop-session-briefs/ipv4-single-hop-session-brief/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.operation)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_children()
{
    return children;
}

void Bfd::Ipv4SingleHopSessionBriefs::Ipv4SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
    }
}

Bfd::Ipv6MultiHopCounters::Ipv6MultiHopCounters()
    :
    ipv6_multi_hop_packet_counters(std::make_shared<Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters>())
{
    ipv6_multi_hop_packet_counters->parent = this;
    children["ipv6-multi-hop-packet-counters"] = ipv6_multi_hop_packet_counters;

    yang_name = "ipv6-multi-hop-counters"; yang_parent_name = "bfd";
}

Bfd::Ipv6MultiHopCounters::~Ipv6MultiHopCounters()
{
}

bool Bfd::Ipv6MultiHopCounters::has_data() const
{
    return (ipv6_multi_hop_packet_counters !=  nullptr && ipv6_multi_hop_packet_counters->has_data());
}

bool Bfd::Ipv6MultiHopCounters::has_operation() const
{
    return is_set(operation)
	|| (ipv6_multi_hop_packet_counters !=  nullptr && ipv6_multi_hop_packet_counters->has_operation());
}

std::string Bfd::Ipv6MultiHopCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-counters";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-multi-hop-packet-counters")
    {
        if(ipv6_multi_hop_packet_counters != nullptr)
        {
            children["ipv6-multi-hop-packet-counters"] = ipv6_multi_hop_packet_counters;
        }
        else
        {
            ipv6_multi_hop_packet_counters = std::make_shared<Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters>();
            ipv6_multi_hop_packet_counters->parent = this;
            children["ipv6-multi-hop-packet-counters"] = ipv6_multi_hop_packet_counters;
        }
        return children.at("ipv6-multi-hop-packet-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopCounters::get_children()
{
    if(children.find("ipv6-multi-hop-packet-counters") == children.end())
    {
        if(ipv6_multi_hop_packet_counters != nullptr)
        {
            children["ipv6-multi-hop-packet-counters"] = ipv6_multi_hop_packet_counters;
        }
    }

    return children;
}

void Bfd::Ipv6MultiHopCounters::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounters()
{
    yang_name = "ipv6-multi-hop-packet-counters"; yang_parent_name = "ipv6-multi-hop-counters";
}

Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::~Ipv6MultiHopPacketCounters()
{
}

bool Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::has_data() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_packet_counter.size(); index++)
    {
        if(ipv6_multi_hop_packet_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::has_operation() const
{
    for (std::size_t index=0; index<ipv6_multi_hop_packet_counter.size(); index++)
    {
        if(ipv6_multi_hop_packet_counter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-packet-counters";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-multi-hop-packet-counter")
    {
        for(auto const & c : ipv6_multi_hop_packet_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter>();
        c->parent = this;
        ipv6_multi_hop_packet_counter.push_back(std::move(c));
        children[segment_path] = ipv6_multi_hop_packet_counter.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::get_children()
{
    for (auto const & c : ipv6_multi_hop_packet_counter)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::Ipv6MultiHopPacketCounter()
    :
    destination_address{YType::str, "destination-address"},
    display_type{YType::enumeration, "display-type"},
    echo_receive_count{YType::uint32, "echo-receive-count"},
    echo_transmit_count{YType::uint32, "echo-transmit-count"},
    hello_receive_count{YType::uint32, "hello-receive-count"},
    hello_transmit_count{YType::uint32, "hello-transmit-count"},
    location{YType::str, "location"},
    source_address{YType::str, "source-address"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "ipv6-multi-hop-packet-counter"; yang_parent_name = "ipv6-multi-hop-packet-counters";
}

Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::~Ipv6MultiHopPacketCounter()
{
}

bool Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::has_data() const
{
    return destination_address.is_set
	|| display_type.is_set
	|| echo_receive_count.is_set
	|| echo_transmit_count.is_set
	|| hello_receive_count.is_set
	|| hello_transmit_count.is_set
	|| location.is_set
	|| source_address.is_set
	|| vrf_name.is_set;
}

bool Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(display_type.operation)
	|| is_set(echo_receive_count.operation)
	|| is_set(echo_transmit_count.operation)
	|| is_set(hello_receive_count.operation)
	|| is_set(hello_transmit_count.operation)
	|| is_set(location.operation)
	|| is_set(source_address.operation)
	|| is_set(vrf_name.operation);
}

std::string Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-multi-hop-packet-counter";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-multi-hop-counters/ipv6-multi-hop-packet-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (display_type.is_set || is_set(display_type.operation)) leaf_name_data.push_back(display_type.get_name_leafdata());
    if (echo_receive_count.is_set || is_set(echo_receive_count.operation)) leaf_name_data.push_back(echo_receive_count.get_name_leafdata());
    if (echo_transmit_count.is_set || is_set(echo_transmit_count.operation)) leaf_name_data.push_back(echo_transmit_count.get_name_leafdata());
    if (hello_receive_count.is_set || is_set(hello_receive_count.operation)) leaf_name_data.push_back(hello_receive_count.get_name_leafdata());
    if (hello_transmit_count.is_set || is_set(hello_transmit_count.operation)) leaf_name_data.push_back(hello_transmit_count.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::get_children()
{
    return children;
}

void Bfd::Ipv6MultiHopCounters::Ipv6MultiHopPacketCounters::Ipv6MultiHopPacketCounter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "display-type")
    {
        display_type = value;
    }
    if(value_path == "echo-receive-count")
    {
        echo_receive_count = value;
    }
    if(value_path == "echo-transmit-count")
    {
        echo_transmit_count = value;
    }
    if(value_path == "hello-receive-count")
    {
        hello_receive_count = value;
    }
    if(value_path == "hello-transmit-count")
    {
        hello_transmit_count = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummaries()
{
    yang_name = "ipv6-single-hop-location-summaries"; yang_parent_name = "bfd";
}

Bfd::Ipv6SingleHopLocationSummaries::~Ipv6SingleHopLocationSummaries()
{
}

bool Bfd::Ipv6SingleHopLocationSummaries::has_data() const
{
    for (std::size_t index=0; index<ipv6_single_hop_location_summary.size(); index++)
    {
        if(ipv6_single_hop_location_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6SingleHopLocationSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipv6_single_hop_location_summary.size(); index++)
    {
        if(ipv6_single_hop_location_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv6SingleHopLocationSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-location-summaries";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopLocationSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopLocationSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-single-hop-location-summary")
    {
        for(auto const & c : ipv6_single_hop_location_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary>();
        c->parent = this;
        ipv6_single_hop_location_summary.push_back(std::move(c));
        children[segment_path] = ipv6_single_hop_location_summary.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopLocationSummaries::get_children()
{
    for (auto const & c : ipv6_single_hop_location_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::Ipv6SingleHopLocationSummaries::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::Ipv6SingleHopLocationSummary()
    :
    location_name{YType::str, "location-name"}
    	,
    session_state(std::make_shared<Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState>())
{
    session_state->parent = this;
    children["session-state"] = session_state;

    yang_name = "ipv6-single-hop-location-summary"; yang_parent_name = "ipv6-single-hop-location-summaries";
}

Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::~Ipv6SingleHopLocationSummary()
{
}

bool Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::has_data() const
{
    return location_name.is_set
	|| (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(location_name.operation)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-location-summary" <<"[location-name='" <<location_name <<"']";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-location-summaries/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.operation)) leaf_name_data.push_back(location_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session-state")
    {
        if(session_state != nullptr)
        {
            children["session-state"] = session_state;
        }
        else
        {
            session_state = std::make_shared<Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState>();
            session_state->parent = this;
            children["session-state"] = session_state;
        }
        return children.at("session-state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::get_children()
{
    if(children.find("session-state") == children.end())
    {
        if(session_state != nullptr)
        {
            children["session-state"] = session_state;
        }
    }

    return children;
}

void Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "location-name")
    {
        location_name = value;
    }
}

Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::SessionState()
    :
    down_count{YType::uint32, "down-count"},
    retry_count{YType::uint32, "retry-count"},
    standby_count{YType::uint32, "standby-count"},
    total_count{YType::uint32, "total-count"},
    unknown_count{YType::uint32, "unknown-count"},
    up_count{YType::uint32, "up-count"}
{
    yang_name = "session-state"; yang_parent_name = "ipv6-single-hop-location-summary";
}

Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::has_data() const
{
    return down_count.is_set
	|| retry_count.is_set
	|| standby_count.is_set
	|| total_count.is_set
	|| unknown_count.is_set
	|| up_count.is_set;
}

bool Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::has_operation() const
{
    return is_set(operation)
	|| is_set(down_count.operation)
	|| is_set(retry_count.operation)
	|| is_set(standby_count.operation)
	|| is_set(total_count.operation)
	|| is_set(unknown_count.operation)
	|| is_set(up_count.operation);
}

std::string Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionState' in Cisco_IOS_XR_ip_bfd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_count.is_set || is_set(down_count.operation)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (retry_count.is_set || is_set(retry_count.operation)) leaf_name_data.push_back(retry_count.get_name_leafdata());
    if (standby_count.is_set || is_set(standby_count.operation)) leaf_name_data.push_back(standby_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.operation)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.operation)) leaf_name_data.push_back(up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::get_children()
{
    return children;
}

void Bfd::Ipv6SingleHopLocationSummaries::Ipv6SingleHopLocationSummary::SessionState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down-count")
    {
        down_count = value;
    }
    if(value_path == "retry-count")
    {
        retry_count = value;
    }
    if(value_path == "standby-count")
    {
        standby_count = value;
    }
    if(value_path == "total-count")
    {
        total_count = value;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
    }
    if(value_path == "up-count")
    {
        up_count = value;
    }
}

Bfd::LabelCounters::LabelCounters()
    :
    label_packet_counters(std::make_shared<Bfd::LabelCounters::LabelPacketCounters>())
{
    label_packet_counters->parent = this;
    children["label-packet-counters"] = label_packet_counters;

    yang_name = "label-counters"; yang_parent_name = "bfd";
}

Bfd::LabelCounters::~LabelCounters()
{
}

bool Bfd::LabelCounters::has_data() const
{
    return (label_packet_counters !=  nullptr && label_packet_counters->has_data());
}

bool Bfd::LabelCounters::has_operation() const
{
    return is_set(operation)
	|| (label_packet_counters !=  nullptr && label_packet_counters->has_operation());
}

std::string Bfd::LabelCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-counters";

    return path_buffer.str();

}

EntityPath Bfd::LabelCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "label-packet-counters")
    {
        if(label_packet_counters != nullptr)
        {
            children["label-packet-counters"] = label_packet_counters;
        }
        else
        {
            label_packet_counters = std::make_shared<Bfd::LabelCounters::LabelPacketCounters>();
            label_packet_counters->parent = this;
            children["label-packet-counters"] = label_packet_counters;
        }
        return children.at("label-packet-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelCounters::get_children()
{
    if(children.find("label-packet-counters") == children.end())
    {
        if(label_packet_counters != nullptr)
        {
            children["label-packet-counters"] = label_packet_counters;
        }
    }

    return children;
}

void Bfd::LabelCounters::set_value(const std::string & value_path, std::string value)
{
}

Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounters()
{
    yang_name = "label-packet-counters"; yang_parent_name = "label-counters";
}

Bfd::LabelCounters::LabelPacketCounters::~LabelPacketCounters()
{
}

bool Bfd::LabelCounters::LabelPacketCounters::has_data() const
{
    for (std::size_t index=0; index<label_packet_counter.size(); index++)
    {
        if(label_packet_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::LabelCounters::LabelPacketCounters::has_operation() const
{
    for (std::size_t index=0; index<label_packet_counter.size(); index++)
    {
        if(label_packet_counter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::LabelCounters::LabelPacketCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-packet-counters";

    return path_buffer.str();

}

EntityPath Bfd::LabelCounters::LabelPacketCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelCounters::LabelPacketCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "label-packet-counter")
    {
        for(auto const & c : label_packet_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter>();
        c->parent = this;
        label_packet_counter.push_back(std::move(c));
        children[segment_path] = label_packet_counter.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelCounters::LabelPacketCounters::get_children()
{
    for (auto const & c : label_packet_counter)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::LabelCounters::LabelPacketCounters::set_value(const std::string & value_path, std::string value)
{
}

Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::LabelPacketCounter()
    :
    display_type{YType::enumeration, "display-type"},
    echo_receive_count{YType::uint32, "echo-receive-count"},
    echo_transmit_count{YType::uint32, "echo-transmit-count"},
    hello_receive_count{YType::uint32, "hello-receive-count"},
    hello_transmit_count{YType::uint32, "hello-transmit-count"},
    interface_name{YType::str, "interface-name"},
    location{YType::str, "location"}
{
    yang_name = "label-packet-counter"; yang_parent_name = "label-packet-counters";
}

Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::~LabelPacketCounter()
{
}

bool Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::has_data() const
{
    return display_type.is_set
	|| echo_receive_count.is_set
	|| echo_transmit_count.is_set
	|| hello_receive_count.is_set
	|| hello_transmit_count.is_set
	|| interface_name.is_set
	|| location.is_set;
}

bool Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::has_operation() const
{
    return is_set(operation)
	|| is_set(display_type.operation)
	|| is_set(echo_receive_count.operation)
	|| is_set(echo_transmit_count.operation)
	|| is_set(hello_receive_count.operation)
	|| is_set(hello_transmit_count.operation)
	|| is_set(interface_name.operation)
	|| is_set(location.operation);
}

std::string Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-packet-counter";

    return path_buffer.str();

}

EntityPath Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/label-counters/label-packet-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (display_type.is_set || is_set(display_type.operation)) leaf_name_data.push_back(display_type.get_name_leafdata());
    if (echo_receive_count.is_set || is_set(echo_receive_count.operation)) leaf_name_data.push_back(echo_receive_count.get_name_leafdata());
    if (echo_transmit_count.is_set || is_set(echo_transmit_count.operation)) leaf_name_data.push_back(echo_transmit_count.get_name_leafdata());
    if (hello_receive_count.is_set || is_set(hello_receive_count.operation)) leaf_name_data.push_back(hello_receive_count.get_name_leafdata());
    if (hello_transmit_count.is_set || is_set(hello_transmit_count.operation)) leaf_name_data.push_back(hello_transmit_count.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::get_children()
{
    return children;
}

void Bfd::LabelCounters::LabelPacketCounters::LabelPacketCounter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "display-type")
    {
        display_type = value;
    }
    if(value_path == "echo-receive-count")
    {
        echo_receive_count = value;
    }
    if(value_path == "echo-transmit-count")
    {
        echo_transmit_count = value;
    }
    if(value_path == "hello-receive-count")
    {
        hello_receive_count = value;
    }
    if(value_path == "hello-transmit-count")
    {
        hello_transmit_count = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetails()
{
    yang_name = "ipv4bf-do-mplste-head-session-details"; yang_parent_name = "bfd";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::~Ipv4BfDoMplsteHeadSessionDetails()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::has_data() const
{
    for (std::size_t index=0; index<ipv4bf_do_mplste_head_session_detail.size(); index++)
    {
        if(ipv4bf_do_mplste_head_session_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::has_operation() const
{
    for (std::size_t index=0; index<ipv4bf_do_mplste_head_session_detail.size(); index++)
    {
        if(ipv4bf_do_mplste_head_session_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-head-session-details";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4bf-do-mplste-head-session-detail")
    {
        for(auto const & c : ipv4bf_do_mplste_head_session_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail>();
        c->parent = this;
        ipv4bf_do_mplste_head_session_detail.push_back(std::move(c));
        children[segment_path] = ipv4bf_do_mplste_head_session_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::get_children()
{
    for (auto const & c : ipv4bf_do_mplste_head_session_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::Ipv4BfDoMplsteHeadSessionDetail()
    :
    fe_ctype{YType::int32, "fe-ctype"},
    fec_ctype{YType::int32, "fec-ctype"},
    fec_destination{YType::str, "fec-destination"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_subgroup_id{YType::int32, "fec-subgroup-id"},
    fec_subgroup_originator{YType::str, "fec-subgroup-originator"},
    fec_tunnel_id{YType::int32, "fec-tunnel-id"},
    feclspid{YType::int32, "feclspid"},
    fecp2mpid{YType::int32, "fecp2mpid"},
    incoming_label{YType::int32, "incoming-label"},
    interface_name{YType::str, "interface-name"},
    location{YType::str, "location"},
    vrf_name{YType::str, "vrf-name"}
    	,
    lsp_ping_info(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo>())
	,mp_download_state(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState>())
	,status_information(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation>())
{
    lsp_ping_info->parent = this;
    children["lsp-ping-info"] = lsp_ping_info;

    mp_download_state->parent = this;
    children["mp-download-state"] = mp_download_state;

    status_information->parent = this;
    children["status-information"] = status_information;

    yang_name = "ipv4bf-do-mplste-head-session-detail"; yang_parent_name = "ipv4bf-do-mplste-head-session-details";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::~Ipv4BfDoMplsteHeadSessionDetail()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::has_data() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return fe_ctype.is_set
	|| fec_ctype.is_set
	|| fec_destination.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_subgroup_id.is_set
	|| fec_subgroup_originator.is_set
	|| fec_tunnel_id.is_set
	|| feclspid.is_set
	|| fecp2mpid.is_set
	|| incoming_label.is_set
	|| interface_name.is_set
	|| location.is_set
	|| vrf_name.is_set
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_data())
	|| (mp_download_state !=  nullptr && mp_download_state->has_data())
	|| (status_information !=  nullptr && status_information->has_data());
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::has_operation() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(fe_ctype.operation)
	|| is_set(fec_ctype.operation)
	|| is_set(fec_destination.operation)
	|| is_set(fec_extended_tunnel_id.operation)
	|| is_set(fec_source.operation)
	|| is_set(fec_subgroup_id.operation)
	|| is_set(fec_subgroup_originator.operation)
	|| is_set(fec_tunnel_id.operation)
	|| is_set(feclspid.operation)
	|| is_set(fecp2mpid.operation)
	|| is_set(incoming_label.operation)
	|| is_set(interface_name.operation)
	|| is_set(location.operation)
	|| is_set(vrf_name.operation)
	|| (lsp_ping_info !=  nullptr && lsp_ping_info->has_operation())
	|| (mp_download_state !=  nullptr && mp_download_state->has_operation())
	|| (status_information !=  nullptr && status_information->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-head-session-detail";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fe_ctype.is_set || is_set(fe_ctype.operation)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());
    if (fec_ctype.is_set || is_set(fec_ctype.operation)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination.is_set || is_set(fec_destination.operation)) leaf_name_data.push_back(fec_destination.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.operation)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.operation)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_subgroup_id.is_set || is_set(fec_subgroup_id.operation)) leaf_name_data.push_back(fec_subgroup_id.get_name_leafdata());
    if (fec_subgroup_originator.is_set || is_set(fec_subgroup_originator.operation)) leaf_name_data.push_back(fec_subgroup_originator.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.operation)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (feclspid.is_set || is_set(feclspid.operation)) leaf_name_data.push_back(feclspid.get_name_leafdata());
    if (fecp2mpid.is_set || is_set(fecp2mpid.operation)) leaf_name_data.push_back(fecp2mpid.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.operation)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "association-information")
    {
        for(auto const & c : association_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation>();
        c->parent = this;
        association_information.push_back(std::move(c));
        children[segment_path] = association_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-ping-info")
    {
        if(lsp_ping_info != nullptr)
        {
            children["lsp-ping-info"] = lsp_ping_info;
        }
        else
        {
            lsp_ping_info = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo>();
            lsp_ping_info->parent = this;
            children["lsp-ping-info"] = lsp_ping_info;
        }
        return children.at("lsp-ping-info");
    }

    if(child_yang_name == "mp-download-state")
    {
        if(mp_download_state != nullptr)
        {
            children["mp-download-state"] = mp_download_state;
        }
        else
        {
            mp_download_state = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState>();
            mp_download_state->parent = this;
            children["mp-download-state"] = mp_download_state;
        }
        return children.at("mp-download-state");
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(std::move(c));
        children[segment_path] = owner_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "status-information")
    {
        if(status_information != nullptr)
        {
            children["status-information"] = status_information;
        }
        else
        {
            status_information = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation>();
            status_information->parent = this;
            children["status-information"] = status_information;
        }
        return children.at("status-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::get_children()
{
    for (auto const & c : association_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("lsp-ping-info") == children.end())
    {
        if(lsp_ping_info != nullptr)
        {
            children["lsp-ping-info"] = lsp_ping_info;
        }
    }

    if(children.find("mp-download-state") == children.end())
    {
        if(mp_download_state != nullptr)
        {
            children["mp-download-state"] = mp_download_state;
        }
    }

    for (auto const & c : owner_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("status-information") == children.end())
    {
        if(status_information != nullptr)
        {
            children["status-information"] = status_information;
        }
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
    }
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
    }
    if(value_path == "fec-destination")
    {
        fec_destination = value;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
    }
    if(value_path == "fec-subgroup-id")
    {
        fec_subgroup_id = value;
    }
    if(value_path == "fec-subgroup-originator")
    {
        fec_subgroup_originator = value;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
    }
    if(value_path == "feclspid")
    {
        feclspid = value;
    }
    if(value_path == "fecp2mpid")
    {
        fecp2mpid = value;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusInformation()
    :
    desired_minimum_echo_transmit_interval{YType::uint32, "desired-minimum-echo-transmit-interval"},
    internal_label{YType::uint32, "internal-label"},
    latency_average{YType::uint32, "latency-average"},
    latency_maximum{YType::uint32, "latency-maximum"},
    latency_minimum{YType::uint32, "latency-minimum"},
    latency_number{YType::uint32, "latency-number"},
    local_discriminator{YType::uint32, "local-discriminator"},
    node_id{YType::str, "node-id"},
    remote_discriminator{YType::uint32, "remote-discriminator"},
    remote_negotiated_interval{YType::uint32, "remote-negotiated-interval"},
    session_subtype{YType::str, "session-subtype"},
    sessiontype{YType::enumeration, "sessiontype"},
    state{YType::enumeration, "state"},
    to_up_state_count{YType::uint32, "to-up-state-count"}
    	,
    async_receive_statistics(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics>())
	,async_transmit_statistics(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics>())
	,echo_received_statistics(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics>())
	,echo_transmit_statistics(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics>())
	,last_state_change(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange>())
	,receive_packet(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket>())
	,source_address(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress>())
	,status_brief_information(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation>())
	,transmit_packet(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket>())
{
    async_receive_statistics->parent = this;
    children["async-receive-statistics"] = async_receive_statistics;

    async_transmit_statistics->parent = this;
    children["async-transmit-statistics"] = async_transmit_statistics;

    echo_received_statistics->parent = this;
    children["echo-received-statistics"] = echo_received_statistics;

    echo_transmit_statistics->parent = this;
    children["echo-transmit-statistics"] = echo_transmit_statistics;

    last_state_change->parent = this;
    children["last-state-change"] = last_state_change;

    receive_packet->parent = this;
    children["receive-packet"] = receive_packet;

    source_address->parent = this;
    children["source-address"] = source_address;

    status_brief_information->parent = this;
    children["status-brief-information"] = status_brief_information;

    transmit_packet->parent = this;
    children["transmit-packet"] = transmit_packet;

    yang_name = "status-information"; yang_parent_name = "ipv4bf-do-mplste-head-session-detail";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::~StatusInformation()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::has_data() const
{
    return desired_minimum_echo_transmit_interval.is_set
	|| internal_label.is_set
	|| latency_average.is_set
	|| latency_maximum.is_set
	|| latency_minimum.is_set
	|| latency_number.is_set
	|| local_discriminator.is_set
	|| node_id.is_set
	|| remote_discriminator.is_set
	|| remote_negotiated_interval.is_set
	|| session_subtype.is_set
	|| sessiontype.is_set
	|| state.is_set
	|| to_up_state_count.is_set
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_data())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_data())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_data())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_data())
	|| (last_state_change !=  nullptr && last_state_change->has_data())
	|| (receive_packet !=  nullptr && receive_packet->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (status_brief_information !=  nullptr && status_brief_information->has_data())
	|| (transmit_packet !=  nullptr && transmit_packet->has_data());
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(desired_minimum_echo_transmit_interval.operation)
	|| is_set(internal_label.operation)
	|| is_set(latency_average.operation)
	|| is_set(latency_maximum.operation)
	|| is_set(latency_minimum.operation)
	|| is_set(latency_number.operation)
	|| is_set(local_discriminator.operation)
	|| is_set(node_id.operation)
	|| is_set(remote_discriminator.operation)
	|| is_set(remote_negotiated_interval.operation)
	|| is_set(session_subtype.operation)
	|| is_set(sessiontype.operation)
	|| is_set(state.operation)
	|| is_set(to_up_state_count.operation)
	|| (async_receive_statistics !=  nullptr && async_receive_statistics->has_operation())
	|| (async_transmit_statistics !=  nullptr && async_transmit_statistics->has_operation())
	|| (echo_received_statistics !=  nullptr && echo_received_statistics->has_operation())
	|| (echo_transmit_statistics !=  nullptr && echo_transmit_statistics->has_operation())
	|| (last_state_change !=  nullptr && last_state_change->has_operation())
	|| (receive_packet !=  nullptr && receive_packet->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation())
	|| (transmit_packet !=  nullptr && transmit_packet->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-information";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (desired_minimum_echo_transmit_interval.is_set || is_set(desired_minimum_echo_transmit_interval.operation)) leaf_name_data.push_back(desired_minimum_echo_transmit_interval.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (latency_average.is_set || is_set(latency_average.operation)) leaf_name_data.push_back(latency_average.get_name_leafdata());
    if (latency_maximum.is_set || is_set(latency_maximum.operation)) leaf_name_data.push_back(latency_maximum.get_name_leafdata());
    if (latency_minimum.is_set || is_set(latency_minimum.operation)) leaf_name_data.push_back(latency_minimum.get_name_leafdata());
    if (latency_number.is_set || is_set(latency_number.operation)) leaf_name_data.push_back(latency_number.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.operation)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (remote_negotiated_interval.is_set || is_set(remote_negotiated_interval.operation)) leaf_name_data.push_back(remote_negotiated_interval.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.operation)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.operation)) leaf_name_data.push_back(sessiontype.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (to_up_state_count.is_set || is_set(to_up_state_count.operation)) leaf_name_data.push_back(to_up_state_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "async-receive-statistics")
    {
        if(async_receive_statistics != nullptr)
        {
            children["async-receive-statistics"] = async_receive_statistics;
        }
        else
        {
            async_receive_statistics = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics>();
            async_receive_statistics->parent = this;
            children["async-receive-statistics"] = async_receive_statistics;
        }
        return children.at("async-receive-statistics");
    }

    if(child_yang_name == "async-transmit-statistics")
    {
        if(async_transmit_statistics != nullptr)
        {
            children["async-transmit-statistics"] = async_transmit_statistics;
        }
        else
        {
            async_transmit_statistics = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics>();
            async_transmit_statistics->parent = this;
            children["async-transmit-statistics"] = async_transmit_statistics;
        }
        return children.at("async-transmit-statistics");
    }

    if(child_yang_name == "echo-received-statistics")
    {
        if(echo_received_statistics != nullptr)
        {
            children["echo-received-statistics"] = echo_received_statistics;
        }
        else
        {
            echo_received_statistics = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics>();
            echo_received_statistics->parent = this;
            children["echo-received-statistics"] = echo_received_statistics;
        }
        return children.at("echo-received-statistics");
    }

    if(child_yang_name == "echo-transmit-statistics")
    {
        if(echo_transmit_statistics != nullptr)
        {
            children["echo-transmit-statistics"] = echo_transmit_statistics;
        }
        else
        {
            echo_transmit_statistics = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics>();
            echo_transmit_statistics->parent = this;
            children["echo-transmit-statistics"] = echo_transmit_statistics;
        }
        return children.at("echo-transmit-statistics");
    }

    if(child_yang_name == "last-state-change")
    {
        if(last_state_change != nullptr)
        {
            children["last-state-change"] = last_state_change;
        }
        else
        {
            last_state_change = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange>();
            last_state_change->parent = this;
            children["last-state-change"] = last_state_change;
        }
        return children.at("last-state-change");
    }

    if(child_yang_name == "receive-packet")
    {
        if(receive_packet != nullptr)
        {
            children["receive-packet"] = receive_packet;
        }
        else
        {
            receive_packet = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket>();
            receive_packet->parent = this;
            children["receive-packet"] = receive_packet;
        }
        return children.at("receive-packet");
    }

    if(child_yang_name == "source-address")
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
        else
        {
            source_address = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress>();
            source_address->parent = this;
            children["source-address"] = source_address;
        }
        return children.at("source-address");
    }

    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information != nullptr)
        {
            children["status-brief-information"] = status_brief_information;
        }
        else
        {
            status_brief_information = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation>();
            status_brief_information->parent = this;
            children["status-brief-information"] = status_brief_information;
        }
        return children.at("status-brief-information");
    }

    if(child_yang_name == "transmit-packet")
    {
        if(transmit_packet != nullptr)
        {
            children["transmit-packet"] = transmit_packet;
        }
        else
        {
            transmit_packet = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket>();
            transmit_packet->parent = this;
            children["transmit-packet"] = transmit_packet;
        }
        return children.at("transmit-packet");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::get_children()
{
    if(children.find("async-receive-statistics") == children.end())
    {
        if(async_receive_statistics != nullptr)
        {
            children["async-receive-statistics"] = async_receive_statistics;
        }
    }

    if(children.find("async-transmit-statistics") == children.end())
    {
        if(async_transmit_statistics != nullptr)
        {
            children["async-transmit-statistics"] = async_transmit_statistics;
        }
    }

    if(children.find("echo-received-statistics") == children.end())
    {
        if(echo_received_statistics != nullptr)
        {
            children["echo-received-statistics"] = echo_received_statistics;
        }
    }

    if(children.find("echo-transmit-statistics") == children.end())
    {
        if(echo_transmit_statistics != nullptr)
        {
            children["echo-transmit-statistics"] = echo_transmit_statistics;
        }
    }

    if(children.find("last-state-change") == children.end())
    {
        if(last_state_change != nullptr)
        {
            children["last-state-change"] = last_state_change;
        }
    }

    if(children.find("receive-packet") == children.end())
    {
        if(receive_packet != nullptr)
        {
            children["receive-packet"] = receive_packet;
        }
    }

    if(children.find("source-address") == children.end())
    {
        if(source_address != nullptr)
        {
            children["source-address"] = source_address;
        }
    }

    if(children.find("status-brief-information") == children.end())
    {
        if(status_brief_information != nullptr)
        {
            children["status-brief-information"] = status_brief_information;
        }
    }

    if(children.find("transmit-packet") == children.end())
    {
        if(transmit_packet != nullptr)
        {
            children["transmit-packet"] = transmit_packet;
        }
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "desired-minimum-echo-transmit-interval")
    {
        desired_minimum_echo_transmit_interval = value;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "latency-average")
    {
        latency_average = value;
    }
    if(value_path == "latency-maximum")
    {
        latency_maximum = value;
    }
    if(value_path == "latency-minimum")
    {
        latency_minimum = value;
    }
    if(value_path == "latency-number")
    {
        latency_number = value;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
    }
    if(value_path == "remote-negotiated-interval")
    {
        remote_negotiated_interval = value;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "to-up-state-count")
    {
        to_up_state_count = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress::SourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "source-address"; yang_parent_name = "status-information";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress::~SourceAddress()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress::get_children()
{
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange::LastStateChange()
    :
    days{YType::uint32, "days"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"},
    seconds{YType::uint8, "seconds"}
{
    yang_name = "last-state-change"; yang_parent_name = "status-information";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange::~LastStateChange()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| minutes.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(days.operation)
	|| is_set(hours.operation)
	|| is_set(minutes.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-state-change";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.operation)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.operation)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.operation)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange::get_children()
{
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::LastStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "days")
    {
        days = value;
    }
    if(value_path == "hours")
    {
        hours = value;
    }
    if(value_path == "minutes")
    {
        minutes = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket::TransmitPacket()
    :
    authentication_present{YType::int32, "authentication-present"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    demand{YType::int32, "demand"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    diagnostic{YType::enumeration, "diagnostic"},
    final_{YType::int32, "final"},
    ihear_you{YType::int32, "ihear-you"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    poll{YType::int32, "poll"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    state{YType::enumeration, "state"},
    version{YType::uint8, "version"},
    your_discriminator{YType::uint32, "your-discriminator"}
{
    yang_name = "transmit-packet"; yang_parent_name = "status-information";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket::~TransmitPacket()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket::has_data() const
{
    return authentication_present.is_set
	|| control_plane_independent.is_set
	|| demand.is_set
	|| desired_minimum_transmit_interval.is_set
	|| detection_multiplier.is_set
	|| diagnostic.is_set
	|| final_.is_set
	|| ihear_you.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| poll.is_set
	|| required_minimum_echo_receive_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| state.is_set
	|| version.is_set
	|| your_discriminator.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_present.operation)
	|| is_set(control_plane_independent.operation)
	|| is_set(demand.operation)
	|| is_set(desired_minimum_transmit_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(diagnostic.operation)
	|| is_set(final_.operation)
	|| is_set(ihear_you.operation)
	|| is_set(length.operation)
	|| is_set(my_discriminator.operation)
	|| is_set(poll.operation)
	|| is_set(required_minimum_echo_receive_interval.operation)
	|| is_set(required_minimum_receive_interval.operation)
	|| is_set(state.operation)
	|| is_set(version.operation)
	|| is_set(your_discriminator.operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-packet";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_present.is_set || is_set(authentication_present.operation)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.operation)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (demand.is_set || is_set(demand.operation)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.operation)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.operation)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (final_.is_set || is_set(final_.operation)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.operation)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.operation)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (poll.is_set || is_set(poll.operation)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.operation)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.operation)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.operation)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket::get_children()
{
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::TransmitPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-present")
    {
        authentication_present = value;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
    }
    if(value_path == "demand")
    {
        demand = value;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
    }
    if(value_path == "final")
    {
        final_ = value;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
    }
    if(value_path == "poll")
    {
        poll = value;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket::ReceivePacket()
    :
    authentication_present{YType::int32, "authentication-present"},
    control_plane_independent{YType::int32, "control-plane-independent"},
    demand{YType::int32, "demand"},
    desired_minimum_transmit_interval{YType::uint32, "desired-minimum-transmit-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    diagnostic{YType::enumeration, "diagnostic"},
    final_{YType::int32, "final"},
    ihear_you{YType::int32, "ihear-you"},
    length{YType::uint32, "length"},
    my_discriminator{YType::uint32, "my-discriminator"},
    poll{YType::int32, "poll"},
    required_minimum_echo_receive_interval{YType::uint32, "required-minimum-echo-receive-interval"},
    required_minimum_receive_interval{YType::uint32, "required-minimum-receive-interval"},
    state{YType::enumeration, "state"},
    version{YType::uint8, "version"},
    your_discriminator{YType::uint32, "your-discriminator"}
{
    yang_name = "receive-packet"; yang_parent_name = "status-information";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket::~ReceivePacket()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket::has_data() const
{
    return authentication_present.is_set
	|| control_plane_independent.is_set
	|| demand.is_set
	|| desired_minimum_transmit_interval.is_set
	|| detection_multiplier.is_set
	|| diagnostic.is_set
	|| final_.is_set
	|| ihear_you.is_set
	|| length.is_set
	|| my_discriminator.is_set
	|| poll.is_set
	|| required_minimum_echo_receive_interval.is_set
	|| required_minimum_receive_interval.is_set
	|| state.is_set
	|| version.is_set
	|| your_discriminator.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_present.operation)
	|| is_set(control_plane_independent.operation)
	|| is_set(demand.operation)
	|| is_set(desired_minimum_transmit_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(diagnostic.operation)
	|| is_set(final_.operation)
	|| is_set(ihear_you.operation)
	|| is_set(length.operation)
	|| is_set(my_discriminator.operation)
	|| is_set(poll.operation)
	|| is_set(required_minimum_echo_receive_interval.operation)
	|| is_set(required_minimum_receive_interval.operation)
	|| is_set(state.operation)
	|| is_set(version.operation)
	|| is_set(your_discriminator.operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-packet";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_present.is_set || is_set(authentication_present.operation)) leaf_name_data.push_back(authentication_present.get_name_leafdata());
    if (control_plane_independent.is_set || is_set(control_plane_independent.operation)) leaf_name_data.push_back(control_plane_independent.get_name_leafdata());
    if (demand.is_set || is_set(demand.operation)) leaf_name_data.push_back(demand.get_name_leafdata());
    if (desired_minimum_transmit_interval.is_set || is_set(desired_minimum_transmit_interval.operation)) leaf_name_data.push_back(desired_minimum_transmit_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (diagnostic.is_set || is_set(diagnostic.operation)) leaf_name_data.push_back(diagnostic.get_name_leafdata());
    if (final_.is_set || is_set(final_.operation)) leaf_name_data.push_back(final_.get_name_leafdata());
    if (ihear_you.is_set || is_set(ihear_you.operation)) leaf_name_data.push_back(ihear_you.get_name_leafdata());
    if (length.is_set || is_set(length.operation)) leaf_name_data.push_back(length.get_name_leafdata());
    if (my_discriminator.is_set || is_set(my_discriminator.operation)) leaf_name_data.push_back(my_discriminator.get_name_leafdata());
    if (poll.is_set || is_set(poll.operation)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (required_minimum_echo_receive_interval.is_set || is_set(required_minimum_echo_receive_interval.operation)) leaf_name_data.push_back(required_minimum_echo_receive_interval.get_name_leafdata());
    if (required_minimum_receive_interval.is_set || is_set(required_minimum_receive_interval.operation)) leaf_name_data.push_back(required_minimum_receive_interval.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (your_discriminator.is_set || is_set(your_discriminator.operation)) leaf_name_data.push_back(your_discriminator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket::get_children()
{
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::ReceivePacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-present")
    {
        authentication_present = value;
    }
    if(value_path == "control-plane-independent")
    {
        control_plane_independent = value;
    }
    if(value_path == "demand")
    {
        demand = value;
    }
    if(value_path == "desired-minimum-transmit-interval")
    {
        desired_minimum_transmit_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "diagnostic")
    {
        diagnostic = value;
    }
    if(value_path == "final")
    {
        final_ = value;
    }
    if(value_path == "ihear-you")
    {
        ihear_you = value;
    }
    if(value_path == "length")
    {
        length = value;
    }
    if(value_path == "my-discriminator")
    {
        my_discriminator = value;
    }
    if(value_path == "poll")
    {
        poll = value;
    }
    if(value_path == "required-minimum-echo-receive-interval")
    {
        required_minimum_echo_receive_interval = value;
    }
    if(value_path == "required-minimum-receive-interval")
    {
        required_minimum_receive_interval = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "your-discriminator")
    {
        your_discriminator = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    children["async-interval-multiplier"] = async_interval_multiplier;

    echo_interval_multiplier->parent = this;
    children["echo-interval-multiplier"] = echo_interval_multiplier;

    yang_name = "status-brief-information"; yang_parent_name = "status-information";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::has_operation() const
{
    return is_set(operation)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier != nullptr)
        {
            children["async-interval-multiplier"] = async_interval_multiplier;
        }
        else
        {
            async_interval_multiplier = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier>();
            async_interval_multiplier->parent = this;
            children["async-interval-multiplier"] = async_interval_multiplier;
        }
        return children.at("async-interval-multiplier");
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier != nullptr)
        {
            children["echo-interval-multiplier"] = echo_interval_multiplier;
        }
        else
        {
            echo_interval_multiplier = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier>();
            echo_interval_multiplier->parent = this;
            children["echo-interval-multiplier"] = echo_interval_multiplier;
        }
        return children.at("echo-interval-multiplier");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::get_children()
{
    if(children.find("async-interval-multiplier") == children.end())
    {
        if(async_interval_multiplier != nullptr)
        {
            children["async-interval-multiplier"] = async_interval_multiplier;
        }
    }

    if(children.find("echo-interval-multiplier") == children.end())
    {
        if(echo_interval_multiplier != nullptr)
        {
            children["echo-interval-multiplier"] = echo_interval_multiplier;
        }
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"}
{
    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_local_transmit_interval.is_set
	|| negotiated_remote_transmit_interval.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_local_transmit_interval.operation)
	|| is_set(negotiated_remote_transmit_interval.operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/status-information/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.operation)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.operation)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::get_children()
{
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"}
{
    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_transmit_interval.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_transmit_interval.operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/status-information/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.operation)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::get_children()
{
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics::AsyncTransmitStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "async-transmit-statistics"; yang_parent_name = "status-information";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics::~AsyncTransmitStatistics()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-transmit-statistics";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics::get_children()
{
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncTransmitStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics::AsyncReceiveStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "async-receive-statistics"; yang_parent_name = "status-information";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics::~AsyncReceiveStatistics()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-receive-statistics";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics::get_children()
{
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::AsyncReceiveStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics::EchoTransmitStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "echo-transmit-statistics"; yang_parent_name = "status-information";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics::~EchoTransmitStatistics()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-transmit-statistics";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics::get_children()
{
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoTransmitStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics::EchoReceivedStatistics()
    :
    average{YType::uint32, "average"},
    last{YType::uint32, "last"},
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"},
    number{YType::uint32, "number"}
{
    yang_name = "echo-received-statistics"; yang_parent_name = "status-information";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics::~EchoReceivedStatistics()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics::has_data() const
{
    return average.is_set
	|| last.is_set
	|| maximum.is_set
	|| minimum.is_set
	|| number.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(last.operation)
	|| is_set(maximum.operation)
	|| is_set(minimum.operation)
	|| is_set(number.operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-received-statistics";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics::get_children()
{
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::StatusInformation::EchoReceivedStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::MpDownloadState()
    :
    mp_download_state{YType::enumeration, "mp-download-state"}
    	,
    change_time(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime>())
{
    change_time->parent = this;
    children["change-time"] = change_time;

    yang_name = "mp-download-state"; yang_parent_name = "ipv4bf-do-mplste-head-session-detail";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::~MpDownloadState()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::has_data() const
{
    return mp_download_state.is_set
	|| (change_time !=  nullptr && change_time->has_data());
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::has_operation() const
{
    return is_set(operation)
	|| is_set(mp_download_state.operation)
	|| (change_time !=  nullptr && change_time->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp-download-state";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mp_download_state.is_set || is_set(mp_download_state.operation)) leaf_name_data.push_back(mp_download_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "change-time")
    {
        if(change_time != nullptr)
        {
            children["change-time"] = change_time;
        }
        else
        {
            change_time = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime>();
            change_time->parent = this;
            children["change-time"] = change_time;
        }
        return children.at("change-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::get_children()
{
    if(children.find("change-time") == children.end())
    {
        if(change_time != nullptr)
        {
            children["change-time"] = change_time;
        }
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mp-download-state")
    {
        mp_download_state = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime::ChangeTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "change-time"; yang_parent_name = "mp-download-state";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime::~ChangeTime()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-time";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/mp-download-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime::get_children()
{
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::MpDownloadState::ChangeTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingInfo()
    :
    lsp_ping_rx_count{YType::uint32, "lsp-ping-rx-count"},
    lsp_ping_rx_last_code{YType::uint8, "lsp-ping-rx-last-code"},
    lsp_ping_rx_last_discr{YType::uint32, "lsp-ping-rx-last-discr"},
    lsp_ping_rx_last_output{YType::str, "lsp-ping-rx-last-output"},
    lsp_ping_rx_last_subcode{YType::uint8, "lsp-ping-rx-last-subcode"},
    lsp_ping_tx_count{YType::uint32, "lsp-ping-tx-count"},
    lsp_ping_tx_error_count{YType::uint32, "lsp-ping-tx-error-count"},
    lsp_ping_tx_last_error_rc{YType::str, "lsp-ping-tx-last-error-rc"},
    lsp_ping_tx_last_rc{YType::str, "lsp-ping-tx-last-rc"}
    	,
    lsp_ping_rx_last_time(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime>())
	,lsp_ping_tx_last_error_time(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime>())
	,lsp_ping_tx_last_time(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime>())
{
    lsp_ping_rx_last_time->parent = this;
    children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;

    lsp_ping_tx_last_error_time->parent = this;
    children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;

    lsp_ping_tx_last_time->parent = this;
    children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;

    yang_name = "lsp-ping-info"; yang_parent_name = "ipv4bf-do-mplste-head-session-detail";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::~LspPingInfo()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::has_data() const
{
    return lsp_ping_rx_count.is_set
	|| lsp_ping_rx_last_code.is_set
	|| lsp_ping_rx_last_discr.is_set
	|| lsp_ping_rx_last_output.is_set
	|| lsp_ping_rx_last_subcode.is_set
	|| lsp_ping_tx_count.is_set
	|| lsp_ping_tx_error_count.is_set
	|| lsp_ping_tx_last_error_rc.is_set
	|| lsp_ping_tx_last_rc.is_set
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_data())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_data())
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_data());
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(lsp_ping_rx_count.operation)
	|| is_set(lsp_ping_rx_last_code.operation)
	|| is_set(lsp_ping_rx_last_discr.operation)
	|| is_set(lsp_ping_rx_last_output.operation)
	|| is_set(lsp_ping_rx_last_subcode.operation)
	|| is_set(lsp_ping_tx_count.operation)
	|| is_set(lsp_ping_tx_error_count.operation)
	|| is_set(lsp_ping_tx_last_error_rc.operation)
	|| is_set(lsp_ping_tx_last_rc.operation)
	|| (lsp_ping_rx_last_time !=  nullptr && lsp_ping_rx_last_time->has_operation())
	|| (lsp_ping_tx_last_error_time !=  nullptr && lsp_ping_tx_last_error_time->has_operation())
	|| (lsp_ping_tx_last_time !=  nullptr && lsp_ping_tx_last_time->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-info";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_ping_rx_count.is_set || is_set(lsp_ping_rx_count.operation)) leaf_name_data.push_back(lsp_ping_rx_count.get_name_leafdata());
    if (lsp_ping_rx_last_code.is_set || is_set(lsp_ping_rx_last_code.operation)) leaf_name_data.push_back(lsp_ping_rx_last_code.get_name_leafdata());
    if (lsp_ping_rx_last_discr.is_set || is_set(lsp_ping_rx_last_discr.operation)) leaf_name_data.push_back(lsp_ping_rx_last_discr.get_name_leafdata());
    if (lsp_ping_rx_last_output.is_set || is_set(lsp_ping_rx_last_output.operation)) leaf_name_data.push_back(lsp_ping_rx_last_output.get_name_leafdata());
    if (lsp_ping_rx_last_subcode.is_set || is_set(lsp_ping_rx_last_subcode.operation)) leaf_name_data.push_back(lsp_ping_rx_last_subcode.get_name_leafdata());
    if (lsp_ping_tx_count.is_set || is_set(lsp_ping_tx_count.operation)) leaf_name_data.push_back(lsp_ping_tx_count.get_name_leafdata());
    if (lsp_ping_tx_error_count.is_set || is_set(lsp_ping_tx_error_count.operation)) leaf_name_data.push_back(lsp_ping_tx_error_count.get_name_leafdata());
    if (lsp_ping_tx_last_error_rc.is_set || is_set(lsp_ping_tx_last_error_rc.operation)) leaf_name_data.push_back(lsp_ping_tx_last_error_rc.get_name_leafdata());
    if (lsp_ping_tx_last_rc.is_set || is_set(lsp_ping_tx_last_rc.operation)) leaf_name_data.push_back(lsp_ping_tx_last_rc.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-ping-rx-last-time")
    {
        if(lsp_ping_rx_last_time != nullptr)
        {
            children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
        }
        else
        {
            lsp_ping_rx_last_time = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime>();
            lsp_ping_rx_last_time->parent = this;
            children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
        }
        return children.at("lsp-ping-rx-last-time");
    }

    if(child_yang_name == "lsp-ping-tx-last-error-time")
    {
        if(lsp_ping_tx_last_error_time != nullptr)
        {
            children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
        }
        else
        {
            lsp_ping_tx_last_error_time = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime>();
            lsp_ping_tx_last_error_time->parent = this;
            children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
        }
        return children.at("lsp-ping-tx-last-error-time");
    }

    if(child_yang_name == "lsp-ping-tx-last-time")
    {
        if(lsp_ping_tx_last_time != nullptr)
        {
            children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
        }
        else
        {
            lsp_ping_tx_last_time = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime>();
            lsp_ping_tx_last_time->parent = this;
            children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
        }
        return children.at("lsp-ping-tx-last-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::get_children()
{
    if(children.find("lsp-ping-rx-last-time") == children.end())
    {
        if(lsp_ping_rx_last_time != nullptr)
        {
            children["lsp-ping-rx-last-time"] = lsp_ping_rx_last_time;
        }
    }

    if(children.find("lsp-ping-tx-last-error-time") == children.end())
    {
        if(lsp_ping_tx_last_error_time != nullptr)
        {
            children["lsp-ping-tx-last-error-time"] = lsp_ping_tx_last_error_time;
        }
    }

    if(children.find("lsp-ping-tx-last-time") == children.end())
    {
        if(lsp_ping_tx_last_time != nullptr)
        {
            children["lsp-ping-tx-last-time"] = lsp_ping_tx_last_time;
        }
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsp-ping-rx-count")
    {
        lsp_ping_rx_count = value;
    }
    if(value_path == "lsp-ping-rx-last-code")
    {
        lsp_ping_rx_last_code = value;
    }
    if(value_path == "lsp-ping-rx-last-discr")
    {
        lsp_ping_rx_last_discr = value;
    }
    if(value_path == "lsp-ping-rx-last-output")
    {
        lsp_ping_rx_last_output = value;
    }
    if(value_path == "lsp-ping-rx-last-subcode")
    {
        lsp_ping_rx_last_subcode = value;
    }
    if(value_path == "lsp-ping-tx-count")
    {
        lsp_ping_tx_count = value;
    }
    if(value_path == "lsp-ping-tx-error-count")
    {
        lsp_ping_tx_error_count = value;
    }
    if(value_path == "lsp-ping-tx-last-error-rc")
    {
        lsp_ping_tx_last_error_rc = value;
    }
    if(value_path == "lsp-ping-tx-last-rc")
    {
        lsp_ping_tx_last_rc = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime::LspPingTxLastTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lsp-ping-tx-last-time"; yang_parent_name = "lsp-ping-info";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime::~LspPingTxLastTime()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-time";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/lsp-ping-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime::get_children()
{
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime::LspPingTxLastErrorTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lsp-ping-tx-last-error-time"; yang_parent_name = "lsp-ping-info";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime::~LspPingTxLastErrorTime()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-tx-last-error-time";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/lsp-ping-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime::get_children()
{
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingTxLastErrorTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime::LspPingRxLastTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lsp-ping-rx-last-time"; yang_parent_name = "lsp-ping-info";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime::~LspPingRxLastTime()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-ping-rx-last-time";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/lsp-ping-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime::get_children()
{
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::LspPingInfo::LspPingRxLastTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::OwnerInformation::OwnerInformation()
    :
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    name{YType::str, "name"}
{
    yang_name = "owner-information"; yang_parent_name = "ipv4bf-do-mplste-head-session-detail";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::OwnerInformation::has_data() const
{
    return adjusted_detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| detection_multiplier.is_set
	|| interval.is_set
	|| name.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::OwnerInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(adjusted_detection_multiplier.operation)
	|| is_set(adjusted_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(interval.operation)
	|| is_set(name.operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::OwnerInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.operation)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.operation)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::OwnerInformation::get_children()
{
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::OwnerInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::AssociationInformation()
    :
    local_discriminator{YType::uint32, "local-discriminator"},
    sessiontype{YType::enumeration, "sessiontype"}
    	,
    session_key(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey>())
{
    session_key->parent = this;
    children["session-key"] = session_key;

    yang_name = "association-information"; yang_parent_name = "ipv4bf-do-mplste-head-session-detail";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::~AssociationInformation()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::has_data() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return local_discriminator.is_set
	|| sessiontype.is_set
	|| (session_key !=  nullptr && session_key->has_data());
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::has_operation() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(local_discriminator.operation)
	|| is_set(sessiontype.operation)
	|| (session_key !=  nullptr && session_key->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-information";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.operation)) leaf_name_data.push_back(sessiontype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(std::move(c));
        children[segment_path] = owner_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "session-key")
    {
        if(session_key != nullptr)
        {
            children["session-key"] = session_key;
        }
        else
        {
            session_key = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey>();
            session_key->parent = this;
            children["session-key"] = session_key;
        }
        return children.at("session-key");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::get_children()
{
    for (auto const & c : owner_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("session-key") == children.end())
    {
        if(session_key != nullptr)
        {
            children["session-key"] = session_key;
        }
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::SessionKey()
    :
    incoming_label{YType::uint32, "incoming-label"},
    interface_name{YType::str, "interface-name"},
    sbfd_enabled{YType::int32, "sbfd-enabled"},
    sbfd_target_type{YType::uint32, "sbfd-target-type"},
    session_key_type{YType::uint32, "session-key-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    bfdfec(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec>())
	,ip_destination_address(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress>())
	,ip_source_address(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpSourceAddress>())
	,target_address(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::TargetAddress>())
{
    bfdfec->parent = this;
    children["bfdfec"] = bfdfec;

    ip_destination_address->parent = this;
    children["ip-destination-address"] = ip_destination_address;

    ip_source_address->parent = this;
    children["ip-source-address"] = ip_source_address;

    target_address->parent = this;
    children["target-address"] = target_address;

    yang_name = "session-key"; yang_parent_name = "association-information";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::~SessionKey()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::has_data() const
{
    return incoming_label.is_set
	|| interface_name.is_set
	|| sbfd_enabled.is_set
	|| sbfd_target_type.is_set
	|| session_key_type.is_set
	|| vrf_name.is_set
	|| (bfdfec !=  nullptr && bfdfec->has_data())
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_data())
	|| (ip_source_address !=  nullptr && ip_source_address->has_data())
	|| (target_address !=  nullptr && target_address->has_data());
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::has_operation() const
{
    return is_set(operation)
	|| is_set(incoming_label.operation)
	|| is_set(interface_name.operation)
	|| is_set(sbfd_enabled.operation)
	|| is_set(sbfd_target_type.operation)
	|| is_set(session_key_type.operation)
	|| is_set(vrf_name.operation)
	|| (bfdfec !=  nullptr && bfdfec->has_operation())
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_operation())
	|| (ip_source_address !=  nullptr && ip_source_address->has_operation())
	|| (target_address !=  nullptr && target_address->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-key";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/association-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incoming_label.is_set || is_set(incoming_label.operation)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sbfd_enabled.is_set || is_set(sbfd_enabled.operation)) leaf_name_data.push_back(sbfd_enabled.get_name_leafdata());
    if (sbfd_target_type.is_set || is_set(sbfd_target_type.operation)) leaf_name_data.push_back(sbfd_target_type.get_name_leafdata());
    if (session_key_type.is_set || is_set(session_key_type.operation)) leaf_name_data.push_back(session_key_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfdfec")
    {
        if(bfdfec != nullptr)
        {
            children["bfdfec"] = bfdfec;
        }
        else
        {
            bfdfec = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec>();
            bfdfec->parent = this;
            children["bfdfec"] = bfdfec;
        }
        return children.at("bfdfec");
    }

    if(child_yang_name == "ip-destination-address")
    {
        if(ip_destination_address != nullptr)
        {
            children["ip-destination-address"] = ip_destination_address;
        }
        else
        {
            ip_destination_address = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress>();
            ip_destination_address->parent = this;
            children["ip-destination-address"] = ip_destination_address;
        }
        return children.at("ip-destination-address");
    }

    if(child_yang_name == "ip-source-address")
    {
        if(ip_source_address != nullptr)
        {
            children["ip-source-address"] = ip_source_address;
        }
        else
        {
            ip_source_address = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpSourceAddress>();
            ip_source_address->parent = this;
            children["ip-source-address"] = ip_source_address;
        }
        return children.at("ip-source-address");
    }

    if(child_yang_name == "target-address")
    {
        if(target_address != nullptr)
        {
            children["target-address"] = target_address;
        }
        else
        {
            target_address = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::TargetAddress>();
            target_address->parent = this;
            children["target-address"] = target_address;
        }
        return children.at("target-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::get_children()
{
    if(children.find("bfdfec") == children.end())
    {
        if(bfdfec != nullptr)
        {
            children["bfdfec"] = bfdfec;
        }
    }

    if(children.find("ip-destination-address") == children.end())
    {
        if(ip_destination_address != nullptr)
        {
            children["ip-destination-address"] = ip_destination_address;
        }
    }

    if(children.find("ip-source-address") == children.end())
    {
        if(ip_source_address != nullptr)
        {
            children["ip-source-address"] = ip_source_address;
        }
    }

    if(children.find("target-address") == children.end())
    {
        if(target_address != nullptr)
        {
            children["target-address"] = target_address;
        }
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "incoming-label")
    {
        incoming_label = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "sbfd-enabled")
    {
        sbfd_enabled = value;
    }
    if(value_path == "sbfd-target-type")
    {
        sbfd_target_type = value;
    }
    if(value_path == "session-key-type")
    {
        session_key_type = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::IpDestinationAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "ip-destination-address"; yang_parent_name = "session-key";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::~IpDestinationAddress()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-destination-address";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_children()
{
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpDestinationAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::IpSourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "ip-source-address"; yang_parent_name = "session-key";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::~IpSourceAddress()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-source-address";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::get_children()
{
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::IpSourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::Bfdfec()
    :
    bfdfe_ctype{YType::enumeration, "bfdfe-ctype"}
    	,
    dummy(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy>())
	,te_s2l_fec(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec>())
{
    dummy->parent = this;
    children["dummy"] = dummy;

    te_s2l_fec->parent = this;
    children["te-s2l-fec"] = te_s2l_fec;

    yang_name = "bfdfec"; yang_parent_name = "session-key";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::~Bfdfec()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::has_data() const
{
    return bfdfe_ctype.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (te_s2l_fec !=  nullptr && te_s2l_fec->has_data());
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::has_operation() const
{
    return is_set(operation)
	|| is_set(bfdfe_ctype.operation)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (te_s2l_fec !=  nullptr && te_s2l_fec->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfdfec";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfdfe_ctype.is_set || is_set(bfdfe_ctype.operation)) leaf_name_data.push_back(bfdfe_ctype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dummy")
    {
        if(dummy != nullptr)
        {
            children["dummy"] = dummy;
        }
        else
        {
            dummy = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy>();
            dummy->parent = this;
            children["dummy"] = dummy;
        }
        return children.at("dummy");
    }

    if(child_yang_name == "te-s2l-fec")
    {
        if(te_s2l_fec != nullptr)
        {
            children["te-s2l-fec"] = te_s2l_fec;
        }
        else
        {
            te_s2l_fec = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec>();
            te_s2l_fec->parent = this;
            children["te-s2l-fec"] = te_s2l_fec;
        }
        return children.at("te-s2l-fec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::get_children()
{
    if(children.find("dummy") == children.end())
    {
        if(dummy != nullptr)
        {
            children["dummy"] = dummy;
        }
    }

    if(children.find("te-s2l-fec") == children.end())
    {
        if(te_s2l_fec != nullptr)
        {
            children["te-s2l-fec"] = te_s2l_fec;
        }
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfdfe-ctype")
    {
        bfdfe_ctype = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::Dummy()
    :
    dummy{YType::str, "dummy"}
{
    yang_name = "dummy"; yang_parent_name = "bfdfec";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::~Dummy()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::has_data() const
{
    return dummy.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::has_operation() const
{
    return is_set(operation)
	|| is_set(dummy.operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/association-information/session-key/bfdfec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_children()
{
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dummy")
    {
        dummy = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::TeS2LFec()
    :
    s2l_fec_ctype{YType::enumeration, "s2l-fec-ctype"},
    s2l_fec_dest{YType::str, "s2l-fec-dest"},
    s2l_fec_extended_tunnel_id{YType::str, "s2l-fec-extended-tunnel-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    s2l_fec_source{YType::str, "s2l-fec-source"},
    s2l_fec_subgroup_id{YType::uint16, "s2l-fec-subgroup-id"},
    s2l_fec_subgroup_originator{YType::str, "s2l-fec-subgroup-originator"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    s2l_fec_vrf{YType::str, "s2l-fec-vrf"}
{
    yang_name = "te-s2l-fec"; yang_parent_name = "bfdfec";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::~TeS2LFec()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::has_data() const
{
    return s2l_fec_ctype.is_set
	|| s2l_fec_dest.is_set
	|| s2l_fec_extended_tunnel_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_p2mp_id.is_set
	|| s2l_fec_source.is_set
	|| s2l_fec_subgroup_id.is_set
	|| s2l_fec_subgroup_originator.is_set
	|| s2l_fec_tunnel_id.is_set
	|| s2l_fec_vrf.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::has_operation() const
{
    return is_set(operation)
	|| is_set(s2l_fec_ctype.operation)
	|| is_set(s2l_fec_dest.operation)
	|| is_set(s2l_fec_extended_tunnel_id.operation)
	|| is_set(s2l_fec_lsp_id.operation)
	|| is_set(s2l_fec_p2mp_id.operation)
	|| is_set(s2l_fec_source.operation)
	|| is_set(s2l_fec_subgroup_id.operation)
	|| is_set(s2l_fec_subgroup_originator.operation)
	|| is_set(s2l_fec_tunnel_id.operation)
	|| is_set(s2l_fec_vrf.operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-s2l-fec";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/association-information/session-key/bfdfec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_ctype.is_set || is_set(s2l_fec_ctype.operation)) leaf_name_data.push_back(s2l_fec_ctype.get_name_leafdata());
    if (s2l_fec_dest.is_set || is_set(s2l_fec_dest.operation)) leaf_name_data.push_back(s2l_fec_dest.get_name_leafdata());
    if (s2l_fec_extended_tunnel_id.is_set || is_set(s2l_fec_extended_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_extended_tunnel_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.operation)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.operation)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (s2l_fec_source.is_set || is_set(s2l_fec_source.operation)) leaf_name_data.push_back(s2l_fec_source.get_name_leafdata());
    if (s2l_fec_subgroup_id.is_set || is_set(s2l_fec_subgroup_id.operation)) leaf_name_data.push_back(s2l_fec_subgroup_id.get_name_leafdata());
    if (s2l_fec_subgroup_originator.is_set || is_set(s2l_fec_subgroup_originator.operation)) leaf_name_data.push_back(s2l_fec_subgroup_originator.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (s2l_fec_vrf.is_set || is_set(s2l_fec_vrf.operation)) leaf_name_data.push_back(s2l_fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_children()
{
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype = value;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest = value;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id = value;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source = value;
    }
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id = value;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator = value;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::TargetAddress::TargetAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "target-address"; yang_parent_name = "session-key";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::TargetAddress::~TargetAddress()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::TargetAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::TargetAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-address";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::TargetAddress::get_children()
{
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::SessionKey::TargetAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation::OwnerInformation()
    :
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    name{YType::str, "name"}
{
    yang_name = "owner-information"; yang_parent_name = "association-information";
}

Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation::has_data() const
{
    return adjusted_detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| detection_multiplier.is_set
	|| interval.is_set
	|| name.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(adjusted_detection_multiplier.operation)
	|| is_set(adjusted_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(interval.operation)
	|| is_set(name.operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-session-details/ipv4bf-do-mplste-head-session-detail/association-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.operation)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.operation)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation::get_children()
{
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSessionDetails::Ipv4BfDoMplsteHeadSessionDetail::AssociationInformation::OwnerInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Bfd::RelationBriefs::RelationBriefs()
{
    yang_name = "relation-briefs"; yang_parent_name = "bfd";
}

Bfd::RelationBriefs::~RelationBriefs()
{
}

bool Bfd::RelationBriefs::has_data() const
{
    for (std::size_t index=0; index<relation_brief.size(); index++)
    {
        if(relation_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::RelationBriefs::has_operation() const
{
    for (std::size_t index=0; index<relation_brief.size(); index++)
    {
        if(relation_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::RelationBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relation-briefs";

    return path_buffer.str();

}

EntityPath Bfd::RelationBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::RelationBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "relation-brief")
    {
        for(auto const & c : relation_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::RelationBriefs::RelationBrief>();
        c->parent = this;
        relation_brief.push_back(std::move(c));
        children[segment_path] = relation_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::RelationBriefs::get_children()
{
    for (auto const & c : relation_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::RelationBriefs::set_value(const std::string & value_path, std::string value)
{
}

Bfd::RelationBriefs::RelationBrief::RelationBrief()
    :
    destination_address{YType::str, "destination-address"},
    interface_name{YType::str, "interface-name"},
    state{YType::enumeration, "state"}
{
    yang_name = "relation-brief"; yang_parent_name = "relation-briefs";
}

Bfd::RelationBriefs::RelationBrief::~RelationBrief()
{
}

bool Bfd::RelationBriefs::RelationBrief::has_data() const
{
    for (std::size_t index=0; index<link_information.size(); index++)
    {
        if(link_information[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| interface_name.is_set
	|| state.is_set;
}

bool Bfd::RelationBriefs::RelationBrief::has_operation() const
{
    for (std::size_t index=0; index<link_information.size(); index++)
    {
        if(link_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(state.operation);
}

std::string Bfd::RelationBriefs::RelationBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relation-brief";

    return path_buffer.str();

}

EntityPath Bfd::RelationBriefs::RelationBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/relation-briefs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::RelationBriefs::RelationBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link-information")
    {
        for(auto const & c : link_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::RelationBriefs::RelationBrief::LinkInformation>();
        c->parent = this;
        link_information.push_back(std::move(c));
        children[segment_path] = link_information.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::RelationBriefs::RelationBrief::get_children()
{
    for (auto const & c : link_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::RelationBriefs::RelationBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Bfd::RelationBriefs::RelationBrief::LinkInformation::LinkInformation()
    :
    interface_name{YType::str, "interface-name"},
    state{YType::enumeration, "state"}
{
    yang_name = "link-information"; yang_parent_name = "relation-brief";
}

Bfd::RelationBriefs::RelationBrief::LinkInformation::~LinkInformation()
{
}

bool Bfd::RelationBriefs::RelationBrief::LinkInformation::has_data() const
{
    return interface_name.is_set
	|| state.is_set;
}

bool Bfd::RelationBriefs::RelationBrief::LinkInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(state.operation);
}

std::string Bfd::RelationBriefs::RelationBrief::LinkInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-information";

    return path_buffer.str();

}

EntityPath Bfd::RelationBriefs::RelationBrief::LinkInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/relation-briefs/relation-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::RelationBriefs::RelationBrief::LinkInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::RelationBriefs::RelationBrief::LinkInformation::get_children()
{
    return children;
}

void Bfd::RelationBriefs::RelationBrief::LinkInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Bfd::ClientBriefs::ClientBriefs()
{
    yang_name = "client-briefs"; yang_parent_name = "bfd";
}

Bfd::ClientBriefs::~ClientBriefs()
{
}

bool Bfd::ClientBriefs::has_data() const
{
    for (std::size_t index=0; index<client_brief.size(); index++)
    {
        if(client_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::ClientBriefs::has_operation() const
{
    for (std::size_t index=0; index<client_brief.size(); index++)
    {
        if(client_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::ClientBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-briefs";

    return path_buffer.str();

}

EntityPath Bfd::ClientBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::ClientBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "client-brief")
    {
        for(auto const & c : client_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::ClientBriefs::ClientBrief>();
        c->parent = this;
        client_brief.push_back(std::move(c));
        children[segment_path] = client_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::ClientBriefs::get_children()
{
    for (auto const & c : client_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::ClientBriefs::set_value(const std::string & value_path, std::string value)
{
}

Bfd::ClientBriefs::ClientBrief::ClientBrief()
    :
    name{YType::str, "name"},
    name_xr{YType::str, "name-xr"},
    node_id{YType::str, "node-id"},
    session_count{YType::uint32, "session-count"}
{
    yang_name = "client-brief"; yang_parent_name = "client-briefs";
}

Bfd::ClientBriefs::ClientBrief::~ClientBrief()
{
}

bool Bfd::ClientBriefs::ClientBrief::has_data() const
{
    return name.is_set
	|| name_xr.is_set
	|| node_id.is_set
	|| session_count.is_set;
}

bool Bfd::ClientBriefs::ClientBrief::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(name_xr.operation)
	|| is_set(node_id.operation)
	|| is_set(session_count.operation);
}

std::string Bfd::ClientBriefs::ClientBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-brief" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath Bfd::ClientBriefs::ClientBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/client-briefs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (name_xr.is_set || is_set(name_xr.operation)) leaf_name_data.push_back(name_xr.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.operation)) leaf_name_data.push_back(session_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::ClientBriefs::ClientBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::ClientBriefs::ClientBrief::get_children()
{
    return children;
}

void Bfd::ClientBriefs::ClientBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "name-xr")
    {
        name_xr = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "session-count")
    {
        session_count = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadMultiPaths::Ipv4BfDoMplsteHeadMultiPaths()
{
    yang_name = "ipv4bf-do-mplste-head-multi-paths"; yang_parent_name = "bfd";
}

Bfd::Ipv4BfDoMplsteHeadMultiPaths::~Ipv4BfDoMplsteHeadMultiPaths()
{
}

bool Bfd::Ipv4BfDoMplsteHeadMultiPaths::has_data() const
{
    for (std::size_t index=0; index<ipv4bf_do_mplste_head_multi_path.size(); index++)
    {
        if(ipv4bf_do_mplste_head_multi_path[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4BfDoMplsteHeadMultiPaths::has_operation() const
{
    for (std::size_t index=0; index<ipv4bf_do_mplste_head_multi_path.size(); index++)
    {
        if(ipv4bf_do_mplste_head_multi_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadMultiPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-head-multi-paths";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadMultiPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadMultiPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4bf-do-mplste-head-multi-path")
    {
        for(auto const & c : ipv4bf_do_mplste_head_multi_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv4BfDoMplsteHeadMultiPaths::Ipv4BfDoMplsteHeadMultiPath>();
        c->parent = this;
        ipv4bf_do_mplste_head_multi_path.push_back(std::move(c));
        children[segment_path] = ipv4bf_do_mplste_head_multi_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadMultiPaths::get_children()
{
    for (auto const & c : ipv4bf_do_mplste_head_multi_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteHeadMultiPaths::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4BfDoMplsteHeadMultiPaths::Ipv4BfDoMplsteHeadMultiPath::Ipv4BfDoMplsteHeadMultiPath()
    :
    fe_ctype{YType::int32, "fe-ctype"},
    fec_ctype{YType::int32, "fec-ctype"},
    fec_destination{YType::str, "fec-destination"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_subgroup_id{YType::int32, "fec-subgroup-id"},
    fec_subgroup_originator{YType::str, "fec-subgroup-originator"},
    fec_tunnel_id{YType::int32, "fec-tunnel-id"},
    feclspid{YType::int32, "feclspid"},
    fecp2mpid{YType::int32, "fecp2mpid"},
    incoming_label{YType::int32, "incoming-label"},
    incoming_label_xr{YType::uint32, "incoming-label-xr"},
    interface_name{YType::str, "interface-name"},
    local_discriminator{YType::uint32, "local-discriminator"},
    location{YType::str, "location"},
    node_id{YType::str, "node-id"},
    session_interface_name{YType::str, "session-interface-name"},
    session_subtype{YType::str, "session-subtype"},
    state{YType::enumeration, "state"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "ipv4bf-do-mplste-head-multi-path"; yang_parent_name = "ipv4bf-do-mplste-head-multi-paths";
}

Bfd::Ipv4BfDoMplsteHeadMultiPaths::Ipv4BfDoMplsteHeadMultiPath::~Ipv4BfDoMplsteHeadMultiPath()
{
}

bool Bfd::Ipv4BfDoMplsteHeadMultiPaths::Ipv4BfDoMplsteHeadMultiPath::has_data() const
{
    return fe_ctype.is_set
	|| fec_ctype.is_set
	|| fec_destination.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_subgroup_id.is_set
	|| fec_subgroup_originator.is_set
	|| fec_tunnel_id.is_set
	|| feclspid.is_set
	|| fecp2mpid.is_set
	|| incoming_label.is_set
	|| incoming_label_xr.is_set
	|| interface_name.is_set
	|| local_discriminator.is_set
	|| location.is_set
	|| node_id.is_set
	|| session_interface_name.is_set
	|| session_subtype.is_set
	|| state.is_set
	|| vrf_name.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadMultiPaths::Ipv4BfDoMplsteHeadMultiPath::has_operation() const
{
    return is_set(operation)
	|| is_set(fe_ctype.operation)
	|| is_set(fec_ctype.operation)
	|| is_set(fec_destination.operation)
	|| is_set(fec_extended_tunnel_id.operation)
	|| is_set(fec_source.operation)
	|| is_set(fec_subgroup_id.operation)
	|| is_set(fec_subgroup_originator.operation)
	|| is_set(fec_tunnel_id.operation)
	|| is_set(feclspid.operation)
	|| is_set(fecp2mpid.operation)
	|| is_set(incoming_label.operation)
	|| is_set(incoming_label_xr.operation)
	|| is_set(interface_name.operation)
	|| is_set(local_discriminator.operation)
	|| is_set(location.operation)
	|| is_set(node_id.operation)
	|| is_set(session_interface_name.operation)
	|| is_set(session_subtype.operation)
	|| is_set(state.operation)
	|| is_set(vrf_name.operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadMultiPaths::Ipv4BfDoMplsteHeadMultiPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-head-multi-path";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadMultiPaths::Ipv4BfDoMplsteHeadMultiPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-multi-paths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fe_ctype.is_set || is_set(fe_ctype.operation)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());
    if (fec_ctype.is_set || is_set(fec_ctype.operation)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination.is_set || is_set(fec_destination.operation)) leaf_name_data.push_back(fec_destination.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.operation)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.operation)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_subgroup_id.is_set || is_set(fec_subgroup_id.operation)) leaf_name_data.push_back(fec_subgroup_id.get_name_leafdata());
    if (fec_subgroup_originator.is_set || is_set(fec_subgroup_originator.operation)) leaf_name_data.push_back(fec_subgroup_originator.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.operation)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (feclspid.is_set || is_set(feclspid.operation)) leaf_name_data.push_back(feclspid.get_name_leafdata());
    if (fecp2mpid.is_set || is_set(fecp2mpid.operation)) leaf_name_data.push_back(fecp2mpid.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.operation)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (incoming_label_xr.is_set || is_set(incoming_label_xr.operation)) leaf_name_data.push_back(incoming_label_xr.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (session_interface_name.is_set || is_set(session_interface_name.operation)) leaf_name_data.push_back(session_interface_name.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.operation)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadMultiPaths::Ipv4BfDoMplsteHeadMultiPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadMultiPaths::Ipv4BfDoMplsteHeadMultiPath::get_children()
{
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadMultiPaths::Ipv4BfDoMplsteHeadMultiPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
    }
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
    }
    if(value_path == "fec-destination")
    {
        fec_destination = value;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
    }
    if(value_path == "fec-subgroup-id")
    {
        fec_subgroup_id = value;
    }
    if(value_path == "fec-subgroup-originator")
    {
        fec_subgroup_originator = value;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
    }
    if(value_path == "feclspid")
    {
        feclspid = value;
    }
    if(value_path == "fecp2mpid")
    {
        fecp2mpid = value;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
    }
    if(value_path == "incoming-label-xr")
    {
        incoming_label_xr = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "session-interface-name")
    {
        session_interface_name = value;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bfd::RelationDetails::RelationDetails()
{
    yang_name = "relation-details"; yang_parent_name = "bfd";
}

Bfd::RelationDetails::~RelationDetails()
{
}

bool Bfd::RelationDetails::has_data() const
{
    for (std::size_t index=0; index<relation_detail.size(); index++)
    {
        if(relation_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::RelationDetails::has_operation() const
{
    for (std::size_t index=0; index<relation_detail.size(); index++)
    {
        if(relation_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::RelationDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relation-details";

    return path_buffer.str();

}

EntityPath Bfd::RelationDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::RelationDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "relation-detail")
    {
        for(auto const & c : relation_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::RelationDetails::RelationDetail>();
        c->parent = this;
        relation_detail.push_back(std::move(c));
        children[segment_path] = relation_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::RelationDetails::get_children()
{
    for (auto const & c : relation_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::RelationDetails::set_value(const std::string & value_path, std::string value)
{
}

Bfd::RelationDetails::RelationDetail::RelationDetail()
    :
    destination_address{YType::str, "destination-address"},
    interface_name{YType::str, "interface-name"},
    local_discriminator{YType::uint32, "local-discriminator"},
    state{YType::enumeration, "state"}
{
    yang_name = "relation-detail"; yang_parent_name = "relation-details";
}

Bfd::RelationDetails::RelationDetail::~RelationDetail()
{
}

bool Bfd::RelationDetails::RelationDetail::has_data() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<link_information.size(); index++)
    {
        if(link_information[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| interface_name.is_set
	|| local_discriminator.is_set
	|| state.is_set;
}

bool Bfd::RelationDetails::RelationDetail::has_operation() const
{
    for (std::size_t index=0; index<association_information.size(); index++)
    {
        if(association_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<link_information.size(); index++)
    {
        if(link_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(local_discriminator.operation)
	|| is_set(state.operation);
}

std::string Bfd::RelationDetails::RelationDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relation-detail";

    return path_buffer.str();

}

EntityPath Bfd::RelationDetails::RelationDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/relation-details/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::RelationDetails::RelationDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "association-information")
    {
        for(auto const & c : association_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::RelationDetails::RelationDetail::AssociationInformation>();
        c->parent = this;
        association_information.push_back(std::move(c));
        children[segment_path] = association_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "link-information")
    {
        for(auto const & c : link_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::RelationDetails::RelationDetail::LinkInformation>();
        c->parent = this;
        link_information.push_back(std::move(c));
        children[segment_path] = link_information.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::RelationDetails::RelationDetail::get_children()
{
    for (auto const & c : association_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : link_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::RelationDetails::RelationDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Bfd::RelationDetails::RelationDetail::LinkInformation::LinkInformation()
    :
    interface_name{YType::str, "interface-name"},
    local_discriminator{YType::uint32, "local-discriminator"},
    state{YType::enumeration, "state"}
{
    yang_name = "link-information"; yang_parent_name = "relation-detail";
}

Bfd::RelationDetails::RelationDetail::LinkInformation::~LinkInformation()
{
}

bool Bfd::RelationDetails::RelationDetail::LinkInformation::has_data() const
{
    return interface_name.is_set
	|| local_discriminator.is_set
	|| state.is_set;
}

bool Bfd::RelationDetails::RelationDetail::LinkInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(local_discriminator.operation)
	|| is_set(state.operation);
}

std::string Bfd::RelationDetails::RelationDetail::LinkInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-information";

    return path_buffer.str();

}

EntityPath Bfd::RelationDetails::RelationDetail::LinkInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/relation-details/relation-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::RelationDetails::RelationDetail::LinkInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::RelationDetails::RelationDetail::LinkInformation::get_children()
{
    return children;
}

void Bfd::RelationDetails::RelationDetail::LinkInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::AssociationInformation()
    :
    local_discriminator{YType::uint32, "local-discriminator"},
    sessiontype{YType::enumeration, "sessiontype"}
    	,
    session_key(std::make_shared<Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey>())
{
    session_key->parent = this;
    children["session-key"] = session_key;

    yang_name = "association-information"; yang_parent_name = "relation-detail";
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::~AssociationInformation()
{
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::has_data() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_data())
            return true;
    }
    return local_discriminator.is_set
	|| sessiontype.is_set
	|| (session_key !=  nullptr && session_key->has_data());
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::has_operation() const
{
    for (std::size_t index=0; index<owner_information.size(); index++)
    {
        if(owner_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(local_discriminator.operation)
	|| is_set(sessiontype.operation)
	|| (session_key !=  nullptr && session_key->has_operation());
}

std::string Bfd::RelationDetails::RelationDetail::AssociationInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-information";

    return path_buffer.str();

}

EntityPath Bfd::RelationDetails::RelationDetail::AssociationInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/relation-details/relation-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (sessiontype.is_set || is_set(sessiontype.operation)) leaf_name_data.push_back(sessiontype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::RelationDetails::RelationDetail::AssociationInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "owner-information")
    {
        for(auto const & c : owner_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation>();
        c->parent = this;
        owner_information.push_back(std::move(c));
        children[segment_path] = owner_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "session-key")
    {
        if(session_key != nullptr)
        {
            children["session-key"] = session_key;
        }
        else
        {
            session_key = std::make_shared<Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey>();
            session_key->parent = this;
            children["session-key"] = session_key;
        }
        return children.at("session-key");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::RelationDetails::RelationDetail::AssociationInformation::get_children()
{
    for (auto const & c : owner_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("session-key") == children.end())
    {
        if(session_key != nullptr)
        {
            children["session-key"] = session_key;
        }
    }

    return children;
}

void Bfd::RelationDetails::RelationDetail::AssociationInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "sessiontype")
    {
        sessiontype = value;
    }
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::SessionKey()
    :
    incoming_label{YType::uint32, "incoming-label"},
    interface_name{YType::str, "interface-name"},
    sbfd_enabled{YType::int32, "sbfd-enabled"},
    sbfd_target_type{YType::uint32, "sbfd-target-type"},
    session_key_type{YType::uint32, "session-key-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    bfdfec(std::make_shared<Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec>())
	,ip_destination_address(std::make_shared<Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpDestinationAddress>())
	,ip_source_address(std::make_shared<Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpSourceAddress>())
	,target_address(std::make_shared<Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::TargetAddress>())
{
    bfdfec->parent = this;
    children["bfdfec"] = bfdfec;

    ip_destination_address->parent = this;
    children["ip-destination-address"] = ip_destination_address;

    ip_source_address->parent = this;
    children["ip-source-address"] = ip_source_address;

    target_address->parent = this;
    children["target-address"] = target_address;

    yang_name = "session-key"; yang_parent_name = "association-information";
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::~SessionKey()
{
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::has_data() const
{
    return incoming_label.is_set
	|| interface_name.is_set
	|| sbfd_enabled.is_set
	|| sbfd_target_type.is_set
	|| session_key_type.is_set
	|| vrf_name.is_set
	|| (bfdfec !=  nullptr && bfdfec->has_data())
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_data())
	|| (ip_source_address !=  nullptr && ip_source_address->has_data())
	|| (target_address !=  nullptr && target_address->has_data());
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::has_operation() const
{
    return is_set(operation)
	|| is_set(incoming_label.operation)
	|| is_set(interface_name.operation)
	|| is_set(sbfd_enabled.operation)
	|| is_set(sbfd_target_type.operation)
	|| is_set(session_key_type.operation)
	|| is_set(vrf_name.operation)
	|| (bfdfec !=  nullptr && bfdfec->has_operation())
	|| (ip_destination_address !=  nullptr && ip_destination_address->has_operation())
	|| (ip_source_address !=  nullptr && ip_source_address->has_operation())
	|| (target_address !=  nullptr && target_address->has_operation());
}

std::string Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-key";

    return path_buffer.str();

}

EntityPath Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/relation-details/relation-detail/association-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incoming_label.is_set || is_set(incoming_label.operation)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (sbfd_enabled.is_set || is_set(sbfd_enabled.operation)) leaf_name_data.push_back(sbfd_enabled.get_name_leafdata());
    if (sbfd_target_type.is_set || is_set(sbfd_target_type.operation)) leaf_name_data.push_back(sbfd_target_type.get_name_leafdata());
    if (session_key_type.is_set || is_set(session_key_type.operation)) leaf_name_data.push_back(session_key_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfdfec")
    {
        if(bfdfec != nullptr)
        {
            children["bfdfec"] = bfdfec;
        }
        else
        {
            bfdfec = std::make_shared<Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec>();
            bfdfec->parent = this;
            children["bfdfec"] = bfdfec;
        }
        return children.at("bfdfec");
    }

    if(child_yang_name == "ip-destination-address")
    {
        if(ip_destination_address != nullptr)
        {
            children["ip-destination-address"] = ip_destination_address;
        }
        else
        {
            ip_destination_address = std::make_shared<Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpDestinationAddress>();
            ip_destination_address->parent = this;
            children["ip-destination-address"] = ip_destination_address;
        }
        return children.at("ip-destination-address");
    }

    if(child_yang_name == "ip-source-address")
    {
        if(ip_source_address != nullptr)
        {
            children["ip-source-address"] = ip_source_address;
        }
        else
        {
            ip_source_address = std::make_shared<Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpSourceAddress>();
            ip_source_address->parent = this;
            children["ip-source-address"] = ip_source_address;
        }
        return children.at("ip-source-address");
    }

    if(child_yang_name == "target-address")
    {
        if(target_address != nullptr)
        {
            children["target-address"] = target_address;
        }
        else
        {
            target_address = std::make_shared<Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::TargetAddress>();
            target_address->parent = this;
            children["target-address"] = target_address;
        }
        return children.at("target-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::get_children()
{
    if(children.find("bfdfec") == children.end())
    {
        if(bfdfec != nullptr)
        {
            children["bfdfec"] = bfdfec;
        }
    }

    if(children.find("ip-destination-address") == children.end())
    {
        if(ip_destination_address != nullptr)
        {
            children["ip-destination-address"] = ip_destination_address;
        }
    }

    if(children.find("ip-source-address") == children.end())
    {
        if(ip_source_address != nullptr)
        {
            children["ip-source-address"] = ip_source_address;
        }
    }

    if(children.find("target-address") == children.end())
    {
        if(target_address != nullptr)
        {
            children["target-address"] = target_address;
        }
    }

    return children;
}

void Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "incoming-label")
    {
        incoming_label = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "sbfd-enabled")
    {
        sbfd_enabled = value;
    }
    if(value_path == "sbfd-target-type")
    {
        sbfd_target_type = value;
    }
    if(value_path == "session-key-type")
    {
        session_key_type = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpDestinationAddress::IpDestinationAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "ip-destination-address"; yang_parent_name = "session-key";
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpDestinationAddress::~IpDestinationAddress()
{
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpDestinationAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpDestinationAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-destination-address";

    return path_buffer.str();

}

EntityPath Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/relation-details/relation-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpDestinationAddress::get_children()
{
    return children;
}

void Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpDestinationAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpSourceAddress::IpSourceAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "ip-source-address"; yang_parent_name = "session-key";
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpSourceAddress::~IpSourceAddress()
{
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpSourceAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpSourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-source-address";

    return path_buffer.str();

}

EntityPath Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpSourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/relation-details/relation-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpSourceAddress::get_children()
{
    return children;
}

void Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::IpSourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::Bfdfec()
    :
    bfdfe_ctype{YType::enumeration, "bfdfe-ctype"}
    	,
    dummy(std::make_shared<Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::Dummy>())
	,te_s2l_fec(std::make_shared<Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec>())
{
    dummy->parent = this;
    children["dummy"] = dummy;

    te_s2l_fec->parent = this;
    children["te-s2l-fec"] = te_s2l_fec;

    yang_name = "bfdfec"; yang_parent_name = "session-key";
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::~Bfdfec()
{
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::has_data() const
{
    return bfdfe_ctype.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (te_s2l_fec !=  nullptr && te_s2l_fec->has_data());
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::has_operation() const
{
    return is_set(operation)
	|| is_set(bfdfe_ctype.operation)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (te_s2l_fec !=  nullptr && te_s2l_fec->has_operation());
}

std::string Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfdfec";

    return path_buffer.str();

}

EntityPath Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/relation-details/relation-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfdfe_ctype.is_set || is_set(bfdfe_ctype.operation)) leaf_name_data.push_back(bfdfe_ctype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dummy")
    {
        if(dummy != nullptr)
        {
            children["dummy"] = dummy;
        }
        else
        {
            dummy = std::make_shared<Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::Dummy>();
            dummy->parent = this;
            children["dummy"] = dummy;
        }
        return children.at("dummy");
    }

    if(child_yang_name == "te-s2l-fec")
    {
        if(te_s2l_fec != nullptr)
        {
            children["te-s2l-fec"] = te_s2l_fec;
        }
        else
        {
            te_s2l_fec = std::make_shared<Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec>();
            te_s2l_fec->parent = this;
            children["te-s2l-fec"] = te_s2l_fec;
        }
        return children.at("te-s2l-fec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::get_children()
{
    if(children.find("dummy") == children.end())
    {
        if(dummy != nullptr)
        {
            children["dummy"] = dummy;
        }
    }

    if(children.find("te-s2l-fec") == children.end())
    {
        if(te_s2l_fec != nullptr)
        {
            children["te-s2l-fec"] = te_s2l_fec;
        }
    }

    return children;
}

void Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfdfe-ctype")
    {
        bfdfe_ctype = value;
    }
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::Dummy()
    :
    dummy{YType::str, "dummy"}
{
    yang_name = "dummy"; yang_parent_name = "bfdfec";
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::~Dummy()
{
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::has_data() const
{
    return dummy.is_set;
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::has_operation() const
{
    return is_set(operation)
	|| is_set(dummy.operation);
}

std::string Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";

    return path_buffer.str();

}

EntityPath Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/relation-details/relation-detail/association-information/session-key/bfdfec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::get_children()
{
    return children;
}

void Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::Dummy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dummy")
    {
        dummy = value;
    }
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::TeS2LFec()
    :
    s2l_fec_ctype{YType::enumeration, "s2l-fec-ctype"},
    s2l_fec_dest{YType::str, "s2l-fec-dest"},
    s2l_fec_extended_tunnel_id{YType::str, "s2l-fec-extended-tunnel-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    s2l_fec_source{YType::str, "s2l-fec-source"},
    s2l_fec_subgroup_id{YType::uint16, "s2l-fec-subgroup-id"},
    s2l_fec_subgroup_originator{YType::str, "s2l-fec-subgroup-originator"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    s2l_fec_vrf{YType::str, "s2l-fec-vrf"}
{
    yang_name = "te-s2l-fec"; yang_parent_name = "bfdfec";
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::~TeS2LFec()
{
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::has_data() const
{
    return s2l_fec_ctype.is_set
	|| s2l_fec_dest.is_set
	|| s2l_fec_extended_tunnel_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_p2mp_id.is_set
	|| s2l_fec_source.is_set
	|| s2l_fec_subgroup_id.is_set
	|| s2l_fec_subgroup_originator.is_set
	|| s2l_fec_tunnel_id.is_set
	|| s2l_fec_vrf.is_set;
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::has_operation() const
{
    return is_set(operation)
	|| is_set(s2l_fec_ctype.operation)
	|| is_set(s2l_fec_dest.operation)
	|| is_set(s2l_fec_extended_tunnel_id.operation)
	|| is_set(s2l_fec_lsp_id.operation)
	|| is_set(s2l_fec_p2mp_id.operation)
	|| is_set(s2l_fec_source.operation)
	|| is_set(s2l_fec_subgroup_id.operation)
	|| is_set(s2l_fec_subgroup_originator.operation)
	|| is_set(s2l_fec_tunnel_id.operation)
	|| is_set(s2l_fec_vrf.operation);
}

std::string Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-s2l-fec";

    return path_buffer.str();

}

EntityPath Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/relation-details/relation-detail/association-information/session-key/bfdfec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_ctype.is_set || is_set(s2l_fec_ctype.operation)) leaf_name_data.push_back(s2l_fec_ctype.get_name_leafdata());
    if (s2l_fec_dest.is_set || is_set(s2l_fec_dest.operation)) leaf_name_data.push_back(s2l_fec_dest.get_name_leafdata());
    if (s2l_fec_extended_tunnel_id.is_set || is_set(s2l_fec_extended_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_extended_tunnel_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.operation)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.operation)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (s2l_fec_source.is_set || is_set(s2l_fec_source.operation)) leaf_name_data.push_back(s2l_fec_source.get_name_leafdata());
    if (s2l_fec_subgroup_id.is_set || is_set(s2l_fec_subgroup_id.operation)) leaf_name_data.push_back(s2l_fec_subgroup_id.get_name_leafdata());
    if (s2l_fec_subgroup_originator.is_set || is_set(s2l_fec_subgroup_originator.operation)) leaf_name_data.push_back(s2l_fec_subgroup_originator.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (s2l_fec_vrf.is_set || is_set(s2l_fec_vrf.operation)) leaf_name_data.push_back(s2l_fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::get_children()
{
    return children;
}

void Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::Bfdfec::TeS2LFec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype = value;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest = value;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id = value;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source = value;
    }
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id = value;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator = value;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf = value;
    }
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::TargetAddress::TargetAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "target-address"; yang_parent_name = "session-key";
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::TargetAddress::~TargetAddress()
{
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::TargetAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::TargetAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::TargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-address";

    return path_buffer.str();

}

EntityPath Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::TargetAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/relation-details/relation-detail/association-information/session-key/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::TargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::TargetAddress::get_children()
{
    return children;
}

void Bfd::RelationDetails::RelationDetail::AssociationInformation::SessionKey::TargetAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::OwnerInformation()
    :
    adjusted_detection_multiplier{YType::uint32, "adjusted-detection-multiplier"},
    adjusted_interval{YType::uint32, "adjusted-interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    interval{YType::uint32, "interval"},
    name{YType::str, "name"}
{
    yang_name = "owner-information"; yang_parent_name = "association-information";
}

Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::~OwnerInformation()
{
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::has_data() const
{
    return adjusted_detection_multiplier.is_set
	|| adjusted_interval.is_set
	|| detection_multiplier.is_set
	|| interval.is_set
	|| name.is_set;
}

bool Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(adjusted_detection_multiplier.operation)
	|| is_set(adjusted_interval.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(interval.operation)
	|| is_set(name.operation);
}

std::string Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "owner-information";

    return path_buffer.str();

}

EntityPath Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/relation-details/relation-detail/association-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjusted_detection_multiplier.is_set || is_set(adjusted_detection_multiplier.operation)) leaf_name_data.push_back(adjusted_detection_multiplier.get_name_leafdata());
    if (adjusted_interval.is_set || is_set(adjusted_interval.operation)) leaf_name_data.push_back(adjusted_interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::get_children()
{
    return children;
}

void Bfd::RelationDetails::RelationDetail::AssociationInformation::OwnerInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjusted-detection-multiplier")
    {
        adjusted_detection_multiplier = value;
    }
    if(value_path == "adjusted-interval")
    {
        adjusted_interval = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailCounters()
    :
    ipv4bf_do_mplste_tail_packet_counters(std::make_shared<Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters>())
{
    ipv4bf_do_mplste_tail_packet_counters->parent = this;
    children["ipv4bf-do-mplste-tail-packet-counters"] = ipv4bf_do_mplste_tail_packet_counters;

    yang_name = "ipv4bf-do-mplste-tail-counters"; yang_parent_name = "bfd";
}

Bfd::Ipv4BfDoMplsteTailCounters::~Ipv4BfDoMplsteTailCounters()
{
}

bool Bfd::Ipv4BfDoMplsteTailCounters::has_data() const
{
    return (ipv4bf_do_mplste_tail_packet_counters !=  nullptr && ipv4bf_do_mplste_tail_packet_counters->has_data());
}

bool Bfd::Ipv4BfDoMplsteTailCounters::has_operation() const
{
    return is_set(operation)
	|| (ipv4bf_do_mplste_tail_packet_counters !=  nullptr && ipv4bf_do_mplste_tail_packet_counters->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteTailCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-tail-counters";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteTailCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4bf-do-mplste-tail-packet-counters")
    {
        if(ipv4bf_do_mplste_tail_packet_counters != nullptr)
        {
            children["ipv4bf-do-mplste-tail-packet-counters"] = ipv4bf_do_mplste_tail_packet_counters;
        }
        else
        {
            ipv4bf_do_mplste_tail_packet_counters = std::make_shared<Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters>();
            ipv4bf_do_mplste_tail_packet_counters->parent = this;
            children["ipv4bf-do-mplste-tail-packet-counters"] = ipv4bf_do_mplste_tail_packet_counters;
        }
        return children.at("ipv4bf-do-mplste-tail-packet-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteTailCounters::get_children()
{
    if(children.find("ipv4bf-do-mplste-tail-packet-counters") == children.end())
    {
        if(ipv4bf_do_mplste_tail_packet_counters != nullptr)
        {
            children["ipv4bf-do-mplste-tail-packet-counters"] = ipv4bf_do_mplste_tail_packet_counters;
        }
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteTailCounters::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters::Ipv4BfDoMplsteTailPacketCounters()
{
    yang_name = "ipv4bf-do-mplste-tail-packet-counters"; yang_parent_name = "ipv4bf-do-mplste-tail-counters";
}

Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters::~Ipv4BfDoMplsteTailPacketCounters()
{
}

bool Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters::has_data() const
{
    for (std::size_t index=0; index<ipv4bf_do_mplste_tail_packet_counter.size(); index++)
    {
        if(ipv4bf_do_mplste_tail_packet_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters::has_operation() const
{
    for (std::size_t index=0; index<ipv4bf_do_mplste_tail_packet_counter.size(); index++)
    {
        if(ipv4bf_do_mplste_tail_packet_counter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-tail-packet-counters";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4bf-do-mplste-tail-packet-counter")
    {
        for(auto const & c : ipv4bf_do_mplste_tail_packet_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters::Ipv4BfDoMplsteTailPacketCounter>();
        c->parent = this;
        ipv4bf_do_mplste_tail_packet_counter.push_back(std::move(c));
        children[segment_path] = ipv4bf_do_mplste_tail_packet_counter.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters::get_children()
{
    for (auto const & c : ipv4bf_do_mplste_tail_packet_counter)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters::Ipv4BfDoMplsteTailPacketCounter::Ipv4BfDoMplsteTailPacketCounter()
    :
    display_type{YType::enumeration, "display-type"},
    echo_receive_count{YType::uint32, "echo-receive-count"},
    echo_transmit_count{YType::uint32, "echo-transmit-count"},
    fe_ctype{YType::int32, "fe-ctype"},
    fec_ctype{YType::int32, "fec-ctype"},
    fec_destination{YType::str, "fec-destination"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_subgroup_id{YType::int32, "fec-subgroup-id"},
    fec_subgroup_originator{YType::str, "fec-subgroup-originator"},
    fec_tunnel_id{YType::int32, "fec-tunnel-id"},
    feclspid{YType::int32, "feclspid"},
    fecp2mpid{YType::int32, "fecp2mpid"},
    hello_receive_count{YType::uint32, "hello-receive-count"},
    hello_transmit_count{YType::uint32, "hello-transmit-count"},
    incoming_label{YType::int32, "incoming-label"},
    location{YType::str, "location"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "ipv4bf-do-mplste-tail-packet-counter"; yang_parent_name = "ipv4bf-do-mplste-tail-packet-counters";
}

Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters::Ipv4BfDoMplsteTailPacketCounter::~Ipv4BfDoMplsteTailPacketCounter()
{
}

bool Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters::Ipv4BfDoMplsteTailPacketCounter::has_data() const
{
    return display_type.is_set
	|| echo_receive_count.is_set
	|| echo_transmit_count.is_set
	|| fe_ctype.is_set
	|| fec_ctype.is_set
	|| fec_destination.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_subgroup_id.is_set
	|| fec_subgroup_originator.is_set
	|| fec_tunnel_id.is_set
	|| feclspid.is_set
	|| fecp2mpid.is_set
	|| hello_receive_count.is_set
	|| hello_transmit_count.is_set
	|| incoming_label.is_set
	|| location.is_set
	|| vrf_name.is_set;
}

bool Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters::Ipv4BfDoMplsteTailPacketCounter::has_operation() const
{
    return is_set(operation)
	|| is_set(display_type.operation)
	|| is_set(echo_receive_count.operation)
	|| is_set(echo_transmit_count.operation)
	|| is_set(fe_ctype.operation)
	|| is_set(fec_ctype.operation)
	|| is_set(fec_destination.operation)
	|| is_set(fec_extended_tunnel_id.operation)
	|| is_set(fec_source.operation)
	|| is_set(fec_subgroup_id.operation)
	|| is_set(fec_subgroup_originator.operation)
	|| is_set(fec_tunnel_id.operation)
	|| is_set(feclspid.operation)
	|| is_set(fecp2mpid.operation)
	|| is_set(hello_receive_count.operation)
	|| is_set(hello_transmit_count.operation)
	|| is_set(incoming_label.operation)
	|| is_set(location.operation)
	|| is_set(vrf_name.operation);
}

std::string Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters::Ipv4BfDoMplsteTailPacketCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-tail-packet-counter";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters::Ipv4BfDoMplsteTailPacketCounter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-counters/ipv4bf-do-mplste-tail-packet-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (display_type.is_set || is_set(display_type.operation)) leaf_name_data.push_back(display_type.get_name_leafdata());
    if (echo_receive_count.is_set || is_set(echo_receive_count.operation)) leaf_name_data.push_back(echo_receive_count.get_name_leafdata());
    if (echo_transmit_count.is_set || is_set(echo_transmit_count.operation)) leaf_name_data.push_back(echo_transmit_count.get_name_leafdata());
    if (fe_ctype.is_set || is_set(fe_ctype.operation)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());
    if (fec_ctype.is_set || is_set(fec_ctype.operation)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination.is_set || is_set(fec_destination.operation)) leaf_name_data.push_back(fec_destination.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.operation)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.operation)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_subgroup_id.is_set || is_set(fec_subgroup_id.operation)) leaf_name_data.push_back(fec_subgroup_id.get_name_leafdata());
    if (fec_subgroup_originator.is_set || is_set(fec_subgroup_originator.operation)) leaf_name_data.push_back(fec_subgroup_originator.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.operation)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (feclspid.is_set || is_set(feclspid.operation)) leaf_name_data.push_back(feclspid.get_name_leafdata());
    if (fecp2mpid.is_set || is_set(fecp2mpid.operation)) leaf_name_data.push_back(fecp2mpid.get_name_leafdata());
    if (hello_receive_count.is_set || is_set(hello_receive_count.operation)) leaf_name_data.push_back(hello_receive_count.get_name_leafdata());
    if (hello_transmit_count.is_set || is_set(hello_transmit_count.operation)) leaf_name_data.push_back(hello_transmit_count.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.operation)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters::Ipv4BfDoMplsteTailPacketCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters::Ipv4BfDoMplsteTailPacketCounter::get_children()
{
    return children;
}

void Bfd::Ipv4BfDoMplsteTailCounters::Ipv4BfDoMplsteTailPacketCounters::Ipv4BfDoMplsteTailPacketCounter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "display-type")
    {
        display_type = value;
    }
    if(value_path == "echo-receive-count")
    {
        echo_receive_count = value;
    }
    if(value_path == "echo-transmit-count")
    {
        echo_transmit_count = value;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
    }
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
    }
    if(value_path == "fec-destination")
    {
        fec_destination = value;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
    }
    if(value_path == "fec-subgroup-id")
    {
        fec_subgroup_id = value;
    }
    if(value_path == "fec-subgroup-originator")
    {
        fec_subgroup_originator = value;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
    }
    if(value_path == "feclspid")
    {
        feclspid = value;
    }
    if(value_path == "fecp2mpid")
    {
        fecp2mpid = value;
    }
    if(value_path == "hello-receive-count")
    {
        hello_receive_count = value;
    }
    if(value_path == "hello-transmit-count")
    {
        hello_transmit_count = value;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBriefs()
{
    yang_name = "ipv6-single-hop-session-briefs"; yang_parent_name = "bfd";
}

Bfd::Ipv6SingleHopSessionBriefs::~Ipv6SingleHopSessionBriefs()
{
}

bool Bfd::Ipv6SingleHopSessionBriefs::has_data() const
{
    for (std::size_t index=0; index<ipv6_single_hop_session_brief.size(); index++)
    {
        if(ipv6_single_hop_session_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv6SingleHopSessionBriefs::has_operation() const
{
    for (std::size_t index=0; index<ipv6_single_hop_session_brief.size(); index++)
    {
        if(ipv6_single_hop_session_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv6SingleHopSessionBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-session-briefs";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-single-hop-session-brief")
    {
        for(auto const & c : ipv6_single_hop_session_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief>();
        c->parent = this;
        ipv6_single_hop_session_brief.push_back(std::move(c));
        children[segment_path] = ipv6_single_hop_session_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionBriefs::get_children()
{
    for (auto const & c : ipv6_single_hop_session_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionBriefs::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::Ipv6SingleHopSessionBrief()
    :
    destination_address{YType::str, "destination-address"},
    interface_name{YType::str, "interface-name"},
    location{YType::str, "location"},
    node_id{YType::str, "node-id"},
    session_flags{YType::uint32, "session-flags"},
    session_subtype{YType::str, "session-subtype"},
    session_type{YType::enumeration, "session-type"},
    state{YType::enumeration, "state"}
    	,
    status_brief_information(std::make_shared<Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation>())
{
    status_brief_information->parent = this;
    children["status-brief-information"] = status_brief_information;

    yang_name = "ipv6-single-hop-session-brief"; yang_parent_name = "ipv6-single-hop-session-briefs";
}

Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::~Ipv6SingleHopSessionBrief()
{
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::has_data() const
{
    return destination_address.is_set
	|| interface_name.is_set
	|| location.is_set
	|| node_id.is_set
	|| session_flags.is_set
	|| session_subtype.is_set
	|| session_type.is_set
	|| state.is_set
	|| (status_brief_information !=  nullptr && status_brief_information->has_data());
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(location.operation)
	|| is_set(node_id.operation)
	|| is_set(session_flags.operation)
	|| is_set(session_subtype.operation)
	|| is_set(session_type.operation)
	|| is_set(state.operation)
	|| (status_brief_information !=  nullptr && status_brief_information->has_operation());
}

std::string Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-single-hop-session-brief";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-briefs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (session_flags.is_set || is_set(session_flags.operation)) leaf_name_data.push_back(session_flags.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.operation)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "status-brief-information")
    {
        if(status_brief_information != nullptr)
        {
            children["status-brief-information"] = status_brief_information;
        }
        else
        {
            status_brief_information = std::make_shared<Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation>();
            status_brief_information->parent = this;
            children["status-brief-information"] = status_brief_information;
        }
        return children.at("status-brief-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::get_children()
{
    if(children.find("status-brief-information") == children.end())
    {
        if(status_brief_information != nullptr)
        {
            children["status-brief-information"] = status_brief_information;
        }
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "session-flags")
    {
        session_flags = value;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
    }
    if(value_path == "session-type")
    {
        session_type = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::StatusBriefInformation()
    :
    async_interval_multiplier(std::make_shared<Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>())
	,echo_interval_multiplier(std::make_shared<Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>())
{
    async_interval_multiplier->parent = this;
    children["async-interval-multiplier"] = async_interval_multiplier;

    echo_interval_multiplier->parent = this;
    children["echo-interval-multiplier"] = echo_interval_multiplier;

    yang_name = "status-brief-information"; yang_parent_name = "ipv6-single-hop-session-brief";
}

Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::~StatusBriefInformation()
{
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::has_data() const
{
    return (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_data())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_data());
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::has_operation() const
{
    return is_set(operation)
	|| (async_interval_multiplier !=  nullptr && async_interval_multiplier->has_operation())
	|| (echo_interval_multiplier !=  nullptr && echo_interval_multiplier->has_operation());
}

std::string Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-brief-information";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-briefs/ipv6-single-hop-session-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "async-interval-multiplier")
    {
        if(async_interval_multiplier != nullptr)
        {
            children["async-interval-multiplier"] = async_interval_multiplier;
        }
        else
        {
            async_interval_multiplier = std::make_shared<Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier>();
            async_interval_multiplier->parent = this;
            children["async-interval-multiplier"] = async_interval_multiplier;
        }
        return children.at("async-interval-multiplier");
    }

    if(child_yang_name == "echo-interval-multiplier")
    {
        if(echo_interval_multiplier != nullptr)
        {
            children["echo-interval-multiplier"] = echo_interval_multiplier;
        }
        else
        {
            echo_interval_multiplier = std::make_shared<Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier>();
            echo_interval_multiplier->parent = this;
            children["echo-interval-multiplier"] = echo_interval_multiplier;
        }
        return children.at("echo-interval-multiplier");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::get_children()
{
    if(children.find("async-interval-multiplier") == children.end())
    {
        if(async_interval_multiplier != nullptr)
        {
            children["async-interval-multiplier"] = async_interval_multiplier;
        }
    }

    if(children.find("echo-interval-multiplier") == children.end())
    {
        if(echo_interval_multiplier != nullptr)
        {
            children["echo-interval-multiplier"] = echo_interval_multiplier;
        }
    }

    return children;
}

void Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::AsyncIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_local_transmit_interval{YType::uint32, "negotiated-local-transmit-interval"},
    negotiated_remote_transmit_interval{YType::uint32, "negotiated-remote-transmit-interval"}
{
    yang_name = "async-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::~AsyncIntervalMultiplier()
{
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_local_transmit_interval.is_set
	|| negotiated_remote_transmit_interval.is_set;
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_local_transmit_interval.operation)
	|| is_set(negotiated_remote_transmit_interval.operation);
}

std::string Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-interval-multiplier";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-briefs/ipv6-single-hop-session-brief/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_local_transmit_interval.is_set || is_set(negotiated_local_transmit_interval.operation)) leaf_name_data.push_back(negotiated_local_transmit_interval.get_name_leafdata());
    if (negotiated_remote_transmit_interval.is_set || is_set(negotiated_remote_transmit_interval.operation)) leaf_name_data.push_back(negotiated_remote_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::get_children()
{
    return children;
}

void Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::AsyncIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-local-transmit-interval")
    {
        negotiated_local_transmit_interval = value;
    }
    if(value_path == "negotiated-remote-transmit-interval")
    {
        negotiated_remote_transmit_interval = value;
    }
}

Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::EchoIntervalMultiplier()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_time{YType::uint32, "detection-time"},
    negotiated_transmit_interval{YType::uint32, "negotiated-transmit-interval"}
{
    yang_name = "echo-interval-multiplier"; yang_parent_name = "status-brief-information";
}

Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::~EchoIntervalMultiplier()
{
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_data() const
{
    return detection_multiplier.is_set
	|| detection_time.is_set
	|| negotiated_transmit_interval.is_set;
}

bool Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_time.operation)
	|| is_set(negotiated_transmit_interval.operation);
}

std::string Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-interval-multiplier";

    return path_buffer.str();

}

EntityPath Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv6-single-hop-session-briefs/ipv6-single-hop-session-brief/status-brief-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_time.is_set || is_set(detection_time.operation)) leaf_name_data.push_back(detection_time.get_name_leafdata());
    if (negotiated_transmit_interval.is_set || is_set(negotiated_transmit_interval.operation)) leaf_name_data.push_back(negotiated_transmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::get_children()
{
    return children;
}

void Bfd::Ipv6SingleHopSessionBriefs::Ipv6SingleHopSessionBrief::StatusBriefInformation::EchoIntervalMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-time")
    {
        detection_time = value;
    }
    if(value_path == "negotiated-transmit-interval")
    {
        negotiated_transmit_interval = value;
    }
}

Bfd::Ipv4BfDoMplsteTailMultiPaths::Ipv4BfDoMplsteTailMultiPaths()
{
    yang_name = "ipv4bf-do-mplste-tail-multi-paths"; yang_parent_name = "bfd";
}

Bfd::Ipv4BfDoMplsteTailMultiPaths::~Ipv4BfDoMplsteTailMultiPaths()
{
}

bool Bfd::Ipv4BfDoMplsteTailMultiPaths::has_data() const
{
    for (std::size_t index=0; index<ipv4bf_do_mplste_tail_multi_path.size(); index++)
    {
        if(ipv4bf_do_mplste_tail_multi_path[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4BfDoMplsteTailMultiPaths::has_operation() const
{
    for (std::size_t index=0; index<ipv4bf_do_mplste_tail_multi_path.size(); index++)
    {
        if(ipv4bf_do_mplste_tail_multi_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv4BfDoMplsteTailMultiPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-tail-multi-paths";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteTailMultiPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailMultiPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4bf-do-mplste-tail-multi-path")
    {
        for(auto const & c : ipv4bf_do_mplste_tail_multi_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv4BfDoMplsteTailMultiPaths::Ipv4BfDoMplsteTailMultiPath>();
        c->parent = this;
        ipv4bf_do_mplste_tail_multi_path.push_back(std::move(c));
        children[segment_path] = ipv4bf_do_mplste_tail_multi_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteTailMultiPaths::get_children()
{
    for (auto const & c : ipv4bf_do_mplste_tail_multi_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteTailMultiPaths::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4BfDoMplsteTailMultiPaths::Ipv4BfDoMplsteTailMultiPath::Ipv4BfDoMplsteTailMultiPath()
    :
    fe_ctype{YType::int32, "fe-ctype"},
    fec_ctype{YType::int32, "fec-ctype"},
    fec_destination{YType::str, "fec-destination"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_subgroup_id{YType::int32, "fec-subgroup-id"},
    fec_subgroup_originator{YType::str, "fec-subgroup-originator"},
    fec_tunnel_id{YType::int32, "fec-tunnel-id"},
    feclspid{YType::int32, "feclspid"},
    fecp2mpid{YType::int32, "fecp2mpid"},
    incoming_label{YType::int32, "incoming-label"},
    incoming_label_xr{YType::uint32, "incoming-label-xr"},
    local_discriminator{YType::uint32, "local-discriminator"},
    location{YType::str, "location"},
    node_id{YType::str, "node-id"},
    session_interface_name{YType::str, "session-interface-name"},
    session_subtype{YType::str, "session-subtype"},
    state{YType::enumeration, "state"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "ipv4bf-do-mplste-tail-multi-path"; yang_parent_name = "ipv4bf-do-mplste-tail-multi-paths";
}

Bfd::Ipv4BfDoMplsteTailMultiPaths::Ipv4BfDoMplsteTailMultiPath::~Ipv4BfDoMplsteTailMultiPath()
{
}

bool Bfd::Ipv4BfDoMplsteTailMultiPaths::Ipv4BfDoMplsteTailMultiPath::has_data() const
{
    return fe_ctype.is_set
	|| fec_ctype.is_set
	|| fec_destination.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_subgroup_id.is_set
	|| fec_subgroup_originator.is_set
	|| fec_tunnel_id.is_set
	|| feclspid.is_set
	|| fecp2mpid.is_set
	|| incoming_label.is_set
	|| incoming_label_xr.is_set
	|| local_discriminator.is_set
	|| location.is_set
	|| node_id.is_set
	|| session_interface_name.is_set
	|| session_subtype.is_set
	|| state.is_set
	|| vrf_name.is_set;
}

bool Bfd::Ipv4BfDoMplsteTailMultiPaths::Ipv4BfDoMplsteTailMultiPath::has_operation() const
{
    return is_set(operation)
	|| is_set(fe_ctype.operation)
	|| is_set(fec_ctype.operation)
	|| is_set(fec_destination.operation)
	|| is_set(fec_extended_tunnel_id.operation)
	|| is_set(fec_source.operation)
	|| is_set(fec_subgroup_id.operation)
	|| is_set(fec_subgroup_originator.operation)
	|| is_set(fec_tunnel_id.operation)
	|| is_set(feclspid.operation)
	|| is_set(fecp2mpid.operation)
	|| is_set(incoming_label.operation)
	|| is_set(incoming_label_xr.operation)
	|| is_set(local_discriminator.operation)
	|| is_set(location.operation)
	|| is_set(node_id.operation)
	|| is_set(session_interface_name.operation)
	|| is_set(session_subtype.operation)
	|| is_set(state.operation)
	|| is_set(vrf_name.operation);
}

std::string Bfd::Ipv4BfDoMplsteTailMultiPaths::Ipv4BfDoMplsteTailMultiPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-tail-multi-path";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteTailMultiPaths::Ipv4BfDoMplsteTailMultiPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-tail-multi-paths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fe_ctype.is_set || is_set(fe_ctype.operation)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());
    if (fec_ctype.is_set || is_set(fec_ctype.operation)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination.is_set || is_set(fec_destination.operation)) leaf_name_data.push_back(fec_destination.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.operation)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.operation)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_subgroup_id.is_set || is_set(fec_subgroup_id.operation)) leaf_name_data.push_back(fec_subgroup_id.get_name_leafdata());
    if (fec_subgroup_originator.is_set || is_set(fec_subgroup_originator.operation)) leaf_name_data.push_back(fec_subgroup_originator.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.operation)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (feclspid.is_set || is_set(feclspid.operation)) leaf_name_data.push_back(feclspid.get_name_leafdata());
    if (fecp2mpid.is_set || is_set(fecp2mpid.operation)) leaf_name_data.push_back(fecp2mpid.get_name_leafdata());
    if (incoming_label.is_set || is_set(incoming_label.operation)) leaf_name_data.push_back(incoming_label.get_name_leafdata());
    if (incoming_label_xr.is_set || is_set(incoming_label_xr.operation)) leaf_name_data.push_back(incoming_label_xr.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (session_interface_name.is_set || is_set(session_interface_name.operation)) leaf_name_data.push_back(session_interface_name.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.operation)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteTailMultiPaths::Ipv4BfDoMplsteTailMultiPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteTailMultiPaths::Ipv4BfDoMplsteTailMultiPath::get_children()
{
    return children;
}

void Bfd::Ipv4BfDoMplsteTailMultiPaths::Ipv4BfDoMplsteTailMultiPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
    }
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
    }
    if(value_path == "fec-destination")
    {
        fec_destination = value;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
    }
    if(value_path == "fec-subgroup-id")
    {
        fec_subgroup_id = value;
    }
    if(value_path == "fec-subgroup-originator")
    {
        fec_subgroup_originator = value;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
    }
    if(value_path == "feclspid")
    {
        feclspid = value;
    }
    if(value_path == "fecp2mpid")
    {
        fecp2mpid = value;
    }
    if(value_path == "incoming-label")
    {
        incoming_label = value;
    }
    if(value_path == "incoming-label-xr")
    {
        incoming_label_xr = value;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "session-interface-name")
    {
        session_interface_name = value;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPaths()
{
    yang_name = "ipv4-multi-hop-multi-paths"; yang_parent_name = "bfd";
}

Bfd::Ipv4MultiHopMultiPaths::~Ipv4MultiHopMultiPaths()
{
}

bool Bfd::Ipv4MultiHopMultiPaths::has_data() const
{
    for (std::size_t index=0; index<ipv4_multi_hop_multi_path.size(); index++)
    {
        if(ipv4_multi_hop_multi_path[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Ipv4MultiHopMultiPaths::has_operation() const
{
    for (std::size_t index=0; index<ipv4_multi_hop_multi_path.size(); index++)
    {
        if(ipv4_multi_hop_multi_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bfd::Ipv4MultiHopMultiPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-multi-hop-multi-paths";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4MultiHopMultiPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopMultiPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-multi-hop-multi-path")
    {
        for(auto const & c : ipv4_multi_hop_multi_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath>();
        c->parent = this;
        ipv4_multi_hop_multi_path.push_back(std::move(c));
        children[segment_path] = ipv4_multi_hop_multi_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4MultiHopMultiPaths::get_children()
{
    for (auto const & c : ipv4_multi_hop_multi_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bfd::Ipv4MultiHopMultiPaths::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath::Ipv4MultiHopMultiPath()
    :
    destination_address{YType::str, "destination-address"},
    incoming_label_xr{YType::uint32, "incoming-label-xr"},
    local_discriminator{YType::uint32, "local-discriminator"},
    location{YType::str, "location"},
    node_id{YType::str, "node-id"},
    session_interface_name{YType::str, "session-interface-name"},
    session_subtype{YType::str, "session-subtype"},
    source_address{YType::str, "source-address"},
    state{YType::enumeration, "state"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "ipv4-multi-hop-multi-path"; yang_parent_name = "ipv4-multi-hop-multi-paths";
}

Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath::~Ipv4MultiHopMultiPath()
{
}

bool Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath::has_data() const
{
    return destination_address.is_set
	|| incoming_label_xr.is_set
	|| local_discriminator.is_set
	|| location.is_set
	|| node_id.is_set
	|| session_interface_name.is_set
	|| session_subtype.is_set
	|| source_address.is_set
	|| state.is_set
	|| vrf_name.is_set;
}

bool Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(incoming_label_xr.operation)
	|| is_set(local_discriminator.operation)
	|| is_set(location.operation)
	|| is_set(node_id.operation)
	|| is_set(session_interface_name.operation)
	|| is_set(session_subtype.operation)
	|| is_set(source_address.operation)
	|| is_set(state.operation)
	|| is_set(vrf_name.operation);
}

std::string Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-multi-hop-multi-path";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4-multi-hop-multi-paths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (incoming_label_xr.is_set || is_set(incoming_label_xr.operation)) leaf_name_data.push_back(incoming_label_xr.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (session_interface_name.is_set || is_set(session_interface_name.operation)) leaf_name_data.push_back(session_interface_name.get_name_leafdata());
    if (session_subtype.is_set || is_set(session_subtype.operation)) leaf_name_data.push_back(session_subtype.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath::get_children()
{
    return children;
}

void Bfd::Ipv4MultiHopMultiPaths::Ipv4MultiHopMultiPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "incoming-label-xr")
    {
        incoming_label_xr = value;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "session-interface-name")
    {
        session_interface_name = value;
    }
    if(value_path == "session-subtype")
    {
        session_subtype = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bfd::Ipv4BfDoMplsteHeadSummary::Ipv4BfDoMplsteHeadSummary()
    :
    session_state(std::make_shared<Bfd::Ipv4BfDoMplsteHeadSummary::SessionState>())
{
    session_state->parent = this;
    children["session-state"] = session_state;

    yang_name = "ipv4bf-do-mplste-head-summary"; yang_parent_name = "bfd";
}

Bfd::Ipv4BfDoMplsteHeadSummary::~Ipv4BfDoMplsteHeadSummary()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSummary::has_data() const
{
    return (session_state !=  nullptr && session_state->has_data());
}

bool Bfd::Ipv4BfDoMplsteHeadSummary::has_operation() const
{
    return is_set(operation)
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Bfd::Ipv4BfDoMplsteHeadSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4bf-do-mplste-head-summary";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session-state")
    {
        if(session_state != nullptr)
        {
            children["session-state"] = session_state;
        }
        else
        {
            session_state = std::make_shared<Bfd::Ipv4BfDoMplsteHeadSummary::SessionState>();
            session_state->parent = this;
            children["session-state"] = session_state;
        }
        return children.at("session-state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSummary::get_children()
{
    if(children.find("session-state") == children.end())
    {
        if(session_state != nullptr)
        {
            children["session-state"] = session_state;
        }
    }

    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSummary::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Ipv4BfDoMplsteHeadSummary::SessionState::SessionState()
    :
    down_count{YType::uint32, "down-count"},
    total_count{YType::uint32, "total-count"},
    unknown_count{YType::uint32, "unknown-count"},
    up_count{YType::uint32, "up-count"}
{
    yang_name = "session-state"; yang_parent_name = "ipv4bf-do-mplste-head-summary";
}

Bfd::Ipv4BfDoMplsteHeadSummary::SessionState::~SessionState()
{
}

bool Bfd::Ipv4BfDoMplsteHeadSummary::SessionState::has_data() const
{
    return down_count.is_set
	|| total_count.is_set
	|| unknown_count.is_set
	|| up_count.is_set;
}

bool Bfd::Ipv4BfDoMplsteHeadSummary::SessionState::has_operation() const
{
    return is_set(operation)
	|| is_set(down_count.operation)
	|| is_set(total_count.operation)
	|| is_set(unknown_count.operation)
	|| is_set(up_count.operation);
}

std::string Bfd::Ipv4BfDoMplsteHeadSummary::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";

    return path_buffer.str();

}

EntityPath Bfd::Ipv4BfDoMplsteHeadSummary::SessionState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-oper:bfd/ipv4bf-do-mplste-head-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_count.is_set || is_set(down_count.operation)) leaf_name_data.push_back(down_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (unknown_count.is_set || is_set(unknown_count.operation)) leaf_name_data.push_back(unknown_count.get_name_leafdata());
    if (up_count.is_set || is_set(up_count.operation)) leaf_name_data.push_back(up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::Ipv4BfDoMplsteHeadSummary::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bfd::Ipv4BfDoMplsteHeadSummary::SessionState::get_children()
{
    return children;
}

void Bfd::Ipv4BfDoMplsteHeadSummary::SessionState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down-count")
    {
        down_count = value;
    }
    if(value_path == "total-count")
    {
        total_count = value;
    }
    if(value_path == "unknown-count")
    {
        unknown_count = value;
    }
    if(value_path == "up-count")
    {
        up_count = value;
    }
}


}
}

